## 8.1.7.6 EMAC Switch Reset Isolation

The device will support reset isolation for the Ethernet Switch IP. This allows the device to undergo a warm reset without disrupting the switch or traffic being routed through the switch during the reset condition.

If configured by registers in control module that EMAC reset isolation is active, then behavior is as follows:

Any 'Warm' reset source(except the software warm reset) will be blocked to the EMAC switch logic in the IP (the IP has two reset inputs to support such isolation) and to PLL (and it's control bits) which is sourcing the EMAC switch clocks as required by the IP (50- or 125-MHz reference clocks). Also, the EMAC switch related IO pins must retain their pin muxing and not glitch (continuously controlled by the EMAC switch IP) by blocking reset to the controlling register bits.

If configured by registers in control module that EMAC reset isolation is NOT active (default state), then the warm reset sources are allowed to propagate as normal including to the EMAC Switch IP (both reset inputs to the IP).

All cold or POR resets will always propagate to the EMAC switch IP as normal (as otherwise defined in this document).

## 8.1.7.7 Reset Priority

If more than one of these reset sources are asserted simultaneously then the following priority order should be used:

1. POR
2. TRSTz
3. External warm reset
4. Emulation
5. Reset requestors
6. Software resets

## 8.1.7.8 Trace Functionality Across Reset

Other than POR, TRSTz and SW cold reset, none of the other resets will affect trace functionality. This requires that Debug\_SS has required reset isolation for the trace logic. Also the Ios and muxing control (if any) for trace Ios should not get affected by any other reset. Since none of the PLLs getting reset with other resets, clocks will be any way stable.

## 8.1.7.9 RTC PORz

AM335x supports RTC only mode by supplying dedicated power to RTC module. The RTC module has a dedicated PORz signal (RTC\_PORz) to reset RTC logic and circuitry during powerup. RTC\_PORz is expected to be driven low when the RTC power supply is ramping up. After the power supply reaches its stable value, the RTC\_PORz can be de-asserted. The RTC module is not affected by the device PORz. Similarly RTC\_PORz does not affect the device reset.

For power-up sequencing with respect to RTC\_PORz, see the device specific datasheet.

## 8.1.8 Power-Up/Down Sequence

Each power domain has dedicated warm and cold reset.

Warm reset gets asserted each time there is any warm reset source requesting reset. Warm reset is also asserted when power domain moves from ON to OFF state.

Cold reset for the domain is asserted in response to cold reset sources. When domain moves from OFF to ON state then also cold reset gets asserted as this is similar to power-up condition for that domain.

<!-- image -->