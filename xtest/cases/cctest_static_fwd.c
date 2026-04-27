#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fwd_static(int x);

/* @expect 0x31 */
int cctest_static_fwd(void)
{
   return fwd_static(0x30); /* 0x31 */
}
