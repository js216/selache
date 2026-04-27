// SPDX-License-Identifier: MIT
// cctest_arg_conv.c --- cctest case arg_conv
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x64 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int take_long(long x)
{
   return (int)(x + 1);
}

int test_main(void)
{
   char c = 99;
   return take_long(c); /* char→long implicit, 100 = 0x64 */
}
