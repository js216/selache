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
int cctest_mac(void)
{
   int acc = 0;
   int i;
   for (i = 1; i <= 4; i++)
      acc += i * i;
   return acc; /* 1+4+9+16 = 30 = 0x1E */
}
