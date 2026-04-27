// SPDX-License-Identifier: MIT
// cctest_struct_ret.c --- cctest case struct_ret
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

struct retval {
   int a;
   int b;
};

static struct retval make_pair(int x, int y)
{
   struct retval r;
   r.a = x;
   r.b = y;
   return r;
}

int test_main(void)
{
   struct retval p = make_pair(0x10, 0x20);
   return p.a + p.b; /* 0x30 */
}
