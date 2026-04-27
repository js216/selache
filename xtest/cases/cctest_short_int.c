#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12C */
int cctest_short_int(void)
{
   short int a = 100;
   short int b = 200;
   return a + b; /* 300 = 0x12C */
}
