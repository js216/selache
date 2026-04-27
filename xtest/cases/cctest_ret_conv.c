// SPDX-License-Identifier: MIT
// cctest_ret_conv.c --- cctest case ret_conv
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

static int ret_char(void)
{
   char c = 0x42;
   return c; /* promoted to int */
}

int test_main(void)
{
   return ret_char(); /* 0x42 */
}
