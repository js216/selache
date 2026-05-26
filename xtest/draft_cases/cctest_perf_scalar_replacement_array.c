// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xe000 */
/* @exp_ticks 0x4610 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      unsigned int a[4];
      a[0] = i + 1U;
      a[1] = a[0] + 2U;
      a[2] = a[1] + 3U;
      a[3] = a[2] + 4U;
      acc += (a[0] + a[1] + a[2] + a[3]) & 63U;
   }

   return (int)(acc & 0xffffU);
}
