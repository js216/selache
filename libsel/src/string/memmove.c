/* SPDX-License-Identifier: GPL-3.0 */
/* memmove.c --- Copy n bytes, handling overlapping regions */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else if (d > s) {
        d += n;
        s += n;
        while (n--) {
            *--d = *--s;
        }
    }

    return dest;
}
