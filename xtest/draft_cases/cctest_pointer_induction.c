// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xf800 */
/* @exp_ticks 0x3ae5 */

int test_main(void)
{
   unsigned int buf[32];
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 32U; ++i) {
      buf[i] = (i * 7U) + 3U;
   }

   for (unsigned int iter = 0; iter < 128U; ++iter) {
      unsigned int *p = buf;
      unsigned int *end = buf + 32;
      while (p != end) {
         acc += *p++;
      }
   }

   return (int)(acc & 0xffffU);
}
