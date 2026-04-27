// SPDX-License-Identifier: MIT
// cctest_do_while_macro.c --- cctest case do_while_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x73 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define SWAP_INTS(a, b)                                                        \
   do {                                                                        \
      int _t = (a);                                                            \
      (a)    = (b);                                                            \
      (b)    = _t;                                                             \
   } while (0)

int test_main(void)
{
   int x = 3, y = 7;
   SWAP_INTS(x, y);
   return x * 0x10 + y; /* 7*16+3 = 115 = 0x73 */
}
