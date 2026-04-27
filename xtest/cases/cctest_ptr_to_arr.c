#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_ptr_to_arr(void)
{
   int arr[3];
   arr[0]      = 5;
   arr[1]      = 10;
   arr[2]      = 15;
   int(*pa)[3] = &arr;
   return (*pa)[0] + (*pa)[1] + (*pa)[2]; /* 30 = 0x1E */
}
