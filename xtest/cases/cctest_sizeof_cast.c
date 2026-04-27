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
int cctest_sizeof_cast(void)
{
   int arr[10];
   int n = (int)sizeof(arr);
   return n / (int)sizeof(int); /* 10 = 0xA */
}
