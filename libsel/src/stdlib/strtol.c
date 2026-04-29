/* SPDX-License-Identifier: MIT */
/* strtol.c --- Convert string to long with base and endptr */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"
#include "errno_internal.h"

int isspace(int c);

static int digit_value(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    return -1;
}

#define SEL_LONG_MAX  ((long)(((unsigned long)-1) >> 1))
#define SEL_LONG_MIN  (-SEL_LONG_MAX - 1L)

__attribute__((weak)) long strtol(const char *nptr, char **endptr, int base)
{
    const char *s = nptr;
    int sign = 1;
    unsigned long acc = 0;
    int overflow = 0;
    unsigned long cutoff;
    int cutlim;

    while (isspace((unsigned char)*s))
        s++;

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    if (base == 0) {
        if (*s == '0') {
            s++;
            if (*s == 'x' || *s == 'X') {
                base = 16;
                s++;
            } else {
                base = 8;
            }
        } else {
            base = 10;
        }
    } else if (base == 16) {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
            s += 2;
    }

    if (sign == -1) {
        cutoff = (unsigned long)-(SEL_LONG_MIN + SEL_LONG_MAX) + (unsigned long)SEL_LONG_MAX;
    } else {
        cutoff = (unsigned long)SEL_LONG_MAX;
    }
    cutlim = (int)(cutoff % (unsigned long)base);
    cutoff /= (unsigned long)base;

    const char *start = s;
    int dv;
    while ((dv = digit_value(*s)) >= 0 && dv < base) {
        if (acc > cutoff || (acc == cutoff && (unsigned long)dv > (unsigned long)cutlim)) {
            overflow = 1;
        }
        acc = acc * (unsigned long)base + (unsigned long)dv;
        s++;
    }

    if (s == start) {
        if (endptr)
            *endptr = (char *)nptr;
        return 0;
    }

    if (endptr)
        *endptr = (char *)s;

    if (overflow) {
        sel_set_errno(SEL_ERANGE);
        return (sign == -1) ? SEL_LONG_MIN : SEL_LONG_MAX;
    }

    return (sign == -1) ? -(long)acc : (long)acc;
}
