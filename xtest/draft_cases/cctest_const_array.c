// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x8000 */
/* @exp_ticks 0x5210 */

int test_main(void)
{
   static const unsigned int tab[16] = {
      3U, 9U, 27U, 81U, 5U, 15U, 45U, 135U,
      7U, 21U, 63U, 189U, 11U, 33U, 99U, 297U
   };
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      acc += tab[i & 15U] * 3U;
      acc ^= tab[(i + 5U) & 15U];
   }

   return (int)(acc & 0xffffU);
}
