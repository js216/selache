// SPDX-License-Identifier: MIT
// cctest_union_sizeof.c --- cctest case union_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

union sztest {
   char c;
   int i;
   short s;
};

int test_main(void)
{
   return (int)sizeof(union sztest); /* 4 (sizeof int) */
}
