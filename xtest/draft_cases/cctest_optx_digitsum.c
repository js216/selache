// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xeb19 */
/* @exp_ticks 0x1bd46 */

int test_main(void){
   unsigned int acc = 0;
   for (unsigned int i = 1U; i < 3000U; ++i) {
      unsigned int n = i * 2654435761U;
      unsigned int s = 0;
      while (n) { s += n % 10U; n /= 10U; }
      acc += s;
   }
   return (int)(acc & 0xffffU);
}
