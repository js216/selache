// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf9ef */
/* @exp_ticks 0xc113 */

static int opaque(unsigned int x)
{
   return (int)((x * 1103515245U + 12345U) >> 16);
}

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      unsigned int x = (unsigned int)opaque(i);
      int p = ((x & 7U) == 3U);
      int q = ((x & 7U) != 3U);
      int r = (p && 1) || (q && 0) || (p && q);
      acc += (unsigned int)r + (x & 31U);
   }

   return (int)(acc & 0xffffU);
}
