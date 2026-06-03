// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x4d60 */
/* @exp_ticks 0x4468 */

int test_main(void){
   unsigned int acc = 0;
   for (unsigned int i = 1U; i < 4000U; ++i) {
      acc += (i / 10U) + (i % 10U);
      acc ^= (i / 10U) * 3U;
   }
   return (int)(acc & 0xffffU);
}
