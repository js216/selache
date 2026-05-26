// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x9000 */
/* @exp_ticks 0x7a10 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      signed char c = (signed char)(i & 255U);
      unsigned long mask = (i & 1U) ? 255UL : 127UL;
      if (c > (mask & 255UL)) {
         acc += 11U;
      } else {
         acc += 7U;
      }
   }

   return (int)(acc & 0xffffU);
}
