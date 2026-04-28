// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_atexit.c --- libsel stdlib/atexit per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

#define ATEXIT_MAX 32
typedef void (*atexit_func)(void);
static atexit_func sel_atexit_funcs[ATEXIT_MAX];
static int sel_atexit_count;

int atexit(void (*func)(void))
{
   if (sel_atexit_count >= ATEXIT_MAX)
      return -1;
   sel_atexit_funcs[sel_atexit_count] = func;
   sel_atexit_count++;
   return 0;
}

static void _h(void)
{
}

int test_main(void)
{

   do {
      if (atexit(_h) != 0)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
