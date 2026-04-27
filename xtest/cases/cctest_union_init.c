#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

union u_init {
   int i;
   float f;
};

/* @expect 0x4C */
int cctest_union_init(void)
{
   union u_init a = {0x42};       /* first member: i = 0x42 */
   union u_init b = {.f = 10.0f}; /* designated: f = 10.0 */
   return a.i + (int)b.f;         /* 0x42 + 10 = 76 = 0x4C */
}
