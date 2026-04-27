// SPDX-License-Identifier: MIT
// cctest_struct_chain_copy.c --- cctest case struct_chain_copy
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

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
   struct s2 a, b, c;
   c.a = 0x42;
   c.b = 0x10;
   a = b = c;
   return a.a; /* 0x42 */
}
