// SPDX-License-Identifier: MIT
// cctest_deref_write.c --- cctest case deref_write
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12C */

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
   int a = 100, b = 200;
   int *p = &a;
   *p     = *p + b;
   return a; /* 300 = 0x12C */
}
