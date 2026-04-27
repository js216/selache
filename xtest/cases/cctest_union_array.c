// SPDX-License-Identifier: MIT
// cctest_union_array.c --- cctest case union_array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

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
   union iv {
      int i;
      float f;
   };
   union iv arr[3];
   arr[0].i = 10;
   arr[1].i = 5;
   arr[2].i = 15;
   return arr[0].i + arr[1].i + arr[2].i;
}
