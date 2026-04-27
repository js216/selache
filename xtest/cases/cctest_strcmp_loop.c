// SPDX-License-Identifier: MIT
// cctest_strcmp_loop.c --- cctest case strcmp_loop
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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
   const char *a = "hello";
   const char *b = "hello";
   const char *c = "world";
   int eq_ab = 1, eq_ac = 1;
   for (int i = 0; a[i] || b[i]; i++)
      if (a[i] != b[i]) {
         eq_ab = 0;
         break;
      }
   for (int i = 0; a[i] || c[i]; i++)
      if (a[i] != c[i]) {
         eq_ac = 0;
         break;
      }
   return (eq_ab && !eq_ac) ? 0x55 : 0xAA;
}
