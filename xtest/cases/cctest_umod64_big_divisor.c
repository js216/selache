// SPDX-License-Identifier: MIT
// cctest_umod64_big_divisor.c --- unsigned 64-bit modulo high divisor
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1234 */
/* @exp_ticks 0x34 */

#include <stdint.h>

int test_main(void)
{
   uint64_t max = (uint64_t)-1LL;
   uint64_t top = 1ULL << 63;
   if ((1ULL % max) != 1ULL)
      return 1;
   if (((max - 1ULL) % max) != (max - 1ULL))
      return 2;
   if ((max % max) != 0ULL)
      return 3;
   if ((max % top) != (top - 1ULL))
      return 4;
   return 0x1234;
}
