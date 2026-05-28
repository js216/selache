// SPDX-License-Identifier: MIT
// cctest_struct_member_short_assign.c --- short member assignment RMW
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x99ff8888 */
/* @exp_ticks 0xe */

#include <stdint.h>

struct S {
    int16_t a;
    int32_t mid;
    int16_t b;
    int16_t c;
    uint32_t tail;
};

static struct S g = {0x1122, 0x55667788, 0x3344, -4, 0x99aabbcc};

int test_main(void)
{
    g.c = 0x55;
    return (int)(((uint32_t)(uint16_t)g.b | ((uint32_t)(uint16_t)g.c << 16)) ^ g.tail);
}
