/* SPDX-License-Identifier: MIT */
/* printf.c --- Tiny formatted output via putchar */
/* Copyright (c) 2026 Jakob Kastelic */

/* Supports %s, %c, %d, %u, %x with optional zero-pad and width.
   Hex avoids any divide/modulo work. Output is pushed byte-by-byte
   through putchar(), which the application supplies.

   Every walk over a byte pointer uses the post-increment idiom
   `char c = *p++;` so the compiler emits the post-modify byte load
   form of the SHARC+ data memory access. */

#include "stdio.h"
#include "stdarg.h"
#include "stdint.h"

// Division-free decimal: subtract powers of ten to avoid pulling in
// the __divrem_u32 compiler runtime helper (no -no-std-lib friendly).
static const uint32_t pow10[] = {
   1000000000U, 100000000U, 10000000U, 1000000U,
   100000U, 10000U, 1000U, 100U, 10U, 1U
};

static void emit_udec(uint32_t uval, int min_width, char pad)
{
   // Find the first non-zero power-of-ten index (i.e. count digits).
   int first = 9; // index of 1 => single digit
   for (int i = 0; i < 9; i++) {
      if (uval >= pow10[i]) {
         first = i;
         break;
      }
   }
   int digits  = 10 - first;
   int leading = min_width - digits;
   while (leading > 0) {
      putchar(pad);
      leading--;
   }

   for (int i = first; i < 10; i++) {
      char d = '0';
      while (uval >= pow10[i]) {
         uval -= pow10[i];
         d++;
      }
      putchar(d);
   }
}

static void emit_dec(int32_t value, int min_width, char pad)
{
   int neg = 0;
   uint32_t uval;
   if (value < 0) {
      neg  = 1;
      uval = (uint32_t)(-(value + 1)) + 1U;
   } else {
      uval = (uint32_t)value;
   }

   // Find the first non-zero power-of-ten index (i.e. count digits).
   int first = 9; // index of 1 => single digit
   for (int i = 0; i < 9; i++) {
      if (uval >= pow10[i]) {
         first = i;
         break;
      }
   }
   int digits = 10 - first;
   int total  = digits + neg;

   if (pad == ' ') {
      int leading = min_width - total;
      while (leading > 0) { putchar(' '); leading--; }
   }
   if (neg) {
      putchar('-');
   }
   if (pad == '0') {
      int leading = min_width - total;
      while (leading > 0) { putchar('0'); leading--; }
   }

   for (int i = first; i < 10; i++) {
      char d = '0';
      while (uval >= pow10[i]) {
         uval -= pow10[i];
         d++;
      }
      putchar(d);
   }
}

static void emit_hex(uint32_t value, int min_width, char pad)
{
   // Count significant digits MSB-first (always at least one).
   int digits = 1;
   uint32_t v = value >> 4;
   while (v != 0U) {
      digits++;
      v >>= 4;
   }

   // Emit padding ahead of the digits.
   int width   = (min_width > digits) ? min_width : digits;
   int leading = width - digits;
   while (leading > 0) {
      putchar(pad);
      leading--;
   }

   // Emit the digits high to low. No buffer, no reverse walk.
   int shift = (digits - 1) * 4;
   while (shift >= 0) {
      uint32_t nibble = (value >> shift) & 0xFU;
      putchar((char)((nibble < 10U) ? ('0' + nibble) : ('a' + (nibble - 10U))));
      shift -= 4;
   }
}

static void emit_str(const char *s)
{
   if (s == 0) {
      s = "(null)";
   }
   for (;;) {
      char c = *s++;
      if (c == '\0') {
         break;
      }
      putchar(c);
   }
}

__attribute__((weak)) int printf(const char *fmt, ...)
{
   va_list ap;
   va_start(ap, fmt);

   for (;;) {
      char c = *fmt++;
      if (c == '\0') {
         break;
      }
      if (c != '%') {
         putchar(c);
         continue;
      }

      // Percent specifier. Optional zero-pad and width digit.
      char pad  = ' ';
      int width = 0;
      c         = *fmt++;
      if (c == '0') {
         pad = '0';
         c   = *fmt++;
      }
      while (c >= '0' && c <= '9') {
         width = (width << 3) + (width << 1) + (c - '0'); // x10
         c     = *fmt++;
      }

      // `c` now holds the conversion character.
      switch (c) {
         case 's': emit_str(va_arg(ap, const char *)); break;
         case 'c': putchar((char)va_arg(ap, int)); break;
         case 'd': emit_dec(va_arg(ap, int32_t), width, pad); break;
         case 'u': emit_udec(va_arg(ap, uint32_t), width, pad); break;
         case 'x': emit_hex(va_arg(ap, uint32_t), width, pad); break;
         case '%': putchar('%'); break;
         case '\0':
            // Trailing '%' at end of format string; bail out.
            va_end(ap);
            return 0;
         default:
            putchar('%');
            putchar(c);
            break;
      }
   }

   va_end(ap);
   return 0;
}
