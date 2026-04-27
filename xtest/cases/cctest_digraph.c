// SPDX-License-Identifier: MIT
// cctest_digraph.c --- cctest case digraph
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

int test_main(void)
{
   int arr<:3:>; /* int arr[3]; */
   arr<:0:> = 10;
   arr<:1:> = 20;
   arr<:2:> = 30;
   int sum  = 0;
   <% /* { */
      sum = arr<:0:> + arr<:1:> + arr<:2:>;
   %> /* } */
   return sum; /* 60 = 0x3C */
}
