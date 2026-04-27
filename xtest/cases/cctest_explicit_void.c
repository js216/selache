#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int explicit_void(void)
{
   return 0x42;
}

/* @expect 0x42 */
int cctest_explicit_void(void)
{
   return explicit_void();
}
