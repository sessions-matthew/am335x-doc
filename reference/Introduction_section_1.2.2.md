<!-- image -->

## 1.1 AM335x Family

## 1.1.1 Device Features

This architecture is configured with different sets of features in different devices. This technical reference manual details all of the features available in current and future AM335x devices. Some features may not be available or supported in your particular device. The features supported across different AM335x devices are detailed in your device-specific data manual.

## 1.1.2 Device Identification

Several registers help identify the type and available features of the device. The DEV\_FEATURE register in the control module is summarized in the Device Comparison section of your device-specific data manual, and Table 1-1 summarizes the Device\_ID register.

Table 1-1. Device\_ID (Address 0x44E10600) Bit Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                                                                                                                                    |
|-------|----------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-28 | DEVREV   |         | Device revision 0000b - Silicon Revision 1.0 0001b - Silicon Revision 2.0 0010b - Silicon Revision 2.1 See device errata for detailed information on functionality in each device revision. Reset value is revision-dependent. |
| 27-12 | PARTNUM  |         | Device part number 0xB944                                                                                                                                                                                                      |
| 11-1  | MFGR     |         | Manufacturer's ID 0x017                                                                                                                                                                                                        |
| 0     | Reserved |         | Read always as 0 0x0                                                                                                                                                                                                           |

## 1.2 Silicon Revision Functional Differences and Enhancements

This section describes the differences in functionality among different silicon revisions of AM335x. Enhancements introduced in silicon revisions are also described. For a description of silicon bugs that were fixed in later revisions of the device, see AM335x ARM Cortex-A8 Microprocessors (MPUs) Silicon Errata (literature number SPRZ360). Errata items that were fixed may or may not show up in this section.

## 1.2.1 Added RTC Alarm Wakeup for DeepSleep Modes

See Section 8.1.4.5, Wakeup Sources/Events .

PG1.0: RTC alarm will not wake up device from DeepSleep0 and RTC-only modes.

PG2.x: RTC alarm was added as a wake-up source from DeepSleep modes and RTC-only modes.

## 1.2.2 Changed BOOTP Identifier

See Section 26.1.9.4.2, BOOTP (RFC 951) and Errata Advisory 1.0.8.

## Introduction