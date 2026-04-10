/* SPDX-License-Identifier: GPL-3.0 */
/* lldiv.c --- Long long integer division with quotient and remainder */
/* Copyright (c) 2026 Jakob Kastelic */

typedef struct {
    long long quot;
    long long rem;
} sel_lldiv_t;

sel_lldiv_t lldiv(long long numer, long long denom)
{
    sel_lldiv_t result;
    result.quot = numer / denom;
    result.rem = numer % denom;
    return result;
}
