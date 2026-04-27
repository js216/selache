// SPDX-License-Identifier: MIT
// cctest_struct_arr_sizeof.c --- cctest case struct_arr_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x18 */

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
   struct sa {
      int a;
      int b[5];
   };
