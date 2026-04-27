// SPDX-License-Identifier: MIT
// cctest_va_struct.c --- cctest case va_struct
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

struct va_st {
   int a;
   int b;
};

static int va_struct_sum(int count, ...)
{
   va_list ap;
   va_start(ap, count);
   struct va_st s = va_arg(ap, struct va_st);
   va_end(ap);
   return s.a + s.b;
}

int test_main(void)
{
   struct va_st s;
   s.a = 10;
   s.b = 20;
   return va_struct_sum(1, s); /* 30 = 0x1E */
}
