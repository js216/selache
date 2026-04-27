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
int cctest_sizeof_dim(void)
{
   int arr[sizeof(int)]; /* arr[4] on 32-bit */
   for (int i = 0; i < (int)sizeof(int); i++)
      arr[i] = i + 1;
   int s = 0;
   for (int i = 0; i < (int)sizeof(int); i++)
      s += arr[i];
   return s; /* 1+2+3+4 = 10 = 0x0A */
}
