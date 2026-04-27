// SPDX-License-Identifier: MIT
// cctest_memcmp_fn.c --- cctest case memcmp_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x21 */

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
   uint8_t a[4] = {1, 2, 3, 4};
   uint8_t b[4] = {1, 2, 3, 4};
   uint8_t c[4] = {1, 2, 9, 4};
   int r = 0;
   if (memcmp(a, b, 4) == 0) r |= 0x01;
   if (memcmp(a, c, 4) < 0)  r |= 0x20;
   return r;
}
