// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x800 */
/* @exp_ticks 0x4c10 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      unsigned int x = i & 31U;
      if (x < 64U) {
         acc += x + 1U;
      } else {
         acc += 999U;
      }
   }

   return (int)(acc & 0xffffU);
}
