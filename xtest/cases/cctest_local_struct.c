// SPDX-License-Identifier: MIT
// cctest_local_struct.c --- cctest case local_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

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
   struct local_s {
      int a;
      int b;
   };
   struct local_s s;
   s.a = 0x10;
   s.b = 0x20;
   return s.a + s.b; /* 0x30 */
}
