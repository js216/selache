// SPDX-License-Identifier: MIT
// cctest_struct_arr_only.c --- cctest case struct_arr_only
// Copyright (c) 2026 Jakob Kastelic

/* @expect 9 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct arr_only {
   int a[3];
   int b[2];
};

int test_main(void)
{
   struct arr_only s = {
       {1, 2, 3},
       {4, 5}
   };
   return s.a[0] + s.a[2] + s.b[1]; /* 1+3+5 = 9 */
}
