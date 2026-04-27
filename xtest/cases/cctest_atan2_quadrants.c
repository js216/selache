// SPDX-License-Identifier: MIT
// cctest_atan2_quadrants.c --- cctest case atan2 four-quadrant coverage
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int test_main(void)
{
   int score = 0;
   double pi = 3.14159265358979323846;

   /* Quadrant I: atan2(+1, +1) = pi/4 */
   double q1 = atan2(1.0, 1.0);
   if (fabs(q1 - pi / 4.0) < 1e-4) score |= 0x1;

   /* Quadrant II: atan2(+1, -1) = 3*pi/4 */
   double q2 = atan2(1.0, -1.0);
   if (fabs(q2 - 3.0 * pi / 4.0) < 1e-4) score |= 0x2;

   /* Quadrant III: atan2(-1, -1) = -3*pi/4 */
   double q3 = atan2(-1.0, -1.0);
   if (fabs(q3 + 3.0 * pi / 4.0) < 1e-4) score |= 0x4;

   /* Quadrant IV: atan2(-1, +1) = -pi/4 */
   double q4 = atan2(-1.0, 1.0);
   if (fabs(q4 + pi / 4.0) < 1e-4) score |= 0x8;

   return score;
}
