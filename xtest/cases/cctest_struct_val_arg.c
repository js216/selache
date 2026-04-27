// SPDX-License-Identifier: MIT
// cctest_struct_val_arg.c --- cctest case struct_val_arg
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

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

static void modify_struct(struct s2 s, int *out)
{
   s.a  = 999;
   *out = s.a;
}

int test_main(void)
{
   struct s2 orig;
   orig.a = 10;
   orig.b = 20;
   int modified;
   modify_struct(orig, &modified);
   /* orig should be unchanged because structs are passed by value */
   return (orig.a == 10 && modified == 999) ? 0x55 : 0xAA;
}
