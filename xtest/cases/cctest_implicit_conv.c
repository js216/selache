// SPDX-License-Identifier: MIT
// cctest_implicit_conv.c --- cctest case implicit_conv
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x11 */

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
   int a   = 7;
   float f = (float)a;
   f       = f * 2.5f;
   return (int)f; /* 17 = 0x11 */
}
