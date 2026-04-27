#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define IND_A      10
#define IND_B      20
#define IND_SEL(x) IND_##x

/* @expect 0x1E */
int cctest_indirect_macro(void)
{
   return IND_SEL(A) + IND_SEL(B); /* IND_A + IND_B = 10+20 = 30 = 0x1E */
}
