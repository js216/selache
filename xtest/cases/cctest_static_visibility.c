#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int _tu_private(void)
{
   return 42;
}

/* @expect 0x2A */
int cctest_static_visibility(void)
{
   return _tu_private();
}
