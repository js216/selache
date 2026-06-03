// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x7 */
/* @exp_ticks 0x40 */

int test_main(void)
{
   int a = 3, b = 4, c = 0, d = 9;
   int t = a + b; /* safe: no call/alias between decl and use */
   c     = d;     /* plain local assign, not a barrier */
   (void)c;
   return t; /* 7 = 0x7 */
}
