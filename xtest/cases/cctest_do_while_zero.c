// SPDX-License-Identifier: MIT
// cctest_do_while_zero.c --- cctest case do_while_zero
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x03 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define DO_INCR(v)                                                             \
   do {                                                                        \
      (v) += 1;                                                                \
   } while (0)

int test_main(void)
{
   int x = 0;
   DO_INCR(x);
   DO_INCR(x);
   DO_INCR(x);
   return x;
}
