// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0xcdb */

static unsigned int mix_step(unsigned int x, unsigned int k)
{
   return ((x + k) * 3U) ^ (x >> 2);
}

static unsigned int accumulate(unsigned int n, unsigned int acc)
{
   while (n != 0U) {
      acc += mix_step(n, acc & 15U) & 31U;
      --n;
   }
   return acc;
}

int test_main(void)
{
   return (int)(accumulate(256U, 7U) & 0xffffU);
}
