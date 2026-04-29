/* SPDX-License-Identifier: MIT */
/* vsnprintf.c --- Formatted output into a sized buffer */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"
#include "stdarg.h"

static void put_char(char *buf, size_t size, size_t *pos, char c)
{
	if (*pos < size)
		buf[*pos] = c;
	(*pos)++;
}

static void put_string(char *buf, size_t size, size_t *pos,
                       const char *s, int len)
{
	int i;
	for (i = 0; i < len; i++)
		put_char(buf, size, pos, s[i]);
}

static void put_padding(char *buf, size_t size, size_t *pos,
                        char padch, int count)
{
	int i;
	for (i = 0; i < count; i++)
		put_char(buf, size, pos, padch);
}

static int str_len(const char *s)
{
	int n = 0;
	while (s[n])
		n++;
	return n;
}

static int fmt_unsigned(char *out, unsigned long long val, int base,
                        int uppercase)
{
	const char *digits = uppercase
		? "0123456789ABCDEF"
		: "0123456789abcdef";
	char tmp[24];
	int i = 0;
	int j;

	if (val == 0) {
		tmp[i++] = '0';
	} else {
		while (val > 0) {
			tmp[i++] = digits[val % (unsigned)base];
			val /= (unsigned)base;
		}
	}

	for (j = 0; j < i; j++)
		out[j] = tmp[i - 1 - j];
	out[i] = '\0';
	return i;
}

static int fmt_signed(char *out, long long val, char *sign_out)
{
	unsigned long long uval;

	*sign_out = '\0';
	if (val < 0) {
		*sign_out = '-';
		uval = (unsigned long long)(-(val + 1)) + 1;
	} else {
		uval = (unsigned long long)val;
	}
	return fmt_unsigned(out, uval, 10, 0);
}

static void prepend_zeros(char *numbuf, int *numlen, int prec)
{
	int extra = prec - *numlen;
	int k;

	if (extra <= 0)
		return;
	for (k = *numlen - 1; k >= 0; k--)
		numbuf[extra + k] = numbuf[k];
	for (k = 0; k < extra; k++)
		numbuf[k] = '0';
	*numlen += extra;
	numbuf[*numlen] = '\0';
}

static void emit_number(char *buf, size_t size, size_t *pos,
                        const char *prefix, int prefix_len,
                        const char *digits, int numlen,
                        int width, int flags_minus, int flags_zero)
{
	int total = prefix_len + numlen;
	char padch = (flags_zero && !flags_minus) ? '0' : ' ';

	if (!flags_minus && padch == ' ')
		put_padding(buf, size, pos, ' ', width - total);
	put_string(buf, size, pos, prefix, prefix_len);
	if (!flags_minus && padch == '0')
		put_padding(buf, size, pos, '0', width - total);
	put_string(buf, size, pos, digits, numlen);
	if (flags_minus)
		put_padding(buf, size, pos, ' ', width - total);
}

enum length_mod {
	LEN_NONE,
	LEN_HH,
	LEN_H,
	LEN_L,
	LEN_LL
};

__attribute__((weak)) int vsnprintf(char *buf, size_t size, const char *fmt, va_list ap)
{
	size_t pos = 0;

	while (*fmt) {
		int flags_minus, flags_plus, flags_space, flags_zero, flags_hash;
		int width, prec, have_prec;
		enum length_mod lenmod;
		char numbuf[24];
		char sign;
		int numlen;
		const char *strarg;
		int slen, padlen;

		if (*fmt != '%') {
			put_char(buf, size, &pos, *fmt);
			fmt++;
			continue;
		}
		fmt++;

		if (*fmt == '\0')
			break;

		flags_minus = 0;
		flags_plus = 0;
		flags_space = 0;
		flags_zero = 0;
		flags_hash = 0;

		for (;;) {
			if (*fmt == '-')      flags_minus = 1;
			else if (*fmt == '+') flags_plus = 1;
			else if (*fmt == ' ') flags_space = 1;
			else if (*fmt == '0') flags_zero = 1;
			else if (*fmt == '#') flags_hash = 1;
			else break;
			fmt++;
		}

		width = 0;
		if (*fmt == '*') {
			width = va_arg(ap, int);
			if (width < 0) {
				flags_minus = 1;
				width = -width;
			}
			fmt++;
		} else {
			while (*fmt >= '0' && *fmt <= '9') {
				width = width * 10 + (*fmt - '0');
				fmt++;
			}
		}

		have_prec = 0;
		prec = 0;
		if (*fmt == '.') {
			have_prec = 1;
			fmt++;
			if (*fmt == '*') {
				prec = va_arg(ap, int);
				if (prec < 0) {
					have_prec = 0;
					prec = 0;
				}
				fmt++;
			} else {
				while (*fmt >= '0' && *fmt <= '9') {
					prec = prec * 10 + (*fmt - '0');
					fmt++;
				}
			}
		}

		lenmod = LEN_NONE;
		if (*fmt == 'h') {
			fmt++;
			if (*fmt == 'h') {
				lenmod = LEN_HH;
				fmt++;
			} else {
				lenmod = LEN_H;
			}
		} else if (*fmt == 'l') {
			fmt++;
			if (*fmt == 'l') {
				lenmod = LEN_LL;
				fmt++;
			} else {
				lenmod = LEN_L;
			}
		}

		switch (*fmt) {
		case '%':
			put_char(buf, size, &pos, '%');
			break;

		case 'd':
		case 'i': {
			long long val;

			if (lenmod == LEN_LL)
				val = va_arg(ap, long long);
			else if (lenmod == LEN_L)
				val = va_arg(ap, long);
			else {
				val = va_arg(ap, int);
				if (lenmod == LEN_H)
					val = (short)val;
				else if (lenmod == LEN_HH)
					val = (signed char)val;
			}

			numlen = fmt_signed(numbuf, val, &sign);
			if (sign == '\0' && flags_plus)
				sign = '+';
			else if (sign == '\0' && flags_space)
				sign = ' ';

			if (have_prec) {
				prepend_zeros(numbuf, &numlen, prec);
				flags_zero = 0;
			}

			{
				char signbuf[2];
				int signlen = 0;
				if (sign != '\0') {
					signbuf[0] = sign;
					signlen = 1;
				}
				emit_number(buf, size, &pos,
				            signbuf, signlen,
				            numbuf, numlen,
				            width, flags_minus, flags_zero);
			}
			break;
		}

		case 'u': case 'x': case 'X': case 'o': {
			unsigned long long uval;
			int base, upper;
			const char *prefix;
			int prefix_len;

			if (lenmod == LEN_LL)
				uval = va_arg(ap, unsigned long long);
			else if (lenmod == LEN_L)
				uval = va_arg(ap, unsigned long);
			else {
				uval = va_arg(ap, unsigned int);
				if (lenmod == LEN_H)
					uval = (unsigned short)uval;
				else if (lenmod == LEN_HH)
					uval = (unsigned char)uval;
			}

			base = 10;
			upper = 0;
			prefix = "";
			prefix_len = 0;

			if (*fmt == 'x') {
				base = 16;
			} else if (*fmt == 'X') {
				base = 16;
				upper = 1;
			} else if (*fmt == 'o') {
				base = 8;
			}

			numlen = fmt_unsigned(numbuf, uval, base, upper);

			if (flags_hash && uval != 0) {
				if (base == 16) {
					prefix = upper ? "0X" : "0x";
					prefix_len = 2;
				} else if (base == 8 && numbuf[0] != '0') {
					prefix = "0";
					prefix_len = 1;
				}
			}

			if (have_prec) {
				prepend_zeros(numbuf, &numlen, prec);
				flags_zero = 0;
			}

			emit_number(buf, size, &pos,
			            prefix, prefix_len,
			            numbuf, numlen,
			            width, flags_minus, flags_zero);
			break;
		}

		case 'c': {
			char ch = (char)va_arg(ap, int);
			if (!flags_minus)
				put_padding(buf, size, &pos, ' ', width - 1);
			put_char(buf, size, &pos, ch);
			if (flags_minus)
				put_padding(buf, size, &pos, ' ', width - 1);
			break;
		}

		case 's': {
			strarg = va_arg(ap, const char *);
			if (strarg == NULL)
				strarg = "(null)";
			slen = str_len(strarg);
			if (have_prec && prec < slen)
				slen = prec;
			padlen = width - slen;

			if (!flags_minus)
				put_padding(buf, size, &pos, ' ', padlen);
			put_string(buf, size, &pos, strarg, slen);
			if (flags_minus)
				put_padding(buf, size, &pos, ' ', padlen);
			break;
		}

		case 'p': {
			unsigned long long pval;
			pval = (unsigned long long)(unsigned long)va_arg(ap, void *);
			if (pval == 0) {
				strarg = "(nil)";
				slen = 5;
				if (!flags_minus)
					put_padding(buf, size, &pos, ' ', width - slen);
				put_string(buf, size, &pos, strarg, slen);
				if (flags_minus)
					put_padding(buf, size, &pos, ' ', width - slen);
			} else {
				int total;
				numlen = fmt_unsigned(numbuf, pval, 16, 0);
				total = 2 + numlen;
				if (!flags_minus)
					put_padding(buf, size, &pos, ' ', width - total);
				put_char(buf, size, &pos, '0');
				put_char(buf, size, &pos, 'x');
				put_string(buf, size, &pos, numbuf, numlen);
				if (flags_minus)
					put_padding(buf, size, &pos, ' ', width - total);
			}
			break;
		}

		default:
			put_char(buf, size, &pos, '%');
			put_char(buf, size, &pos, *fmt);
			break;
		}

		if (*fmt != '\0')
			fmt++;
	}

	if (size > 0)
		buf[pos < size ? pos : size - 1] = '\0';

	return (int)pos;
}
