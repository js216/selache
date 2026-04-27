#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_long(void)
{
   long a = 100000;
   long b = 200000;
   return (int)((a + b) / 10000); /* 30 = 0x1E */
}
