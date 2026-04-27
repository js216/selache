// SPDX-License-Identifier: MIT
// cctest_va_copy_real.c --- cctest case va_copy_real
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3C */

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

static int va_copy_sum(int count, ...)
{
   va_list ap, ap2;
   va_start(ap, count);
   va_copy(ap2, ap);
   int s1 = 0;
   for (int i = 0; i < count; i++)
      s1 += va_arg(ap, int);
   va_end(ap);
   int s2 = 0;
   for (int i = 0; i < count; i++)
      s2 += va_arg(ap2, int);
   va_end(ap2);
   return (s1 == s2) ? s1 : -1;
}

int test_main(void)
{
   return va_copy_sum(3, 10, 20, 30); /* 60 = 0x3C */
}
