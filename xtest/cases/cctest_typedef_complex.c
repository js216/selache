// SPDX-License-Identifier: MIT
// cctest_typedef_complex.c --- cctest case typedef_complex
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3C */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int (*arr3_ptr)[3];

int test_main(void)
{
   int arr[3] = {10, 20, 30};
   arr3_ptr p = &arr;
   return (*p)[0] + (*p)[1] + (*p)[2]; /* 60 = 0x3C */
}
