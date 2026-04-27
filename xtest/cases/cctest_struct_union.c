// SPDX-License-Identifier: MIT
// cctest_struct_union.c --- cctest case struct_union
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x31 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct tagged_val {
   int tag;

   union {
      int i;
      float f;
   } u;
};

int test_main(void)
{
   struct tagged_val tv;
   tv.tag = 1;
   tv.u.i = 0x30;
   return tv.tag + tv.u.i; /* 0x31 */
}
