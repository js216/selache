// SPDX-License-Identifier: MIT
// cctest_struct_copy.c --- cctest case struct_copy
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

struct s2 {
   int a;
   int b;
};

int test_main(void)
{
   struct s2 x;
   x.a         = 0x10;
   x.b         = 0x20;
   struct s2 y = x;
   return y.a + y.b; /* 0x30 */
}
