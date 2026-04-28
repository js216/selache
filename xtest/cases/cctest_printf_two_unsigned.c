// SPDX-License-Identifier: MIT
// cctest_printf_two_unsigned.c --- cctest case printf_two_unsigned
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcafe */

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
   char buf[24];
   for (int i = 0; i < 24; i++)
      buf[i] = 0;
   snprintf(buf, sizeof(buf), "%x_%x", 0xcau, 0xfeu);
   unsigned hi = 0u, lo = 0u;
   for (int i = 0; i < 2; i++) {
      char c     = buf[i];
      unsigned d = (unsigned)((c <= '9') ? c - '0' : c - 'a' + 10);
      hi         = (hi << 4) | d;
   }
   for (int i = 3; i < 5; i++) {
      char c     = buf[i];
      unsigned d = (unsigned)((c <= '9') ? c - '0' : c - 'a' + 10);
      lo         = (lo << 4) | d;
   }
   return (int)((hi << 8) | lo);
}
