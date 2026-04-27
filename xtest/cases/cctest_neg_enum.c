#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.x = 0xF;
   bf.y = 0xA;
   return bf.x + bf.y; /* 15+10 = 25 = 0x19 */
}

enum signed_enum { NEG2 = -2, NEG1, ZERO, POS1 };

/* @expect 3 */
int cctest_neg_enum(void)
{
   return ZERO - NEG2 + POS1; /* 0-(-2)+1 = 3 */
}
