// SPDX-License-Identifier: MIT
// uart.c --- Polled UART0 driver
// Copyright (c) 2026 Jakob Kastelic

#include "uart.h"
#include <stdint.h>
#include <stdio.h>

// ADSP-21569 memory-mapped register accessor.
#define MMR(addr) (*(volatile uint32_t *)(addr))

// PORTA pinmux (HRM 12-41, 12-61).
#define REG_PORTA_FER 0x31004000
#define REG_PORTA_MUX 0x31004030

// UART0 registers (HRM 17-25..17-50).
#define REG_UART0_CTL  0x31003004
#define REG_UART0_STAT 0x31003008
#define REG_UART0_CLK  0x31003010
#define REG_UART0_RBR  0x31003020
#define REG_UART0_THR  0x31003024

// UART_CTL bits (HRM 17-27..17-31).
#define BIT_UART_CTL_EN       (1U << 0U)
#define BIT_UART_CTL_MOD_UART (0U << 4U)
#define BIT_UART_CTL_WLS_8    (3U << 8U)
#define BIT_UART_CTL_STB_1    (0U << 12U)
#define BIT_UART_CTL_PEN_OFF  (0U << 14U)

// UART_STAT bits (HRM 17-44).
#define BIT_UART_STAT_DR   (1U << 0U)
#define BIT_UART_STAT_THRE (1U << 5U)

// UART_CLK bits (HRM 17-25).
#define BIT_UART_CLK_EDBO 0x80000000U
#define MASK_UART_CLK_DIV 0x0000FFFFU

// UART0 is PA6 (TX) / PA7 (RX), alternate function "b" = mux
// value 1 on every ADSP-21569 variant (HRM 12-61).
#define PA_UART0_TX_FER_BIT (1U << 6U)
#define PA_UART0_RX_FER_BIT (1U << 7U)
#define PA_UART0_TX_MUX_POS 12U
#define PA_UART0_RX_MUX_POS 14U

static void pinmux_uart0(void)
{
   uint32_t mux = MMR(REG_PORTA_MUX);
   mux &= ~((3U << PA_UART0_TX_MUX_POS) | (3U << PA_UART0_RX_MUX_POS));
   mux |= ((1U << PA_UART0_TX_MUX_POS) | (1U << PA_UART0_RX_MUX_POS));
   MMR(REG_PORTA_MUX) = mux;
   MMR(REG_PORTA_FER) |= (PA_UART0_TX_FER_BIT | PA_UART0_RX_FER_BIT);
}

void uart_init(const uint32_t baud_div)
{
   pinmux_uart0();

   // Disable the UART before reprogramming.
   MMR(REG_UART0_CTL) = 0U;

   // EDBO = 1 selects divide-by-one mode; the divisor is SCLK / baud.
   // The caller has already done that math.
   MMR(REG_UART0_CLK) = BIT_UART_CLK_EDBO | (baud_div & MASK_UART_CLK_DIV);

   // 8 data bits, 1 stop bit, no parity, UART mode, then enable.
   MMR(REG_UART0_CTL) = BIT_UART_CTL_WLS_8 | BIT_UART_CTL_STB_1 |
                        BIT_UART_CTL_PEN_OFF | BIT_UART_CTL_MOD_UART |
                        BIT_UART_CTL_EN;
}

void uart_putc(const char c)
{
   while ((MMR(REG_UART0_STAT) & BIT_UART_STAT_THRE) == 0U)
      ;
   MMR(REG_UART0_THR) = (uint32_t)(uint8_t)c;
}

int uart_try_getc(void)
{
   if ((MMR(REG_UART0_STAT) & BIT_UART_STAT_DR) == 0U) {
      return -1;
   }
   return (int)(uint8_t)MMR(REG_UART0_RBR);
}

// Provide the per-byte hook printf expects.
int putchar(const int c)
{
   uart_putc((char)c);
   return c;
}
