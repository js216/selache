// SPDX-License-Identifier: MIT
// cctest_const_member_init.c --- cctest case const_member_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   struct cs {
      const int a;
      int b;
   };
   struct cs s = {10, 20};
   return s.a + s.b;
}
