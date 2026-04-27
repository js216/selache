#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_const_ptr_vs_ptr_const(void)
{
   int x = 10, y = 20;
   const int *p = &x; /* pointer to const int: can change p, not *p */
   int *const q = &x; /* const pointer to int: can change *q, not q */
   p            = &y; /* OK: p can be reassigned */
   *q           = 30; /* OK: *q can be modified */
   return (x == 30 && *p == 20) ? 0x55 : 0xAA;
}
