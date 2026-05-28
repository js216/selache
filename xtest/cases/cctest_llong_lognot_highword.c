// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
// cctest_llong_lognot_highword.c --- !long long must inspect high word

/* @expect 0x2a */
/* @exp_ticks 0x14 */

static int highword_truth(long long x)
{
   if (!x)
      return 0x13;
   return 0x2a;
}

int test_main(void)
{
   volatile long long x = 1LL << 40;
   return highword_truth(x);
}
