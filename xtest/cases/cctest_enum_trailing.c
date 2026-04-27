#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum trailing_e {
   TE_A = 5,
   TE_B = 10,
   TE_C = 15,
};

/* @expect 0x1E */
int cctest_enum_trailing(void)
{
   return TE_A + TE_B + TE_C; /* 30 = 0x1E */
}
