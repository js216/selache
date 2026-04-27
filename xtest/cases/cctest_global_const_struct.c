#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const struct {
   int x;
   int y;
   int z;
} g_const_pt = {3, 4, 5};

/* @expect 0x0C */
int cctest_global_const_struct(void)
{
   return g_const_pt.x + g_const_pt.y + g_const_pt.z; /* 12 */
}
