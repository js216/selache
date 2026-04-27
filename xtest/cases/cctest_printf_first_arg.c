#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x61 */
int cctest_printf_first_arg(void)
{
   char buf[16];
   for (int i = 0; i < 16; i++)
      buf[i] = 0;
   snprintf(buf, sizeof(buf), "[%x] %x", 0xa5a5u, 0xb6b6u);
   return (int)(unsigned char)buf[1];
}
