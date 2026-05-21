// SPDX-License-Identifier: MIT
// cctest_csmith_dc24cafc.c --- cctest case csmith_dc24cafc (csmith seed 3693398780)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf7f3790 */

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

// Options:   -s 3693398780 -o /tmp/csmith_gen__v7gtku_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   int16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   int32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   const struct S0  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int32_t  f0;
   int16_t  f1;
   int64_t  f2;
   const int8_t  f3;
   uint8_t  f4;
   struct S0  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint64_t  f0;
};
#pragma pack(pop)

union U4 {
   int8_t  f0;
   const uint8_t  f1;
   struct S0  f2;
};


static int32_t g_2 = 0L;
static int32_t g_5[4] = {1L,1L,1L,1L};
static int64_t g_29 = 0x0EC0DCEE05243B9CLL;
static int64_t g_36 = 0x563CFEBDAB6AC39BLL;
static uint8_t g_38 = 0x26L;
static struct S0 g_53 = {0xE0L,-6L,18446744073709551610UL,0x637EL,0xC691C6C8L};
static union U4 g_75[4][5] = {{{0x8EL},{0x03L},{4L},{0x55L},{0x55L}},{{4L},{0x03L},{4L},{-5L},{0x03L}},{{0x55L},{1L},{-5L},{0x55L},{-5L}},{{0x55L},{0x55L},{4L},{0x03L},{0x8EL}}};
static struct S3 g_79 = {0x2EE889C39DB43F15LL};
static struct S3 g_81 = {18446744073709551615UL};
static struct S2 g_128 = {-7L,0L,7L,1L,0xF4L,{255UL,0x3E80L,18446744073709551615UL,0x170AL,0x4D15AFFBL}};
static int16_t g_148 = 0x2D81L;
static int32_t g_168[5][4] = {{0L,0x53B9236EL,5L,0xD53C73CEL},{(-1L),0x53B9236EL,0x53B9236EL,(-1L)},{0x53B9236EL,(-1L),0L,0xC7CBC0A3L},{0x53B9236EL,0L,0x53B9236EL,5L},{(-1L),0xC7CBC0A3L,5L,5L}};
static uint16_t g_172 = 0UL;
static uint64_t g_215[3][5] = {{0xD8ECEE319E1ED03BLL,0xD8ECEE319E1ED03BLL,0x4820B1D2C0F4AEB9LL,0x3F8CE4E9EF1CF844LL,0x4820B1D2C0F4AEB9LL},{1UL,1UL,0x4820B1D2C0F4AEB9LL,0x3F8CE4E9EF1CF844LL,0x4820B1D2C0F4AEB9LL},{1UL,1UL,0x4820B1D2C0F4AEB9LL,0x3F8CE4E9EF1CF844LL,0x4820B1D2C0F4AEB9LL}};
static struct S1 g_232 = {{0xD3L,0x6530L,0xBD755E53L,4UL,6L},{0x2FL,0xD7CBL,8UL,1UL,0L}};
static int32_t g_251 = 5L;
static uint16_t g_290[4][4][4] = {{{0x69B5L,65532UL,65532UL,0x69B5L},{65532UL,0x69B5L,65532UL,65532UL},{0x69B5L,0x69B5L,0x7371L,0x69B5L},{0x69B5L,65532UL,65532UL,0x69B5L}},{{65532UL,0x69B5L,65532UL,65532UL},{0x69B5L,0x69B5L,0x7371L,0x69B5L},{0x69B5L,65532UL,65532UL,0x69B5L},{65532UL,0x69B5L,65532UL,65532UL}},{{0x69B5L,0x69B5L,0x7371L,0x69B5L},{0x69B5L,65532UL,65532UL,0x69B5L},{65532UL,0x69B5L,65532UL,65532UL},{0x69B5L,0x69B5L,0x7371L,0x69B5L}},{{0x69B5L,65532UL,65532UL,0x69B5L},{65532UL,0x69B5L,65532UL,65532UL},{0x69B5L,0x69B5L,0x7371L,0x69B5L},{0x69B5L,65532UL,65532UL,0x69B5L}}};
static uint8_t g_323[2][5][5] = {{{0x9DL,255UL,0x9DL,255UL,0x9DL},{0xCAL,0xCAL,0xCAL,0xCAL,0xCAL},{0x9DL,255UL,0x9DL,255UL,0x9DL},{0xCAL,0xCAL,0xCAL,0xCAL,0xCAL},{0x9DL,255UL,0x9DL,255UL,0x9DL}},{{0xCAL,0xCAL,0xCAL,0xCAL,0xCAL},{0x9DL,255UL,0x9DL,255UL,0x9DL},{0xCAL,0xCAL,0xCAL,0xCAL,0xCAL},{0x9DL,255UL,0x9DL,255UL,0x9DL},{0xCAL,0xCAL,0xCAL,0xCAL,0xCAL}}};
static int32_t g_362 = 1L;
static uint32_t g_364 = 0x12CE1CFEL;
static int64_t g_382[3] = {0x45ED04191B9CB308LL,0x45ED04191B9CB308LL,0x45ED04191B9CB308LL};
static int32_t g_423 = 0xDE4E45C5L;
static union U4 g_457[3][4][3] = {{{{0x1EL},{0x28L},{9L}},{{0x7CL},{0x28L},{-1L}},{{-3L},{0L},{5L}},{{0x90L},{-3L},{-3L}}},{{{-3L},{-1L},{-6L}},{{0x7CL},{0x31L},{-6L}},{{0x1EL},{-6L},{-3L}},{{0xCAL},{-1L},{5L}}},{{{-6L},{-6L},{-1L}},{{0L},{0x31L},{9L}},{{0L},{-1L},{0xCAL}},{{-6L},{-3L},{0x31L}}}};



static uint32_t  func_1(void);
static const struct S0  func_8(uint64_t  p_9, uint8_t  p_10, uint16_t  p_11, union U4  p_12, uint32_t  p_13);
static uint16_t  func_16(uint8_t  p_17, uint16_t  p_18);
static union U4  func_20(int32_t  p_21);




static uint32_t  func_1(void)
{ 
    int64_t l_19 = 0x74EDF0EBF90350D8LL;
    struct S3 l_468 = {0xCCC9B57DBA42387DLL};
    uint64_t l_488 = 0x80FB9E73C3EBBE69LL;
    for (g_2 = 0; (g_2 >= 29); ++g_2)
    { 
        int32_t l_456 = 1L;
        struct S0 l_462[3][4] = {{{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L}},{{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L}},{{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L},{0x43L,0xE176L,1UL,0x1269L,1L}}};
        int32_t l_475 = 0x0EB82280L;
        int i, j;
        for (g_5[2] = (-15); (g_5[2] < (-7)); ++g_5[2])
        { 
            l_462[0][1] = func_8((0x018DL && (g_5[2] || (safe_lshift_func_uint16_t_u_u(func_16(l_19, (func_20(l_19) , 0x79CEL)), g_382[1])))), l_456, g_128.f0, g_457[1][0][2], g_5[0]);
        }
        if (l_19)
            continue;
        l_475 = ((safe_mul_func_int16_t_s_s(((((l_462[0][1].f4 = (safe_unary_minus_func_uint64_t_u(g_232.f0.f2))) & ((l_468 = g_81) , ((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(l_468.f0, ((((safe_add_func_uint64_t_u_u(l_19, g_232.f0.f0)) != l_456) > l_468.f0) <= g_128.f3))) & g_75[1][4].f0) && 4294967286UL), (-1L))) != g_232.f0.f0))) <= 4294967292UL) & l_462[0][1].f2), l_19)) == g_457[1][0][2].f1);
    }
    for (g_232.f0.f0 = (-21); (g_232.f0.f0 == 12); g_232.f0.f0 = safe_add_func_uint32_t_u_u(g_232.f0.f0, 5))
    { 
        struct S3 l_478 = {0x670A1A4AA381EEB8LL};
        int16_t l_487 = 0xEF0AL;
        int32_t l_500 = 3L;
        struct S0 l_501[3] = {{0x5BL,0L,18446744073709551615UL,0x6CBCL,-7L},{0x5BL,0L,18446744073709551615UL,0x6CBCL,-7L},{0x5BL,0L,18446744073709551615UL,0x6CBCL,-7L}};
        int i;
        if (l_468.f0)
            break;
        l_478 = l_468;
        for (g_232.f0.f3 = (-7); (g_232.f0.f3 == 40); ++g_232.f0.f3)
        { 
            uint8_t l_502 = 1UL;
        }
    }
    return l_19;
}



static const struct S0  func_8(uint64_t  p_9, uint8_t  p_10, uint16_t  p_11, union U4  p_12, uint32_t  p_13)
{ 
    uint8_t l_458 = 1UL;
    const struct S0 l_461 = {6UL,-1L,0UL,0x5ACAL,-1L};
    --l_458;
    return l_461;
}



static uint16_t  func_16(uint8_t  p_17, uint16_t  p_18)
{ 
    uint64_t l_120 = 18446744073709551615UL;
    int32_t l_123 = 0x58E79FDCL;
    struct S3 l_125 = {18446744073709551615UL};
    uint16_t l_137 = 0xB8DAL;
    struct S2 l_167 = {0L,0xCE81L,0x1E77F117623E6EA0LL,-1L,0x9FL,{0xAAL,3L,0x590BC55DL,0xBA14L,-9L}};
    struct S1 l_176 = {{0xD5L,-8L,18446744073709551615UL,6UL,-1L},{255UL,0x790BL,0x2FE8C5B5L,65532UL,0xB7ED1FF4L}};
    int8_t l_177 = 0x40L;
    uint64_t l_194 = 6UL;
    int32_t l_199 = 0xF9448B16L;
    int32_t l_200 = 0xF4611E25L;
    int32_t l_201 = 0L;
    int32_t l_204 = 0x78667223L;
    int32_t l_206 = 4L;
    int32_t l_207 = 0x1ACB922DL;
    int32_t l_209 = 6L;
    int32_t l_211[3][1];
    int8_t l_235 = 6L;
    int64_t l_284 = (-4L);
    int64_t l_401 = 0x0449663793A32E63LL;
    int64_t l_421 = 1L;
    uint64_t l_453 = 18446744073709551610UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_211[i][j] = 0x130ACF16L;
    }
lbl_402:
    if (((safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((4UL | p_18) != ((safe_div_func_int16_t_s_s((g_53.f1 , 9L), 9UL)) && 0x49B202198C401198LL)), l_120)) < p_18) || 0L), 0x4314L)) | g_53.f1))
    { 
        struct S3 l_124[3][1][2] = {{{{0xA01E2AC5FADB94C9LL},{0xA01E2AC5FADB94C9LL}}},{{{0xA01E2AC5FADB94C9LL},{0xA01E2AC5FADB94C9LL}}},{{{0xA01E2AC5FADB94C9LL},{0xA01E2AC5FADB94C9LL}}}};
        int16_t l_129 = 0L;
        int32_t l_153 = 0L;
        int32_t l_169 = 0L;
        int32_t l_170 = (-8L);
        int32_t l_171 = (-7L);
        struct S0 l_175 = {247UL,-1L,0x1BD8FF20L,0UL,0L};
        int32_t l_208 = 0x5D3D94BFL;
        int32_t l_212 = 0L;
        int32_t l_213 = 0xFBF7B5BDL;
        int32_t l_214 = 0L;
        int32_t l_250 = 0x88609A67L;
        int32_t l_263 = 0xBA44B068L;
        int32_t l_286 = (-1L);
        int64_t l_288 = 0x3893D39C3C4A1115LL;
        int32_t l_289 = 0xC9C8E147L;
        int i, j, k;
        l_123 = (safe_mul_func_int16_t_s_s(0x9B2EL, (g_5[2] , 0xFDDBL)));
        for (g_53.f1 = 0; (g_53.f1 >= 0); g_53.f1 -= 1)
        { 
            struct S3 l_126[5][3] = {{{0x88E0995485A9B4FBLL},{1UL},{1UL}},{{0x88E0995485A9B4FBLL},{0UL},{0UL}},{{1UL},{0UL},{0UL}},{{1UL},{0UL},{0UL}},{{1UL},{0UL},{0UL}}};
            int i, j;
            l_126[1][1] = (l_125 = g_81);
            if ((+(g_128 , (g_128.f5.f3 ^= (l_129 < (-2L))))))
            { 
                int16_t l_136 = (-6L);
                g_53.f4 |= ((p_17 ^ (((g_29 = (safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_126[1][1].f0, (safe_div_func_uint64_t_u_u(l_136, 0xA156A7B958418D44LL)))), p_17))) != p_17) ^ 0x685B67D8BC617F60LL)) | p_18);
            }
            else
            { 
                g_128.f5.f4 = (0xDCCDL || (p_18 |= 1UL));
            }
            if (l_129)
            { 
                l_137 = 0x7B1BE5FBL;
            }
            else
            { 
                int8_t l_147 = (-7L);
                l_153 = (safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((!g_128.f5.f0) && 0x41200A2DL), ((((safe_mul_func_int16_t_s_s((((g_148 = l_147) ^ (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_75[1][4].f0, l_129)), 5))) >= 0xBAL), p_17)) <= 0L) >= l_126[1][1].f0) ^ l_125.f0))), 4294967293UL)) >= 5UL), (-10L)));
            }
            for (g_128.f4 = 0; (g_128.f4 <= 0); g_128.f4 += 1)
            { 
                return l_126[1][1].f0;
            }
        }
        if (((l_176.f0.f4 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((l_167.f5.f4 = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((l_167 , ((l_129 || (--g_172)) ^ (l_175 , (l_176 , l_177)))), l_167.f2)) , l_176.f1.f4), p_17)))), 246UL))) & p_17), l_167.f5.f2)), p_17)), 5))) < 0xB1D96761L))
        { 
            int32_t l_190 = 0xB0259846L;
            int32_t l_195 = 0xD617F3B7L;
            int32_t l_203 = 5L;
            int32_t l_210 = 0xD646E1C9L;
            struct S3 l_268[3] = {{0x2992A0FD96F209A2LL},{0x2992A0FD96F209A2LL},{0x2992A0FD96F209A2LL}};
            int i;
            if (p_17)
            { 
                uint64_t l_178 = 0x0CA95D42B4722CCFLL;
                int32_t l_193 = 9L;
                int32_t l_196 = 8L;
                int32_t l_197 = 0L;
                int32_t l_198 = 0x5C0E06A6L;
                int32_t l_202 = (-4L);
                int32_t l_205[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_205[i][j] = (-1L);
                }
                l_194 ^= ((++l_178) >= ((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((~l_175.f2) != ((l_123 = p_17) == ((((safe_lshift_func_uint16_t_u_u((p_18 = ((safe_lshift_func_int8_t_s_u(((l_190 == (safe_sub_func_int32_t_s_s(l_175.f4, 6UL))) , g_38), l_190)) >= l_167.f1)), 7)) , p_18) , g_53.f0) <= l_193))) ^ 0xFCC7DE1CL), 18446744073709551615UL)), 0x43L)) >= l_193));
                g_215[1][4]++;
                g_53.f4 = 0xB913E921L;
            }
            else
            { 
                return g_168[1][3];
            }
            if ((safe_unary_minus_func_int64_t_s((g_29 = (safe_rshift_func_int8_t_s_s((-5L), 7))))))
            { 
                g_168[4][2] = 0x1E7D8B5BL;
            }
            else
            { 
                g_168[1][1] ^= (safe_mod_func_uint8_t_u_u((~((safe_div_func_uint32_t_u_u((!g_128.f5.f0), (+(g_75[1][4].f2.f0 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((g_232 , ((safe_add_func_int16_t_s_s((-1L), p_17)) & 4UL)) != l_235), 12)), p_17)))))) <= 1L)), p_17));
            }
            if (((g_168[3][3] = ((((safe_rshift_func_uint16_t_u_s(p_18, (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_18, (g_251 = ((+((((+((((safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((l_199 = (safe_add_func_uint8_t_u_u(l_208, (g_75[1][4].f0 &= l_195)))), l_203)) || g_232.f1.f1), g_53.f3)) , g_38) == 0x417F5783L) > 4294967295UL)) && l_250) > 18446744073709551609UL) , l_210)) > l_170)))), l_176.f0.f2)))) , l_213) > p_18) >= g_128.f5.f3)) >= 0xB8B129FCL))
            { 
                uint64_t l_252 = 5UL;
                int32_t l_260 = (-3L);
                int32_t l_264 = (-8L);
                l_252--;
                l_264 |= (((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((!((p_18 > (++p_17)) , l_201)), (l_212 = p_18))), (l_260 |= p_18))) & l_263) || 251UL);
            }
            else
            { 
                uint64_t l_265 = 0xC4D34D63906056CCLL;
                l_265--;
                l_268[0] = g_79;
            }
        }
        else
        { 
            uint32_t l_271 = 0x92186A3DL;
            int32_t l_281 = 0x7CC90269L;
            int32_t l_282 = 0x97B37DF5L;
            int64_t l_283 = 1L;
            int32_t l_285 = 0L;
            int32_t l_287[2][1][4] = {{{0x337E7697L,0x337E7697L,0x337E7697L,0x337E7697L}},{{0x337E7697L,0x337E7697L,0x337E7697L,0x337E7697L}}};
            int i, j, k;
            for (l_176.f0.f1 = 23; (l_176.f0.f1 <= (-9)); l_176.f0.f1 = safe_sub_func_uint16_t_u_u(l_176.f0.f1, 1))
            { 
                if (g_232.f0.f1)
                    break;
                l_201 = l_271;
            }
            for (g_232.f0.f4 = (-14); (g_232.f0.f4 <= (-3)); g_232.f0.f4 = safe_add_func_uint8_t_u_u(g_232.f0.f4, 3))
            { 
                uint16_t l_276[5] = {0x22B6L,0x22B6L,0x22B6L,0x22B6L,0x22B6L};
                int32_t l_280 = 0xAC96B20FL;
                int i;
                l_276[3] |= ((g_232.f0.f1 |= ((g_36 && (((safe_lshift_func_uint8_t_u_s(p_18, 7)) <= g_75[1][4].f1) ^ ((0L || p_18) || (-1L)))) ^ p_18)) > l_129);
                l_280 &= (((((((safe_sub_func_int64_t_s_s((g_232.f1 , ((l_276[3] , l_276[3]) < ((~p_17) || l_175.f4))), p_18)) & 0x94950BB044F218FDLL) >= l_276[3]) ^ p_17) > g_232.f1.f4) && 0x1CB1931DE071CAB4LL) != 0x43L);
            }
            ++g_290[0][3][3];
        }
    }
    else
    { 
        int32_t l_296 = (-3L);
        struct S2 l_340 = {0x6855F1F0L,0xA9D2L,0x4AD6D7A9326F60E3LL,0x9EL,0xC1L,{246UL,0x1C8CL,0UL,65535UL,0xD2E7ABA4L}};
        int32_t l_383 = 0xBB721227L;
lbl_316:
        for (l_120 = 0; (l_120 <= 2); l_120 += 1)
        { 
            for (g_251 = 2; (g_251 >= 0); g_251 -= 1)
            { 
                int32_t l_293 = 0x73A81244L;
                g_168[3][3] = (p_18 >= p_17);
                return l_293;
            }
            for (g_53.f4 = 0; (g_53.f4 <= 2); g_53.f4 += 1)
            { 
                l_296 &= (safe_rshift_func_int8_t_s_s(0x6DL, 3));
            }
        }
        g_168[2][3] |= (safe_add_func_uint64_t_u_u(((-1L) & (0UL != g_128.f5.f1)), 1UL));
        for (g_128.f2 = (-27); (g_128.f2 > (-5)); ++g_128.f2)
        { 
            const uint64_t l_310 = 18446744073709551615UL;
            int32_t l_311[4][4][3] = {{{(-6L),7L,0x8E7C1B22L},{0x64475752L,0xE89F55EEL,(-4L)},{(-6L),(-8L),(-6L)},{0x64475752L,0xF4F39A29L,0x4CF9F92AL}},{{(-6L),0L,1L},{0x64475752L,(-6L),0x64475752L},{(-6L),7L,0x8E7C1B22L},{0x64475752L,0xE89F55EEL,(-4L)}},{{(-6L),(-8L),(-6L)},{0x64475752L,0xF4F39A29L,0x4CF9F92AL},{(-6L),0L,1L},{0x64475752L,(-6L),0x64475752L}},{{(-6L),7L,0x8E7C1B22L},{0x64475752L,0xE89F55EEL,(-4L)},{(-6L),(-8L),(-6L)},{0x64475752L,0xF4F39A29L,0x4CF9F92AL}}};
            struct S0 l_344 = {0x4BL,0x71C1L,0x9024ED4AL,65531UL,0x227EB909L};
            struct S0 l_345 = {0x56L,0xF982L,5UL,1UL,-9L};
            uint8_t l_363[2][5][3] = {{{0x93L,0x73L,255UL},{255UL,0xE0L,0xB1L},{0x93L,0xE0L,0x93L},{4UL,0x73L,0xB1L},{4UL,0x61L,255UL}},{{0x93L,0x73L,255UL},{255UL,0xE0L,0xB1L},{0x93L,0xE0L,0x93L},{4UL,0x73L,0xB1L},{4UL,0x61L,255UL}}};
            int32_t l_381 = 0x85F2594DL;
            int i, j, k;
            if (((safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(g_148, ((l_311[0][3][1] ^= (+(l_310 && g_53.f4))) | (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((g_172 && p_17) >= p_17), p_18)), 18446744073709551609UL))))) & p_17), 7)), 2)) < g_232.f1.f1), g_172)) < 1UL))
            { 
                if (p_17)
                    break;
                return g_168[3][3];
            }
            else
            { 
                int8_t l_335 = 1L;
                if (l_167.f3)
                    goto lbl_316;
                g_232.f0.f4 = (p_17 && ((safe_lshift_func_int16_t_s_s((l_120 >= (safe_mul_func_uint8_t_u_u(p_17, ((--g_323[0][4][1]) && (((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((((((g_232.f0.f4 != 4UL) < p_18) & l_335) | g_81.f0) && l_311[0][3][2]))), l_167.f0)), g_128.f5.f2)), 3L)), l_335)) && g_232.f1.f3) < g_215[1][3]))))), 2)) | p_17));
                if (p_17)
                    break;
            }
            if ((safe_mod_func_uint32_t_u_u(p_17, ((g_79 , ((safe_rshift_func_int8_t_s_s((g_75[1][4].f0 = (l_340 , (p_17 | p_17))), 4)) > 0xE4FB6FEAL)) & l_311[0][0][2]))))
            { 
                uint8_t l_341[4][3] = {{0xEEL,255UL,255UL},{255UL,0x79L,6UL},{0xEEL,0x79L,0xEEL},{255UL,255UL,6UL}};
                int i, j;
                --l_341[3][0];
            }
            else
            { 
                l_311[0][3][1] &= g_38;
                l_345 = (((l_344 , (l_344.f4 = p_18)) | l_125.f0) , (g_232.f0 = l_340.f5));
            }
            if ((safe_unary_minus_func_int16_t_s((safe_div_func_int64_t_s_s(((((((+(((g_232.f0.f1 > (l_167.f5 , ((g_128.f5.f4 ^= (l_345.f0 > (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((++g_172), (l_340.f5.f4 ^= (safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((65534UL ^ g_362), 0xDD66L)) < 4294967295UL), g_232.f0.f4))))) , l_311[1][2][0]), g_215[1][4])), 0x8235L)))) == l_207))) ^ l_363[1][3][0]) >= l_167.f5.f1)) == g_364) <= 0UL) || p_18) > 0L) , p_18), 0xE7EA915CF9A51A2DLL)))))
            { 
                g_81 = l_125;
            }
            else
            { 
                uint32_t l_367 = 0x77DDFA04L;
                g_128.f5.f4 &= (-10L);
                l_211[2][0] ^= l_363[0][4][2];
                l_383 = (safe_add_func_int64_t_s_s(l_367, (((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((l_296 &= ((safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((l_340.f5.f4 ^= ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_311[1][3][2] = p_17), 7)), ((((l_367 || (l_340.f5.f0 != g_215[1][4])) == g_290[0][3][3]) > l_367) ^ l_363[0][4][1]))) == l_194)) < p_17), p_18)) > (-7L)), 0x2F5EL)) | l_381)) > p_18) & 0UL) == g_382[1]), l_381)), 4294967295UL)) <= p_18))) > 0xABL) <= g_53.f4)));
            }
        }
    }
    for (g_362 = 1; (g_362 >= 0); g_362 -= 1)
    { 
        uint64_t l_386[3];
        int32_t l_389[3][1];
        int32_t l_409 = 0xF5E016AEL;
        int32_t l_410 = (-8L);
        int32_t l_411 = 0L;
        int32_t l_414 = 8L;
        int32_t l_415 = 0L;
        int32_t l_416 = 0xA8BD9216L;
        int32_t l_419 = 0x9FC251ACL;
        int32_t l_420 = 0x5D57F93FL;
        int32_t l_422 = 0xCCC28DFEL;
        int32_t l_424 = 0x54E7B07FL;
        int32_t l_426[2];
        int64_t l_430[4] = {0xBA3816290F1359E4LL,0xBA3816290F1359E4LL,0xBA3816290F1359E4LL,0xBA3816290F1359E4LL};
        int i, j;
        for (i = 0; i < 3; i++)
            l_386[i] = 18446744073709551614UL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_389[i][j] = 0xE2309F4BL;
        }
        for (i = 0; i < 2; i++)
            l_426[i] = 6L;
        g_168[3][1] |= (safe_sub_func_int32_t_s_s((g_232.f0.f4 |= (l_386[1] || (safe_mod_func_uint8_t_u_u((l_123 = (((g_75[1][4].f0 <= g_148) | (g_128.f5.f2 && 0xD140373FL)) || g_53.f0)), 4UL)))), l_386[1]));
        g_251 = l_389[2][0];
        if ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((!(((l_211[2][0] = ((((((l_401 = (safe_mul_func_int16_t_s_s(p_18, (safe_div_func_int16_t_s_s((0xFAL > (safe_mod_func_int16_t_s_s(p_18, g_75[1][4].f0))), (-8L)))))) , l_386[1]) , (-1L)) , g_232) , g_232.f1.f2) | p_17)) < 1L) && l_386[1])), 7)), p_18)))
        { 
            for (g_128.f5.f0 = 0; (g_128.f5.f0 <= 3); g_128.f5.f0 += 1)
            { 
                if (g_36)
                    goto lbl_402;
            }
        }
        else
        { 
            int16_t l_403 = 0xB00EL;
            int32_t l_408 = 0x372414C6L;
            int32_t l_412 = 0x4010D5A0L;
            int32_t l_413 = 6L;
            int32_t l_417 = 0x61460006L;
            int32_t l_418 = 0x3A14165BL;
            int32_t l_425[3][5] = {{0xF6295AF4L,0xD68D60D7L,0xF6295AF4L,0x53FA4B1DL,0x53FA4B1DL},{0xF6295AF4L,0xD68D60D7L,0xF6295AF4L,0x53FA4B1DL,0x53FA4B1DL},{0xF6295AF4L,0xD68D60D7L,0xF6295AF4L,0x53FA4B1DL,0x53FA4B1DL}};
            uint32_t l_427[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_427[i][j] = 0UL;
            }
            l_408 ^= (0x7AFF5056L <= ((p_17 != l_403) ^ (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((l_176.f1.f1 >= (-1L)) , p_17), 14)), l_201))));
            --l_427[0][1];
            if (l_430[3])
                continue;
        }
        for (l_120 = 0; (l_120 <= 3); l_120 += 1)
        { 
            uint16_t l_433 = 0x2492L;
            int32_t l_444 = (-1L);
            int32_t l_445 = 1L;
            int32_t l_448[3][3] = {{0x3C9D2B86L,(-6L),0x3C9D2B86L},{0L,0L,0L},{0x3C9D2B86L,(-6L),0x3C9D2B86L}};
            int i, j;
            if ((l_207 = p_17))
            { 
                g_81 = g_79;
                if (p_17)
                    continue;
            }
            else
            { 
                l_411 = ((((((safe_sub_func_int64_t_s_s(p_18, (-6L))) , (l_415 = p_18)) | (l_424 || g_53.f2)) , (-5L)) , l_433) == (-7L));
                l_207 = 0x479D4E93L;
            }
            for (l_194 = 0; (l_194 <= 1); l_194 += 1)
            { 
                struct S3 l_443[3][3][2] = {{{{4UL},{4UL}},{{4UL},{4UL}},{{4UL},{4UL}}},{{{4UL},{4UL}},{{4UL},{4UL}},{{4UL},{4UL}}},{{{4UL},{4UL}},{{4UL},{4UL}},{{4UL},{4UL}}}};
                int32_t l_446 = 1L;
                int32_t l_447 = 0xA5322FB9L;
                int16_t l_449 = 0xC965L;
                int32_t l_450 = (-1L);
                int32_t l_451 = (-1L);
                int32_t l_452 = 0x5C3BD3D9L;
                int i, j, k;
                g_168[3][3] = (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((g_290[(l_194 + 2)][(g_362 + 2)][(g_362 + 2)] , ((((g_53.f1 ^= 0x26E3L) , (l_424 &= (1L >= (((safe_sub_func_uint64_t_u_u((((!(((g_323[g_362][(l_120 + 1)][l_120] | g_323[l_194][(l_120 + 1)][l_120]) >= p_18) || 0x7CL)) & 1UL) == (-3L)), 0xD69E9B2672286EECLL)) ^ p_18) > 0xDEC3L)))) == 0x1CBCA5BFBA87FD68LL) != g_128.f0)), 0x9372ABC1L)) , g_128.f1), p_17)), p_18));
                l_443[2][1][0] = (g_79 = l_443[2][1][0]);
                ++l_453;
            }
        }
    }
    return l_201;
}



static union U4  func_20(int32_t  p_21)
{ 
    int16_t l_30[4];
    int32_t l_35[5][1] = {{0L},{0xB9567464L},{0L},{0xB9567464L},{0L}};
    int32_t l_37 = (-1L);
    int32_t l_54 = 0x955DF93CL;
    int32_t l_61 = (-3L);
    struct S3 l_80 = {0x45EF5D7AD1849914LL};
    uint32_t l_108 = 1UL;
    union U4 l_111 = {-1L};
    int i, j;
    for (i = 0; i < 4; i++)
        l_30[i] = (-1L);
lbl_99:
    g_38 |= (((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_37 ^= ((((!((((g_36 ^= (((safe_lshift_func_int16_t_s_u((g_29 |= p_21), l_30[3])) ^ (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(g_5[2], 1)) >= (((l_35[0][0] = (l_30[2] == p_21)) || 1L) , 18446744073709551615UL)), p_21))) & g_5[3])) || 0xF32215F8F5063F37LL) >= p_21) | g_5[1])) >= g_5[2]) , g_36) != l_30[3])) > g_2), 0L)), g_5[2])) , g_29) < 0UL);
    if ((safe_lshift_func_uint16_t_u_s((0x1FFDL | ((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((~((safe_mul_func_int16_t_s_s(((l_54 = (l_37 = ((l_35[4][0] ^= ((!p_21) | ((((safe_add_func_int32_t_s_s(3L, (safe_mod_func_int8_t_s_s(((g_53 , 9UL) && l_37), p_21)))) ^ l_37) == 0xEFE6L) , l_30[3]))) , g_53.f1))) ^ p_21), l_30[3])) >= l_30[3])), l_30[2])), 1)) > (-1L))), 10)))
    { 
        int64_t l_71 = 0x3ABED3A9A78915CELL;
        struct S3 l_78 = {0x1310E34D29090F62LL};
        union U4 l_82[2] = {{0x88L},{0x88L}};
        int i;
        if ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((p_21 || ((safe_lshift_func_int8_t_s_u(g_5[2], 3)) , p_21)) > 8L), p_21)), l_61)))
        { 
            int8_t l_72 = 0x32L;
            int32_t l_73[2];
            int i;
            for (i = 0; i < 2; i++)
                l_73[i] = 0xA1071FCCL;
            for (g_53.f2 = 0; (g_53.f2 <= 0); g_53.f2 += 1)
            { 
                int64_t l_74 = 0x6D9CD53D6C1C926ALL;
                l_74 ^= ((l_35[2][0] == (safe_add_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((+((~(!l_71)) , (l_73[0] &= ((l_54 = (0x9F15FC87C03C79A3LL < l_72)) == g_29)))), g_5[2])), g_5[2])) || g_53.f4), 0xA7B846FCCBB28B9DLL))) != 0x8580L);
                return g_75[1][4];
            }
        }
        else
        { 
            int32_t l_76[1][3][3] = {{{1L,0xA81B22E0L,1L},{0x2BB9F80BL,0x2BB9F80BL,0x2BB9F80BL},{1L,0xA81B22E0L,1L}}};
            struct S2 l_77[2] = {{0x86FE95B7L,-7L,3L,-5L,1UL,{0xA1L,9L,3UL,0x870FL,0xE569BB21L}},{0x86FE95B7L,-7L,3L,-5L,1UL,{0xA1L,9L,3UL,0x870FL,0xE569BB21L}}};
            int i, j, k;
            l_76[0][1][0] = g_5[2];
            g_81 = (l_80 = ((l_77[0] , g_75[1][4].f1) , (g_79 = l_78)));
        }
        return l_82[0];
    }
    else
    { 
        uint64_t l_96[3];
        union U4 l_104 = {0xC6L};
        struct S3 l_107 = {1UL};
        int i;
        for (i = 0; i < 3; i++)
            l_96[i] = 4UL;
        for (g_53.f1 = 0; (g_53.f1 >= (-23)); --g_53.f1)
        { 
            uint64_t l_85 = 0x68BD1E8AE57A5C46LL;
            int32_t l_95[4][4] = {{0xD9658938L,0xD9658938L,0xD9658938L,0xD9658938L},{0xD9658938L,0xD9658938L,0xD9658938L,0xD9658938L},{0xD9658938L,0xD9658938L,0xD9658938L,0xD9658938L},{0xD9658938L,0xD9658938L,0xD9658938L,0xD9658938L}};
            int i, j;
            l_85 |= l_35[0][0];
            if ((g_53.f4 = l_30[3]))
            { 
                uint32_t l_92 = 0x2D1AE7A5L;
                l_35[0][0] |= ((safe_rshift_func_int8_t_s_s(p_21, (((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(l_92, 9)) || 4294967289UL) <= (safe_sub_func_int16_t_s_s(0L, g_53.f4))), l_92)) < 65526UL) | p_21))) <= g_53.f3);
            }
            else
            { 
                int16_t l_105 = 0x121BL;
                int32_t l_106 = 0xA8A208FDL;
                l_96[0]++;
                if (l_37)
                    goto lbl_99;
                l_106 = ((safe_mul_func_int16_t_s_s(0xBB34L, (((~((p_21 > ((((+((l_104 , l_105) != 1UL)) | l_104.f1) , 1L) > g_53.f2)) || 0xEFL)) > l_105) <= p_21))) == p_21);
            }
            g_75[1][4].f2.f4 = (l_107 , l_104.f1);
        }
    }
    ++l_108;
    return l_111;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_53.f4, "g_53.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_75[i][j].f0, "g_75[i][j].f0", print_hash_value);
            transparent_crc(g_75[i][j].f1, "g_75[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5.f0, "g_128.f5.f0", print_hash_value);
    transparent_crc(g_128.f5.f1, "g_128.f5.f1", print_hash_value);
    transparent_crc(g_128.f5.f2, "g_128.f5.f2", print_hash_value);
    transparent_crc(g_128.f5.f3, "g_128.f5.f3", print_hash_value);
    transparent_crc(g_128.f5.f4, "g_128.f5.f4", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_168[i][j], "g_168[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_172, "g_172", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_215[i][j], "g_215[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_232.f0.f0, "g_232.f0.f0", print_hash_value);
    transparent_crc(g_232.f0.f1, "g_232.f0.f1", print_hash_value);
    transparent_crc(g_232.f0.f2, "g_232.f0.f2", print_hash_value);
    transparent_crc(g_232.f0.f3, "g_232.f0.f3", print_hash_value);
    transparent_crc(g_232.f0.f4, "g_232.f0.f4", print_hash_value);
    transparent_crc(g_232.f1.f0, "g_232.f1.f0", print_hash_value);
    transparent_crc(g_232.f1.f1, "g_232.f1.f1", print_hash_value);
    transparent_crc(g_232.f1.f2, "g_232.f1.f2", print_hash_value);
    transparent_crc(g_232.f1.f3, "g_232.f1.f3", print_hash_value);
    transparent_crc(g_232.f1.f4, "g_232.f1.f4", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_290[i][j][k], "g_290[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_323[i][j][k], "g_323[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_382[i], "g_382[i]", print_hash_value);

    }
    transparent_crc(g_423, "g_423", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_457[i][j][k].f0, "g_457[i][j][k].f0", print_hash_value);
                transparent_crc(g_457[i][j][k].f1, "g_457[i][j][k].f1", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
