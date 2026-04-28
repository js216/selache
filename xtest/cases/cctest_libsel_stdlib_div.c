// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_div.c --- libsel stdlib/div per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

typedef struct {
   int quot;
   int rem;
} sel_div_t;

sel_div_t div(int n, int d)
{
   sel_div_t r;
   r.quot = n / d;
   r.rem  = n % d;
   return r;
}

int test_main(void)
{

   do {
      sel_div_t r = div(17, 5);
      if (r.quot != 3 || r.rem != 2)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
