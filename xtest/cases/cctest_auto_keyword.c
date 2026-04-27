#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x2A */
int cctest_auto_keyword(void)
{
   auto int x = 42;
   return x; /* 42 = 0x2A */
}
