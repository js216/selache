// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xd000 */
/* @exp_ticks 0x8ad0 */

static unsigned int pick(unsigned int x)
{
   switch (x & 7U) {
   case 0: return 11U;
   case 1: return 17U;
   case 2: return 23U;
   case 3: return 29U;
   case 4: return 31U;
   case 5: return 37U;
   case 6: return 41U;
   default: return 43U;
   }
}

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 2048U; ++i) {
      acc += pick(i);
      acc += pick(3U);
   }

   return (int)(acc & 0xffffU);
}
