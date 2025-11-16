## 7.2 OCMC-RAM

## 7.2.1 Introduction

## 7.2.1.1 OCMC-RAM Features

The on-chip memory controller consists of two separate modules that are OCP to memory wrappers. The first wrapper is for a ROM; the second is for a RAM. Each wrapper has its own dedicated interface to the L3 interconnect.

- 32- or 64-bit width
- Initial latency max 2 cycles (due to OCP to memory core wrapper).
- Multiple memory bank control based on address MSBs
- Full OCP IP 2.0 Burst support. No wait state.

## 7.2.1.2 Unsupported OCMC-RAM Features

For this device, the OCMC-RAM implementation does not support parity.

<!-- image -->