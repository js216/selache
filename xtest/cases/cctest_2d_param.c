#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_2d(int (*m)[3], int rows)
{
   int s = 0;
   for (int i = 0; i < rows; i++)
      for (int j = 0; j < 3; j++)
         s += m[i][j];
   return s;
}

/* @expect 0x2D */
int cctest_2d_param(void)
{
   int m[3][3] = {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
   };
   return sum_2d(m, 3); /* 1+2+...+9 = 45 = 0x2D */
}
