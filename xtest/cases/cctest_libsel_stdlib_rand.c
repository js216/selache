// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_rand.c --- libsel stdlib/rand per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

static unsigned long _r_seed = 1;

static unsigned long *_r_seed_ptr(void)
{
   return &_r_seed;
}

int rand(void)
{
   _r_seed = _r_seed * 1103515245UL + 12345UL;
   return (int)((_r_seed >> 16) & 0x7fff);
}

int test_main(void)
{

   do {
      int a = rand();
      int b = rand();
      if (a == b)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
