// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xa800 */
/* @exp_ticks 0xa010 */

static unsigned int mix_const(unsigned int x)
{
   return ((x * 9U) + 27U) & 63U;
}

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      acc += mix_const(i & 7U);
      acc += mix_const(5U);
   }

   return (int)(acc & 0xffffU);
}
