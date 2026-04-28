// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_isgraph.c --- libsel ctype/isgraph per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int isgraph(int c)
{
   return c > ' ' && c <= '~';
}

int test_main(void)
{

   return (isgraph('A') && !isgraph(' ')) ? 0x55 : 0xAA;
}
