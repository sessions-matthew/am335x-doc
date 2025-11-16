<!-- image -->

www.ti.com

## 6.5 PWM Events

Table 6-3. Timer and eCAP Event Capture

| Event #   | IP                                          | Interrupt Name/Pin   |
|-----------|---------------------------------------------|----------------------|
|           | For Timer 5 MUX input from IO signal TIMER5 | TIMER5 IO pin        |
|           | For Timer 6 MUX input from IO signal TIMER6 | TIMER6 IO pin        |
| 0         | For Timer 7 MUX input from IO signal TIMER7 | TIMER7 IO pin        |
|           | For eCAP 0 MUX input from IO signal eCAP0   | eCAP0 IO pin         |
|           | For eCAP 1 MUX input from IO signal eCAP1   | eCAP1 IO pin         |
|           | For eCAP 2 MUX input from IO signal eCAP2   | eCAP2 IO pin         |
| 1         | UART0                                       | UART0INT             |
| 2         | UART1                                       | UART1INT             |
| 3         | UART2                                       | UART2INT             |
| 4         | UART3                                       | UART3INT             |
| 5         | UART4                                       | UART4INT             |
| 6         | UART5                                       | UART5INT             |
| 7         | 3PGSW                                       | 3PGSWRXTHR0          |
| 8         | 3PGSW                                       | 3PGSWRXINT0          |
| 9         | 3PGSW                                       | 3PGSWTXINT0          |
| 10        | 3PGSW                                       | 3PGSWMISC0           |
| 11        | McASP0                                      | MCATXINT0            |
| 12        | McASP0                                      | MCARXINT0            |
| 13        | McASP1                                      | MCATXINT1            |
| 14        | McASP1                                      | MCARXINT1            |
| 15        | Reserved                                    | Reserved             |
| 16        | Reserved                                    | Reserved             |
| 17        | GPIO 0                                      | GPIOINT0A            |
| 18        | GPIO 0                                      | GPIOINT0B            |
| 19        | GPIO 1                                      | GPIOINT1A            |
| 20        | GPIO 1                                      | GPIOINT1B            |
| 21        | GPIO 2                                      | GPIOINT2A            |
| 22        | GPIO 2                                      | GPIOINT2B            |
| 23        | GPIO 3                                      | GPIOINT3A            |
| 24        | GPIO 3                                      | GPIOINT3B            |
| 25        | DCAN0                                       | DCAN0_INT0           |
| 26        | DCAN0                                       | DCAN0_INT1           |
| 27        | DCAN0                                       | DCAN0_PARITY         |
| 28        | DCAN1                                       | DCAN1_INT0           |
| 29        | DCAN1                                       | DCAN1_INT1           |
| 30        | DCAN1                                       | DCAN1_PARITY         |