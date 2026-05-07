// SPDX-License-Identifier: MIT
// cctest_csmith_2d9c82c1.c --- cctest case csmith_2d9c82c1 (csmith seed 765231809)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x70afff72 */

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

// Options:   -s 765231809 -o /tmp/csmith_gen_usfs2aay/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 31;
   const signed f1 : 26;
   unsigned f2 : 21;
   unsigned f3 : 12;
   const signed f4 : 13;
   signed f5 : 18;
};
#pragma pack(pop)

union U1 {
   unsigned f0 : 8;
   uint8_t  f1;
   uint32_t  f2;
   int32_t  f3;
};


static int32_t g_7[1] = {(-1L)};
static int32_t g_50 = 0x552D49A3L;
static int32_t g_59 = (-1L);
static int32_t g_60 = (-1L);
static int32_t g_61 = 0L;
static int32_t g_62 = 0x20126639L;
static int32_t * const *g_79 = (void*)0;
static int8_t g_87[4][2][4] = {{{1L,0x35L,1L,3L},{1L,3L,1L,0x35L}},{{1L,0x35L,1L,3L},{1L,3L,1L,0x35L}},{{1L,0x35L,1L,3L},{1L,3L,1L,0x35L}},{{1L,0x35L,1L,3L},{1L,3L,1L,0x35L}}};
static uint8_t g_89 = 8UL;
static uint16_t g_92 = 1UL;
static uint8_t g_102 = 0x1EL;
static uint8_t *g_101 = &g_102;
static union U1 g_124[7] = {{0x64E15BF3L},{0x64E15BF3L},{0x64E15BF3L},{0x64E15BF3L},{0x64E15BF3L},{0x64E15BF3L},{0x64E15BF3L}};
static struct S0 g_127 = {-39531,-336,527,43,3,445};
static uint8_t g_135 = 0x69L;
static int64_t g_142 = 0x89D0FCB306C27A06LL;
static int32_t g_143 = 0x3F110F92L;
static uint64_t g_145[3][1] = {{0x0F1F695C9EB641ACLL},{0x0F1F695C9EB641ACLL},{0x0F1F695C9EB641ACLL}};
static uint16_t g_157[3] = {0xA704L,0xA704L,0xA704L};
static uint32_t g_180 = 18446744073709551615UL;
static uint32_t g_183 = 4294967295UL;
static int32_t *g_227[1] = {&g_61};
static int8_t *g_292 = &g_87[1][0][0];
static int8_t **g_291 = &g_292;
static int8_t ***g_290 = &g_291;
static int8_t g_310[1][7] = {{8L,0xACL,0xACL,8L,0xACL,0xACL,8L}};
static const int16_t g_358[5][2] = {{(-1L),0L},{0L,(-1L)},{0L,0L},{(-1L),0L},{0L,(-1L)}};
static const int16_t *g_357[1] = {&g_358[4][1]};
static int16_t g_360 = 0x2105L;
static int16_t *g_359 = &g_360;
static uint64_t *g_375 = &g_145[2][0];
static union U1 *g_407[4] = {&g_124[2],&g_124[2],&g_124[2],&g_124[2]};
static union U1 *g_408 = &g_124[2];
static uint8_t g_415 = 0xA7L;
static int8_t ***g_475 = &g_291;
static int8_t * const *g_530 = (void*)0;
static int8_t * const **g_529 = &g_530;
static int8_t * const ***g_528 = &g_529;
static int8_t * const ****g_527 = &g_528;
static uint8_t g_531 = 0xEEL;
static union U1 **g_703 = &g_407[1];
static union U1 ***g_702 = &g_703;
static const int8_t ***g_706[2] = {(void*)0,(void*)0};
static uint16_t g_816 = 0xA457L;
static int8_t **g_1064 = &g_292;
static uint16_t *g_1079 = (void*)0;
static uint16_t **g_1078 = &g_1079;
static int64_t *g_1084 = &g_142;
static int64_t **g_1083[4][4] = {{(void*)0,&g_1084,(void*)0,&g_1084},{(void*)0,&g_1084,(void*)0,&g_1084},{(void*)0,&g_1084,(void*)0,&g_1084},{(void*)0,&g_1084,(void*)0,&g_1084}};
static struct S0 *g_1136[4] = {&g_127,&g_127,&g_127,&g_127};
static struct S0 **g_1135 = &g_1136[2];
static int32_t g_1143 = 0L;
static uint16_t g_1152[1][4] = {{65535UL,65535UL,65535UL,65535UL}};
static int32_t *g_1199 = &g_62;
static int32_t *g_1316 = &g_1143;
static int32_t **g_1315 = &g_1316;
static int8_t g_1322 = 0L;
static uint32_t g_1356[7][7][5] = {{{0x2C506754L,0xDB074D80L,0xC711C2E1L,0xE1711E7EL,0x11B5B875L},{0x61D91705L,0x30444D89L,0x19A00FFCL,0xC132A3DAL,4294967291UL},{0x4487099CL,4294967291UL,0x8A6D5F1EL,0x7AB41543L,4294967290UL},{0x61D91705L,0x527A996BL,0UL,4294967288UL,0x527A996BL},{0x2C506754L,4294967291UL,1UL,0xE1711E7EL,4294967293UL},{0x46466420L,0x30444D89L,0UL,8UL,4294967291UL},{0x02DA2004L,0xDB074D80L,0x8A6D5F1EL,0xE1711E7EL,0x07BF9631L}},{{0x61D91705L,4294967291UL,0x19A00FFCL,4294967288UL,4294967291UL},{0UL,4294967291UL,0xC711C2E1L,0x7AB41543L,4294967293UL},{0x61D91705L,8UL,0UL,0xC132A3DAL,0x527A996BL},{0x02DA2004L,4294967291UL,3UL,0xE1711E7EL,4294967290UL},{0x46466420L,4294967291UL,0UL,0UL,4294967291UL},{0x2C506754L,0xDB074D80L,0xC711C2E1L,0xE1711E7EL,0x11B5B875L},{0x61D91705L,0x30444D89L,0x19A00FFCL,0xC132A3DAL,4294967291UL}},{{0x4487099CL,4294967291UL,0x8A6D5F1EL,0x7AB41543L,4294967290UL},{0x61D91705L,0x527A996BL,0UL,4294967288UL,0x527A996BL},{0x2C506754L,4294967291UL,1UL,0xE1711E7EL,4294967293UL},{0x46466420L,0x30444D89L,0UL,8UL,4294967291UL},{0x02DA2004L,0xDB074D80L,0x8A6D5F1EL,0xE1711E7EL,0x07BF9631L},{0x61D91705L,4294967291UL,0x19A00FFCL,4294967288UL,4294967291UL},{0UL,4294967291UL,0xC711C2E1L,0x7AB41543L,4294967293UL}},{{0x61D91705L,8UL,0UL,0xC132A3DAL,0x527A996BL},{0x02DA2004L,4294967291UL,3UL,0xE1711E7EL,4294967290UL},{0x46466420L,4294967291UL,0UL,0UL,4294967291UL},{0x2C506754L,0xDB074D80L,0xC711C2E1L,0xE1711E7EL,0x11B5B875L},{0x61D91705L,0x30444D89L,0x19A00FFCL,0xC132A3DAL,4294967291UL},{0x4487099CL,4294967291UL,0x8A6D5F1EL,0x7AB41543L,4294967290UL},{0x61D91705L,0x527A996BL,0UL,4294967288UL,0x527A996BL}},{{0x2C506754L,4294967291UL,4294967293UL,0xDB074D80L,0xC9740E2FL},{0x3785A6D5L,4294967287UL,7UL,0xAE70AECFL,4UL},{0x1AEBF0C5L,0xC283F6EFL,5UL,0xDB074D80L,0x6924D687L},{0xB3A6B147L,4UL,0x30444D89L,8UL,4UL},{4294967295UL,8UL,0x42478C34L,4294967295UL,0xC9740E2FL},{0xB3A6B147L,0UL,7UL,0x527A996BL,8UL},{0x1AEBF0C5L,8UL,4294967290UL,0xDB074D80L,0x4A3BBB6DL}},{{0x3785A6D5L,4UL,7UL,7UL,4UL},{0x14DA6E77L,0xC283F6EFL,0x42478C34L,0xDB074D80L,0UL},{0xB3A6B147L,4294967287UL,0x30444D89L,0x527A996BL,4UL},{0UL,8UL,5UL,4294967295UL,0x4A3BBB6DL},{0xB3A6B147L,8UL,7UL,8UL,8UL},{0x14DA6E77L,8UL,4294967293UL,0xDB074D80L,0xC9740E2FL},{0x3785A6D5L,4294967287UL,7UL,0xAE70AECFL,4UL}},{{0x1AEBF0C5L,0xC283F6EFL,5UL,0xDB074D80L,0x6924D687L},{0xB3A6B147L,4UL,0x30444D89L,8UL,4UL},{4294967295UL,8UL,0x42478C34L,4294967295UL,0xC9740E2FL},{0xB3A6B147L,0UL,7UL,0x527A996BL,8UL},{0x1AEBF0C5L,8UL,4294967290UL,0xDB074D80L,0x4A3BBB6DL},{0x3785A6D5L,4UL,7UL,7UL,4UL},{0x14DA6E77L,0xC283F6EFL,0x42478C34L,0xDB074D80L,0UL}}};
static int64_t g_1399 = 0xEEF42DB048274329LL;
static int16_t g_1468 = 0x8DD6L;
static int32_t g_1479 = 0L;
static uint8_t g_1509 = 255UL;
static uint32_t g_1513 = 7UL;
static int32_t g_1535 = 0x59BC8586L;
static int16_t g_1649 = 0x4652L;
static uint64_t **g_1661 = &g_375;
static uint64_t ***g_1660[5][1] = {{&g_1661},{&g_1661},{&g_1661},{&g_1661},{&g_1661}};
static uint16_t *g_1681 = &g_816;
static const int16_t **g_1709[4][6] = {{&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0]},{&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0]},{&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0]},{&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0],&g_357[0]}};
static int32_t g_1776[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int8_t g_1813[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
static uint64_t g_1828 = 6UL;
static struct S0 ***g_1866 = &g_1135;
static struct S0 ****g_1865 = &g_1866;
static int16_t **g_1881 = &g_359;
static int16_t ***g_1880 = &g_1881;
static int32_t *g_1929 = &g_1776[3];
static const int32_t g_2035 = 0x6669F1EEL;
static int16_t g_2047 = 0xF5A2L;
static uint16_t g_2067 = 65535UL;
static int64_t g_2108 = 0x07D2D7EDCCFD6458LL;
static int32_t g_2182 = 0xA514D5CBL;
static int16_t ****g_2232 = &g_1880;
static int16_t *****g_2231[3][1][4] = {{{&g_2232,&g_2232,&g_2232,&g_2232}},{{&g_2232,&g_2232,&g_2232,&g_2232}},{{&g_2232,&g_2232,&g_2232,&g_2232}}};
static const struct S0 *g_2260 = &g_127;
static const struct S0 **g_2259 = &g_2260;
static const struct S0 ***g_2258 = &g_2259;
static const struct S0 ****g_2257 = &g_2258;
static const struct S0 *****g_2256 = &g_2257;
static const int32_t *g_2284 = &g_59;
static int32_t g_2289 = 0x9638B763L;
static int8_t g_2296[7][7][3] = {{{0x24L,0L,5L},{1L,0x9DL,5L},{0xC3L,1L,0x2DL},{0x01L,0x01L,0x24L},{0xC3L,0x24L,1L},{1L,0x24L,0xC3L},{0x24L,0x01L,0x01L}},{{0x2DL,1L,0xC3L},{5L,0x9DL,1L},{5L,0L,0x24L},{0x2DL,0x3FL,0x2DL},{0x24L,0L,0x2DL},{0x3FL,0xC3L,0x2DL},{5L,0x3FL,0L}},{{0xB9L,0xB9L,0x01L},{5L,0x01L,0x3FL},{0x3FL,0x01L,5L},{0x01L,0xB9L,0xB9L},{0L,0x3FL,5L},{0x2DL,0xC3L,0x3FL},{0x2DL,0x24L,0x01L}},{{0L,0x72L,0L},{0x01L,0x24L,0x2DL},{0x3FL,0xC3L,0x2DL},{5L,0x3FL,0L},{0xB9L,0xB9L,0x01L},{5L,0x01L,0x3FL},{0x3FL,0x01L,5L}},{{0x01L,0xB9L,0xB9L},{0L,0x3FL,5L},{0x2DL,0xC3L,0x3FL},{0x2DL,0x24L,0x01L},{0L,0x72L,0L},{0x01L,0x24L,0x2DL},{0x3FL,0xC3L,0x2DL}},{{5L,0x3FL,0L},{0xB9L,0xB9L,0x01L},{5L,0x01L,0x3FL},{0x3FL,0x01L,5L},{0x01L,0xB9L,0xB9L},{0L,0x3FL,5L},{0x2DL,0xC3L,0x3FL}},{{0x2DL,0x24L,0x01L},{0L,0x72L,0L},{0x01L,0x24L,0x2DL},{0x3FL,0xC3L,0x2DL},{5L,0x3FL,0L},{0xB9L,0xB9L,0x01L},{5L,0x01L,0x3FL}}};
static int32_t g_2301 = 0x9178FB6CL;
static int8_t ****g_2320 = &g_475;
static const int32_t *g_2338 = &g_1479;
static const int32_t * const *g_2337[4][5][1] = {{{(void*)0},{&g_2338},{(void*)0},{&g_2338},{(void*)0}},{{&g_2338},{(void*)0},{&g_2338},{(void*)0},{&g_2338}},{{(void*)0},{&g_2338},{(void*)0},{&g_2338},{(void*)0}},{{&g_2338},{(void*)0},{&g_2338},{(void*)0},{&g_2338}}};
static uint32_t g_2358[3] = {4294967293UL,4294967293UL,4294967293UL};
static struct S0 * const *g_2393[2][3] = {{(void*)0,(void*)0,&g_1136[2]},{(void*)0,(void*)0,&g_1136[2]}};
static struct S0 * const **g_2392[7][1] = {{&g_2393[1][0]},{&g_2393[0][0]},{&g_2393[1][0]},{&g_2393[0][0]},{&g_2393[1][0]},{&g_2393[0][0]},{&g_2393[1][0]}};
static struct S0 * const ***g_2391 = &g_2392[5][0];
static struct S0 * const ****g_2390 = &g_2391;



static uint32_t  func_1(void);
static int32_t * func_9(int32_t * const  p_10, struct S0  p_11, uint32_t  p_12, int32_t  p_13);
static int32_t * const  func_14(uint16_t  p_15, int64_t  p_16);
static int64_t  func_19(union U1  p_20, uint32_t  p_21, union U1  p_22, uint32_t  p_23);
static union U1  func_24(union U1  p_25, uint32_t  p_26, int32_t * p_27);
static union U1  func_28(int32_t * p_29);
static int32_t * func_30(int32_t * p_31);
static int32_t  func_53(int32_t * p_54);




static uint32_t  func_1(void)
{ 
    uint64_t l_4 = 0x83066C93EE327439LL;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &g_7[0];
    int64_t l_8 = 0x10789328A062B000LL;
    union U1 l_875 = {0x7B52D8F3L};
    struct S0 l_994 = {-4385,7606,1172,37,-50,-347};
    uint8_t l_1506 = 1UL;
    uint32_t l_1561[4];
    uint64_t l_1588 = 0xF4515FE2307CBC9CLL;
    int8_t l_1590 = 0x30L;
    int16_t l_1654 = 0L;
    int16_t l_1722[2][5] = {{(-1L),(-4L),(-4L),(-1L),(-4L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
    int32_t l_1725 = 5L;
    int32_t l_1726 = 0x98839805L;
    struct S0 ***l_1735 = &g_1135;
    struct S0 ***l_1736 = &g_1135;
    struct S0 **l_1750 = &g_1136[2];
    int32_t *l_1756[1][3][2];
    int32_t **l_1757[4];
    int8_t *l_1764 = &g_310[0][2];
    uint64_t l_1773[4] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
    int8_t l_1779 = 0xBEL;
    uint64_t l_1780 = 0x64F1E74B795DEFD4LL;
    uint8_t l_1814 = 250UL;
    int8_t l_1843 = 0xD6L;
    uint16_t l_1846[6] = {3UL,3UL,3UL,3UL,3UL,3UL};
    uint32_t l_1852[3][2];
    int8_t ****l_1876 = &g_290;
    int8_t *****l_1875 = &l_1876;
    uint32_t l_1896 = 0x8DEBE03AL;
    uint8_t l_1897 = 2UL;
    uint32_t l_1898 = 0x23118710L;
    int16_t *****l_1926 = (void*)0;
    int16_t l_1985[6][2] = {{6L,6L},{6L,6L},{6L,6L},{6L,6L},{6L,6L},{6L,6L}};
    uint32_t l_2022 = 0x0F00F2D2L;
    int64_t l_2064 = 0L;
    int8_t *l_2066[7][4][7] = {{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}},{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}},{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}},{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}},{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}},{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}},{{&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0],(void*)0,&g_310[0][0]},{&l_1779,&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590},{&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2],(void*)0,&g_1813[2]},{&l_1779,&l_1590,&l_1590,&l_1779,&l_1779,&l_1590,&l_1590}}};
    uint16_t l_2081 = 65535UL;
    uint64_t **l_2088 = (void*)0;
    int32_t l_2090[2];
    struct S0 l_2110 = {1289,-1834,1274,26,-77,-222};
    int8_t l_2111 = 0x6FL;
    uint32_t l_2178 = 1UL;
    int16_t l_2200 = 1L;
    int32_t l_2201[2][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xD0FC7C6AL,0xD0FC7C6AL,0xD0FC7C6AL,0xD0FC7C6AL,0xD0FC7C6AL}};
    uint32_t l_2245 = 18446744073709551607UL;
    uint64_t l_2309 = 0UL;
    int32_t l_2355 = 0L;
    uint32_t l_2360 = 1UL;
    int32_t l_2373 = 1L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1561[i] = 0x673FEF65L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_1756[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 4; i++)
        l_1757[i] = &l_5;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1852[i][j] = 0x4371B6F7L;
    }
    for (i = 0; i < 2; i++)
        l_2090[i] = 0L;
    return g_1468;
}



static int32_t * func_9(int32_t * const  p_10, struct S0  p_11, uint32_t  p_12, int32_t  p_13)
{ 
    struct S0 *l_1018 = &g_127;
    struct S0 **l_1017 = &l_1018;
    int32_t l_1019 = 0x5E775D81L;
    int32_t l_1026 = 6L;
    int32_t l_1032 = 3L;
    uint16_t **l_1080 = &g_1079;
    union U1 *l_1170 = &g_124[6];
    union U1 **l_1185 = &g_407[3];
    int32_t *l_1222 = &g_1143;
    int8_t l_1271 = 0x74L;
    const union U1 *l_1278 = (void*)0;
    const union U1 **l_1277 = &l_1278;
    const union U1 ***l_1276 = &l_1277;
    int32_t l_1320 = 0x8BB1BADFL;
    int32_t l_1321[2];
    int32_t * const **l_1336[6][6] = {{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,(void*)0,&g_79}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1321[i] = (-1L);
    for (g_61 = 7; (g_61 < 7); g_61++)
    { 
        int32_t **l_1007 = &g_227[0];
        int32_t ***l_1008 = (void*)0;
        int32_t ***l_1009 = (void*)0;
        struct S0 l_1014 = {-16807,-6940,190,63,-43,484};
        struct S0 *l_1016 = (void*)0;
        struct S0 **l_1015 = &l_1016;
        uint16_t *l_1020 = (void*)0;
        uint16_t *l_1021 = &g_92;
        uint32_t l_1033 = 4294967295UL;
        int64_t **l_1087 = &g_1084;
        union U1 l_1117[6] = {{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}};
        int8_t *l_1140 = &g_87[1][0][0];
        int32_t l_1153[5][2][3] = {{{0x8F9EDB18L,0xEDF495DAL,0x8F9EDB18L},{(-4L),0L,(-4L)}},{{0x8F9EDB18L,0xEDF495DAL,0x8F9EDB18L},{(-4L),0L,(-4L)}},{{0x8F9EDB18L,0xEDF495DAL,0x8F9EDB18L},{(-4L),0L,(-4L)}},{{0x8F9EDB18L,0xEDF495DAL,0x8F9EDB18L},{(-4L),0L,(-4L)}},{{0x8F9EDB18L,0xEDF495DAL,0x8F9EDB18L},{(-4L),0L,(-4L)}}};
        const int16_t l_1182 = (-4L);
        int32_t l_1183 = (-4L);
        int32_t *l_1205[4][3][3] = {{{(void*)0,(void*)0,&g_61},{&l_1019,(void*)0,&g_7[0]},{(void*)0,(void*)0,&g_7[0]}},{{(void*)0,&l_1019,&g_61},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_61},{&l_1019,(void*)0,&g_7[0]}},{{(void*)0,(void*)0,&g_7[0]},{(void*)0,&l_1019,&g_61},{(void*)0,(void*)0,(void*)0}}};
        uint64_t l_1229 = 0x748309EE6801D6FELL;
        uint64_t l_1247[5];
        struct S0 ***l_1261[2];
        struct S0 ****l_1260 = &l_1261[1];
        struct S0 ****l_1265[1][2][6];
        int16_t l_1319[1][3][2];
        uint64_t l_1328 = 0xB6E69D9BD5077816LL;
        uint64_t l_1338 = 0UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1247[i] = 0x4650CAB5EE36A974LL;
        for (i = 0; i < 2; i++)
            l_1261[i] = &g_1135;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 6; k++)
                    l_1265[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1319[i][j][k] = 0x6980L;
            }
        }
        if (((*p_10) = ((safe_mod_func_uint32_t_u_u(g_135, (safe_mod_func_int16_t_s_s((*g_359), ((((safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s((0xF7C0L || ((safe_div_func_int64_t_s_s(((l_1007 = l_1007) == &g_227[0]), ((safe_sub_func_uint32_t_u_u((((*l_1021) &= (((safe_mul_func_int16_t_s_s(((p_11.f4 , (l_1014 , l_1015)) != l_1017), l_1019)) | (*g_101)) < p_11.f3)) | p_11.f5), l_1019)) ^ 0L))) || l_1019)), l_1019)) || p_12), l_1019)) == g_816) & l_1019) ^ p_11.f2))))) != 0UL)))
        { 
            union U1 **l_1022[6];
            int8_t ****l_1024 = &g_290;
            int32_t l_1029 = 0x4DD1B423L;
            int32_t l_1030 = 0x94F0D89CL;
            int32_t l_1031[6][5] = {{0xC5332AB4L,1L,(-2L),0L,1L},{5L,(-2L),(-2L),5L,0L},{1L,5L,6L,1L,1L},{0xC5332AB4L,5L,0xC5332AB4L,0L,5L},{1L,(-2L),0L,1L,0L},{1L,1L,6L,5L,1L}};
            int64_t **l_1086 = &g_1084;
            int64_t ***l_1085[5][2];
            uint32_t *l_1088 = &g_183;
            uint32_t l_1108 = 0x48C9B502L;
            uint16_t l_1109 = 0x60B5L;
            struct S0 * const *l_1111 = (void*)0;
            struct S0 * const ** const l_1110 = &l_1111;
            uint8_t l_1112 = 8UL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_1022[i] = &g_408;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1085[i][j] = &l_1086;
            }
            for (l_1019 = 0; (l_1019 <= 0); l_1019 += 1)
            { 
                int8_t ****l_1023 = &g_475;
                int32_t l_1028[1];
                int32_t *l_1045 = &l_1028[0];
                int32_t *l_1046 = &g_60;
                int32_t *l_1047 = &g_143;
                int32_t *l_1048 = &g_62;
                uint16_t l_1049 = 65529UL;
                struct S0 ***l_1053 = &l_1015;
                struct S0 ****l_1052 = &l_1053;
                int32_t l_1056[4][3];
                int64_t l_1065 = 0x40A74B2855BD2236LL;
                uint32_t *l_1066[5][6] = {{&g_183,&l_1033,(void*)0,&g_183,&l_1033,&g_183},{(void*)0,&l_1033,&g_183,(void*)0,&l_1033,(void*)0},{(void*)0,&l_1033,(void*)0,&g_183,&l_1033,(void*)0},{&g_183,&l_1033,&g_183,(void*)0,&l_1033,&g_183},{&g_183,&l_1033,(void*)0,(void*)0,&l_1033,&g_183}};
                uint16_t l_1075 = 0UL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1028[i] = (-7L);
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1056[i][j] = (-1L);
                }
                for (g_816 = 0; (g_816 <= 0); g_816 += 1)
                { 
                    int32_t l_1025 = 0x241804C4L;
                    int32_t *l_1027[1];
                    int8_t ****l_1036[6][3][3] = {{{&g_475,&g_290,&g_475},{(void*)0,(void*)0,(void*)0},{&g_475,&g_290,&g_475}},{{(void*)0,(void*)0,(void*)0},{&g_475,&g_290,&g_475},{(void*)0,(void*)0,(void*)0}},{{&g_475,&g_475,&g_475},{&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475}},{{&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475},{&g_475,(void*)0,&g_475}},{{&g_475,&g_475,&g_475},{&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475}},{{&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475},{&g_475,(void*)0,&g_475}}};
                    uint32_t *l_1043 = &g_183;
                    int32_t **l_1044 = &g_227[0];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1027[i] = &g_7[0];
                    (*p_10) = ((&g_407[(l_1019 + 2)] != ((*g_702) = l_1022[5])) >= (l_1023 == l_1024));
                    l_1033++;
                    if (g_310[l_1019][(l_1019 + 4)])
                        continue;
                    l_1028[0] = (((void*)0 == l_1036[5][2][2]) , (((***g_290) = (((safe_lshift_func_uint8_t_u_s(((*g_101) ^= (l_1023 != (*g_527))), (g_310[g_816][(l_1019 + 4)] = 0L))) < ((((safe_sub_func_uint32_t_u_u(((*l_1043) = (((*g_375) ^ (safe_sub_func_uint8_t_u_u(g_157[1], p_11.f2))) & 1L)), 0x1F9D7489L)) == (-5L)) & 1L) >= l_1019)) <= 2L)) <= 0L));
                    (*l_1044) = p_10;
                }
                l_1049++;
                (*l_1052) = &l_1015;
                if ((l_1032 | ((g_183 = (safe_rshift_func_uint8_t_u_s((((((-1L) == l_1056[2][1]) , (p_11.f2 > ((p_12 != (safe_rshift_func_int16_t_s_s((~(safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((**l_1023) = g_1064) == (void*)0) , l_1019), l_1029)), p_11.f5))), p_11.f2))) <= l_1065))) && (**g_1064)) , 0xBAL), 4))) ^ l_1032)))
                { 
                    int32_t **l_1067[3];
                    int32_t **l_1068 = (void*)0;
                    int32_t **l_1069 = &l_1047;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1067[i] = &l_1045;
                    (*l_1069) = p_10;
                }
                else
                { 
                    int32_t *l_1070 = &g_62;
                    int32_t *l_1071 = &l_1028[0];
                    int32_t *l_1072 = &g_62;
                    int32_t *l_1073 = &l_1028[0];
                    int32_t *l_1074[6][2] = {{&g_7[0],(void*)0},{&l_1030,&g_7[0]},{&l_1031[5][3],&l_1031[5][3]},{&l_1031[5][3],&g_7[0]},{&l_1030,(void*)0},{&g_7[0],(void*)0}};
                    int i, j;
                    l_1070 = func_30(func_30(&g_60));
                    l_1075++;
                    if ((*p_10))
                        continue;
                    if ((*l_1047))
                        break;
                }
                l_1080 = g_1078;
            }
            if ((((*l_1088) = (safe_rshift_func_uint8_t_u_s(l_1032, (g_1083[2][1] == (l_1087 = &g_1084))))) >= (4294967295UL || (((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((*l_1021) = (((safe_unary_minus_func_uint16_t_u((0x3A3C382CL != g_415))) && p_13) , 9UL)) , l_1029), 0xD0E9L)), p_13)) , p_11.f3) != p_11.f5))))
            { 
                int32_t l_1107 = 0x12EF4A54L;
                (*p_10) |= (safe_unary_minus_func_uint16_t_u(((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(p_11.f1, (l_1032 && ((((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_1107 = (-1L)), 3)), ((*g_375) & (l_1108 <= l_1109)))), 9UL)), g_358[2][0])) , l_1110) == (void*)0) , p_11.f1) , 0x6AA6137BL) > p_13)))) && (**g_291)), l_1112)) != 255UL)));
            }
            else
            { 
                (*p_10) &= (((&g_127 != (l_1019 , &g_127)) <= p_13) & (((safe_rshift_func_uint8_t_u_u(7UL, (*g_101))) | (l_1117[4] , 0x6DL)) > 0x8C6465F4L));
                (*l_1007) = &g_50;
            }
            for (g_50 = 0; g_50 < 1; g_50 += 1)
            {
                g_227[g_50] = &g_62;
            }
            if ((*p_10))
                break;
        }
        else
        { 
            uint32_t l_1137 = 7UL;
            union U1 *l_1171 = (void*)0;
            int32_t *l_1187 = &g_60;
            int8_t l_1189 = (-5L);
            uint64_t l_1194 = 18446744073709551615UL;
            for (p_13 = 0; p_13 < 4; p_13 += 1)
            {
                for (g_531 = 0; g_531 < 4; g_531 += 1)
                {
                    g_1083[p_13][g_531] = &g_1084;
                }
            }
            for (g_415 = 0; (g_415 < 29); g_415 = safe_add_func_uint64_t_u_u(g_415, 1))
            { 
                int32_t l_1141 = 0x35B16D5AL;
                uint32_t l_1190 = 0xA2A1A210L;
                struct S0 l_1195 = {-43967,5939,321,19,-40,461};
                for (p_12 = 0; (p_12 <= 0); p_12 += 1)
                { 
                    int32_t l_1138 = 0L;
                    int i, j;
                    (*p_10) |= (safe_lshift_func_uint8_t_u_s((g_310[p_12][(p_12 + 1)] ^ ((l_1138 &= (safe_rshift_func_uint16_t_u_s((g_145[(p_12 + 2)][p_12] , ((safe_div_func_int64_t_s_s((~g_145[p_12][p_12]), (((*g_375) , ((***g_290) = (((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((**l_1087) &= (safe_add_func_uint16_t_u_u(((*g_359) , 65530UL), ((safe_div_func_uint8_t_u_u(((void*)0 == g_1135), 0x23L)) && 0L)))) > l_1137) != 6L), l_1137)), l_1137)) , p_11.f5) , 4L))) , p_11.f4))) == p_11.f0)), (*g_359)))) || (***g_475))), l_1032));
                }
                if (l_1137)
                { 
                    int32_t *l_1142 = &g_1143;
                    int32_t l_1154 = 0xC40A2A5BL;
                    (*p_10) = (((safe_unary_minus_func_uint64_t_u(((void*)0 != l_1140))) , ((((*l_1142) = (l_1141 >= (*p_10))) , ((l_1153[4][1][1] |= ((safe_lshift_func_uint8_t_u_u((*g_101), 7)) >= (safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(p_12, ((((safe_div_func_int16_t_s_s((4294967295UL || (*p_10)), p_13)) != 0x090DL) && p_11.f1) >= 0L))), g_1152[0][2])))) || l_1154)) && l_1141)) | 4294967295UL);
                    if ((*p_10))
                        break;
                }
                else
                { 
                    (*p_10) |= l_1137;
                }
                if (((*p_10) = (safe_sub_func_int64_t_s_s(((g_87[1][0][0] > (safe_lshift_func_uint16_t_u_s(0x2399L, 0))) ^ ((void*)0 != &l_1007)), (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_1019 ^ (((l_1019 == p_11.f1) > l_1137) && 0x7A967E1DL)) , p_11.f4) | l_1137), p_11.f3)) || p_11.f5), p_12))))))
                { 
                    uint16_t l_1169 = 0x00F0L;
                    int32_t *l_1173 = &g_1143;
                    int32_t **l_1172 = &l_1173;
                    union U1 *l_1174 = (void*)0;
                    int32_t l_1181[5] = {0L,0L,0L,0L,0L};
                    int32_t *l_1184 = &l_1026;
                    union U1 **l_1186 = &l_1171;
                    int i;
                    (*l_1184) = ((*p_10) = (safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_1169 = 7UL), (((((((((((((l_1026 < ((l_1171 = l_1170) != ((((*l_1172) = &l_1153[0][0][1]) == (void*)0) , l_1174))) || (((((safe_sub_func_int64_t_s_s(((**l_1087) = (safe_mod_func_int64_t_s_s((!((((safe_unary_minus_func_uint8_t_u(l_1141)) == l_1141) != 0x5862BBB126749D14LL) >= (*p_10))), 0x1630AE155518B480LL))), p_11.f0)) , p_11.f5) , l_1181[1]) > l_1182) , l_1137)) , l_1032) != (*g_375)) | (*g_359)) >= (*g_101)) | l_1137) , l_1174) == l_1174) == l_1183) , p_11.f4) ^ p_11.f5) > 1UL))), 0xE384L)) >= p_11.f4), (-1L))));
                    (*p_10) &= (-9L);
                    (*l_1184) &= (*p_10);
                    l_1186 = ((*g_702) = l_1185);
                    return l_1187;
                }
                else
                { 
                    int32_t *l_1188[1];
                    union U1 l_1193 = {4294967293UL};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1188[i] = &l_1141;
                    l_1190--;
                    (*p_10) = (l_1193 , (*p_10));
                    (*l_1187) = (l_1026 = ((((*g_375) &= p_11.f1) ^ ((((((l_1194 , l_1190) , 0xE0C3L) <= (((*p_10) = (l_1195 , ((((*g_359) = (((*p_10) , (+(((safe_mul_func_uint8_t_u_u((g_1199 != p_10), p_11.f5)) != l_1195.f4) || 0xA2ECD91CL))) >= (-7L))) <= p_13) != l_1026))) > (*l_1187))) ^ 0L) > (*g_101)) , l_1141)) , (-6L)));
                }
                if ((*l_1187))
                    continue;
                (*l_1187) &= (*p_10);
            }
            for (g_59 = 0; (g_59 > 17); g_59 = safe_add_func_int16_t_s_s(g_59, 9))
            { 
                int32_t **l_1204 = &l_1187;
                for (g_62 = 0; (g_62 > 12); g_62 = safe_add_func_int32_t_s_s(g_62, 1))
                { 
                    (*l_1007) = l_1187;
                }
                (*l_1204) = p_10;
                return &g_143;
            }
        }
        for (g_60 = (-28); (g_60 <= (-5)); g_60++)
        { 
            int32_t **l_1208 = (void*)0;
            int32_t **l_1209 = &l_1205[2][1][1];
            (*l_1209) = p_10;
            l_1032 ^= (*p_10);
            (*l_1209) = func_30(&g_7[0]);
            if ((*p_10))
                break;
        }
        for (p_12 = 0; (p_12 == 42); ++p_12)
        { 
            uint64_t l_1221 = 0x402BFC104854C87ELL;
            int8_t *l_1223[1];
            int32_t l_1224 = 0xB8E2DB93L;
            int32_t l_1227 = 0x7B405926L;
            struct S0 ****l_1262[1][7] = {{&l_1261[1],&l_1261[0],&l_1261[0],&l_1261[1],&l_1261[0],&l_1261[0],&l_1261[1]}};
            int32_t ** const *l_1266 = &l_1007;
            int32_t l_1270 = 0x5077415EL;
            const union U1 ***l_1280[6] = {&l_1277,&l_1277,&l_1277,&l_1277,&l_1277,&l_1277};
            const int64_t l_1288 = 0L;
            uint8_t l_1293 = 0xECL;
            int32_t l_1323 = 0L;
            int32_t l_1324 = (-5L);
            int32_t l_1325 = 0xDE879CCCL;
            int32_t l_1326 = 0x3186CA31L;
            int32_t l_1327[4] = {(-6L),(-6L),(-6L),(-6L)};
            uint32_t *l_1335[4][2][3] = {{{&l_1033,&l_1033,&l_1033},{&l_1033,&l_1033,&l_1033}},{{&l_1033,&l_1033,&l_1033},{&l_1033,&l_1033,&l_1033}},{{&l_1033,&l_1033,&l_1033},{&l_1033,&l_1033,&l_1033}},{{&l_1033,&l_1033,&l_1033},{&l_1033,&l_1033,&l_1033}}};
            int32_t * const ***l_1337 = &l_1336[5][0];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1223[i] = &g_310[0][2];
            if ((safe_lshift_func_int8_t_s_s((g_310[0][0] = (((((*g_1199) > (((safe_div_func_uint64_t_u_u(l_1032, ((((p_11.f3 = (p_11.f2 , (~(safe_mul_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_s(247UL, ((**g_1064) = (((*l_1170) , l_1221) && (l_1026 < p_11.f1))))) , l_1222) == (void*)0) <= g_310[0][2]), 2L))))) ^ 4294967288UL) , p_11.f1) ^ (*g_101)))) , 0L) == (*g_1084))) && p_11.f3) & p_11.f0) > l_1221)), l_1026)))
            { 
                int32_t l_1225 = 0xD7188114L;
                int32_t l_1226 = 0L;
                int32_t l_1228 = (-9L);
                int64_t l_1267 = 4L;
                int64_t *l_1268 = &l_1267;
                uint16_t l_1269 = 0x82E1L;
                l_1229++;
                for (l_1229 = 0; (l_1229 < 4); l_1229++)
                { 
                    const uint16_t *l_1241 = &g_92;
                    const uint16_t **l_1240 = &l_1241;
                    int32_t l_1242 = 0xA71F451BL;
                    (*p_10) = (p_11.f0 & (p_11.f1 , ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((*g_101) <= 0UL), 3)), (*p_10))) != (safe_div_func_uint64_t_u_u((((l_1240 == (void*)0) , l_1242) & 4294967287UL), p_11.f1)))));
                    (*g_1199) &= (safe_mul_func_uint16_t_u_u((p_11.f0 & (safe_rshift_func_int8_t_s_s((l_1247[4] , (-1L)), 4))), 0x2DDCL));
                }
                l_1032 = ((p_11.f1 ^ ((p_11.f3 && ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((*g_359) = (safe_div_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s((((*l_1268) = ((**l_1087) = ((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((*g_1199) = (((l_1262[0][5] = l_1260) == ((safe_div_func_uint64_t_u_u(p_13, (*g_375))) , l_1265[0][0][4])) <= (((((((void*)0 != l_1266) | l_1026) , (*g_101)) || (-1L)) & p_13) , p_11.f4))) == p_11.f0) == l_1267), p_11.f4)) | (***g_475)), (**g_1064))) & p_12))) >= l_1269), l_1032)) ^ (**g_1064)), p_12))), 12)), p_11.f3)) & l_1270)) >= (*g_375))) == l_1271);
                for (g_142 = 0; (g_142 < (-28)); g_142--)
                { 
                    const union U1 ****l_1279 = &l_1276;
                    (*g_1199) |= ((safe_mod_func_int64_t_s_s(0L, (*g_375))) , (((*l_1279) = l_1276) != l_1280[0]));
                }
                if ((*p_10))
                    break;
            }
            else
            { 
                uint8_t l_1287 = 0UL;
                int32_t l_1318[1][2][6] = {{{0x908EEF6DL,0x09D33D39L,0x908EEF6DL,0x0589908EL,0x0589908EL,0x908EEF6DL},{(-1L),(-1L),0x0589908EL,(-1L),0x0589908EL,(-1L)}}};
                int i, j, k;
                if ((safe_div_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((((*l_1021) = (safe_mul_func_uint8_t_u_u(7UL, l_1287))) <= l_1288), ((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((l_1287 >= (++l_1293)), 8)), (((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((*g_101), ((-9L) && (safe_div_func_int32_t_s_s(l_1271, g_816))))), p_11.f3)), l_1224)) < l_1287) <= p_11.f2))) || (*g_375)))) & 5L), 1L)))
                { 
                    return &g_7[0];
                }
                else
                { 
                    uint64_t l_1304[2];
                    int32_t ***l_1317 = &g_1315;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1304[i] = 0xE06CBBE9A993063CLL;
                    l_1304[0]++;
                    (*p_10) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*p_10) & (p_11.f1 == ((((p_11.f1 >= (l_1304[0] | p_11.f3)) , (safe_div_func_uint32_t_u_u(0xDE1D7D7CL, ((((*l_1317) = g_1315) == &g_1316) | p_11.f5)))) ^ (*p_10)) == (*g_375)))), p_11.f2)), 7));
                }
                (*l_1007) = &l_1032;
                l_1328++;
            }
            (*l_1007) = func_30(func_30(&g_143));
            l_1321[0] |= ((&g_135 == &l_1293) < ((l_1032 ^= ((safe_sub_func_int16_t_s_s((l_1026 < (((g_127.f3 |= (safe_sub_func_uint16_t_u_u(65528UL, ((void*)0 == &l_1222)))) == (p_11 , (*p_10))) || p_11.f4)), l_1320)) < 0x8192B07D6C078D8FLL)) | 65535UL));
            (*l_1337) = l_1336[0][0];
        }
        --l_1338;
    }
    return &g_62;
}



static int32_t * const  func_14(uint16_t  p_15, int64_t  p_16)
{ 
    struct S0 *l_886 = &g_127;
    struct S0 **l_887 = (void*)0;
    struct S0 **l_888 = (void*)0;
    union U1 l_891 = {0x55765C68L};
    int8_t ***l_892 = &g_291;
    uint32_t *l_893[3][5] = {{&g_183,&g_183,&g_183,&g_183,&g_183},{&g_183,&g_183,&g_183,&g_183,&g_183},{&g_183,&g_183,&g_183,&g_183,&g_183}};
    uint16_t *l_894 = &g_816;
    int32_t *l_895 = &g_7[0];
    int32_t l_949 = (-1L);
    int32_t l_954 = 6L;
    int32_t l_957 = 0x37CC4B94L;
    int32_t l_959 = (-4L);
    int32_t l_963 = 0x980712FCL;
    int32_t l_966 = 2L;
    int32_t l_967 = 0L;
    int32_t l_968 = 0xA42C78C8L;
    int32_t l_969 = 0xB3777844L;
    int32_t l_980 = (-2L);
    int32_t l_981 = 0x4C97F9E6L;
    int32_t l_982 = (-1L);
    int32_t l_983 = (-1L);
    int32_t l_984 = 0L;
    int32_t l_986 = 1L;
    int32_t l_987[7] = {0x05CF8A05L,0x05CF8A05L,0x05CF8A05L,0x05CF8A05L,0x05CF8A05L,0x05CF8A05L,0x05CF8A05L};
    int32_t *l_991[5][5] = {{&l_987[5],&l_980,&l_980,&l_987[5],(void*)0},{&l_954,&l_966,&l_966,&l_954,&l_957},{&l_987[5],&l_980,&l_980,&l_987[5],(void*)0},{&l_954,&l_966,&l_966,&l_954,&l_957},{&l_987[5],&l_980,&l_980,&l_987[5],(void*)0}};
    int8_t l_992 = 0x13L;
    int32_t * const l_993 = &l_982;
    int i, j;
    (*l_895) = (safe_add_func_uint32_t_u_u((((void*)0 == g_227[0]) , (&g_127 != (l_886 = l_886))), ((safe_add_func_uint16_t_u_u(((*l_894) = (((((((l_891 , ((**g_291) <= ((void*)0 != l_892))) | p_15) >= g_816) , l_893[1][2]) == l_893[1][2]) <= l_891.f0) < p_15)), l_891.f0)) == 1UL)));
    for (g_143 = 18; (g_143 >= 23); g_143 = safe_add_func_uint16_t_u_u(g_143, 7))
    { 
        uint32_t l_902[3];
        int32_t *l_924 = &g_50;
        int32_t l_953 = 8L;
        int32_t l_956 = 0x093FE108L;
        int32_t l_962 = (-1L);
        int32_t l_965[3];
        int i;
        for (i = 0; i < 3; i++)
            l_902[i] = 7UL;
        for (i = 0; i < 3; i++)
            l_965[i] = 0x6B64726DL;
        for (l_891.f2 = 0; (l_891.f2 != 9); l_891.f2 = safe_add_func_uint64_t_u_u(l_891.f2, 9))
        { 
            int32_t l_911 = 1L;
            int32_t l_916 = 0L;
            union U1 **l_917 = &g_408;
            union U1 **l_922 = &g_407[1];
            int64_t l_958 = 0L;
            int32_t l_960 = 0xF8F7D44DL;
            int32_t l_961 = 3L;
            int32_t l_964[3][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
            int32_t * const l_973 = &g_50;
            int32_t l_979 = 8L;
            int i, j;
            for (g_360 = 0; (g_360 < (-2)); g_360 = safe_sub_func_uint32_t_u_u(g_360, 3))
            { 
                l_902[0] = 0xEB51D2F4L;
            }
            for (g_360 = (-5); (g_360 < (-13)); g_360 = safe_sub_func_int64_t_s_s(g_360, 2))
            { 
                int32_t l_923 = 0L;
                uint16_t l_931[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_931[i][j] = 0x5010L;
                }
                if ((safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_911 ^= p_15), (safe_sub_func_uint64_t_u_u((((void*)0 != &g_702) > ((((((l_916 > (((*g_702) = l_917) != ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((*g_101), ((***g_475) = (*l_895)))) == (*l_895)), p_15)) , l_922))) , p_16) , (*g_527)) == (void*)0) != l_923) != 0xA685L)), l_923)))), l_923)) != p_15) < g_310[0][4]), g_816)))
                { 
                    int32_t **l_925 = &l_895;
                    (*l_925) = func_30(l_924);
                    if (l_923)
                        break;
                    (*l_924) = p_15;
                    if (l_911)
                        continue;
                    (*l_924) ^= (**l_925);
                }
                else
                { 
                    return &g_59;
                }
                for (l_911 = (-11); (l_911 > (-12)); l_911 = safe_sub_func_uint64_t_u_u(l_911, 1))
                { 
                    int32_t *l_928 = &l_916;
                    int32_t *l_929 = &g_50;
                    int32_t *l_930[2];
                    int32_t **l_934 = (void*)0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_930[i] = &g_124[2].f3;
                    --l_931[0][0];
                    l_924 = &l_923;
                    return l_893[1][1];
                }
                return l_895;
            }
            if (p_16)
            { 
                int32_t **l_935 = &g_227[0];
                int32_t l_948 = 0L;
                int32_t l_950 = 0x9C06E16FL;
                int32_t l_951 = 0L;
                int32_t l_955[7][1][6];
                uint8_t l_970[2];
                int16_t l_978 = 0xC34CL;
                int16_t l_985 = 0L;
                uint32_t l_988 = 4294967295UL;
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_955[i][j][k] = 0xDA39EB88L;
                    }
                }
                for (i = 0; i < 2; i++)
                    l_970[i] = 247UL;
                (*l_935) = func_30(&g_60);
                for (g_92 = 0; (g_92 == 60); ++g_92)
                { 
                    int32_t *l_938 = (void*)0;
                    int32_t *l_939 = &g_62;
                    int32_t *l_940 = &g_59;
                    int32_t *l_941 = &g_59;
                    int32_t *l_942 = &g_124[2].f3;
                    int32_t *l_943 = &g_7[0];
                    int32_t *l_944 = &g_61;
                    int32_t *l_945 = &g_60;
                    int32_t *l_946 = &g_7[0];
                    int32_t *l_947[5] = {&g_60,&g_60,&g_60,&g_60,&g_60};
                    int32_t l_952 = 5L;
                    int i;
                    l_970[1]++;
                    return l_973;
                }
                for (l_956 = (-28); (l_956 != 17); l_956 = safe_add_func_uint8_t_u_u(l_956, 1))
                { 
                    int32_t *l_976 = &l_964[0][0];
                    int32_t *l_977[1][2][2] = {{{&l_891.f3,&l_891.f3},{&l_891.f3,&l_891.f3}}};
                    int i, j, k;
                    ++l_988;
                    (*l_935) = l_991[4][0];
                    (*l_973) |= p_15;
                    return &g_62;
                }
                (*l_924) = 0x739D4E79L;
            }
            else
            { 
                (*l_895) &= (*l_924);
            }
        }
    }
    l_992 ^= (*l_895);
    return &g_7[0];
}



static int64_t  func_19(union U1  p_20, uint32_t  p_21, union U1  p_22, uint32_t  p_23)
{ 
    int64_t l_876 = (-9L);
    uint64_t *l_881 = &g_145[2][0];
    int32_t *l_882 = &g_61;
    (*l_882) = (p_22.f3 = (l_876 || ((safe_lshift_func_int16_t_s_s(p_21, 6)) == ((void*)0 == l_881))));
    return p_22.f2;
}



static union U1  func_24(union U1  p_25, uint32_t  p_26, int32_t * p_27)
{ 
    int32_t **l_873 = &g_227[0];
    int32_t *l_874 = &g_59;
    (*l_873) = p_27;
    (*l_874) ^= (*p_27);
    return p_25;
}



static union U1  func_28(int32_t * p_29)
{ 
    uint16_t l_797 = 0x1556L;
    int32_t **l_812 = &g_227[0];
    int8_t l_815 = 0L;
    uint64_t l_817[6] = {0xD6856E3AD3D6F17BLL,0xCD356E54458FAA31LL,0xD6856E3AD3D6F17BLL,0xD6856E3AD3D6F17BLL,0xCD356E54458FAA31LL,0xD6856E3AD3D6F17BLL};
    union U1 l_821 = {0xBA59FC54L};
    union U1 l_827 = {0xB74D84F5L};
    struct S0 *l_845 = &g_127;
    int64_t *l_865 = &g_142;
    int i;
    for (g_50 = 17; (g_50 > 13); --g_50)
    { 
        int32_t *l_56[7] = {(void*)0,&g_50,(void*)0,(void*)0,&g_50,(void*)0,(void*)0};
        int32_t **l_55 = &l_56[4];
        const uint32_t l_798 = 0UL;
        const uint64_t *l_818 = (void*)0;
        int64_t l_835 = 0xDD40BA7C4B948798LL;
        int i;
        if (func_53(func_30(func_30(func_30(((*l_55) = p_29))))))
        { 
            uint32_t l_790 = 0xF116900EL;
            int32_t l_799 = (-8L);
            union U1 l_800 = {4294967295UL};
            l_799 = (safe_add_func_int32_t_s_s(((((((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(1UL, (&g_531 == ((((**g_291) ^= l_790) | (l_790 & ((0x10F5L ^ ((safe_add_func_int16_t_s_s((0x20L > (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_797 < 0x7464L), l_797)), l_797))), l_797)) | l_797)) && l_798))) , (void*)0)))), l_790)) , g_127) , (*g_375)) | 0UL) , 1L) == (*g_359)) | 0xC5L) >= 9L), g_142));
            return l_800;
        }
        else
        { 
            union U1 **l_805 = (void*)0;
            union U1 ***l_806 = (void*)0;
            union U1 ***l_807 = &l_805;
            struct S0 l_808[1][6][7] = {{{{18440,-1848,107,5,80,91},{21927,-7624,1062,23,3,-78},{14928,7517,6,54,14,149},{44487,-4446,821,1,-84,104},{7900,5386,1390,40,-26,-33},{21927,-7624,1062,23,3,-78},{26554,1650,631,38,-50,10}},{{18440,-1848,107,5,80,91},{18440,-1848,107,5,80,91},{44487,-4446,821,1,-84,104},{-15259,-3139,1073,36,-85,-136},{-15899,152,626,53,8,-93},{9561,1972,896,19,63,-385},{26554,1650,631,38,-50,10}},{{-43902,-246,1056,30,-12,-177},{-19948,-440,684,1,35,-349},{-15259,-3139,1073,36,-85,-136},{18440,-1848,107,5,80,91},{26554,1650,631,38,-50,10},{32725,-2301,704,61,-31,-371},{32725,-2301,704,61,-31,-371}},{{-15899,152,626,53,8,-93},{7900,5386,1390,40,-26,-33},{18937,3213,954,30,-13,507},{7900,5386,1390,40,-26,-33},{-15899,152,626,53,8,-93},{18440,-1848,107,5,80,91},{-43902,-246,1056,30,-12,-177}},{{39225,2782,1077,15,-89,-17},{44487,-4446,821,1,-84,104},{18937,3213,954,30,-13,507},{37644,5419,314,49,-41,110},{7900,5386,1390,40,-26,-33},{26028,6126,1187,6,27,366},{1061,4929,146,24,28,-387}},{{37644,5419,314,49,-41,110},{21927,-7624,1062,23,3,-78},{-15259,-3139,1073,36,-85,-136},{26028,6126,1187,6,27,366},{26028,6126,1187,6,27,366},{-15259,-3139,1073,36,-85,-136},{21927,-7624,1062,23,3,-78}}}};
            int32_t **l_809 = &g_227[0];
            int32_t ***l_810 = &l_809;
            int32_t ***l_811 = (void*)0;
            uint32_t l_842 = 7UL;
            struct S0 **l_855 = (void*)0;
            int64_t *l_867[5] = {&l_835,&l_835,&l_835,&l_835,&l_835};
            int64_t **l_866 = &l_867[1];
            union U1 l_868 = {7UL};
            int i, j, k;
            if ((l_817[1] = (safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((((*l_807) = ((*g_702) = l_805)) == (void*)0) , ((l_808[0][3][4] , (((&g_227[0] == (l_812 = ((*l_810) = l_809))) >= (safe_sub_func_uint32_t_u_u(((void*)0 == &g_183), (*p_29)))) < l_815)) && 0x82F157B9L)) ^ g_180), 18446744073709551611UL)), g_816))))
            { 
                int8_t l_819[3][4][7] = {{{0x58L,(-1L),0x61L,0x61L,(-1L),0x58L,(-1L)},{0x1FL,0L,1L,0x36L,0xF3L,0xF3L,0x36L},{0x13L,(-2L),0x13L,(-9L),(-1L),(-5L),0x58L},{1L,0L,0x1FL,(-10L),0x1FL,0L,1L}},{{0x61L,(-1L),0x58L,(-1L),1L,(-5L),1L},{0L,0xE3L,0xE3L,0L,0x56L,0xF3L,(-10L)},{0xBAL,1L,0x58L,0x13L,0x13L,0x58L,1L},{0x56L,1L,0x1FL,0x0BL,0xE3L,(-10L),(-10L)}},{{(-5L),0xBAL,0x13L,0xBAL,(-5L),(-1L),1L},{1L,0xF3L,1L,0x0BL,0x36L,0x0BL,1L},{1L,1L,0x61L,0x13L,1L,(-9L),0x58L},{1L,0x0BL,0L,0L,0x0BL,1L,0x36L}}};
                int64_t *l_820[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_820[i] = (void*)0;
                if (((l_808[0][3][4] , (g_142 = ((g_358[4][1] || (-6L)) || (((l_818 == ((((*p_29) >= ((**l_812) || (**l_809))) != 1L) , (void*)0)) & 0x82L) , l_819[1][0][6])))) <= g_7[0]))
                { 
                    return l_821;
                }
                else
                { 
                    uint8_t l_822 = 246UL;
                    l_822++;
                    (***l_810) = 0L;
                    if ((*p_29))
                        break;
                    return l_821;
                }
            }
            else
            { 
                int64_t l_840 = 2L;
                struct S0 **l_846 = &l_845;
                for (g_531 = 27; (g_531 < 2); g_531--)
                { 
                    uint16_t l_832 = 7UL;
                    int32_t l_841 = (-7L);
                    (*l_55) = func_30(&g_60);
                    (*l_812) = (l_827 , func_30((((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((l_832 < (safe_add_func_int64_t_s_s((l_835 == (safe_mod_func_uint8_t_u_u((**l_812), 8L))), (safe_mul_func_uint16_t_u_u(g_157[1], (-1L)))))) , (*p_29)) != 0x9BCF659EL), l_840)), l_840)) ^ (-5L)) , (**l_809)) ^ (*p_29)) , (*l_812))));
                    if (l_832)
                        break;
                    l_842--;
                }
                (*l_846) = l_845;
            }
            for (g_59 = 7; (g_59 > (-20)); --g_59)
            { 
                (*p_29) = 1L;
                (*p_29) ^= (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((l_855 != (void*)0), 0UL)), 7)), (*g_375)));
                return l_821;
            }
            for (g_531 = 0; (g_531 <= 5); g_531++)
            { 
                int32_t l_860 = 0xF03F8CC6L;
                for (g_415 = 0; (g_415 >= 37); g_415 = safe_add_func_int64_t_s_s(g_415, 3))
                { 
                    if (l_860)
                        break;
                }
                for (g_89 = 0; (g_89 > 16); ++g_89)
                { 
                    return l_821;
                }
                if ((*p_29))
                    continue;
                for (g_89 = 0; (g_89 <= 2); g_89 += 1)
                { 
                    int i;
                    if (g_157[g_89])
                        break;
                }
                for (l_860 = (-23); (l_860 > (-8)); l_860 = safe_add_func_int8_t_s_s(l_860, 9))
                { 
                    if ((*p_29))
                        break;
                    if ((*p_29))
                        continue;
                }
            }
            (**l_812) ^= (((*l_866) = (l_865 = &l_835)) == (l_868 , &g_142));
        }
    }
    return (*g_408);
}



static int32_t * func_30(int32_t * p_31)
{ 
    int16_t l_33 = 5L;
    int32_t *l_34 = &g_7[0];
    int32_t *l_35 = &g_7[0];
    int32_t l_36 = 0x437F1BD5L;
    int32_t *l_37 = &g_7[0];
    int32_t l_38 = 0x3818264DL;
    int32_t *l_39 = &l_38;
    int32_t *l_40 = &l_36;
    int32_t *l_41 = &g_7[0];
    int32_t *l_42 = &l_36;
    int32_t *l_43 = &l_36;
    int32_t *l_44 = (void*)0;
    int32_t *l_45[1];
    int8_t l_46 = 0x2EL;
    uint8_t l_47[4][4] = {{0UL,1UL,1UL,0UL},{1UL,1UL,0xF8L,1UL},{1UL,0x13L,0xF8L,0xF8L},{1UL,1UL,1UL,0xF8L}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_45[i] = &g_7[0];
    ++l_47[3][0];
    return &g_7[0];
}



static int32_t  func_53(int32_t * p_54)
{ 
    int32_t *l_58 = (void*)0;
    int32_t **l_57 = &l_58;
    int16_t l_93 = 1L;
    int32_t l_107 = 0x97C6CADFL;
    int32_t l_108 = 0xB1A140D6L;
    int32_t l_109 = 9L;
    int32_t l_110 = 0x3B01B0BCL;
    int32_t l_111 = 0xA1F665F5L;
    int32_t l_112[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
    uint32_t l_121 = 0x1E08C4F1L;
    int64_t l_209 = 9L;
    uint8_t *l_221 = &g_135;
    struct S0 l_313[6] = {{-38452,-2212,1164,22,39,129},{-38452,-2212,1164,22,39,129},{-38452,-2212,1164,22,39,129},{-38452,-2212,1164,22,39,129},{-38452,-2212,1164,22,39,129},{-38452,-2212,1164,22,39,129}};
    union U1 l_398 = {4294967295UL};
    const uint16_t l_422 = 65532UL;
    int8_t l_533 = 0L;
    int64_t l_534[3][1][5] = {{{(-8L),0xA83392F809E43CD2LL,(-8L),0xA83392F809E43CD2LL,(-8L)}},{{9L,9L,9L,9L,9L}},{{(-8L),0xA83392F809E43CD2LL,(-8L),0xA83392F809E43CD2LL,(-8L)}}};
    uint16_t l_570 = 2UL;
    uint8_t l_585 = 247UL;
    const uint32_t l_627 = 2UL;
    uint8_t l_628 = 8UL;
    int8_t l_665 = 0L;
    union U1 **l_697 = &g_407[3];
    int64_t l_738 = 1L;
    int i, j, k;
lbl_137:
    (*l_57) = func_30(func_30(p_54));
    for (g_59 = 0; (g_59 >= 0); g_59 -= 1)
    { 
        int32_t l_75 = 0xFF03E53CL;
        union U1 l_76 = {1UL};
        int32_t l_104[2][4] = {{0L,0L,0L,0L},{0L,0x81BD54BCL,0x81BD54BCL,0L}};
        uint8_t l_113 = 0x89L;
        int32_t l_129 = (-1L);
        int64_t *l_140 = (void*)0;
        int64_t *l_141 = &g_142;
        uint64_t *l_144 = &g_145[2][0];
        uint16_t *l_156 = &g_157[1];
        int16_t l_189[7] = {0x826CL,0x826CL,0x826CL,0x826CL,0x826CL,0x826CL,0x826CL};
        uint64_t l_202 = 0xA345722FB22D0E7BLL;
        int16_t l_247 = 5L;
        int8_t *l_251[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int8_t ** const l_250 = &l_251[0][1];
        const struct S0 l_269 = {-40836,5280,942,43,48,160};
        uint32_t l_361 = 4294967286UL;
        uint64_t *l_376 = &g_145[0][0];
        uint8_t l_397 = 1UL;
        uint8_t l_400 = 1UL;
        uint32_t l_486 = 0x53FC052FL;
        int8_t ****l_526 = &g_290;
        int8_t *****l_525 = &l_526;
        int8_t l_535 = 0x04L;
        int32_t *l_545 = &l_111;
        const int16_t l_598 = 0xCF6AL;
        int32_t *l_599 = &g_7[g_59];
        int32_t l_691 = 0L;
        const int8_t *l_759[6][3][5] = {{{(void*)0,&l_535,(void*)0,&l_535,&g_310[0][3]},{&g_310[0][6],&g_310[0][3],&g_87[1][0][0],&l_665,&g_310[0][2]},{(void*)0,&g_87[1][0][0],(void*)0,&l_535,&g_310[0][3]}},{{&l_665,&l_665,&g_310[0][2],&g_310[0][2],&g_310[0][2]},{&g_310[0][3],&g_310[0][3],(void*)0,(void*)0,&l_535},{&l_665,&g_87[3][0][3],&g_310[0][6],(void*)0,&l_665}},{{(void*)0,(void*)0,(void*)0,&l_533,&l_535},{&g_310[0][6],&g_87[3][0][3],&l_665,&g_310[0][3],&l_533},{(void*)0,&g_310[0][3],&g_310[0][3],(void*)0,(void*)0}},{{&g_310[0][2],&l_665,&l_665,&l_535,&g_87[2][0][1]},{(void*)0,&g_87[1][0][0],(void*)0,&g_87[1][0][0],(void*)0},{&g_87[1][0][0],&g_310[0][3],&g_310[0][6],&l_535,&g_87[1][0][0]}},{{(void*)0,&l_535,(void*)0,(void*)0,&l_535},{&l_665,(void*)0,&g_310[0][2],&g_310[0][3],&g_87[1][0][0]},{&g_87[1][0][0],(void*)0,(void*)0,&l_533,(void*)0}},{{&g_87[1][0][0],(void*)0,&g_87[1][0][0],(void*)0,&g_87[2][0][1]},{&g_87[1][0][0],&l_535,(void*)0,(void*)0,(void*)0},{&l_665,&g_310[0][3],&l_665,&g_310[0][2],&l_533}}};
        const int8_t * const *l_758 = &l_759[5][1][0];
        int i, j, k;
        for (g_60 = 0; (g_60 >= 0); g_60 -= 1)
        { 
            int32_t *l_71[3][1][3] = {{{&g_60,&g_61,&g_61}},{{&g_60,&g_61,&g_61}},{{&g_60,&g_61,&g_61}}};
            uint64_t l_74 = 0UL;
            uint64_t l_103 = 0UL;
            int i, j, k;
            for (g_61 = 0; (g_61 >= 0); g_61 -= 1)
            { 
                uint32_t l_63 = 18446744073709551610UL;
                uint32_t l_70 = 0xA8F3E709L;
                int32_t *l_72 = (void*)0;
                uint8_t *l_86 = &l_76.f1;
                uint8_t *l_88[7] = {&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89};
                int16_t l_106 = 0x642AL;
                int i;
                for (g_62 = 0; (g_62 >= 0); g_62 -= 1)
                { 
                    uint64_t l_73[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_73[i] = 0xC17BCF7A535ACB96LL;
                    --l_63;
                    l_74 &= ((safe_add_func_uint64_t_u_u((&g_7[g_62] != ((*l_57) = func_30(&g_61))), (l_73[0] = (g_7[0] == (((l_70 > g_62) == ((l_71[1][0][2] != l_72) <= g_59)) , g_7[0]))))) , (-1L));
                    if (l_75)
                        continue;
                    return g_60;
                }
                l_93 |= ((((l_76 , (g_92 ^= ((safe_mul_func_uint8_t_u_u(247UL, (g_79 != (void*)0))) < (g_7[g_60] < ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((g_87[1][0][0] = (safe_lshift_func_int8_t_s_u(5L, (--g_89)))), 7)) | g_7[g_61]), g_7[g_59])) == 5L))))) , 1UL) != 6L) & 0x80E06442L);
            }
            if (l_74)
                goto lbl_137;
            return (*p_54);
        }
    }
    if (g_61)
        goto lbl_137;
    return (*l_58);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_87[i][j][k], "g_87[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_124[i].f0, "g_124[i].f0", print_hash_value);

    }
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_127.f5, "g_127.f5", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_145[i][j], "g_145[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);

    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_310[i][j], "g_310[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_358[i][j], "g_358[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_1143, "g_1143", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1152[i][j], "g_1152[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1322, "g_1322", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1356[i][j][k], "g_1356[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1399, "g_1399", print_hash_value);
    transparent_crc(g_1468, "g_1468", print_hash_value);
    transparent_crc(g_1479, "g_1479", print_hash_value);
    transparent_crc(g_1509, "g_1509", print_hash_value);
    transparent_crc(g_1513, "g_1513", print_hash_value);
    transparent_crc(g_1535, "g_1535", print_hash_value);
    transparent_crc(g_1649, "g_1649", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1776[i], "g_1776[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1813[i], "g_1813[i]", print_hash_value);

    }
    transparent_crc(g_1828, "g_1828", print_hash_value);
    transparent_crc(g_2035, "g_2035", print_hash_value);
    transparent_crc(g_2047, "g_2047", print_hash_value);
    transparent_crc(g_2067, "g_2067", print_hash_value);
    transparent_crc(g_2108, "g_2108", print_hash_value);
    transparent_crc(g_2182, "g_2182", print_hash_value);
    transparent_crc(g_2289, "g_2289", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2296[i][j][k], "g_2296[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2301, "g_2301", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2358[i], "g_2358[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
