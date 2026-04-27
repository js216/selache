#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int static_check_int_is_4[(sizeof(int) == 4) ? 1 : -1];

/* @expect 4 */
int cctest_static_check(void)
{
   return (int)sizeof(static_check_int_is_4); /* 4 (array of 1 int) */
}
