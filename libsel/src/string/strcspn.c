/* SPDX-License-Identifier: MIT */
/* strcspn.c --- Length of prefix not containing any rejected characters */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

size_t strcspn(const char *s, const char *reject)
{
    const char *p = s;
    const char *r;

    while (*p != '\0') {
        for (r = reject; *r != '\0'; r++) {
            if (*p == *r) {
                return (size_t)(p - s);
            }
        }
        p++;
    }

    return (size_t)(p - s);
}
