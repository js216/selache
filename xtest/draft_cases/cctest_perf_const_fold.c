// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x379c */
/* @exp_ticks 0x3f8a */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 5000U; ++i) {
      unsigned int folded = (12U * 34U) + (56U << 3) - (144U / 3U);
      acc += folded + (i & 15U);
   }

   return (int)(acc & 0xffffU);
}
