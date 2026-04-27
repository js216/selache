// SPDX-License-Identifier: MIT
// cctest_struct_no_alias.c --- cctest case struct_no_alias
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6D */

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
   x.a         = 10;
   x.b         = 20;
   struct s2 y = x;
   y.a         = 99;
   return x.a + y.a; /* 10 + 99 = 109 = 0x6D */
}
