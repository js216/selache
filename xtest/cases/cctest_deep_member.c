// SPDX-License-Identifier: MIT
// cctest_deep_member.c --- cctest case deep_member
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x77 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct chain3 {
   struct {
      struct {
         int deep;
      } b;
   } a;
};

int test_main(void)
{
   struct chain3 c;
   c.a.b.deep = 0x77;
   return c.a.b.deep;
}
