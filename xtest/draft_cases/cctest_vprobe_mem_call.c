// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x8 */
/* @exp_ticks 0x40 */

int store[4] = {7, 0, 0, 0};

void h(void)
{
   store[0] = 99;
}

int test_main(void)
{
   int *p = store;
   int t  = *p + 1; /* must capture store[0]==7 -> 8 */
   h();             /* writes store[0] */
   return t;        /* 8 = 0x8, NOT 100 */
}
