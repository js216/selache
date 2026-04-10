/* SPDX-License-Identifier: MIT */
/* strncmp.c --- Compare up to n characters of two strings */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    const unsigned char *a = (const unsigned char *)s1;
    const unsigned char *b = (const unsigned char *)s2;

    while (n--) {
        if (*a != *b) {
            return *a - *b;
        }
        if (*a == '\0') {
            return 0;
        }
        a++;
        b++;
    }

    return 0;
}
