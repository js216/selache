// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x3e80 */

int test_main(void)
{
   unsigned int acc = 0;
   unsigned int x = 17;

   for (unsigned int i = 0; i < 4000U; ++i) {
      unsigned int y = x + i;
      y = (y * 1U) + 0U;
      y = y - 0U;
      y = y ^ 0U;
      acc += (y & 7U) + ((y | 0U) & 3U);
      x = x + 3U;
   }

   return (int)(acc & 0xffffU);
}
