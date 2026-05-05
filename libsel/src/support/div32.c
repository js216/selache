/* SPDX-License-Identifier: MIT */
/* div32.c --- 32-bit integer divide/modulo runtime helpers */
/* Copyright (c) 2026 Jakob Kastelic */

static unsigned int uabs32(int x)
{
    unsigned int ux = (unsigned int)x;
    if (x < 0)
        return ~ux + 1U;
    return ux;
}

static unsigned int udivmod32(unsigned int dividend, unsigned int divisor,
                              unsigned int *rem_out)
{
    unsigned int quotient;
    unsigned int remainder;
    int i;

    if ((int)divisor < 0) {
        if (dividend >= divisor) {
            *rem_out = dividend - divisor;
            return 1U;
        }
        *rem_out = dividend;
        return 0U;
    }

    quotient = 0U;
    remainder = 0U;
    for (i = 0; i < 32; i++) {
        remainder = (remainder << 1) | (dividend >> 31);
        dividend <<= 1;
        quotient <<= 1;
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient |= 1U;
        }
    }
    *rem_out = remainder;
    return quotient;
}

int __sel_div32_c(int dividend, int divisor)
{
    unsigned int remainder;
    unsigned int quotient = udivmod32(uabs32(dividend), uabs32(divisor),
                                      &remainder);

    (void)remainder;
    if ((dividend < 0) != (divisor < 0))
        quotient = ~quotient + 1U;
    return (int)quotient;
}

int __sel_mod32_c(int dividend, int divisor)
{
    unsigned int remainder;

    (void)udivmod32(uabs32(dividend), uabs32(divisor), &remainder);
    if (dividend < 0)
        remainder = ~remainder + 1U;
    return (int)remainder;
}

unsigned int __sel_udiv32_c(unsigned int dividend, unsigned int divisor)
{
    unsigned int remainder;
    return udivmod32(dividend, divisor, &remainder);
}

unsigned int __sel_umod32_c(unsigned int dividend, unsigned int divisor)
{
    unsigned int remainder;

    (void)udivmod32(dividend, divisor, &remainder);
    return remainder;
}
