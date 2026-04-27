// SPDX-License-Identifier: MIT
// cctest_arr_of_union.c --- cctest case arr_of_union
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

union ival {
   int i;
   float f;
};

int test_main(void)
{
   union ival arr[3];
   arr[0].i = 10;
   arr[1].i = 20;
   arr[2].i = 30;
   return arr[0].i + arr[1].i + arr[2].i; /* 60 = 0x3C */
}
