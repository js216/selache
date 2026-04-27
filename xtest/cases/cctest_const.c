// SPDX-License-Identifier: MIT
// cctest_const.c --- cctest case const
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2A */

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
   const int x  = 42;
   const int *p = &x;
   return *p; /* 42 = 0x2A */
}
