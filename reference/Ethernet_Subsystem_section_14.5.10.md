<!-- image -->

www.ti.com

## 14.5.9.35 RGMII\_CTL Register (offset = 88h) [reset = 0h]

RGMII\_CTL is shown in Figure 14-231 and described in Table 14-248.

RGMII CONTROL SIGNAL REGISTER

NOTE: This register only has context in RGMII in-band mode. This register is not updated during forced mode of operation. Note that in-band mode is selected via MACCONTROL.EXT\_EN.

| Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   | Figure 14-231. RGMII_CTL Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RGMII2_FULL DUPLEX                  | RGMII2_SPEED                        | RGMII2_SPEED                        | RGMII2_LINK                         | RGMII1_FULL DUPLEX                  | RGMII1_SPEED                        | RGMII1_SPEED                        | RGMII1_LINK                         |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-248. RGMII\_CTL Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                      |
|-------|-------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved          | R      | 0h      |                                                                                                                                  |
| 7     | RGMII2_FULLDUPLEX | R      | 0h      | RGMII 2 Fullduplex - This is the CPRGMII fullduplex output signal. 0 - Half-duplex mode 1 - Fullduplex mode                      |
| 6-5   | RGMII2_SPEED      | R      | 0h      | RGMII2 Speed - This is the CPRGMI speed output signal 00 - 10Mbps mode 01 - 100Mbps mode 10 - 1000Mbps (gig) mode 11 - reserved  |
| 4     | RGMII2_LINK       | R      | 0h      | RGMII2 Link Indicator - This is the CPRGMII link output signal 0 - RGMII2 link is down 1 - RGMII2 link is up                     |
| 3     | RGMII1_FULLDUPLEX | R      | 0h      | RGMII1 Fullduplex - This is the CPRGMII fullduplex output signal. 0 - Half-duplex mode 1 - Fullduplex mode                       |
| 2-1   | RGMII1_SPEED      | R      | 0h      | RGMII1 Speed - This is the CPRGMII speed output signal 00 - 10Mbps mode 01 - 100Mbps mode 10 - 1000Mbps (gig) mode 11 - reserved |
| 0     | RGMII1_LINK       | R      | 0h      | RGMII1 Link Indicator - This is the CPRGMII link output signal 0 - RGMII1 link is down                                           |

## 14.5.10 MDIO Registers

This section describes the memory-mapped registers for the Management Data Input/Output (MDIO).

Table 14-249 lists the memory-mapped registers for the Management Data Input/Output (MDIO). See the device-specific data manual for the memory address of these registers.

R-0x1

## Table 14-249. MDIO Registers

| Offset   | Acronym            | Register Name                                                | Section            |
|----------|--------------------|--------------------------------------------------------------|--------------------|
| 0        | MDIOVER            | MDIO Version Register                                        | Section 14.5.10.1  |
| 4h       | MDIOCONTROL        | MDIO Control Register                                        | Section 14.5.10.2  |
| 8h       | MDIOALIVE          | PHY Alive Status Register                                    | Section 14.5.10.3  |
| Ch       | MDIOLINK           | PHY Link Status Register                                     | Section 14.5.10.4  |
| 10h      | MDIOLINKINTRAW     | MDIO Link Status Change Interrupt Register                   | Section 14.5.10.5  |
| 14h      | MDIOLINKINTMASKED  | MDIO Link Status Change Interrupt Register (Masked Value)    | Section 14.5.10.6  |
| 20h      | MDIOUSERINTRAW     | MDIO User Command Complete Interrupt Register (Raw Value)    | Section 14.5.10.7  |
| 24h      | MDIOUSERINTMASKED  | MDIO User Command Complete Interrupt Register (Masked Value) | Section 14.5.10.8  |
| 28h      | MDIOUSERINTMASKSET | MDIO User Command Complete Interrupt Mask Set Register       | Section 14.5.10.9  |
| 2Ch      | MDIOUSERINTMASKCLR | MDIO User Interrupt Mask Clear Register                      | Section 14.5.10.10 |
| 80h      | MDIOUSERACCESS0    | MDIO User Access Register 0                                  | Section 14.5.10.11 |
| 84h      | MDIOUSERPHYSEL0    | MDIO User PHY Select Register 0                              | Section 14.5.10.12 |
| 88h      | MDIOUSERACCESS1    | MDIO User Access Register 1                                  | Section 14.5.10.13 |
| 8Ch      | MDIOUSERPHYSEL1    | MDIO User PHY Select Register 1                              | Section 14.5.10.14 |

## 14.5.10.1 MDIOVER Register

The MDIO version register (MDIOVER) is shown in Figure 14-232 and described in Table 14-250.

## Figure 14-232. MDIO Version Register (MDIOVER)

| 31            |               | 16            |
|---------------|---------------|---------------|
| MODID         | MODID         | MODID         |
| R-0x7         | R-0x7         | R-0x7         |
| 15            | 8             | 0             |
| REVMAJ REVMIN | REVMAJ REVMIN | REVMAJ REVMIN |

LEGEND: R = Read only; - n = value after reset

## Table 14-250. MDIOVER Register Field Descriptions

| Bit   | Field   | Type   |   Reset | Description                                       |
|-------|---------|--------|---------|---------------------------------------------------|
| 31-16 | MODID   | R      |       7 | Identifies type of peripheral.                    |
| 15-8  | REVMAJ  | R      |       1 | Management interface module major revision value. |
| 7-0   | REVMIN  | R      |       4 | Management interface module minor revision value. |

R-0x4

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.10.2 MDIOCONTROL Register

The MDIO control register (MDIOCONTROL) is shown in Figure 14-233 and described in Table 14-251.

## Figure 14-233. MDIO Control Register (MDIOCONTROL)

<!-- image -->

R/W-0x255

LEGEND: R/W = Read/Write; RWC = Read/Write/Clear; R = Read only; - n = value after reset

Table 14-251. MDIOCONTROL Register Field Descriptions

| Bit   | Field                 | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                   |
|-------|-----------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | IDLE                  | R      |       1 | MDIO state machine IDLE. Set to 1 when the state machine is in the idle state. 0 = State machine is not in idle state. 1 = State machine is in idle state.                                                                                                                                                                    |
| 30    | ENABLE                | R/W    |       0 | Enable control. If the MDIO state machine is active at the time it is disabled, it will complete the current operation before halting and setting the idle bit. If using byte access, the enable bit has to be the last bit written in this register. 0 = Disables the MDIO state machine. 1 = Enable the MDIO state machine. |
| 29    | Reserved              | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                     |
| 28-24 | HIGHEST_USER_CHANNE L | R      |       1 | Highest user channel. This field specifies the highest user access channel that is available in the module and is currently set to 1. This implies that the MDIOUSERACCESS1 register is the highest available user access channel.                                                                                            |
| 23-21 | Reserved              | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                     |
| 20    | PREAMBLE              | R/W    |       0 | Preamble disable. 0 = Standard MDIO preamble is used. 1 = Disables this device from sending MDIO frame preambles.                                                                                                                                                                                                             |
| 19    | FAULT                 | R/WC   |       0 | Fault indicator. This bit is set to 1 if the MDIO pins fail to read back what the device is driving onto them. This indicates a physical layer fault and the module state machine is reset. Writing a 1 to it clears this bit. 0 = No failure. 1 = Physical layer fault; the MDIO state machine is reset.                     |
| 18    | FAULTENB              | R/W    |       0 | Fault detect enable. This bit has to be set to 1 to enable the physical layer fault detection. 0 = Disables the physical layer fault detection. 1 = Enables the physical layer fault detection.                                                                                                                               |
| 17    | INTTESTENB            | R/W    |       0 | Interrupt test enable. This bit can be set to 1 to enable the host to set the USERINT and LINKINT bits for test purposes. 0 = Interrupt bits are not set. 1 = Enables the host to set the USERINT and LINKINT bits for test purposes.                                                                                         |
| 16    | Reserved              | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                     |
| 15-0  | CLKDIV                | R/W    |     255 | Clock divider. This field specifies the division ratio between CLK and the frequency of MDIO_CLK. MDIO_CLK is disabled when clkdiv is set to 0. MDIO_CLK frequency = clk frequency/(clkdiv+1).                                                                                                                                |

## 14.5.10.3 MDIOALIVE Register

The PHY acknowledge status register (MDIOALIVE) is shown in Figure 14-234 and described in Table 14252.

## Figure 14-234. PHY Acknowledge Status Register (MDIOALIVE)

31

0

ALIVE

RWC-0x0

LEGEND: RWC = Read/Write/Clear

## Table 14-252. MDIOALIVE Register Field Descriptions

| Bit   | Field   | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | ALIVE   | R/WC   |       0 | MDIO alive. Each of the 32 bits of this register is set if the most recent access to the PHY with address corresponding to the register bit number was acknowledged by the PHY, the bit is reset if the PHY fails to acknowledge the access. Both the user and polling accesses to a PHY will cause the corresponding alive bit to be updated. The alive bits are only meant to be used to give an indication of the presence or not of a PHY with the corresponding address. Writing a 1 to any bit will clear it, writing a 0 has no effect. |

## 14.5.10.4 MDIOLINK Register

The PHY link status register (MDIOLINK) is shown in Figure 14-235 and described in Table 14-253.

## Figure 14-235. PHY Link Status Register (MDIOLINK)

31 0

LINK

R-0x0

LEGEND: R = Read only; - n = value after reset

## Table 14-253. MDIOLINK Register Field Descriptions

| Bit   | Field   | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | LINK    | R      |       0 | MDIO link state. This register is updated after a read of the Generic Status Register of a PHY. The bit is set if the PHY with the corresponding address has link and the PHY acknowledges the read transaction. The bit is reset if the PHY indicates it does not have link or fails to acknowledge the read transaction. Writes to the register have no effect. In addition, the status of the two PHYs specified in the MDIOUSERPHYSEL n registers can be determined using the MLINK input pins. This is determined by the LINKSEL bit in the MDIOUSERPHYSEL n register. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.10.5 MDIOLINKINTRAW Register

The MDIO link status change interrupt register (MDIOLINKINTRAW) is shown in Figure 14-236 and described in Table 14-254.

## Figure 14-236. MDIO Link Status Change Interrupt Register (MDIOLINKINTRAW)

Reserved

R-0x0

31

15

31

15

Reserved

R-0x0

LEGEND: RWC = Read/Write/Clear; R = Read only; n = value after reset

## Table 14-254. MDIOLINKINTRAW Register Field Descriptions

| Bit   | Field      | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved   | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 1-0   | LINKINTRAW | R/WC   |       0 | MDIO link change event, raw value. When asserted 1, a bit indicates that there was an MDIO link change event (i.e. change in the MDIOLINK register) corresponding to the PHY address in the MDIOUSERPHYSEL n register. LINKINTRAW[0] and LINKINTRAW[1] correspond to MDIOUSERPHYSEL0 and MDIOUSERPHYSEL1, respectively. Writing a 1 will clear the event and writing 0 has no effect. If the INTTESTENB bit in the MDIOCONTROL register is set, the host may set the LINKINTRAW bits to a 1. This mode may be used for test purposes. |

## 14.5.10.6 MDIOLINKINTMASKED Register

The MDIO link status change interrupt register (Masked Value) (MDIOLINKINTMASKED) is shown in Figure 14-237 and described in Table 14-255.

## Figure 14-237. MDIO Link Status Change Interrupt Register (Masked Value) (MDIOLINKINTMASKED)

Reserved

R-0x0

Reserved

R-0x0

LEGEND: RWC = Read/Write/Clear; R = Read only; n = value after reset

## Table 14-255. MDIOLINKINTMASKED Register Field Descriptions

| Bit   | Field         | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved      | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1-0   | LINKINTMASKED | R/WC   |       0 | MDIO link change interrupt, masked value. When asserted 1, a bit indicates that there was an MDIO link change event (i.e. change in the MDIO Link register) corresponding to the PHY address in the MDIOUSERPHYSEL n register and the corresponding LINKINTENB bit was set. LINKINTMASKED[0] and LINKINTMASKED[1] correspond to MDIOUSERPHYSEL0 and MDIOUSERPHYSEL1, respectively. Writing a 1 will clear the interrupt and writing 0 has no effect. If the INTTESTENB bit in the MDIOCONTROL register is set, the host may set the LINKINT bits to a 1. This mode may be used for test purposes. |

2

2

1

1

0

LINKINTMASKED

RWC-0x0

LINKINTRAW

RWC-0x0

0

16

16

## 14.5.10.7 MDIOUSERINTRAW Register

The MDIO user command complete interrupt register (Raw Value) (MDIOUSERINTRAW) is shown in Figure 14-238 and described in Table 14-256.

## Figure 14-238. MDIO User Command Complete Interrupt Register (Raw Value) (MDIOUSERINTRAW)

31

16

Reserved

R-0x0

15

2

1

0

Reserved

USERINTRAW

R-0x0

RWC-0x0

LEGEND: RWC = Read/Write/Clear; R = Read only; - n = value after reset

Table 14-256. MDIOUSERINTRAW Register Field Descriptions

| Bit   | Field      | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved   | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 1-0   | USERINTRAW | R/WC   |       0 | Raw value of MDIO user command complete event for the MDIOUSERACCESS1 register through the MDIOUSERACCESS0 register, respectively. When asserted 1, a bit indicates that the previously scheduled PHY read or write command using that particular MDIOUSERACCESSn register has completed. Writing a 1 will clear the event and writing 0 has no effect. If the INTTESTENB bit in the MDIOCONTROL register is set, the host may set the USERINTRAW bits to a 1. This mode may be used for test purposes. |

## 14.5.10.8 MDIOUSERINTMASKED Register

The MDIO user command complete interrupt register (Masked Value) (MDIOUSERINTMASKED) is shown in Figure 14-239 and described in Table 14-257.

## Figure 14-239. MDIO User Command Complete Interrupt Register (Masked Value) (MDIOUSERINTMASKED)

31

16

Reserved

R-0x0

15

2

1

0

Reserved

USERINTMASKED

R-0x0

RWC-0x0

LEGEND: RWC = Read/Write/Clear; R = Read only; n = value after reset

## Table 14-257. MDIOUSERINTMASKED Register Field Descriptions

| Bit   | Field         | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved      | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 1-0   | USERINTMASKED | R/WC   |       0 | Masked value of MDIO user command complete interrupt for the MDIOUSERACCESS1 register through the MDIOUSERACCESS0 register, respectively. When asserted 1, a bit indicates that the previously scheduled PHY read or write command using that particular MDIOUSERACCESSn register has completed and the corresponding USERINTMASKSET bit is set to 1. Writing a 1 will clear the interrupt and writing 0 has no effect. If the INTTESTENB bit in the MDIOCONTROL register is set, the host may set the USERINTMASKED bits to a 1. This mode may be used for test purposes. |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.10.9 MDIOUSERINTMASKSET Register

The MDIO user command complete interrupt mask set register (MDIOUSERINTMASKSET) is shown in Figure 14-240 and described in Table 14-258.

## Figure 14-240. MDIO User Command Complete Interrupt Mask Set Register (MDIOUSERINTMASKSET)

31

16

Reserved

R-0x0

15

2

1

0

Reserved

USERINTMASKSET

R-0x0

RWC-0x0

LEGEND: RWC = Read/Write/Clear; R = Read only; n = value after reset

## Table 14-258. MDIOUSERINTMASKSET Register Field Descriptions

| Bit   | Field          | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                           |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved       | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                             |
| 1-0   | USERINTMASKSET | R/WC   |       0 | MDIO user interrupt mask set for USERINTMASKED, respectively. Writing a bit to 1 will enable MDIO user command complete interrupts for that particular MDIOUSERACCESSn register. MDIO user interrupt for a particular MDIOUSERACCESSn register is disabled if the corresponding bit is 0. Writing a 0 to this register has no effect. |

## 14.5.10.10 MDIOUSERINTMASKCLR Register

The MDIO user interrupt mask clear register (MDIOUSERINTMASKCLR) is shown in Figure 14-241 and described in Table 14-259.

## Figure 14-241. MDIO User Command Complete Interrupt Mask Clear Register (MDIOUSERINTMASKCLR)

31

16

Reserved

R-0x0

15

2

1

0

Reserved

USERINTMASKCLEAR

R-0x0

RWC-0x0

LEGEND: RWC = Read/Write/Clear; R = Read only; n = value after reset

## Table 14-259. MDIOUSERINTMASKCLR Register Field Descriptions

| Bit   | Field            | Type   |   Reset | Description                                                                                                                                                                                                                                         |
|-------|------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | Reserved         | R      |       0 | Reserved.                                                                                                                                                                                                                                           |
| 1-0   | USERINTMASKCLEAR | R/WC   |       0 | MDIO user command complete interrupt mask clear for USERINTMASKED, respectively. Writing a bit to 1 will disable further user command complete interrupts for that particular MDIOUSERACCESSn register. Writing a 0 to this register has no effect. |

## 14.5.10.11 MDIOUSERACCESS0 Register

The MDIO user access register 0 (MDIOUSERACCESS0) is shown in Figure 14-242 and described in Table 14-260.

## Figure 14-242. MDIO User Access Register 0 (MDIOUSERACCESS0)

<!-- image -->

| 31      | 30      | 29      | 28       | 26   | 25      | 21   | 20   |         | 16   |
|---------|---------|---------|----------|------|---------|------|------|---------|------|
| GO      | WRITE   | ACK     | Reserved |      | REGADR  |      |      | PHYADR  |      |
| R/W/S-0 | R/W-0x0 | R/W-0x0 | R-0x0    |      | R/W-0x0 |      |      | R/W-0x0 |      |
| 15      |         |         |          |      |         |      |      |         | 0    |
| DATA    | DATA    | DATA    | DATA     | DATA | DATA    | DATA | DATA | DATA    | DATA |

R/W-0x0

LEGEND: R/W = Read/Write; R = Read only; S = Status; - n = value after reset

## Table 14-260. MDIOUSERACCESS0 Register Field Descriptions

| Bit   | Field    | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | GO       | R/W/S  |       0 | Go. Writing a 1 to this bit causes the MDIO state machine to perform an MDIO access when it is convenient for it to do so, this is not an instantaneous process. Writing a 0 to this bit has no effect. This bit is write able only if the MDIO state machine is enabled. This bit will self clear when the requested access has been completed. Any writes to the MDIOUSERACCESS0 register are blocked when the GO bit is 1. If byte access is being used, the GO bit should be written last. |
| 30    | WRITE    | R/W    |       0 | Write enable. Setting this bit to a 1 causes the MDIO transaction to be a register write, otherwise it is a register read.                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | ACK      | R/W    |       0 | Acknowledge. This bit is set if the PHY acknowledged the read transaction.                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 28-26 | Reserved | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 25-21 | REGADR   | R/W    |       0 | Register address. Specifies the PHY register to be accessed for this transaction.                                                                                                                                                                                                                                                                                                                                                                                                              |
| 20-16 | PHYADR   | R/W    |       0 | PHY address. Specifies the PHY to be accesses for this transaction.                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 15-0  | DATA     | R/W    |       0 | User data. The data value read from or to be written to the specified PHY register.                                                                                                                                                                                                                                                                                                                                                                                                            |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.10.12 MDIOUSERPHYSEL0 Register

The MDIO user PHY select register 0 (MDIOUSERPHYSEL0) is shown in Figure 14-243 and described in Table 14-261.

Figure 14-243. MDIO User PHY Select Register 0 (MDIOUSERPHYSEL0)

| 31       |          |            |          |            | 16         |
|----------|----------|------------|----------|------------|------------|
|          | Reserved |            |          |            |            |
|          | R-0x0    |            |          |            |            |
| 15       | 7        | 6          | 5        | 4          | 0          |
| Reserved | LINKSEL  | LINKINTENB | Reserved | PHYADDRMON | PHYADDRMON |
| R-0x0    | R/W-0x0  | R/W-0x0    | R-0x0    | R/W-0x0    | R/W-0x0    |

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

Table 14-261. MDIOUSERPHYSEL0 Register Field Descriptions

| Bit   | Field      | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                               |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                 |
| 7     | LINKSEL    | R/W    |       0 | Link status determination select. Set to 1 to determine link status using the MLINK pin. Default value is 0 which implies that the link status is determined by the MDIO state machine.                                                                                                                                   |
| 6     | LINKINTENB | R/W    |       0 | Link change interrupt enable. Set to 1 to enable link change status interrupts for PHY address specified in PHYADDRMON. Link change interrupts are disabled if this bit is set to 0. 0 = Link change interrupts are disabled. 1 = Link change status interrupts for PHY address specified in PHYADDRMON bits are enabled. |
| 5     | Reserved   | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                 |
| 4-0   | PHYADDRMON | R/W    |       0 | PHY address whose link status is to be monitored.                                                                                                                                                                                                                                                                         |

## 14.5.10.13 MDIOUSERACCESS1 Register

The MDIO user access register 1 (MDIOUSERACCESS1) is shown in Figure 14-244 and described in Table 14-262.

## Figure 14-244. MDIO User Access Register 1 (MDIOUSERACCESS1)

| 31      | 30      | 29      | 28       | 26   | 25      | 20   |         | 16   |      |
|---------|---------|---------|----------|------|---------|------|---------|------|------|
| GO      | WRITE   | ACK     | Reserved |      | REGADR  |      | PHYADR  |      |      |
| R/W/S-0 | R/W-0x0 | R/W-0x0 | R-0x0    |      | R/W-0x0 |      | R/W-0x0 |      |      |
| 15      |         |         |          |      |         |      |         | 0    |      |
| DATA    | DATA    | DATA    | DATA     | DATA | DATA    | DATA | DATA    | DATA | DATA |

R/W-0x0

LEGEND: R/W = Read/Write; R = Read only; S = Status; - n = value after reset

## Table 14-262. MDIOUSERACCESS1 Register Field Descriptions

| Bit   | Field    | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | GO       | R/W/S  |       0 | Writing a 1 to this bit causes the MDIO state machine to perform an MDIO access when it is convenient for it to do so, this is not an instantaneous process. Writing a 0 to this bit has no effect. This bit is write able only if the MDIO state machine is enabled. This bit will self clear when the requested access has been completed. Any writes to the MDIOUSERACCESS0 register are blocked when the GO bit is 1. If byte access is being used, the GO bit should be written last. |
| 30    | WRITE    | R/W    |       0 | Write enable. Setting this bit to a 1 causes the MDIO transaction to be a register write, otherwise it is a register read.                                                                                                                                                                                                                                                                                                                                                                 |
| 29    | ACK      | R/W    |       0 | Acknowledge. This bit is set if the PHY acknowledged the read transaction.                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 28-26 | Reserved | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 25-21 | REGADR   | R/W    |       0 | Register address; specifies the PHY register to be accessed for this transaction.                                                                                                                                                                                                                                                                                                                                                                                                          |
| 20-16 | PHYADR   | R/W    |       0 | PHY address; specifies the PHY to be accesses for this transaction.                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 15-0  | DATA     | R/W    |       0 | User data. The data value read from or to be written to the specified PHY register.                                                                                                                                                                                                                                                                                                                                                                                                        |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.10.14 MDIOUSERPHYSEL1 Register

The MDIO user PHY select register 1 (MDIOUSERPHYSEL1) is shown in Figure 14-245 and described in Table 14-263.

Figure 14-245. MDIO User PHY Select Register 1 (MDIOUSERPHYSEL1)

| 31       |          |            |          |            | 16         |
|----------|----------|------------|----------|------------|------------|
|          | Reserved |            |          |            |            |
|          | R-0x0    |            |          |            |            |
| 15       | 7        | 6          | 5        | 4          | 0          |
| Reserved | LINKSEL  | LINKINTENB | Reserved | PHYADDRMON | PHYADDRMON |
| R-0x0    | R/W-0x0  | R/W-0x0    | R-0x0    | R/W-0x0    | R/W-0x0    |

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

Table 14-263. MDIOUSERPHYSEL1 Register Field Descriptions

| Bit   | Field      | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                  |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved   | R      |       0 | Reserved                                                                                                                                                                                                                                                                                                                     |
| 7     | LINKSEL    | R/W    |       0 | Link status determination select. Set to 1 to determine link status using the MLINK pin. Default value is 0 which implies that the link status is determined by the MDIO state machine.                                                                                                                                      |
| 6     | LINKINTENB | R/W    |       0 | Link change interrupt enable. Set to 1 to enable link change status interrupts for PHY address specified in PHYADDRMON. Link change interrupts are disabled if this bit is cleared to 0. 0 = Link change interrupts are disabled 1 = Link change status interrupts for PHY address specified in PHYADDRMON bits are enabled. |
| 5     | Reserved   | R      |       0 | Reserved.                                                                                                                                                                                                                                                                                                                    |
| 4-0   | PHYADDRMON | R/W    |       0 | PHY address whose link status is to be monitored.                                                                                                                                                                                                                                                                            |