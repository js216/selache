#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static union {
   int i;
   float f;
} g_union_init = {0x77};

/* @expect 0x77 */
int cctest_global_union(void)
{
   return g_union_init.i; /* 0x77 */
}
