#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct three_int {
   int x;
   int y;
   int z;
};

/* @expect 0x0C */
int cctest_sizeof_struct(void)
{
   return (int)sizeof(struct three_int); /* 12 = 0xC */
}
