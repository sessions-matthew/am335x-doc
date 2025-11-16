<!-- image -->

www.ti.com

<!-- image -->

## 26.1.3 Functionality

Figure 26-2 illustrates the high level flow for the Public ROM Code booting procedure. On this device the Public ROM Code starts upon completion of the secure startup (performed by the Secure ROM Code). The ROM Code then performs platform configuration and initialization as part of the public start-up procedure.

The booting device list is created based on the SYSBOOT pins. A booting device can be a memory booting device (soldered flash memory or temporarily booting device like memory card) or a peripheral interface connected to a host.

The main loop of the booting procedure goes through the booting device list and tries to search for an image from the currently selected booting device. This loop is exited if a valid booting image is found and successfully executed or upon watchdog expiration.

The image authentication procedure is performed prior to image execution on an HS Device . Failure in authentication procedure leads to branching to a 'dead loop' in Secure ROM (waiting for a watchdog reset).

Figure 26-1. Public ROM Code Architecture

<!-- image -->

Figure 26-2. Public ROM Code Boot Procedure

<!-- image -->