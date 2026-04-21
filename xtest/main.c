// SPDX-License-Identifier: MIT
// main.c --- xtest harness: runs test_main, prints result, spins
// Copyright (c) 2026 Jakob Kastelic

#include "uart.h"
#include <stdio.h>

extern int test_main(void);

int main(void)
{
   uart_init(BOARD_BAUD_DIV);
   int got = test_main();
   printf("got %x\r\n", got);
   for (;;) { }
}
