#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int base_t;
typedef base_t mid_t;
typedef mid_t top_t;

/* @expect 0x2A */
int cctest_typedef_chain(void)
{
   top_t x = 42;
   return x; /* 42 = 0x2A */
}
