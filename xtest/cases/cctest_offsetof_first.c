// SPDX-License-Identifier: MIT
// cctest_offsetof_first.c --- cctest case offsetof_first
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

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
   return (int)offsetof(struct off_test, a); /* 0 */
}
