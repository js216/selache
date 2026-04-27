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
int cctest_desig_2d(void)
{
   int m[3][3] = {
       [0] = {1, 2, 3},
         [2] = {7, 8, 9}
   };
   return m[0][0] + m[1][1] + m[2][2]; /* 1+0+9 = 10 = 0x0A */
}
