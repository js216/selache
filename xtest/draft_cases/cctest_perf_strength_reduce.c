// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x4010 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      unsigned int a = i * 8U;
      unsigned int b = i * 10U;
      unsigned int c = (i / 4U) + (i % 4U);
      acc += (a + b + c) & 63U;
   }

   return (int)(acc & 0xffffU);
}
