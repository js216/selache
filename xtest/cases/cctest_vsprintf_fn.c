// SPDX-License-Identifier: MIT
// cctest_vsprintf_fn.c --- cctest case vsprintf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x09 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int call_vsprintf(char *buf, const char *fmt, ...)
{
   va_list ap;
   va_start(ap, fmt);
   int n = vsprintf(buf, fmt, ap);
   va_end(ap);
   return n;
}

int test_main(void)
{
   char buf[16] = {0};
   int n = call_vsprintf(buf, "%d", 9);
   if (n != 1) return 0;
   if (buf[0] != '9') return 0;
   return 9;
}
