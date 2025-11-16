<!-- image -->

www.ti.com

## 20.4 WATCHDOG

## 20.4.1 Introduction

The watchdog timer is an upward counter capable of generating a pulse on the reset pin and an interrupt to the device system modules following an overflow condition. The watchdog timer serves resets to the PRCM module and serves watchdog interrupts to the host ARM. The reset of the PRCM module causes a warm reset of the device.

The watchdog timer can be accessed, loaded, and cleared by registers through the L4 interface. The timer clock input is a 32-kHz clock.

The watchdog timer connects to a single target agent port on the L4 interconnect. The default state of the watchdog timer is enabled and not running.

## 20.4.1.1 Features

The main features of the watchdog timer controllers are:

- L4 slave interface support:
- -32-bit data bus width
- -32-/16-bit access supported
- -8-bit access not supported
- -11-bit address bus width
- -Burst mode not supported
- -Write nonposted transaction mode only
- Free-running 32-bit upward counter
- Programmable divider clock source (2n where n = 0-7)
- On-the-fly read/write register (while counting)
- Subset programming model of the GP timer
- The watchdog timers are reset either on power-on or after a warm reset before they start counting.
- Reset or interrupt actions when a timer overflow condition occurs
- The watchdog timer generates a reset or an interrupt in its hardware integration.

## 20.4.1.2 Unsupported Featres

There are no unsupported WD Timer features in this device.