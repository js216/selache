#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

union intfloat {
   int i;
   float f;
};

/* @expect 0x0A */
int cctest_union(void)
{
   union intfloat u;
   u.i = 0x41200000; /* 10.0f IEEE-754 */
   return (int)u.f;  /* 10 = 0xA */
}
