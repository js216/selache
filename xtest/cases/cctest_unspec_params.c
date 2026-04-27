#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   /* &s.i should be aligned to 4 */
   int offset = (char *)&s.i - (char *)&s;
   return (offset >= 2) ? 0x55 : 0xAA; /* at least 2 bytes gap for alignment */
}

static int unspec_params()
{
   return 0x42;
}

/* @expect 0x42 */
int cctest_unspec_params(void)
{
   return unspec_params();
}
