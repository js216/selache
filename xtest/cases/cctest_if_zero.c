// SPDX-License-Identifier: MIT
// cctest_if_zero.c --- cctest case if_zero
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   int r = 0;
#if 0
  r = 0xFF; /* dead code */
#endif
#if 1
   r = 0x42;
#endif
   return r; /* 0x42 */
}
