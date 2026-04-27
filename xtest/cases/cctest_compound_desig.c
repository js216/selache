#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct dlit {
   int x;
   int y;
   int z;
};

static int dlit_sum(struct dlit s)
{
   return s.x + s.y + s.z;
}

/* @expect 0x28 */
int cctest_compound_desig(void)
{
   return dlit_sum((struct dlit){.z = 30, .x = 10}); /* 10+0+30 = 40 = 0x28 */
}
