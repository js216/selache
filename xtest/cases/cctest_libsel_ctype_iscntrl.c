// SPDX-License-Identifier: MIT
// cctest_libsel_ctype_iscntrl.c --- libsel ctype/iscntrl per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

int iscntrl(int c)
{
   return (c >= 0 && c <= 0x1f) || c == 0x7f;
}

int test_main(void)
{

   return (iscntrl(0) && iscntrl(0x7f) && !iscntrl('a')) ? 0x55 : 0xAA;
}
