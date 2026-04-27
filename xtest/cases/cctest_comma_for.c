#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_comma_for(void)
{
   int i, j;
   for (i = 0, j = 10; i < 5; i++, j--) {
   }
   return i + j; /* 5+5=10 = 0xA */
}
