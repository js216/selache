// SPDX-License-Identifier: MIT
// cctest_sprintf_fn.c --- cctest case sprintf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2A */

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
   char buf[16] = {0};
   int n = sprintf(buf, "%d", 42);
   if (n != 2) return 0;
   if (buf[0] != '4' || buf[1] != '2') return 0;
   return 42;
}
