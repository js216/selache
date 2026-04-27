// SPDX-License-Identifier: MIT
// cctest_struct_bool.c --- cctest case struct_bool
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct with_bool {
   int x;
   _Bool flag;
   int y;
};

int test_main(void)
{
   struct with_bool s;
   s.x    = 10;
   s.flag = 1;
   s.y    = 20;
   return s.x + (int)s.flag + s.y; /* 10+1+20 = 31 = 0x1F */
}
