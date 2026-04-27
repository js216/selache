#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x04 */
int cctest_ptr_stride(void)
{
   int arr[2];
   char *a = (char *)&arr[0];
   char *b = (char *)&arr[1];
   return (int)(b - a); /* sizeof(int) = 4 */
}
