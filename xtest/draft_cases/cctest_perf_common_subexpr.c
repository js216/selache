// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xe93a */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 3000U; ++i) {
      unsigned int a = i + 11U;
      unsigned int b = (a * a) + (a << 2);
      acc += (b & 255U);
      acc += ((a * a) + (a << 2)) & 15U;
      acc ^= (((a * a) + (a << 2)) >> 3) & 7U;
   }

   return (int)(acc & 0xffffU);
}
