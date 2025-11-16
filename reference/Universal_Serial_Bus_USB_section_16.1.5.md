<!-- image -->

www.ti.com

Figure 16-2. USB GPIO Integration

<!-- image -->

## 16.1.5 USB Unbonded PHY Pads

The USBOTGSS includes two USB PHY modules. On packages where only 1 PHY is bonded out to pins (e.g. 13x13 package), the following procedures must be followed in order to ensure that the unbonded PHY pads do not cause issues with USBOTGSS operation:

- The USB Controller corresponding to the unbonded PHY must be placed in Host Mode by setting Bit2 of the USB Core DEVCTL register.
- The unbonded PHY must be placed in the SUSPEND state by setting Bits[1:0] of the USB Core POWER register.
- The Control Module USB\_CTRLx register corresponding to the unbonded PHY must have the following bits programmed as shown:
- -CHGDET\_DIS = 1
- -CM\_PWRDN = 1
- -GPIOMODE = 0

Universal Serial Bus (USB)