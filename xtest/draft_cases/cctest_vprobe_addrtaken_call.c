// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x6 */
/* @exp_ticks 0x40 */

int *gp;

void stash(int *p)
{
   gp = p;
}

void clobber(void)
{
   *gp = 99;
}

int test_main(void)
{
   int x = 5;
   stash(&x);
   int t = x + 1; /* must capture x==5 -> 6 */
   clobber();     /* writes x through escaped pointer */
   return t;      /* 6 = 0x6, NOT 100 */
}
