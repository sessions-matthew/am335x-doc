<!-- image -->

www.ti.com

## 16.4.3.35 USB1MODE Register (offset = 18E8h) [reset = 100h]

USB1MODE is shown in Figure 16-133 and described in Table 16-143.

## Figure 16-133. USB1MODE Register

| 31        | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|-----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23        | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15        | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | IDDIG    |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-1h   |
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| IDDIG_MUX |          |          | RESERVED |          |          | PHY_TEST | LOOPBACK |
| R/W-0h    |          |          | R/W-0h   |          |          | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-143. USB1MODE Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                     |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED  | R/W    | 0h      |                                                                                                                                                 |
| 8     | IDDIG     | R/W    | 1h      | MGC input value for iddig 0=A type 1=B type                                                                                                     |
| 7     | IDDIG_MUX | R/W    | 0h      | Multiplexer control for IDDIG signal going to the controller. 0 = IDDIG is from PHY1. 1 = IDDIG is from bit8 (IDDIG) of this USB1MODE register. |
| 6-2   | RESERVED  | R/W    | 0h      |                                                                                                                                                 |
| 1     | PHY_TEST  | R/W    | 0h      | PHY test 0 = Normal mode 1 = PHY test mode                                                                                                      |
| 0     | LOOPBACK  | R/W    | 0h      | Loopback test mode 0 = Normal mode 1 = Loopback test mode USB1 Mode Register                                                                    |

## 16.4.4 USB2PHY Registers

Table 16-144 lists the memory-mapped registers for the USB2PHY. All register offset addresses not listed in Table 16-144 should be considered as reserved locations and the register contents should not be modified.

## Table 16-144. USB2PHY Registers

| Offset   | Acronym               | Section           |
|----------|-----------------------|-------------------|
| 0h       | Termination_control   | Section 16.4.4.1  |
| 4h       | RX_CALIB              | Section 16.4.4.2  |
| 8h       | DLLHS_2               | Section 16.4.4.3  |
| Ch       | RX_TEST_2             | Section 16.4.4.4  |
| 14h      | CHRG_DET              | Section 16.4.4.5  |
| 18h      | PWR_CNTL              | Section 16.4.4.6  |
| 1Ch      | UTMI_INTERFACE_CNTL_1 | Section 16.4.4.7  |
| 20h      | UTMI_INTERFACE_CNTL_2 | Section 16.4.4.8  |
| 24h      | BIST                  | Section 16.4.4.9  |
| 28h      | BIST_CRC              | Section 16.4.4.10 |

## Table 16-144. USB2PHY Registers (continued)

| Offset   | Acronym           | Register Name   | Section           |
|----------|-------------------|-----------------|-------------------|
| 2Ch      | CDR_BIST2         |                 | Section 16.4.4.11 |
| 30h      | GPIO              |                 | Section 16.4.4.12 |
| 34h      | DLLHS             |                 | Section 16.4.4.13 |
| 3Ch      | USB2PHYCM_CONFIG  |                 | Section 16.4.4.14 |
| 44h      | AD_INTERFACE_REG1 |                 | Section 16.4.4.15 |
| 48h      | AD_INTERFACE_REG2 |                 | Section 16.4.4.16 |
| 4Ch      | AD_INTERFACE_REG3 |                 | Section 16.4.4.17 |
| 54h      | ANA_CONFIG2       |                 | Section 16.4.4.18 |

<!-- image -->

<!-- image -->

## 16.4.4.1 Termination\_control Register (offset = 0h) [reset = 1000800h]

Register mask: FFFFFFFFh

Termination\_control is shown in Figure 16-134 and described in Table 16-145.

contains bits related to control of terminations in USB2PHY

## Figure 16-134. Termination\_control Register

| 31                 | 30        | 29                 | 28              | 27          | 26              | 25                 | 24                  |
|--------------------|-----------|--------------------|-----------------|-------------|-----------------|--------------------|---------------------|
| RESERVED           | RESERVED  | ALWAYS_UPD ATE     | RTERM_CAL_ DONE | FS_CODE_SEL | FS_CODE_SEL     | FS_CODE_SEL        | FS_CODE_SEL         |
| R/W-0h             | R/W-0h    | R/W-0h             | R-0h            | R/W-1h      | R/W-1h          | R/W-1h             | R/W-1h              |
| 23                 | 22        | 21                 | 20              | 19          | 18              | 17                 | 16                  |
| RESERVED           | RESERVED  | USE_RTERM_ RMX_REG |                 | RTERM_RMX   | RTERM_RMX       | RTERM_RMX          | RTERM_RMX           |
| R/W-0h             | R/W-0h    | R/W-0h             |                 | R/W-0h      | R/W-0h          | R/W-0h             | R/W-0h              |
| 15                 | 14        | 13                 | 12              | 11          | 10              | 9                  | 8                   |
| RTERM_RMX          | RTERM_RMX | HS_CODE_SEL        | HS_CODE_SEL     |             | RTERM_COMP _OUT | RESTART_RT ERM_CAL | DISABLE_TEM P_TRACK |
| R/W-0h             | R/W-0h    | R/W-1h             | R/W-1h          | R-0h        | R-0h            | R/W-0h             | R/W-0h              |
| 7                  | 6         | 5                  | 4               | 3           | 2               | 1                  | 0                   |
| USE_RTERM_ CAL_REG |           |                    |                 | RTERM_CAL   |                 |                    |                     |
| R/W-0h             |           |                    |                 | R/W-0h      |                 |                    |                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-145. Termination\_control Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                        |
|-------|--------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                    |
| 29    | ALWAYS_UPDATE      | R/W    | 0h      | When set to 1 , the calibration code is updated immediately after a code computation without waiting for idle periods.                                                                                             |
| 28    | RTERM_CAL_DONE     | R      | 0h      | Rterm calibration is done. 1st time cal is done this bit gets set and gets reset at a restart cal.Read value is valid only if VDDLDO is on.                                                                        |
| 27-24 | FS_CODE_SEL        | R/W    | 1h      | FS Code selection control                                                                                                                                                                                          |
| 23-22 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                    |
| 21    | USE_RTERM_RMX_REG  | R/W    | 0h      | Override termination resistor trim code with RTERM_RMX from this register                                                                                                                                          |
| 20-14 | RTERM_RMX          | R/W    | 0h      | When read, this field returns the current Termination resistor trim code.Read value is valid only if VDDLDO is on. The value written to this field is used as Termination resistor trim code if bit 21 is set to 1 |
| 13-11 | HS_CODE_SEL        | R/W    | 1h      | HS Code selection control. Each increment increases the termination impedance by ~1.5%. Valid values are 000b 011b.                                                                                                |
| 10    | RTERM_COMP_OUT     | R      | 0h      | Master loop comparator output. Read value is valid only if VDDLDO is on.                                                                                                                                           |
| 9     | RESTART_RTERM_CAL  | R/W    | 0h      | Restart the rterm calibration. The calibration restarts on any toggle 0 to 1 or 1 to 0 on this bit.                                                                                                                |
| 8     | DISABLE_TEMP_TRACK | R/W    | 0h      | Disables the temperature tracking function of the termination calibration                                                                                                                                          |
| 7     | USE_RTERM_CAL_REG  | R/W    | 0h      | when '1' the rterm cal code is overridden by values in RTERM_CAL                                                                                                                                                   |
| 6-0   | RTERM_CAL          | R/W    | 0h      | When read this field returns the current rterm calibration code. Read value is valid only if VDDLDO is on. The value written to this field is used as rterm calibration code if the bit USE_RTERM_CAL_REG is 1.    |

Universal Serial Bus (USB)

## 16.4.4.2 RX\_CALIB Register (offset = 4h) [reset = 0h]

Register mask: FFFFFFFFh

RX\_CALIB is shown in Figure 16-135 and described in Table 16-146.

Contains bits related to RX calibration

Figure 16-135. RX\_CALIB Register

| 31                | 30               | 29               | 28               | 27               | 26               | 25               | 24               |
|-------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| RESTART_HS RX_CAL | USE_HS_OFF_ REG  | HS_OFF_CODE      | HS_OFF_CODE      | HS_OFF_CODE      | HS_OFF_CODE      | HS_OFF_CODE      | HS_OFF_CODE      |
| R/W-0h            | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 23                | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
| HSRX_COMP_ OUT    | HSRX_CAL_D ONE   | USE_SQ_OFF _DAC1 | SQ_OFF_CODE_DAC1 | SQ_OFF_CODE_DAC1 | SQ_OFF_CODE_DAC1 | SQ_OFF_CODE_DAC1 | SQ_OFF_CODE_DAC1 |
| R-0h              | R-0h             | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 15                | 14               | 13               | 12               | 11               | 10               | 9                | 8                |
| SQ_OFF_COD E_DAC1 | USE_SQ_OFF _DAC2 | SQ_OFF_CODE_DAC2 | SQ_OFF_CODE_DAC2 | SQ_OFF_CODE_DAC2 | SQ_OFF_CODE_DAC2 | SQ_OFF_CODE_DAC2 | USE_SQ_OFF _DAC3 |
| R/W-0h            | R/W-0h           | R/W-0h R/W-0h    | R/W-0h R/W-0h    | R/W-0h R/W-0h    | R/W-0h R/W-0h    | R/W-0h R/W-0h    | R/W-0h R/W-0h    |
| 7                 | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| SQ_OFF_CODE_DAC3  | SQ_OFF_CODE_DAC3 | SQ_OFF_CODE_DAC3 | SQ_OFF_CODE_DAC3 | SQ_OFF_CODE_DAC3 | SQ_COMP_OU T     | SQ_CAL_DON E     | RESTART_SQ _CAL  |
| R/W-0h            | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           | R-0h             | R-0h             | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-146. RX\_CALIB Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                          |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESTART_HSRX_CAL | R/W    | 0h      | Restart the HSRX calibration state machine when this bit goes from 0 to 1.                                                                           |
| 30    | USE_HS_OFF_REG   | R/W    | 0h      | Override HS offset correction with HS_OFF_CODE when set to '1'                                                                                       |
| 29-24 | HS_OFF_CODE      | R/W    | 0h      | HS offset code, this code is forced when bit 30 is 1 . Code is updated from calibration logic when bit 30 = 0.                                       |
| 23    | HSRX_COMP_OUT    | R      | 0h      | The output of the HSRX comparator.Read value is valid only if VDDLDO is on.                                                                          |
| 22    | HSRX_CAL_DONE    | R      | 0h      | Signal that indicates that the HSRX calibration is done. This gets reset at every restart.Read value is valid only if VDDLDO is on.                  |
| 21    | USE_SQ_OFF_DAC1  | R/W    | 0h      | Override Squelch offset DAC1 code when '1'                                                                                                           |
| 20-15 | SQ_OFF_CODE_DAC1 | R/W    | 0h      | When read returns current Sq offset code for DAC1, if VDDLDO is on. When written this is used as Sq offset code for DAC1 when USE_SQ_OFF_DAC 1 = '1' |
| 14    | USE_SQ_OFF_DAC2  | R/W    | 0h      | Override Squelch offset DAC2 code when '1'                                                                                                           |
| 13-9  | SQ_OFF_CODE_DAC2 | R/W    | 0h      | When read returns current Sq offset code for DAC2, if VDDLDO is on. When written this is used as Sq offset code for DAC2 when USE_SQ_OFF_DAC 2 = '1' |
| 8     | USE_SQ_OFF_DAC3  | R/W    | 0h      | Override Squelch offset DAC3 code when '1'                                                                                                           |
| 7-3   | SQ_OFF_CODE_DAC3 | R/W    | 0h      | When read returns current Sq offset code for DAC3, if VDDLDO is on. When written this is used as Sq offset code for DAC3 when USE_SQ_OFF_DAC 3 = '1' |

<!-- image -->

<!-- image -->

## Table 16-146. RX\_CALIB Register Field Descriptions (continued)

|   Bit | Field          | Type   | Reset   | Description                                                                                                                                 |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | SQ_COMP_OUT    | R      | 0h      | Sq comp output.Read value is valid only if VDDLDO is on.                                                                                    |
|     1 | SQ_CAL_DONE    | R      | 0h      | Sq calibration is done when this bit = 1. see RESTART_SQ_CAL for more description.Read value is valid only if VDDLDO is on.                 |
|     0 | RESTART_SQ_CAL | R/W    | 0h      | the squelch calibration continuously goes through restart cycles when this bit is 1 . i.e. restarts waits for done then restarts again etc. |

## 16.4.4.3 DLLHS\_2 Register (offset = 8h) [reset = 1Fh]

Register mask: FFFFFFFFh

DLLHS\_2 is shown in Figure 16-136 and described in Table 16-147.

the 2nd DLLHS control register. bits 4:0 are unrelated to the DLLHS and are linestate filter settings

## Figure 16-136. DLLHS\_2 Register

| 31               | 30               | 29               | 28                     | 27                      | 26                      | 25                      | 24                      |
|------------------|------------------|------------------|------------------------|-------------------------|-------------------------|-------------------------|-------------------------|
| DLLHS_CNTRL_LDO  | DLLHS_CNTRL_LDO  | DLLHS_CNTRL_LDO  | DLLHS_CNTRL_LDO        | DLLHS_CNTRL_LDO         | DLLHS_CNTRL_LDO         | DLLHS_CNTRL_LDO         | DLLHS_CNTRL_LDO         |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h                 | R/W-0h                  | R/W-0h                  | R/W-0h                  | R/W-0h                  |
| 23               | 22               | 21               | 20                     | 19                      | 18                      | 17                      | 16                      |
| DLLHS_STATUS_LDO | DLLHS_STATUS_LDO | DLLHS_STATUS_LDO | DLLHS_STATUS_LDO       | DLLHS_STATUS_LDO        | DLLHS_STATUS_LDO        | DLLHS_STATUS_LDO        | DLLHS_STATUS_LDO        |
| R-0h             | R-0h             | R-0h             | R-0h                   | R-0h                    | R-0h                    | R-0h                    | R-0h                    |
| 15               | 14               | 13               | 12                     | 11                      | 10                      | 9                       | 8                       |
| RESERVED         | RESERVED         | RESERVED         | RESERVED               | RESERVED                | RESERVED                | RESERVED                | RESERVED                |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h                 | R/W-0h                  | R/W-0h                  | R/W-0h                  | R/W-0h                  |
| 7                | 6                | 5                | 4                      | 3                       | 2                       | 1                       | 0                       |
| RESERVED         | RESERVED         | RESERVED         | LINESTATE_D EBOUNCE_EN | LINESTATE_DEBOUNCE_CNTL | LINESTATE_DEBOUNCE_CNTL | LINESTATE_DEBOUNCE_CNTL | LINESTATE_DEBOUNCE_CNTL |
| R/W-0h           | R/W-0h           | R/W-0h           | R/W-1h                 | R/W-Fh                  | R/W-Fh                  | R/W-Fh                  | R/W-Fh                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-147. DLLHS\_2 Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                      |
|-------|--------------------------|--------|---------|--------------------------------------------------------------------------------------------------|
| 31-24 | DLLHS_CNTRL_LDO          | R/W    | 0h      | See DFT spec for details                                                                         |
| 23-16 | DLLHS_STATUS_LDO         | R      | 0h      | See DFT spec for details                                                                         |
| 15-5  | RESERVED                 | R/W    | 0h      |                                                                                                  |
| 4     | LINESTATE_DEBOUNCE _EN   | R/W    | 1h      | Enables the linestate debounce filter                                                            |
| 3-0   | LINESTATE_DEBOUNCE _CNTL | R/W    | Fh      | Used for control of the linestate debounce filter when going from syncronous to async linestate. |

<!-- image -->

<!-- image -->

## 16.4.4.4 RX\_TEST\_2 Register (offset = Ch) [reset = 0h]

Register mask: FFFFFFFFh

RX\_TEST\_2 is shown in Figure 16-137 and described in Table 16-148.

the 2nd receiver test register

## Figure 16-137. RX\_TEST\_2 Register

| 31            | 30                | 29                  | 28            | 27             | 26            | 25            | 24            |
|---------------|-------------------|---------------------|---------------|----------------|---------------|---------------|---------------|
| HSOSREVERS AL | HSOSBITINVE RSION | PHYCLKOUTIN VERSION | RXPIDERR      | USEINTDATAO UT |               | INTDATAOUTREG |               |
| R/W-0h        | R/W-0h            | R/W-0h              | R-0h          | R/W-0h         |               | R/W-0h        |               |
| 23            | 22                | 21                  | 20            | 19             | 18            | 17            | 16            |
| INTDATAOUTREG | INTDATAOUTREG     | INTDATAOUTREG       | INTDATAOUTREG | INTDATAOUTREG  | INTDATAOUTREG | INTDATAOUTREG | INTDATAOUTREG |
| R/W-0h        | R/W-0h            | R/W-0h              | R/W-0h        | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h        |
| 15            | 14                | 13                  | 12            | 11             | 10            | 9             | 8             |
| INTDATAOUTREG | INTDATAOUTREG     | INTDATAOUTREG       | INTDATAOUTREG | INTDATAOUTREG  | RESERVED      | RESERVED      | RESERVED      |
| R/W-0h        | R/W-0h            | R/W-0h              | R/W-0h        | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h        |
| 7             | 6                 | 5                   | 4             | 3              | 2             | 1             | 0             |
| CDR_TESTOUT   | CDR_TESTOUT       | CDR_TESTOUT         | CDR_TESTOUT   | CDR_TESTOUT    | CDR_TESTOUT   | CDR_TESTOUT   | CDR_TESTOUT   |
| R-0h          | R-0h              | R-0h                | R-0h          | R-0h           | R-0h          | R-0h          | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-148. RX\_TEST\_2 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                       |
|-------|--------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | HSOSREVERSAL       | R/W    | 0h      | Swaps the dataout from HSOS                                                                                                                       |
| 30    | HSOSBITINVERSION   | R/W    | 0h      | Inverts the HSOS bits                                                                                                                             |
| 29    | PHYCLKOUTINVERSION | R/W    | 0h      | This inverts the phase for the PHYCLKOUT                                                                                                          |
| 28    | RXPIDERR           | R      | 0h      | Flags if the RX data packet has PID error. NOT IMPLEMENTED YET                                                                                    |
| 27    | USEINTDATAOUT      | R/W    | 0h      | This will bypass the analog and will send data packet to controller incase of receiver (Faking the receive data). data used will be INTDATAOUTREG |
| 26-11 | INTDATAOUTREG      | R/W    | 0h      | This register will be loaded through OCP and this data will be given to the controller if USEINTDATAOUT is set to 1                               |
| 10-8  | RESERVED           | R/W    | 0h      |                                                                                                                                                   |
| 7-0   | CDR_TESTOUT        | R      | 0h      | CDR debug bits. Read value is valid only if VDDLDO is on. see DFT spec for details                                                                |

Universal Serial Bus (USB)

## 16.4.4.5 CHRG\_DET Register (offset = 14h) [reset = 0h]

Register mask: FFFFFFFFh

CHRG\_DET is shown in Figure 16-138 and described in Table 16-149.

this is the charger detect register. this register is not used in the dead battery case.

Figure 16-138. CHRG\_DET Register

| 31             | 30                | 29                | 28            | 27            | 26            | 25               | 24               |
|----------------|-------------------|-------------------|---------------|---------------|---------------|------------------|------------------|
| RESERVED       | RESERVED          | USE_CHG_DE T_REG  | DIS_CHG_DET   | SRC_ON_DM     | SINK_ON_DP    | CHG_DET_EX T_CTL | RESTART_CH G_DET |
| R/W-0h         | R/W-0h            | R/W-0h            | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h           | R/W-0h           |
| 23             | 22                | 21                | 20            | 19            | 18            | 17               | 16               |
| CHG_DET_DO NE  | CHG_DETECT ED     | DATA_DET          | RESERVED      | RESERVED      | CHG_ISINK_E N | CHG_VSRC_E N     | COMP_DP          |
| R-0h           | R-0h              | R-0h              | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h           | R-0h             |
| 15             | 14                | 13                | 12            | 11            | 10            | 9                | 8                |
| COMP_DM        | CHG_DET_OSC_CNTRL | CHG_DET_OSC_CNTRL | CHG_DET_TIMER | CHG_DET_TIMER | CHG_DET_TIMER | CHG_DET_TIMER    | CHG_DET_TIMER    |
| R-0h           | R/W-0h            | R/W-0h            | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h           | R/W-0h           |
| 7              | 6                 | 5                 | 4             | 3             | 2             | 1                | 0                |
| CHG_DET_TIM ER | RESERVED          | RESERVED          | CHG_DET_ICTRL | CHG_DET_ICTRL | CHG_DET_VCTRL | CHG_DET_VCTRL    | FOR_CE           |
| R/W-0h         | R/W-0h            | R/W-0h            | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-149. CHRG\_DET Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                            |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED        | R/W    | 0h      |                                                                                                                                                                        |
| 29    | USE_CHG_DET_REG | R/W    | 0h      | Use bits 28-24 and 18-17 from this register                                                                                                                            |
| 28    | DIS_CHG_DET     | R/W    | 0h      | When read, returns current value of charger detect input. When USE_CHG_DET_REG = 1 , the value written to this field overrides the corresponding charger detect input. |
| 27    | SRC_ON_DM       | R/W    | 0h      | When read, returns current value of charger detect input. When USE_CHG_DET_REG = 1 , the value written to this field overrides the corresponding charger detect input. |
| 26    | SINK_ON_DP      | R/W    | 0h      | When read, returns current value of charger detect input. When USE_CHG_DET_REG = 1 , the value written to this field overrides the corresponding charger detect input. |
| 25    | CHG_DET_EXT_CTL | R/W    | 0h      | When read, returns current value of charger detect input. When USE_CHG_DET_REG = 1 , the value written to this field overrides the corresponding charger detect input. |
| 24    | RESTART_CHG_DET | R/W    | 0h      | Restart the charger detection protocol when this goes from 0 to 1                                                                                                      |
| 23    | CHG_DET_DONE    | R      | 0h      | Charger detect protocol has completed                                                                                                                                  |
| 22    | CHG_DETECTED    | R      | 0h      | Same signal as CE                                                                                                                                                      |
| 21    | DATA_DET        | R      | 0h      | Output of the data det comparator                                                                                                                                      |
| 20-19 | RESERVED        | R/W    | 0h      |                                                                                                                                                                        |
| 18    | CHG_ISINK_EN    | R/W    | 0h      | When read, returns current value of charger detect input. When USE_CHG_DET_REG = 1 , the value written to this field overrides the corresponding charger detect input. |
| 17    | CHG_VSRC_EN     | R/W    | 0h      | When read, returns current value of charger detect input. When USE_CHG_DET_REG = 1 , the value written to this field overrides the corresponding charger detect input. |
| 16    | COMP_DP         | R      | 0h      | Comparator on the DP line value                                                                                                                                        |
| 15    | COMP_DM         | R      | 0h      | Comparator on the DM line value                                                                                                                                        |

<!-- image -->

<!-- image -->

## Table 16-149. CHRG\_DET Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                          |
|-------|-------------------|--------|---------|----------------------------------------------------------------------|
| 14-13 | CHG_DET_OSC_CNTRL | R/W    | 0h      | Charger detect osc control                                           |
| 12-7  | CHG_DET_TIMER     | R/W    | 0h      | Charger detect timer control. See charger detect section for details |
| 6-5   | RESERVED          | R/W    | 0h      |                                                                      |
| 4-3   | CHG_DET_ICTRL     | R/W    | 0h      | Charger detect current control                                       |
| 2-1   | CHG_DET_VCTRL     | R/W    | 0h      | Charger detect voltage buffer control                                |
| 0     | FOR_CE            | R/W    | 0h      | Force CE = 1 when this bit is set                                    |

## 16.4.4.6 PWR\_CNTL Register (offset = 18h) [reset = 400000h]

Register mask: FFFFFFFFh

PWR\_CNTL is shown in Figure 16-139 and described in Table 16-150.

has all the power control bits

Figure 16-139. PWR\_CNTL Register

| 31             | 30                | 29                        | 28                     | 27                | 26            | 25            | 24            |
|----------------|-------------------|---------------------------|------------------------|-------------------|---------------|---------------|---------------|
| RESETDONET CLK | RESET_DONE _VMAIN | VMAIN_GLOB AL_RESET_D ONE | RESETDONEM CLK         | RESETDONE_ CHGDET | LDOPWRCOUNTER | LDOPWRCOUNTER | LDOPWRCOUNTER |
| R-0h           | R-0h              | R-0h                      | R-0h                   | R-0h              |               | R/W-400h      |               |
| 23             | 22                | 21                        | 20                     | 19                | 18            | 17            | 16            |
| LDOPWRCOUNTER  | LDOPWRCOUNTER     | LDOPWRCOUNTER             | LDOPWRCOUNTER          | LDOPWRCOUNTER     | LDOPWRCOUNTER | LDOPWRCOUNTER | LDOPWRCOUNTER |
| R/W-400h       | R/W-400h          | R/W-400h                  | R/W-400h               | R/W-400h          | R/W-400h      | R/W-400h      | R/W-400h      |
| 15             | 14                | 13                        | 12                     | 11                | 10            | 9             | 8             |
|                | LDOPWRCOUNTER     | LDOPWRCOUNTER             |                        | FORCEPLLSL OWCLK  | FORCELDOON    | FORCEPLLON    | RESERVED      |
| R/W-400h       | R/W-400h          | R/W-400h                  |                        | R/W-0h            | R/W-0h        | R/W-0h        | R/W-0h        |
| 7              | 6                 | 5                         | 4                      | 3                 | 2             | 1             | 0             |
| RESERVED       | PLLLOCK           | USEPLLLOCK                | USE_DATAPO LARITYN_REG | DATAPOLARIT YN    | USE_PD_REG    | PD            | RESERVED      |
| R/W-0h         | R-0h              | R/W-0h                    | R/W-0h                 | R/W-0h            | R/W-0h        | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-150. PWR\_CNTL Register Field Descriptions

| Bit   | Field                    | Type   | Reset   | Description                                                                                                                                                                             |
|-------|--------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RESETDONETCLK            | R      | 0h      | Goes high when the RESET is synchronized to TCLK                                                                                                                                        |
| 30    | RESET_DONE_VMAIN         | R      | 0h      | Goes high when LDO domain is up and PLL LOCK is available and utmi_reset is de-asserted.                                                                                                |
| 29    | VMAIN_GLOBAL_RESET _DONE | R      | 0h      | Goes high when LDO domain is up and PLL LOCK is available.                                                                                                                              |
| 28    | RESETDONEMCLK            | R      | 0h      | Goes high when the RESET is synchronized to MCLK                                                                                                                                        |
| 27    | RESETDONE_CHGDET         | R      | 0h      | Goes high when the RESET is synchronized to charger detect oscillator clock domain                                                                                                      |
| 26-12 | LDOPWRCOUNTER            | R/W    | 400h    | This is the value of the counter used for LDO power up. RESET to default.                                                                                                               |
| 11    | FORCEPLLSLOWCLK          | R/W    | 0h      | Forces the PLL to the slow clk mode                                                                                                                                                     |
| 10    | FORCELDOON               | R/W    | 0h      | Forces the LDO to be ON.                                                                                                                                                                |
| 9     | FORCEPLLON               | R/W    | 0h      | Forces the PLL to be ON.                                                                                                                                                                |
| 8-7   | RESERVED                 | R/W    | 0h      |                                                                                                                                                                                         |
| 6     | PLLLOCK                  | R      | 0h      | Lock signal from the PLL                                                                                                                                                                |
| 5     | USEPLLLOCK               | R/W    | 0h      | This signal is used to indicate to the Phy, not to do any clock related activity until PLLLOCK = 1 .This is not the default option.0 do not use PLLLOCK. 1 use PLLLOCK as a clock gate. |
| 4     | USE_DATAPOLARITYN_ REG   | R/W    | 0h      | 1 -> use bit 3 as override for the DATAPOLARITYN signal.                                                                                                                                |
| 3     | DATAPOLARITYN            | R/W    | 0h      | Override value of datapolarityn                                                                                                                                                         |
| 2     | USE_PD_REG               | R/W    | 0h      | Use bit 1 from this register as PD override when set to '1'                                                                                                                             |
| 1     | PD                       | R/W    | 0h      | Override value for PD                                                                                                                                                                   |
| 0     | RESERVED                 | R/W    | 0h      |                                                                                                                                                                                         |

<!-- image -->

<!-- image -->

## 16.4.4.7 UTMI\_INTERFACE\_CNTL\_1 Register (offset = 1Ch) [reset = 0h]

Register mask: FFFFFFFFh

UTMI\_INTERFACE\_CNTL\_1 is shown in Figure 16-140 and described in Table 16-151. register to override UTMI interface control pins.

Figure 16-140. UTMI\_INTERFACE\_CNTL\_1 Register

| 31              | 30         | 29               | 28            | 27            | 26             | 25         | 24                |
|-----------------|------------|------------------|---------------|---------------|----------------|------------|-------------------|
| USEUTMIDAT AREG | UTMIDATAIN | UTMIDATAIN       | UTMIDATAIN    | UTMIDATAIN    | UTMIDATAIN     | UTMIDATAIN | UTMIDATAIN        |
| R/W-0h          | R/W-0h     | R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h         | R/W-0h     | R/W-0h            |
| 23              | 22         | 21               | 20            | 19            | 18             | 17         | 16                |
| UTMIDATAIN      | UTMIDATAIN | UTMIDATAIN       | UTMIDATAIN    | UTMIDATAIN    | UTMIDATAIN     | UTMIDATAIN | UTMIDATAIN        |
| R/W-0h          | R/W-0h     | R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h         | R/W-0h     | R/W-0h            |
| 15              | 14         | 13               | 12            | 11            | 10             | 9          | 8                 |
| UTMIDATAIN      | RESERVED   | USEDATABUS REG   | DATABUS16O R8 | USEOPMODE REG | OPMODE         | OPMODE     | OVERRIDESU SRESET |
| R/W-0h          | R/W-0h     | R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h         | R/W-0h     | R/W-0h            |
| 7               | 6          | 5                | 4             | 3             | 2              | 1          | 0                 |
| SUSPENDM        | UTMIRESET  | OVERRIDEXC VRSEL | XCVRSEL       | XCVRSEL       | USETXVALIDR EG | TXVALID    | TXVALIDH          |
| R/W-0h          | R/W-0h     | R/W-0h           | R/W-0h        | R/W-0h        | R/W-0h         | R/W-0h     | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-151. UTMI\_INTERFACE\_CNTL\_1 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                   |
|-------|------------------|--------|---------|---------------------------------------------------------------|
| 31    | USEUTMIDATAREG   | R/W    | 0h      | Use datain from UTMI interface register                       |
| 30-15 | UTMIDATAIN       | R/W    | 0h      | Override value for the UTMIDATAIN                             |
| 14    | RESERVED         | R/W    | 0h      |                                                               |
| 13    | USEDATABUSREG    | R/W    | 0h      | When set to 1 use bit 12 from register instead of interface   |
| 12    | DATABUS16OR8     | R/W    | 0h      | Override value for UTMI signal DATABUS16OR8                   |
| 11    | USEOPMODEREG     | R/W    | 0h      | When set to 1 use bit 10-9 from register instead of interface |
| 10-9  | OPMODE           | R/W    | 0h      | Override value for UTMI signal OPMODE [1:0]                   |
| 8     | OVERRIDESUSRESET | R/W    | 0h      | Override the suspend and reset values. Use bits 6 and 7       |
| 7     | SUSPENDM         | R/W    | 0h      | Override value for UTMI signal SUSPENDM                       |
| 6     | UTMIRESET        | R/W    | 0h      | Override value for UTMI signal UTMIRESET                      |
| 5     | OVERRIDEXCVRSEL  | R/W    | 0h      | When set to 1 use bit 4-3 from register instead of interface  |
| 4-3   | XCVRSEL          | R/W    | 0h      | Override value for UTMI signal XCVRSEL [1:0]                  |
| 2     | USETXVALIDREG    | R/W    | 0h      | When set to 1 use bit 1-0 from register instead of interface  |
| 1     | TXVALID          | R/W    | 0h      | Override value for UTMI signal TXVALID                        |
| 0     | TXVALIDH         | R/W    | 0h      | Override value for UTMI signal TXVALIDH                       |

Universal Serial Bus (USB)

<!-- image -->

## 16.4.4.8 UTMI\_INTERFACE\_CNTL\_2 Register (offset = 20h) [reset = 0h]

Register mask: FFFFFFFFh

UTMI\_INTERFACE\_CNTL\_2 is shown in Figure 16-141 and described in Table 16-152.

UTMI interface override and observe register 2

Figure 16-141. UTMI\_INTERFACE\_CNTL\_2 Register

| 31       | 30              | 29          | 28              | 27              | 26                | 25                 | 24                              |
|----------|-----------------|-------------|-----------------|-----------------|-------------------|--------------------|---------------------------------|
| RXRCV    | RXDP            | RXDM        | HOSTDISCON NECT | LINESTATE       | LINESTATE         | RXVALID            | RXVALIDH                        |
| R-0h     | R-0h            | R-0h        | R-0h            | R-0h            | R-0h              | R-0h               | R-0h                            |
| 23       | 22              | 21          | 20              | 19              | 18                | 17                 | 16                              |
| RXACTIVE | RXERROR         | TXREADY     | UTMIRESETD ONE  | USEBITSTUFF REG | TXBITSTUFFE NABLE | TXBITSTUFFE NABLEH | USETERMCON TROLREG              |
| R-0h     | R-0h            | R-0h        | R-0h            | R/W-0h          | R/W-0h            | R/W-0h             | R/W-0h                          |
| 15       | 14              | 13          | 12              | 11              | 10                | 9                  | 8                               |
| TERMSEL  | DPPULLDOWN      | DMPULLDOW N |                 | RESERVED        |                   | USEREGSERI ALMODE  | TXSE0                           |
| R/W-0h   | R/W-0h          | R/W-0h      |                 | R/W-0h          |                   | R/W-0h             | R/W-0h                          |
| 7        | 6               | 5           | 4               | 3               | 2                 | 1                  | 0                               |
| TXDAT    | FSLSSERIALM ODE | TXENABLEN   |                 | RESERVED        |                   |                    | sig_bypass_sus pendmpulse_in cr |
| R/W-0h   | R/W-0h          | R/W-0h      |                 | R/W-0h          |                   |                    | R/W-0h                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-152. UTMI\_INTERFACE\_CNTL\_2 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                             |
|-------|--------------------|--------|---------|---------------------------------------------------------------------------------------------------------|
| 31    | RXRCV              | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.Read value is valid only if VDDLDO is on. |
| 30    | RXDP               | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 29    | RXDM               | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 28    | HOSTDISCONNECT     | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 27-26 | LINESTATE          | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 25    | RXVALID            | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 24    | RXVALIDH           | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 23    | RXACTIVE           | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 22    | RXERROR            | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 21    | TXREADY            | R      | 0h      | Read for UTMI signal.Read value is valid only if VDDLDO is on.                                          |
| 20    | UTMIRESETDONE      | R      | 0h      | Read for UTMIRESETDONE signal                                                                           |
| 19    | USEBITSTUFFREG     | R/W    | 0h      | When set to 1 use bits 18-17 from register instead of interface                                         |
| 18    | TXBITSTUFFENABLE   | R/W    | 0h      | Override value for signal TXBITSTUFFENABLE                                                              |
| 17    | TXBITSTUFFENABLEH  | R/W    | 0h      | Override value for pin TXBITSTUFFENABLE                                                                 |
| 16    | USETERMCONTROLRE G | R/W    | 0h      | -When set to 1 use bits 15-13 from register instead of interface                                        |
| 15    | TERMSEL            | R/W    | 0h      | Override value for signal TERMSEL                                                                       |
| 14    | DPPULLDOWN         | R/W    | 0h      | Override value for signal DPPULLDOWN                                                                    |
| 13    | DMPULLDOWN         | R/W    | 0h      | Override value for signal DMPULLDOWN                                                                    |
| 12-10 | RESERVED           | R/W    | 0h      |                                                                                                         |

<!-- image -->

## Table 16-152. UTMI\_INTERFACE\_CNTL\_2 Register Field Descriptions (continued)

| Bit   | Field                          | Type   | Reset   | Description                                                                                                                                                                                                                                                |
|-------|--------------------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | USEREGSERIALMODE               | R/W    | 0h      | When set to 1 use bits 8-5 from register instead of interface                                                                                                                                                                                              |
| 8     | TXSE0                          | R/W    | 0h      | Override value for signal TXSE0                                                                                                                                                                                                                            |
| 7     | TXDAT                          | R/W    | 0h      | Override value for signal TXDAT                                                                                                                                                                                                                            |
| 6     | FSLSSERIALMODE                 | R/W    | 0h      | Override value for signal FSLSSERIALMODE                                                                                                                                                                                                                   |
| 5     | TXENABLEN                      | R/W    | 0h      | Override value for signal TXENABLEN                                                                                                                                                                                                                        |
| 4-1   | RESERVED                       | R/W    | 0h      |                                                                                                                                                                                                                                                            |
| 0     | sig_bypass_suspendmpul se_incr | R/W    | 0h      | If the suspend signal is asserted for very short-time, it is pulse extended so that all the sampling logic samples it reliably. This pulse extention can be bypassed by writin a '1' to this bit ( so that IP's behaviour is similar to previous versions) |

Universal Serial Bus (USB)

## 16.4.4.9 BIST Register (offset = 24h) [reset = 0h]

Register mask: FFFFFFFFh

BIST is shown in Figure 16-142 and described in Table 16-153.

COntains bits related to the built in self test of the phy

## Figure 16-142. BIST Register

| 31         | 30              | 29                | 28              | 27              | 26                    | 25                | 24                  |
|------------|-----------------|-------------------|-----------------|-----------------|-----------------------|-------------------|---------------------|
| BIST_START | REDUCED_SW ING  | BIST_CRC_CA LC_EN | BIST_PKT_LENGTH | BIST_PKT_LENGTH | BIST_PKT_LENGTH       | BIST_PKT_LENGTH   | BIST_PKT_LENGTH     |
| R/W-0h     | R/W-0h          | R/W-0h            | R/W-0h          | R/W-0h          | R/W-0h                | R/W-0h            | R/W-0h              |
| 23         | 22              | 21                | 20              | 19              | 18                    | 17                | 16                  |
|            | BIST_PKT_LENGTH | BIST_PKT_LENGTH   |                 | LOOPBACK_E N    | BIST_OP_PHASE_SEL     | BIST_OP_PHASE_SEL | BIST_OP_PHASE_SEL   |
| R/W-0h     | R/W-0h          | R/W-0h            | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h         | R/W-0h R/W-0h     | R/W-0h R/W-0h       |
| 15         | 14              | 13                | 12              | 11              | 10                    | 9                 | 8                   |
| SWEEP_EN   | SWEEP_MODE      | SWEEP_MODE        |                 | BIST_PASS       | BIST_BUSY             | RESERVED          | RESERVED            |
| R/W-0h     | R/W-0h          | R/W-0h            |                 | R-0h            | R-0h                  | R/W-0h            | R/W-0h              |
| 7          | 6               | 5                 | 4               | 3               | 2                     | 1                 | 0                   |
| RESERVED   | OP_CODE         | OP_CODE           | RX_TEST_MO DE   | RESERVED        | INTER_PKT_D ELAY_TEST | HS_ALL_ONES _TEST | USE_BIST_TX _PHASES |
| R/W-0h     | R/W-0h          | R/W-0h            | R/W-0h          | R/W-0h          | R/W-0h                | R/W-0h            | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-153. BIST Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                   |
|-------|-----------------------|--------|---------|-------------------------------------------------------------------------------|
| 31    | BIST_START            | R/W    | 0h      | When set to 1 the BIST mode is started.                                       |
| 30    | REDUCED_SWING         | R/W    | 0h      | When 1 the TX swing is reduced in BIST mode                                   |
| 29    | BIST_CRC_CALC_EN      | R/W    | 0h      | Enables CRC calculation during BIST when set to 1                             |
| 28-20 | BIST_PKT_LENGTH       | R/W    | 0h      | Address for which BIST to select                                              |
| 19    | LOOPBACK_EN           | R/W    | 0h      | Enables the loopback mode                                                     |
| 18-16 | BIST_OP_PHASE_SEL     | R/W    | 0h      | Selects which phase to use for data transmission during BIST                  |
| 15    | SWEEP_EN              | R/W    | 0h      | Enables freq sweep on CDR                                                     |
| 14-12 | SWEEP_MODE            | R/W    | 0h      | Selects the freq sweep mode. Details in DFT spec.                             |
| 11    | BIST_PASS             | R      | 0h      | Indicates that the BIST has passed. Read value is valid only if VDDLDO is on. |
| 10    | BIST_BUSY             | R      | 0h      | Indicates that BIST is running. Read value is valid only if VDDLDO is on.     |
| 9-7   | RESERVED              | R/W    | 0h      |                                                                               |
| 6-5   | OP_CODE               | R/W    | 0h      | Defined in DFT spec                                                           |
| 4     | RX_TEST_MODE          | R/W    | 0h      | Defined in DFT spec                                                           |
| 3     | RESERVED              | R/W    | 0h      |                                                                               |
| 2     | INTER_PKT_DELAY_TES T | R/W    | 0h      | Defined in DFT spec                                                           |
| 1     | HS_ALL_ONES_TEST      | R/W    | 0h      | Defined in DFT spec                                                           |
| 0     | USE_BIST_TX_PHASES    | R/W    | 0h      | When set to 1 bits 18-16 are activated for choosing the transmitting phase.   |

<!-- image -->

<!-- image -->

## 16.4.4.10 BIST\_CRC Register (offset = 28h) [reset = 0h]

Register mask: FFFFFFFFh

BIST\_CRC is shown in Figure 16-143 and described in Table 16-154.

the CRC code for BIST test

## Figure 16-143. BIST\_CRC Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 BIST_CRC   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-154. BIST\_CRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                  |
|-------|----------|--------|---------|------------------------------|
| 31-0  | BIST_CRC | R/W    | 0h      | The CRC value from the BIST. |

Universal Serial Bus (USB)

## 16.4.4.11 CDR\_BIST2 Register (offset = 2Ch) [reset = 0h]

Register mask: FFFFFFFFh

CDR\_BIST2 is shown in Figure 16-144 and described in Table 16-155.

clock data recovery register and BIST register 2

## Figure 16-144. CDR\_BIST2 Register

| 31               | 30               | 29              | 28                  | 27              | 26                       | 25              | 24                |
|------------------|------------------|-----------------|---------------------|-----------------|--------------------------|-----------------|-------------------|
| CDR_EXE_EN       | CDR_EXE_MODE     | CDR_EXE_MODE    | CDR_EXE_MODE        | NUM_DECISIONS   | NUM_DECISIONS            | NUM_DECISIONS   | CDR_CHOSEN _PHASE |
| R/W-0h           | R/W-0h           | R/W-0h          | R/W-0h              | R/W-0h          | R/W-0h                   | R/W-0h          | R-0h              |
| 23               | 22               | 21              | 20                  | 19              | 18                       | 17              | 16                |
| CDR_CHOSEN_PHASE | CDR_CHOSEN_PHASE | FORCE_CDR_PHASE | FORCE_CDR_PHASE     | FORCE_CDR_PHASE | DISABLE_CDR _FREQ_TRAC K | CDR_CONFIGURE   | CDR_CONFIGURE     |
| R-0h             | R-0h             | R-0h            | R-0h                | R-0h            | R-0h                     | R-0h            | R-0h              |
| 15               | 14               | 13              | 12                  | 11              | 10                       | 9               | 8                 |
| CDR_CONFIGURE    | CDR_CONFIGURE    | CDR_CONFIGURE   | FORCE_CDR_ PHASE_EN | Bist_start_addr | Bist_start_addr          | Bist_start_addr | Bist_start_addr   |
| R-0h             | R-0h             | R-0h            | R-0h                | R/W-0h          | R/W-0h                   | R/W-0h          | R/W-0h            |
| 7                | 6                | 5               | 4                   | 3               | 2                        | 1               | 0                 |
| Bist_start_addr  | Bist_start_addr  | Bist_end_addr   | Bist_end_addr       | Bist_end_addr   | Bist_end_addr            | Bist_end_addr   | Bist_end_addr     |
| R/W-0h           | R/W-0h           | R/W-0h          | R/W-0h              | R/W-0h          | R/W-0h                   | R/W-0h          | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-155. CDR\_BIST2 Register Field Descriptions

| Bit   | Field                   | Type   | Reset   | Description                                          |
|-------|-------------------------|--------|---------|------------------------------------------------------|
| 31    | CDR_EXE_EN              | R/W    | 0h      | CDR debug bits                                       |
| 30-28 | CDR_EXE_MODE            | R/W    | 0h      | CDR debug bits                                       |
| 27-25 | NUM_DECISIONS           | R/W    | 0h      | CDR debug bits                                       |
| 24-22 | CDR_CHOSEN_PHASE        | R      | 0h      |                                                      |
| 21-19 | FORCE_CDR_PHASE         | R      | 0h      |                                                      |
| 18    | DISABLE_CDR_FREQ_T RACK | R      | 0h      |                                                      |
| 17-13 | CDR_CONFIGURE           | R      | 0h      |                                                      |
| 12    | FORCE_CDR_PHASE_E N     | R      | 0h      | Use bits 21-19 as the phase to be forced on the CDR. |
| 11-6  | Bist_start_addr         | R/W    | 0h      | See DFT spec for details                             |
| 5-0   | Bist_end_addr           | R/W    | 0h      | See DFT spec for details                             |

<!-- image -->

<!-- image -->

## 16.4.4.12 GPIO Register (offset = 30h) [reset = 0h]

Register mask: FFFFFFFFh

GPIO is shown in Figure 16-145 and described in Table 16-156.

GPIO mode configurations and reads

Figure 16-145. GPIO Register

| 31              | 30       | 29         | 28       | 27         | 26         | 25       | 24       |
|-----------------|----------|------------|----------|------------|------------|----------|----------|
| USEGPIOMOD EREG | GPIOMODE | DPGPIOGZ   | DMGPIOGZ | DPGPIOA    | DMGPIOA    | DPGPIOY  | DMGPIOY  |
| R/W-0h          | R/W-0h   | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h     | R-0h     | R-0h     |
| 23              | 22       | 21         | 20       | 19         | 18         | 17       | 16       |
| GPIO1P8VCO NFIG |          | GPIOCONFIG |          | DMGPIOPIPD | DPGPIOPIPD | RESERVED | RESERVED |
| R/W-0h          |          | R/W-0h     |          | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   |
| 15              | 14       | 13         | 12       | 11         | 10         | 9        | 8        |
| RESERVED        | RESERVED | RESERVED   | RESERVED | RESERVED   | RESERVED   | RESERVED | RESERVED |
| R/W-0h          | R/W-0h   | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   |
| 7               | 6        | 5          | 4        | 3          | 2          | 1        | 0        |
| RESERVED        | RESERVED | RESERVED   | RESERVED | RESERVED   | RESERVED   | RESERVED | RESERVED |
| R/W-0h          | R/W-0h   | R/W-0h     | R/W-0h   | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-156. GPIO Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                |
|-------|----------------|--------|---------|----------------------------------------------------------------------------|
| 31    | USEGPIOMODEREG | R/W    | 0h      | When set to 1 use bits 31 24 from this register instead of primary inputs  |
| 30    | GPIOMODE       | R/W    | 0h      | Overrides the corresponding primary input                                  |
| 29    | DPGPIOGZ       | R/W    | 0h      | Overrides the corresponding primary input                                  |
| 28    | DMGPIOGZ       | R/W    | 0h      | Overrides the corresponding primary input                                  |
| 27    | DPGPIOA        | R/W    | 0h      | Overrides the corresponding primary input                                  |
| 26    | DMGPIOA        | R/W    | 0h      | Overrides the corresponding primary input                                  |
| 25    | DPGPIOY        | R      | 0h      | The GPIO Y output is stored here                                           |
| 24    | DMGPIOY        | R      | 0h      | The GPIO Y output is stored here                                           |
| 23    | GPIO1P8VCONFIG | R/W    | 0h      | Overrides the corresponding primary input                                  |
| 22-20 | GPIOCONFIG     | R/W    | 0h      | Used for configuring the GPIOs. Details to be updated.                     |
| 19    | DMGPIOPIPD     | R/W    | 0h      | GPIO mode DM pull down enabled. Overrides the corresponding primary input  |
| 18    | DPGPIOPIPD     | R/W    | 0h      | GPIO mode DP pull-down enabled. Overrides the corresponding primary input. |
| 17-0  | RESERVED       | R/W    | 0h      |                                                                            |

Universal Serial Bus (USB)

## 16.4.4.13 DLLHS Register (offset = 34h) [reset = 8000h]

Register mask: FFFFFFFFh

DLLHS is shown in Figure 16-146 and described in Table 16-157.

bits for control and debug of the DLL inside the phy

Figure 16-146. DLLHS Register

| 31                   | 30                         | 29                         | 28                         | 27                         | 26                         | 25                         | 24                   |
|----------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------------|----------------------|
| RESERVED             | RESERVED                   | RESERVED                   | DLLHS_LOCK                 | DLLHS_GENERATED_CODE       | DLLHS_GENERATED_CODE       | DLLHS_GENERATED_CODE       | DLLHS_GENERATED_CODE |
| R/W-0h               | R/W-0h                     | R/W-0h                     | R-0h                       | R-0h                       | R-0h                       | R-0h                       | R-0h                 |
| 23                   | 22                         | 21                         | 20                         | 19                         | 18                         | 17                         | 16                   |
| DLLHS_GENERATED_CODE | DLLHS_GENERATED_CODE       | DLL_SEL_COD E_PHS          | DLL_LOCKCHK                | DLL_LOCKCHK                | DLL_SEL_COD                | DLL_SEL_COD                | DLL_SEL_COD          |
| R-0h                 | R-0h                       | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h               |
| 15                   | 14                         | 13                         | 12                         | 11                         | 10                         | 9                          | 8                    |
|                      | DLL_PHS0_8 DLL_FORCED_CODE | DLL_PHS0_8 DLL_FORCED_CODE | DLL_PHS0_8 DLL_FORCED_CODE | DLL_PHS0_8 DLL_FORCED_CODE | DLL_PHS0_8 DLL_FORCED_CODE | DLL_PHS0_8 DLL_FORCED_CODE | FORCE_DLL_ CODE      |
| R/W-1h R/W-0h        | R/W-1h R/W-0h              | R/W-1h R/W-0h              | R/W-1h R/W-0h              | R/W-1h R/W-0h              | R/W-1h R/W-0h              | R/W-1h R/W-0h              | R/W-0h               |
| 7                    | 6                          | 5                          | 4                          | 3                          | 2                          | 1                          | 0                    |
| DLL_RATE             | DLL_RATE                   | DLL_FILT                   | DLL_FILT                   | DLL_CDR_MO DE              | DLL_IDLE                   | DLL_FREEZE                 | RESERVED             |
| R/W-0h               | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h                     | R/W-0h               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-157. DLLHS Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                  |
|-------|-----------------------|--------|---------|------------------------------------------------------------------------------|
| 31-29 | RESERVED              | R/W    | 0h      |                                                                              |
| 28    | DLLHS_LOCK            | R      | 0h      | Read the AFE output by this name                                             |
| 27-22 | DLLHS_GENERATED_C ODE | R      | 0h      | Read the AFE output by this name.Read value is valid only if VDDLDO is on.   |
| 21    | DLL_SEL_CODE_PHS      | R/W    | 0h      | Connect to DLLHS_TEST_LDO[0] on AFE interface. see DFT spec for details.     |
| 20-19 | DLL_LOCKCHK           | R/W    | 0h      | Connect to DLLHS_TEST_LDO [2:1] on AFE interface. see DFT spec for details.  |
| 18-16 | DLL_SEL_COD           | R/W    | 0h      | Connect to DLLHS_TEST_LDO [5:3] on AFE interface. see DFT spec for details.  |
| 15    | DLL_PHS0_8            | R/W    | 1h      | Connect to DLLHS_TEST_LDO[6] on AFE interface. see DFT spec for details.     |
| 14-9  | DLL_FORCED_CODE       | R/W    | 0h      | Connect to the pin of this name on AFE interface. see DFT spec for details.  |
| 8     | FORCE_DLL_CODE        | R/W    | 0h      | Connect to DLLHS_TEST_LDO[11] on AFE interface. see DFT spec for details.    |
| 7-6   | DLL_RATE              | R/W    | 0h      | Connect to DLLHS_TEST_LDO [8:7] on AFE interface. see DFT spec for details.  |
| 5-4   | DLL_FILT              | R/W    | 0h      | Connect to DLLHS_TEST_LDO [10:9] on AFE interface. see DFT spec for details. |
| 3     | DLL_CDR_MODE          | R/W    | 0h      | Connect to the pin of this name on AFE interface. see DFT spec for details.  |
| 2     | DLL_IDLE              | R/W    | 0h      | Connect to DLLHS_TEST_LDO[12] on AFE interface. see DFT spec for details.    |
| 1     | DLL_FREEZE            | R/W    | 0h      | Connect to DLLHS_TEST_LDO[13] on AFE interface. see DFT spec for details.    |

<!-- image -->

<!-- image -->

## Table 16-157. DLLHS Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
|     0 | RESERVED | R/W    | 0h      |               |

## 16.4.4.14 USB2PHYCM\_CONFIG Register (offset = 3Ch) [reset = 0h]

Register mask: FFFFFFFFh

USB2PHYCM\_CONFIG is shown in Figure 16-147 and described in Table 16-158.

Config and status register for the USB2PHYCM and LDO

## Figure 16-147. USB2PHYCM\_CONFIG Register

| 31            | 30          | 29          | 28          | 27          | 26                  | 25          | 24          |
|---------------|-------------|-------------|-------------|-------------|---------------------|-------------|-------------|
| CONFIGURECM   | CONFIGURECM | CONFIGURECM | CONFIGURECM | CONFIGURECM | CONFIGURECM         | CONFIGURECM | CONFIGURECM |
| 22            | 22          | 22          | 22          | 22          | 22                  | 22          | 22          |
| 23 21 R-0h 15 | 20          | 19          | 18          | 17          | 16 LDOCONFIG R/W-0h | CMSTATUS    | 14          |
| 13            | 13          | 13          | 13          | 13          | 13                  | 12          | 12          |
| 11            | 11          | 11          | 11          | 11          | 11                  | 10          | 10          |
| 9 7           | 8 R/W-0h    | LDOCONFIG   | 6           | 5           | 4                   | 3           | 2           |
| 1             | 1           | 1           | 1           | 1           | 1                   | 1           | 1           |
| 0             | 0           | 0           | 0           | 0           | 0                   | 0           | 0           |
| LDOCONFIG     |             |             |             |             | LDOSTATUS           |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-158. USB2PHYCM\_CONFIG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                 |
|-------|-------------|--------|---------|-------------------------------------------------------------|
| 31-24 | CONFIGURECM | R/W    | 0h      | Connects to the CONFIGURECM pins. see DFT spec for details. |
| 23-18 | CMSTATUS    | R      | 0h      | Reads the CMSTATUS bits. see DFT spec for details.          |
| 17-2  | LDOCONFIG   | R/W    | 0h      | The LDOCONFIG bit settings. See DFT spec for details.       |
| 1-0   | LDOSTATUS   | R      | 0h      | Reads the LDOSTATUS bits. see DFT spec for details.         |

<!-- image -->

<!-- image -->

## 16.4.4.15 AD\_INTERFACE\_REG1 Register (offset = 44h) [reset = 0h]

Register mask: FFFFFFFFh

AD\_INTERFACE\_REG1 is shown in Figure 16-148 and described in Table 16-159.

All bits (unless defined) are bypass bits for internal analog to digital interface pins with the same name. All the bits of this register, except the over-ride bits return a '0' on read, if VDDLDO is off.

## Figure 16-148. AD\_INTERFACE\_REG1 Register

| 31                       | 30            | 29          | 28                 | 27                   | 26            | 25            | 24             |
|--------------------------|---------------|-------------|--------------------|----------------------|---------------|---------------|----------------|
| USE_AD_DAT A_REG         | HS_TX_DATA    | FS_TX_DATA  | TEST_PRE_EN _CNTRL | SQ_PRE_EN            | HS_TX_PRE_E N | HS_RX_PRE_ EN | TEST_EN_CNT RL |
| R/W-0h                   | R/W-0h        | R/W-0h      | R/W-0h             | R/W-0h               | R/W-0h        | R/W-0h        | R/W-0h         |
| 23                       | 22            | 21          | 20                 | 19                   | 18            | 17            | 16             |
| HS_TX_EN                 | FS_RX_EN      | RESERVED    | SQ_EN              | HS_RX_EN             | TEST_HS_MO DE | HS_HV_SW      | HS_CHIRP       |
| R/W-0h                   | R/W-0h        | R/W-0h      | R/W-0h             | R/W-0h               | R/W-0h        | R/W-0h        | R/W-0h         |
| 15                       | 14            | 13          | 12                 | 11                   | 10            | 9             | 8              |
| TEST_FS_MO DE            | FSTX_GZ       | FSTX_PRE_EN | RESERVED           | TEST_SQ_CAL _CONTROL | SQ_CAL_EN3    | SQ_CAL_EN1    | SQ_CAL_EN2     |
| R/W-0h                   | R/W-0h        | R/W-0h      | R/W-0h             | R/W-0h               | R/W-0h        | R/W-0h        | R/W-0h         |
| 7                        | 6             | 5           | 4                  | 3                    | 2             | 1             | 0              |
| TEST_RTERM _CAL_CONTR OL | RTERM_CAL_ EN | DLL_RX_DATA | DISCON_DETE CT     | USE_LSHOST _REG      | LSHOSTMODE    | LSFS_RX_DAT A | SQUELCH        |
| R/W-0h                   | R/W-0h        | R-0h        | R-0h               | R/W-0h               | R/W-0h        | R-0h          | R-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-159. AD\_INTERFACE\_REG1 Register Field Descriptions

|   Bit | Field             | Type   | Reset   | Description             |
|-------|-------------------|--------|---------|-------------------------|
|    31 | USE_AD_DATA_REG   | R/W    | 0h      | Override for bits 30-29 |
|    30 | HS_TX_DATA        | R/W    | 0h      |                         |
|    29 | FS_TX_DATA        | R/W    | 0h      |                         |
|    28 | TEST_PRE_EN_CNTRL | R/W    | 0h      | Override for bits 27-25 |
|    27 | SQ_PRE_EN         | R/W    | 0h      |                         |
|    26 | HS_TX_PRE_EN      | R/W    | 0h      |                         |
|    25 | HS_RX_PRE_EN      | R/W    | 0h      |                         |
|    24 | TEST_EN_CNTRL     | R/W    | 0h      | Override for bits 23-19 |
|    23 | HS_TX_EN          | R/W    | 0h      |                         |
|    22 | FS_RX_EN          | R/W    | 0h      |                         |
|    21 | RESERVED          | R/W    | 0h      |                         |
|    20 | SQ_EN             | R/W    | 0h      |                         |
|    19 | HS_RX_EN          | R/W    | 0h      |                         |
|    18 | TEST_HS_MODE      | R/W    | 0h      | Override for bits 17-16 |
|    17 | HS_HV_SW          | R/W    | 0h      |                         |
|    16 | HS_CHIRP          | R/W    | 0h      |                         |
|    15 | TEST_FS_MODE      | R/W    | 0h      | Override for bits 14 12 |
|    14 | FSTX_GZ           | R/W    | 0h      |                         |
|    13 | FSTX_PRE_EN       | R/W    | 0h      |                         |
|    12 | RESERVED          | R/W    | 0h      |                         |

Universal Serial Bus (USB)

<!-- image -->

## Table 16-159. AD\_INTERFACE\_REG1 Register Field Descriptions (continued)

|   Bit | Field                   | Type   | Reset   | Description            |
|-------|-------------------------|--------|---------|------------------------|
|    11 | TEST_SQ_CAL_CONTR OL    | R/W    | 0h      | Override for bits 10 8 |
|    10 | SQ_CAL_EN3              | R/W    | 0h      |                        |
|     9 | SQ_CAL_EN1              | R/W    | 0h      |                        |
|     8 | SQ_CAL_EN2              | R/W    | 0h      |                        |
|     7 | TEST_RTERM_CAL_CO NTROL | R/W    | 0h      | Override for bits 6    |
|     6 | RTERM_CAL_EN            | R/W    | 0h      |                        |
|     5 | DLL_RX_DATA             | R      | 0h      |                        |
|     4 | DISCON_DETECT           | R      | 0h      |                        |
|     3 | USE_LSHOST_REG          | R/W    | 0h      | Use bit 2 for this reg |
|     2 | LSHOSTMODE              | R/W    | 0h      |                        |
|     1 | LSFS_RX_DATA            | R      | 0h      |                        |
|     0 | SQUELCH                 | R      | 0h      |                        |

<!-- image -->

## 16.4.4.16 AD\_INTERFACE\_REG2 Register (offset = 48h) [reset = 0h]

Register mask: FFFFFFFFh

AD\_INTERFACE\_REG2 is shown in Figure 16-149 and described in Table 16-160.

All bits (unless defined) are bypass bits for internal analog to digital interface pins with the same name. All the bits of this register, except the over-ride bits return a '0' on read, if VDDLDO is off.

## Figure 16-149. AD\_INTERFACE\_REG2 Register

| 31                   | 30               | 29               | 28                  | 27                  | 26                  | 25                  | 24                   |
|----------------------|------------------|------------------|---------------------|---------------------|---------------------|---------------------|----------------------|
| USE_SUSP_D RV_REG    | SUS_DRV_DP _DATA | SUS_DRV_DP _EN   | SUS_DRV_DM _DATA    | SUS_DRV_DM _EN      | USE_DISCON_ REG     | DISCON_EN           | DISCON_PRE_ EN       |
| R/W-0h               | R/W-0h           | R/W-0h           | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h               |
| 23                   | 22               | 21               | 20                  | 19                  | 18                  | 17                  | 16                   |
| RESERVED             | SPARE_OUT_CORE   | SPARE_OUT_CORE   | SPARE_OUT_CORE      | SPARE_OUT_CORE      | SPARE_OUT_CORE      | SERX_DP_CO RE       | SERX_DM_CO RE        |
| R/W-0h               | R-0h R-0h        | R-0h R-0h        | R-0h R-0h           | R-0h R-0h           | R-0h R-0h           | R-0h R-0h           | R-0h                 |
| 15                   | 14               | 13               | 12                  | 11                  | 10                  | 9                   | 8                    |
| USE_HSRX_C AL_EN_REG | HSRX_CAL_E N     | USE_RPU_RP D_REG | RPU_DP_SW1 _EN_CORE | RPU_DP_SW2 _EN_CORE | RPU_DM_SW1 _EN_CORE | RPU_DM_SW2 _EN_CORE | DP_PULLDOW N_EN_CORE |
| R/W-0h               | R/W-0h           | R/W-0h           | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h               |
| 7                    | 6                | 5                | 4                   | 3                   | 2                   | 1                   | 0                    |
| DM_PULLDOW N_EN_CORE | DP_DM_5V_S HORT  | SPARE_IN_CORE    | SPARE_IN_CORE       | SPARE_IN_CORE       | SPARE_IN_CORE       | SPARE_IN_CORE       | PORZ                 |
| R/W-0h               | R-0h             | R/W-0h           | R/W-0h              | R/W-0h              | R/W-0h              | R/W-0h              | R-0h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-160. AD\_INTERFACE\_REG2 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                    |
|-------|----------------------|--------|---------|------------------------------------------------|
| 31    | USE_SUSP_DRV_REG     | R/W    | 0h      | Use bits 27-30 from this register as overrides |
| 30    | SUS_DRV_DP_DATA      | R/W    | 0h      |                                                |
| 29    | SUS_DRV_DP_EN        | R/W    | 0h      |                                                |
| 28    | SUS_DRV_DM_DATA      | R/W    | 0h      |                                                |
| 27    | SUS_DRV_DM_EN        | R/W    | 0h      |                                                |
| 26    | USE_DISCON_REG       | R/W    | 0h      | Use bits 24-25 from this register as override  |
| 25    | DISCON_EN            | R/W    | 0h      |                                                |
| 24    | DISCON_PRE_EN        | R/W    | 0h      |                                                |
| 23    | RESERVED             | R/W    | 0h      |                                                |
| 22-18 | SPARE_OUT_CORE       | R      | 0h      |                                                |
| 17    | SERX_DP_CORE         | R      | 0h      |                                                |
| 16    | SERX_DM_CORE         | R      | 0h      |                                                |
| 15    | USE_HSRX_CAL_EN_RE G | R/W    | 0h      | Use bit 14 from this register as override      |
| 14    | HSRX_CAL_EN          | R/W    | 0h      |                                                |
| 13    | USE_RPU_RPD_REG      | R/W    | 0h      | Use override from bits 7-12                    |
| 12    | RPU_DP_SW1_EN_COR E  | R/W    | 0h      |                                                |
| 11    | RPU_DP_SW2_EN_COR E  | R/W    | 0h      |                                                |
| 10    | RPU_DM_SW1_EN_COR E  | R/W    | 0h      |                                                |

Universal Serial Bus (USB)

<!-- image -->

## Table 16-160. AD\_INTERFACE\_REG2 Register Field Descriptions (continued)

| Bit   | Field                | Type   | Reset   | Description                                                                           |
|-------|----------------------|--------|---------|---------------------------------------------------------------------------------------|
| 9     | RPU_DM_SW2_EN_COR E  | R/W    | 0h      |                                                                                       |
| 8     | DP_PULLDOWN_EN_CO RE | R/W    | 0h      |                                                                                       |
| 7     | DM_PULLDOWN_EN_CO RE | R/W    | 0h      |                                                                                       |
| 6     | DP_DM_5V_SHORT       | R      | 0h      |                                                                                       |
| 5-1   | SPARE_IN_CORE        | R/W    | 0h      |                                                                                       |
| 0     | PORZ                 | R      | 0h      | Read only bit -> the PORZ generated from the digital registered on the A-D interface. |

<!-- image -->

## 16.4.4.17 AD\_INTERFACE\_REG3 Register (offset = 4Ch) [reset = 0h]

Register mask: FFFFFFFFh

AD\_INTERFACE\_REG3 is shown in Figure 16-150 and described in Table 16-161.

All bits (unless defined) are bypass bits for internal analog to digital interface pins with the same name. All the bits of this register, except the over-ride bits return a '0' on read, if VDDLDO is off.

Figure 16-150. AD\_INTERFACE\_REG3 Register

| 31                 | 30            | 29            | 28            | 27                   | 26            | 25               | 24            |
|--------------------|---------------|---------------|---------------|----------------------|---------------|------------------|---------------|
| USE_HSOS_D ATA_REG | HSOS_DATA     | HSOS_DATA     | HSOS_DATA     | HSOS_DATA            | HSOS_DATA     | HSOS_DATA        | HSOS_DATA     |
| R/W-0h             | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h               | R/W-0h        | R/W-0h           | R/W-0h        |
| 23                 | 22            | 21            | 20            | 19                   | 18            | 17               | 16            |
| HSOS_DATA          | USE_FS_REG 3  | FSTX_MODE     | FSTX_SE0      | USE_HS_TER M_RES_REG | HS_TERM_RE S  | SPARE_IN_LDO     | SPARE_IN_LDO  |
| R/W-0h             | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h               | R/W-0h        | R/W-0h           | R/W-0h        |
| 15                 | 14            | 13            | 12            | 11                   | 10            | 9                | 8             |
|                    | SPARE_IN_LDO  | SPARE_IN_LDO  | SPARE_IN_LDO  | SPARE_IN_LDO         | SPARE_IN_LDO  | SPARE_OUT_LDO    | SPARE_OUT_LDO |
|                    | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h               | R/W-0h        | R-0h             | R-0h          |
| 7                  | 6             | 5             | 4             | 3                    | 2             | 1                | 0             |
|                    | SPARE_OUT_LDO | SPARE_OUT_LDO | SPARE_OUT_LDO | SPARE_OUT_LDO        | SPARE_OUT_LDO | USE_FARCOR E_REG | FARCORE       |
|                    | R-0h          | R-0h          | R-0h          | R-0h                 | R-0h          | R/W-0h           | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-161. AD\_INTERFACE\_REG3 Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                    |
|-------|----------------------|--------|---------|------------------------------------------------|
| 31    | USE_HSOS_DATA_REG    | R/W    | 0h      | Use bits 30-23 in this register as bypass bits |
| 30-23 | HSOS_DATA            | R/W    | 0h      |                                                |
| 22    | USE_FS_REG3          | R/W    | 0h      | Use bits 20-21 as bypass bits                  |
| 21    | FSTX_MODE            | R/W    | 0h      |                                                |
| 20    | FSTX_SE0             | R/W    | 0h      |                                                |
| 19    | USE_HS_TERM_RES_R EG | R/W    | 0h      | Use bit 18 as override bit                     |
| 18    | HS_TERM_RES          | R/W    | 0h      |                                                |
| 17-10 | SPARE_IN_LDO         | R/W    | 0h      |                                                |
| 9-2   | SPARE_OUT_LDO        | R      | 0h      |                                                |
| 1     | USE_FARCORE_REG      | R/W    | 0h      | Use bit 0 from this register as bypass         |
| 0     | FARCORE              | R/W    | 0h      |                                                |

Universal Serial Bus (USB)