#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x09 */
int cctest_octal_char_esc(void)
{
   char c = '\011'; /* tab = 9 */
   return (int)c;
}
