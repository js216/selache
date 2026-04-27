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
int cctest_uchar_wrap(void)
{
   unsigned char c = (unsigned char)(-1);
   return (int)c; /* 255 = 0xFF */
}
