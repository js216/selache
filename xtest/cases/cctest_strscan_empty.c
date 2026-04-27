// SPDX-License-Identifier: MIT
// cctest_strscan_empty.c --- cctest case strscan_empty
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x07 */

#include <string.h>

int test_main(void)
{
   int score = 0;
   if (strspn("hello", "") == 0) score |= 0x01;
   if (strcspn("hello", "") == 5) score |= 0x02;
   if (strpbrk("hello", "") == NULL) score |= 0x04;
   return score;
}
