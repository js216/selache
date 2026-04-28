// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_errno_shim.c --- libsel stdlib/errno_shim per-function
// selcc test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int errno = 0;

void sel_set_errno(int v)
{
   errno = v;
}

int test_main(void)
{

   do {
      sel_set_errno(7);
      if (errno != 7)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
