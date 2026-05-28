// SPDX-License-Identifier: MIT
// cctest_struct_comma_copy.c --- struct-valued comma assignment
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x284 */
/* @exp_ticks 0x19 */

struct S {
   unsigned f0 : 24;
   unsigned f1 : 15;
   signed f2 : 22;
};

static const struct S src = {0x1CF, 0x73, 0x42};
static struct S dst = {1, 2, 3};

int test_main(void)
{
   struct S local = {9, 10, 11};
   dst = ((local, dst), ((local, local), src));
   return (int)(dst.f0 + dst.f1 + dst.f2);
}
