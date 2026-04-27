#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define BF_WIDTH (2 + 3)

/* @expect 0x1F */
int cctest_bf_const_width(void)
{
   struct {
      unsigned int x : BF_WIDTH;
   } bf; /* 5-bit field */
