#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

union sztest {
   char c;
   int i;
   short s;
};

/* @expect 4 */
int cctest_union_sizeof(void)
{
   return (int)sizeof(union sztest); /* 4 (sizeof int) */
}
