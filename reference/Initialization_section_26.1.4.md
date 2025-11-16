<!-- image -->

www.ti.com

Figure 26-3. Public ROM Code Boot Procedure

<!-- image -->

## 26.1.4 Memory Map

## 26.1.4.1 Public ROM Memory Map

The on-chip ROM memory map is shown in Figure 26-4. The bottom part of the physical ROM contains the Secure ROM Code. The upper part holds the Public ROM Code. The Public ROM Code mapping consists in the following:

- Exception vectors
- CRC
- Dead loops collection
- Code and const data sections
- ROM Version

Figure 26-4. ROM Memory Map

<!-- image -->

Figure 26-5. ROM Memory Map

<!-- image -->

## Public ROM Exception Vectors

Table 26-1 lists the Public ROM exception vectors. The reset exception is redirected to the Public ROM Code startup. Other exceptions are redirected to their RAM handlers by loading appropriate addresses into the PC register.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

Table 26-1. ROM Exception Vectors

| Address   | Exception       | Content                               |
|-----------|-----------------|---------------------------------------|
| 20000h    | Reset           | Branch to the Public ROM Code startup |
| 20004h    | Undefined       | PC = 4030CE04h                        |
| 20008h    | SWI             | PC = 4030CE08h                        |
| 2000Ch    | Pre-fetch abort | PC = 4030CE0Ch                        |
| 20010h    | Data abort      | PC = 4030CE10h                        |
| 20014h    | Unused          | PC = 4030CE14h                        |
| 20018h    | IRQ             | PC = 4030CE18h                        |
| 2001Ch    | FIQ             | PC = 4030CE1Ch                        |

## Public ROM Code CRC

The Public ROM Code CRC is calculated as 32 bit CRC code (CRC-32-IEEE 802.3) for the address range 20000h-2BFFFh. The four bytes CRC code is stored at location 20020h.

## Dead Loops

Built-in dead loops are used for different purposes as shown in below Table 26-2. All dead loops are branch instructions coded in ARM mode. The fixed location of these dead loops facilitates debugging and testing. The first seven dead loops are default exception handlers linked with RAM exception vectors. The dead loops might be called directly from the user code. However there exists a special function which can be called from ROM Code in order to execute a dead loop. The function is an assembly code in ARM mode which takes the dead loop address from R0 register. The main purpose of the function is to go in a dead loop until the watchdog expires and resets the device, when device is a GP type. For an HS device, the function branches to the requested dead loop. The function is located at address 200C0h. In addition the function clears global cold reset status upon issuing the global SW reset.

Table 26-2. Dead Loops

| Address   | Purpose                                   |
|-----------|-------------------------------------------|
| 20080h    | Undefined exception default handler       |
| 20084h    | SWI exception default handler             |
| 20088h    | Pre-fetch abort exception default handler |
| 2008Ch    | Data abort exception default handler      |
| 20090h    | Unused exception default handler          |
| 20094h    | IRQ exception default handler             |
| 20098h    | FIQ exception default handler             |
| 2009Ch    | Validation tests PASS                     |
| 200A0h    | Validation tests FAIL                     |
| 200A4h    | Reserved                                  |
| 200A8h    | Image not executed or returned.           |
| 200ACh    | Reserved                                  |
| 200B0h    | Reserved                                  |
| 200B4h    | Reserved                                  |
| 200B8h    | Reserved                                  |
| 200BCh    | Reserved                                  |

## Code

This space is used to hold code and constant data.

## Public ROM Code Version

The ROM Code version consists of two decimal numbers: major and minor. It can be used to identify the ROM Code release version in a given IC (e.g., useful to identify an IC version). The ROM Code version is a 32bits hexadecimal value located at address 2BFFCh.

## 26.1.4.2 Public RAM Memory Map

The Public ROM Code makes use of the on chip RAM module connected to the L3 interconnect (further referred to as L3 RAM ). Its usage is shown in Figure 26-6. The Public RAM memory map ranges from address 402F0400h to 4030FFFFh on a GP Device .

Figure 26-6. Public RAM Memory Map

<!-- image -->

Figure 26-7. Public RAM Memory Map

<!-- image -->

## Download Image

This area is used by the Public ROM Code to store the downloaded boot image. It can be up to 109KB on the GP Device and 46KB for the HS device.

## Public Stack

Space reserved for stack.

## RAM Exception Vectors

The RAM exception vectors enable a simple means for redirecting exceptions to custom handlers. Table 26-3 shows content of the RAM space reserved for RAM vectors. The first seven addresses are ARM instructions which load the value located in the subsequent seven addresses into the PC register. Theses instructions are executed when an exception occurs since they are called from the ROM exception vectors. Undefined, SWI, Unused and FIQ exceptions are redirected to a hardcoded dead loop. Pre-fetch abort, data abort, and IRQ exception are redirected to pre-defined ROM handlers. User code can redirect any exception to a custom handler either by writing its address to the appropriate location from 4030CE24h to 4030CE3Ch or by overriding the branch (load into PC) instruction between addresses from 4030CE04h to 4030CE1Ch.

<!-- image -->