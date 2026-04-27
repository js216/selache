#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define SELFVAL 10

/* @expect 0x0A */
int cctest_self_ref_macro(void)
{
   return SELFVAL; /* 10 = 0x0A */
}
