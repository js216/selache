// SPDX-License-Identifier: MIT
// cctest_vsnprintf_fn.c --- cctest case vsnprintf_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int call_vsnprintf(char *buf, size_t sz, const char *fmt, ...)
{
   va_list ap;
   va_start(ap, fmt);
   int n = vsnprintf(buf, sz, fmt, ap);
   va_end(ap);
   return n;
}

int test_main(void)
{
   char buf[16] = {0};
   int n = call_vsnprintf(buf, sizeof(buf), "%d", 7);
   if (n != 1) return 0;
   if (buf[0] != '7') return 0;
   return 7;
}
