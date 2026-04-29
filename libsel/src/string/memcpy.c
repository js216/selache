/* SPDX-License-Identifier: MIT */
/* memcpy.c --- Copy n bytes between non-overlapping regions */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    while (n--) {
        *d++ = *s++;
    }

    return dest;
}
