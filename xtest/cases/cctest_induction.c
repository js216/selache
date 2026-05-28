// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x3610 */

int test_main(void)
{
   unsigned int acc = 0;
   unsigned int j = 3U;

   for (unsigned int i = 0; i < 4096U; ++i) {
      acc += (j + (i << 1)) & 63U;
      j += 5U;
   }

   return (int)(acc & 0xffffU);
}
