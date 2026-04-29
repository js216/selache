/* SPDX-License-Identifier: MIT */
/* ldiv.c --- Long integer division with quotient and remainder */
/* Copyright (c) 2026 Jakob Kastelic */

typedef struct {
    long quot;
    long rem;
} sel_ldiv_t;

__attribute__((weak)) sel_ldiv_t ldiv(long numer, long denom)
{
    sel_ldiv_t result;
    result.quot = numer / denom;
    result.rem = numer % denom;
    return result;
}
