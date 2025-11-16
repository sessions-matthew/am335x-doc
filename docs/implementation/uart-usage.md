# UART Implementation Guide - AM3358

## Overview

This document provides practical implementation guidance for using the AM3358 UART modules, including initialization, data transmission/reception, interrupt handling, flow control, and advanced features like IrDA and CIR modes.

## Basic Implementation

### Programming Example
```c
// Set baud rate to 115200
void uart_set_baud_rate(volatile uint32_t *uart_base, uint32_t baud_rate) {
    uint32_t divisor = 48000000 / (16 * baud_rate);
    
    // Enable divisor latch access
    uart_base[LCR/4] |= 0x80;  // Set DLAB
    
    // Set divisor
    uart_base[DLL/4] = divisor & 0xFF;        // Low byte
    uart_base[DLH/4] = (divisor >> 8) & 0xFF; // High byte
    
    // Disable divisor latch access
    uart_base[LCR/4] &= ~0x80; // Clear DLAB
}
```

## Register Access Examples

### Basic UART Initialization
```c
#define UART0_BASE 0x44E09000

void uart0_init(void) {
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    
    // Perform soft reset
    uart[SYSC/4] = 0x02;
    while (!(uart[SYSS/4] & 0x01)); // Wait for reset complete
    
    // Disable all interrupts
    uart[IER/4] = 0x00;
    
    // Set 8N1 format
    uart[LCR/4] = 0x03;  // 8 bits, no parity, 1 stop bit
    
    // Set baud rate to 115200
    uart[LCR/4] |= 0x80;   // Enable DLAB
    uart[DLL/4] = 0x1A;    // Low byte
    uart[DLH/4] = 0x00;    // High byte  
    uart[LCR/4] &= ~0x80;  // Disable DLAB
    
    // Enable and configure FIFOs
    uart[FCR/4] = 0x07;    // Enable FIFOs, clear both
    
    // Enable UART mode
    uart[MDR1/4] = 0x00;   // UART 16x mode
    
    // Configure modem control
    uart[MCR/4] = 0x00;    // No flow control initially
}
```

### Interrupt-Based Operation
```c
void uart0_enable_interrupts(void) {
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    
    // Enable RX and line status interrupts
    uart[IER/4] = 0x05;    // ERBI | ELSI
    
    // Enable in system interrupt controller
    intc_enable_interrupt(72);  // UART0 IRQ
}

void uart0_isr(void) {
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    uint32_t iir = uart[IIR/4];
    uint32_t lsr, data;
    
    if (!(iir & 0x01)) {  // Interrupt pending
        switch ((iir >> 1) & 0x07) {
            case 0x02:  // RHR interrupt
                while (uart[LSR/4] & 0x01) {  // Data ready
                    data = uart[RBR/4];
                    process_received_char(data);
                }
                break;
                
            case 0x03:  // Line status error
                lsr = uart[LSR/4];
                handle_uart_error(lsr);
                break;
                
            case 0x06:  // Character timeout
                // Handle partial data in FIFO
                while (uart[LSR/4] & 0x01) {
                    data = uart[RBR/4];
                    process_received_char(data);
                }
                break;
        }
    }
}
```

### DMA Configuration
```c
void uart0_setup_dma(void) {
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    
    // Configure UART for DMA mode
    uart[SCR/4] |= 0x01;   // Enable DMA mode control
    uart[FCR/4] = 0x09;    // Enable FIFOs, DMA mode
    
    // Configure EDMA3 for UART0 TX (event 26) and RX (event 27)
    // ... EDMA3 configuration code ...
}
```

## Error Handling

### Line Status Errors
```c
void handle_uart_error(uint32_t lsr) {
    if (lsr & 0x10) {  // Break interrupt
        // Handle break condition
        log_error("UART break detected");
    }
    
    if (lsr & 0x08) {  // Framing error
        // Handle framing error
        log_error("UART framing error");
    }
    
    if (lsr & 0x04) {  // Parity error
        // Handle parity error
        log_error("UART parity error");
    }
    
    if (lsr & 0x02) {  // Overrun error
        // Handle overrun error
        log_error("UART overrun error");
        
        // Clear receive FIFO
        volatile uint32_t *uart = (uint32_t *)UART0_BASE;
        uart[FCR/4] = 0x06;  // Clear RX FIFO
    }
}
```

### FIFO Management
```c
int uart_get_fifo_status(volatile uint32_t *uart_base) {
    uint32_t lsr = uart_base[LSR/4];
    
    // Check various FIFO conditions
    if (lsr & 0x80) {  // RX FIFO error
        return -1;
    }
    
    if (lsr & 0x20) {  // THR empty
        return 1;  // Ready to transmit
    }
    
    if (lsr & 0x01) {  // Data ready
        return 2;  // Data available
    }
    
    return 0;  // Normal status
}
```

### UART Initialization Sequence

```c
#include <stdint.h>
#include <stdbool.h>

/* UART Base Addresses */
#define UART0_BASE  0x44E09000
#define UART1_BASE  0x48022000
#define UART2_BASE  0x48024000
#define UART3_BASE  0x48030000
#define UART4_BASE  0x481A6000
#define UART5_BASE  0x481A8000

/* Register Offsets */
#define UART_RBR_THR_DLL    0x00
#define UART_IER_DLH        0x04
#define UART_IIR_FCR        0x08
#define UART_LCR            0x0C
#define UART_MCR            0x10
#define UART_LSR            0x14
#define UART_MSR            0x18
#define UART_SPR            0x1C
#define UART_MDR1           0x20
#define UART_MDR2           0x24
#define UART_SYSC           0x50
#define UART_SYSS           0x54
#define UART_WER            0x58

/* Common baud rates */
#define BAUD_9600    312
#define BAUD_19200   156
#define BAUD_38400   78
#define BAUD_57600   52
#define BAUD_115200  26

typedef struct {
    volatile uint32_t *base;
    uint32_t baud_rate;
    uint8_t data_bits;
    uint8_t parity;
    uint8_t stop_bits;
    bool flow_control;
    bool fifo_enable;
} uart_config_t;

/**
 * Initialize UART module with specified configuration
 */
int uart_init(uart_config_t *config) {
    volatile uint32_t *uart = config->base;
    uint32_t divisor;
    uint32_t lcr_value = 0;
    
    /* Step 1: Perform soft reset */
    uart[UART_SYSC/4] = 0x02;  /* Set SOFTRESET */
    
    /* Wait for reset completion */
    while (!(uart[UART_SYSS/4] & 0x01)) {
        /* Wait for RESETDONE */
    }
    
    /* Step 2: Disable UART (set to disable mode) */
    uart[UART_MDR1/4] = 0x07;
    
    /* Step 3: Configure system settings */
    uart[UART_SYSC/4] = 0x08;  /* Smart idle, no wakeup */
    
    /* Step 4: Disable all interrupts */
    uart[UART_IER_DLH/4] = 0x00;
    
    /* Step 5: Configure line control */
    switch (config->data_bits) {
        case 5: lcr_value |= 0x00; break;
        case 6: lcr_value |= 0x01; break;
        case 7: lcr_value |= 0x02; break;
        case 8: lcr_value |= 0x03; break;
        default: return -1;  /* Invalid data bits */
    }
    
    if (config->stop_bits == 2) {
        lcr_value |= 0x04;  /* STB bit */
    }
    
    switch (config->parity) {
        case 0: /* No parity */ break;
        case 1: lcr_value |= 0x08; break;        /* Odd parity */
        case 2: lcr_value |= 0x18; break;       /* Even parity */
        case 3: lcr_value |= 0x28; break;       /* Mark parity */
        case 4: lcr_value |= 0x38; break;       /* Space parity */
        default: return -2;  /* Invalid parity */
    }
    
    uart[UART_LCR/4] = lcr_value;
    
    /* Step 6: Set baud rate */
    divisor = 48000000 / (16 * config->baud_rate);
    
    /* Enable divisor latch access */
    uart[UART_LCR/4] = lcr_value | 0x80;
    
    /* Set divisor */
    uart[UART_RBR_THR_DLL/4] = divisor & 0xFF;        /* DLL */
    uart[UART_IER_DLH/4] = (divisor >> 8) & 0xFF;     /* DLH */
    
    /* Disable divisor latch access */
    uart[UART_LCR/4] = lcr_value;
    
    /* Step 7: Configure FIFO */
    if (config->fifo_enable) {
        /* Enable FIFOs, clear both TX and RX, set trigger level */
        uart[UART_IIR_FCR/4] = 0x07;  /* Enable, clear, 1-byte trigger */
    } else {
        uart[UART_IIR_FCR/4] = 0x00;  /* Disable FIFOs */
    }
    
    /* Step 8: Configure modem control */
    if (config->flow_control) {
        uart[UART_MCR/4] = 0x22;  /* Auto flow control, RTS */
    } else {
        uart[UART_MCR/4] = 0x00;  /* No flow control */
    }
    
    /* Step 9: Enable UART */
    uart[UART_MDR1/4] = 0x00;  /* UART 16x mode */
    
    return 0;  /* Success */
}

/**
 * Example initialization for UART0 at 115200 baud
 */
void uart0_init_115200(void) {
    uart_config_t config = {
        .base = (volatile uint32_t *)UART0_BASE,
        .baud_rate = 115200,
        .data_bits = 8,
        .parity = 0,  /* No parity */
        .stop_bits = 1,
        .flow_control = false,
        .fifo_enable = true
    };
    
    uart_init(&config);
}
```

### Data Transmission

```c
/**
 * Transmit a single character (polling mode)
 */
void uart_putchar(volatile uint32_t *uart_base, char c) {
    /* Wait for transmit holding register to be empty */
    while (!(uart_base[UART_LSR/4] & 0x20)) {
        /* Wait for THRE bit */
    }
    
    /* Write character to transmit holding register */
    uart_base[UART_RBR_THR_DLL/4] = c;
}

/**
 * Transmit a string (polling mode)
 */
void uart_puts(volatile uint32_t *uart_base, const char *str) {
    while (*str) {
        uart_putchar(uart_base, *str++);
    }
}

/**
 * Transmit data buffer (polling mode)
 */
int uart_write(volatile uint32_t *uart_base, const uint8_t *data, int len) {
    int sent = 0;
    
    while (sent < len) {
        /* Check if THR is ready */
        if (uart_base[UART_LSR/4] & 0x20) {
            uart_base[UART_RBR_THR_DLL/4] = data[sent];
            sent++;
        }
    }
    
    return sent;
}

/**
 * Non-blocking transmit (returns number of bytes actually sent)
 */
int uart_write_nonblocking(volatile uint32_t *uart_base, const uint8_t *data, int len) {
    int sent = 0;
    
    while (sent < len && (uart_base[UART_LSR/4] & 0x20)) {
        uart_base[UART_RBR_THR_DLL/4] = data[sent];
        sent++;
    }
    
    return sent;
}
```

### Data Reception

```c
/**
 * Receive a single character (polling mode)
 */
int uart_getchar(volatile uint32_t *uart_base) {
    uint32_t lsr;
    
    /* Wait for data to be available */
    while (!((lsr = uart_base[UART_LSR/4]) & 0x01)) {
        /* Wait for DR bit */
    }
    
    /* Check for errors */
    if (lsr & 0x1E) {  /* PE, OE, FE, or BI */
        /* Handle error condition */
        return -1;
    }
    
    /* Read character from receive buffer */
    return uart_base[UART_RBR_THR_DLL/4] & 0xFF;
}

/**
 * Non-blocking receive (returns -1 if no data available)
 */
int uart_getchar_nonblocking(volatile uint32_t *uart_base) {
    uint32_t lsr = uart_base[UART_LSR/4];
    
    if (!(lsr & 0x01)) {
        return -1;  /* No data available */
    }
    
    /* Check for errors */
    if (lsr & 0x1E) {
        return -2;  /* Error condition */
    }
    
    return uart_base[UART_RBR_THR_DLL/4] & 0xFF;
}

/**
 * Receive data into buffer (polling mode)
 */
int uart_read(volatile uint32_t *uart_base, uint8_t *buffer, int max_len) {
    int received = 0;
    int c;
    
    while (received < max_len) {
        c = uart_getchar_nonblocking(uart_base);
        if (c >= 0) {
            buffer[received++] = c;
        } else if (c == -1) {
            break;  /* No more data */
        } else {
            /* Error occurred */
            break;
        }
    }
    
    return received;
}
```

## Interrupt-Based Implementation

### Interrupt Configuration

```c
/* UART interrupt numbers for AM3358 */
#define UART0_IRQ  72
#define UART1_IRQ  73
#define UART2_IRQ  74
#define UART3_IRQ  48
#define UART4_IRQ  49
#define UART5_IRQ  50

/**
 * Enable UART interrupts
 */
void uart_enable_interrupts(volatile uint32_t *uart_base, uint8_t int_mask) {
    uart_base[UART_IER_DLH/4] = int_mask;
}

/**
 * Standard interrupt configuration for receive and error handling
 */
void uart_setup_rx_interrupts(volatile uint32_t *uart_base) {
    /* Enable receive buffer interrupt and line status interrupt */
    uart_base[UART_IER_DLH/4] = 0x05;  /* ERBI | ELSI */
    
    /* Configure FIFO with 4-byte trigger level */
    uart_base[UART_IIR_FCR/4] = 0x41;  /* Enable FIFO, 4-byte trigger */
}
```

### Interrupt Service Routine

```c
/* Circular buffer for received data */
#define RX_BUFFER_SIZE 256
static volatile uint8_t rx_buffer[RX_BUFFER_SIZE];
static volatile int rx_head = 0;
static volatile int rx_tail = 0;

/* Transmit buffer */
#define TX_BUFFER_SIZE 256
static volatile uint8_t tx_buffer[TX_BUFFER_SIZE];
static volatile int tx_head = 0;
static volatile int tx_tail = 0;
static volatile bool tx_active = false;

/**
 * UART interrupt service routine
 */
void uart0_isr(void) {
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    uint32_t iir, lsr, data;
    
    /* Read interrupt identification */
    iir = uart[UART_IIR_FCR/4];
    
    /* Check if interrupt is pending */
    if (iir & 0x01) {
        return;  /* No interrupt pending */
    }
    
    /* Handle interrupt based on type */
    switch ((iir >> 1) & 0x07) {
        case 0x02:  /* Received data available */
        case 0x06:  /* Character timeout */
            /* Read all available data */
            while (uart[UART_LSR/4] & 0x01) {  /* Data ready */
                data = uart[UART_RBR_THR_DLL/4];
                
                /* Store in circular buffer */
                int next_head = (rx_head + 1) % RX_BUFFER_SIZE;
                if (next_head != rx_tail) {
                    rx_buffer[rx_head] = data;
                    rx_head = next_head;
                }
                /* If buffer full, data is lost */
            }
            break;
            
        case 0x01:  /* Transmit holding register empty */
            /* Send next character if available */
            if (tx_head != tx_tail) {
                uart[UART_RBR_THR_DLL/4] = tx_buffer[tx_tail];
                tx_tail = (tx_tail + 1) % TX_BUFFER_SIZE;
            } else {
                /* No more data to send, disable TX interrupt */
                uart[UART_IER_DLH/4] &= ~0x02;  /* Clear ETBEI */
                tx_active = false;
            }
            break;
            
        case 0x03:  /* Line status error */
            lsr = uart[UART_LSR/4];
            handle_uart_errors(lsr);
            break;
            
        case 0x00:  /* Modem status */
            /* Read MSR to clear interrupt */
            uart[UART_MSR/4];
            break;
    }
}

/**
 * Handle UART line errors
 */
void handle_uart_errors(uint32_t lsr) {
    if (lsr & 0x10) {  /* Break interrupt */
        /* Handle break condition */
    }
    
    if (lsr & 0x08) {  /* Framing error */
        /* Handle framing error */
    }
    
    if (lsr & 0x04) {  /* Parity error */
        /* Handle parity error */
    }
    
    if (lsr & 0x02) {  /* Overrun error */
        /* Handle overrun - data lost */
        /* Clear receive FIFO */
        volatile uint32_t *uart = (uint32_t *)UART0_BASE;
        uart[UART_IIR_FCR/4] = 0x06;  /* Clear RX FIFO */
    }
}
```

### Buffered I/O Functions

```c
/**
 * Queue data for transmission (interrupt-driven)
 */
int uart_write_buffered(const uint8_t *data, int len) {
    int queued = 0;
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    
    /* Disable interrupts during buffer manipulation */
    __disable_irq();
    
    while (queued < len) {
        int next_head = (tx_head + 1) % TX_BUFFER_SIZE;
        if (next_head == tx_tail) {
            break;  /* Buffer full */
        }
        
        tx_buffer[tx_head] = data[queued];
        tx_head = next_head;
        queued++;
    }
    
    /* Enable transmit interrupt if not already active */
    if (!tx_active && tx_head != tx_tail) {
        tx_active = true;
        uart[UART_IER_DLH/4] |= 0x02;  /* Set ETBEI */
    }
    
    __enable_irq();
    
    return queued;
}

/**
 * Read data from receive buffer
 */
int uart_read_buffered(uint8_t *buffer, int max_len) {
    int read_count = 0;
    
    __disable_irq();
    
    while (read_count < max_len && rx_head != rx_tail) {
        buffer[read_count] = rx_buffer[rx_tail];
        rx_tail = (rx_tail + 1) % RX_BUFFER_SIZE;
        read_count++;
    }
    
    __enable_irq();
    
    return read_count;
}

/**
 * Check if receive data is available
 */
bool uart_data_available(void) {
    return (rx_head != rx_tail);
}

/**
 * Get number of bytes available for reading
 */
int uart_bytes_available(void) {
    int head = rx_head;
    int tail = rx_tail;
    
    if (head >= tail) {
        return head - tail;
    } else {
        return (RX_BUFFER_SIZE - tail) + head;
    }
}
```

## Flow Control Implementation

### Hardware Flow Control (RTS/CTS)

```c
/**
 * Enable hardware flow control
 */
void uart_enable_hw_flow_control(volatile uint32_t *uart_base) {
    /* Enable auto flow control in MCR */
    uart_base[UART_MCR/4] |= 0x20;  /* AFE bit */
    
    /* Set RTS active */
    uart_base[UART_MCR/4] |= 0x02;  /* RTS bit */
}

/**
 * Check CTS status
 */
bool uart_cts_active(volatile uint32_t *uart_base) {
    return (uart_base[UART_MSR/4] & 0x10) != 0;  /* CTS bit */
}

/**
 * Manual RTS control
 */
void uart_set_rts(volatile uint32_t *uart_base, bool active) {
    if (active) {
        uart_base[UART_MCR/4] |= 0x02;   /* Set RTS */
    } else {
        uart_base[UART_MCR/4] &= ~0x02;  /* Clear RTS */
    }
}
```

### Software Flow Control (XON/XOFF)

```c
#define XON  0x11
#define XOFF 0x13

static bool tx_paused = false;

/**
 * Handle XON/XOFF flow control in receive ISR
 */
void handle_sw_flow_control(uint8_t received_char) {
    if (received_char == XOFF) {
        tx_paused = true;
    } else if (received_char == XON) {
        tx_paused = false;
        
        /* Resume transmission if data pending */
        volatile uint32_t *uart = (uint32_t *)UART0_BASE;
        if (tx_head != tx_tail) {
            uart[UART_IER_DLH/4] |= 0x02;  /* Enable THRE interrupt */
        }
    }
}

/**
 * Modified transmit function with flow control
 */
void uart_tx_with_flow_control(void) {
    volatile uint32_t *uart = (uint32_t *)UART0_BASE;
    
    if (!tx_paused && tx_head != tx_tail) {
        uart[UART_RBR_THR_DLL/4] = tx_buffer[tx_tail];
        tx_tail = (tx_tail + 1) % TX_BUFFER_SIZE;
    }
    
    if (tx_head == tx_tail || tx_paused) {
        uart[UART_IER_DLH/4] &= ~0x02;  /* Disable THRE interrupt */
    }
}
```

## DMA Integration

### EDMA3 Configuration for UART

```c
#include "edma3.h"

#define UART0_TX_DMA_CHANNEL  26
#define UART0_RX_DMA_CHANNEL  27

/**
 * Configure UART for DMA operation
 */
void uart_setup_dma(volatile uint32_t *uart_base) {
    /* Enable DMA mode in supplementary control register */
    uart_base[0x40/4] |= 0x01;  /* SCR DMA_MODE_CTL */
    
    /* Configure FIFO for DMA */
    uart_base[UART_IIR_FCR/4] = 0x09;  /* Enable FIFO, DMA mode */
}

/**
 * Setup DMA for UART transmission
 */
void setup_uart_tx_dma(const uint8_t *src_buffer, int length) {
    edma3_param_set_t param_set;
    
    /* Configure parameter set for TX */
    param_set.src_addr = (uint32_t)src_buffer;
    param_set.dest_addr = UART0_BASE + UART_RBR_THR_DLL;
    param_set.a_count = 1;        /* 1 byte per transfer */
    param_set.b_count = length;   /* Total bytes */
    param_set.c_count = 1;        /* Single array */
    param_set.src_b_index = 1;    /* Increment source */
    param_set.dest_b_index = 0;   /* Fixed destination */
    param_set.src_c_index = 0;
    param_set.dest_c_index = 0;
    param_set.link_addr = 0xFFFF; /* No linking */
    param_set.b_count_reload = 0;
    param_set.opt = EDMA3_OPT_SYNCDIM_A | EDMA3_OPT_TCC(UART0_TX_DMA_CHANNEL);
    
    /* Configure EDMA3 channel */
    edma3_set_param(UART0_TX_DMA_CHANNEL, &param_set);
    edma3_enable_channel(UART0_TX_DMA_CHANNEL);
    
    /* Enable DMA request */
    edma3_enable_dma_request(UART0_TX_DMA_CHANNEL);
}

/**
 * Setup DMA for UART reception
 */
void setup_uart_rx_dma(uint8_t *dest_buffer, int length) {
    edma3_param_set_t param_set;
    
    /* Configure parameter set for RX */
    param_set.src_addr = UART0_BASE + UART_RBR_THR_DLL;
    param_set.dest_addr = (uint32_t)dest_buffer;
    param_set.a_count = 1;        /* 1 byte per transfer */
    param_set.b_count = length;   /* Total bytes */
    param_set.c_count = 1;        /* Single array */
    param_set.src_b_index = 0;    /* Fixed source */
    param_set.dest_b_index = 1;   /* Increment destination */
    param_set.src_c_index = 0;
    param_set.dest_c_index = 0;
    param_set.link_addr = 0xFFFF; /* No linking */
    param_set.b_count_reload = 0;
    param_set.opt = EDMA3_OPT_SYNCDIM_A | EDMA3_OPT_TCC(UART0_RX_DMA_CHANNEL);
    
    /* Configure EDMA3 channel */
    edma3_set_param(UART0_RX_DMA_CHANNEL, &param_set);
    edma3_enable_channel(UART0_RX_DMA_CHANNEL);
    
    /* Enable DMA request */
    edma3_enable_dma_request(UART0_RX_DMA_CHANNEL);
}
```

## IrDA Mode Implementation

### IrDA Configuration

```c
/**
 * Configure UART for IrDA SIR mode
 */
void uart_setup_irda_sir(volatile uint32_t *uart_base, uint32_t baud_rate) {
    uint32_t divisor;
    
    /* Disable UART first */
    uart_base[UART_MDR1/4] = 0x07;
    
    /* Configure for SIR mode */
    uart_base[UART_MDR1/4] = 0x01;  /* SIR mode */
    
    /* Set baud rate for IrDA */
    divisor = 48000000 / (16 * baud_rate);
    uart_base[UART_LCR/4] |= 0x80;   /* Enable DLAB */
    uart_base[UART_RBR_THR_DLL/4] = divisor & 0xFF;
    uart_base[UART_IER_DLH/4] = (divisor >> 8) & 0xFF;
    uart_base[UART_LCR/4] &= ~0x80;  /* Disable DLAB */
    
    /* Configure line format (8N1 typical for IrDA) */
    uart_base[UART_LCR/4] = 0x03;
    
    /* Enable FIFOs */
    uart_base[UART_IIR_FCR/4] = 0x07;
    
    /* Configure IrDA-specific settings in MDR2 */
    uart_base[UART_MDR2/4] = 0x00;  /* Default IrDA settings */
}

/**
 * Configure UART for IrDA MIR mode
 */
void uart_setup_irda_mir(volatile uint32_t *uart_base) {
    /* Disable UART first */
    uart_base[UART_MDR1/4] = 0x07;
    
    /* Configure for MIR mode */
    uart_base[UART_MDR1/4] = 0x04;  /* MIR mode */
    
    /* MIR uses fixed timing, no baud rate divisor needed */
    
    /* Configure line format */
    uart_base[UART_LCR/4] = 0x03;   /* 8N1 */
    
    /* Enable FIFOs with higher trigger levels for MIR */
    uart_base[UART_IIR_FCR/4] = 0xC7; /* Enable, clear, 14-byte trigger */
    
    /* Configure MIR-specific settings */
    uart_base[UART_MDR2/4] = 0x00;
}

/**
 * Configure UART for IrDA FIR mode
 */
void uart_setup_irda_fir(volatile uint32_t *uart_base) {
    /* Disable UART first */
    uart_base[UART_MDR1/4] = 0x07;
    
    /* Configure for FIR mode */
    uart_base[UART_MDR1/4] = 0x05;  /* FIR mode */
    
    /* FIR uses fixed 4 Mbps rate */
    
    /* Configure line format */
    uart_base[UART_LCR/4] = 0x03;   /* 8N1 */
    
    /* Enable FIFOs with maximum trigger levels */
    uart_base[UART_IIR_FCR/4] = 0xC7; /* Enable, clear, 14-byte trigger */
    
    /* Configure FIR-specific settings */
    uart_base[UART_MDR2/4] = 0x00;
}
```

### IrDA Frame Handling

```c
/**
 * Send IrDA frame with BOF/EOF handling
 */
void irda_send_frame(volatile uint32_t *uart_base, const uint8_t *data, int len) {
    int i;
    
    /* Wait for transmitter to be ready */
    while (!(uart_base[UART_LSR/4] & 0x20));
    
    /* Send data */
    for (i = 0; i < len; i++) {
        while (!(uart_base[UART_LSR/4] & 0x20));
        uart_base[UART_RBR_THR_DLL/4] = data[i];
    }
    
    /* Wait for transmission to complete */
    while (!(uart_base[UART_LSR/4] & 0x40));
}

/**
 * Configure BOF (Beginning of Frame) length for IrDA
 */
void irda_set_bof_length(volatile uint32_t *uart_base, uint8_t length) {
    uart_base[0x38/4] = length;  /* BLR register */
}
```

## Consumer IR (CIR) Mode

### CIR Configuration

```c
/**
 * Configure UART for Consumer IR mode
 */
void uart_setup_cir(volatile uint32_t *uart_base) {
    /* Disable UART first */
    uart_base[UART_MDR1/4] = 0x07;
    
    /* Configure for CIR mode */
    uart_base[UART_MDR1/4] = 0x06;  /* CIR mode */
    
    /* Configure carrier frequency prescaler (for 38 kHz carrier) */
    /* Carrier frequency = UART_CLK / (16 * CFPS) */
    /* For 38 kHz: CFPS = 48MHz / (16 * 38kHz) = 78.9 ≈ 79 */
    uart_base[0x5C/4] = 79;  /* CFPS register */
    
    /* Configure CIR pulse mode in MDR2 */
    uart_base[UART_MDR2/4] = 0x02;  /* CIR pulse mode */
    
    /* Enable FIFOs */
    uart_base[UART_IIR_FCR/4] = 0x07;
}

/**
 * Send CIR pulse sequence
 */
void cir_send_pulse_sequence(volatile uint32_t *uart_base, 
                           const uint16_t *pulse_widths, int count) {
    int i;
    
    for (i = 0; i < count; i++) {
        /* Configure pulse width */
        /* Implementation depends on specific CIR requirements */
        while (!(uart_base[UART_LSR/4] & 0x20));
        uart_base[UART_RBR_THR_DLL/4] = pulse_widths[i] & 0xFF;
    }
}
```

## Power Management

### Low Power Configuration

```c
/**
 * Configure UART for low power operation
 */
void uart_setup_low_power(volatile uint32_t *uart_base) {
    /* Enable smart idle mode */
    uart_base[UART_SYSC/4] = 0x18;  /* Smart idle, auto idle */
    
    /* Configure wakeup events */
    uart_base[UART_WER/4] = 0x80;   /* Enable RX activity wakeup */
    
    /* Enable wakeup capability */
    uart_base[UART_SYSC/4] |= 0x04; /* ENAWAKEUP */
}

/**
 * Put UART into sleep mode
 */
void uart_enter_sleep(volatile uint32_t *uart_base) {
    /* Wait for any ongoing transmission to complete */
    while (!(uart_base[UART_LSR/4] & 0x40));
    
    /* Disable UART */
    uart_base[UART_MDR1/4] = 0x07;
    
    /* Configure for force idle */
    uart_base[UART_SYSC/4] = 0x00;
}

/**
 * Wake up UART from sleep mode
 */
void uart_wake_up(volatile uint32_t *uart_base) {
    /* Re-enable UART */
    uart_base[UART_MDR1/4] = 0x00;  /* UART 16x mode */
    
    /* Restore smart idle mode */
    uart_base[UART_SYSC/4] = 0x18;
}
```

## Debugging and Diagnostics

### UART Status Monitoring

```c
/**
 * Get comprehensive UART status
 */
typedef struct {
    bool tx_empty;
    bool tx_holding_empty;
    bool rx_data_ready;
    bool break_interrupt;
    bool framing_error;
    bool parity_error;
    bool overrun_error;
    bool fifo_error;
    uint8_t fifo_level;
} uart_status_t;

void uart_get_status(volatile uint32_t *uart_base, uart_status_t *status) {
    uint32_t lsr = uart_base[UART_LSR/4];
    
    status->tx_empty = (lsr & 0x40) != 0;
    status->tx_holding_empty = (lsr & 0x20) != 0;
    status->rx_data_ready = (lsr & 0x01) != 0;
    status->break_interrupt = (lsr & 0x10) != 0;
    status->framing_error = (lsr & 0x08) != 0;
    status->parity_error = (lsr & 0x04) != 0;
    status->overrun_error = (lsr & 0x02) != 0;
    status->fifo_error = (lsr & 0x80) != 0;
    
    /* Estimate FIFO level (implementation specific) */
    status->fifo_level = 0;  /* Would need additional logic */
}

/**
 * Print UART configuration for debugging
 */
void uart_print_config(volatile uint32_t *uart_base) {
    uint32_t lcr, mcr, mdr1, ier;
    
    lcr = uart_base[UART_LCR/4];
    mcr = uart_base[UART_MCR/4];
    mdr1 = uart_base[UART_MDR1/4];
    ier = uart_base[UART_IER_DLH/4];
    
    printf("UART Configuration:\n");
    printf("  Mode: %s\n", 
           (mdr1 & 0x07) == 0 ? "UART" :
           (mdr1 & 0x07) == 1 ? "SIR" :
           (mdr1 & 0x07) == 4 ? "MIR" :
           (mdr1 & 0x07) == 5 ? "FIR" :
           (mdr1 & 0x07) == 6 ? "CIR" : "Disabled");
    
    printf("  Data bits: %d\n", ((lcr & 0x03) + 5));
    printf("  Stop bits: %d\n", (lcr & 0x04) ? 2 : 1);
    printf("  Parity: %s\n",
           !(lcr & 0x08) ? "None" :
           (lcr & 0x10) ? "Even" : "Odd");
    
    printf("  Flow control: %s\n", (mcr & 0x20) ? "Enabled" : "Disabled");
    printf("  Interrupts: 0x%02X\n", ier);
}
```

### Loopback Testing

```c
/**
 * Perform UART loopback test
 */
bool uart_loopback_test(volatile uint32_t *uart_base) {
    uint8_t test_data[] = {0x55, 0xAA, 0xFF, 0x00, 0x12, 0x34, 0x56, 0x78};
    uint8_t received_data[sizeof(test_data)];
    int i;
    
    /* Enable internal loopback */
    uart_base[UART_MCR/4] |= 0x10;  /* LOOP bit */
    
    /* Send test data */
    for (i = 0; i < sizeof(test_data); i++) {
        uart_putchar(uart_base, test_data[i]);
    }
    
    /* Small delay */
    for (volatile int delay = 0; delay < 1000; delay++);
    
    /* Receive test data */
    for (i = 0; i < sizeof(test_data); i++) {
        int c = uart_getchar_nonblocking(uart_base);
        if (c < 0) {
            uart_base[UART_MCR/4] &= ~0x10;  /* Disable loopback */
            return false;  /* Test failed */
        }
        received_data[i] = c;
    }
    
    /* Disable loopback */
    uart_base[UART_MCR/4] &= ~0x10;
    
    /* Compare data */
    for (i = 0; i < sizeof(test_data); i++) {
        if (test_data[i] != received_data[i]) {
            return false;  /* Test failed */
        }
    }
    
    return true;  /* Test passed */
}
```

## Performance Optimization

### High-Speed Configuration

```c
/**
 * Configure UART for high-speed operation
 */
void uart_setup_high_speed(volatile uint32_t *uart_base) {
    /* Use maximum FIFO trigger levels */
    uart_base[UART_IIR_FCR/4] = 0xC7;  /* 14-byte RX trigger */
    
    /* Enable DMA mode for bulk transfers */
    uart_base[0x40/4] |= 0x01;  /* SCR DMA_MODE_CTL */
    
    /* Configure for minimum interrupt latency */
    uart_base[UART_IER_DLH/4] = 0x01;  /* Only RX interrupt initially */
    
    /* Enable auto flow control to prevent overruns */
    uart_base[UART_MCR/4] |= 0x20;  /* AFE */
}

/**
 * Batch character processing for high throughput
 */
int uart_process_rx_batch(volatile uint32_t *uart_base, 
                         uint8_t *buffer, int max_chars) {
    int count = 0;
    uint32_t lsr;
    
    while (count < max_chars) {
        lsr = uart_base[UART_LSR/4];
        
        if (!(lsr & 0x01)) {
            break;  /* No more data */
        }
        
        if (lsr & 0x1E) {  /* Error condition */
            /* Handle error and continue */
            uart_base[UART_RBR_THR_DLL/4];  /* Read to clear */
            continue;
        }
        
        buffer[count++] = uart_base[UART_RBR_THR_DLL/4];
    }
    
    return count;
}
```

## Related Documentation

- [UART Overview](uart-overview.md) - System architecture and features
- [UART Registers](../../registers/uart-registers.md) - Complete register reference
- [Interrupt System](../../interrupts/interrupt-system.md) - UART interrupt handling
- [DMA Usage](dma-usage.md) - UART DMA configuration
- [Pin Muxing](../pinmux/uart-pinmux.md) - UART pin configuration

## Example Applications

### Simple Console Implementation

```c
/* Simple console using UART0 */
void console_init(void) {
    uart0_init_115200();
    uart_setup_rx_interrupts((uint32_t *)UART0_BASE);
    
    /* Enable UART0 interrupt in INTC */
    intc_enable_interrupt(UART0_IRQ);
}

void console_puts(const char *str) {
    uart_puts((uint32_t *)UART0_BASE, str);
}

int console_getline(char *buffer, int max_len) {
    int pos = 0;
    int c;
    
    while (pos < max_len - 1) {
        c = uart_getchar((uint32_t *)UART0_BASE);
        
        if (c == '\r' || c == '\n') {
            uart_putchar((uint32_t *)UART0_BASE, '\n');
            break;
        } else if (c == '\b' || c == 0x7F) {  /* Backspace */
            if (pos > 0) {
                pos--;
                uart_puts((uint32_t *)UART0_BASE, "\b \b");
            }
        } else if (c >= 32 && c < 127) {  /* Printable character */
            buffer[pos++] = c;
            uart_putchar((uint32_t *)UART0_BASE, c);
        }
    }
    
    buffer[pos] = '\0';
    return pos;
}
```

This implementation guide provides comprehensive coverage of UART programming on the AM3358, from basic polling operations to advanced features like IrDA and DMA integration. The examples can be adapted for specific application requirements.