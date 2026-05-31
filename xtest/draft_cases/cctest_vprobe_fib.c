// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x37 */
/* @exp_ticks 0x2e */

int test_main(void)
{
   int a = 0, b = 1;
   for (int i = 0; i < 10; i++) {
      int t = a + b;
      a     = b;
      b     = t;
   }
   return a; /* fib(10) = 55 = 0x37 */
}
