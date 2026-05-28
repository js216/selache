// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x5010 */

int test_main(void)
{
   unsigned int acc = 0;
   unsigned int flag = 1U;

   for (unsigned int i = 0; i < 4096U; ++i) {
      if (flag) {
         acc += (i * 5U) & 127U;
      } else {
         acc += (i * 9U) & 127U;
      }
   }

   return (int)(acc & 0xffffU);
}
