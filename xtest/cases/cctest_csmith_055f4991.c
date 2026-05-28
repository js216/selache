// SPDX-License-Identifier: MIT
// cctest_csmith_055f4991.c --- cctest case csmith_055f4991 (csmith seed 90130833)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2fac3ac8 */
/* @exp_ticks 0x98d5 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 90130833 -o /tmp/csmith_gen_d10n_427/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   int64_t  f1;
   uint16_t  f2;
   uint8_t  f3;
   uint8_t  f4;
   uint64_t  f5;
};

union U1 {
   int32_t  f0;
   int32_t  f1;
   const uint8_t  f2;
   struct S0  f3;
   const struct S0  f4;
};

union U2 {
   const int32_t  f0;
};

union U3 {
   const struct S0  f0;
   const uint16_t  f1;
};


static union U3 g_12 = {{2L,-1L,65530UL,0x51L,247UL,0x8DFBA22E974A5202LL}};
static int32_t g_14[4][3][1] = {{{(-3L)},{0x17D72B90L},{0x17D72B90L}},{{(-3L)},{0x17D72B90L},{0x17D72B90L}},{{(-3L)},{0x17D72B90L},{0x17D72B90L}},{{(-3L)},{0x17D72B90L},{0x17D72B90L}}};
static int32_t g_37 = 0x883E731EL;
static union U1 g_41 = {0x3268DD2AL};
static int16_t g_43 = 0x1CD1L;
static const int32_t g_58 = 0L;
static int32_t g_79 = 0x446B8CC3L;
static int8_t g_83[7] = {0xF4L,2L,0xF4L,0xF4L,2L,0xF4L,0xF4L};
static uint32_t g_95 = 0x4354AF31L;
static int32_t *g_102 = &g_37;
static int32_t **g_101 = &g_102;
static union U3 g_106 = {{0xC017L,0x0BA7DF88EE36B020LL,1UL,0xD6L,0x57L,0xB3F785D6CF981355LL}};
static union U3 *g_105 = &g_106;
static uint32_t g_123 = 1UL;
static const uint8_t *g_168 = &g_12.f0.f3;
static uint8_t g_171 = 0x06L;
static int32_t *g_175 = (void*)0;
static union U2 g_245[6][4] = {{{0x28E98AEBL},{0x8E47B015L},{0x28E98AEBL},{0x8E47B015L}},{{0x28E98AEBL},{0x8E47B015L},{0x28E98AEBL},{0x8E47B015L}},{{0x28E98AEBL},{0x8E47B015L},{0x28E98AEBL},{0x8E47B015L}},{{0x28E98AEBL},{0x8E47B015L},{0x28E98AEBL},{0x8E47B015L}},{{0x28E98AEBL},{0x8E47B015L},{0x28E98AEBL},{0x8E47B015L}},{{0x28E98AEBL},{0x8E47B015L},{0x28E98AEBL},{0x8E47B015L}}};
static int8_t *g_250[3][4] = {{&g_83[6],&g_83[6],&g_83[6],&g_83[6]},{&g_83[6],&g_83[6],&g_83[6],&g_83[6]},{&g_83[6],&g_83[6],&g_83[6],&g_83[6]}};
static int8_t **g_249 = &g_250[2][2];
static uint32_t g_286 = 6UL;
static uint64_t * const **g_297 = (void*)0;
static union U3 **g_325 = &g_105;
static int64_t *g_334 = (void*)0;
static const int64_t g_339 = 0x1AEBCF45954D822BLL;
static const int64_t *g_338 = &g_339;
static int64_t g_342[4] = {0xE5DB754613F60B24LL,0xE5DB754613F60B24LL,0xE5DB754613F60B24LL,0xE5DB754613F60B24LL};
static int16_t g_357 = 0xE8ADL;
static uint64_t g_395 = 0xA1814A40C3CC7F66LL;
static uint32_t g_419[5] = {0x022487F2L,0x022487F2L,0x022487F2L,0x022487F2L,0x022487F2L};
static uint64_t g_423 = 0xFC34EC1C7CE73919LL;
static int64_t g_431 = (-1L);
static uint16_t g_432 = 0xBBB4L;
static uint32_t g_439 = 4UL;
static int64_t g_455[7][2] = {{0L,0L},{0L,(-1L)},{(-8L),0x4ED6389AE824EB13LL},{(-1L),0x4ED6389AE824EB13LL},{(-8L),(-1L)},{0L,0L},{0L,(-1L)}};
static int16_t g_473[2][1] = {{0x49D0L},{0x49D0L}};
static int16_t g_474 = 0xE172L;
static uint32_t g_477 = 0x625C92A0L;
static uint64_t g_536 = 0xEB1A200B15A4E9F5LL;
static struct S0 g_546[1] = {{0x39FFL,-8L,0x60AAL,0UL,0x9BL,0x3FF0630B20F8B623LL}};
static int64_t g_555 = 0x58317EBB2CC8573CLL;
static int8_t g_579 = (-1L);
static union U1 *g_607[2][4][6] = {{{&g_41,&g_41,&g_41,&g_41,(void*)0,&g_41},{&g_41,&g_41,&g_41,(void*)0,&g_41,&g_41},{(void*)0,&g_41,&g_41,&g_41,&g_41,&g_41},{(void*)0,&g_41,(void*)0,&g_41,&g_41,(void*)0}},{{(void*)0,(void*)0,&g_41,(void*)0,&g_41,&g_41},{&g_41,(void*)0,(void*)0,&g_41,&g_41,&g_41},{&g_41,&g_41,(void*)0,(void*)0,(void*)0,&g_41},{&g_41,(void*)0,&g_41,&g_41,&g_41,(void*)0}}};
static union U1 **g_606 = &g_607[1][0][1];
static int8_t g_635 = 5L;
static uint64_t g_641 = 18446744073709551607UL;
static struct S0 *g_651 = (void*)0;
static struct S0 **g_650 = &g_651;
static struct S0 ***g_649 = &g_650;
static uint32_t g_695 = 0UL;
static int8_t g_699 = 0xE9L;
static uint16_t g_700 = 0UL;
static uint16_t *g_745 = &g_546[0].f2;
static struct S0 ***g_770 = &g_650;
static uint32_t g_785 = 18446744073709551608UL;
static int8_t g_830 = 0xAAL;
static const uint32_t g_890 = 0x135D2106L;
static uint16_t g_952 = 65534UL;
static uint32_t *g_998 = &g_123;
static uint32_t *g_999 = (void*)0;
static int32_t g_1010 = 0xA5A6FDC5L;
static uint32_t g_1012 = 0xD15EDAABL;
static uint32_t g_1026 = 0UL;
static uint32_t g_1041 = 0xA6B74B69L;
static uint8_t g_1046[7][7] = {{0xF0L,255UL,0xCAL,1UL,0xF1L,0xF0L,0xF0L},{255UL,0xF1L,1UL,0xF1L,255UL,0x90L,0xF1L},{8UL,0x3BL,255UL,0xF1L,0xCAL,255UL,0xFDL},{0xCAL,0xFDL,1UL,1UL,0xFDL,0xCAL,0x3BL},{8UL,0xF1L,0xCDL,8UL,0xFDL,0x7FL,0xF1L},{255UL,0xF0L,0xCAL,255UL,0xCAL,0xF0L,255UL},{0xF0L,0xF1L,1UL,0xCAL,255UL,0xF0L,0xCAL}};
static uint32_t **g_1055 = &g_999;
static uint32_t ***g_1054[5] = {&g_1055,&g_1055,&g_1055,&g_1055,&g_1055};
static uint64_t g_1090 = 18446744073709551615UL;
static int32_t *g_1099[5][2] = {{&g_37,&g_37},{&g_37,&g_37},{&g_37,&g_37},{&g_37,&g_37},{&g_37,&g_37}};
static int16_t *g_1112 = &g_43;
static int16_t **g_1111 = &g_1112;
static int8_t g_1172 = (-1L);
static int16_t g_1249 = 7L;
static union U3 g_1271 = {{0x34C0L,-6L,65535UL,0x74L,0x28L,18446744073709551610UL}};
static uint8_t g_1298 = 0xA6L;
static union U3 ***g_1385 = (void*)0;
static union U3 ****g_1384 = &g_1385;
static union U3 *****g_1383 = &g_1384;
static struct S0 ****g_1469 = &g_770;
static struct S0 *****g_1468 = &g_1469;
static struct S0 *****g_1470[5][3] = {{&g_1469,&g_1469,&g_1469},{&g_1469,&g_1469,&g_1469},{&g_1469,&g_1469,&g_1469},{&g_1469,&g_1469,&g_1469},{&g_1469,&g_1469,&g_1469}};
static union U2 * const *g_1498 = (void*)0;
static const int32_t g_1510 = 1L;
static const int32_t *g_1509 = &g_1510;
static const int16_t *g_1575 = &g_106.f0.f0;
static const int16_t **g_1574 = &g_1575;
static const int16_t ***g_1573 = &g_1574;
static int8_t g_1695[3] = {0x9CL,0x9CL,0x9CL};
static uint32_t g_1739 = 0x26A87DC8L;
static int8_t ***g_1815[3] = {&g_249,&g_249,&g_249};
static int8_t ****g_1814 = &g_1815[0];
static int8_t *****g_1813 = &g_1814;
static int32_t ***g_1846 = &g_101;
static int32_t **** const g_1845[4] = {&g_1846,&g_1846,&g_1846,&g_1846};
static int32_t g_1903 = 0L;
static union U2 **g_1964 = (void*)0;
static union U2 ***g_1963 = &g_1964;
static union U2 *g_1975[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_1978[7][5][5] = {{{0x4F0E927DL,0x8B0C2052L,(-1L),0x26C8E728L,(-1L)},{0xBF75FEF5L,0xB98FD420L,0x26C8E728L,(-1L),0x177ABB06L},{0x177ABB06L,0x45A3E0FEL,0x8B0C2052L,0xEDBDBF64L,0x177ABB06L},{0xB98FD420L,(-1L),(-1L),0xB98FD420L,0L},{0x177ABB06L,(-1L),(-1L),0xA209E24EL,0xB98FD420L}},{{0xEDBDBF64L,0L,0x177ABB06L,0x45A3E0FEL,0xB6660FDEL},{(-1L),0x4F0E927DL,0xBF75FEF5L,0xA209E24EL,0xA209E24EL},{0x4F0E927DL,0xEDBDBF64L,0x4F0E927DL,0xB98FD420L,0L},{0x4F0E927DL,(-1L),0x45A3E0FEL,0xEDBDBF64L,0x10BC931CL},{(-1L),0xBF75FEF5L,0L,(-1L),3L}},{{0xEDBDBF64L,0xA209E24EL,0x45A3E0FEL,0x10BC931CL,0x45A3E0FEL},{0x177ABB06L,0x177ABB06L,0x4F0E927DL,(-1L),0x45A3E0FEL},{0xB98FD420L,0L,0xBF75FEF5L,0xB6660FDEL,3L},{0xBABCF00DL,0xB6660FDEL,0x177ABB06L,0x26C8E728L,0x10BC931CL},{0x26C8E728L,0L,(-1L),(-1L),0L}},{{3L,0x177ABB06L,(-1L),(-1L),0xA209E24EL},{0L,0xA209E24EL,0x8B0C2052L,0x26C8E728L,0xB6660FDEL},{(-1L),0xBF75FEF5L,0x10BC931CL,0xB6660FDEL,0xB98FD420L},{0L,(-1L),0xB98FD420L,(-1L),0L},{3L,0xEDBDBF64L,0xB98FD420L,0x10BC931CL,0x177ABB06L}},{{0x26C8E728L,0x4F0E927DL,0x10BC931CL,(-1L),0xBABCF00DL},{0xBABCF00DL,0L,0x8B0C2052L,0xEDBDBF64L,0x177ABB06L},{0xB98FD420L,(-1L),(-1L),0xB98FD420L,0L},{0x177ABB06L,(-1L),(-1L),0xA209E24EL,0xB98FD420L},{0xEDBDBF64L,0L,0x177ABB06L,0x45A3E0FEL,0xB6660FDEL}},{{(-1L),0x4F0E927DL,0xBF75FEF5L,0xA209E24EL,0xA209E24EL},{0x4F0E927DL,0xEDBDBF64L,0x4F0E927DL,0xB98FD420L,0L},{0x4F0E927DL,(-1L),0x45A3E0FEL,0xEDBDBF64L,0x10BC931CL},{(-1L),0xBF75FEF5L,0L,(-1L),3L},{0xEDBDBF64L,0xA209E24EL,0x45A3E0FEL,0x10BC931CL,0x45A3E0FEL}},{{0x177ABB06L,0x177ABB06L,0x4F0E927DL,(-1L),0x45A3E0FEL},{0xB98FD420L,0L,0xBF75FEF5L,0xB6660FDEL,3L},{0xBABCF00DL,0xB6660FDEL,0x177ABB06L,0x26C8E728L,0x10BC931CL},{0x26C8E728L,0L,(-1L),(-1L),0L},{3L,0x177ABB06L,(-1L),(-1L),0xA209E24EL}}};
static int16_t g_2120 = 0x820DL;
static int16_t ***g_2134[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};



static int16_t  func_1(void);
static union U1 * func_2(union U1 * p_3, const union U3  p_4, uint32_t  p_5, uint64_t  p_6, uint16_t  p_7);
static union U1 * func_8(union U1 * p_9);
static uint8_t  func_23(int8_t  p_24, uint8_t  p_25, uint32_t  p_26, uint32_t  p_27, union U1  p_28);
static uint32_t  func_29(union U3 * p_30, uint8_t  p_31, uint64_t  p_32, uint32_t  p_33, int32_t  p_34);
static int8_t  func_35(union U1 * p_36);
static uint8_t  func_50(const union U1 * p_51, const union U3 * p_52, union U3 * p_53);
static const union U1 * func_54(const int32_t * p_55);




static int16_t  func_1(void)
{ 
    union U1 *l_10 = (void*)0;
    int32_t l_1979 = 0xDC68C991L;
    union U1 l_1980 = {-1L};
    int32_t l_2178[5][3][3] = {{{(-9L),0xF1CE615DL,0xF1CE615DL},{(-10L),0x62D51A1AL,(-4L)},{(-9L),0x62D51A1AL,0xE807FA8DL}},{{0x0479A75FL,0xF1CE615DL,(-4L)},{0x0479A75FL,0x50A260A4L,0xF1CE615DL},{(-9L),0xF1CE615DL,0xF1CE615DL}},{{(-10L),0x62D51A1AL,0xDC46CC01L},{(-4L),(-1L),0x8F1DB3B2L},{0xF1CE615DL,0xCB4709A4L,0xDC46CC01L}},{{0xF1CE615DL,0x120FE9C9L,0xCB4709A4L},{(-4L),0xCB4709A4L,0xCB4709A4L},{0xE807FA8DL,(-1L),0xDC46CC01L}},{{(-4L),(-1L),0x8F1DB3B2L},{0xF1CE615DL,0xCB4709A4L,0xDC46CC01L},{0xF1CE615DL,0x120FE9C9L,0xCB4709A4L}}};
    struct S0 l_2191 = {0x5807L,0x5EC312553F17B078LL,0xD756L,255UL,0xB4L,0xF2C2D89BA9190A16LL};
    int32_t l_2206 = 0L;
    int32_t l_2207 = 6L;
    int32_t l_2208 = 0x7749430CL;
    uint32_t l_2209 = 0xA8A97404L;
    uint16_t l_2212[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2212[i] = 3UL;
    return l_2212[0];
}



static union U1 * func_2(union U1 * p_3, const union U3  p_4, uint32_t  p_5, uint64_t  p_6, uint16_t  p_7)
{ 
    int16_t l_1983 = (-1L);
    union U2 *l_1992 = &g_245[4][2];
    int32_t l_2016[7] = {4L,4L,4L,4L,4L,4L,4L};
    int64_t l_2021 = 0x9CD9DFA930899B73LL;
    uint32_t **l_2027 = (void*)0;
    int16_t ***l_2033 = &g_1111;
    int16_t ****l_2032[4][4] = {{(void*)0,&l_2033,(void*)0,&l_2033},{(void*)0,&l_2033,(void*)0,&l_2033},{(void*)0,&l_2033,(void*)0,&l_2033},{(void*)0,&l_2033,(void*)0,&l_2033}};
    int16_t ***l_2058 = (void*)0;
    union U2 **l_2077 = &g_1975[4];
    struct S0 l_2080[6] = {{-1L,6L,0x900BL,255UL,249UL,18446744073709551615UL},{-1L,6L,0x900BL,255UL,249UL,18446744073709551615UL},{-1L,6L,0x900BL,255UL,249UL,18446744073709551615UL},{-1L,6L,0x900BL,255UL,249UL,18446744073709551615UL},{-1L,6L,0x900BL,255UL,249UL,18446744073709551615UL},{-1L,6L,0x900BL,255UL,249UL,18446744073709551615UL}};
    uint8_t *l_2099 = &l_2080[4].f3;
    union U1 l_2112 = {-9L};
    const int32_t **l_2165[3];
    const union U1 *l_2167 = (void*)0;
    const union U1 **l_2166 = &l_2167;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2165[i] = &g_1509;
    for (g_1739 = 0; (g_1739 <= 19); g_1739++)
    { 
        uint32_t l_2014 = 0xB70EA634L;
        int32_t l_2017 = (-1L);
        uint32_t **l_2026 = (void*)0;
        int32_t l_2038[4] = {1L,1L,1L,1L};
        uint32_t l_2044 = 0x2142F96FL;
        int i;
        if (l_1983)
        { 
            struct S0 l_1984 = {0x9DDFL,-4L,0x1B26L,246UL,254UL,0UL};
            l_1984 = p_4.f0;
        }
        else
        { 
            uint8_t l_2013 = 255UL;
            int32_t *l_2018[3][7][1] = {{{&g_79},{&g_41.f1},{&l_2016[4]},{&g_41.f1},{&g_79},{&g_41.f1},{&l_2016[4]}},{{&g_41.f1},{&g_79},{&g_41.f1},{&l_2016[4]},{&g_41.f1},{&g_79},{&g_41.f1}},{{&l_2016[4]},{&g_41.f1},{&g_79},{&g_41.f1},{&l_2016[4]},{&g_41.f1},{&g_79}}};
            uint64_t *l_2034 = &g_41.f3.f5;
            int i, j, k;
            for (g_1010 = (-3); (g_1010 == 25); ++g_1010)
            { 
                uint8_t l_1991 = 0xD8L;
                struct S0 l_1994 = {1L,0L,65535UL,0xBFL,0xF6L,0x0FED9A7BE259C6C6LL};
                int32_t *l_1999 = &g_1978[5][1][3];
                if (p_4.f0.f1)
                    break;
                for (g_123 = 15; (g_123 < 56); g_123++)
                { 
                    (***g_1846) = p_7;
                }
                for (p_7 = 0; (p_7 <= 12); p_7 = safe_add_func_int8_t_s_s(p_7, 2))
                { 
                    union U2 **l_1993 = &l_1992;
                    union U3 * const l_1995 = &g_106;
                    union U3 **l_1996 = &g_105;
                    if (l_1991)
                        break;
                    (*l_1993) = l_1992;
                    l_1994 = l_1994;
                    (*l_1996) = l_1995;
                }
                for (g_1012 = 0; (g_1012 <= 45); ++g_1012)
                { 
                    (**g_1846) = l_1999;
                }
                for (g_785 = 23; (g_785 == 12); g_785 = safe_sub_func_int8_t_s_s(g_785, 4))
                { 
                    int16_t l_2015 = 0xA549L;
                    l_2016[4] |= ((safe_rshift_func_int16_t_s_s(((l_2015 |= (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((p_4.f0.f3 | (safe_lshift_func_int8_t_s_s(((((((~((*l_1999) <= 0xFF7FEA15L)) , (safe_mod_func_uint64_t_u_u(2UL, l_2013))) , (((*l_1999) <= (*g_998)) < p_5)) || l_2014) <= p_4.f0.f5) , (*l_1999)), p_4.f0.f0))) | (*l_1999)), p_6)), 3))) , (*l_1999)), l_1983)) != (*g_168));
                    (**g_1846) = (*g_101);
                    l_2017 ^= p_4.f0.f3;
                    (*g_101) = l_2018[2][1][0];
                    return p_3;
                }
            }
            l_2038[2] = (safe_mul_func_int32_t_s_s(l_2021, ((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_2026 != l_2027), (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((p_4.f0 , ((*l_2034) = (&g_1573 == l_2032[0][0]))) & (~(safe_add_func_int8_t_s_s((p_4.f0.f4 | l_2016[4]), 248UL)))), 4)), p_4.f0.f2)))), 0x2FL)) != p_6)));
        }
        for (g_1012 = 0; (g_1012 < 32); g_1012 = safe_add_func_uint64_t_u_u(g_1012, 7))
        { 
            int32_t l_2041 = 0x20109049L;
            int32_t *l_2042 = &l_2038[1];
            int32_t *l_2043[2][2][2];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_2043[i][j][k] = (void*)0;
                }
            }
            l_2044++;
            for (g_1903 = (-17); (g_1903 > 17); g_1903 = safe_add_func_int16_t_s_s(g_1903, 6))
            { 
                int8_t l_2049 = 0x96L;
                (*g_102) = l_2049;
            }
        }
    }
    for (g_41.f3.f4 = 0; (g_41.f3.f4 < 21); g_41.f3.f4++)
    { 
        int8_t l_2065 = 1L;
        int32_t * const *l_2070[5][1];
        int32_t * const **l_2069 = &l_2070[4][0];
        union U1 l_2071 = {0xC8FA59FEL};
        int32_t ***l_2072 = &g_101;
        union U2 **l_2076 = &g_1975[2];
        uint64_t *l_2086 = &g_423;
        uint64_t **l_2085 = &l_2086;
        int16_t l_2094 = 0xF662L;
        int8_t l_2116 = 0x7BL;
        uint64_t l_2117[4][2];
        union U2 ****l_2135 = &g_1963;
        union U1 ***l_2145 = &g_606;
        int32_t *l_2146 = &g_1010;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_2070[i][j] = &g_1099[0][0];
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_2117[i][j] = 18446744073709551611UL;
        }
        for (g_357 = 0; (g_357 == 28); ++g_357)
        { 
            const uint8_t l_2066 = 8UL;
            union U1 *l_2078 = &g_41;
            struct S0 l_2079 = {0xEA53L,0xD48B98940C98823CLL,65530UL,255UL,1UL,3UL};
            int8_t l_2091 = 0x33L;
            int32_t l_2113 = 4L;
            int32_t l_2121 = 0xFBBE2F55L;
            uint8_t l_2136 = 9UL;
            if (p_4.f0.f5)
                break;
            if ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*g_745) = ((l_2021 <= (&g_1574 == (l_2058 = &g_1111))) , (safe_unary_minus_func_uint64_t_u((~0xB18CE6BDL))))), (p_7 = (((((safe_mod_func_int8_t_s_s(((1UL <= (p_4.f0.f4 > (safe_lshift_func_uint16_t_u_s(((((l_2065 && 1L) | p_4.f0.f2) ^ 0x5EL) > l_2016[4]), 13)))) || p_4.f0.f3), l_2016[4])) , p_4.f0.f0) == l_2066) , 0xF359A7ABL) <= (-5L))))), 0)))
            { 
                int32_t ****l_2073 = &g_1846;
                (**g_101) |= ((safe_lshift_func_int16_t_s_s((2UL >= ((l_2069 == (l_2071 , ((*l_2073) = l_2072))) & p_5)), 1)) ^ ((*g_998) ^= (safe_rshift_func_int16_t_s_s((***g_1573), 13))));
                l_2077 = l_2076;
                return l_2078;
            }
            else
            { 
                uint8_t *l_2095 = (void*)0;
                uint8_t *l_2096 = (void*)0;
                int32_t l_2097 = 0xC8DCE3ECL;
                uint64_t * const *l_2098 = &l_2086;
                uint32_t l_2102 = 0x6F29E516L;
                int32_t l_2119[7][5][1] = {{{1L},{0xBD07DDD5L},{1L},{0x050F1A26L},{(-10L)}},{{0x7DFEDDB0L},{0xACE8353EL},{0xF88CAB3EL},{(-1L)},{(-5L)}},{{(-5L)},{(-1L)},{0xF88CAB3EL},{0xACE8353EL},{0x7DFEDDB0L}},{{(-10L)},{0x050F1A26L},{1L},{0xBD07DDD5L},{1L}},{{0x050F1A26L},{(-10L)},{0x7DFEDDB0L},{0xACE8353EL},{0xF88CAB3EL}},{{(-1L)},{(-5L)},{(-5L)},{(-1L)},{0xF88CAB3EL}},{{0xACE8353EL},{0x7DFEDDB0L},{(-10L)},{0x050F1A26L},{1L}}};
                int i, j, k;
                l_2071.f3 = l_2079;
                if ((*g_1509))
                    break;
                l_2080[4] = p_4.f0;
                if ((0xF1A6L < (safe_mul_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((((l_2085 != ((safe_mod_func_int8_t_s_s((((((l_2091 != (safe_mul_func_uint8_t_u_u(0UL, (((*g_606) = (((*g_105) , ((((((***l_2072) ^= l_2094) && 0x71L) && 0x5A671878L) <= 0x675FL) && 0x03L)) , (void*)0)) != (void*)0)))) ^ (*g_1575)) < l_2097) , 0x3E81L) != p_4.f0.f5), (*****g_1813))) , l_2098)) , (void*)0) != l_2099), 8L)) == (*g_745)), p_7))))
                { 
                    struct S0 *l_2100 = (void*)0;
                    struct S0 *l_2101[1][4][4] = {{{&l_2079,&l_2079,&l_2079,&l_2079},{&l_2079,&l_2079,&l_2079,&l_2079},{&l_2079,&l_2079,&l_2079,&l_2079},{&l_2079,&l_2079,&l_2079,&l_2079}}};
                    int i, j, k;
                    l_2071.f3 = l_2080[0];
                    (**g_101) = (p_4.f0.f5 > l_2102);
                    if (p_4.f0.f2)
                        break;
                }
                else
                { 
                    (***l_2069) = (***l_2069);
                }
                if (((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((l_2021 ^ (safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((l_2116 = ((0x5F0DL >= ((((+18446744073709551609UL) & (*****g_1813)) , (l_2112 , ((****g_1814) && (++(*l_2099))))) != (p_7 || 0x9141BC83FEC69D5DLL))) != 0x33F6L)) == l_2097), (*g_745))) | 1L) != l_2079.f1), (***l_2072)))), l_2021)) <= l_2117[3][1]), 65533UL)) > 1L))
                { 
                    int32_t l_2118 = (-6L);
                    uint32_t l_2122[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_2122[i] = 7UL;
                    ++l_2122[1];
                    (***l_2072) |= (l_2119[2][0][0] ^= (0x2F88C1BB4106FA65LL || (*g_338)));
                }
                else
                { 
                    (*g_102) = (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((*g_1575), ((((*g_998) ^= (((~(*g_745)) | 0x9DL) ^ (safe_mul_func_uint8_t_u_u((g_1046[6][6] = (((g_2134[0] == (void*)0) < (l_2135 == &g_1963)) >= 1UL)), l_2080[4].f0)))) == (-1L)) && p_6))), p_4.f0.f2)) && (***l_2069)) | 5L), 0x8EL));
                    if (p_7)
                        continue;
                }
            }
            l_2136--;
        }
        if (p_6)
            break;
        (*g_102) &= (((*l_2146) &= (((((*g_338) && (g_357 == (safe_rshift_func_uint16_t_u_s(p_4.f0.f3, 4)))) , (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, 8)), 0x24L))) , l_2145) == l_2145)) , p_4.f0.f1);
        (***l_2072) = (***g_1846);
        l_2016[4] ^= (safe_mod_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_95 || (***l_2069)), (l_2112.f0 ^= ((*g_1112) ^= (**g_1574))))), (safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_s(((*****g_1813) = (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((*g_168), 1UL)), (~((safe_add_func_int64_t_s_s(p_6, ((**l_2085)--))) != ((0x49L | p_5) & (***l_2069))))))), 7)))))) , p_4.f0.f4) , (*g_745)) , (*g_168)), (*g_168)));
    }
    (*l_2166) = (((*l_1992) , (*l_1992)) , func_54((g_1509 = (*g_101))));
    return (*g_606);
}



static union U1 * func_8(union U1 * p_9)
{ 
    union U3 *l_11 = &g_12;
    int32_t l_13 = 1L;
    union U3 l_1530 = {{0x4107L,0xEAF03F313EB30FE6LL,0x6C30L,0xADL,252UL,18446744073709551615UL}};
    int32_t l_1976 = 0x3E19B890L;
    l_11 = l_11;
    g_14[3][2][0] = l_13;
    for (l_13 = 0; (l_13 > 18); ++l_13)
    { 
        int16_t l_1533 = (-3L);
        union U1 l_1760 = {0xEE72C5B7L};
        int32_t *l_1977 = &g_1978[5][1][3];
        (*l_1977) |= (safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((l_13 & ((l_1976 = (((*g_102) = (0xFBL && func_23((func_29((l_11 = l_11), (func_35(p_9) == ((l_1530 , (safe_mod_func_uint32_t_u_u(1UL, l_1533))) && l_1533)), l_1533, l_1533, l_1533) , 0x81L), l_1533, l_1533, l_1530.f0.f3, l_1760))) , 0x90EC1683L)) == 0xE21F58D8L)), (*****g_1813))) & l_1530.f0.f3), l_1760.f2));
    }
    return (*g_606);
}



static uint8_t  func_23(int8_t  p_24, uint8_t  p_25, uint32_t  p_26, uint32_t  p_27, union U1  p_28)
{ 
    int8_t l_1761 = 0L;
    int32_t *l_1762 = &g_41.f0;
    int32_t *l_1763 = &g_79;
    int32_t *l_1764 = &g_79;
    int32_t *l_1765 = (void*)0;
    int32_t *l_1766 = (void*)0;
    int32_t *l_1767[4][6][7] = {{{&g_41.f1,&g_37,(void*)0,&g_37,(void*)0,&g_37,(void*)0},{(void*)0,(void*)0,&g_37,(void*)0,&g_41.f0,&g_41.f0,(void*)0},{&g_37,&g_37,(void*)0,&g_37,&g_41.f0,&g_41.f1,&g_41.f0},{&g_79,&g_37,(void*)0,&g_41.f1,&g_41.f0,&g_37,(void*)0},{(void*)0,(void*)0,(void*)0,&g_37,(void*)0,(void*)0,(void*)0},{(void*)0,&g_37,&g_41.f0,&g_41.f1,(void*)0,&g_37,&g_79}},{{&g_41.f0,&g_41.f1,&g_41.f0,&g_37,(void*)0,&g_37,&g_37},{(void*)0,&g_41.f0,&g_41.f0,(void*)0,&g_37,(void*)0,(void*)0},{(void*)0,&g_37,(void*)0,&g_37,(void*)0,&g_37,&g_37},{&g_41.f1,&g_79,&g_37,&g_37,&g_41.f0,(void*)0,&g_41.f0},{&g_41.f0,&g_79,&g_41.f0,&g_37,&g_41.f1,&g_37,(void*)0},{&g_41.f1,&g_37,(void*)0,(void*)0,&g_79,&g_79,(void*)0}},{{&g_41.f0,&g_41.f1,&g_41.f0,&g_37,&g_37,&g_41.f1,(void*)0},{(void*)0,&g_41.f0,&g_41.f0,(void*)0,&g_41.f0,(void*)0,&g_41.f0},{&g_37,&g_37,&g_41.f1,(void*)0,(void*)0,&g_41.f1,&g_37},{&g_37,&g_37,&g_79,&g_79,&g_79,&g_79,&g_37},{&g_41.f0,&g_37,&g_37,&g_37,(void*)0,&g_37,&g_41.f1},{&g_79,(void*)0,&g_41.f0,&g_37,&g_41.f0,(void*)0,&g_79}},{{&g_41.f1,&g_37,(void*)0,&g_37,&g_37,&g_37,&g_41.f0},{&g_37,&g_79,&g_79,&g_79,&g_79,&g_37,&g_37},{&g_37,&g_41.f1,(void*)0,(void*)0,&g_41.f1,&g_37,&g_37},{&g_41.f0,(void*)0,&g_41.f0,(void*)0,&g_41.f0,&g_41.f0,(void*)0},{(void*)0,&g_41.f1,&g_37,&g_37,&g_41.f0,&g_41.f1,&g_41.f0},{(void*)0,&g_79,&g_79,(void*)0,(void*)0,&g_37,&g_41.f1}}};
    int32_t l_1768[5][1];
    int8_t l_1769 = 6L;
    uint32_t l_1770 = 1UL;
    union U3 *l_1781 = &g_12;
    union U3 *l_1782 = &g_12;
    int16_t ***l_1830 = &g_1111;
    int16_t **** const l_1829 = &l_1830;
    int32_t ****l_1847 = &g_1846;
    uint32_t l_1868 = 18446744073709551615UL;
    uint16_t l_1919 = 65535UL;
    int32_t l_1928 = (-1L);
    uint32_t l_1933 = 0x594BE6E9L;
    int64_t *l_1941 = &g_555;
    union U2 ***l_1966[2][5] = {{(void*)0,&g_1964,(void*)0,&g_1964,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1768[i][j] = 0x3B26BB63L;
    }
    --l_1770;
    for (p_24 = (-14); (p_24 >= 10); ++p_24)
    { 
        uint16_t l_1787 = 0x8CACL;
        const int8_t l_1794 = 0xEFL;
        uint16_t l_1795[5] = {1UL,1UL,1UL,1UL,1UL};
        uint32_t l_1796[3];
        int8_t ** const l_1809 = &g_250[1][3];
        uint64_t **l_1828[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        uint64_t ***l_1827 = &l_1828[0][0];
        union U3 l_1833[4] = {{{0x4661L,0xABEDEB387DBAF47ELL,0x8E03L,0xB4L,0x44L,1UL}},{{0x4661L,0xABEDEB387DBAF47ELL,0x8E03L,0xB4L,0x44L,1UL}},{{0x4661L,0xABEDEB387DBAF47ELL,0x8E03L,0xB4L,0x44L,1UL}},{{0x4661L,0xABEDEB387DBAF47ELL,0x8E03L,0xB4L,0x44L,1UL}}};
        int32_t l_1839 = 0xCF117B9FL;
        int32_t l_1840 = 7L;
        int32_t l_1841 = 0xB983D670L;
        int16_t ***l_1854 = &g_1111;
        int32_t l_1857 = 0x6F4EC270L;
        int32_t l_1858 = (-3L);
        int32_t l_1861[6][2] = {{0x67582DFDL,0x6322D08CL},{8L,8L},{8L,0x6322D08CL},{0x67582DFDL,8L},{0x6322D08CL,8L},{0x67582DFDL,0x6322D08CL}};
        uint64_t l_1865 = 0x2E4C9DB125A77954LL;
        int16_t ****l_1878[7] = {&l_1854,&l_1854,&l_1854,&l_1854,&l_1854,&l_1854,&l_1854};
        union U3 ***l_1972[2][4][6] = {{{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325}},{{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325},{&g_325,&g_325,&g_325,&g_325,&g_325,&g_325}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1796[i] = 1UL;
    }
    return (*g_168);
}



static uint32_t  func_29(union U3 * p_30, uint8_t  p_31, uint64_t  p_32, uint32_t  p_33, int32_t  p_34)
{ 
    uint8_t l_1534[6] = {255UL,0xE7L,255UL,255UL,0xE7L,255UL};
    int8_t *** const *l_1539 = (void*)0;
    int32_t l_1540 = 7L;
    int16_t * const *l_1549 = &g_1112;
    const int16_t *l_1572[6][2][1] = {{{&g_1271.f0.f0},{&g_12.f0.f0}},{{&g_12.f0.f0},{&g_1271.f0.f0}},{{&g_12.f0.f0},{&g_12.f0.f0}},{{&g_1271.f0.f0},{&g_12.f0.f0}},{{&g_12.f0.f0},{&g_1271.f0.f0}},{{&g_12.f0.f0},{&g_12.f0.f0}}};
    const int16_t **l_1571[2][4][7] = {{{&l_1572[3][0][0],&l_1572[5][0][0],&l_1572[3][0][0],&l_1572[5][1][0],&l_1572[4][1][0],&l_1572[5][1][0],&l_1572[3][0][0]},{&l_1572[4][0][0],&l_1572[4][1][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][1][0]},{&l_1572[4][0][0],&l_1572[5][1][0],&l_1572[0][0][0],&l_1572[5][0][0],&l_1572[0][0][0],&l_1572[5][1][0],&l_1572[4][0][0]},{&l_1572[0][1][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[0][1][0],&l_1572[4][0][0]}},{{&l_1572[4][1][0],&l_1572[5][0][0],&l_1572[0][1][0],&l_1572[5][0][0],&l_1572[4][1][0],&l_1572[3][0][0],&l_1572[4][1][0]},{&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[0][1][0],&l_1572[4][0][0],&l_1572[4][1][0]},{&l_1572[0][0][0],&l_1572[5][0][0],&l_1572[0][0][0],&l_1572[5][1][0],&l_1572[4][0][0],&l_1572[5][1][0],&l_1572[0][0][0]},{&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][1][0],&l_1572[4][0][0],&l_1572[4][0][0],&l_1572[4][1][0]}}};
    const int16_t ***l_1570 = &l_1571[1][2][0];
    int32_t l_1588 = 1L;
    int32_t l_1591 = (-5L);
    int32_t l_1627 = 0x49FC66F1L;
    int32_t l_1628 = 0xBC4F253CL;
    int32_t l_1631 = 0x13FFDADEL;
    int32_t l_1635[6] = {1L,1L,1L,1L,1L,1L};
    struct S0 l_1751 = {1L,-1L,0x94A3L,0x9FL,0x18L,0x1DA582A8C1FBCE67LL};
    int32_t ***l_1757 = (void*)0;
    int32_t *l_1758 = (void*)0;
    int32_t *l_1759 = &g_79;
    int i, j, k;
    (**g_101) = ((l_1534[1] > ((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_1534[0], (*g_745))), (p_31 && (*g_102)))) , ((void*)0 != l_1539))) && l_1540);
    (**g_101) ^= 0xEFA5133AL;
    for (g_41.f3.f5 = 0; (g_41.f3.f5 > 31); g_41.f3.f5 = safe_add_func_uint64_t_u_u(g_41.f3.f5, 1))
    { 
        uint16_t l_1558 = 0x39E2L;
        union U3 ** const *l_1594 = &g_325;
        union U3 ** const **l_1593 = &l_1594;
        uint64_t l_1598 = 8UL;
        int32_t l_1601 = 1L;
        int32_t l_1636 = (-1L);
        union U2 *l_1655[6][4][3] = {{{&g_245[4][2],&g_245[4][2],&g_245[4][3]},{&g_245[4][2],&g_245[0][2],&g_245[1][1]},{&g_245[3][0],&g_245[2][3],&g_245[4][2]},{&g_245[4][2],(void*)0,&g_245[4][3]}},{{&g_245[4][2],&g_245[3][0],(void*)0},{&g_245[4][2],(void*)0,&g_245[3][0]},{&g_245[4][2],(void*)0,(void*)0},{&g_245[3][0],&g_245[4][2],&g_245[4][2]}},{{&g_245[4][2],(void*)0,&g_245[4][2]},{&g_245[4][2],&g_245[3][0],&g_245[4][2]},{(void*)0,(void*)0,&g_245[4][3]},{(void*)0,&g_245[3][0],(void*)0}},{{(void*)0,(void*)0,&g_245[1][0]},{&g_245[4][2],&g_245[4][2],(void*)0},{&g_245[4][2],(void*)0,&g_245[4][2]},{(void*)0,(void*)0,&g_245[1][1]}},{{&g_245[1][0],&g_245[3][0],&g_245[1][1]},{&g_245[0][2],(void*)0,&g_245[4][2]},{(void*)0,&g_245[2][3],(void*)0},{&g_245[4][2],&g_245[0][2],&g_245[1][0]}},{{(void*)0,&g_245[4][2],(void*)0},{&g_245[1][0],(void*)0,&g_245[4][3]},{&g_245[4][2],(void*)0,&g_245[4][2]},{&g_245[1][0],&g_245[2][3],&g_245[4][2]}}};
        int32_t l_1673 = 1L;
        const int64_t *l_1702 = &g_339;
        const struct S0 l_1718 = {0x0C94L,2L,0UL,0x6CL,0xA2L,0x3EAE97AFF39A35F6LL};
        int64_t l_1725 = 0x28B6DE65CA4A78C9LL;
        int32_t l_1738 = 0xCC9A5EA3L;
        int i, j, k;
    }
    for (g_695 = 0; (g_695 <= 5); g_695 += 1)
    { 
        int32_t l_1744[1][3][7] = {{{0xE071645FL,0xF051CC20L,0x2EC4AA7AL,0x2EC4AA7AL,0xF051CC20L,0xE071645FL,0L},{0xE071645FL,0xF051CC20L,0x2EC4AA7AL,0x2EC4AA7AL,0xF051CC20L,0xE071645FL,0L},{0xE071645FL,0xF051CC20L,0x2EC4AA7AL,0x2EC4AA7AL,0xF051CC20L,0xE071645FL,0L}}};
        int32_t **l_1747 = &g_1099[0][0];
        int32_t ***l_1748 = &g_101;
        int32_t *l_1749 = &l_1627;
        union U1 *l_1750 = (void*)0;
        int i, j, k;
        l_1744[0][2][5] &= (safe_mod_func_int8_t_s_s(l_1534[g_695], p_31));
        (*l_1749) = ((**l_1747) = (safe_mod_func_uint16_t_u_u((l_1747 == ((*l_1748) = l_1747)), ((*g_1112) = l_1635[2]))));
        l_1750 = (*g_606);
    }
    (*l_1759) ^= (l_1751 , ((*g_102) = (safe_div_func_int64_t_s_s(0x4B8BF09848CE8304LL, (safe_div_func_uint16_t_u_u((~(((void*)0 == l_1757) , ((*g_745) = (*g_745)))), (*g_1112)))))));
    return g_546[0].f1;
}



static int8_t  func_35(union U1 * p_36)
{ 
    union U1 *l_40 = &g_41;
    const union U3 *l_1158[7] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};
    int32_t l_1381 = 0xCA8515DCL;
    int32_t l_1392 = 0x058BF399L;
    int32_t l_1393[6] = {0x922C928FL,0x922C928FL,(-1L),(-1L),0x922C928FL,(-1L)};
    uint8_t l_1394 = 249UL;
    union U2 *l_1397 = (void*)0;
    int16_t l_1415 = 0x9FE2L;
    uint8_t l_1435 = 5UL;
    int32_t l_1450 = (-2L);
    const int32_t *l_1508[4] = {&l_1381,&l_1381,&l_1381,&l_1381};
    int i;
    for (g_37 = 0; (g_37 != 29); g_37++)
    { 
        int32_t *l_42 = &g_41.f0;
        const int32_t *l_57 = &g_58;
        const int32_t **l_56 = &l_57;
        union U3 *l_1159 = &g_12;
        int32_t l_1391[7][7] = {{0x4365B3E5L,0x4365B3E5L,0L,0L,0L,(-4L),0x4365B3E5L},{0x4365B3E5L,0L,0x37B7AAE6L,0L,0x36D52CDAL,0x36D52CDAL,0L},{0xF1500516L,3L,0xF1500516L,0L,0L,0xF1500516L,0x059B6412L},{0L,3L,0x13248E1EL,0L,3L,0L,3L},{0xE0DBBFBEL,0L,0L,0xE0DBBFBEL,0x059B6412L,0xF1500516L,0L},{0x36D52CDAL,0x4365B3E5L,0L,0x37B7AAE6L,0L,0x36D52CDAL,0x36D52CDAL},{0x4365B3E5L,0L,0x13248E1EL,0L,0x4365B3E5L,(-4L),0L}};
        uint16_t l_1416 = 65535UL;
        struct S0 *****l_1431 = (void*)0;
        union U1 l_1442 = {5L};
        uint16_t l_1516 = 0x6B90L;
        int i, j;
    }
    return (**g_249);
}



static uint8_t  func_50(const union U1 * p_51, const union U3 * p_52, union U3 * p_53)
{ 
    struct S0 l_1165 = {6L,0xA41D1D8FBA652674LL,1UL,3UL,250UL,1UL};
    int32_t l_1168 = (-1L);
    uint32_t ** const l_1169 = &g_998;
    int32_t *l_1170[7] = {&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1};
    uint32_t l_1171 = 0x5668767EL;
    uint64_t l_1173 = 9UL;
    const int16_t *l_1175 = &g_474;
    const int16_t **l_1174 = &l_1175;
    uint8_t l_1176[1];
    int8_t l_1179 = 2L;
    union U1 l_1183 = {0x2A5750D1L};
    union U3 ****l_1200[1];
    union U3 *****l_1199 = &l_1200[0];
    const int32_t l_1201[3] = {0x1709F19AL,0x1709F19AL,0x1709F19AL};
    uint16_t *l_1202[7] = {&l_1165.f2,&g_700,&l_1165.f2,&l_1165.f2,&g_700,&l_1165.f2,&l_1165.f2};
    int8_t **l_1231 = (void*)0;
    union U2 l_1261 = {0x3905401DL};
    int32_t *l_1282 = &g_37;
    const int8_t l_1294 = 0xB2L;
    uint32_t l_1320 = 0UL;
    uint64_t *l_1371 = &g_536;
    uint64_t * const *l_1370 = &l_1371;
    uint64_t * const **l_1369 = &l_1370;
    struct S0 *l_1372[4][1] = {{&g_41.f3},{&l_1183.f3},{&g_41.f3},{&l_1183.f3}};
    int8_t l_1380 = 0xDFL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1176[i] = 2UL;
    for (i = 0; i < 1; i++)
        l_1200[i] = (void*)0;
    l_1176[0] = ((((safe_mul_func_int8_t_s_s(((**g_249) = (~(safe_mul_func_int8_t_s_s(((l_1165 , l_1165.f3) >= l_1165.f5), (safe_sub_func_int8_t_s_s(l_1165.f1, ((l_1168 = (**g_1111)) > ((((l_1165.f2 & (l_1171 |= ((void*)0 != l_1169))) != g_1172) ^ l_1173) != 0x5BL)))))))), (*g_168))) | 0x1507L) , l_1174) != (void*)0);
    for (g_477 = 27; (g_477 != 43); g_477 = safe_add_func_int64_t_s_s(g_477, 8))
    { 
        uint8_t l_1180 = 0xB5L;
        ++l_1180;
    }
    if (((((*p_53) , l_1183) , (safe_rshift_func_int8_t_s_s(((((~(*g_745)) ^ ((safe_lshift_func_int8_t_s_s((**g_249), (safe_rshift_func_uint16_t_u_s((g_41.f3.f2 |= ((safe_rshift_func_uint16_t_u_u(0xA2CDL, 7)) > (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*g_745), (((safe_rshift_func_int16_t_s_u((l_1199 != (void*)0), (*g_745))) || (*g_998)) <= l_1201[2]))), 5L)))), 2)))) != (*g_338))) <= (-1L)) >= (*g_168)), (**g_249)))) != 0xD60C325AL))
    { 
        return (*g_168);
    }
    else
    { 
        uint8_t l_1204 = 0x4CL;
        int32_t l_1211 = 0x3A536E3FL;
        int8_t *l_1230 = &l_1179;
        int8_t **l_1229[2][4][7] = {{{&g_250[2][2],(void*)0,(void*)0,(void*)0,&g_250[2][2],&g_250[2][2],(void*)0},{&g_250[2][2],&g_250[2][2],&g_250[0][2],&g_250[2][2],&g_250[2][2],&g_250[0][2],&g_250[2][2]},{&l_1230,&l_1230,&g_250[0][2],&g_250[2][2],&g_250[0][0],&g_250[2][2],&g_250[2][2]},{&g_250[2][2],(void*)0,(void*)0,(void*)0,&l_1230,&l_1230,(void*)0}},{{&g_250[0][2],(void*)0,&g_250[2][2],&g_250[2][2],(void*)0,(void*)0,&g_250[2][2]},{&l_1230,(void*)0,&l_1230,&g_250[2][2],(void*)0,&g_250[2][2],&l_1230},{(void*)0,&l_1230,&g_250[2][2],(void*)0,&l_1230,&l_1230,&l_1230},{(void*)0,&g_250[2][2],&l_1230,(void*)0,&g_250[0][0],&g_250[2][2],&g_250[2][2]}}};
        int16_t ***l_1233 = &g_1111;
        const int32_t *l_1242 = (void*)0;
        int32_t l_1250 = 0x712ABCDBL;
        struct S0 ****l_1266 = &g_770;
        struct S0 *****l_1265 = &l_1266;
        union U3 *l_1270 = &g_1271;
        int32_t *l_1283 = &g_79;
        int16_t l_1296 = 0L;
        uint64_t * const **l_1367 = (void*)0;
        int i, j, k;
        if ((l_1204 &= (!((**g_249) = (-1L)))))
        { 
            uint16_t l_1210[1];
            int16_t **l_1226 = &g_1112;
            int32_t l_1260 = (-1L);
            int8_t *l_1262 = &g_1172;
            int16_t l_1264 = 0xCD27L;
            struct S0 *l_1277 = &g_546[0];
            int i;
            for (i = 0; i < 1; i++)
                l_1210[i] = 0x8717L;
            for (g_695 = 0; (g_695 != 20); g_695 = safe_add_func_int8_t_s_s(g_695, 4))
            { 
                uint64_t l_1207 = 0x7C15324B49957FFFLL;
                int8_t **l_1227 = (void*)0;
                int8_t ***l_1228 = (void*)0;
                int8_t ***l_1232 = &l_1231;
                l_1211 |= (((((l_1207 >= ((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((void*)0 != &g_325))) , ((l_1210[0] = ((*g_998) || l_1207)) <= l_1204))) , 0UL) || l_1207) , (void*)0) == &p_51);
                if (((((safe_lshift_func_int16_t_s_s((((**g_249) <= (((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((*g_745) = ((1UL != (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((&g_1112 == l_1226), (((((l_1229[1][1][0] = l_1227) == ((*l_1232) = l_1231)) && (*g_1112)) <= 0xA775L) > l_1211))), l_1210[0])), (*g_745)))) & 0UL)), l_1207)), 1L)), 1)) , 0x0BL) && l_1207)) || g_41.f3.f4), 9)) ^ 1L) & l_1210[0]) & 0UL))
                { 
                    return l_1207;
                }
                else
                { 
                    int16_t ****l_1234 = (void*)0;
                    int16_t ****l_1235 = (void*)0;
                    int16_t ****l_1236 = &l_1233;
                    int32_t l_1237 = 0xAFEA7AF4L;
                    const int32_t *l_1241 = &l_1201[2];
                    const int32_t **l_1240[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1240[i] = &l_1241;
                    (*l_1236) = l_1233;
                    if (l_1237)
                        break;
                    l_1237 ^= (safe_add_func_uint16_t_u_u(0xACA7L, 0xB9DAL));
                    l_1242 = &l_1201[2];
                    if (g_43)
                        goto lbl_1276;
                    return l_1207;
                }
            }
lbl_1276:
            for (l_1211 = 18; (l_1211 != 20); l_1211 = safe_add_func_int32_t_s_s(l_1211, 2))
            { 
                uint64_t *l_1253 = &g_423;
                int32_t l_1263 = 0xB5A242C3L;
                uint64_t l_1269 = 0UL;
                struct S0 l_1274 = {0x925DL,1L,0xC460L,0UL,0x1AL,0x664D36F4136B0851LL};
                struct S0 l_1275[5][4] = {{{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL},{0L,0xB7DB2B7A3B75BB15LL,0x716FL,0xC7L,251UL,18446744073709551609UL},{0xF2BDL,6L,65532UL,4UL,0x70L,1UL},{0xF2BDL,6L,65532UL,4UL,0x70L,1UL}},{{0x3A6EL,0L,0xB253L,248UL,255UL,0UL},{0x3A6EL,0L,0xB253L,248UL,255UL,0UL},{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL},{0xF2BDL,6L,65532UL,4UL,0x70L,1UL}},{{0xE1AFL,0x4E94D4ED8D4D1877LL,0x0A8FL,255UL,0x6BL,18446744073709551614UL},{0L,0xB7DB2B7A3B75BB15LL,0x716FL,0xC7L,251UL,18446744073709551609UL},{0xE1AFL,0x4E94D4ED8D4D1877LL,0x0A8FL,255UL,0x6BL,18446744073709551614UL},{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL}},{{0xE1AFL,0x4E94D4ED8D4D1877LL,0x0A8FL,255UL,0x6BL,18446744073709551614UL},{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL},{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL},{0xE1AFL,0x4E94D4ED8D4D1877LL,0x0A8FL,255UL,0x6BL,18446744073709551614UL}},{{0x3A6EL,0L,0xB253L,248UL,255UL,0UL},{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL},{0xF2BDL,6L,65532UL,4UL,0x70L,1UL},{0xE062L,0x242D23DF564E2FD0LL,0UL,0x39L,0xEFL,0x159C08E5199EB826LL}}};
                int i, j;
                l_1263 = ((((safe_div_func_uint64_t_u_u(((l_1250 |= ((**g_249) = (g_1249 & (l_1242 == (*g_1055))))) != ((((safe_div_func_int32_t_s_s((((*l_1253) = l_1210[0]) , (safe_add_func_uint64_t_u_u(((*l_1253) ^= (0x7FA1L >= (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((l_1260 = l_1210[0]) | ((l_1261 , l_1262) == (*g_249))), l_1263)), l_1210[0])))), 18446744073709551615UL))), l_1263)) == l_1263) > l_1204) == l_1210[0])), l_1210[0])) <= l_1264) >= l_1264) && 0x1CL);
                l_1250 &= (((void*)0 != l_1265) , ((safe_sub_func_int16_t_s_s(l_1269, ((l_1270 = p_53) == (void*)0))) & l_1210[0]));
                for (g_432 = 0; (g_432 <= 52); ++g_432)
                { 
                    if (l_1264)
                        break;
                    l_1260 &= ((void*)0 == &g_419[1]);
                }
                l_1275[0][0] = (l_1274 = g_41.f3);
            }
            (*l_1277) = l_1165;
            for (g_1090 = 0; (g_1090 <= 54); ++g_1090)
            { 
                const int8_t l_1287 = 0x8DL;
                for (g_41.f3.f3 = 0; (g_41.f3.f3 == 35); g_41.f3.f3 = safe_add_func_uint16_t_u_u(g_41.f3.f3, 4))
                { 
                    int32_t l_1295[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1295[i][j] = 0x126615FCL;
                    }
                    (*g_101) = (l_1283 = l_1282);
                    l_1260 &= (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s((((l_1287 >= ((void*)0 != (*l_1265))) | (l_1295[0][1] = (((*g_168) <= ((safe_sub_func_uint32_t_u_u(((*g_102) , (safe_mod_func_int16_t_s_s((((*g_745) ^= 0UL) || ((l_1287 , l_1294) != l_1287)), l_1295[0][1]))), l_1210[0])) > l_1296)) && 0xB8L))) , l_1287))) | 8UL), (-7L)));
                    (*g_101) = &l_1211;
                }
            }
        }
        else
        { 
            int8_t l_1297 = 0x34L;
            uint8_t *l_1315[2][5][2] = {{{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]}},{{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]},{&g_1046[2][5],&g_1046[2][5]}}};
            int32_t l_1316 = 0x7197B2ADL;
            uint64_t * const ***l_1368[1][5][7] = {{{&l_1367,&g_297,&g_297,&l_1367,&g_297,&g_297,&l_1367},{&g_297,&l_1367,&g_297,&g_297,&l_1367,&g_297,&g_297},{&l_1367,&g_297,&l_1367,&g_297,&g_297,&l_1367,&g_297},{&g_297,(void*)0,(void*)0,&g_297,(void*)0,(void*)0,&g_297},{&g_297,&g_297,&g_297,&g_297,&g_297,&g_297,&g_297}}};
            int i, j, k;
            g_1298++;
            if (((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_1297, (safe_mul_func_int16_t_s_s((*g_1112), (safe_lshift_func_int16_t_s_s((**g_1111), 9)))))), (safe_mul_func_uint8_t_u_u((l_1316 |= ((g_245[4][2] , l_1297) ^ (*g_745))), (safe_rshift_func_int16_t_s_s(((l_1297 > l_1297) >= (*l_1283)), (*g_1112))))))), (**g_249))), (**g_249))) == 0UL))
            { 
                int16_t l_1319 = 0L;
                ++l_1320;
                (*l_1283) &= (l_1316 & (*l_1282));
            }
            else
            { 
                uint64_t l_1339 = 0xB1A98F0D7299B8B2LL;
                union U3 l_1340 = {{0x27EDL,1L,0xB5BAL,0xCAL,0x3FL,0UL}};
                if (((*g_105) , (safe_lshift_func_int8_t_s_u((*l_1283), (((((*g_745)--) , (((((*g_1112) && (safe_mul_func_int8_t_s_s(((*l_1283) ^ ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(0x863FDB9F2ABDA8F0LL, (safe_lshift_func_uint8_t_u_u((*l_1282), (safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(l_1297, l_1339)), (*l_1283))))))) | (-1L)), (**g_249))) != l_1297)), (*g_168)))) , l_1339) >= 65535UL) == l_1339)) , l_1316) & 246UL)))))
                { 
                    (*l_1283) |= ((l_1340 , (safe_sub_func_int32_t_s_s(0x9D2C8552L, l_1340.f0.f0))) || (*g_168));
                    return l_1340.f0.f1;
                }
                else
                { 
                    (*l_1283) &= 0xFBEDA966L;
                }
            }
            for (l_1179 = (-4); (l_1179 >= 15); l_1179++)
            { 
                struct S0 l_1352 = {0x8E25L,0xA9DF13E6C8087DF4LL,65534UL,0xAEL,0x51L,18446744073709551608UL};
                uint64_t *l_1353 = &l_1165.f5;
                int32_t l_1356 = 0L;
                l_1316 = (safe_div_func_uint8_t_u_u(((!(0x6EL > (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((l_1352 , ((++(*l_1353)) == ((l_1356 = (*g_168)) < (((~(safe_sub_func_uint64_t_u_u((l_1352.f3 , (*l_1283)), ((*l_1282) && (safe_mul_func_int8_t_s_s((~(*l_1283)), l_1316)))))) >= (*g_168)) > l_1316)))), l_1352.f5)) < l_1352.f5), (*g_168))))) , (*l_1282)), 0x70L));
            }
            for (g_1249 = 1; (g_1249 >= 0); g_1249 -= 1)
            { 
                if (l_1316)
                { 
                    int32_t l_1363 = 1L;
                    if (l_1363)
                        break;
                    if (l_1297)
                        break;
                }
                else
                { 
                    uint16_t l_1366 = 0UL;
                    l_1366 = (((*g_745) ^= (l_1315[0][4][0] != (void*)0)) > (safe_rshift_func_uint16_t_u_s(g_432, 1)));
                }
                return l_1297;
            }
            l_1369 = l_1367;
        }
    }
    g_546[0] = (l_1165 = l_1165);
    for (g_41.f3.f3 = 0; (g_41.f3.f3 > 53); g_41.f3.f3 = safe_add_func_int32_t_s_s(g_41.f3.f3, 5))
    { 
        struct S0 l_1375[4] = {{0x9581L,0L,65535UL,0x4AL,1UL,0x4601BC17381F1DF0LL},{0x9581L,0L,65535UL,0x4AL,1UL,0x4601BC17381F1DF0LL},{0x9581L,0L,65535UL,0x4AL,1UL,0x4601BC17381F1DF0LL},{0x9581L,0L,65535UL,0x4AL,1UL,0x4601BC17381F1DF0LL}};
        union U2 *l_1377 = &l_1261;
        union U2 **l_1376 = &l_1377;
        int32_t l_1378 = 0x379CDC41L;
        int i;
        l_1375[3] = l_1375[0];
        (*l_1376) = &g_245[0][3];
        if (l_1375[0].f1)
            break;
        l_1378 = (((**l_1169) = (l_1375[0].f3 & l_1375[0].f0)) < 3L);
        for (g_1249 = 6; (g_1249 >= 0); g_1249 -= 1)
        { 
            struct S0 l_1379 = {0x9B4BL,-1L,0UL,1UL,0xE2L,18446744073709551615UL};
            l_1379 = l_1379;
            return l_1375[0].f5;
        }
    }
    return l_1380;
}



static const union U1 * func_54(const int32_t * p_55)
{ 
    struct S0 *l_59 = (void*)0;
    struct S0 *l_60[3];
    union U3 l_66 = {{0xBC59L,0x58D81C91930E88FELL,0xD6E5L,0x1AL,255UL,1UL}};
    int32_t l_76 = 0L;
    union U1 *l_77 = &g_41;
    int32_t *l_78 = &g_79;
    uint16_t l_80 = 0x7B3FL;
    int32_t l_81[2];
    int8_t *l_82 = &g_83[6];
    union U3 *l_108[2];
    uint16_t l_186[7][5] = {{0x1146L,0x1146L,0x2487L,65529UL,0x2487L},{0x1146L,0x1146L,0x2487L,65529UL,0x2487L},{0x1146L,0x1146L,0x2487L,65529UL,0x2487L},{0x1146L,0x1146L,0x2487L,65529UL,0x2487L},{0x1146L,0x1146L,0x2487L,65529UL,0x2487L},{0x1146L,0x1146L,0x2487L,65529UL,0x2487L},{0x1146L,0x1146L,0x2487L,65529UL,0x2487L}};
    uint16_t l_241 = 1UL;
    union U2 *l_244 = &g_245[4][2];
    const int64_t *l_336 = &g_12.f0.f1;
    uint64_t *l_359 = (void*)0;
    uint64_t **l_358 = &l_359;
    uint8_t l_409[5][2][5] = {{{255UL,0xDDL,255UL,0UL,255UL},{0x72L,0x72L,0UL,0x2EL,0x47L}},{{0xC6L,0UL,2UL,0UL,0xC6L},{0x47L,0x2EL,0UL,0x72L,0x72L}},{{255UL,0UL,255UL,0xDDL,255UL},{0x47L,0x72L,0x2EL,0x2EL,0x72L}},{{0xC6L,0xDDL,2UL,0xDDL,0xC6L},{0x72L,0x2EL,0x2EL,0x72L,0x47L}},{{255UL,0xDDL,255UL,0UL,255UL},{0x72L,0x72L,0UL,0x2EL,0x47L}}};
    int32_t *l_435 = (void*)0;
    int32_t *l_436 = &l_76;
    int32_t *l_437[4];
    int16_t l_438 = 0xCE26L;
    uint8_t *l_451 = &g_171;
    uint32_t l_470 = 0x98DB1958L;
    union U3 ***l_525 = (void*)0;
    union U3 ****l_524 = &l_525;
    uint64_t l_726 = 9UL;
    uint64_t l_779 = 0UL;
    struct S0 *** const *l_815[1];
    union U2 l_970 = {0xC7BFFAFBL};
    int16_t l_1040[7][1] = {{0x6C8AL},{0xB5ECL},{0xB5ECL},{0x6C8AL},{0xB5ECL},{0xB5ECL},{0x6C8AL}};
    int8_t l_1141 = 2L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_60[i] = &g_41.f3;
    for (i = 0; i < 2; i++)
        l_81[i] = 0x26F5D9AEL;
    for (i = 0; i < 2; i++)
        l_108[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_437[i] = &g_41.f0;
    for (i = 0; i < 1; i++)
        l_815[i] = (void*)0;
    g_41.f3 = g_12.f0;
    if (((safe_rshift_func_int8_t_s_u(g_41.f3.f2, 7)) ^ (g_43 && (+(safe_mod_func_int32_t_s_s((l_66 , (safe_mul_func_int8_t_s_s(((*l_82) = (((l_66.f0.f2 > (g_12.f0.f5 & (safe_rshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((!((*l_78) = (((l_76 &= 0xDCE5F149L) , l_77) != l_77))), g_41.f3.f2)) >= g_12.f0.f1) | l_80), l_81[1])) != l_81[0]), 7)))) ^ g_12.f0.f3) , (*l_78))), g_43))), 1UL))))))
    { 
        uint32_t l_96[7] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
        union U3 *l_107[1];
        const union U1 *l_119[2];
        const uint8_t *l_149 = &g_106.f0.f3;
        int32_t l_187 = (-1L);
        struct S0 l_246 = {0xAFE1L,-4L,0x2505L,0x59L,0x7DL,0xC541B5795B121062LL};
        int i;
        for (i = 0; i < 1; i++)
            l_107[i] = &g_12;
        for (i = 0; i < 2; i++)
            l_119[i] = &g_41;
        for (g_79 = 0; (g_79 < 7); ++g_79)
        { 
            struct S0 l_86[4][7] = {{{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL}},{{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL}},{{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL}},{{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL},{0x5DA0L,0xE902BA9A64B00F59LL,0xB917L,0xE4L,0x41L,0x3AA7A66B3E629931LL}}};
            int32_t l_90 = 0xFDD8C90CL;
            uint32_t *l_93 = (void*)0;
            uint32_t *l_94[4][5][7] = {{{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,(void*)0,(void*)0,&g_95,&g_95,(void*)0,&g_95},{&g_95,&g_95,&g_95,(void*)0,&g_95,&g_95,(void*)0},{&g_95,&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,(void*)0,&g_95,(void*)0,(void*)0},{&g_95,&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0,(void*)0},{(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0}},{{(void*)0,(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95},{(void*)0,(void*)0,&g_95,(void*)0,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0,&g_95}},{{&g_95,(void*)0,(void*)0,&g_95,&g_95,&g_95,&g_95},{&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95}}};
            union U3 *l_104 = &g_12;
            union U3 **l_103[1][5][4] = {{{&l_104,&l_104,&l_104,&l_104},{&l_104,&l_104,&l_104,&l_104},{&l_104,&l_104,&l_104,&l_104},{&l_104,&l_104,&l_104,&l_104},{&l_104,&l_104,&l_104,&l_104}}};
            union U1 *l_111 = &g_41;
            int8_t *l_133 = &g_83[6];
            const union U2 l_142 = {-9L};
            uint64_t *l_218 = (void*)0;
            uint64_t **l_217 = &l_218;
            int32_t l_222 = 0xCBCD5FB0L;
            int i, j, k;
        }
        l_244 = (void*)0;
        l_246 = g_41.f3;
        (*l_78) = (safe_sub_func_int16_t_s_s((g_249 != ((safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(0xA56CL, 10)) >= 18446744073709551611UL), (((safe_sub_func_int8_t_s_s((9L && ((**g_249) ^= (-7L))), (*g_168))) != (safe_rshift_func_uint8_t_u_s((&g_102 != &p_55), l_246.f5))) && l_96[6]))), l_246.f4)) , &g_250[2][0])), g_95));
    }
    else
    { 
        const int32_t l_275[2][2] = {{0x17869A76L,0x17869A76L},{0x17869A76L,0x17869A76L}};
        int8_t l_383 = 0xFFL;
        struct S0 l_388[5][2] = {{{-1L,0x1E97ADAF23B5687ELL,0xE505L,0x5EL,1UL,18446744073709551609UL},{-1L,0L,65535UL,255UL,0xB7L,0xBA8AB6190955ED37LL}},{{0L,0xDFF2476AF6C5CB49LL,8UL,0x18L,0x9AL,1UL},{-1L,0x1E97ADAF23B5687ELL,0xE505L,0x5EL,1UL,18446744073709551609UL}},{{0xC70BL,0xDFEE10322254527ALL,0x9AF7L,255UL,255UL,18446744073709551609UL},{0xC70BL,0xDFEE10322254527ALL,0x9AF7L,255UL,255UL,18446744073709551609UL}},{{0xC70BL,0xDFEE10322254527ALL,0x9AF7L,255UL,255UL,18446744073709551609UL},{-1L,0x1E97ADAF23B5687ELL,0xE505L,0x5EL,1UL,18446744073709551609UL}},{{0L,0xDFF2476AF6C5CB49LL,8UL,0x18L,0x9AL,1UL},{-1L,0L,65535UL,255UL,0xB7L,0xBA8AB6190955ED37LL}}};
        int32_t l_405 = 0xDED63718L;
        int32_t l_414 = 0x1985595EL;
        int32_t l_415 = 0xB1BDB285L;
        int32_t l_416 = 0xC57303B4L;
        int32_t l_417 = 1L;
        int32_t l_418 = 0x6B6F3BF3L;
        int32_t *l_426 = &l_405;
        int32_t *l_427 = &l_405;
        int32_t *l_428 = &g_41.f1;
        int32_t *l_429 = (void*)0;
        int32_t *l_430[5][1] = {{(void*)0},{&g_41.f1},{(void*)0},{&g_41.f1},{(void*)0}};
        int i, j;
        for (g_123 = (-27); (g_123 != 9); g_123 = safe_add_func_uint32_t_u_u(g_123, 9))
        { 
            int8_t **l_267 = (void*)0;
            int32_t l_284 = 0x6F4B5C2CL;
            uint32_t *l_285 = &g_286;
            uint8_t *l_287 = &g_41.f3.f3;
            (*l_78) = (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((l_267 == &g_250[2][2]), ((safe_sub_func_int8_t_s_s((**g_249), ((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((((((*l_287) &= (safe_sub_func_int8_t_s_s(l_275[1][0], (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((*l_285) ^= ((((safe_rshift_func_int16_t_s_u(g_12.f0.f2, (((safe_mul_func_int8_t_s_s((l_284 & ((*l_78) >= 65535UL)), 0x4EL)) < (*l_78)) >= 0x5DEC78EEE85F2522LL))) , (-7L)) >= (**g_101)) && (*g_102))), l_275[0][1])), 0x120846C0L))))) ^ 1L) <= (*l_78)) < 0x10836F5FL), l_284)))) & 0x70L))) == 0xE9E9086AL))) , &g_105) == (void*)0), 8UL));
            if ((*l_78))
                continue;
            l_81[1] &= ((((safe_mul_func_int8_t_s_s((l_275[0][0] && ((void*)0 != &l_78)), (!0xE9L))) == (l_284 <= ((*l_78) || (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((g_83[3] != (-4L)) & 0x0B0314DCBCBF5231LL), (*l_78))), l_275[1][1]))))) , g_297) == (void*)0);
        }
        if ((safe_rshift_func_int16_t_s_u(0x7CFFL, 11)))
        { 
            union U3 **l_320 = &l_108[1];
            int32_t l_333[2];
            int32_t l_340 = 0L;
            int64_t *l_381 = &g_342[1];
            uint16_t *l_382 = &g_41.f3.f2;
            uint64_t * const l_394 = &g_395;
            uint64_t * const *l_393 = &l_394;
            int i;
            for (i = 0; i < 2; i++)
                l_333[i] = 0x13F7A610L;
            for (g_286 = 0; (g_286 < 5); ++g_286)
            { 
                union U3 **l_302 = &l_108[0];
                (*l_302) = &g_106;
                if (l_275[1][0])
                    break;
            }
            for (g_41.f3.f3 = (-11); (g_41.f3.f3 != 57); g_41.f3.f3 = safe_add_func_uint32_t_u_u(g_41.f3.f3, 1))
            { 
                uint64_t l_309 = 1UL;
                union U3 ***l_321 = (void*)0;
                union U3 ***l_322 = (void*)0;
                union U3 **l_324 = &l_108[0];
                union U3 ***l_323[3];
                uint16_t *l_329 = &l_186[4][1];
                int64_t *l_332[6][6] = {{&g_41.f3.f1,(void*)0,&g_41.f3.f1,(void*)0,(void*)0,&g_41.f3.f1},{(void*)0,(void*)0,&g_41.f3.f1,(void*)0,&g_41.f3.f1,&g_41.f3.f1},{(void*)0,(void*)0,(void*)0,(void*)0,&g_41.f3.f1,&g_41.f3.f1},{&g_41.f3.f1,(void*)0,(void*)0,(void*)0,(void*)0,&g_41.f3.f1},{&g_41.f3.f1,(void*)0,&g_41.f3.f1,(void*)0,(void*)0,&g_41.f3.f1},{(void*)0,(void*)0,&g_41.f3.f1,(void*)0,&g_41.f3.f1,&g_41.f3.f1}};
                int64_t **l_335 = &g_334;
                const int64_t **l_337[7][5] = {{&l_336,&l_336,&l_336,&l_336,(void*)0},{&l_336,&l_336,&l_336,&l_336,&l_336},{(void*)0,&l_336,&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336,&l_336,&l_336}};
                uint16_t *l_341[1][2];
                int32_t l_343[7];
                uint64_t **l_360 = &l_359;
                const uint16_t l_364 = 65532UL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_323[i] = &l_324;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_341[i][j] = (void*)0;
                }
                for (i = 0; i < 7; i++)
                    l_343[i] = 0xF6F25CD8L;
                for (l_76 = 0; l_76 < 2; l_76 += 1)
                {
                    l_81[l_76] = 0xA12F1B8EL;
                }
                for (g_95 = 0; (g_95 != 40); g_95 = safe_add_func_int16_t_s_s(g_95, 5))
                { 
                    int32_t *l_307 = &g_79;
                    int32_t *l_308[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_308[i] = (void*)0;
                    l_309++;
                }
            }
            (*l_78) = (l_275[1][0] | 0x55L);
            (*l_78) = (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((((*l_382) |= (((((safe_sub_func_uint8_t_u_u(255UL, (*l_78))) , (safe_sub_func_int64_t_s_s((((((safe_mul_func_int8_t_s_s((((*l_78) , (safe_rshift_func_uint16_t_u_u((l_333[1] | g_12.f0.f5), (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(((*l_381) = ((*l_78) != l_333[1])), 0x911EC70156CE7B1CLL)), l_275[1][0])) , (void*)0) == (void*)0)))) && l_275[1][0]), l_333[1])) == l_333[1]) | (*g_168)) , &g_41) != &g_41), (*l_78)))) <= l_275[0][1]) < l_333[1]) < g_171)) & l_340) | (*l_78)), g_171)), l_383));
            for (g_41.f3.f3 = 8; (g_41.f3.f3 < 43); g_41.f3.f3 = safe_add_func_int64_t_s_s(g_41.f3.f3, 3))
            { 
                int32_t l_392 = (-1L);
                for (l_383 = 0; (l_383 != 12); l_383 = safe_add_func_int8_t_s_s(l_383, 4))
                { 
                    uint32_t *l_389 = &g_286;
                    uint32_t *l_396 = &g_123;
                    l_388[0][0] = l_388[0][0];
                    if ((*l_78))
                        break;
                    (*l_78) = ((**g_325) , ((l_392 = ((*l_389)++)) & (((l_393 = (void*)0) == (void*)0) <= ((*l_396) = 0x9082D228L))));
                }
            }
        }
        else
        { 
            int32_t l_422[5][2] = {{0x063FD6FBL,0x063FD6FBL},{0x79076487L,0x063FD6FBL},{0x063FD6FBL,0x79076487L},{0x063FD6FBL,0x063FD6FBL},{0x79076487L,0x063FD6FBL}};
            int i, j;
            if ((**g_101))
            { 
                uint16_t l_406 = 0UL;
                for (g_395 = 0; (g_395 <= 2); g_395 += 1)
                { 
                    int32_t *l_397 = &l_81[1];
                    int32_t *l_398 = &l_81[1];
                    int32_t *l_399 = &g_41.f0;
                    int32_t *l_400 = &l_81[1];
                    int32_t *l_401 = &l_81[1];
                    int32_t l_402[2][2][2] = {{{8L,8L},{8L,8L}},{{8L,8L},{8L,8L}}};
                    int32_t *l_403 = &g_79;
                    int32_t *l_404[6] = {&l_81[0],&l_81[0],&l_81[1],&l_81[0],&l_81[0],&l_81[1]};
                    int i, j, k;
                    --l_406;
                    ++l_409[4][0][1];
                }
            }
            else
            { 
                int32_t *l_412 = (void*)0;
                int32_t *l_413[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_413[i] = &g_41.f1;
                ++g_419[0];
                g_423++;
            }
        }
        g_432--;
    }
    (*g_101) = &l_81[1];
    --g_439;
    return (*g_606);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12.f0.f0, "g_12.f0.f0", print_hash_value);
    transparent_crc(g_12.f0.f1, "g_12.f0.f1", print_hash_value);
    transparent_crc(g_12.f0.f2, "g_12.f0.f2", print_hash_value);
    transparent_crc(g_12.f0.f3, "g_12.f0.f3", print_hash_value);
    transparent_crc(g_12.f0.f4, "g_12.f0.f4", print_hash_value);
    transparent_crc(g_12.f0.f5, "g_12.f0.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_106.f0.f0, "g_106.f0.f0", print_hash_value);
    transparent_crc(g_106.f0.f1, "g_106.f0.f1", print_hash_value);
    transparent_crc(g_106.f0.f2, "g_106.f0.f2", print_hash_value);
    transparent_crc(g_106.f0.f3, "g_106.f0.f3", print_hash_value);
    transparent_crc(g_106.f0.f4, "g_106.f0.f4", print_hash_value);
    transparent_crc(g_106.f0.f5, "g_106.f0.f5", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_245[i][j].f0, "g_245[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_342[i], "g_342[i]", print_hash_value);

    }
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_419[i], "g_419[i]", print_hash_value);

    }
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_455[i][j], "g_455[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_473[i][j], "g_473[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_546[i].f0, "g_546[i].f0", print_hash_value);
        transparent_crc(g_546[i].f1, "g_546[i].f1", print_hash_value);
        transparent_crc(g_546[i].f2, "g_546[i].f2", print_hash_value);
        transparent_crc(g_546[i].f3, "g_546[i].f3", print_hash_value);
        transparent_crc(g_546[i].f4, "g_546[i].f4", print_hash_value);
        transparent_crc(g_546[i].f5, "g_546[i].f5", print_hash_value);

    }
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1046[i][j], "g_1046[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1172, "g_1172", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    transparent_crc(g_1271.f0.f0, "g_1271.f0.f0", print_hash_value);
    transparent_crc(g_1271.f0.f1, "g_1271.f0.f1", print_hash_value);
    transparent_crc(g_1271.f0.f2, "g_1271.f0.f2", print_hash_value);
    transparent_crc(g_1271.f0.f3, "g_1271.f0.f3", print_hash_value);
    transparent_crc(g_1271.f0.f4, "g_1271.f0.f4", print_hash_value);
    transparent_crc(g_1271.f0.f5, "g_1271.f0.f5", print_hash_value);
    transparent_crc(g_1298, "g_1298", print_hash_value);
    transparent_crc(g_1510, "g_1510", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1695[i], "g_1695[i]", print_hash_value);

    }
    transparent_crc(g_1739, "g_1739", print_hash_value);
    transparent_crc(g_1903, "g_1903", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1978[i][j][k], "g_1978[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2120, "g_2120", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
