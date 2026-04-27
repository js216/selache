#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum sizeof_enum { SE_INTS = sizeof(int), SE_DBL = SE_INTS * 2 };

/* @expect 0x0C */
int cctest_enum_sizeof(void)
{
   return SE_INTS + SE_DBL; /* 4 + 8 = 12 = 0x0C */
}
