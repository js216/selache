// SPDX-License-Identifier: MIT
// cctest_ptr_fn_ret_fn.c --- cctest case ptr_fn_ret_fn
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

   bf.val = 0xDEADBEEF;
   return (int)((bf.val >> 16) & 0xFF); /* 0xAD = 173 */
}

static int helper_mul(int a, int b)
{
   return a * b;
}

static int fn_ret_add(int a, int b)
{
   return a + b;
}

typedef int (*binop_t)(int, int);

static binop_t get_binop(int which)
{
   if (which == 0)
      return fn_ret_add;
   return helper_mul;
}

int test_main(void)
{
   binop_t (*getter)(int) = get_binop;
   binop_t op             = getter(0);
   return op(0x10, 0x20); /* 0x30 */
}
