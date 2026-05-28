// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xe800 */
/* @exp_ticks 0x3810 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      acc += i;
      acc += 3U * i;
      acc -= i;
   }

   return (int)(acc & 0xffffU);
}
