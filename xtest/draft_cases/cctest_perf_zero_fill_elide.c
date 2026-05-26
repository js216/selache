// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x0 */
/* @exp_ticks 0x391 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 2048U; ++i) {
      unsigned int tmp[8] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U };
      tmp[3] = i & 15U;
      tmp[3] = 0U;
      acc += tmp[0] + tmp[1] + tmp[2] + tmp[3];
      acc += tmp[4] + tmp[5] + tmp[6] + tmp[7];
   }

   return (int)(acc & 0xffffU);
}
