/* SPDX-License-Identifier: MIT */
/* memcmp.c --- Compare n bytes of two memory regions */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

__attribute__((weak)) int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a = s1;
    const unsigned char *b = s2;

    while (n--) {
        if (*a != *b) {
            return *a - *b;
        }
        a++;
        b++;
    }

    return 0;
}
