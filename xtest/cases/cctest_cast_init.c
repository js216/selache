#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_cast_init = (int)3;

/* @expect 3 */
int cctest_cast_init(void)
{
   return g_cast_init; /* 3 */
}
