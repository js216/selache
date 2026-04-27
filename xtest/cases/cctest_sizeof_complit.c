#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_sizeof_complit(void)
{
   return (int)(sizeof((int[]){1, 2, 3}) / sizeof(int)); /* 3 */
}
