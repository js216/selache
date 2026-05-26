// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x6000 */
/* @exp_ticks 0xc410 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 8192U; ++i) {
      acc += 17U;
      acc += (64U / 8U);
      acc ^= 0U;
      acc += (i < 8192U) ? 2U : 99U;
   }

   return (int)(acc & 0xffffU);
}
