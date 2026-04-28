// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_ldiv.c --- libsel stdlib/ldiv per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

typedef struct {
   long quot;
   long rem;
} sel_ldiv_t;

sel_ldiv_t ldiv(long n, long d)
{
   sel_ldiv_t r;
   r.quot = n / d;
   r.rem  = n % d;
   return r;
}

int test_main(void)
{

   do {
      sel_ldiv_t r = ldiv(17L, 5L);
      if (r.quot != 3 || r.rem != 2)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
