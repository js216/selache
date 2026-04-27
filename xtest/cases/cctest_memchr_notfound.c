// SPDX-License-Identifier: MIT
// cctest_memchr_notfound.c --- cctest case memchr_notfound
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <string.h>

int test_main(void)
{
   if (memchr("abc", 'z', 3) == NULL)
      return 0x55;
   return 0;
}
