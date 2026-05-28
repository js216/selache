// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x4a10 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      unsigned int x = (i * 37U) ^ 0x5a5aU;
      unsigned int y = ((x << 3) | (x >> 29)) ^ ((x & 0xffU) << 8);
      y = (y & 0xffffU) ^ ((~x) & 0x00ffU);
      acc += y & 0x1fU;
   }

   return (int)(acc & 0xffffU);
}
