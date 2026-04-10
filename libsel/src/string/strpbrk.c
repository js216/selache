/* SPDX-License-Identifier: GPL-3.0 */
/* strpbrk.c --- Find any character from a set in a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strpbrk(const char *s, const char *accept)
{
    const char *a;

    while (*s != '\0') {
        for (a = accept; *a != '\0'; a++) {
            if (*s == *a) {
                return (char *)s;
            }
        }
        s++;
    }

    return NULL;
}
