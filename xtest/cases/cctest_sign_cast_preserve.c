#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct s2 {
   int a;
   int b;
};

/* @expect 0x55 */
int cctest_sign_cast_preserve(void)
{
   int s          = -1;
   unsigned int u = (unsigned int)s;
   int s2         = (int)u;
   return (s2 == -1 && u == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}
