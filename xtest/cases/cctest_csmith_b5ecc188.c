// SPDX-License-Identifier: MIT
// cctest_csmith_b5ecc188.c --- cctest case csmith_b5ecc188 (csmith seed 3052192136)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x50536828 */
/* @exp_ticks 0x6aaf */

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

// Options:   -s 3052192136 -o /tmp/csmith_gen_6x1sxhdz/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   const int16_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   const uint64_t  f3;
   uint32_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   int32_t  f1;
   struct S0  f2;
};

union U3 {
   const uint8_t  f0;
   uint16_t  f1;
   struct S1  f2;
};


static int32_t g_2 = 7L;
static int32_t g_6[2][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L}};
static int32_t g_7 = 0x83674579L;
static int32_t g_8 = 1L;
static union U3 g_22 = {0x0FL};
static struct S1 g_41 = {-4L,6UL,0xC0C8L,18446744073709551615UL,4294967289UL,-1L};
static uint16_t g_85 = 0UL;
static uint8_t *g_97 = &g_41.f1;
static const uint8_t *g_136 = &g_22.f0;
static const uint8_t **g_135 = &g_136;
static uint32_t g_138 = 1UL;
static uint64_t g_159 = 0UL;
static int8_t g_166[2] = {0x68L,0x68L};
static union U2 g_187 = {0xB184C14CL};
static int32_t *g_198 = &g_41.f0;
static int64_t g_225[2] = {0xBDD16FCC1B0773BALL,0xBDD16FCC1B0773BALL};
static uint64_t g_268 = 0x9DB44EA9E6CEF8C5LL;
static int64_t g_284 = 0x0E5BF4506700EAA7LL;
static uint64_t *g_342 = &g_159;
static uint64_t **g_341 = &g_342;
static int32_t g_371[7][3] = {{0x1A857485L,0x1A857485L,0x1A857485L},{0x60943D25L,0x60943D25L,0x60943D25L},{0x1A857485L,0x1A857485L,0x1A857485L},{0x60943D25L,0x60943D25L,0x60943D25L},{0x1A857485L,0x1A857485L,0x1A857485L},{0x60943D25L,0x60943D25L,0x60943D25L},{0x1A857485L,0x1A857485L,0x1A857485L}};
static int32_t *g_401 = &g_371[2][2];
static int32_t **g_400 = &g_401;
static struct S0 g_405 = {1L,0x38464F59L,0xB0979CFFL,0xB184F4DFL,8L};
static int32_t g_439 = 0xD534E740L;
static uint64_t g_474 = 0xA0D40FF2E7E4AFB5LL;
static uint64_t g_503 = 0xE39DB4A787EC15DDLL;
static uint8_t g_515[2] = {0x01L,0x01L};
static int16_t g_521[4][7][1] = {{{(-1L)},{1L},{(-1L)},{1L},{0x96D9L},{1L},{(-1L)}},{{1L},{(-1L)},{1L},{0x96D9L},{1L},{0x96D9L},{0xF25BL}},{{0x96D9L},{1L},{0x79D2L},{1L},{0x96D9L},{0xF25BL},{0x96D9L}},{{1L},{0x79D2L},{1L},{0x96D9L},{0xF25BL},{0x96D9L},{1L}}};
static uint16_t g_534[5] = {0xEDB3L,0xEDB3L,0xEDB3L,0xEDB3L,0xEDB3L};
static const int16_t *g_548 = (void*)0;
static const int16_t **g_547[1] = {&g_548};
static struct S1 g_585[2] = {{0x0068B44DL,0UL,65527UL,0UL,0xAB2D90A1L,0x3BC88BFEL},{0x0068B44DL,0UL,65527UL,0UL,0xAB2D90A1L,0x3BC88BFEL}};
static int32_t g_713[2] = {1L,1L};
static int64_t g_749[3][1] = {{5L},{5L},{5L}};
static int32_t g_750 = 9L;
static uint64_t g_752 = 0x6980F66EA4652A49LL;
static int8_t *g_766 = &g_166[1];
static int8_t **g_765[7][6][2] = {{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}},{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}},{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}},{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}},{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}},{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}},{{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766},{&g_766,&g_766}}};
static struct S1 *g_774 = (void*)0;
static struct S1 **g_773 = &g_774;
static const uint16_t g_775 = 65534UL;
static struct S1 *g_787 = &g_585[0];
static int32_t g_793 = (-3L);
static int8_t g_794 = 0L;
static uint64_t g_795 = 0x5195C2867B70134CLL;
static uint8_t *g_827[3] = {&g_585[1].f1,&g_585[1].f1,&g_585[1].f1};
static uint32_t g_829 = 18446744073709551608UL;
static struct S0 *g_860 = (void*)0;
static struct S0 **g_859 = &g_860;
static int16_t g_922 = 1L;
static uint16_t g_923 = 0x0417L;
static int32_t g_930 = 0x4F275445L;
static int16_t g_961 = (-5L);
static uint8_t g_962 = 0x7DL;
static int32_t g_1056 = (-7L);
static uint8_t g_1064 = 0x4FL;
static uint16_t g_1067[6][2][4] = {{{0x2EDFL,0x38EDL,65535UL,0x203CL},{0xAC83L,65535UL,0x6250L,0UL}},{{0x502BL,0xE02AL,0x502BL,0xCDA7L},{0x6EE9L,65534UL,65535UL,9UL}},{{65535UL,65535UL,9UL,65534UL},{65535UL,65535UL,9UL,0x2EDFL}},{{65535UL,65535UL,65535UL,0xAC83L},{0x6EE9L,0x6250L,0x502BL,0x502BL}},{{0x502BL,0x502BL,0x6250L,0x6EE9L},{0xAC83L,65535UL,65535UL,65535UL}},{{0x2EDFL,9UL,65535UL,65535UL},{65534UL,9UL,65535UL,65535UL}}};
static const int8_t **g_1087[2] = {(void*)0,(void*)0};
static const uint64_t *g_1129 = &g_41.f3;
static const uint64_t **g_1128 = &g_1129;
static const uint64_t ***g_1127 = &g_1128;
static const uint64_t ****g_1126 = &g_1127;
static union U2 g_1152 = {8UL};
static int64_t g_1189 = 1L;
static uint32_t g_1190 = 8UL;
static uint32_t g_1196 = 0x9E4A9134L;
static const union U2 g_1296[4] = {{0x33378E84L},{0x33378E84L},{0x33378E84L},{0x33378E84L}};
static int16_t *g_1322[3][1][1] = {{{&g_521[1][6][0]}},{{&g_521[1][6][0]}},{{&g_521[1][6][0]}}};
static uint32_t g_1333 = 0xC5E6BC17L;
static union U2 g_1360 = {0x9BA79100L};
static union U2 *g_1359[4][1][5] = {{{&g_187,&g_187,&g_1360,&g_187,&g_187}},{{&g_1152,&g_187,&g_1152,&g_1152,&g_187}},{{&g_187,&g_1152,&g_1152,&g_187,&g_1152}},{{&g_187,&g_187,&g_187,&g_1152,&g_1152}}};
static int8_t g_1374 = 0xFEL;
static uint8_t g_1376 = 249UL;
static uint64_t g_1395 = 18446744073709551615UL;
static int64_t g_1410 = 0x2A3E3A67EFAD95DELL;
static int32_t g_1411[1] = {(-1L)};
static const struct S0 *g_1454[5] = {&g_405,&g_405,&g_405,&g_405,&g_405};
static uint32_t *g_1458 = &g_829;
static const int8_t *g_1464 = &g_794;
static int32_t * const **g_1558 = (void*)0;
static int32_t * const ***g_1557 = &g_1558;
static int32_t **g_1616[3][5][5] = {{{&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,(void*)0,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,(void*)0,&g_198,&g_198}},{{&g_198,&g_198,&g_198,&g_198,(void*)0},{&g_198,&g_198,&g_198,&g_198,(void*)0},{&g_198,&g_198,&g_198,&g_198,(void*)0},{&g_198,&g_198,&g_198,(void*)0,&g_198},{(void*)0,&g_198,&g_198,&g_198,&g_198}},{{&g_198,&g_198,(void*)0,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198},{(void*)0,(void*)0,&g_198,(void*)0,&g_198},{&g_198,&g_198,&g_198,&g_198,(void*)0},{&g_198,&g_198,&g_198,&g_198,&g_198}}};
static uint32_t *g_1645 = (void*)0;
static uint32_t **g_1644 = &g_1645;
static uint32_t **g_1668 = &g_1458;
static struct S1 * const *** const g_1727 = (void*)0;
static struct S1 * const *** const *g_1726 = &g_1727;
static uint64_t *****g_1757 = (void*)0;
static uint16_t g_1800 = 0xD709L;
static struct S1 * const **g_1808 = (void*)0;
static struct S1 * const ***g_1807[3][4][7] = {{{&g_1808,(void*)0,&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{(void*)0,&g_1808,&g_1808,(void*)0,(void*)0,&g_1808,&g_1808},{(void*)0,&g_1808,&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,(void*)0,&g_1808,&g_1808,&g_1808,&g_1808,&g_1808}},{{&g_1808,&g_1808,(void*)0,&g_1808,(void*)0,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,(void*)0,&g_1808,&g_1808,(void*)0},{&g_1808,&g_1808,&g_1808,&g_1808,(void*)0,&g_1808,&g_1808},{(void*)0,&g_1808,&g_1808,&g_1808,&g_1808,(void*)0,&g_1808}},{{(void*)0,&g_1808,&g_1808,(void*)0,&g_1808,&g_1808,(void*)0},{&g_1808,&g_1808,&g_1808,&g_1808,(void*)0,&g_1808,&g_1808},{&g_1808,(void*)0,&g_1808,(void*)0,&g_1808,&g_1808,(void*)0},{(void*)0,&g_1808,&g_1808,(void*)0,&g_1808,&g_1808,&g_1808}}};
static int64_t g_1855 = 0xC6C99604434EAD4ELL;
static struct S1 g_1883 = {2L,249UL,0x055AL,18446744073709551606UL,0x1346EB03L,0L};
static uint8_t **g_1927[4][5] = {{&g_97,(void*)0,&g_827[0],&g_827[0],(void*)0},{&g_97,(void*)0,&g_827[0],&g_827[0],(void*)0},{&g_97,(void*)0,&g_827[0],&g_827[0],(void*)0},{&g_97,(void*)0,&g_827[0],&g_827[0],(void*)0}};
static uint8_t ***g_1926[5] = {&g_1927[3][1],&g_1927[3][1],&g_1927[3][1],&g_1927[3][1],&g_1927[3][1]};
static struct S1 *g_1980[1][3] = {{(void*)0,(void*)0,(void*)0}};
static int32_t *g_2002 = &g_41.f0;
static int64_t g_2045[3] = {1L,1L,1L};



static uint32_t  func_1(void);
static int32_t * func_9(const int32_t * p_10);
static int16_t  func_23(uint8_t  p_24);
static int8_t  func_25(int16_t  p_26);
static int64_t  func_27(union U3  p_28, uint32_t  p_29, const uint8_t  p_30, uint64_t  p_31, union U2  p_32);
static uint64_t  func_34(uint32_t  p_35, int32_t * p_36, int32_t * p_37, struct S1  p_38, const uint16_t  p_39);
static struct S1  func_42(uint16_t  p_43, uint8_t  p_44);
static uint32_t  func_47(int32_t * p_48, int32_t  p_49, const uint32_t  p_50);




static uint32_t  func_1(void)
{ 
    uint16_t l_1799 = 0xCA54L;
    uint32_t ** const l_1823 = &g_1458;
    int32_t l_1844 = 0xE2033BD1L;
    int32_t ***l_1854[6][1] = {{&g_1616[1][4][1]},{&g_1616[1][4][1]},{&g_1616[1][4][1]},{&g_1616[1][4][1]},{&g_1616[1][4][1]},{&g_1616[1][4][1]}};
    int32_t *l_1871 = (void*)0;
    struct S1 l_1911 = {0xFA4C3A40L,0x6AL,1UL,0xC97790F94ED6DD51LL,0UL,1L};
    union U2 **l_2013 = &g_1359[1][0][4];
    int i, j;
    for (g_2 = 0; (g_2 != 16); g_2 = safe_add_func_uint8_t_u_u(g_2, 8))
    { 
        int32_t l_5[2][7][4] = {{{(-1L),0xC285CE96L,0xC70AB227L,(-1L)},{(-2L),4L,0xC63C4078L,0xC285CE96L},{4L,9L,0xC63C4078L,0xC63C4078L},{(-2L),(-2L),0xC70AB227L,0L},{(-1L),0xB28ED4A5L,0L,0xC285CE96L},{0L,0xC285CE96L,4L,0L},{(-2L),0xC285CE96L,0x0C544087L,0xC285CE96L}},{{0xC285CE96L,0xB28ED4A5L,0xC63C4078L,0L},{4L,(-2L),4L,0xC63C4078L},{(-1L),9L,(-3L),0xC285CE96L},{(-1L),4L,4L,(-1L)},{4L,0xC285CE96L,0xC63C4078L,4L},{0xC285CE96L,9L,0x0C544087L,0L},{(-2L),4L,4L,0L}}};
        int32_t l_1788 = 0L;
        int16_t l_1795 = 0xBF58L;
        int16_t l_1820[4][2][3] = {{{(-9L),0x0472L,(-9L)},{0x9E95L,0x3194L,0x9E95L}},{{(-9L),0x0472L,(-9L)},{0x9E95L,0x3194L,0x9E95L}},{{(-9L),0x0472L,(-9L)},{0x9E95L,0x3194L,0x9E95L}},{{(-9L),0x0472L,(-9L)},{0x9E95L,0x3194L,0x9E95L}}};
        uint32_t **l_1822 = &g_1458;
        uint64_t l_1857 = 0x9C35696E35D134BALL;
        int32_t *l_1872 = &g_1152.f2.f1;
        const uint64_t **l_1885 = &g_1129;
        int32_t l_1890 = (-10L);
        int64_t l_1891 = (-8L);
        uint16_t l_1892 = 0UL;
        union U2 **l_1908[3][3];
        int32_t l_1922 = 0x25E713A5L;
        int32_t l_1948[4][6] = {{0x183BE440L,1L,(-7L),2L,(-7L),1L},{(-7L),0x183BE440L,0xE8470778L,(-4L),(-4L),0xE8470778L},{(-7L),(-7L),(-4L),2L,0xD87FC9D9L,2L},{0x183BE440L,(-7L),0x183BE440L,0xE8470778L,(-4L),(-4L)}};
        uint64_t l_1949 = 4UL;
        uint8_t l_1969 = 253UL;
        uint64_t l_2000[6] = {0x4063462856D3722FLL,0x4063462856D3722FLL,0x4063462856D3722FLL,0x4063462856D3722FLL,0x4063462856D3722FLL,0x4063462856D3722FLL};
        uint32_t l_2033 = 0x00323900L;
        struct S0 l_2040 = {0x8868L,0xB8296412L,0xAAF8AC48L,18446744073709551614UL,0xB6A4L};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1908[i][j] = &g_1359[2][0][0];
        }
        for (g_6[0][1] = 0; (g_6[0][1] <= 1); g_6[0][1] += 1)
        { 
            uint64_t l_1789[5][2] = {{18446744073709551615UL,4UL},{0xECF92AA00618A7F1LL,0xECF92AA00618A7F1LL},{0xECF92AA00618A7F1LL,4UL},{18446744073709551615UL,18446744073709551611UL},{4UL,18446744073709551611UL}};
            int16_t **l_1796[2];
            uint64_t l_1798 = 18446744073709551615UL;
            struct S1 * const ****l_1809[7][5] = {{&g_1807[2][1][0],&g_1807[0][0][4],(void*)0,(void*)0,&g_1807[0][0][4]},{&g_1807[1][2][2],&g_1807[0][2][1],&g_1807[2][1][0],&g_1807[0][0][4],&g_1807[2][3][3]},{&g_1807[0][2][1],(void*)0,&g_1807[2][1][0],&g_1807[2][2][3],&g_1807[2][1][0]},{&g_1807[2][3][3],&g_1807[2][3][3],(void*)0,&g_1807[1][2][2],&g_1807[1][0][4]},{&g_1807[0][2][1],&g_1807[1][0][4],&g_1807[2][1][0],&g_1807[1][2][2],&g_1807[1][2][2]},{&g_1807[1][2][2],&g_1807[2][1][0],&g_1807[1][2][2],&g_1807[2][2][3],&g_1807[0][3][6]},{&g_1807[2][1][0],&g_1807[1][0][4],&g_1807[0][2][1],&g_1807[0][0][4],&g_1807[0][3][6]}};
            const int32_t l_1825 = 0xEFDE3CB7L;
            uint64_t ****l_1850 = (void*)0;
            int32_t l_1856 = 0xDADFA899L;
            int32_t l_1869[3][5];
            struct S1 *l_1882 = &g_1883;
            int32_t l_1884 = 2L;
            int16_t l_1886 = 0x5AF6L;
            int32_t *l_1899 = &g_1411[0];
            struct S0 l_1906 = {0x85E5L,0xDB9B903CL,0xB840CC6EL,18446744073709551615UL,-9L};
            uint8_t **l_1924 = &g_97;
            uint8_t ***l_1923 = &l_1924;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1796[i] = &g_1322[2][0][0];
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1869[i][j] = 0L;
            }
        }
        if ((*g_198))
            break;
        for (g_474 = 0; (g_474 <= 1); g_474 += 1)
        { 
            int32_t *l_1928 = &g_1883.f0;
            int64_t l_1939 = (-1L);
            int32_t l_1944 = 1L;
            int32_t l_1945 = 0xE7B05336L;
            int32_t l_1947 = 0xB6BDDA67L;
            union U3 *l_1973 = &g_22;
            union U3 **l_1972 = &l_1973;
            int16_t *l_1986 = &l_1795;
            union U2 l_1997 = {0x230E7F6FL};
            int64_t l_2007 = (-1L);
            uint32_t l_2008 = 0x4B543A0AL;
            uint32_t l_2031 = 0xCE47C56CL;
            l_1928 = l_1928;
            for (g_793 = 1; (g_793 >= 0); g_793 -= 1)
            { 
                union U3 *l_1933 = &g_22;
                union U3 **l_1932 = &l_1933;
                struct S0 ***l_1938 = &g_859;
                int32_t l_1940 = 0x0A1E2531L;
                uint16_t *l_1941 = &g_585[1].f2;
                int32_t l_1942[1];
                struct S1 *l_1943[5];
                int8_t l_1946 = 1L;
                uint32_t *l_1960 = &g_187.f0;
                uint32_t *l_1965 = &l_1911.f4;
                int i;
                for (i = 0; i < 1; i++)
                    l_1942[i] = (-1L);
                for (i = 0; i < 5; i++)
                    l_1943[i] = &g_585[1];
                (*l_1928) = (safe_add_func_uint8_t_u_u(((*g_97) = ((((safe_unary_minus_func_uint64_t_u((&g_749[2][0] == &g_749[2][0]))) , ((*l_1932) = &g_22)) == (void*)0) , (l_1911 , ((((*l_1941) &= ((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1938 == l_1938), l_1939)), 5)) && (*l_1928)) & 0L) | l_1940)) <= l_1942[0]) == (*g_198))))), (*g_1464)));
                (*g_773) = l_1943[4];
                ++l_1949;
                for (l_1946 = 0; (l_1946 <= 2); l_1946 += 1)
                { 
                    (*l_1928) &= l_1946;
                    if ((*g_198))
                        continue;
                }
                if ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((*g_97) != 0xF3L), (*l_1928))), (((*l_1960) |= (safe_add_func_uint16_t_u_u(((*l_1941)--), (&g_1359[1][0][3] == &g_1359[0][0][2])))) < (safe_add_func_int8_t_s_s(((*g_766) = (safe_add_func_uint16_t_u_u((((*l_1965) |= l_1942[0]) , g_1411[0]), l_1946))), 0x2CL))))))
                { 
                    uint32_t l_1966 = 1UL;
                    if (l_1942[0])
                        break;
                    l_1966--;
                    return g_1067[0][1][2];
                }
                else
                { 
                    --l_1969;
                }
            }
            (*l_1972) = &g_22;
            for (g_1190 = 0; (g_1190 <= 1); g_1190 += 1)
            { 
                int64_t l_2001 = 0xFF5E761BDB43243CLL;
                int32_t *l_2003 = (void*)0;
                int32_t l_2004[3];
                int32_t l_2005 = (-1L);
                int32_t l_2006 = (-8L);
                int8_t l_2032 = (-1L);
                uint32_t l_2043 = 0x31710A10L;
                int32_t *l_2044 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_2004[i] = (-6L);
                if (((**g_135) | ((safe_mod_func_int64_t_s_s((g_795 | (safe_sub_func_uint8_t_u_u(((void*)0 == &l_1911), ((((*g_400) = l_1928) == l_1871) > (safe_div_func_uint16_t_u_u(((**g_341) && (-6L)), g_585[1].f4)))))), (*l_1928))) & (***g_1127))))
                { 
                    (*g_773) = g_1980[0][1];
                }
                else
                { 
                    uint32_t l_1981 = 4294967291UL;
                    int16_t **l_1987 = &g_1322[2][0][0];
                    union U3 l_1988 = {0x89L};
                    --l_1981;
                    (*l_1928) ^= (((*g_1458) , (safe_lshift_func_int16_t_s_s((l_1986 != ((*l_1987) = &l_1820[0][1][1])), l_1981))) && ((l_1988 , (void*)0) != &l_1928));
                    l_1944 &= (((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((*l_1928), ((safe_lshift_func_int16_t_s_s((((*l_1972) == &g_22) || (safe_add_func_uint32_t_u_u((((((l_1997 , ((*g_401) , l_1981)) == (safe_mod_func_int64_t_s_s((((*g_198) == 4UL) && g_1296[1].f1), l_1988.f0))) , (void*)0) != (void*)0) ^ 0UL), 1UL))), l_2000[5])) & (***g_1127)))) & (*g_766)), 0xCA59L)) ^ 0x8D80L) | (*l_1928));
                    if (l_2001)
                        break;
                }
                l_2003 = g_2002;
                l_2008++;
                for (l_1799 = 0; (l_1799 <= 1); l_1799 += 1)
                { 
                    int32_t l_2014[5][1][1] = {{{(-2L)}},{{0x241495F1L}},{{(-2L)}},{{0x241495F1L}},{{(-2L)}}};
                    int i, j, k;
                    (*l_1928) |= (*g_198);
                    (*g_198) ^= (safe_lshift_func_int16_t_s_s((l_2014[3][0][0] = (l_2013 == (l_1908[(g_1190 + 1)][g_474] = &g_1359[0][0][2]))), 11));
                }
            }
        }
    }
    return g_2045[2];
}



static int32_t * func_9(const int32_t * p_10)
{ 
    int32_t *l_15[5][3] = {{(void*)0,&g_6[0][0],&g_6[0][0]},{&g_2,&g_8,&g_8},{(void*)0,&g_6[0][0],&g_6[0][0]},{&g_2,&g_8,&g_8},{(void*)0,&g_6[0][0],&g_6[0][0]}};
    uint32_t l_16 = 0x846B51F0L;
    union U3 l_33 = {0UL};
    int32_t l_40 = 2L;
    union U2 l_206 = {1UL};
    int8_t *l_477[5][7][3] = {{{&g_166[1],&g_166[0],&g_166[1]},{(void*)0,&g_166[1],&g_166[0]},{&g_166[1],&g_166[1],(void*)0},{&g_166[1],&g_166[1],&g_166[1]},{(void*)0,&g_166[1],&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]},{(void*)0,&g_166[1],&g_166[1]}},{{&g_166[0],&g_166[1],&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]},{&g_166[1],&g_166[0],&g_166[1]},{&g_166[1],(void*)0,&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]},{&g_166[0],&g_166[1],&g_166[1]},{&g_166[0],&g_166[1],&g_166[1]}},{{&g_166[1],&g_166[1],(void*)0},{&g_166[1],&g_166[1],&g_166[0]},{&g_166[1],&g_166[1],&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]},{&g_166[0],&g_166[1],&g_166[1]},{(void*)0,&g_166[1],&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]}},{{(void*)0,&g_166[1],&g_166[1]},{&g_166[1],(void*)0,&g_166[1]},{&g_166[1],&g_166[0],&g_166[1]},{(void*)0,&g_166[1],&g_166[0]},{&g_166[1],&g_166[1],(void*)0},{&g_166[1],&g_166[1],&g_166[1]},{(void*)0,&g_166[1],&g_166[1]}},{{&g_166[1],&g_166[1],&g_166[1]},{(void*)0,&g_166[1],&g_166[1]},{&g_166[0],&g_166[1],&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]},{&g_166[1],&g_166[0],&g_166[1]},{&g_166[1],(void*)0,&g_166[1]},{&g_166[1],&g_166[1],&g_166[1]}}};
    uint32_t *l_1460 = &g_405.f3;
    const struct S1 l_1473 = {1L,0x50L,4UL,1UL,8UL,0L};
    int8_t *l_1520[4][2][7] = {{{&g_166[1],(void*)0,&g_1374,(void*)0,&g_1374,&g_1374,(void*)0},{&g_1374,&g_794,&g_1374,&g_794,&g_166[1],&g_1374,&g_794}},{{&g_166[1],&g_794,&g_166[0],(void*)0,&g_166[1],&g_166[1],(void*)0},{&g_166[1],(void*)0,&g_1374,(void*)0,&g_1374,&g_1374,(void*)0}},{{&g_1374,&g_794,&g_1374,&g_794,&g_166[1],&g_1374,&g_794},{&g_166[1],&g_794,&g_166[0],(void*)0,&g_166[1],&g_166[1],(void*)0}},{{&g_166[1],(void*)0,&g_1374,(void*)0,&g_1374,&g_1374,(void*)0},{&g_1374,&g_794,&g_1374,&g_794,&g_166[1],&g_1374,&g_794}}};
    struct S0 l_1522 = {1L,0xEFF5743AL,4294967289UL,18446744073709551610UL,3L};
    uint64_t l_1541 = 0x3CB59772C260021ALL;
    uint8_t l_1593 = 0x4CL;
    int64_t l_1624 = 1L;
    int8_t l_1641 = 0x67L;
    uint32_t **l_1646 = &g_1645;
    uint32_t l_1647 = 18446744073709551615UL;
    uint16_t l_1674 = 0UL;
    int16_t l_1686[4];
    int32_t **l_1782 = &l_15[4][0];
    int32_t *l_1783 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1686[i] = 0x4C99L;
    l_16 &= (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s(g_8, 0xF7L)), g_7));
    if ((safe_div_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(g_6[1][2], 0x709E149CFF29C214LL)) & ((!(g_22 , func_23(((*g_97) = ((g_166[1] = func_25((func_27(l_33, g_22.f0, g_2, func_34(l_40, &l_40, &g_6[1][1], g_41, g_6[0][1]), l_206) | g_371[5][1]))) | g_6[0][1]))))) < (**g_1128))), 0xA1L)))
    { 
        const int32_t l_1476 = 0xA5E900BAL;
        int32_t l_1481 = (-1L);
        int8_t l_1499 = 0x8FL;
        union U2 l_1502[3] = {{0x78C6899CL},{0x78C6899CL},{0x78C6899CL}};
        int i;
        for (g_1374 = 0; (g_1374 != 20); g_1374 = safe_add_func_int16_t_s_s(g_1374, 4))
        { 
            uint32_t **l_1459 = &g_1458;
            int32_t l_1461[2];
            struct S0 l_1492 = {1L,0x29F7DE5EL,4294967288UL,0xE6A1929DL,0x99FEL};
            union U2 l_1505 = {0x6F5849E8L};
            int i;
            for (i = 0; i < 2; i++)
                l_1461[i] = 0xE187A23AL;
            g_585[1].f0 |= (l_1461[0] |= (((*l_1459) = g_1458) == (l_1460 = &l_16)));
            for (g_1333 = (-18); (g_1333 > 54); g_1333++)
            { 
                struct S1 *l_1465[7] = {&g_41,&g_41,(void*)0,&g_41,&g_41,(void*)0,&g_41};
                int i;
                for (g_41.f4 = 0; g_41.f4 < 2; g_41.f4 += 1)
                {
                    g_1087[g_41.f4] = &g_1464;
                }
                l_1465[0] = (*g_773);
                if ((*p_10))
                    break;
                l_15[4][0] = &l_1461[0];
                if ((*p_10))
                    break;
            }
            g_22.f2.f5 = ((void*)0 == (*g_135));
            for (g_1360.f1 = (-21); (g_1360.f1 == (-24)); g_1360.f1 = safe_sub_func_uint16_t_u_u(g_1360.f1, 7))
            { 
                uint32_t l_1480 = 0x22583C05L;
                int32_t *l_1508 = (void*)0;
                int32_t **l_1509 = &l_15[0][0];
            }
        }
    }
    else
    { 
        int8_t *l_1518[6][1][3] = {{{&g_1374,(void*)0,&g_1374}},{{&g_166[1],(void*)0,(void*)0}},{{&g_166[1],(void*)0,&g_166[1]}},{{&g_1374,(void*)0,&g_1374}},{{&g_166[1],(void*)0,(void*)0}},{{&g_166[1],(void*)0,&g_166[1]}}};
        int8_t **l_1519[4] = {&l_1518[3][0][1],&l_1518[3][0][1],&l_1518[3][0][1],&l_1518[3][0][1]};
        struct S0 **l_1521 = &g_860;
        uint8_t l_1523 = 247UL;
        int32_t l_1524[5];
        uint8_t l_1547[4];
        struct S1 **l_1548[1][6] = {{&g_787,&g_787,&g_787,&g_787,&g_787,&g_787}};
        struct S0 l_1603 = {0x8C7EL,0xDDF8183CL,1UL,0xA720C0CDL,0xCDABL};
        const int32_t **l_1630 = (void*)0;
        uint32_t **l_1669 = (void*)0;
        uint16_t *l_1681[5][5] = {{&g_85,(void*)0,&g_85,&g_85,(void*)0},{&g_1067[3][0][1],&g_534[1],&g_534[1],&g_1067[3][0][1],&g_534[1]},{(void*)0,(void*)0,&g_534[1],(void*)0,(void*)0},{&g_534[1],&g_1067[3][0][1],&g_534[1],&g_534[1],&g_1067[3][0][1]},{(void*)0,&g_85,&g_85,(void*)0,&g_85}};
        uint16_t *l_1683[4][6];
        uint16_t **l_1682 = &l_1683[0][1];
        int32_t l_1687 = 0xB1CF986AL;
        struct S1 ***l_1705 = (void*)0;
        struct S1 *l_1721 = &g_585[0];
        int32_t *l_1722 = &g_1411[0];
        int16_t l_1778[3];
        uint32_t l_1779 = 0UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1524[i] = 0x6BBCCA6CL;
        for (i = 0; i < 4; i++)
            l_1547[i] = 7UL;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_1683[i][j] = &g_534[1];
        }
        for (i = 0; i < 3; i++)
            l_1778[i] = 0x21C7L;
        l_1524[4] = (safe_sub_func_int64_t_s_s(g_85, (((safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((0x3141L | (l_477[4][5][0] != (l_1520[0][0][1] = l_1518[3][0][2]))) != (l_1521 == (l_1522 , (l_1522 , (void*)0)))), g_713[1])), l_1523)) , (void*)0) == (void*)0)));
        for (g_962 = 24; (g_962 <= 10); g_962--)
        { 
            uint32_t *l_1533 = &g_187.f0;
            uint32_t **l_1534[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_1535 = (void*)0;
            int32_t l_1540 = (-5L);
            int i;
            l_1540 = ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((((p_10 == (l_1535 = l_1533)) && (g_1152.f2.f1 = (func_42(((safe_div_func_int64_t_s_s((0xD11AA623CD00D477LL > (**g_341)), (safe_add_func_uint8_t_u_u(255UL, l_1524[3])))) , l_1540), (*g_136)) , (*g_198)))) || 0x62L) | 0xC2DD6BBA3945D8A5LL), 0x13C5L)), l_1541)), 2)) || l_1540);
            for (g_41.f5 = 0; (g_41.f5 != (-3)); g_41.f5--)
            { 
                int32_t l_1546 = 4L;
                struct S1 ***l_1549 = &g_773;
                int32_t l_1559 = (-10L);
                l_1540 = (safe_rshift_func_uint8_t_u_u(l_1546, (*g_136)));
                if ((*p_10))
                    continue;
                l_1547[3] = (*p_10);
                if ((((*l_1549) = l_1548[0][3]) != (void*)0))
                { 
                    return &g_930;
                }
                else
                { 
                    int32_t **l_1550 = &l_15[1][2];
                    int16_t *l_1560 = &g_521[0][6][0];
                    int32_t l_1561 = 0xA73B9285L;
                    (*l_1550) = &g_2;
                    (*l_1550) = &g_930;
                    if ((*g_198))
                        break;
                    l_1559 = ((0x50BC2D40F51E1EECLL & l_1540) >= (safe_mod_func_uint64_t_u_u(((l_1546 > ((safe_add_func_int64_t_s_s((g_1557 != (void*)0), ((*g_135) != (void*)0))) == 18446744073709551615UL)) > l_1540), 0x16D16A83E97283A5LL)));
                    g_187.f2.f1 = (((*l_1560) ^= l_1540) != l_1561);
                }
                return &g_8;
            }
        }
        for (g_1374 = (-24); (g_1374 <= (-9)); g_1374 = safe_add_func_int64_t_s_s(g_1374, 3))
        { 
            const int32_t *l_1565 = &g_41.f0;
            const int32_t **l_1564 = &l_1565;
            int32_t l_1605 = (-1L);
            int32_t **l_1614 = &l_15[2][2];
            uint8_t l_1623 = 249UL;
            int32_t *l_1648 = &l_1524[1];
            uint16_t l_1658 = 0x6CB1L;
            (*l_1564) = p_10;
            if ((*p_10))
                continue;
            for (g_159 = 0; (g_159 != 54); g_159++)
            { 
                uint32_t l_1583 = 0UL;
                int32_t l_1586 = 0x05258179L;
                struct S0 l_1602 = {0xCF68L,0xB261B00EL,3UL,0x04F72D5FL,0xDA65L};
                int16_t ** const l_1622 = &g_1322[2][0][0];
                int32_t *l_1627 = &g_8;
                (*g_859) = (*l_1521);
                for (g_41.f4 = 0; (g_41.f4 > 52); g_41.f4 = safe_add_func_uint32_t_u_u(g_41.f4, 4))
                { 
                    uint16_t *l_1572 = &g_22.f2.f2;
                    int32_t l_1581 = 3L;
                    uint32_t *l_1582[3][6] = {{&g_1190,&g_1190,&g_1190,&g_1190,&g_1190,&g_1190},{&g_1190,&g_1190,&g_1190,&g_1190,&g_1190,&g_1190},{&g_1190,&g_1190,&g_1190,&g_1190,&g_1190,&g_1190}};
                    int64_t *l_1584 = (void*)0;
                    int64_t *l_1585[7][4] = {{&g_225[0],&g_1189,&g_1189,&g_225[0]},{&g_1189,&g_225[0],&g_1189,&g_1189},{&g_225[0],&g_225[0],&g_749[2][0],&g_225[0]},{&g_225[0],&g_1189,&g_1189,&g_225[0]},{&g_1189,&g_225[0],&g_1189,&g_1189},{&g_225[0],&g_225[0],&g_749[2][0],&g_225[0]},{&g_225[0],&g_1189,&g_1189,&g_225[0]}};
                    int i, j;
                    g_22.f2.f0 = (((safe_add_func_uint64_t_u_u(2UL, (l_1524[4] &= (func_42((g_923--), l_1547[3]) , (safe_add_func_int64_t_s_s((6L < (-1L)), (l_1586 = (safe_mod_func_uint8_t_u_u((0x35879D5FL | (l_1583 &= (safe_lshift_func_uint16_t_u_u(g_1411[0], l_1581)))), 0xC8L))))))))) , 0xBD4A124BB6FC9B0FLL) || 18446744073709551613UL);
                }
                for (g_22.f2.f2 = 16; (g_22.f2.f2 == 37); g_22.f2.f2 = safe_add_func_int8_t_s_s(g_22.f2.f2, 7))
                { 
                    uint64_t l_1604 = 0x537F9E16AF3D7D47LL;
                    l_1605 = (safe_sub_func_uint32_t_u_u((**l_1564), (safe_mod_func_uint16_t_u_u((l_1593 > ((g_22 , (((safe_div_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((**l_1564), (safe_mod_func_int32_t_s_s((*g_198), (safe_mul_func_uint16_t_u_u((l_1602 , (l_1603 , l_1604)), l_1604)))))), 0xE7L)) == (**g_1128)) != l_1524[4])) <= g_1296[1].f0)), l_1604))));
                }
                for (g_138 = 29; (g_138 <= 46); g_138++)
                { 
                    uint16_t l_1613 = 65535UL;
                    int32_t ***l_1615[6][4][6] = {{{&l_1614,&l_1614,&l_1614,&l_1614,&l_1614,(void*)0},{&l_1614,&l_1614,&l_1614,&l_1614,(void*)0,&l_1614},{&l_1614,(void*)0,&l_1614,&l_1614,&l_1614,&l_1614},{&l_1614,&l_1614,&l_1614,&l_1614,(void*)0,(void*)0}},{{&l_1614,&l_1614,(void*)0,&l_1614,&l_1614,&l_1614},{&l_1614,(void*)0,(void*)0,&l_1614,&l_1614,&l_1614},{&l_1614,&l_1614,&l_1614,&l_1614,&l_1614,(void*)0},{&l_1614,&l_1614,&l_1614,&l_1614,(void*)0,&l_1614}},{{&l_1614,(void*)0,&l_1614,&l_1614,&l_1614,&l_1614},{&l_1614,&l_1614,&l_1614,&l_1614,(void*)0,(void*)0},{&l_1614,&l_1614,(void*)0,&l_1614,&l_1614,&l_1614},{&l_1614,(void*)0,(void*)0,&l_1614,&l_1614,&l_1614}},{{&l_1614,&l_1614,&l_1614,&l_1614,&l_1614,(void*)0},{&l_1614,&l_1614,&l_1614,&l_1614,(void*)0,&l_1614},{&l_1614,(void*)0,&l_1614,&l_1614,&l_1614,&l_1614},{&l_1614,&l_1614,&l_1614,&l_1614,(void*)0,(void*)0}},{{&l_1614,&l_1614,(void*)0,&l_1614,&l_1614,&l_1614},{&l_1614,(void*)0,(void*)0,&l_1614,&l_1614,&l_1614},{&l_1614,(void*)0,&l_1614,&l_1614,&l_1614,&l_1614},{&l_1614,&l_1614,(void*)0,&l_1614,&l_1614,&l_1614}},{{&l_1614,&l_1614,&l_1614,&l_1614,&l_1614,&l_1614},{&l_1614,(void*)0,&l_1614,&l_1614,(void*)0,&l_1614},{&l_1614,&l_1614,(void*)0,&l_1614,(void*)0,&l_1614},{&l_1614,&l_1614,&l_1614,&l_1614,&l_1614,&l_1614}}};
                    int64_t *l_1625 = &g_749[2][0];
                    uint32_t *l_1626[3][5][2] = {{{&g_1190,(void*)0},{(void*)0,&g_1190},{(void*)0,(void*)0},{&g_1190,(void*)0},{(void*)0,&g_1190}},{{(void*)0,(void*)0},{&g_1190,(void*)0},{(void*)0,&g_1190},{(void*)0,(void*)0},{&g_1190,(void*)0}},{{(void*)0,&g_1190},{(void*)0,(void*)0},{&g_1190,(void*)0},{(void*)0,&g_1190},{(void*)0,(void*)0}}};
                    int i, j, k;
                    l_1605 = (!(g_1152.f0 ^= (((((*l_1625) |= (safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_1613, ((g_1616[1][4][1] = l_1614) != (l_206 , &p_10)))) != (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((*g_766) = (!((((&g_548 != l_1622) > l_1602.f0) || (**l_1564)) | 255UL))), l_1583)) && l_1623), 0xF0L))), l_1624))) >= (**g_1128)) , l_1602) , 0x309CA2B1L)));
                    if ((*p_10))
                        continue;
                }
                return l_1627;
            }
            l_1524[4] = (*p_10);
            if ((safe_add_func_int16_t_s_s(((l_1630 == &p_10) && ((4294967295UL || (0x5A69L <= ((*l_1565) < ((safe_add_func_uint64_t_u_u(2UL, (safe_div_func_uint32_t_u_u(g_41.f0, l_1547[3])))) & (*l_1565))))) >= 255UL)), 3L)))
            { 
                uint32_t l_1637 = 0xD4B125BFL;
                int32_t l_1638 = 0x37456302L;
                (*l_1614) = &l_40;
                l_1638 = (safe_div_func_int32_t_s_s(0L, (l_1605 &= l_1637)));
                l_1603.f1 &= (l_1641 ^ (((l_1522 , (safe_sub_func_uint8_t_u_u((**g_135), 0xFAL))) != 0x5CL) > (((**g_341) = ((g_22 , g_1644) != l_1646)) <= (**l_1564))));
                l_1647 = 0x9841D8C4L;
            }
            else
            { 
                int16_t l_1651[3];
                int32_t l_1672 = 0xE160AADDL;
                int32_t l_1673[7][4][5] = {{{(-4L),0xE622F902L,(-5L),(-1L),0xE0C20397L},{1L,(-1L),(-7L),0xD79CF394L,0xB4C092D0L},{0xC8C14E52L,0xD79CF394L,0x589BB811L,(-1L),0xE622F902L},{(-10L),0x0682071EL,(-1L),0xB4C092D0L,0x79C6952EL}},{{2L,(-5L),0xC4859BA1L,2L,1L},{2L,(-1L),1L,0x432CE1DCL,(-8L)},{(-10L),0xC8C14E52L,(-1L),0L,4L},{0xC8C14E52L,0xB0012A2CL,(-4L),0x857F632AL,0L}},{{1L,9L,1L,9L,1L},{(-4L),2L,0xB0012A2CL,0xB4C092D0L,0xE622F902L},{0x0682071EL,0xB0012A2CL,(-7L),1L,1L},{9L,0L,0x498D9FEFL,2L,0xE622F902L}},{{0xF14EBFACL,1L,0x34EEC533L,(-1L),1L},{0xE622F902L,(-5L),(-1L),0xE0C20397L,0L},{(-8L),0xE622F902L,0x498D9FEFL,0x432CE1DCL,4L},{1L,9L,0L,7L,(-8L)}},{{0xC8C14E52L,(-1L),(-10L),(-8L),1L},{0x0682071EL,0xDBB2525BL,1L,(-8L),0x79C6952EL},{0xF14EBFACL,(-8L),(-5L),7L,0xE622F902L},{0xD79CF394L,0xCD9A9F66L,3L,0x432CE1DCL,0xB4C092D0L}},{{0xDBB2525BL,0L,1L,0xE0C20397L,0xE0C20397L},{(-4L),0x0682071EL,(-4L),(-1L),0x64972AAFL},{(-1L),(-1L),0L,2L,0xB4C092D0L},{(-8L),2L,0x589BB811L,1L,0xDBB2525BL}},{{(-10L),0xDBB2525BL,0L,0xB4C092D0L,0x1056DCCEL},{0xC4859BA1L,0x426BC147L,0x565ED1DAL,0xC4859BA1L,0xE5D8B090L},{(-5L),(-1L),0xE0C20397L,0L,3L},{0L,1L,1L,0x0235D899L,(-10L)}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1651[i] = (-1L);
                for (g_795 = 0; (g_795 <= 4); g_795 += 1)
                { 
                    int32_t l_1661 = 0x4DC7B188L;
                    uint32_t **l_1666[7];
                    uint32_t ***l_1667 = &l_1666[3];
                    int16_t *l_1670 = &g_521[2][1][0];
                    int16_t *l_1671 = &g_922;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1666[i] = &l_1460;
                    (*l_1614) = l_1648;
                    (*l_1648) = (l_1651[2] & ((g_22 , (+(safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u(0xF05A0AA87C879089LL)), (g_749[2][0] = ((safe_add_func_int32_t_s_s(l_1658, ((safe_lshift_func_uint8_t_u_u(0xE2L, l_1661)) & ((*l_1671) = ((*l_1670) = (((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(((g_1668 = ((*l_1667) = l_1666[3])) != l_1669), l_1661)) || 0UL), 7)) || (*l_1648)) ^ l_1651[2])))))) > l_1651[2])))))) <= l_1651[2]));
                }
                if ((*p_10))
                    continue;
                l_1674++;
            }
        }
        if (((((g_923 = (safe_unary_minus_func_int32_t_s((safe_div_func_int32_t_s_s(((l_206 , (void*)0) != ((((!l_1603.f3) ^ ((l_1603 , (l_1681[1][1] != ((*l_1682) = (void*)0))) , (safe_sub_func_uint16_t_u_u(((g_187.f0 ^ 0x16FC419289E8A601LL) == l_1547[0]), l_1686[1])))) <= (*g_1464)) , &g_1127)), l_1687))))) | 0UL) > g_749[2][0]) || l_1687))
        { 
            int64_t l_1691[3][1][2] = {{{0L,0L}},{{0L,0L}},{{0L,0L}}};
            int32_t l_1692 = 0x63F8A814L;
            int32_t l_1693 = 0xA04059A2L;
            int32_t l_1694 = 0x97DF93F2L;
            int32_t l_1695 = 0x678D63C9L;
            int32_t l_1696 = 0xC706F300L;
            uint8_t l_1697[6];
            struct S1 l_1702 = {0L,9UL,65534UL,0x46A70DE11C5E5EE0LL,0xB683F155L,1L};
            struct S1 * const * const l_1707 = &g_787;
            struct S1 * const * const *l_1706[3][6] = {{&l_1707,&l_1707,(void*)0,&l_1707,(void*)0,&l_1707},{&l_1707,&l_1707,(void*)0,&l_1707,(void*)0,(void*)0},{&l_1707,&l_1707,&l_1707,&l_1707,(void*)0,(void*)0}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1697[i] = 0xDBL;
            for (l_1541 = (-16); (l_1541 <= 37); l_1541++)
            { 
                int32_t *l_1690 = &g_930;
                for (g_1410 = 0; (g_1410 <= 4); g_1410 += 1)
                { 
                    return l_1690;
                }
            }
            --l_1697[3];
            for (g_1395 = 0; (g_1395 <= 1); g_1395 += 1)
            { 
                const int32_t *l_1700 = &g_41.f5;
                struct S1 ***l_1704 = &g_773;
                struct S1 ****l_1703[5][5][5] = {{{&l_1704,(void*)0,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,(void*)0,(void*)0},{&l_1704,&l_1704,&l_1704,(void*)0,&l_1704},{&l_1704,(void*)0,&l_1704,(void*)0,&l_1704},{&l_1704,&l_1704,(void*)0,(void*)0,&l_1704}},{{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,(void*)0,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704}},{{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,(void*)0,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,(void*)0,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,(void*)0,(void*)0}},{{&l_1704,&l_1704,&l_1704,(void*)0,&l_1704},{&l_1704,(void*)0,&l_1704,(void*)0,&l_1704},{&l_1704,&l_1704,(void*)0,(void*)0,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704}},{{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,(void*)0,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,&l_1704,&l_1704,&l_1704,&l_1704},{&l_1704,(void*)0,&l_1704,&l_1704,&l_1704}}};
                const int32_t **l_1720 = &l_1700;
                int i, j, k;
                l_1700 = p_10;
                l_1702.f5 = (((!(l_1702 , (((l_1705 = &g_773) == l_1706[1][2]) && 0x6355B3B4FFAFBCE7LL))) > (safe_rshift_func_uint8_t_u_u((((((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((7UL ^ (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_1697[(g_1395 + 1)], ((***g_1127) < 1L))) , 0xE8D5L), 0xC229L))), (*g_342))), l_1696)), 1L)) < 0xD6BCC38FE70A5726LL) != (-9L)) ^ (*l_1700)) < (*l_1700)), 5))) >= l_1603.f0);
                if ((*g_198))
                    break;
                if ((*l_1700))
                    break;
                (*l_1720) = p_10;
            }
        }
        else
        { 
            int8_t l_1725 = 0x81L;
            struct S0 l_1739 = {0x7D8CL,0x2483DA76L,1UL,0UL,0xD898L};
            int32_t l_1748 = 1L;
            uint32_t l_1749 = 18446744073709551609UL;
            if ((l_1721 != (void*)0))
            { 
                return l_1722;
            }
            else
            { 
                uint32_t l_1728 = 0xC2FAA614L;
                for (l_1522.f3 = 0; (l_1522.f3 < 58); ++l_1522.f3)
                { 
                    l_1725 = 0x211ABB29L;
                    g_1726 = g_1726;
                    if (l_1728)
                        continue;
                }
            }
            for (g_1360.f2.f3 = 28; (g_1360.f2.f3 > 53); ++g_1360.f2.f3)
            { 
                const int16_t l_1742[6][1][7] = {{{0x6B36L,1L,0xF1D2L,(-7L),(-7L),0xF1D2L,1L}},{{0xEA67L,0xC6E2L,0x41CCL,0xEA67L,0x6E99L,0x6E99L,0xEA67L}},{{(-1L),1L,(-1L),8L,1L,(-8L),(-8L)}},{{0x48D6L,0xEA67L,2L,0xEA67L,0x48D6L,2L,0x41CCL}},{{(-1L),0xF1D2L,4L,(-1L),4L,0xF1D2L,(-1L)}},{{0x23B7L,0x41CCL,2L,0xFDA7L,0x41CCL,0xFDA7L,2L}}};
                int16_t *l_1743 = &g_521[1][5][0];
                int32_t l_1744 = (-1L);
                int32_t l_1745 = (-1L);
                union U3 l_1752 = {0UL};
                const int32_t *l_1764 = (void*)0;
                const int32_t **l_1763 = &l_1764;
                int i, j, k;
                l_1745 = (l_1744 |= ((*l_1722) |= (((*l_1743) = (l_1725 , (((0x904B7FF95301B610LL & ((safe_rshift_func_uint8_t_u_s(0UL, (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((l_1739 , (safe_sub_func_int64_t_s_s(0L, (l_1742[5][0][6] | l_1739.f2)))) > (**g_341)), 5)), l_1742[5][0][6])))) <= 0xF07CB677L)) , l_1739.f1) ^ g_371[5][1]))) >= l_1742[5][0][2])));
                l_1744 &= (*g_198);
                for (l_206.f2.f2 = (-8); (l_206.f2.f2 == 60); l_206.f2.f2 = safe_add_func_int8_t_s_s(l_206.f2.f2, 8))
                { 
                    --l_1749;
                }
                (*l_1763) = ((((l_1752 , ((*l_1460) = ((safe_lshift_func_uint8_t_u_s((l_1739.f3 && ((l_1745 = (safe_div_func_int16_t_s_s((&g_1126 == (g_1757 = (void*)0)), (safe_add_func_int64_t_s_s((0x95664382CAAB4126LL < (~(safe_sub_func_int16_t_s_s(l_1748, ((void*)0 != &g_1645))))), 18446744073709551612UL))))) < l_1744)), 2)) & l_1744))) , l_1742[5][0][6]) ^ g_371[2][1]) , p_10);
                for (l_1603.f1 = 0; (l_1603.f1 <= 4); l_1603.f1 += 1)
                { 
                    int8_t l_1767 = 0x8EL;
                    int32_t *l_1774 = &l_1752.f2.f0;
                    int32_t *l_1775 = (void*)0;
                    int32_t *l_1776 = (void*)0;
                    int32_t *l_1777[7][1][5] = {{{(void*)0,(void*)0,&g_405.f1,(void*)0,(void*)0}},{{&l_1739.f1,&l_1524[0],&l_1739.f1,&l_40,&g_930}},{{(void*)0,&l_33.f2.f5,&l_33.f2.f5,(void*)0,&l_33.f2.f5}},{{&g_930,&l_1524[0],&g_7,&l_1524[0],&g_930}},{{&l_33.f2.f5,(void*)0,&l_33.f2.f5,&l_33.f2.f5,(void*)0}},{{&g_930,&l_40,&l_1739.f1,&l_1524[0],&l_1739.f1}},{{(void*)0,(void*)0,&g_405.f1,(void*)0,(void*)0}}};
                    int i, j, k;
                    l_1778[2] ^= ((safe_mul_func_uint8_t_u_u(l_1767, l_1725)) < (safe_mod_func_uint64_t_u_u((((l_1725 >= (*g_198)) && ((safe_sub_func_int32_t_s_s((p_10 == (l_15[2][2] = &l_1524[4])), ((*l_1722) = (safe_lshift_func_int8_t_s_u(l_1748, 4))))) ^ 0x46CB3E191C49E44ELL)) == l_1767), l_1739.f2)));
                }
            }
        }
        l_1779++;
    }
    (*l_1782) = &l_40;
    return l_1783;
}



static int16_t  func_23(uint8_t  p_24)
{ 
    int32_t l_497 = (-1L);
    int32_t l_513 = 0x2D2EFFF9L;
    int32_t l_514 = 0x864DE0F0L;
    int16_t *l_542[4];
    uint64_t ***l_569 = &g_341;
    struct S1 l_570 = {0x96509101L,255UL,0xC8E4L,0xA2E24881A1E6C8FCLL,0x445E9724L,0x1E5A4428L};
    struct S1 *l_584 = &g_585[1];
    union U3 l_590 = {7UL};
    struct S0 l_606 = {0x8E1EL,0x07EB4073L,0xA7747AF4L,5UL,-1L};
    int8_t l_630 = 0x1EL;
    uint32_t *l_654[7][3] = {{&g_41.f4,&g_138,&g_41.f4},{&g_41.f4,&g_138,&g_41.f4},{&g_41.f4,&g_138,&g_41.f4},{&g_41.f4,&g_138,&g_41.f4},{&g_41.f4,&g_138,&g_41.f4},{&g_41.f4,&g_138,&g_41.f4},{&g_41.f4,&g_138,&g_41.f4}};
    int32_t *l_679 = &g_41.f5;
    struct S0 **l_701 = (void*)0;
    int16_t l_704 = 0xCB3AL;
    int16_t l_740 = 0x633EL;
    uint8_t **l_777 = &g_97;
    uint8_t ***l_776 = &l_777;
    int16_t l_823[7][5][6] = {{{0x384CL,0x4B5FL,0x0CA2L,0x66DBL,0x3B29L,0xB291L},{0L,0x7888L,3L,(-8L),3L,(-1L)},{0L,8L,(-8L),0x66DBL,8L,0x384CL},{0x384CL,0x3B29L,0L,0x66DBL,(-8L),0x66DBL},{0L,1L,0L,(-8L),0x7888L,0x0CA2L}},{{0L,0L,0xB291L,0x66DBL,0L,3L},{0x384CL,(-8L),(-1L),0x66DBL,0x4B5FL,(-8L)},{0L,3L,0x384CL,(-8L),1L,0L},{0L,0xB5E3L,0x66DBL,0x66DBL,0xB5E3L,0L},{0x384CL,0x4B5FL,0x0CA2L,0x66DBL,0x3B29L,0xB291L}},{{0L,0x7888L,3L,(-8L),3L,(-1L)},{0L,8L,(-8L),0x66DBL,8L,0x384CL},{0x384CL,0x3B29L,0L,0x66DBL,(-8L),0x66DBL},{0L,1L,0L,(-8L),0x7888L,0x0CA2L},{0L,0L,0xB291L,0x66DBL,0L,3L}},{{0x384CL,(-8L),(-1L),0x66DBL,0x4B5FL,(-8L)},{0L,3L,0x384CL,(-8L),1L,0L},{0L,0xB5E3L,0x66DBL,0x66DBL,0xB5E3L,0L},{0x384CL,0x4B5FL,0x0CA2L,0x66DBL,0x3B29L,0xB291L},{0L,0x7888L,3L,(-8L),3L,(-1L)}},{{0x4948L,(-8L),0L,0x54E0L,(-8L),(-8L)},{(-8L),3L,0x837DL,0x54E0L,0x384CL,0x54E0L},{0x4948L,0x0CA2L,0x4948L,0L,0L,6L},{0x4948L,0x66DBL,0x0A51L,0x54E0L,0x66DBL,6L},{(-8L),0x384CL,0L,0x54E0L,0L,0L}},{{0x4948L,(-1L),(-8L),0L,0x0CA2L,0x837DL},{0x4948L,0xB291L,0x54E0L,0x54E0L,0xB291L,0x4948L},{(-8L),0L,6L,0x54E0L,3L,0x0A51L},{0x4948L,0L,6L,0L,(-1L),0L},{0x4948L,(-8L),0L,0x54E0L,(-8L),(-8L)}},{{(-8L),3L,0x837DL,0x54E0L,0x384CL,0x54E0L},{0x4948L,0x0CA2L,0x4948L,0L,0L,6L},{0x4948L,0x66DBL,0x0A51L,0x54E0L,0x66DBL,6L},{(-8L),0x384CL,0L,0x54E0L,0L,0L},{0x4948L,(-1L),(-8L),0L,0x0CA2L,0x837DL}}};
    int16_t l_828 = 0L;
    int16_t l_868 = 0xF8F9L;
    uint16_t l_895 = 1UL;
    int16_t l_920[1];
    int8_t ** const l_972 = &g_766;
    uint8_t l_1001 = 0x39L;
    int64_t l_1063 = 1L;
    const int64_t l_1089[4] = {1L,1L,1L,1L};
    int32_t *l_1097 = &g_8;
    int32_t **l_1098 = &l_1097;
    int64_t l_1105 = 0x160C4286B12D98B9LL;
    union U2 * const l_1153 = &g_187;
    union U2 *l_1180[6][1][1] = {{{&g_1152}},{{&g_1152}},{{&g_1152}},{{&g_1152}},{{&g_1152}},{{&g_1152}}};
    struct S1 l_1250 = {-2L,1UL,1UL,18446744073709551611UL,4294967290UL,0x0B71627EL};
    uint32_t l_1367[1];
    uint16_t l_1414 = 65528UL;
    int32_t l_1438 = 0x31584BB3L;
    int32_t l_1439[2];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_542[i] = &g_521[0][0][0];
    for (i = 0; i < 1; i++)
        l_920[i] = 0xD3B2L;
    for (i = 0; i < 1; i++)
        l_1367[i] = 0x23644FDBL;
    for (i = 0; i < 2; i++)
        l_1439[i] = 0x4E43CFDAL;
    if ((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(g_187.f0, g_41.f2)), (g_41 , (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((**g_135), (safe_lshift_func_int8_t_s_u(0x0EL, 2)))), 1)), ((void*)0 == &g_138)))))))
    { 
        int8_t l_504 = 4L;
        int32_t l_512[3];
        uint64_t l_539 = 0x3EA3E7371C8160CCLL;
        union U3 l_550 = {1UL};
        uint32_t *l_576 = &g_22.f2.f4;
        int32_t *l_577 = &l_550.f2.f0;
        int i;
        for (i = 0; i < 3; i++)
            l_512[i] = (-10L);
        for (g_159 = (-17); (g_159 >= 43); ++g_159)
        { 
            int32_t l_500 = (-1L);
            int32_t l_508 = 0L;
            int32_t l_510 = 9L;
            int32_t l_511 = (-1L);
            int16_t *l_520 = &g_521[1][5][0];
            uint32_t *l_524[1];
            uint8_t l_533 = 0x65L;
            int32_t *l_535 = &g_41.f5;
            int32_t *l_536 = &l_513;
            int32_t *l_537 = &l_511;
            int32_t *l_538 = &l_513;
            uint8_t **l_561 = &g_97;
            int i;
            for (i = 0; i < 1; i++)
                l_524[i] = &g_41.f4;
            for (g_22.f1 = (-16); (g_22.f1 < 38); g_22.f1 = safe_add_func_int32_t_s_s(g_22.f1, 6))
            { 
                uint16_t *l_496[1];
                int8_t *l_501[4][4][2] = {{{&g_166[1],&g_166[1]},{(void*)0,&g_166[1]},{&g_166[1],&g_166[1]},{&g_166[1],&g_166[0]}},{{&g_166[1],&g_166[0]},{&g_166[1],&g_166[1]},{&g_166[1],&g_166[1]},{(void*)0,&g_166[1]}},{{&g_166[1],&g_166[0]},{&g_166[0],&g_166[1]},{&g_166[1],&g_166[1]},{&g_166[1],&g_166[1]}},{{&g_166[0],&g_166[0]},{&g_166[1],&g_166[1]},{(void*)0,&g_166[1]},{&g_166[1],&g_166[1]}}};
                int8_t **l_502 = &l_501[0][0][0];
                int32_t *l_505 = (void*)0;
                int32_t *l_506 = &l_497;
                int32_t l_507 = 0x6C4BF73BL;
                int32_t *l_509[5][3][3] = {{{(void*)0,&g_7,&g_405.f1},{&g_8,&l_508,&g_8},{(void*)0,&l_507,(void*)0}},{{&g_8,&l_500,(void*)0},{(void*)0,&l_507,&g_41.f0},{&g_8,&l_497,&g_8}},{{(void*)0,&g_7,&g_405.f1},{&g_8,&l_508,&g_8},{(void*)0,&l_507,(void*)0}},{{&g_8,&l_500,(void*)0},{(void*)0,&l_507,&g_41.f0},{&g_8,&l_497,&g_8}},{{(void*)0,&g_7,&g_405.f1},{&g_8,&l_508,&g_8},{(void*)0,&l_507,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_496[i] = &g_41.f2;
                l_504 = (safe_mod_func_uint16_t_u_u((--g_85), (g_503 = ((((l_500 , ((*l_502) = l_501[0][3][0])) != &g_166[1]) <= 0x99B3F84FL) ^ p_24))));
                if (l_500)
                    continue;
                --g_515[1];
                (*l_506) |= (-1L);
            }
            (*l_535) ^= (((*l_520) &= ((safe_mod_func_int16_t_s_s(l_514, p_24)) & 0x05614B44L)) , (((*g_198) ^ (l_514 &= p_24)) ^ (((g_534[1] = (safe_lshift_func_uint16_t_u_u(((((((g_405 , (g_41.f4--)) & ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((*l_520) = (safe_add_func_uint32_t_u_u(p_24, p_24))) || 7L), p_24)), 5)) , 4294967295UL)) != l_500) , 0xEEL) != 0xCEL) , l_533), g_85))) & g_6[0][2]) | 0x5AF0L)));
            ++l_539;
            for (g_187.f0 = 0; (g_187.f0 <= 2); g_187.f0 += 1)
            { 
                const int16_t **l_549 = &g_548;
                union U2 l_559 = {0x476EC481L};
                int64_t *l_560 = (void*)0;
                uint8_t **l_562 = &g_97;
                int i;
                l_512[g_187.f0] = (l_542[3] == &g_521[1][3][0]);
                (*l_537) |= (safe_sub_func_int32_t_s_s(0x2B4017B7L, (safe_sub_func_uint64_t_u_u(((l_549 = g_547[0]) != (l_550 , &l_520)), (l_514 = (safe_mul_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_24, l_512[g_187.f0])), (*l_538))), l_513)) , l_559) , 0x7CL), p_24)))))));
                for (l_550.f2.f4 = 0; (l_550.f2.f4 <= 1); l_550.f2.f4 += 1)
                { 
                    int32_t l_563[7][1] = {{0L},{0xFAF3B4D2L},{0xFAF3B4D2L},{0L},{0xFAF3B4D2L},{0xFAF3B4D2L},{0L}};
                    int8_t *l_568 = &l_504;
                    int i, j;
                    (*l_535) ^= ((l_561 != l_562) && ((l_563[4][0] = (*g_342)) || (safe_rshift_func_uint16_t_u_s((((*l_568) |= (((0x8068L || 1L) | l_512[g_187.f0]) | ((safe_add_func_uint64_t_u_u(((*g_401) , 18446744073709551615UL), g_138)) , l_559.f0))) <= l_550.f0), 4))));
                    (*l_535) |= 1L;
                    if ((*g_198))
                        continue;
                }
            }
            return p_24;
        }
        (*l_577) = ((((l_569 != &g_341) || (l_570 , ((safe_rshift_func_int16_t_s_u((g_521[0][6][0] = 8L), 11)) != (g_405.f1 = 0xC397C904L)))) & (!((*l_576) = (p_24 ^ (((safe_rshift_func_int16_t_s_u(p_24, g_6[1][2])) > l_504) >= 0x8D89L))))) || p_24);
        return p_24;
    }
    else
    { 
        uint8_t l_578 = 0x6CL;
        int32_t *l_581 = &l_570.f0;
        struct S1 *l_582[4][7][5] = {{{&l_570,(void*)0,(void*)0,(void*)0,&l_570},{&l_570,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&g_41,&g_41,&l_570},{&l_570,&l_570,&g_41,&l_570,&l_570},{&l_570,&g_41,&g_41,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&g_41},{&l_570,&g_41,&l_570,&g_41,&l_570}},{{&g_41,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&g_41,&g_41,&l_570},{&l_570,&l_570,&g_41,&l_570,&l_570},{&l_570,&g_41,&g_41,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&g_41},{&l_570,&g_41,&l_570,&g_41,&l_570},{&g_41,&l_570,&l_570,&l_570,&l_570}},{{&l_570,&l_570,&g_41,&g_41,&l_570},{&l_570,&l_570,&g_41,&l_570,&l_570},{&l_570,&g_41,&g_41,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&g_41},{&l_570,&g_41,&l_570,&g_41,&l_570},{&g_41,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&g_41,&g_41,&l_570}},{{&l_570,&l_570,&g_41,&l_570,&l_570},{&l_570,&g_41,&g_41,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&g_41},{&l_570,&g_41,&l_570,&g_41,&l_570},{&g_41,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&g_41,&g_41,&l_570},{&l_570,&l_570,&g_41,&l_570,&l_570}}};
        uint32_t l_617 = 0x41A81CB0L;
        const uint8_t l_655 = 1UL;
        const union U2 l_719 = {0UL};
        int32_t l_727 = 0x284B0647L;
        int32_t l_742 = 0x2546AE9CL;
        int32_t l_744 = 0xD04C37E2L;
        int32_t l_751 = 1L;
        int64_t *l_863 = &g_749[2][0];
        const union U3 l_873[4][6] = {{{0x4FL},{0x24L},{0x37L},{0x24L},{0x4FL},{0x4FL}},{{0UL},{0x24L},{0x24L},{0UL},{2UL},{0UL}},{{0UL},{2UL},{0UL},{0x24L},{0x24L},{0UL}},{{0x4FL},{0x4FL},{0x24L},{0x37L},{0x24L},{0x4FL}}};
        struct S0 *l_884 = &l_606;
        int32_t l_919 = 5L;
        int32_t l_921 = (-1L);
        uint16_t *l_966[2][5][6] = {{{&g_923,&g_534[1],&g_534[1],&l_895,&g_923,&g_585[1].f2},{&g_585[1].f2,&l_895,&l_570.f2,&l_570.f2,&l_895,&g_585[1].f2},{&l_570.f2,&l_895,&g_585[1].f2,&g_534[4],&g_923,&g_534[1]},{&g_534[1],&g_534[1],&g_923,&g_534[1],&g_534[1],&l_895},{&g_534[1],&l_570.f2,&g_534[1],&g_534[4],(void*)0,(void*)0}},{{&l_570.f2,&g_923,&g_923,&g_923,&l_895,&g_534[1]},{&g_923,&g_534[1],&g_923,&l_570.f2,(void*)0,&l_570.f2},{&l_895,&g_534[4],&l_895,&g_534[1],(void*)0,&g_585[1].f2},{&g_923,&g_534[1],&g_923,&l_895,&l_895,&g_923},{&g_585[1].f2,&g_585[1].f2,&g_923,&l_895,&g_534[1],&g_534[1]}}};
        int32_t l_993 = 1L;
        int32_t l_994 = 1L;
        uint8_t l_995 = 1UL;
        uint8_t l_1020[6] = {0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL};
        int32_t ***l_1047[1][1][7] = {{{&g_400,&g_400,&g_400,&g_400,&g_400,&g_400,&g_400}}};
        int64_t l_1048 = 0L;
        int i, j, k;
        ++l_578;
    }
    (*l_1098) = l_1097;
    for (l_590.f2.f1 = 0; (l_590.f2.f1 > 32); l_590.f2.f1 = safe_add_func_int32_t_s_s(l_590.f2.f1, 5))
    { 
        int32_t l_1108 = 0xB1ECDA3AL;
        struct S1 ***l_1109 = &g_773;
        int16_t *l_1113 = &g_521[1][5][0];
        uint64_t ****l_1120 = &l_569;
        union U2 l_1133 = {4294967295UL};
        union U2 *l_1151 = &g_1152;
        struct S0 **l_1179 = &g_860;
        int32_t l_1184 = 0x311FE069L;
        int32_t l_1185 = 0x47EA2E25L;
        int32_t l_1186 = (-10L);
        int32_t l_1188 = 0x40E37588L;
        uint32_t l_1219 = 0xFA58DA15L;
        uint8_t *l_1249 = &g_41.f1;
        uint16_t l_1251 = 65535UL;
        union U3 l_1285[3][1] = {{{0UL}},{{0UL}},{{0UL}}};
        int64_t l_1326[4][3][4] = {{{0x680A5A5F9146FFE1LL,(-1L),0x680A5A5F9146FFE1LL,0x1B94CDBB33D04D3DLL},{(-6L),(-4L),0x1B94CDBB33D04D3DLL,0x1B94CDBB33D04D3DLL},{(-1L),(-1L),0x11376CE877B8CA5ELL,(-4L)}},{{(-4L),(-6L),0x11376CE877B8CA5ELL,(-6L)},{(-1L),0x680A5A5F9146FFE1LL,0x1B94CDBB33D04D3DLL,0x11376CE877B8CA5ELL},{(-6L),0x680A5A5F9146FFE1LL,0x680A5A5F9146FFE1LL,(-6L)}},{{0x680A5A5F9146FFE1LL,(-6L),(-1L),(-4L)},{0x680A5A5F9146FFE1LL,(-1L),0x680A5A5F9146FFE1LL,0x1B94CDBB33D04D3DLL},{(-6L),(-4L),0x1B94CDBB33D04D3DLL,0x1B94CDBB33D04D3DLL}},{{(-1L),(-1L),0x11376CE877B8CA5ELL,(-4L)},{(-4L),(-6L),0x11376CE877B8CA5ELL,(-6L)},{(-1L),0x680A5A5F9146FFE1LL,0x1B94CDBB33D04D3DLL,0x11376CE877B8CA5ELL}}};
        uint32_t l_1329 = 0UL;
        int32_t *l_1379 = &g_41.f0;
        uint64_t l_1381 = 0UL;
        int32_t l_1409 = (-10L);
        int32_t l_1412 = 0xC3D585A0L;
        int32_t l_1413 = (-1L);
        int32_t l_1440 = (-9L);
        int32_t l_1441 = 0x2FEAE850L;
        int32_t *l_1455 = (void*)0;
        int i, j, k;
    }
    return p_24;
}



static int8_t  func_25(int16_t  p_26)
{ 
    struct S1 l_441 = {-5L,5UL,0x3E0CL,0UL,0x4A9C5D72L,1L};
    int32_t *l_442 = (void*)0;
    int32_t *l_443 = (void*)0;
    int32_t *l_444 = &g_41.f0;
    int8_t *l_453 = &g_166[1];
    int8_t *l_454 = &g_166[1];
    int8_t **l_455 = &l_454;
    int8_t **l_456 = (void*)0;
    int8_t *l_457 = (void*)0;
    int32_t *l_458 = &g_405.f1;
    int32_t *l_459 = (void*)0;
    int32_t *l_460 = (void*)0;
    int32_t *l_461 = (void*)0;
    int32_t *l_462[5];
    uint64_t l_463 = 0xEEDF3F2544A887ACLL;
    int i;
    for (i = 0; i < 5; i++)
        l_462[i] = (void*)0;
    (*l_444) ^= (l_441 , 6L);
    (*l_444) = ((p_26 || ((g_2 & ((safe_sub_func_int16_t_s_s(((g_7 < (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((void*)0 != l_453), (((*l_455) = l_454) == (l_457 = &g_166[1])))) ^ p_26) != 1L), (*l_444)))) , (*l_444)), g_225[0])) > 3UL)) <= (-3L))) & g_85);
    ++l_463;
    for (g_22.f2.f4 = 0; (g_22.f2.f4 <= 25); g_22.f2.f4 = safe_add_func_int16_t_s_s(g_22.f2.f4, 6))
    { 
        int64_t l_473 = 0xF8DDCED69E62C405LL;
        for (g_41.f5 = (-8); (g_41.f5 < (-29)); g_41.f5--)
        { 
            struct S0 *l_470 = &g_405;
            struct S0 **l_471 = &l_470;
            int32_t l_472[5][6][3] = {{{0x184A4C1BL,0x34FCF984L,0x34FCF984L},{0x34FCF984L,(-1L),0x086CC4ADL},{0xEC2A0033L,0x50F9E5B1L,0x086CC4ADL},{(-1L),0x086CC4ADL,0x34FCF984L},{0xDE517D60L,0x28938DB9L,0L},{0x086CC4ADL,0x086CC4ADL,0x28938DB9L}},{{0x5C8B4A97L,0x50F9E5B1L,0x2928B959L},{0x5C8B4A97L,(-1L),0xDE517D60L},{0x086CC4ADL,0x34FCF984L,0x50F9E5B1L},{0xDE517D60L,0x5C8B4A97L,0xDE517D60L},{(-1L),0xB7FCA536L,0x2928B959L},{0xEC2A0033L,0xB7FCA536L,0x28938DB9L}},{{0x34FCF984L,0x5C8B4A97L,0L},{0x184A4C1BL,0x34FCF984L,0x34FCF984L},{0x34FCF984L,(-1L),0x086CC4ADL},{0xEC2A0033L,0x50F9E5B1L,0x086CC4ADL},{(-1L),0x086CC4ADL,0x34FCF984L},{0xDE517D60L,0x28938DB9L,0L}},{{0x086CC4ADL,0x086CC4ADL,0x28938DB9L},{0x5C8B4A97L,0x50F9E5B1L,0x2928B959L},{0x5C8B4A97L,(-1L),0xDE517D60L},{0x086CC4ADL,0x34FCF984L,0x50F9E5B1L},{0xDE517D60L,0x5C8B4A97L,0xDE517D60L},{(-1L),0xB7FCA536L,0x2928B959L}},{{0xEC2A0033L,0xB7FCA536L,0x28938DB9L},{0x34FCF984L,0x5C8B4A97L,0L},{0x184A4C1BL,0x34FCF984L,0x34FCF984L},{0x34FCF984L,(-1L),0x086CC4ADL},{0xEC2A0033L,0x50F9E5B1L,0x086CC4ADL},{(-1L),0x086CC4ADL,0x34FCF984L}}};
            int i, j, k;
            (*l_444) |= (3UL != g_405.f0);
            (*l_471) = l_470;
            --g_474;
            if (p_26)
                break;
        }
    }
    return g_405.f1;
}



static int64_t  func_27(union U3  p_28, uint32_t  p_29, const uint8_t  p_30, uint64_t  p_31, union U2  p_32)
{ 
    const uint16_t l_234[6] = {0xED1EL,0xED1EL,0xCC4EL,0xED1EL,0xED1EL,0xCC4EL};
    const uint8_t *l_258 = (void*)0;
    int32_t l_266 = 5L;
    int32_t l_267 = 0xE08290AFL;
    int32_t *l_328 = &g_187.f1;
    uint64_t l_334 = 0x51F88785A1AA5757LL;
    uint64_t **l_426[4][7] = {{&g_342,&g_342,&g_342,(void*)0,&g_342,&g_342,&g_342},{&g_342,&g_342,(void*)0,&g_342,&g_342,&g_342,(void*)0},{(void*)0,(void*)0,&g_342,&g_342,&g_342,(void*)0,&g_342},{(void*)0,&g_342,&g_342,(void*)0,&g_342,&g_342,(void*)0}};
    int64_t *l_438 = &g_225[1];
    int i, j;
    for (p_32.f2.f2 = 19; (p_32.f2.f2 == 52); p_32.f2.f2++)
    { 
        int16_t l_215 = 6L;
        int64_t *l_224[2];
        struct S1 l_230 = {0xE5195207L,255UL,65530UL,2UL,0xAB7F0B09L,6L};
        uint16_t *l_232 = &g_85;
        uint32_t *l_233 = &l_230.f4;
        int64_t l_242 = (-1L);
        int8_t *l_250[2][3][3] = {{{&g_166[0],&g_166[0],&g_166[0]},{&g_166[0],&g_166[1],&g_166[0]},{&g_166[0],&g_166[0],&g_166[0]}},{{&g_166[0],&g_166[1],&g_166[0]},{&g_166[0],&g_166[0],&g_166[0]},{&g_166[0],&g_166[1],&g_166[0]}}};
        uint64_t **l_368 = &g_342;
        uint64_t ***l_418 = (void*)0;
        int32_t l_435 = 0xDE4F27F6L;
        int32_t l_437 = 0x2C07887BL;
        int32_t *l_440 = &g_41.f5;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_224[i] = &g_225[0];
        if ((p_32.f1 ^ ((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((l_215 <= (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((*l_233) = (safe_add_func_uint32_t_u_u((g_166[1] & (g_225[1] = (-9L))), (safe_sub_func_uint32_t_u_u(((((*l_232) ^= (safe_sub_func_uint8_t_u_u(((l_215 | (l_230 , (safe_unary_minus_func_int32_t_s((g_8 >= p_31))))) | l_215), (-10L)))) <= 65533UL) ^ l_230.f0), p_29))))), l_234[1])), 0x916890952E1ABEA0LL)), 0L))), p_31)), 0x293B4966L)) <= 0UL)))
        { 
            int32_t *l_235 = &g_41.f5;
            int32_t **l_247 = &l_235;
            if (l_230.f4)
                break;
            (*l_235) = p_28.f0;
            for (g_41.f4 = 0; (g_41.f4 <= 1); g_41.f4 += 1)
            { 
                int i;
                return g_166[g_41.f4];
            }
            (*l_247) = ((g_22 , (((((((safe_div_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((((g_225[0] = (l_242 != (safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(0xCAE3F3AD76B04D15LL, (*l_235))), ((**g_135) < 253UL))))) ^ ((&g_138 != &p_29) < 8L)) , 0xA4L) < (**g_135)), (-4L))) > g_6[0][0]), l_234[1])) ^ l_234[5]) ^ 4294967290UL) , g_187.f0) , 0x83B3E919L) , g_187.f0) & g_6[1][1])) , l_235);
        }
        else
        { 
            uint16_t l_253 = 0x83B5L;
            for (g_187.f0 = 0; (g_187.f0 != 28); g_187.f0 = safe_add_func_int16_t_s_s(g_187.f0, 4))
            { 
                int8_t **l_251 = &l_250[1][1][0];
                int32_t *l_252 = &g_22.f2.f5;
                uint32_t l_259 = 18446744073709551608UL;
                (*l_252) = (&g_166[1] == ((*l_251) = l_250[0][1][2]));
                ++l_253;
                (*l_252) = (safe_add_func_int16_t_s_s((((*g_135) != (void*)0) && p_29), ((l_253 > (g_41 , (((g_159 <= ((((l_258 == (void*)0) ^ p_32.f1) == (-5L)) , p_32.f0)) , l_259) >= 0x2EACL))) & g_41.f0)));
            }
        }
        if (l_234[1])
            continue;
        if ((*g_198))
            break;
        if (p_32.f1)
        { 
            int32_t *l_260 = &l_230.f5;
            int32_t *l_261 = (void*)0;
            int32_t *l_262 = &g_22.f2.f5;
            int32_t *l_263 = &l_230.f0;
            int32_t *l_264 = &g_22.f2.f0;
            int32_t *l_265[6] = {&g_22.f2.f5,&g_7,&g_7,&g_22.f2.f5,&g_7,&g_7};
            int8_t l_331 = 0x8EL;
            const uint8_t *l_396 = (void*)0;
            uint64_t ** const l_416 = &g_342;
            int i;
            g_268--;
            if ((l_215 | (safe_add_func_uint8_t_u_u(247UL, l_234[1]))))
            { 
                int64_t l_283 = 9L;
                uint8_t l_295[2];
                uint64_t *l_317 = (void*)0;
                uint64_t *l_318 = &g_159;
                int32_t l_333 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_295[i] = 0x13L;
                (*l_263) |= (((safe_div_func_uint8_t_u_u(((((*l_232) &= ((((safe_rshift_func_int8_t_s_u(5L, ((safe_add_func_int8_t_s_s(l_234[2], p_30)) || 1L))) != ((safe_rshift_func_int8_t_s_s(p_31, g_41.f1)) >= ((((((((l_283 = (7UL < p_31)) >= l_267) , (**g_135)) == 0x1FL) , 0x2ADA2610L) < g_284) , 0xDF71L) || g_41.f4))) || g_225[0]) >= g_225[1])) , l_232) == (void*)0), l_242)) , g_22.f0) != l_234[3]);
                for (l_230.f5 = 0; (l_230.f5 <= 1); l_230.f5 += 1)
                { 
                    int32_t *l_287 = &g_187.f1;
                    int i;
                    (*l_263) = ((safe_div_func_int16_t_s_s(((((*l_287) = 6L) , ((safe_rshift_func_int16_t_s_s(g_166[l_230.f5], 13)) || (((l_224[l_230.f5] = (((~((safe_unary_minus_func_int16_t_s(g_166[l_230.f5])) && (((safe_add_func_int8_t_s_s(g_166[l_230.f5], (0xE2L != ((*g_97) |= (safe_unary_minus_func_uint16_t_u(0UL)))))) , 5UL) < l_234[3]))) ^ l_295[1]) , l_224[l_230.f5])) == &l_242) ^ 0x4D557F31L))) , g_268), p_31)) > (*g_198));
                    return g_225[0];
                }
                (*l_260) &= ((*l_263) = ((~(p_30 ^ ((((*g_97) ^= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((g_268 , l_234[1]), (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_41.f2 <= (((--p_31) && (safe_mod_func_uint32_t_u_u(((1L < p_32.f1) , 0x15CB5FD5L), 8L))) == 0L)), p_32.f1)), p_32.f0)) <= l_230.f0) || (**g_135)), p_30)) < g_7), 5)))), g_187.f0))) , p_32.f1) == (**g_135)))) < l_230.f1));
                if (p_32.f0)
                    continue;
                if ((0x13L >= (safe_div_func_uint64_t_u_u((++(*l_318)), (0x7527264FL && 0x96293FC5L)))))
                { 
                    int8_t l_332 = (-3L);
                    uint64_t ***l_343 = &g_341;
                    (*l_263) = ((~0xED159577L) != (safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0x4878L, (p_30 > ((void*)0 != l_328)))), ((((((safe_div_func_int32_t_s_s(l_266, (*g_198))) && l_266) < 0xD6ACCC04L) | g_8) & g_8) && 0x2DF8891EL))), g_284)));
                    --l_334;
                    (*l_343) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((&g_138 != &p_29), ((void*)0 == l_258))), 15)) , g_341);
                }
                else
                { 
                    int16_t *l_350 = &l_215;
                    struct S1 l_353[3] = {{-1L,253UL,65528UL,6UL,0x70606D16L,0xB05E94A6L},{-1L,253UL,65528UL,6UL,0x70606D16L,0xB05E94A6L},{-1L,253UL,65528UL,6UL,0x70606D16L,0xB05E94A6L}};
                    int i;
                    (*l_262) = ((safe_sub_func_int64_t_s_s(p_30, p_29)) != (safe_rshift_func_int16_t_s_s(g_22.f0, ((safe_mod_func_int16_t_s_s(((-8L) & (((*l_350) ^= p_29) , ((safe_rshift_func_uint8_t_u_s(0x45L, 2)) > (((l_234[4] , l_353[1]) , 0xC9011C2DL) != 0UL)))), l_230.f0)) != 0L))));
                }
            }
            else
            { 
                uint16_t l_364[1][3];
                int16_t *l_384 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_364[i][j] = 1UL;
                }
                if ((*g_198))
                    break;
                if ((*g_198))
                { 
                    uint64_t ***l_369 = (void*)0;
                    uint64_t ***l_370 = &l_368;
                    int32_t l_372 = 7L;
                    int16_t *l_373 = &l_215;
                    (*l_263) = (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((*l_373) = ((func_42((p_32.f1 > (p_31 <= ((safe_add_func_uint16_t_u_u((p_28 , (l_372 = ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*g_97) = (((l_364[0][2] != ((((!((*l_233) = (safe_lshift_func_uint8_t_u_s(p_32.f0, ((((*l_370) = l_368) == &g_342) < g_268))))) >= 0xD2FEC2D7AEABBF70LL) >= g_371[5][1]) , 0L)) <= 0x67D4L) <= p_30)), 0x0CL)), p_32.f0)) ^ 1L))), p_30)) != p_29))), p_31) , (*g_198)) || g_6[0][1])) , &g_135) == (void*)0), 12)), (*g_342)));
                }
                else
                { 
                    int16_t **l_385 = &l_384;
                    int32_t l_395 = 0x1F3302C1L;
                    int8_t *l_397 = &l_331;
                    g_41.f0 |= (((l_230.f4 & ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(g_41.f3, (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((*l_385) = l_384) == &l_215), l_364[0][2])), (safe_rshift_func_uint16_t_u_s((~(safe_mul_func_uint16_t_u_u(0UL, (((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((l_230.f0 = (0L && (*l_260))), (*g_136))) && l_234[1]), l_364[0][1])) >= l_395) | l_230.f5)))), g_85)))))) , l_396) == (*g_135)), p_28.f0)) >= 0UL), 0x1156L)) <= p_28.f0)) , l_258) != l_397);
                    return p_28.f0;
                }
            }
            for (g_268 = 0; (g_268 != 38); ++g_268)
            { 
                int16_t l_402 = 0xE528L;
                for (g_187.f2.f1 = 0; (g_187.f2.f1 <= 1); g_187.f2.f1 += 1)
                { 
                    g_400 = &l_328;
                }
                return l_402;
            }
            if ((((p_32 , (safe_lshift_func_int16_t_s_u((((*l_232) |= ((g_405 , 0xF7L) & ((safe_sub_func_int32_t_s_s((*g_198), (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(0UL, 0)) <= p_32.f0) ^ ((p_30 , p_30) , p_31)), p_32.f1)))) | g_138))) <= 0xB808L), 13))) != g_41.f2) || p_29))
            { 
                int32_t **l_412 = &l_263;
                uint64_t ***l_415[6];
                uint64_t ****l_417 = &l_415[1];
                int i;
                for (i = 0; i < 6; i++)
                    l_415[i] = &l_368;
                (*l_412) = &g_8;
                (*l_262) = (func_42(p_30, ((l_230.f0 = (((0xF4L != (((l_368 = l_368) != l_416) , (l_230.f5 = g_41.f5))) , p_28.f0) || ((((*l_417) = &g_341) != l_418) == p_28.f0))) , (*l_260))) , p_28.f0);
                g_405.f1 |= (+(((void*)0 == &g_225[0]) | (((((--(**g_341)) != (l_230.f0 = (l_426[3][3] != &g_342))) & g_371[5][1]) ^ ((safe_rshift_func_int8_t_s_s((-1L), ((*g_341) == (*g_341)))) & (*g_198))) == p_32.f0)));
            }
            else
            { 
                int32_t **l_429 = &l_260;
                (*l_429) = (void*)0;
                if (l_242)
                    break;
            }
            if ((*g_198))
                continue;
        }
        else
        { 
            return p_32.f1;
        }
        (*l_440) = (((*g_135) != (((l_230.f0 = (l_230.f5 = p_30)) <= ((!(g_439 |= ((safe_add_func_int8_t_s_s((((l_437 = (l_334 || (safe_div_func_uint8_t_u_u((((l_435 = p_32.f1) || p_31) != ((safe_unary_minus_func_uint16_t_u((1UL <= 1L))) >= g_166[1])), p_28.f0)))) , (void*)0) != l_438), l_334)) | (*g_342)))) > g_41.f2)) , (void*)0)) != (*g_136));
    }
    return g_405.f0;
}



static uint64_t  func_34(uint32_t  p_35, int32_t * p_36, int32_t * p_37, struct S1  p_38, const uint16_t  p_39)
{ 
    int32_t l_59[1][5];
    const uint32_t l_60[2][2][6] = {{{0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL},{0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL}},{{0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL},{0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL,0x627F1A9FL}}};
    int32_t l_205 = 0xE0336C12L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_59[i][j] = 0L;
    }
    l_205 ^= (func_42((safe_add_func_uint16_t_u_u((g_41.f4 <= ((func_47(p_36, g_41.f1, (safe_mul_func_int8_t_s_s(((!((safe_lshift_func_uint16_t_u_u(p_35, 7)) <= (!((0x5CL >= (safe_div_func_int64_t_s_s((4L || (((void*)0 == &g_2) >= 0x123EFBB05D09421ALL)), l_59[0][4]))) > g_8)))) != l_60[0][1][2]), l_59[0][0]))) ^ g_41.f1) >= l_59[0][4])), l_59[0][4])), (*g_136)) , 0x89A5802AL);
    return g_7;
}



static struct S1  func_42(uint16_t  p_43, uint8_t  p_44)
{ 
    int32_t *l_197 = &g_6[0][1];
    struct S0 l_201 = {0x798DL,0x4D21E74EL,0x4448CB30L,0xBCC87407L,0x9BD9L};
    uint16_t *l_202 = &g_85;
    int32_t *l_203 = &g_187.f2.f1;
    struct S1 l_204 = {0xAC0D40F6L,1UL,65535UL,1UL,4294967295UL,0L};
    g_198 = l_197;
    (*l_203) = ((((((-4L) == ((g_6[1][0] != (((*l_202) = (safe_lshift_func_uint8_t_u_s((0xA2L > g_138), ((l_201 , 4294967295UL) == (*l_197))))) , (*g_198))) != 0L)) || (-5L)) <= p_44) == 0L) | 1UL);
    return l_204;
}



static uint32_t  func_47(int32_t * p_48, int32_t  p_49, const uint32_t  p_50)
{ 
    uint16_t l_78 = 0x5C68L;
    uint8_t *l_105 = &g_41.f1;
    const struct S1 l_132[2] = {{0L,0x72L,0x2F80L,18446744073709551612UL,0x30802EBDL,0xE1E780F4L},{0L,0x72L,0x2F80L,18446744073709551612UL,0x30802EBDL,0xE1E780F4L}};
    int32_t l_139 = 8L;
    struct S0 l_189 = {-1L,9L,0x626EB52EL,0xBB8701C1L,0x6254L};
    int32_t *l_196 = &g_187.f2.f1;
    int i;
    for (g_41.f0 = 0; (g_41.f0 != (-7)); g_41.f0 = safe_sub_func_uint8_t_u_u(g_41.f0, 7))
    { 
        uint8_t l_72 = 0xFBL;
        uint16_t l_94 = 0x95C7L;
        const union U2 l_188 = {0xE7F336F0L};
        if (g_41.f1)
            break;
        for (g_41.f2 = 6; (g_41.f2 <= 36); g_41.f2 = safe_add_func_int16_t_s_s(g_41.f2, 4))
        { 
            const struct S1 l_65 = {1L,0x8FL,0UL,0UL,0xBC4638B1L,0xAE879CFDL};
            uint8_t *l_93[2][5] = {{&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1,&g_41.f1},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t **l_104 = &l_93[1][1];
            int32_t l_106 = 0xFE4DFDC5L;
            const uint8_t *l_134 = &l_72;
            const uint8_t **l_133[5] = {&l_134,&l_134,&l_134,&l_134,&l_134};
            struct S0 l_140 = {9L,-1L,0xDC10E435L,18446744073709551615UL,-10L};
            int i, j;
            (*p_48) = (l_65 , (g_8 > (((safe_div_func_int32_t_s_s((((p_48 != ((l_72 ^ (p_50 == (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_41.f3, (((~p_49) | 0x835AL) , 0xD9L))), 1L)))) , &g_8)) && 0L) <= g_8), 2UL)) ^ l_65.f5) < l_78)));
            if (g_8)
            { 
                return g_2;
            }
            else
            { 
                int32_t *l_79 = &g_41.f5;
                int32_t *l_80 = &g_41.f5;
                int32_t *l_81 = &g_41.f5;
                int32_t *l_82 = &g_41.f5;
                int32_t *l_83 = &g_41.f5;
                int32_t *l_84 = &g_41.f5;
                ++g_85;
                for (l_78 = (-17); (l_78 <= 39); l_78++)
                { 
                    uint16_t l_90[5] = {65530UL,65530UL,65530UL,65530UL,65530UL};
                    int i;
                    --l_90[2];
                }
            }
        }
        l_196 = &g_2;
    }
    return p_49;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_41.f5, "g_41.f5", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_187.f0, "g_187.f0", print_hash_value);
    transparent_crc(g_187.f1, "g_187.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_225[i], "g_225[i]", print_hash_value);

    }
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_371[i][j], "g_371[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_405.f0, "g_405.f0", print_hash_value);
    transparent_crc(g_405.f1, "g_405.f1", print_hash_value);
    transparent_crc(g_405.f2, "g_405.f2", print_hash_value);
    transparent_crc(g_405.f3, "g_405.f3", print_hash_value);
    transparent_crc(g_405.f4, "g_405.f4", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_515[i], "g_515[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_521[i][j][k], "g_521[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_534[i], "g_534[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_585[i].f0, "g_585[i].f0", print_hash_value);
        transparent_crc(g_585[i].f1, "g_585[i].f1", print_hash_value);
        transparent_crc(g_585[i].f2, "g_585[i].f2", print_hash_value);
        transparent_crc(g_585[i].f3, "g_585[i].f3", print_hash_value);
        transparent_crc(g_585[i].f4, "g_585[i].f4", print_hash_value);
        transparent_crc(g_585[i].f5, "g_585[i].f5", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_713[i], "g_713[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_749[i][j], "g_749[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1067[i][j][k], "g_1067[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1152.f0, "g_1152.f0", print_hash_value);
    transparent_crc(g_1152.f1, "g_1152.f1", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1296[i].f0, "g_1296[i].f0", print_hash_value);
        transparent_crc(g_1296[i].f1, "g_1296[i].f1", print_hash_value);

    }
    transparent_crc(g_1333, "g_1333", print_hash_value);
    transparent_crc(g_1360.f0, "g_1360.f0", print_hash_value);
    transparent_crc(g_1360.f1, "g_1360.f1", print_hash_value);
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1395, "g_1395", print_hash_value);
    transparent_crc(g_1410, "g_1410", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1411[i], "g_1411[i]", print_hash_value);

    }
    transparent_crc(g_1800, "g_1800", print_hash_value);
    transparent_crc(g_1855, "g_1855", print_hash_value);
    transparent_crc(g_1883.f0, "g_1883.f0", print_hash_value);
    transparent_crc(g_1883.f1, "g_1883.f1", print_hash_value);
    transparent_crc(g_1883.f2, "g_1883.f2", print_hash_value);
    transparent_crc(g_1883.f3, "g_1883.f3", print_hash_value);
    transparent_crc(g_1883.f4, "g_1883.f4", print_hash_value);
    transparent_crc(g_1883.f5, "g_1883.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2045[i], "g_2045[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
