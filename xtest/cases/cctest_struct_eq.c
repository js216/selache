// SPDX-License-Identifier: MIT
// cctest_struct_eq.c --- cctest case struct_eq
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct cmp_s {
   int a;
   int b;
};

static int struct_eq(const struct cmp_s *x, const struct cmp_s *y)
{
   return (x->a == y->a && x->b == y->b) ? 1 : 0;
}

int test_main(void)
{
   struct cmp_s a = {10, 20};
   struct cmp_s b = {10, 20};
   struct cmp_s c = {10, 30};
   return struct_eq(&a, &b) + struct_eq(&a, &a) + struct_eq(&a, &c);
   /* 1 + 1 + 0 = 2 */
}
