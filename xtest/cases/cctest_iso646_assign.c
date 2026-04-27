// SPDX-License-Identifier: MIT
// cctest_iso646_assign.c --- cctest case iso646_assign
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x34 */

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
   int x = 0xFF;
   x and_eq 0x3C; /* x &= 0x3C → 0x3C */
   x or_eq 0x40;  /* x |= 0x40 → 0x7C */
   x xor_eq 0x48; /* x ^= 0x48 → 0x34 */
   return x;      /* 0x34 */
}
