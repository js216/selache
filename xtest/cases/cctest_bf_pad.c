#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_bf_pad(void)
{
   struct {
      unsigned int x : 4;
      unsigned int : 4; /* 4-bit padding, unnamed */
      unsigned int y : 4;
   } s;
