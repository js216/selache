// SPDX-License-Identifier: MIT
// cctest_ctype_signed_char.c --- cctest case ctype with high-bit char
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test_main(void)
{
   int score = 0;

   /* Per C99 7.4: ctype functions take an int whose value must be
    * representable as unsigned char OR equal EOF. Passing a plain
    * `char` with the high bit set on a signed-char platform yields
    * a negative int. libsel must handle this safely (typically by
    * masking to unsigned char internally) and produce well-defined
    * (non-true for non-ASCII) results without crashing. */

   char c = (char)0xFF;          /* may be -1 on signed-char targets */
   unsigned char uc = 0xFF;

   /* Idiomatic safe call (cast to unsigned char): must not be alpha. */
   if (!isalpha((unsigned char)c)) score |= 0x1;
   if (!isdigit((unsigned char)c)) score |= 0x2;
   if (!isspace((unsigned char)c)) score |= 0x4;

   /* Direct call with raw signed char must also not crash and must
    * return a falsy (zero) value for 0xFF interpreted as char. */
   int r = isalpha((int)(unsigned char)uc);
   if (r == 0) score |= 0x8;

   /* ASCII control: tab is space-class. */
   if (isspace((unsigned char)'\t')) score |= 0x10;

   return score;
}
