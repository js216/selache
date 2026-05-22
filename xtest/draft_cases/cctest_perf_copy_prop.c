// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x1174 */

int test_main(void)
{
   unsigned int acc = 0;
   unsigned int seed = 9U;

   for (unsigned int i = 0; i < 3500U; ++i) {
      unsigned int a = seed + i;
      unsigned int b = a;
      unsigned int c = b;
      unsigned int d = c + 5U;
      acc += (d ^ a) & 63U;
      seed += 2U;
   }

   return (int)(acc & 0xffffU);
}
