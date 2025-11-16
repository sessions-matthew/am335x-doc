<!-- image -->

www.ti.com

## Frame buffer halfword scan order for 1 bpp

1. If cfg\_rdorder = 0, scan order is [0] [1] [2] [3] [4] [5] [6] [7] [8] [9] [10] [11][ 12] [13] [14] [15]
2. Else if cfg\_nibmode=1, scan order is [7] [6] [5] [4] [3] [2] [1] [0] [15] [14] [13] [12] [11] [10] [9] [8]
3. Otherwise, scan order is [15] [14] [13] [12] [11] [10] [9] [8] [7] [6] [5] [4] [3] [2] [1] [0]

## Frame buffer halfword scan order for 2 bpp

1. If cfg\_rdorder = 0, scan order is [1:0] [3:2] [5:4] [7:6] [9:8] [11:10][ 13:12] [15:14]
2. Else if cfg\_nibmode=1, scan order is [7:6] [5:4] [3:2] [1:0] [15:14] [13:12] [11:10] [9:8]
3. Otherwise, scan order is [15:14] [13:12] [11:10] [9:8] [7:6] [5:4] [3:2] [1:0]

## Frame buffer halfword scan order for 4 bpp

1. If cfg\_rdorder = 0, scan order is [3:0] [7:4] [11:8] [15:12]
2. Else if cfg\_nibmode=1, scan order is [7:4] [3:0] [15:12] [11:8]
3. Otherwise, scan order is [15:12] [11:8] [7:4] [3:0]

## Frame buffer halfword scan order for 8 bpp

1. If cfg\_rdorder = 0, scan order is [7:0] [15:8]
2. Else if cfg\_nibmode=1, scan order is [7:0] [15:8]
3. Otherwise, scan order is [15:8] [7:0]

## 13.4.5 Test Logic

## 13.4.6 Disable and Software Reset Sequence

In Raster Modes, the module must be disabled before applying a software reset. When cfg\_lcden is set to '0' to disable the module, the output continues to the end of the current frame.

The Done interrupt will trigger once the frame is complete. The software reset can then be applied to the module.

The software reset will clear all the frame information in the FIFO. Upon a restart, the L3 DMA will fetch from the fb0\_base address.

## To summarize:

- Set cfg\_lcden='0'.
- Wait for the Done interrupt.
- Set the software reset bits high (cfg\_main\_rst='1' or [cfg\_dma\_rst='1' and cfg\_core\_rst='1']) for several cycles.
- Set the resets back low.
- Set cfg\_lcden='1'.

The disable and reset sequence must be done in this order to properly operate the LCD module and the EMIF.