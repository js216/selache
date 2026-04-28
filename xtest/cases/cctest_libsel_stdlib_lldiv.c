// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_lldiv.c --- libsel stdlib/lldiv per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

typedef struct {
   long long quot;
   long long rem;
} sel_lldiv_t;

sel_lldiv_t lldiv(long long n, long long d)
{
   sel_lldiv_t r;
   r.quot = n / d;
   r.rem  = n % d;
   return r;
}

int test_main(void)
{

   do {
      sel_lldiv_t r = lldiv(17LL, 5LL);
      if (r.quot != 3 || r.rem != 2)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
