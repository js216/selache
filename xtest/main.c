// SPDX-License-Identifier: MIT
// main.c --- xtest harness: runs test_main, prints result, spins
// Copyright (c) 2026 Jakob Kastelic

#include "uart.h"
#include "xtest_timer.h"
#include <stdio.h>
#include <stdint.h>

extern int test_main(void);

int main(void)
{
   uart_init(BOARD_BAUD_DIV);
   printf("start\r\n");
   xtest_timer_init();
   uint32_t t0 = xtest_timer_ticks();
   int got = test_main();
   uint32_t ticks = xtest_timer_ticks() - t0;
   printf("got %x ticks %x\r\n", got, ticks);
   for (;;) { }
}
