// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xb */
/* @exp_ticks 0x40 */

int gg = 10;

void bump(void)
{
   gg = 99;
}

int test_main(void)
{
   int t = gg + 1; /* must capture gg==10 here -> 11 */
   bump();
   return t; /* 11 = 0xb, NOT 100 */
}
