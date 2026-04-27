#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct off_s {
   int a;
   int b;
   int c;
};

/* @expect 2 */
int cctest_offsetof(void)
{
   struct off_s s;
   int off = (int)((char *)&s.c - (char *)&s);
   return off / (int)sizeof(int); /* 2 (third member) */
}
