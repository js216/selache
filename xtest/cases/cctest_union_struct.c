// SPDX-License-Identifier: MIT
// cctest_union_struct.c --- cctest case union_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

union outer_u {
   struct {
      int a;
      int b;
   } s;

   int raw[2];
};

int test_main(void)
{
   union outer_u u;
   u.s.a = 0x10;
   u.s.b = 0x20;
   return u.raw[0] + u.raw[1]; /* 0x30 */
}
