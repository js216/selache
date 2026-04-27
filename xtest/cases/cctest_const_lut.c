#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const struct {
   int key;
   int val;
} g_lut[] = {
    {1, 100},
    {2, 200},
    {3, 300}
};

/* @expect 0x258 */
int cctest_const_lut(void)
{
   return g_lut[0].val + g_lut[1].val +
          g_lut[2].val; /* 100+200+300 = 600 = 0x258 */
}
