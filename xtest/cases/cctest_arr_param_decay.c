#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int first_elem(int a[100])
{
   return a[0];
}

/* @expect 0x42 */
int cctest_arr_param_decay(void)
{
   int arr[3];
   arr[0] = 0x42;
   return first_elem(arr); /* works fine despite arr being only 3 elems */
}
