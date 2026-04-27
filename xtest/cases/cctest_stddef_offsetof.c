// SPDX-License-Identifier: MIT
// cctest_stddef_offsetof.c --- cctest case stddef_offsetof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 8 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct off_test {
   int a;
   int b;
   int c;
};

int test_main(void)
{
   return (int)offsetof(struct off_test, c); /* 2 * sizeof(int) = 8 */
}
