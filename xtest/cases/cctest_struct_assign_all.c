// SPDX-License-Identifier: MIT
// cctest_struct_assign_all.c --- cctest case struct_assign_all
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
   struct s3 {
      int a;
      int b;
      int c;
   };
   struct s3 src = {5, 10, 15};
   struct s3 dst;
   dst = src;
   return dst.a + dst.b + dst.c;
}
