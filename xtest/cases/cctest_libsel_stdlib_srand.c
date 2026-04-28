// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_srand.c --- libsel stdlib/srand per-function selcc test
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

void srand(unsigned int seed)
{
   *_r_seed_ptr() = seed;
}

int test_main(void)
{

   do {
      srand(42);
      int a = rand();
      srand(42);
      int b = rand();
      if (a != b)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
