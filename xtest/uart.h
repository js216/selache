// SPDX-License-Identifier: MIT
// uart.h --- UART0 driver API
// Copyright (c) 2026 Jakob Kastelic

#ifndef UART_H
#define UART_H

#include <stdint.h>

// Bring up UART0 at the given baud-rate divisor.
//   baud_div: pre-computed divisor = SCLK0 / baud (with EDBO=1).
void uart_init(const uint32_t baud_div);

// Blocking single-character transmit. Spins until the TX
// holding register is empty, then writes `c`.
//   c: character to send.
void uart_putc(const char c);

// Non-blocking single-character receive.
//   returns: 0..255 if a byte was available, -1 if the RX FIFO
//            was empty.
int uart_try_getc(void);

#endif // UART_H
