## 27.2 Registers

## 27.2.1 Debug Resource Manager (DebugSS\_DRM) Registers

Table 27-3. Debug Resource Manager (DRM) Registers

| Offset   | Peripheral     | Register Name                  |
|----------|----------------|--------------------------------|
| 200h     | Watchdog Timer | Watchdog_Timer_Suspend_Control |
| 204h     | DMTimer-0      | DMTimer_0_Suspend_Control      |
| 208h     | DMTimer-1      | DMTimer_1_Suspend_Control      |
| 20Ch     | DMTimer-2      | DMTimer_2_Suspend_Control      |
| 210h     | DMTimer-3      | DMTimer_3_Suspend_Control      |
| 214h     | DMTimer-4      | DMTimer_4_Suspend_Control      |
| 218h     | DMTimer-5      | DMTimer_5_Suspend_Control      |
| 21Ch     | DMTimer-6      | DMTimer_6_Suspend_Control      |
| 220h     | EMAC           | EMAC_Suspend_Control           |
| 224h     | USB2.0         | USB2_Suspend_Control           |
| 228h     | I2C-0          | I2C_0_Suspend_Control          |
| 22Ch     | I2C-1          | I2C_1_Suspend_Control          |
| 230h     | I2C-2          | I2C_2_Suspend_Control          |
| 234h     | eHRPWM-0       | eHRPWM_0_Suspend_Control       |
| 238h     | eHRPWM-1       | eHRPWM_1_Suspend_Control       |
| 23Ch     | eHRPWM-2       | eHRPWM_2_Suspend_Control       |
| 240h     | CAN-0          | CAN_0_Suspend_Control          |
| 244h     | CAN-1          | CAN_1_Suspend_Control          |
| 248h     | PRU-ICSS       | PRU_ICSS_Suspend_Control       |
| 260h     | DMTimer-7      | DMTimer_7_Suspend_Control      |

<!-- image -->

<!-- image -->

www.ti.com

31

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

Figure 27-1. Suspend Control Registers

| Reserved    | Reserved   | Reserved                   | Reserved   | Reserved   | Reserved   |
|-------------|------------|----------------------------|------------|------------|------------|
| R-0h        | R-0h       | R-0h                       | R-0h       | R-0h       | R-0h       |
| 7           | 4          | 3                          | 2          | 1          | 0          |
| Suspend_Sel |            | Suspend_ Default_ Override | Reserved   |            | SensCtrl   |
| R/W-0h      |            | R/W-0h                     | R-0h       |            | R/W-0h     |

Table 27-4. Suspend Control Registers Field Descriptions

| Bit   | Field                      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                           |
|-------|----------------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                       |
| 7-4   | Suspend_Sel                | R/W    | 0h      | Suspend signal selection. Selects which suspend signal affects the peripheral. Only valid when Suspend_Default_Override=0 and SensCtrl=1. When read, these bits reflect the default suspend signal. 0000b: Cortex-A8 suspend signal. All other values are reserved.                                                                                   |
| 3     | Suspend_ Default_ Override | R/W    | 0h      | Enable or disable the override value in Suspend_Sel. 0: Suspend_Sel field will select which suspend signal reaches the peripheral. 1: Suspend_Sel field ignored. Default suspend signal will reach the peripheral.                                                                                                                                    |
| 2-1   | Reserved                   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                       |
| 0     | SensCtrl                   | R/W    | 0h      | Sensitivity Control for suspend signals. When Suspend_Default_Override=1, this bit is ignored and read as a 1. When Suspend_Default_Override=0: 0: Suspend signal will not reach the peripheral. Peripheral will act as normal even during a debug halt. 1: Suspend signal will reach the peripheral. Peripheral will be suspended during debug halt. |

8

<!-- image -->

## Appendix A

## Glossary

1

1MS- One milisecond

2

2D- Two Dimensional

3

3A- AF + AE + AWB

3D- Three Dimensional

3G- 3rd Generation of mobile communication systems

3GPP- 3rd Generation Partnership Project

8

8B- 8 bits

10

10B/8B- 10 bit to 8 bit conversion (i.e., 8B/10B decoding)

A

A/D- Analog to Digital Converter

ABB- Adaptive Body Bias

ABBLDO- Adaptive Body Bias Low Drop Out

ABS- Absolute Value

ACB- AC-bias frequency

ACBI- AC-bias line transitions per interrupt

ACE- ASIC Compiler Environment.

ACK- Acknowledge

ADC- Analog-to-Digital Converter/Conversion.

ADMA- Advanced DMA

ADPLL- All Digital Phase Locked Loop. A closed loop frequency control system whose function is based on the phase-sensitive detection of the phase difference between the input signal and the output signal of the controlled oscillator (CO).

AER- Advanced Error Reporting (PCIe)

AES- Advanced Encryption Standard

<!-- image -->

www.ti.com

AET- Advanced Event Triggering - this capability can be used to debug complex problems as well as understand performance characteristics of user applications

AF- Auto Focus

AFE- Analog Front End

AFSX- Audio transmit frame synchronization

AHB- Advanced High-performance Bus

AHB-AP- Advanced High-performance Bus - Access Port

AIC- Analog Interface Chip.

ALE- Address Latch Enable

AM- Amplitude Modulation

AMBA- Advanced Micro-Controller Bus Architecture

AMMU- Attribute Memory Management Unit

ANSI- American National Standards Institute

AP- Address Protection

APB- Advanced Peripheral Bus

APB-AP- Advanced Peripheral Bus - Access Port

APE- Application Engine

API- Application Programming Interface

APLL- Analog Phase-Locked Loop

APWM- Asymmetrical Pulse Width Modulation (eCAP module related)

AR- Automatic Reload

ARGB- Alpha Red Green Blue

ARI- Alternative Routing-ID Interpretation (PCIe)

ARM- Advanced RISC Machine

ASCII- American Standard Code for Information Interchange

ASIC- Application-Specific Integrated Circuit

ASP- Application-Specific Peripheral

ASPM- Active State Power Management: Automatic PM in PCIe link layer FSM (PCIe)

ATA- Interface standard for the connection of storage devices (Advanced Technology Attachment)

ATAPI- ATA Packet Interface

ATB- AMBA Advanced Trace Bus

ATS- Address Translation Service (PCIe)

AVB- Audio Video Bridging

AVS- Adaptive Voltage Scaling

AWB- Auto White Balance

## B

C

AWSAudio Word Select

AXIAdavced eXtensible Interface

BByte, 8 bits

BARn-

Base Address Register (PCIe)

BBBus Busy

BCDBinary-Coded Decimal.

BCHBose-Chaudhuri-Hocquenghem (CRC Code)

BCMBIST Combiner Module

BDFBus / Device/ Function: (PCIe) function identifier

BEBig Endian.

BFSWBuffer Switch

BGABall Grid Array

BGAPBand Gap

BGTBlock Guard Time

BIOSBasic Input/Output System. First software run after reset. Known also as ROM Code.

BISTBuilt-In Self-Test

BIUBus Interface Unit

BLBuffer Logic

BMEBus Master Enable (PCI CFG bit)

BNCBritish Naval Connector, Bayonet Nut Connector, or Bayonet Neill Concelman

BOFBeginning of Frame

BOLBeginning of Line

BPPBits Per Pixel

BSBlock Synchronization

BSPBuffered Serial Port.

BTABus Turn Around

BWBand Width

BWMBand Width Manager (functional entity in the TMS320C66x DSP CorePac )

BWSBaseband Word Select

CABACContext-Adaptive Binary Arithmetic Coding

CAFCombing Artifacts Calculation

CALC3Transform and Quantization Calculation Engine

CANController Area Network

<!-- image -->

<!-- image -->

## www.ti.com

CAS- Column Address Strobe

CAVLC-

Context-Adaptive Variable Length Coder

CB- Copy Back

CBC- Cipher Block Chaining

CBP- Coded Block Pattern

CBUF-

Circular Buffer (Associated with OCMC)

CC- Channel Controller

CCC- Command Completion Coalescing feature

CDP- Coprocessor Data Operation

CDR- Clock Data Recovery

CE- Chip Enable

CEA-861-D- Video standard. It defines the video timing requirements, discovery structures, and data transfer structure.

CEC- Consumer Electronics Control

CFI- Common Flash Interface device

CH- Configuration Header. To use different settings than ROM Code defaults, i.e. clock frequencies, SDRAM settings, GPMC settings.

CID- Card Identification Number

CIF- Common Intermediate Format.

CIR- Consumer Infra Red

CLB- Command List Base Address

CLE- Command Latch Enable

CLK- Clock

CLO- Command List Override feature

CLUT- Color Look-Up Table

CM- Clock Management

CMOS-

Complimentary Metal Oxide Semiconductor

CO- Controlled Oscillator

CODEC- Coder/Decoder or Compression/Decompression. A device that codes in one direction of transmission and decodes in another direction of transmission.

COS- Class Of Service

CP15- Arm® Cortex®-A15 system control coprocessor. This coprocessor controls and provides status information for the functions implemented in the main processor

CPFROM-

Customer Programable eFuse ROM

CPPI- Communications Port Programming Interface

CPR- Color Phase Rotation

CPS- Cell Search Platform

## D

<!-- image -->

www.ti.com

CPSR- Current Program Status Register

CPU- Central Processing Unit

CRC- Cyclic Redundancy Check

CS- Chip-Select

CSL- Chip Support Library

CSWR- Closed switch retention

CTM- Counter-Timer Module

CTR- Hardware block for CCTrCh processing

CTRL- Control

CTS- Clear to Send

ConnID- Connection Identifier.An Initiator Module Identifier. A ConnID is transmitted in-band with the request and is used for security and error logging mechanism.

D2H- Device to Host transfer of a FIS

DAC- Digital to Analog Converter

DAP- Debug Access Port

DBI- Display Buffer Interface

DC- Direct Current

DCAN- CAN Controller Module

DCC- Duty Cycle Correction Circuit

DCD- Data Carrier Detect

DCO- Digitally Controlled Oscillator

DCT- Discrete Cosine Transform.

DDC- Display Data Channel

DDR- Double Data Rate

DE- Data Enable

DED- Double Error Detection

DEI- Deinterlacer

DES- Data Encryption Standard.

DES3DES- Data Encryption Standard and triple DES

DFF- Data Flip-Flop

DFT- Design For Test

DIN- Data In

DIR- Digital audio Interface Receiver

DISPC- Display Controller

<!-- image -->

## www.ti.com

## E

DL- Data Length

DLB- Data Loopback.

DLL- Delay-Locked Loop

DLLP- Data Link Layer Packet: PCIe (compare PLP, TLP)

DMA- Direct Memory Access.

DMC- Digital Motor Control

DMEM- Data Memory

DMM- Dynamic Memory Management

DMT- Display Monitor Timing

DO- Data Out

DPC- Defect Pixel Correction

DPI- Display Parallel Interface

DPLL- Digital Phase-Locked Loop. Digital implementation of PLL.

DPS- Digital Power Switching

DRDY- Data Ready

DRM- Digital Rights Management

DS- Downstream: from the host (or a hub) to a device (or hub).

DSP- Digital Signal Processor.

DSR- Data Set Ready

DSS- Display Sub-System. Also DISS

DTBC- Data Buffer Controller

DTC- Debug and Trace Controller

DTCM- Data Tightly Coupled Memory

DTR- Data Transmit Ready

DVFS- Dynamic Voltage and Frequency Scaling

DVI- Digital Video Interface

DWORD- Double WORD (32-bit sized portion of data)

EAV- End of Active Video

ECAM- Enhanced Configuration Access Mechanism (PCIe)

ECC- Error Checking and Correction. Also Error Correction Code.

ECD3- Entropy Coder/Decoder

ECRC- End-to-end Cyclic Redundancy Check (optional, compare LCRC)

ED- Endpoint Descriptor

EDC-

Error Detection Code

F

EDIEdge Directed Interpolation

EDMA-

Enhanced DMA

EDMA\_TPCC- Enhanced DMA Third Party Channel Controller

EDMA\_TPTC- Enhanced DMA Third Party Transfer Controller

EEE- Energy Efficient Ethernet

EEPROM-

Electrically Erasable Programmable Read Only Memory

EFUSE- Electrical Fuse. A one-time programmable memory location usually set at the factory

EMC- External Memory Controller

EMI- Electromagneric interference

EMIF- External Memory Interface

EOB- End of Block

EOF- End of Frame

EOL- End of Line

EOP- End of Packet

EOT- End of Transfer

EP- Entry Point. Also End Point in PCIe controller context.

EPM- Emulation Pin Manager

ES- Erase Status

ESC- Escape

ESR- Event Set Register

ETB- Embdedded Trace Bus

ETM- Embedded Trace Macrocell

EVM- Evaluation Module

FB- Received FISes base address

FBB- Forward Body-Bias

FC- Frame Counter

FCLK- Functional Clock

FCS- Frame Check Sequence

FD- Face Detect

FE- Framing Error

FF- Flip-Flop

FIFO- First In First Out

FIQ- Fast Interrupt Request. See ISR.

FIR- Fast Infrared

<!-- image -->

<!-- image -->

## www.ti.com

G

H

FLR- Function Level Reset (PCIe)

FM- Frequency Modulation

FMD- Film Mode Detection

FPGA- Field Programmable Gate Array.

FPKA- Fast-Public Key Accelerator

FROM- eFuse ROM

FS- Full-Speed

FSM- Finite State Machine.

FTS- Fast Training Sequence (PCIe)

FW- Firewall

GDP- Generic Dot Product

GFX- Graphics

GHB-

Global History Buffer

GIC- Secure interrupt controller

GMII- Gigabit Media Independent Interface

GP- General-purpose

GPIO- General Purpose Input/Output

GPMC- General Purpose Memory Controller

GPU- Graphics-processing unit

GT/s- Gigatransfers per second

GZ- Ground Zero

H.263- Video Codec Standard

H.264- Video Codec Standard

H/W- Hardware

H2D- Host to Device transfer of a FIS

HAL- Hardware Abstraction Layer

HBA- Host bus adapter

HBP- Horizontal Back Porch

HC- Host Controller

HCI- Host Controller Interface

HD- High Definition

HDCP- High-bandwidth Digital Content Protection

HDD-

Hard-disk drive

I

HDMI- High-Definition Multimedia Interface

HDTV- High-Definition Television

HFP- Horizontal Front Porch

HLOS- High-Level Operating System

HMI- Human Machine Interface

HNP- Host Negotiation Protocol (OTG feature)

HPF- High-Pass Filter

HS- High-Speed

HSDPA- High Speed Downlink Packet Access

HSSCLL- High-Speed Serial Control Channel

HSUPA- High Speed Uplink Packet Access

HSW- Horizontal Synchronization Pulse Width

HSYNC- Horizontal Synchronization.

HW- Hardware

HWA- Hardware Accelerators.

HWOBS- Hardware Observability

I/F- Interface

I/O- Input/Output

I2C- Inter-Integrated Circuit

I2S- Inter-IC Sound

IA- Identifier Address

IATU- Internal Address Translation Unit (PCIe controller)

IBR- An ATU Inbound Region (PCIe)

ICE- In-Circuit Emulation

ICEPICK- Generic TAP for emulation control

ICLK- Interface Clock

ICONT- Imaging Controller

ICR- Intersystem Communication Registers

ID- Identification

IDCT- Inverse Discrete Cosine Transform. See DCT.

IDO- ID-based Ordering (PCIe)

IIS- Inter-IC Sound

ILF3- Improved Loop Filter engine

<!-- image -->

IDEIntegrated Development Environment. A programming environment integrated into an application.

<!-- image -->

## www.ti.com

IMInitiator Module. A module is an initiator whenever it is able to initiate read and write requests to the chip interconnect (typically: processors, DMA, etc.).

IME3Improved Motion Estimation engine

INTInterrupt

INTCInterrupt Controller

IPIntellectual Property

IPCInterprocessor Communication. Also referred to as "mailbox" on occasion

IPE3Intra Prediction Estimation engine

IPUImage-processing unit

IQInverse Quantization

IRIncremental Redundancy Buffer

IRQInterrupt Request.

ISAInstruction Set Architecture

ISEI/O Space Enable: (PCI CFG bit)

ISOIsochronous.

ISPImage Signal Processor

ISRInterrupt Service Routine.

ISTInterrupt Service Thread.

ITCCHENIntermediate transfer completion chaining enable.

ITCINTENIntermediate transfer completion interrupt enable.

ITCMInstruction Tightly Coupled Memory

IVAImage and Video Accelerator

IVA-HDHigh Definition Image and Video Accelerator

IrDAInfrared Data Association.

JEDECJoint Electronic Devices Engineering Council

JPEGJoint Photographics Experts Group

JTAGJoint Test Action Group.

KBKilobyte, 1024 Bytes

KbpsKilobits per second

L1Level 1 cache/memory

L2Level 2 cache/memory

L3First level of interconnect

J

K

L

<!-- image -->

www.ti.com

L4- Second level of interconnect

LA- Logical Address

LAN- Local Area Network

LBA- Logical Block Addressing

LC- Logical Channel

LCD- Liquid Crystal Display.

LCRC- Link Cyclic Redundancy Check (mandatory, compare ECRC)

LCh- Logical DMA Channel. Also LCH

LD- Lens Distortion

LDO- Low Dropout

LE- Little Endian.

LEC- Line End Code

LED- Light Emitting Diode.

LF- Loop Filter

LFPS- Low Frequency Periodic Signaling defined in USB 3.0 SuperSpeed standard

LFSR- Linear-Feedback Shift Register

LH- Local Host

LINK- Link Layer Device

LISA- Local Interconnect and Synchronization Agent

LLC- Link Layer Control

LLP- Low-Level Protocol

LP- Low-Power, operation mode for PHY

LPAE- Large Physical Address Extensions

LPM- Low Power Mode (also known as LPMODE)

LPP- Lines Per Panel

LRU- Least Recently Used

LS- Low-Speed

LSB- Least Significant Bit

LSE- IVA Load and Store Engine

LSM- LISA Section Manager

LSR- Linear Shift Register

LSW- Least Significant Word

LTR- Latency Tolerance Reporting (PCIe)

LTSSM- Link Training and Status State Machine: In PCIe - PM FSM of PCIe physical layer

LUT- Look-up Table

<!-- image -->

## www.ti.com

## M

LVCMOS- Low Voltage Complementary Metal Oxide Semiconductor

LVDS- Low-Voltage Differential Signaling

M2- Micro Memory

MAC- Message Authentication Code

MAP-

Maximum a posteriori algorithm

MB- Megabyte, 1024 KB

MBAFF-

MB-Level Adaptive Frame/Field

MBMS- Multimedia Broadcast Multicast Service

MC3- Motion Compensation Engine

McSPI-

Multichannel Serial Peripheral Interface

MCU- Microcontroller Unit. Refers to the MPU.

MDIO- Management Data Input/Output

MDMA- Modem DMA. Also Master DMA port of the DSPSS TMS320C66x CorePac.

MDT- Motion Detection

ME- Motion Estimation

MEMIF-

Memory Interface

MIF- Memory InterFace

MII- Media Independent Interface

MIPI-

Mobile Industry Processor Interface

MIR- Medium Infrared

MJPEG- Motion JPEG

MMR- Memory Mapped Register

MMU- Memory Management Unit.

MP3- MPEG Layer 3.

MPEG- Motion Pictures Expert Group.

MPEG1- The first MPEG compression scheme specification.

MPS- Maximum Packet Size

MPU- Microprocessor Unit.

MRRS- Maximum Read Request Size (PCIe)

MS- Memory Stick

MSB-

Most Significant Bit

MSGIF-

Message Interface

MUX- Multiplex/Multiplexer

MV-

Motion Value

## N

## O

## P

<!-- image -->

Mb- Megabit

Mbps- Mega bits per second

Modem- Modulator Demodulator

MuxMode- 3 bits field of the PIN/PAD Control register field which enables to change the mode. Mode programming is assumed by software and selects a function on the device external interface.

N/ANot Applicable. Also Not Available.

NACNetwork Access Control

NANDNAND Flash memory.

NIUNetwork Interface Unit

NMINonmaskable Interrupt. An interrupt that can be neither masked nor disabled.

NOPNo OPeration (DSP/CPU instruction)

NORA type of flash memory

NRZNon-Return-to-Zero

NTSCNational Television System Committee. Television broadcast system.

NVICNested Vectored Interrupt Controller

OCMOn-chip Memory

OCMCOn-chip Memory Controller

OCPOpen-Core Protocol

OEOutput Enable

OMAPOpen Multimedia Application Platform

OOBOut of Band signaling

OPPOperating Performance Point

OSOperating System

PA- Program Address

PATA- Parallel-ATA

PBIAS- PMOS Bias transistor to provide the bias voltage to extended drain IOs

PC- Program Counter

PCI- Peripheral Component Interconnect.

PCLK- Pixel Clock

PCM- Pulse Code Modulation.

PCS- Physical Coding Sublayer (component related to PCIePHY)

PDProgram Data

<!-- image -->

## www.ti.com

PDA- Personal Digital Assistant

PDC- Power-down Controller

PE- Parity Error

PFPW-

Prefetch and Prewrite posting engine

PHY- Physical Layer Device

PI- Pixel Interpolation

PID- Protocol Identifier. The PID register is used in Windows CE mode only.

PIO- A programmed input/output transfer supported by IDE devices

PIPE3- Physical Interface for PCI Express rev.3.0

PLD- Programmable Logic Devices

PLL- Phase-Locked Loop.

PM- Programming Model

PMA- Physical Media Attachment sublayer

PMEM- Program Memory

PMFW- Power Management FrameWork

PMIC- Power management Integrated Circuit

PMP- Power Management Port

PMU- Performance Monitoring Unit

POR- Power-On Reset

PPA- Primary Protected Application.

PPC- Palm-size PC

PPI- Physical Layer Protocol Interface

PPL- Pixels per Line

PPM- Parts per million

PRCM- Power, Reset and Clock Management

PRD- Physical Region Descriptor

PRM- Power and Reset manager

PRT- PRD Table

PS- Packet Start

PSC- Prescaler Counter

PSS- Program Suspend Status

PT- Packet Type

PTI- Parallel Trace Interface

PTV- Prescale Clock Timer Value. Sets the value of the divisor used in scaling the clock.

## Q

## R

<!-- image -->

www.ti.com

PWLPulse Width Light (modulator). A 4096-bit randomsequence generator that provides control of the LCD backlighting and keypad.

PWMPulse Width Modulation

PaRAMProgrammable RAM that stores 32-byte channel transfer definition that EDMA channels, QDMA channels, and linking uses.

QDMA- Quick DMA

QIQ- Quantization and Inverse Quantization

QOS- Quality of Service

QP- Quantization Parameter

QSPI- Quad Serial Peripheral Interface

R/WRead/Write. Also RW.

R5Release 5 of 3GPP specifications on IMS and HSDPA standards

R6Release 6 of 3GPP specifications on Wireless LAN networks, HSUPA, MBMS and enhancements to IMS standards

RAMRandom Access Memory.Fast-access but volatile memory type.

RCPCIe Root Complex

RDRReceive Data Register

RERead Enable

REQRequest

RFRadio Frequency

RFFRetention Flip-Flop

RFUReserved for Future Use

RGBRed Green Blue

RGBARed Green Blue Alpha

RGMIIReduced Gigabit Media Independent Interface

RIRing Indicator

RISCReduced Instruction Set Computing. A CPU whose instruction set and related decode mechanism are much simpler than those of microprogrammed complex instruction set computers. The result is a higher instruction throughput and a faster real-time interrupt service response from a smaller, cost-effective chip.

RMReed-Muller code

RMIIReduced Media Independent Interface

RNGRandom Number Generator

RORead Only

ROMRead Only Memory. A semiconductor storage element containing permanent data that cannot be changed.

<!-- image -->

## www.ti.com

RSS-

Reset System Simulator

RST- Reset

RT- Real-Time

RTA- Retention Till Access

RTL- Register Transfert Level

RTOS-

Real-Time Operating System

RTS- Request to Send

RV- RealVideo (codec)

RVLC- Reversible Variable Length Coder

RX- Receive/Receiver

RXD- Receive Data

RXN- PHY differential receiver (de-serializer) negative line

RXP- PHY differential receiver (de-serializer) positive line

S

S/PDIFSony/Philips Digital Interface

S/WSoftware

SAFStandby Associated Function

SAMSignal Amplitude Modulation

SARSave and Restore. Hardware context saving for power saving.

SAVStart of Active Video

SBSilicon Backplane (Trade Mark)

SBCStream Buffer Controller

SBHSynchronization Box Handler

SCLSerial Clock. Programmable serial clock used in the I2C interface. Also SCLK.

SCMSystem Control Module

SCPSerial Configuration Port

SCTMSystem Counter Timer Module

SCUSnoop Control Unit

SDAlso Standard Definition (television system).

SDASerial Data. Serial data bus in the I2C interface.

SDMAThe Slave DMA port of the DSPSS TMS320C66x CorePac

SDPSoftware Development Platform

SDRSingle Data Rate

SDRAMSynchronous Dynamic Random Access Memory

SDRCSDRAM Controller.

<!-- image -->

SDTV- Standard Definition Television

SE- Secure Environment.Execution environment inside a device, which is protected against tampering

SEC- Single Error Correction

SECDED- Single-Error Correction Dual-Error Detection

SFI- Serial Flash Interface

SGX- Accronym for Grafics Accelerator

SIF- Source Input Format

SIMD- Single Instruction-Stream, Multiple Data-Stream

SIR- Slow Infrared

SL2- Shared Level 2 (memory/interface)

SL2IF- Shared L2 Interface

SLC- Single Level Cell devices

SLM- Static Leakage Management

SMC- Secure Monitor Call

SMP- Symmetric Multiprocessor Platform

SMPS- Switch Mode Power Supply

SMSET- Software Message and System Event Trace module

SOC- System-On-a-Chip

SOF- Start Of Frame

SP- Serial Port or Small Page

SPC- Serial Port Control

SPI- Serial Peripheral Interface. A signaling protocol for exchanging serial data.

SR- SmartReflex

SR3-APG- SmartReflex3 Automatic Power Gating

SRAM- Static Random Access Memory

SRC- Sample Rate Conversion

SRMD- Single Request, Multiple Data

SRP- Session Request Protocol (OTG feature)

SS- Subsystem

SSC- Spread Spectrum Clocking

SSD- Solid State Drive

ST- Start Timer

STC- Store from Coprocessor (to memory) or System Time Clock, which is the master clock in an MPEG2 encoder or decoder system.

STM- Synchronous Transfer Mode or Store Multiple.

<!-- image -->

## www.ti.com

STNSuper-Twist Nematic. A technique for improving LCD display screens by twisting light rays.

SVCSupervisor Call

SWSoftware

SWISoftware Interrupt

SXGASuper eXtended Graphics Array

SYNCDIMTransfer synchronization dimension.

SYSCTRLIVA System Control module

TATarget Agent

TAPTest Access Port

TCTraffic Controller. Allows asynchronous operation among the external memory interface, the MPU, and the DSP. Also, in PCI Express context this means Traffic Class, mapped to a virtual channel

TCCHENTransfer complete chaining enable.

TCINTENTransfer complete interrupt enable.

TCKTest Clock

TCMTightly Coupled Memory

TDTransfer Descriptor, in PCI Express this means TLP Digest (see also ECRC)

TDITest Data Input

TDMTime Division Multiplex/Multiplexing

TDOTest Data Output

TERC4TMDS Error Reduction Coding

TFTThin Film Transistor. A type of LCD flat panel display screen in which each pixel is controlled by one to four transistors.

TITexas Instruments

TILERTiling Isometric Lightweight Engine for Rotation

TLBTranslation Lookaside Buffer. A cache that contains entries for virtual-to-physical address translation and access permission checking.

TLPTransaction Layer Packet: PCIe (compare PLP, DLLP)

TMTarget Module. A target module cannot generate read/write requests to the chip interconnects, but respond to these requests. However it may generate interrupts or DMA request to the system (typically: peripherals, memory controllers).

TMDSTransition Minimized Differential Signaling. A technology for transmitting high-speed serial data and is used by the DVI and HDMI video interfaces.

TMSTest Mode Select

TOCTable of Contents

TPTiny Page

TPHTLP Processing Hints (PCIe)

T

U

## V

TPIUTrace Port Interface Unit

TRTranfer Request

TRMTechnical Reference Manual

TRSTTest Reset

TS-

Transmission Start

TSHUTTemperature Shutdown.

TTLTransistor Transistor Logic

TWLTable Walking Logic

TXTransmit//Transmitter

TXDTransmit Data

TXNPHY differential transmitter (serializer) negative line

TXPPHY differential transmitter (serializer) positive line

UARTUniversal Asynchronous Receiver/Transmitter. Another name for the asynchronous serial port.

USBUniversal Serial Bus.

USSEUniversal Scalable Shader Engine

VAVirtual Address

VBPVertical Back Porch

VBUFVirtual Frame Buffer

VCVirtual Channel

VC-1Video Codec Standard

VCAVia Channel Array technology

VCOVoltage Controlled Oscillator

VDMAVideo Direct Memory Access module

VESAVideo Electronics Standards Association

VFPVertical Front Porch

VGAVideo Graphics Array. An industry standard for video cards.

VIDVLAN Identifier

VIPVideo Input Port

VLANVirtual Local Area Network

VLCVariable Length Decoder

VLDVariable Length Coder

VLIWVery Long Instruction Word

VMODE-

Bi-level voltage control interface

<!-- image -->

www.ti.com

<!-- image -->

## www.ti.com

VPE- Video Processing Engine

VR- Voice Recognition

VS- Vertical Synchronization

VSW- Vertical Synchronization Pulse Width

VSYNC- Vertical Synchronization. A bidirectional vertical timing signal occurring once per frame with a pulse-width defined as an integral number of lines (half-lines for interlaced mode). Also VS.

## W

WB- Write Buffer

WC- Word Count

WD- Watchdog. A timer that requires the user program or OS periodically write to the count register before the counter underflows and triggers a reset.

WDT- Watchdog Timer. See WD.

WE- Write Enable

WFI- Wait For Interrupt

WIR- Wait In Reset

WNP- Write Non-Posted

WP- Write Protect

WT- Write Through

WTBU- Wireless Terminal Business Unit

Word16- 16 bits word

X

X-LOADER- A user-defined pre-operating system bootstrap code that resides at the beginning of the external flash.

XIP- eXecution In Place

XMC- Extended Memory Controller (a functional entity in the TMS320C66X DSP CorePac)

Y

YUV- Luminance-Bandwidth-Chrominance

e

eCAP- Enhanced Capture Module

x

xHCI- Extensible Host Controller Interface

## Revision History - Version Q

NOTE: Page numbers for previous revisions may differ from page numbers in the current version.

| Changes from April 1, 2017 to December 31, 2019 (from P Revision (March 2017) to Q Revision) ...........................                                                                                                                                                                                                                                                                        | Page                                                              |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------|
| • Updated Added RTC Alarm Wakeup for DeepSleep Modes section. ...........................................................                                                                                                                                                                                                                                                                       | 174                                                               |
| • Added Note. .............................................................................................................................                                                                                                                                                                                                                                                     | 240                                                               |
| • Updated Note. ..........................................................................................................................                                                                                                                                                                                                                                                      | 254                                                               |
| • Added Note. .............................................................................................................................                                                                                                                                                                                                                                                     | 258                                                               |
| • Updated RX_EOF bit description in the RX L2 Status table. .....................................................................                                                                                                                                                                                                                                                               | 266                                                               |
| • Updated SOFT_RST_N bit type from R to R/W in CTRL Register.                                                                                                                                                                                                                                                                                                                                   | ............................................................. 276 |
| • Updated EP_TMR_CAP_CFG bit reset to FFh in IEP_TMR_CAP_CFG Register. ...........................................                                                                                                                                                                                                                                                                              | 419                                                               |
| • Updated CAP_1ST_EVENT_EN bit description for the IEP_TMR_CAP_CFG Register.                                                                                                                                                                                                                                                                                                                    | ..................................... 420                         |
| • Updated CAPR_VALID bit description for the IEP_TMR_CAP_STS Register. ................................................                                                                                                                                                                                                                                                                         | 421                                                               |
| • Updated PD_WD_TIME bit description for the IEP_PD_WD_TIM Register.                                                                                                                                                                                                                                                                                                                            | ................................................... 455           |
| • Updated Table note for GPMC Signal List table. ..................................................................................                                                                                                                                                                                                                                                             | 601                                                               |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_0 Register.                                                                                                                                                                                                                                                                                                                          | ............................................. 727                 |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_1 Register.                                                                                                                                                                                                                                                                                                                          | ............................................. 741                 |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_2 Register.                                                                                                                                                                                                                                                                                                                          | ............................................. 755                 |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_3 Register.                                                                                                                                                                                                                                                                                                                          | ............................................. 769                 |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_4 Register. .............................................                                                                                                                                                                                                                                                                            | 783                                                               |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_5 Register.                                                                                                                                                                                                                                                                                                                          | ............................................. 797                 |
| • Updated BASEADDRESS bit description for the GPMC_CONFIG7_6 Register.                                                                                                                                                                                                                                                                                                                          | ............................................. 811                 |
| • Updated RTC Only section. .........................................................................................................                                                                                                                                                                                                                                                           | 1210                                                              |
| • Updated Note. .........................................................................................................................                                                                                                                                                                                                                                                       | 1221                                                              |
| • Updated Note. .........................................................................................................................                                                                                                                                                                                                                                                       | 1221                                                              |
| • Updated Spread Spectrum Clocking (SSC) section. .............................................................................                                                                                                                                                                                                                                                                 | 1221                                                              |
| • Updated Watchdog and Secure Timer Clock Selection (For Secure Devices only). ........................................                                                                                                                                                                                                                                                                         | 1235                                                              |
| • Updated Watchdog Timer section. .................................................................................................                                                                                                                                                                                                                                                             | 1242                                                              |
| • Updated Global Warm Software Reset (GLOBAL_SW_WARM_RST) section. ..............................................                                                                                                                                                                                                                                                                               | 1243                                                              |
| • Added EDMA Shadow Regions table. .............................................................................................                                                                                                                                                                                                                                                                | 1598                                                              |
| • Updated ETYPE Bit Description for all QxEy Registers. ........................................................................                                                                                                                                                                                                                                                                | 1682                                                              |
| • Added Note. ...........................................................................................................................                                                                                                                                                                                                                                                       | 1839                                                              |
| • Updated Example Timing Diagram for Sequencer image. ......................................................................                                                                                                                                                                                                                                                                    | 1841                                                              |
| • Updated IDLECONFIG Register. ...................................................................................................                                                                                                                                                                                                                                                              | 1863                                                              |
| • Updated TS_CHARGE_STEPCONFIG Register. ................................................................................                                                                                                                                                                                                                                                                       | 1865                                                              |
| • Updated SEL_RFP_SWC_2_0 bit description in the TS_CHARGE_STEPCONFIG Register. ............................. ................................................................................................                                                                                                                                                                                  | 1865                                                              |
| • Updated STEPCONFIG1 Register.                                                                                                                                                                                                                                                                                                                                                                 | 1868                                                              |
| • Updated STEPCONFIG2 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1871                                                              |
| • Updated STEPCONFIG3 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1874                                                              |
| • Updated STEPCONFIG4 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1877                                                              |
| • Updated STEPCONFIG5 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1880                                                              |
| • Updated STEPCONFIG6 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1883                                                              |
| • Updated STEPCONFIG7 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1886                                                              |
| • Updated STEPCONFIG9 Register. ................................................................................................                                                                                                                                                                                                                                                                | 1892                                                              |
| • Updated STEPCONFIG10 Register. ..............................................................................................                                                                                                                                                                                                                                                                 | 1895                                                              |
| • Updated STEPCONFIG11 Register. ..............................................................................................                                                                                                                                                                                                                                                                 | 1898                                                              |
| • Updated STEPCONFIG12 Register. .............................................................................................. • Updated STEPCONFIG13 Register. .............................................................................................. • Updated STEPCONFIG14 Register. .............................................................................................. | 1901 1904 1907                                                    |
| • Updated STEPCONFIG15 Register. ..............................................................................................                                                                                                                                                                                                                                                                 |                                                                   |
| ..............................................................................................                                                                                                                                                                                                                                                                                                  | 1910                                                              |

<!-- image -->

<!-- image -->

## www.ti.com

| • Updated Unsupported CPGMAC Features table. ................................................................................             |   2002 |
|-------------------------------------------------------------------------------------------------------------------------------------------|--------|
| • Updated Introduction. ................................................................................................................  |   2334 |
| • Changed CLKDIV bit reset value to 1h in the TBCTL Register. ................................................................            |   2434 |
| • Updated CLKADPI Max Frequency from 48 Mhz to 96 MHz. ..................................................................                 |   4221 |
| • Added Note. ........................................................................................................................... |   4221 |
| • Updated CDP bit description in SD_CON Register. .............................................................................           |   4272 |
| • Updated INIT bit description in SD_CON Register. .............................................................................          |   4273 |
| • Updated Unsupported UART Features table. .....................................................................................          |   4320 |
| • Updated FIFO DMA Mode Operation section. ....................................................................................           |   4334 |
| • Updated SCR Register description. ...............................................................................................       |   4420 |
| • Updated SSR Register description. ...............................................................................................       |   4421 |
| • Updated Timer Counting Rate section. ............................................................................................       |   4447 |
| • Updated reset value of POSTED bit in TSICR Register to 1h. ................................................................             |   4468 |
| • Updated Table 20-104 0000 0000h Reset Period from "74 h 56 min" to "74h 34 min" .....................................                   |   4560 |
| • Updated Table note for I2C Pin List table. ........................................................................................     |   4586 |
| • Updated TRX bit description in the I2C_CON Register. ........................................................................           |   4635 |
| • Updated FIFODEPTH bit reset from 0h to 2h in the I2C_BUFSTAT Register. ..............................................                   |   4645 |
| • Updated REV Register reset to 44307B02h. .....................................................................................          |   4712 |
| • Updated SPIx_CS1 information in McSPI Pin List table. ........................................................................          |   4888 |
| • Updated Table note in McSPI Pin List table. ......................................................................................      |   4888 |
| • Updated SINGLE bit description for MCSPI_MODULCTRL Register. .........................................................                  |   4936 |
| • Updated Reading NAND Geometry from I2C EEPROM section. ..............................................................                   |   5049 |
| • Updated NAND Read Sector Procedure section. ................................................................................            |   5052 |
| • Updated MMC/SD Read Sector Procedure in Raw Mode section. ............................................................                  |   5057 |
| • Updated Tracing Vectors table. .....................................................................................................    |   5081 |

## Revision History - Version P

| Changes from November 1, 2016 to April 1, 2017 ..........................................................................................................   | Page    |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------|---------|
| • Updated Int Nos. 9-14, 43, and 55 of PRU-ICSS System Events table. ........................................................                               | 228     |
| • Added Industrial Ethernet Peripheral Block Diagram. .............................................................................                         | 233     |
| • Updated Features section. ............................................................................................................                    | 233     |
| • Added Industrial Ethernet Mapping section. ........................................................................................                       | 234     |
| • Added Industrial Ethernet SYNC0/SYNC1 section. ................................................................................                           | 236     |
| • Added Industrial Ethernet Watchdog Timer section. ..............................................................................                          | 238     |
| • Updated Features section. ............................................................................................................                    | 238     |
| • Updated IEP DIGIO Data In image. .................................................................................................                        | 239     |
| • Updated IEP DIGIO Data Out image. ...............................................................................................                         | 240     |
| • Added IEP_SYNC_CTRL Register. .................................................................................................                           | 414     |
| • Added IEP_SYNC_FIRST_STAT Register. ........................................................................................                              | 414     |
| • Added IEP_SYNC0_STAT Register. ...............................................................................................                            | 414     |
| • Added IEP_SYNC1_STAT Register. ...............................................................................................                            | 414     |
| • Added IEP_SYNC_PWIDTH Register. .............................................................................................                             | 414     |
| • Added IEP_SYNC0_PERIOD Register. ............................................................................................                             | 414     |
| • Added IEP_SYNC1_DELAY Register. ..............................................................................................                            | 414     |
| • Added IEP_SYNC_START Register. ...............................................................................................                            | 414     |
| • Updated IEP_TMR_CNT Register description. ....................................................................................                            | 418     |
| • Added IEP_TMR_CAP_CFG Register. .............................................................................................                             | 419     |
| • Added IEP_TMR_CAP_STS Register. .............................................................................................                             | 421     |
| • Updated reset values for IEP_TMR_CAP_STS Register Field Descriptions table. ...........................................                                   | 421     |
| • Added IEP_TMR_CAPR0 Register. .................................................................................................                           | 422     |
| • Added IEP_TMR_CAPR1 Register. .................................................................................................                           | 423     |
| • Added IEP_TMR_CAPR2 Register. .................................................................................................                           | 424     |
| • Added IEP_TMR_CAPR3 Register. .................................................................................................                           | 425     |
| • Added IEP_TMR_CAPR4 Register. .................................................................................................                           | 426     |
| • Added IEP_TMR_CAPR5 Register. .................................................................................................                           | 427     |
| • Added IEP_TMR_CAPR6 Register. .................................................................................................                           | 428     |
| • Added IEP_TMR_CAPF6 Register. .................................................................................................                           | 429     |
| • Added IEP_TMR_CAPR7 Register. .................................................................................................                           | 430     |
| • Added IEP_TMR_CAPF7 Register. .................................................................................................                           | 431     |
| • Added IEP_TMR_RXIPG0 Register. ................................................................................................                           | 442     |
| • Added IEP_TMR_RXIPG1 Register. ................................................................................................                           | 443     |
| • Added WD_PREDIV Register. .......................................................................................................                         | 453     |
| • Added PDI_WD_TIM Register. ......................................................................................................                         | 454     |
| • Added PD_WD_TIM Register. .......................................................................................................                         | 455     |
| • Added WD_STATUS Register. ......................................................................................................                          |         |
| • Added WD_EXP_CNT Register. ....................................................................................................                           | 456 457 |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Revision History - Version O

| Changes from July 1, 2016 to October 1, 2016 ...............................................................................................................                                                                                           | Page    |
|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------|
| • Updated L3 Memory Map with DebugSS_ETM, DebugSS_Debug, DebugSS_CTI, and DebugSS_ICE. .................                                                                                                                                               | 178     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_0 register. ...............................................................                                                                                                                             | 723     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_1 register. ...............................................................                                                                                                                             | 737     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_2 register. ...............................................................                                                                                                                             | 751     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_3 register. ...............................................................                                                                                                                             | 765     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_4 register. ...............................................................                                                                                                                             | 779     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_5 register. ...............................................................                                                                                                                             | 793     |
| • Updated OEOFFTIME bit [12:8] in GPMC_CONFIG4_6 register. ...............................................................                                                                                                                             | 807     |
| • Changed DATA1_REG_PHY_DQ_OFFSET_1 to DATA1_REG_PHY_DQ_OFFSET_0 in Memory-Mapped Registers DDR2/3/mDDR PHY table. ............................................................................................................                        | for 973 |
| • Added Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 _REG_PHY_DQ_OFFSET_0) bit register and description. ......................................................................................................................... | 980     |
| • Added Textnote to PORz image. ...................................................................................................                                                                                                                    | 1239    |
| • Added External Buffer for nRESETIN_OUT image. ..............................................................................                                                                                                                         | 1239    |
| • Updated dev_feature Register. .....................................................................................................                                                                                                                  | 1479    |
| • Updated field description of mac_id0_lo register. ................................................................................                                                                                                                   | 1489    |
| • Updated field description of mac_id0_hi register. ................................................................................                                                                                                                   | 1490    |
| • Updated field description of mac_id1_lo register. ................................................................................                                                                                                                   | 1491    |
| • Updated field description of mac_id1_hi register. ................................................................................                                                                                                                   | 1492    |
| • Added Caution. ........................................................................................................................                                                                                                              | 1932    |
| • Updated GMII_EN bit description in MACCONTROL Register. ...............................................................                                                                                                                              | 2254    |

## Revision History - Version N

| Changes from January 4, 2016 to July 1, 2016 ...............................................................................................................   |   Page |
|----------------------------------------------------------------------------------------------------------------------------------------------------------------|--------|
| • Changed CM_PER End Address from 0x44E0_3FFF to 0x44E0_03FF. .......................................................                                          |    179 |
| • Updated PRU-ICSS Block Diagram. .................................................................................................                            |    199 |
| • Changed 0x0003_2000 address in Local Data Memory Map table from Reserved to MII_RT_CFG. ......................                                               |    206 |
| • Changed 0x0003_2400 address in Local Data Memory Map table from Reserved to MII_MDIO. ..........................                                             |    206 |
| • Updated Global Memory Map table. .................................................................................................                           |    207 |
| • Updated Entries 21 and 27 in PRU0/1 Constants table. ..........................................................................                              |    210 |
| • Added MII_RT info to PRU R31 (GPI) Modes table. ..............................................................................                               |    213 |
| • Updated 10-MHz and 20-MHz Clocks in Effective Clock Values table from 10 (0x10) to 10 (0x12). .......................                                        |    216 |
| • Updated 10-MHz and 20-MHz Clocks in Effective Clock Values table from 10 (0x10) to 10 (0x12). .......................                                        |    218 |
| • Added Signal Name (MII_RT Mode) info to PRU-ICSS System Events table. ................................................                                       |    227 |
| • Updated IEP DIGIO Data In image. .................................................................................................                           |    239 |
| • Updated IEP DIGIO Data Out image. ...............................................................................................                            |    240 |
| • Added MII_RT section. ................................................................................................................                       |    254 |
| • Updated TX MII Interface section. ...................................................................................................                        |    267 |
| • Updated TX Mask Mode image. ......................................................................................................                           |    269 |
| • Added MDIO section. ..................................................................................................................                       |    273 |
| • Updated TX_CLK_DELAY bit description for TXCFG0 Register. ................................................................                                   |    488 |
| • Changed RX_MAX_FRM_CNT reset value from 0h to 5F1h. ....................................................................                                     |    498 |
| • Changed RX_MIN_FRM_CNT reset value from 9E1h to 3Fh. ...................................................................                                     |    498 |
| • Changed PRU0_GPO_SH_SEL bit Type in GPCFG0 Register from R to R/W. ..............................................                                            |    507 |
| • Changed PRU1_GPO_SH_SEL bit Type in GPCFG1 Register from R to R/W. ..............................................                                            |    509 |
| • Added MII_RT Register. ..............................................................................................................                        |    518 |
| • Updated ST_DPLL_CLKDCO bit description in CM_CLKDCOLDO_DPLL_PER register. ................................                                                   |   1349 |
| • Updated ST_HSDIVIDER_CLKOUT bit in CM_DIV_M4_DPLL_CORE register. ...........................................                                                 |   1350 |
| • Updated ST_HSDIVIDER_CLKOUT2 bit description in CM_DIV_M5_DPLL_CORE register. ............................                                                   |   1351 |
| • Updated ST_HSDIVIDER_CLKOUT3 bit description in CM_DIV_M6_DPLL_CORE register. ............................                                                   |   1375 |
| • Changed Reset Value for filter bit[3:1] in VTP_CTRL register from 0h to 11h. ..............................................                                  |   1518 |
| • Updated Unsupported TPCC Features section. ..................................................................................                                |   1569 |
| • Updated Unsupported TPTC Features section. ..................................................................................                                |   1570 |
| • Updated Clocking Configuration section. ..........................................................................................                           |   5028 |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Revision History - Version M

| Changes from February 25, 2015 to January 4, 2016 .....................................................................................................                                                                                       | Page    |
|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------|
| • Changed Baud Rate from 3000000 to 300000. ....................................................................................                                                                                                              | 244     |
| • Changed Baud Rate from 3000000 to 300000. ....................................................................................                                                                                                              | 244     |
| • Updated Synchronous Multiple Write (Burst Write) in Address/Address/Data-Multiplexed Mode diagram. ................                                                                                                                         | 641     |
| • Updated interface Configuration Register acronym from INT_CONFIG to OCP_CONFIG. ..................................                                                                                                                          | 917     |
| • Added SDRAM Initialzation section. .................................................................................................                                                                                                        | 919     |
| • Changed Interface Configuration Register Value 1 to OCP_CFG_VAL_1. ....................................................                                                                                                                     | 929     |
| • Changed Interface Configuration Register Value 2 to OCP_CFG_VAL_2. ....................................................                                                                                                                     | 929     |
| • Updated reg_t_rrd bit for SDRAM_TIM_1 register. ...............................................................................                                                                                                             | 937     |
| • Updated Bits 27:25 in SDRAM_TIM_2 to Reserved. .............................................................................                                                                                                                | 939     |
| • Updated Bits 27:25 of SDRAM_TIM_2_SHDW to Reserved. ...................................................................                                                                                                                     | 940     |
| • Updated DDR PHY Command 0/1/2 Address/Command Slave Ratio Register reset value for CMD_SLAVE_RATIO from 0-80h to 0-100h. .................................................................................................................. | bit 974 |
| • Changed RANK0_DELAY reset from W-1 to W-0. ................................................................................                                                                                                                 | 980     |
| • Updated PM_PER_PWRSTST Register Field Descriptions. ....................................................................                                                                                                                    | 1415    |
| • Added Caution. ........................................................................................................................                                                                                                     | 1450    |
| • Added Note. ...........................................................................................................................                                                                                                     | 1454    |
| • Removed conf_rtc_kaldo_enn register from Control Module Registers table. ...............................................                                                                                                                    | 1461    |
| • Changed dmpullup bit in USB_CTRL0 register to dmpulldn. ..................................................................                                                                                                                  | 1484    |
| • Changed dmpullup bit in USB_CTRL1 register to dmpulldn. ..................................................................                                                                                                                  | 1487    |
| • Changed io_config_sr_clk bit in ddr_cmd0_ioctr Register from R to R/W. ....................................................                                                                                                                 | 1553    |
| • Updated table note for EDMA3 Channel Parameter Description. ..............................................................                                                                                                                  | 1582    |
| • Changed Tx Buffer Descriptior Format bits 16-17 to_Port_En to To_Port. ...................................................                                                                                                                  | 2024    |
| • Updated CAP2 register field description. .........................................................................................                                                                                                          | 2499    |
| • Updated Unsupported USB OTG and PHY Features section. ..................................................................                                                                                                                    | 2562    |
| • Changed reset value for MS bit in MCSPI_MODULCTRL register from 0h to 1h. ..........................................                                                                                                                        | 4936    |
| • Changed reset value for IS and DPE1 bits in MCSPI_CH0CONF register from 0h to 1h. .................................                                                                                                                         | 4938    |
| • Updated ECC Data Mapping for 2 KB Page and 8b BCH Encoding image. ..................................................                                                                                                                        | 5053    |
| • Updated MMC/SD Booting image. .................................................................................................                                                                                                             | 5056    |

## Revision History - Version L

| Changes from July 1, 2014 to February 24, 2015 ............................................................................................................   |   Page |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------|--------|
| • Changed Size from 20KB to 32Kb. ..................................................................................................                          |    178 |
| • Changed USB Queue Manager end address from 0x4740_4FFF to 0x4740_7FFF. .........................................                                            |    178 |
| • Changed start address from 0x4740_5000 to 0x4740_8000. ....................................................................                                 |    178 |
| • Changed Size from 4MB-20KB to 4MB-32KB. .....................................................................................                               |    178 |
| • Added Note. .............................................................................................................................                   |    218 |
| • Changed ELM_LOCATION_STATUS_3 Register offset from C00h to B00h. ...............................................                                            |   1128 |
| • Changed ELM_LOCATION_STATUS_4 Register offset from E00h to C00h. ...............................................                                            |   1161 |
| • Changed ELM_LOCATION_STATUS_5 Register offset from 1000h to D00h. ..............................................                                            |   1194 |
| • Changed ELM_LOCATION_STATUS_6 Register offset from 1200h to E00h. ..............................................                                            |   1195 |
| • Changed ELM_LOCATION_STATUS_7 Register offset from 1400h to F00h. ..............................................                                            |   1196 |
| • Updated image. .......................................................................................................................                      |   1242 |
| • Set all bits for mreqprio_1 register to Reserved. .................................................................................                         |   1498 |
| • Added Pin Mapping and Color Assignments section. ............................................................................                               |   1931 |
| • Updated CRC Insertion section. ....................................................................................................                         |   2062 |
| • Changed RX_VLAN_ENCAP values from Port 2 to Port 0. ....................................................................                                    |   2266 |
| • Changed ADPDATDIROQx output from 1 to 0. ..................................................................................                                 |   4222 |
| • Updated bit fields for MVR Register. ..............................................................................................                         |   4423 |
| • Updated image. .......................................................................................................................                      |   4438 |
| • Updated Posted Mode Selection section. .........................................................................................                            |   4449 |
| • Removed Note from TSICR Register Field Descriptions. ......................................................................                                 |   4468 |
| • Removed Note from TSICR Register Field Description. ........................................................................                                |   4499 |
| • Changed MCSPI_MODULCTRL Register reset from 0h to 0x0000_0004. ..................................................                                           |   4935 |
| • Changed MCSPI_CH0CONF Register reset from 0h to 0x0006_0000. ......................................................                                         |   4937 |
| • Changed MCSPI_CH1CONF Register reset from 0h to 0x0006_0000. ......................................................                                         |   4946 |
| • Changed MCSPI_CH2CONF Register reset from 0h to 0x0006_0000. ......................................................                                         |   4955 |
| • Changed MCSPI_CH3CONF Register reset from 0h to 0x0006_0000. ......................................................                                         |   4964 |

<!-- image -->

<!-- image -->

## Revision History

Table B-1 highlights the technical changes made to the technical reference manual up to revision K.

## Table B-1. Document Revision History

| Reference                  | Additions/Modifications/Deletions                                                         |
|----------------------------|-------------------------------------------------------------------------------------------|
| Global                     | Various editorial changes.                                                                |
| Chapter 4 PRU-ICSS         | Added entire section.                                                                     |
| Chapter 7 Memory Subsystem | Added new registers to Table 7-48. Registers are named GPMC_BCH_RESULTx_7 where x is 0-6. |
| Chapter 8 PRCM             | Changed text in Figure 8-19.                                                              |
| Chapter 20 Timers          | Changed text of first paragraph in Section 20.4.3.5.                                      |
| Chapter 24 McSPI           | Changed Figure 24-8. Removed section "Reset Values of Registers".                         |

## IMPORTANT NOTICE AND DISCLAIMER

TI PROVIDES TECHNICAL AND RELIABILITY DATA (INCLUDING DATA SHEETS), DESIGN RESOURCES (INCLUDING REFERENCE DESIGNS), APPLICATION OR OTHER DESIGN ADVICE, WEB TOOLS, SAFETY INFORMATION, AND OTHER RESOURCES 'AS IS' AND WITH ALL FAULTS, AND DISCLAIMS ALL WARRANTIES, EXPRESS AND IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY RIGHTS.

These resources are intended for skilled developers designing with TI products. You are solely responsible for (1) selecting the appropriate TI products for your application, (2) designing, validating and testing your application, and (3) ensuring your application meets applicable standards, and any other safety, security, regulatory or other requirements.

These resources are subject to change without notice. TI grants you permission to use these resources only for development of an application that uses the TI products described in the resource. Other reproduction and display of these resources is prohibited. No license is granted to any other TI intellectual property right or to any third party intellectual property right. TI disclaims responsibility for, and you will fully indemnify TI and its representatives against, any claims, damages, costs, losses, and liabilities arising out of your use of these resources.

TI's products are provided subject to TI's Terms of Sale or other applicable terms available either on ti.com or provided in conjunction with such TI products. TI's provision of these resources does not expand or otherwise alter TI's applicable warranties or warranty disclaimers for TI products.

TI objects to and rejects any additional or different terms you may have proposed. IMPORTANT NOTICE

Mailing Address: Texas Instruments, Post Office Box 655303, Dallas, Texas 75265 Copyright © 202 3 , Texas Instruments Incorporated