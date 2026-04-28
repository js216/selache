// SPDX-License-Identifier: MIT
// cctest_libsel_string_strerror.c --- libsel string/strerror per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

char *strerror(int e)
{
   (void)e;
   return (char *)"unknown error";
}

int test_main(void)
{
   char *p = strerror(1);
   return (p != 0 && p[0] != 0) ? 0x55 : 0xAA;
}
