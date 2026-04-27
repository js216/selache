#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x34 */
int cctest_rotate(void)
{
   unsigned int x    = 0x12345678;
   unsigned int rotl = (x << 8) | (x >> 24); /* 0x34567812 */
   return (int)((rotl >> 24) & 0xFF);        /* 0x34 = 52 */
}
