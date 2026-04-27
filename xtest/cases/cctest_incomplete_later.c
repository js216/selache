#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct later_complete;
static struct later_complete *g_later_ptr;

struct later_complete {
   int x;
   int y;
};

/* @expect 0x28 */
int cctest_incomplete_later(void)
{
   struct later_complete obj;
   obj.x       = 15;
   obj.y       = 25;
   g_later_ptr = &obj;
   return g_later_ptr->x + g_later_ptr->y; /* 40 = 0x28 */
}
