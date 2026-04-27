#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define STRINGIFY(x) #x

/* @expect 0xCD */
int cctest_stringify(void)
{
   const char *s = STRINGIFY(hello);
   return s[0] + s[1]; /* 'h'+'e' = 104+101 = 205 = 0xCD */
}
