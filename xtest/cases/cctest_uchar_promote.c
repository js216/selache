#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xFF */
int cctest_uchar_promote(void)
{
   unsigned char c = 255;
   int i           = c; /* promoted, value preserved */
   return i;
}
