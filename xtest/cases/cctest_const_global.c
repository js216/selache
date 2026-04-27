#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int g_const_val = 0x77;

/* @expect 0x77 */
int cctest_const_global(void)
{
   return g_const_val; /* 0x77 */
}
