// SPDX-License-Identifier: MIT
// cctest_printf_formats.c --- cctest case printf_formats
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3F */

#include <stdio.h>
#include <string.h>

int test_main(void)
{
   int score = 0;
   char buf[32];

   /* %% literal percent */
   snprintf(buf, sizeof buf, "a%%b");
   if (strcmp(buf, "a%b") == 0) score |= 0x01;

   /* %5d right-justified */
   snprintf(buf, sizeof buf, "[%5d]", 42);
   if (strcmp(buf, "[   42]") == 0) score |= 0x02;

   /* %05d zero-padded */
   snprintf(buf, sizeof buf, "[%05d]", 42);
   if (strcmp(buf, "[00042]") == 0) score |= 0x04;

   /* %-5d left-justified */
   snprintf(buf, sizeof buf, "[%-5d]", 42);
   if (strcmp(buf, "[42   ]") == 0) score |= 0x08;

   /* %d negative */
   snprintf(buf, sizeof buf, "%d", -123);
   if (strcmp(buf, "-123") == 0) score |= 0x10;

   /* %c with high byte value */
   snprintf(buf, sizeof buf, "%c", 200);
   if ((unsigned char)buf[0] == 200 && buf[1] == '\0') score |= 0x20;

   return score;
}
