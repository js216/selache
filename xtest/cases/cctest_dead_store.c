// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x4210 */

int test_main(void)
{
   unsigned int acc = 0;
   unsigned int x = 1U;

   for (unsigned int i = 0; i < 4096U; ++i) {
      x = i + 13U;
      x = i + 17U;
      x = i + 19U;
      acc += x & 31U;
   }

   return (int)(acc & 0xffffU);
}
