#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x41 */
int cctest_hex_char_esc(void)
{
   char c = '\x41'; /* 'A' */
   return (int)c;
}
