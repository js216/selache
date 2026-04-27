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
int cctest_multidim(void)
{
   int m[3][3];
   m[0][0] = 1;
   m[0][1] = 2;
   m[0][2] = 3;
   m[1][0] = 4;
   m[1][1] = 5;
   m[1][2] = 6;
   m[2][0] = 7;
   m[2][1] = 8;
   m[2][2] = 9;
   return m[0][0] + m[1][1] + m[2][2]; /* 1+5+9 = 15 = 0xF */
}
