// SPDX-License-Identifier: MIT
// cctest_libsel_support_errno.c --- libsel support/errno per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <errno.h>
#include <stddef.h>
#include <stdint.h>

int test_main(void)
{

   do {
      errno = 5;
      if (errno != 5)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
