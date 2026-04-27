// SPDX-License-Identifier: MIT
// cctest_ternary_sideeffect.c --- cctest case ternary_sideeffect
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

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
   int y = 5;
   (1) ? (void)(y += 5) : (void)0;
   return y; /* 10 */
}
