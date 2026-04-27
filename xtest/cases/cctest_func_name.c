#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x74 */
int cctest_func_name(void)
{
   const char *name = __func__;
   /* "cctest_func_name" starts with 'c' (99) */
   return name[0]; /* 99 = 0x63 */
}
