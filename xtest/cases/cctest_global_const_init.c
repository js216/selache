#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int g_const_a = 10 + 20;
static const int g_const_b = (3 * 4) << 1;

/* @expect 0x36 */
int cctest_global_const_init(void)
{
   return g_const_a + g_const_b; /* 30 + 24 = 54 = 0x36 */
}
