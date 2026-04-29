/* SPDX-License-Identifier: MIT */
/* memset.c --- Fill n bytes with a given value */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) void *memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    unsigned char val = (unsigned char)c;

    while (n--) {
        *p++ = val;
    }

    return s;
}
