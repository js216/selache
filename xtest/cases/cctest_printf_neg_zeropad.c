// SPDX-License-Identifier: MIT
// cctest_printf_neg_zeropad.c --- cctest case printf_neg_zeropad
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

static int try_print(char *buf, size_t size, const char *fmt, ...) {
   va_list ap;
   va_start(ap, fmt);
   int n = vsnprintf(buf, size, fmt, ap);
   va_end(ap);
   return n;
}

int test_main(void) {
   char buf[64];
   int n = try_print(buf, sizeof(buf), "%05d", -42);
   if (n != 5) return 0xAA;
   if (strcmp(buf, "-0042") != 0) return 0xAA;
   return 0x55;
}
