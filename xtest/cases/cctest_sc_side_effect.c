// SPDX-License-Identifier: MIT
// cctest_sc_side_effect.c --- cctest case sc_side_effect
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sc_counter;

static int sc_inc(void)
{
   sc_counter++;
   return 1;
}

int test_main(void)
{
   sc_counter = 0;
   int x      = 0;
   /* AND: first is false, second must NOT be called */
   if (x && sc_inc()) {
   }
   int after_and = sc_counter; /* should be 0 */
   /* OR: first is true, second must NOT be called */
   x = 1;
   if (x || sc_inc()) {
   }
   int after_or = sc_counter; /* should still be 0 */
   /* AND: first is true, second IS called */
   if (x && sc_inc()) {
   }
   int after_call = sc_counter; /* should be 1 */
   return (after_and == 0 && after_or == 0 && after_call == 1) ? 0x55 : 0xAA;
}
