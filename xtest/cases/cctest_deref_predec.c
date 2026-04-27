// SPDX-License-Identifier: MIT
// cctest_deref_predec.c --- cctest case deref_predec
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x09 */

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
   int x  = 10;
   int *p = &x;
   --*p;
   return x; /* 9 */
}
