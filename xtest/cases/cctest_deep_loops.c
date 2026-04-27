#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0C */
int cctest_deep_loops(void)
{
   int count = 0;
   for (int i = 0; i < 2; i++)
      for (int j = 0; j < 3; j++)
         for (int k = 0; k < 2; k++)
            for (int l = 0; l < 1; l++)
               count++;
   return count; /* 2*3*2*1 = 12 = 0x0C */
}
