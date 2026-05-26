// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x3e10 */

struct Pair {
   unsigned int a;
   unsigned int b;
};

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      struct Pair p;
      p.a = i + 3U;
      p.b = p.a * 5U;
      p.a = p.b - i;
      acc += (p.a + p.b) & 31U;
   }

   return (int)(acc & 0xffffU);
}
