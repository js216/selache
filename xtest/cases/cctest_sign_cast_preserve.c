// SPDX-License-Identifier: MIT
// cctest_sign_cast_preserve.c --- cctest case sign_cast_preserve
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

struct s2 {
   int a;
   int b;
};

int test_main(void)
{
   int s          = -1;
   unsigned int u = (unsigned int)s;
   int s2         = (int)u;
   return (s2 == -1 && u == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}
