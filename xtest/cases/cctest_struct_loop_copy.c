// SPDX-License-Identifier: MIT
// cctest_struct_loop_copy.c --- cctest case struct_loop_copy
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct s2 {
   int a;
   int b;
};

int test_main(void)
{
   struct s2 arr[5];
   for (int i = 0; i < 5; i++) {
      struct s2 tmp;
      tmp.a  = i;
      tmp.b  = i * 2;
      arr[i] = tmp;
   }
   return arr[2].a + arr[4].b; /* 2 + 8 = 10 = 0x0A */
}
