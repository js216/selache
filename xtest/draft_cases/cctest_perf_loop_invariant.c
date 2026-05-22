// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x8870 */

int test_main(void)
{
   unsigned int acc = 0;
   unsigned int base = 13U;

   for (unsigned int i = 0; i < 4000U; ++i) {
      unsigned int inv = (base * 97U) + (base << 6) - 5U;
      acc += (inv & 255U) + (i & 3U);
   }

   return (int)(acc & 0xffffU);
}
