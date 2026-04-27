#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x3A */
int cctest_bf_first(void)
{
   struct {
      unsigned int flags : 8;
      int value;
      int extra;
   } s;
