#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 4 */
int cctest_stddef_size_t(void)
{
   size_t s = sizeof(int);
   return (int)s; /* 4 */
}
