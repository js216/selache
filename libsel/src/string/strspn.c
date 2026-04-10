/* SPDX-License-Identifier: GPL-3.0 */
/* strspn.c --- Length of prefix containing only accepted characters */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

size_t strspn(const char *s, const char *accept)
{
    const char *p = s;
    const char *a;
    int found;

    while (*p != '\0') {
        found = 0;
        for (a = accept; *a != '\0'; a++) {
            if (*p == *a) {
                found = 1;
                break;
            }
        }
        if (!found) {
            break;
        }
        p++;
    }

    return (size_t)(p - s);
}
