// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
/* @expect 0x1800 */

int test_main(void)
{
   unsigned int acc = 0;

   for (unsigned int i = 0; i < 4096U; ++i) {
      if ((3U * 7U) == 22U) {
         acc += 100000U;
      } else {
         acc += (i * 5U + 1U) & 31U;
      }

      if ((i & 1U) != 0U || 1U) {
         acc += 2U;
      }
   }

   return (int)(acc & 0xffffU);
}
