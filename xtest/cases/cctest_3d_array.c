#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12 */
int cctest_3d_array(void)
{
   int m[2][2][2];
   m[0][0][0] = 1;
   m[0][0][1] = 2;
   m[0][1][0] = 3;
   m[0][1][1] = 4;
   m[1][0][0] = 5;
   m[1][0][1] = 6;
   m[1][1][0] = 7;
   m[1][1][1] = 8;
   return m[0][0][0] + m[0][1][1] + m[1][0][1] + m[1][1][0];
   /* 1 + 4 + 6 + 7 = 18 = 0x12 */
}
