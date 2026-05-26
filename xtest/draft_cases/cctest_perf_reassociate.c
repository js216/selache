// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x4000 */
/* @exp_ticks 0x3410 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      unsigned int x = i & 255U;
      acc += (((x + 7U) + 13U) - x);
      acc += ((x * 3U) + (x * 5U)) - (x * 8U);
   }

   return (int)(acc & 0xffffU);
}
