// SPDX-License-Identifier: MIT
// cctest_struct_fnptr_init.c --- cctest case struct_fnptr_init
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

static int helper_add(int x, int y)
{
   return x + y;
}

struct op_entry {
   int (*fn)(int, int);
   int a;
   int b;
};

int test_main(void)
{
   struct op_entry e = {helper_add, 0x10, 0x20};
   return e.fn(e.a, e.b); /* 0x30 */
}
