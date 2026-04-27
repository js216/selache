#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 6 */
int cctest_sizeof_str(void)
{
   return (int)sizeof("hello"); /* 6 (5 chars + NUL) */
}
