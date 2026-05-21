// SPDX-License-Identifier: MIT
// cctest_csmith_df39d7e1.c --- cctest case csmith_df39d7e1 (csmith seed 3745109985)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4c38076e */

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

// Options:   -s 3745109985 -o /tmp/csmith_gen_4c8e40ud/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int64_t  f3;
   int64_t  f4;
   int16_t  f5;
};
#pragma pack(pop)

struct S1 {
   const uint32_t  f0;
   const int32_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   const int32_t  f4;
};

union U2 {
   uint8_t  f0;
};


static int32_t g_2 = 0L;
static int32_t g_5 = 0xFE4B2830L;
static int32_t g_8[2] = {0x2250DB85L,0x2250DB85L};
static uint8_t g_22[2][2] = {{0x35L,0x35L},{0x35L,0x35L}};
static const uint8_t g_56[1] = {0x84L};
static uint8_t g_61 = 1UL;
static uint8_t *g_62 = (void*)0;
static int16_t g_64 = 0x0509L;
static int32_t g_73 = 0x4477D717L;
static uint16_t g_92 = 4UL;
static uint64_t g_103 = 0x8812E5E4DFF3B7F0LL;
static int8_t g_126[3][2][4] = {{{0x29L,2L,2L,2L},{2L,(-8L),8L,2L}},{{8L,2L,(-1L),(-1L)},{0xCFL,0xCFL,2L,0x29L}},{{0xCFL,(-8L),(-1L),0xCFL},{8L,0x29L,8L,(-1L)}}};
static int16_t g_129[3] = {0x4E5AL,0x4E5AL,0x4E5AL};
static int16_t g_148 = 1L;
static uint16_t g_152 = 0x47B7L;
static uint64_t *g_157 = &g_103;
static uint64_t **g_156 = &g_157;
static int32_t g_160 = 0x20E0A404L;
static int16_t g_161[3][5] = {{0x7A29L,0x7A29L,0x7A29L,0x7A29L,0x7A29L},{0x7A29L,0x7A29L,0x7A29L,0x7A29L,0x7A29L},{0x7A29L,0x7A29L,0x7A29L,0x7A29L,0x7A29L}};
static uint64_t ** const ***g_184 = (void*)0;
static int64_t g_201 = 1L;
static int64_t *g_204 = &g_201;
static int64_t **g_203 = &g_204;
static union U2 g_205[2][5] = {{{0x3BL},{0x3BL},{0xD5L},{255UL},{0xD5L}},{{0x3BL},{0x3BL},{0xD5L},{255UL},{0xD5L}}};
static int8_t g_220 = 0L;
static int64_t g_223[3] = {(-7L),(-7L),(-7L)};
static int64_t g_224 = 0x69CAE7AD8DBD10F5LL;
static int8_t g_227 = (-3L);
static int16_t g_228 = (-9L);
static uint32_t g_229 = 2UL;
static int8_t g_258[6] = {0x6CL,0x6CL,0x6CL,0x6CL,0x6CL,0x6CL};
static uint64_t g_259 = 0UL;
static int32_t g_281 = 0x9C37545CL;
static uint32_t *g_288 = (void*)0;
static struct S0 g_294[2] = {{0x5284332CL,0x01CCD87EL,0x96986D46L,0L,-1L,0L},{0x5284332CL,0x01CCD87EL,0x96986D46L,0L,-1L,0L}};
static uint16_t g_324 = 0UL;
static int32_t g_327 = 0L;
static uint8_t **g_358 = (void*)0;
static struct S0 g_363 = {0xD26E86E7L,0xB346AE8FL,0x79D2087AL,0xC82EA3C633B4A128LL,-1L,0xE14EL};
static int32_t *g_430 = &g_73;
static union U2 *g_473 = &g_205[1][4];
static union U2 **g_472 = &g_473;
static uint64_t g_506 = 3UL;
static int32_t g_518 = (-1L);
static int32_t g_526 = (-1L);
static int32_t g_527 = 1L;
static uint32_t g_528 = 18446744073709551615UL;
static int32_t *g_589 = (void*)0;
static struct S1 g_652 = {0xBA47751EL,1L,0xB8L,0xE8L,6L};
static int32_t g_662 = 0x6BF7FCAAL;
static uint64_t g_663 = 1UL;
static uint32_t g_714 = 0x2963D1DCL;
static struct S1 * const g_722 = (void*)0;
static struct S1 * const *g_721 = &g_722;
static uint8_t g_763 = 0x14L;
static uint16_t g_798 = 0UL;
static uint64_t **g_816 = (void*)0;
static int32_t **g_822 = (void*)0;
static const uint8_t *g_876 = &g_61;
static const uint8_t **g_875 = &g_876;
static const uint8_t ***g_874 = &g_875;
static const uint8_t ****g_873 = &g_874;
static uint64_t g_946[2] = {18446744073709551612UL,18446744073709551612UL};
static const struct S0 *g_951 = (void*)0;
static const struct S0 ** const g_950 = &g_951;
static const int32_t g_1108 = 5L;
static const uint32_t **g_1135 = (void*)0;
static const uint32_t ***g_1134 = &g_1135;
static int64_t g_1182 = (-1L);
static int32_t g_1183 = (-1L);
static int8_t g_1185 = (-1L);
static int64_t g_1186[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_1188 = 4294967295UL;
static uint16_t g_1191 = 0x01BDL;
static int8_t g_1194 = 4L;
static uint8_t g_1195 = 0x85L;
static int32_t g_1241 = 0xEE1E1097L;
static int32_t g_1242 = 0xA6044505L;
static int32_t g_1246 = 0x1579B6E4L;
static uint32_t g_1248 = 0xF5BC4E08L;
static int32_t g_1271 = 1L;
static uint8_t g_1272[3][5] = {{1UL,1UL,0x05L,1UL,1UL},{0x9AL,0x86L,0x9AL,0x9AL,0x86L},{1UL,0xFDL,0xFDL,1UL,0xFDL}};
static uint32_t g_1283 = 4294967295UL;
static int64_t * const *g_1298[3] = {&g_204,&g_204,&g_204};
static int64_t * const ** const g_1297 = &g_1298[0];
static int64_t * const ** const * const g_1296 = &g_1297;
static uint8_t g_1400 = 1UL;
static uint16_t *g_1412 = &g_152;
static uint16_t **g_1411 = &g_1412;
static uint16_t g_1469 = 1UL;
static struct S0 **g_1505[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static struct S0 ***g_1504 = &g_1505[4];
static uint16_t g_1531 = 8UL;
static int32_t g_1568 = (-2L);
static int16_t *g_1595 = &g_363.f5;
static int16_t **g_1594 = &g_1595;
static int32_t g_1624 = 0xE772DCDAL;
static uint16_t g_1749 = 0xB965L;
static struct S0 g_1753[1] = {{1L,8UL,0x45A6B733L,8L,0x1F54667E08DB254FLL,0xAC5DL}};
static uint32_t g_1768[2] = {18446744073709551608UL,18446744073709551608UL};
static uint16_t g_1812 = 0UL;
static int32_t **g_1814 = &g_589;
static int32_t ***g_1813 = &g_1814;
static struct S0 g_1818 = {0L,0xFEA000BAL,0xC999D200L,-8L,-6L,0xC28EL};
static int64_t g_1834 = 0xBF6604C80B5D56CBLL;
static int16_t ***g_1840[6][7] = {{&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594},{(void*)0,(void*)0,&g_1594,(void*)0,(void*)0,&g_1594,(void*)0},{&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594,&g_1594},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int16_t g_1876 = 0x68DBL;
static int32_t g_1879 = 0xC6AB8BC0L;
static int8_t g_1881 = 0xEDL;
static int64_t g_1882 = (-3L);
static int8_t g_1885 = 1L;
static uint32_t g_1886 = 4294967295UL;
static uint16_t g_1890 = 8UL;
static uint16_t g_1981 = 0xDD3FL;
static uint8_t g_2008 = 1UL;
static int64_t ***g_2021 = &g_203;
static int64_t ****g_2020 = &g_2021;
static int64_t *****g_2019 = &g_2020;
static uint32_t **g_2043 = &g_288;
static uint32_t ***g_2042[7] = {&g_2043,&g_2043,&g_2043,&g_2043,&g_2043,&g_2043,&g_2043};
static uint32_t ****g_2041 = &g_2042[0];
static uint32_t *****g_2040 = &g_2041;
static int16_t g_2062 = 0x5E9AL;
static uint8_t g_2063 = 255UL;
static uint64_t g_2066 = 0UL;
static uint32_t g_2093 = 0x8A75E9EFL;
static uint8_t g_2118 = 8UL;
static uint16_t g_2163[7] = {0x390BL,0x390BL,0x390BL,0x390BL,0x390BL,0x390BL,0x390BL};
static uint8_t g_2179 = 0xFCL;
static uint64_t g_2184 = 0xD31D466412C04C2DLL;
static uint64_t g_2205 = 18446744073709551615UL;
static int8_t g_2230[5][6][7] = {{{3L,(-9L),(-5L),0L,0xD9L,0xD5L,1L},{9L,0x8DL,0x3AL,4L,0x3AL,0x8DL,9L},{0x52L,0xA5L,3L,0xD2L,3L,1L,0xB5L},{0L,(-1L),8L,0x3AL,0x49L,0x49L,0x3AL},{3L,(-1L),3L,0xC4L,0x0CL,0x9BL,5L},{0x8DL,0x78L,0x3AL,(-1L),5L,0xF9L,0L}},{{1L,0L,(-5L),0xD1L,0x52L,0x9BL,2L},{0x94L,0x3AL,5L,0x4FL,8L,0x49L,0x64L},{0L,0x9BL,(-4L),1L,1L,1L,(-4L)},{0x3AL,0x3AL,0xF9L,(-6L),0x4FL,0x8DL,0xD5L},{2L,0L,0L,0L,(-4L),0xD5L,(-1L)},{0x8DL,0x3AL,4L,0x3AL,0x8DL,9L,0x49L}},{{0L,1L,0L,0x25L,3L,0xD1L,1L},{0x0BL,0L,0x94L,0x4FL,0x4FL,0x94L,0L},{0L,0x25L,5L,0xCFL,0xB5L,0L,0L},{0x8DL,0x64L,8L,4L,0xD5L,0x4FL,0xD5L},{0xD9L,0xB4L,(-4L),0xCFL,(-1L),3L,0L},{9L,0xD5L,0x8DL,0x4FL,(-6L),0xF9L,0x3AL}},{{0L,0xD5L,0L,0x25L,0L,0xD5L,0L},{5L,0x0BL,0x64L,0x3AL,9L,0L,0xD5L},{1L,0x9BL,(-5L),3L,0L,0xC4L,0L},{0x64L,(-1L),0x64L,0x94L,0xF9L,0x78L,0L},{0x0CL,0L,0L,0x9BL,(-4L),1L,1L},{0x78L,5L,0x8DL,0x8DL,5L,0x78L,0x49L}},{{0xB5L,3L,(-4L),0x97L,(-5L),0xC4L,(-1L)},{4L,0x78L,8L,0L,0x3AL,0L,8L},{0L,3L,5L,0L,3L,0xD5L,0xBFL},{0x49L,5L,0x94L,9L,8L,0xF9L,0xF9L},{3L,0L,0L,0L,3L,3L,0xD9L},{(-6L),(-1L),4L,0x0BL,0x3AL,0x4FL,0x78L}}};
static union U2 g_2281 = {0x87L};
static uint32_t g_2284[6] = {0x14C0D772L,1UL,1UL,0x14C0D772L,1UL,1UL};
static uint64_t *g_2287 = &g_259;
static uint32_t g_2318 = 4UL;
static uint16_t g_2319 = 0x876DL;
static struct S1 g_2325 = {0x9E2E36A0L,0x72228BCEL,0x1FL,0xEDL,0x2E737B92L};
static struct S1 g_2327 = {0x3DEBB99AL,0L,0xA1L,4UL,-1L};
static uint32_t g_2354 = 0x5AB0D31BL;



static union U2  func_1(void);
static uint8_t  func_14(const int16_t  p_15, uint64_t  p_16);
static uint64_t  func_17(const int32_t  p_18, int32_t  p_19);
static uint8_t  func_29(uint8_t * p_30, const uint16_t  p_31, uint8_t * p_32, struct S0  p_33, int8_t  p_34);
static uint8_t * func_35(uint8_t * p_36, int64_t  p_37, uint8_t * p_38, uint8_t * p_39);
static uint8_t * func_40(uint8_t * p_41, uint16_t  p_42, uint8_t * p_43, uint64_t  p_44);
static uint32_t  func_45(uint64_t  p_46, uint32_t  p_47, uint64_t  p_48);
static const uint32_t  func_51(uint32_t  p_52, uint8_t * p_53, const uint8_t * p_54);




static union U2  func_1(void)
{ 
    uint8_t *l_82 = &g_61;
    int32_t l_1222 = (-10L);
    int32_t l_2253[5];
    int8_t l_2263[4] = {(-6L),(-6L),(-6L),(-6L)};
    uint64_t *l_2286 = &g_663;
    uint32_t l_2288 = 18446744073709551615UL;
    uint64_t l_2295 = 1UL;
    struct S1 *l_2324 = &g_2325;
    uint8_t l_2328 = 1UL;
    uint8_t ** const *l_2336 = &g_358;
    uint8_t ** const * const *l_2335 = &l_2336;
    union U2 l_2357 = {246UL};
    int i;
    for (i = 0; i < 5; i++)
        l_2253[i] = (-1L);
    for (g_2 = 0; (g_2 != (-9)); g_2 = safe_sub_func_int16_t_s_s(g_2, 9))
    { 
        int16_t l_13 = 1L;
        uint8_t *l_77[4];
        uint8_t *l_81 = &g_61;
        int32_t l_2299 = 0xB1C984CBL;
        int32_t l_2303 = 0x4B4ABBB0L;
        int32_t l_2304 = 0xE3669912L;
        int32_t l_2305[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint8_t l_2309 = 255UL;
        const int8_t l_2312 = 1L;
        struct S1 *l_2326 = &g_2327;
        uint64_t l_2343 = 0UL;
        int32_t *l_2352[5][2][7] = {{{&g_73,&g_1241,(void*)0,&g_2,&g_5,&g_73,&g_73},{&g_526,&g_73,&g_8[1],&g_73,&g_526,&g_526,&l_2304}},{{(void*)0,&g_1241,&g_73,&g_2,(void*)0,&g_73,(void*)0},{&g_526,&g_8[1],&g_8[1],&g_526,&g_73,&l_2253[4],&g_2}},{{(void*)0,&g_2,&g_5,&g_73,(void*)0,(void*)0,&g_73},{&g_526,&l_2304,&g_526,&l_2253[4],&l_2305[3],&g_1568,&g_2}},{{&g_2,(void*)0,&g_1241,&g_73,(void*)0,&g_73,&g_1241},{&g_73,&g_73,&l_2304,&l_2253[4],&g_8[1],&g_8[1],&g_1271}},{{&g_2,&g_5,&g_73,(void*)0,(void*)0,&g_73,&g_5},{&g_526,&l_2299,&g_73,&g_1568,&g_8[1],&g_526,&l_2253[4]}}};
        int8_t l_2353 = 0xF9L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_77[i] = &g_61;
        for (g_5 = (-20); (g_5 != (-22)); --g_5)
        { 
            uint8_t *l_88 = (void*)0;
            struct S0 l_89 = {0xC5EE7416L,4294967286UL,0xFC201266L,2L,0xE1243B3BE7B8BBD0LL,0xC5CEL};
            uint64_t l_2249 = 3UL;
            struct S1 l_2269 = {0x8502C2B9L,0xE1091BE5L,0UL,0UL,-2L};
            int64_t * const *l_2282 = (void*)0;
            int32_t l_2298 = 0x5D79F46FL;
            int32_t l_2300 = 0xBFC67BC3L;
            int32_t l_2301 = 0xBF5294E6L;
            int32_t l_2302 = (-9L);
            int32_t l_2306 = 0L;
            int32_t l_2307 = 0x26B7D53BL;
            int32_t l_2308[4][3] = {{0x2FC5D976L,0x2FC5D976L,0x2FC5D976L},{0xFD1975EBL,0xFD1975EBL,0xFD1975EBL},{0x2FC5D976L,0x2FC5D976L,0x2FC5D976L},{0xFD1975EBL,0xFD1975EBL,0xFD1975EBL}};
            const int32_t l_2320 = (-8L);
            union U2 l_2321 = {0xE0L};
            uint8_t ** const * const **l_2337 = &l_2335;
            uint32_t *l_2338 = &g_1188;
            uint32_t l_2339 = 1UL;
            uint32_t *l_2340 = &g_2318;
            uint64_t l_2349 = 0xE2D336230B066A3BLL;
            int i, j;
            for (g_8[1] = 0; (g_8[1] <= (-15)); g_8[1] = safe_sub_func_int8_t_s_s(g_8[1], 1))
            { 
                uint8_t *l_21[7] = {&g_22[1][1],&g_22[1][1],&g_22[1][1],&g_22[1][1],&g_22[1][1],&g_22[1][1],&g_22[1][1]};
                uint8_t **l_76 = &l_21[1];
                uint8_t *l_87 = &g_61;
                uint64_t *l_646 = &g_506;
                int32_t l_647 = 8L;
                int32_t *l_2233 = &g_526;
                int32_t l_2262[2];
                uint32_t l_2264[2][4][1] = {{{18446744073709551615UL},{0xF22AD1E2L},{0xF22AD1E2L},{18446744073709551615UL}},{{0xF22AD1E2L},{0xF22AD1E2L},{18446744073709551615UL},{0xF22AD1E2L}}};
                int64_t **l_2283 = &g_204;
                int8_t l_2285 = (-4L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2262[i] = (-7L);
            }
            for (g_228 = 6; (g_228 > (-15)); g_228 = safe_sub_func_int16_t_s_s(g_228, 7))
            { 
                int32_t *l_2291 = (void*)0;
                int32_t *l_2292 = &g_8[1];
                int32_t *l_2293 = &l_1222;
                int32_t *l_2294[3];
                uint32_t * const ***l_2313 = (void*)0;
                uint32_t * const l_2317 = &g_2318;
                uint32_t * const *l_2316 = &l_2317;
                uint32_t * const **l_2315[2];
                uint32_t * const ***l_2314 = &l_2315[0];
                int i;
                for (i = 0; i < 3; i++)
                    l_2294[i] = &g_1271;
                for (i = 0; i < 2; i++)
                    l_2315[i] = &l_2316;
                l_2295--;
                l_2309++;
                (*g_430) = l_2263[1];
                if (((((l_2312 | (((**g_2040) = (void*)0) != ((*l_2314) = (void*)0))) & (((((((**l_2316) = ((((void*)0 != (**g_2019)) && l_2295) && (l_2303 & g_2319))) <= l_89.f2) > l_2301) | 0x39L) , l_13) < l_2320)) < 0x4BL) || l_89.f0))
                { 
                    return l_2321;
                }
                else
                { 
                    struct S1 *l_2323 = &l_2269;
                    struct S1 **l_2322[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2322[i] = &l_2323;
                    l_2326 = (l_2324 = &g_652);
                    if (l_2328)
                        break;
                }
                (*g_430) |= 0x206A76BAL;
            }
            (*g_430) |= (safe_add_func_uint32_t_u_u((l_2300 = (safe_div_func_int64_t_s_s((((l_2308[0][2] = (((safe_mod_func_uint64_t_u_u((((*l_2338) ^= (((*l_2326) , ((*l_2337) = l_2335)) != (void*)0)) > l_2339), ((*****g_2019) ^= (((--(*l_2340)) < l_2328) >= l_2309)))) <= l_2343) , 0UL)) < l_2305[1]) != (-1L)), 0x15629D56E2BED4ECLL))), 0L));
            for (g_227 = 0; (g_227 != (-9)); g_227 = safe_sub_func_uint8_t_u_u(g_227, 9))
            { 
                int32_t *l_2346 = &l_2306;
                int32_t *l_2347 = (void*)0;
                int32_t *l_2348[6][5][6] = {{{&l_2306,&l_2300,&l_2299,(void*)0,&l_2303,&l_2299},{&l_2300,&l_2301,&l_2305[3],&l_2301,&l_2300,&g_8[1]},{&g_1271,(void*)0,&l_2301,&g_281,&g_1271,&g_2},{&l_2306,&l_2303,&l_2302,(void*)0,(void*)0,&g_2},{&l_2301,&g_5,&l_2301,&l_2302,&l_2300,&g_8[1]}},{{(void*)0,&l_2308[0][1],&l_2305[3],&l_2301,(void*)0,&l_2299},{&l_2301,&l_2304,&l_2299,&g_2,&g_8[1],&l_2300},{&l_2305[3],&l_2301,&g_526,&g_526,&l_2301,&l_2305[3]},{&l_2302,&l_2300,&l_2303,&l_2308[0][1],(void*)0,&l_2306},{&g_5,(void*)0,&l_2253[4],&l_2301,&g_2,&g_73}},{{&g_5,(void*)0,&l_2301,&l_2308[0][1],&l_2301,&l_2306},{&l_2302,(void*)0,&l_2299,&g_526,&l_2301,(void*)0},{&l_2305[3],&g_73,(void*)0,&g_2,&l_2253[4],&l_2302},{&l_2301,&l_2306,&g_73,&l_2301,&g_73,&l_2306},{(void*)0,&g_526,&l_2301,&l_2302,&g_8[1],&g_73}},{{&l_2301,&l_2306,&l_2300,(void*)0,&l_2303,&g_8[1]},{&l_2306,&l_2306,&g_2,&g_281,&g_8[1],(void*)0},{&g_1271,&g_526,(void*)0,&l_2301,&g_73,&l_2299},{&l_2300,&l_2306,&l_2306,(void*)0,&l_2253[4],&l_2301},{&l_2306,&g_73,(void*)0,&l_2301,&l_2301,(void*)0}},{{(void*)0,(void*)0,&l_2304,&l_2303,&l_2301,&l_2253[4]},{(void*)0,(void*)0,&l_2301,&g_1241,&g_2,&l_2304},{&g_1271,(void*)0,&l_2301,&l_2300,&l_2305[3],&l_2301},{&l_2301,&l_2306,&l_2302,&l_2304,(void*)0,&l_2305[3]},{&l_2304,(void*)0,&l_2305[3],&l_2303,&l_2253[4],&l_2299}},{{&g_8[1],&l_2302,&l_2301,&g_526,(void*)0,&g_526},{(void*)0,&l_2306,(void*)0,&l_2301,&l_2301,&l_2303},{(void*)0,&g_73,&l_2301,&l_2301,&l_2303,&l_2253[4]},{&l_2306,&g_8[1],&l_2306,&l_2301,&l_2308[0][1],&l_2301},{(void*)0,(void*)0,&g_1271,&l_2301,&l_2306,&l_2299}}};
                int i, j, k;
                l_2349++;
            }
            (*g_430) = (*g_430);
        }
        g_2354++;
    }
    return l_2357;
}



static uint8_t  func_14(const int16_t  p_15, uint64_t  p_16)
{ 
    uint16_t l_1232 = 0x10BEL;
    union U2 l_1235 = {254UL};
    uint8_t *l_1236 = &g_763;
    int32_t l_1238 = 0x9615BB4EL;
    int32_t l_1239 = 0x7B8D50BBL;
    int32_t l_1240 = (-3L);
    int32_t l_1244 = (-1L);
    int32_t l_1245 = (-1L);
    int32_t l_1247 = 0xC266D96AL;
    int32_t *l_1269 = &g_1246;
    int32_t l_1270 = 0x0CB0A5F5L;
    struct S1 l_1287 = {0x82E14080L,0x2F298F24L,0UL,1UL,2L};
    uint8_t ***l_1308 = &g_358;
    uint64_t * const *l_1332 = (void*)0;
    uint64_t * const **l_1331 = &l_1332;
    uint64_t * const ***l_1330 = &l_1331;
    struct S0 l_1358 = {0x38AE188BL,4294967286UL,-8L,0xE590642DAF2D1DE1LL,0L,-1L};
    int64_t *l_1364 = (void*)0;
    int32_t l_1397[6][7] = {{0xC56FC9D0L,0xE6988B52L,0xE6988B52L,0xC56FC9D0L,0x9077C3C6L,0x69D9BD50L,0L},{0xF58F35D6L,0x9D72DD1BL,0xE6988B52L,0x3A08EC9DL,0L,0xF58F35D6L,0xF58F35D6L},{0x9D72DD1BL,0L,0x0EB9A872L,0L,0x9D72DD1BL,0x83FD002BL,0L},{0xC56FC9D0L,0x9077C3C6L,0x69D9BD50L,0L,0xE6988B52L,0x69D9BD50L,0x02EEDC80L},{0xE6988B52L,0x02EEDC80L,0x3A08EC9DL,0x3A08EC9DL,0x02EEDC80L,0xE6988B52L,0x9077C3C6L},{0xC56FC9D0L,0L,0x7D765DB6L,0xC56FC9D0L,0x02EEDC80L,0xDCF0FFF4L,0L}};
    int16_t l_1427 = 0L;
    int32_t *l_1428[2];
    int16_t l_1429 = 0xD3EBL;
    uint16_t **l_1456 = &g_1412;
    uint64_t l_1574 = 4UL;
    const int16_t *l_1620 = &g_161[0][2];
    const int16_t ** const l_1619 = &l_1620;
    int32_t l_1621 = 0x9110F3B2L;
    uint32_t l_1645[3][7] = {{0xD7419EB4L,0xD7419EB4L,4294967294UL,4294967295UL,4294967294UL,0xD7419EB4L,0xD7419EB4L},{0xD7419EB4L,4294967294UL,4294967295UL,4294967294UL,0xD7419EB4L,0xD7419EB4L,4294967294UL},{1UL,0x369C74DBL,1UL,4294967294UL,4294967294UL,1UL,0x369C74DBL}};
    int32_t l_1653[7][5];
    uint64_t *l_1694 = &g_663;
    uint64_t ** const l_1693[7][1] = {{(void*)0},{&l_1694},{(void*)0},{&l_1694},{(void*)0},{&l_1694},{(void*)0}};
    uint64_t ** const *l_1692 = &l_1693[5][0];
    int16_t l_1729 = 0xFDAAL;
    struct S0 *l_1752[5] = {&g_1753[0],&g_1753[0],&g_1753[0],&g_1753[0],&g_1753[0]};
    int8_t l_1815 = 0xF2L;
    const int32_t l_1828 = 0xB147232EL;
    const uint16_t l_1911[4][5] = {{65535UL,0xB754L,0xB754L,65535UL,65535UL},{65535UL,0xB754L,0xB754L,65535UL,65535UL},{65535UL,0xB754L,0xB754L,65535UL,65535UL},{65535UL,0xB754L,0xB754L,65535UL,65535UL}};
    uint32_t *** const l_1924 = (void*)0;
    uint32_t *** const *l_1923 = &l_1924;
    const struct S1 *l_1927[7][4] = {{&l_1287,&g_652,&l_1287,&g_652},{&g_652,&l_1287,&g_652,&g_652},{&g_652,&g_652,&l_1287,&l_1287},{&l_1287,&g_652,&l_1287,&g_652},{&g_652,&l_1287,&g_652,&l_1287},{&g_652,&l_1287,&l_1287,&g_652},{&l_1287,&g_652,&g_652,&l_1287}};
    const struct S1 **l_1926[3][5] = {{&l_1927[4][3],&l_1927[4][3],&l_1927[4][3],&l_1927[4][3],&l_1927[4][3]},{&l_1927[4][3],&l_1927[4][3],&l_1927[4][3],&l_1927[4][3],&l_1927[4][3]},{&l_1927[4][3],&l_1927[4][3],&l_1927[4][3],&l_1927[4][3],&l_1927[4][3]}};
    const struct S1 ***l_1925 = &l_1926[1][1];
    int32_t l_1942 = 0L;
    int16_t ***l_2005 = &g_1594;
    int64_t *****l_2023 = (void*)0;
    int16_t l_2060 = (-1L);
    int64_t l_2061 = (-1L);
    int32_t l_2148 = 5L;
    uint16_t l_2201 = 0xA04EL;
    int32_t l_2223[2];
    uint8_t *l_2224 = &g_1400;
    const int8_t l_2229 = (-1L);
    uint32_t l_2231 = 0xFCCBACD9L;
    int16_t l_2232 = (-1L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_1428[i] = &l_1238;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
            l_1653[i][j] = (-1L);
    }
    for (i = 0; i < 2; i++)
        l_2223[i] = 0L;
    return p_15;
}



static uint64_t  func_17(const int32_t  p_18, int32_t  p_19)
{ 
    uint8_t l_655[2][4][6] = {{{1UL,254UL,0UL,0UL,254UL,1UL},{0x49L,1UL,0UL,2UL,1UL,1UL},{0UL,2UL,2UL,0UL,0x49L,0UL},{0UL,0x49L,0UL,2UL,2UL,0UL}},{{1UL,1UL,2UL,254UL,2UL,1UL},{2UL,0x49L,254UL,254UL,0x49L,2UL},{1UL,2UL,254UL,2UL,1UL,1UL},{0UL,2UL,2UL,0UL,0x49L,0UL}}};
    int32_t l_659[3][5] = {{1L,0x4EB98362L,1L,0xD7458C6AL,(-6L)},{0x10B12EF3L,4L,(-6L),4L,0x10B12EF3L},{1L,4L,0x4EB98362L,0x10B12EF3L,0x4EB98362L}};
    int8_t l_673 = 0x80L;
    uint64_t * const *l_694 = &g_157;
    uint64_t * const **l_693 = &l_694;
    uint64_t * const ***l_692[5] = {&l_693,&l_693,&l_693,&l_693,&l_693};
    uint64_t * const ****l_691 = &l_692[0];
    int8_t l_698 = 0x20L;
    const union U2 l_710 = {0x3EL};
    int64_t ***l_740 = (void*)0;
    int32_t *l_770 = &g_327;
    int32_t *l_771 = &g_518;
    int32_t *l_772 = (void*)0;
    int8_t l_788 = (-1L);
    int32_t l_821 = 1L;
    struct S0 l_831 = {0L,4294967295UL,1L,0L,1L,0x3819L};
    uint32_t **l_846 = (void*)0;
    uint8_t l_926 = 5UL;
    int8_t l_958[6] = {(-1L),(-1L),0x85L,(-1L),(-1L),0x85L};
    struct S1 * const *l_1006 = &g_722;
    const uint8_t * const *l_1020 = &g_876;
    const uint8_t * const ** const l_1019 = &l_1020;
    const uint8_t * const ** const *l_1018 = &l_1019;
    const uint8_t * const ** const **l_1017 = &l_1018;
    struct S0 l_1035 = {0x3D0B0420L,6UL,0x6FC267DDL,7L,-1L,0xCE05L};
    uint16_t *l_1056 = (void*)0;
    const int32_t *l_1107 = &g_1108;
    const int32_t *l_1109[5][6] = {{&g_5,&g_5,&l_821,&g_652.f1,&l_821,&g_5},{&l_821,&g_652.f1,&g_652.f1,&g_652.f1,&g_652.f1,&l_821},{&g_5,&l_821,&g_652.f1,&l_821,&g_5,&g_5},{&g_281,&l_821,&l_821,&g_281,&g_652.f1,&g_281},{&g_281,&g_652.f1,&g_281,&l_821,&l_821,&g_281}};
    int64_t l_1179 = 0x934D1D8D3AE0ECC4LL;
    int64_t l_1200 = 3L;
    int8_t l_1211 = (-2L);
    int i, j, k;
lbl_898:
    for (g_526 = 27; (g_526 < 21); g_526 = safe_sub_func_uint32_t_u_u(g_526, 1))
    { 
        int16_t l_650 = (-2L);
        int32_t *l_651 = &g_73;
        uint8_t *l_656[5] = {&g_205[1][4].f0,&g_205[1][4].f0,&g_205[1][4].f0,&g_205[1][4].f0,&g_205[1][4].f0};
        uint64_t l_657 = 18446744073709551615UL;
        int32_t l_660[2];
        uint8_t ***l_672 = &g_358;
        struct S1 *l_683[7] = {(void*)0,&g_652,(void*)0,(void*)0,&g_652,(void*)0,(void*)0};
        uint64_t ***l_713 = &g_156;
        uint64_t ****l_712 = &l_713;
        uint64_t *****l_711[6];
        union U2 l_724 = {0x67L};
        int i;
        for (i = 0; i < 2; i++)
            l_660[i] = 0xEDDD5F1FL;
        for (i = 0; i < 6; i++)
            l_711[i] = &l_712;
        l_650 &= (*g_430);
        g_589 = l_651;
        if (((*g_589) = ((((9UL ^ 0x77L) & ((g_652 , ((g_64 | ((g_22[0][1] ^= (safe_lshift_func_int16_t_s_s(((-2L) < (l_655[1][0][1] || ((*l_651) == 0xF3L))), p_18))) == 1L)) , (*l_651))) , 18446744073709551614UL)) , 0xAB2826A2A6D4D78FLL) & l_657)))
        { 
            int32_t **l_658 = &l_651;
            int32_t *l_661[7][1] = {{&l_659[1][2]},{&g_281},{&l_659[1][2]},{&g_281},{&l_659[1][2]},{&g_281},{&l_659[1][2]}};
            int16_t *l_670[7][3];
            uint32_t l_671[1];
            uint64_t l_674 = 0x7811E0D8CB3FF9E1LL;
            int64_t * const l_690[3][4][4] = {{{&g_294[0].f4,&g_201,&g_223[0],&g_223[2]},{&g_223[0],&g_224,&g_224,&g_223[0]},{&g_223[0],(void*)0,&g_223[0],&g_223[0]},{&g_294[0].f4,&g_223[0],(void*)0,&g_363.f3}},{{&g_223[2],&g_223[0],&g_223[2],&g_363.f3},{(void*)0,&g_223[0],&g_294[0].f4,&g_223[0]},{&g_223[0],(void*)0,&g_223[0],&g_223[0]},{&g_224,&g_224,&g_223[0],&g_223[2]}},{{&g_223[0],&g_201,&g_294[0].f4,(void*)0},{(void*)0,&g_294[0].f4,&g_223[2],&g_294[0].f4},{&g_223[2],&g_294[0].f4,(void*)0,(void*)0},{&g_294[0].f4,&g_201,&g_223[0],&g_223[2]}}};
            struct S1 **l_720 = &l_683[3];
            uint64_t *** const * const l_743 = &l_713;
            int64_t l_762 = 0xC2D2F6E9A410F57CLL;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 3; j++)
                    l_670[i][j] = &l_650;
            }
            for (i = 0; i < 1; i++)
                l_671[i] = 8UL;
            (*l_658) = (void*)0;
            g_663++;
            if ((((safe_mul_func_uint8_t_u_u(p_19, (safe_sub_func_int64_t_s_s((((l_671[0] = p_19) < ((p_19 > l_659[1][2]) >= ((void*)0 == l_672))) > ((l_673 &= p_18) > l_674)), p_19)))) | p_19) <= 0x53075074L))
            { 
                int32_t l_682 = 0xFB8AE51BL;
                int64_t *l_689[3];
                uint64_t ** const *l_697[3][3][4] = {{{&g_156,&g_156,&g_156,(void*)0},{&g_156,(void*)0,&g_156,&g_156},{&g_156,(void*)0,&g_156,(void*)0}},{{(void*)0,&g_156,&g_156,&g_156},{&g_156,&g_156,&g_156,&g_156},{(void*)0,&g_156,&g_156,(void*)0}},{{&g_156,(void*)0,&g_156,&g_156},{(void*)0,&g_156,&g_156,(void*)0},{&g_156,(void*)0,&g_156,(void*)0}}};
                uint64_t ** const **l_696 = &l_697[1][2][1];
                uint64_t ** const ***l_695 = &l_696;
                struct S0 l_709[1] = {{0x83ADF3B2L,0x34E08362L,0xF9181608L,-2L,0x88AB512822718D2CLL,0L}};
                int32_t ***l_733 = (void*)0;
                int32_t ***l_734 = (void*)0;
                int32_t ***l_735 = &l_658;
                int64_t ***l_742[3][6][6];
                int64_t ****l_741 = &l_742[0][0][0];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_689[i] = &g_363.f3;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 6; k++)
                            l_742[i][j][k] = &g_203;
                    }
                }
                if (l_659[0][1])
                    break;
                if (((safe_mod_func_uint32_t_u_u(((g_663 > (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((!0xAFL) , l_682) , (void*)0) == l_683[3]), (((((~(safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(0x8BEB12BEFF3C335DLL, ((((((l_689[1] = &g_223[2]) == l_690[1][2][0]) >= 255UL) >= l_682) && 0xDF2AF7ED8110F002LL) != 0xCBDA2F91L))), p_18))) ^ 65529UL) , l_691) != l_695) && l_698))), g_259))) > 0xBFL), 4294967295UL)) , (-10L)))
                { 
                    (*g_430) = (safe_lshift_func_int8_t_s_s(((0xBC1AL ^ ((((safe_rshift_func_uint8_t_u_u((g_652.f3 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((g_714 |= ((safe_lshift_func_int16_t_s_u((-3L), p_19)) != (((g_652.f2 , l_709[0]) , ((l_710 , ((l_711[4] == g_184) != (-3L))) != p_19)) & 4294967295UL))), l_709[0].f4)) > (*g_157)), g_324))), l_709[0].f1)) == p_19) , g_327) >= p_19)) ^ 0x451D09D7L), l_698));
                    (*g_430) &= 8L;
                }
                else
                { 
                    uint32_t l_715 = 18446744073709551610UL;
                    int32_t l_723 = 0x1E803B98L;
                    int32_t l_725 = (-4L);
                    --l_715;
                    l_725 = (safe_lshift_func_uint8_t_u_s(((((((*g_430) ^= (l_723 = (l_720 == g_721))) >= ((l_724 , p_18) & (0xC448L & g_294[0].f0))) <= ((((((*g_204) ^ 0xE348F3D563365355LL) , (void*)0) != &g_722) == l_715) == 0x665AA956L)) == 18446744073709551615UL) > 5UL), p_19));
                }
                for (g_160 = 2; (g_160 >= 0); g_160 -= 1)
                { 
                    struct S1 * const *l_726 = &g_722;
                    (*g_589) ^= ((l_659[1][2] = (p_19 | (l_726 == (void*)0))) > (0x4619L && g_652.f0));
                }
                (*g_589) = (safe_mul_func_int16_t_s_s(0x2D3FL, (((((p_18 < ((*g_589) | l_659[1][2])) ^ (safe_mod_func_uint32_t_u_u(((((((&g_589 == ((*l_735) = &l_661[6][0])) || g_223[1]) , g_224) , l_659[1][0]) & 0x4CD9L) > 0xDDD5L), 1UL))) && l_660[0]) & g_528) && (*g_430))));
                (*g_589) = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(p_19, (((((l_740 == ((*l_741) = (void*)0)) != ((void*)0 == &l_683[5])) >= ((*l_695) == l_743)) > p_19) != 0UL))) || g_527), p_19));
            }
            else
            { 
                int32_t *l_746 = &g_526;
                struct S0 l_755 = {1L,0xA4379F48L,0L,-5L,0x733F39D25F002D8ALL,-1L};
                union U2 *l_761 = &g_205[1][4];
                for (g_527 = (-20); (g_527 < (-16)); ++g_527)
                { 
                    (*l_658) = l_746;
                    return p_19;
                }
                if ((*l_746))
                    break;
                for (g_152 = (-19); (g_152 <= 29); g_152 = safe_add_func_uint32_t_u_u(g_152, 7))
                { 
                    uint32_t l_749 = 1UL;
                    int32_t l_750 = (-9L);
                    int32_t * const *l_753 = &l_661[1][0];
                    int32_t * const **l_754 = &l_753;
                    int8_t l_760 = 0x5BL;
                    l_750 = l_749;
                    (*g_430) = ((&l_661[6][0] != ((*l_754) = l_753)) & ((l_755 , ((g_363.f4 || (g_258[0] = ((((((0xFF7A7FBFL <= (safe_div_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u(0xCBL, p_19)) , g_201) , 0L), p_19))) > g_224) ^ g_528) < p_19) > l_760) && p_19))) , &g_73)) == &g_8[1]));
                    (**l_753) |= (*g_589);
                    (*g_472) = l_761;
                }
            }
            ++g_763;
        }
        else
        { 
            struct S0 l_767 = {0x29BCA38CL,0x8BAF1ADEL,6L,-10L,1L,0xDEA3L};
            int32_t *l_769[3][1];
            int32_t **l_768[2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_769[i][j] = (void*)0;
            }
            for (i = 0; i < 2; i++)
                l_768[i] = &l_769[0][0];
            (*g_430) &= (+((l_767 , (l_771 = (l_770 = (void*)0))) == (l_772 = &p_19)));
        }
    }
    for (g_201 = 0; (g_201 <= 1); g_201 += 1)
    { 
        uint8_t *l_777 = &l_655[1][0][1];
        const int32_t l_780 = 0x232145E8L;
        int32_t l_790 = 0x5C0F382FL;
        uint64_t **l_814 = &g_157;
        union U2 l_828 = {1UL};
        int32_t l_845[6][2][4];
        uint32_t *l_852 = &l_831.f1;
        uint8_t ****l_886 = (void*)0;
        struct S1 *l_1008[2];
        struct S1 **l_1007 = &l_1008[0];
        uint32_t l_1043 = 5UL;
        const uint64_t *l_1087 = &g_103;
        const uint64_t **l_1086[5] = {&l_1087,&l_1087,&l_1087,&l_1087,&l_1087};
        const uint64_t ***l_1085 = &l_1086[3];
        const uint64_t ****l_1084 = &l_1085;
        struct S0 l_1103 = {-2L,4294967295UL,-2L,0x6C1F878078C4CF89LL,0xA627FCBE53DE30DDLL,1L};
        int32_t *l_1118[6][3] = {{&l_659[1][2],(void*)0,(void*)0},{&l_659[1][2],(void*)0,(void*)0},{&l_659[1][2],(void*)0,(void*)0},{&l_659[1][2],(void*)0,(void*)0},{&l_659[1][2],(void*)0,(void*)0},{&l_659[1][2],(void*)0,(void*)0}};
        int32_t l_1130 = (-4L);
        int64_t l_1133[4] = {5L,5L,5L,5L};
        const uint32_t l_1176 = 0xAB9900F3L;
        int64_t **l_1215 = &g_204;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_845[i][j][k] = 0xB070178AL;
            }
        }
        for (i = 0; i < 2; i++)
            l_1008[i] = &g_652;
        if ((safe_lshift_func_uint8_t_u_u(((*l_777) = (safe_lshift_func_uint16_t_u_u((l_659[1][2] , 65531UL), p_19))), 5)))
        { 
            uint64_t *l_778 = &g_506;
            uint64_t *l_779[5][2] = {{&g_506,&g_259},{&g_663,&g_506},{&g_663,&g_663},{&g_663,&g_506},{&g_663,&g_259}};
            int32_t l_785 = 1L;
            int16_t l_786[4];
            int16_t l_787 = 0L;
            int32_t l_789 = 0x21842566L;
            int32_t l_794 = 0xA59FC546L;
            int64_t l_795[7][2][4] = {{{0L,0xB70C2554D0E48A35LL,0L,(-10L)},{1L,(-4L),(-1L),0xB3456EDCA2F57187LL}},{{1L,1L,0xB3456EDCA2F57187LL,(-4L)},{0x3225A8AF4C86CA63LL,(-1L),0xB3456EDCA2F57187LL,0x3351E9D316B31DD4LL}},{{1L,0x3225A8AF4C86CA63LL,(-1L),0L},{1L,(-4L),0L,0L}},{{0L,0L,(-4L),1L},{0L,(-1L),0x3225A8AF4C86CA63LL,1L}},{{0x3351E9D316B31DD4LL,0xB3456EDCA2F57187LL,(-1L),0x3225A8AF4C86CA63LL},{(-4L),0xB3456EDCA2F57187LL,1L,1L}},{{0xB3456EDCA2F57187LL,(-1L),(-4L),1L},{(-10L),0L,0xB70C2554D0E48A35LL,0L}},{{0L,(-4L),1L,0L},{0x6853ACD204DEE022LL,0x3225A8AF4C86CA63LL,0xFDCB74D84F537089LL,0x3351E9D316B31DD4LL}}};
            int8_t l_796 = (-5L);
            int32_t l_797 = 1L;
            struct S0 l_832[5] = {{1L,0x4C283DF8L,0x2EAD88A9L,1L,1L,0L},{1L,0x4C283DF8L,0x2EAD88A9L,1L,1L,0L},{1L,0x4C283DF8L,0x2EAD88A9L,1L,1L,0L},{1L,0x4C283DF8L,0x2EAD88A9L,1L,1L,0L},{1L,0x4C283DF8L,0x2EAD88A9L,1L,1L,0L}};
            const uint64_t l_833 = 0x08D14367ECD65085LL;
            uint32_t **l_847[7] = {&g_288,&g_288,&g_288,&g_288,&g_288,&g_288,&g_288};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_786[i] = 0xFAF0L;
            l_789 ^= (l_788 = ((((*g_430) ^= ((l_778 = (void*)0) != l_779[0][1])) , ((g_294[0] , l_780) > (((safe_rshift_func_uint16_t_u_s(p_19, (safe_mod_func_uint8_t_u_u((l_785 | ((0L == 65528UL) , (*g_157))), l_786[3])))) < l_787) , l_787))) && 0x11CAL));
            for (l_785 = 1; (l_785 >= 0); l_785 -= 1)
            { 
                int32_t *l_791 = (void*)0;
                int32_t *l_792 = &g_281;
                int32_t *l_793[1][3][2] = {{{(void*)0,&g_281},{&g_281,(void*)0},{&g_281,&g_281}}};
                int32_t **l_801 = &l_793[0][1][0];
                int32_t **l_802 = &l_792;
                int i, j, k;
                g_798--;
                (*l_802) = ((*l_801) = l_792);
                for (g_228 = 1; (g_228 >= 0); g_228 -= 1)
                { 
                    int32_t *l_811 = &l_659[1][0];
                    uint64_t ***l_815[3][2][5] = {{{&g_156,&l_814,&g_156,(void*)0,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156}},{{&g_156,&l_814,(void*)0,&l_814,&g_156},{&g_156,&g_156,&g_156,&g_156,&g_156}},{{&g_156,(void*)0,&g_156,&l_814,&g_156},{&g_156,&g_156,&l_814,&g_156,&g_156}}};
                    int8_t *l_819[4];
                    uint16_t *l_820[2];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_819[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_820[i] = &g_798;
                    (**l_802) = (safe_mul_func_int8_t_s_s(((--l_655[g_228][l_785][(g_228 + 1)]) > ((((l_790 = (safe_div_func_int32_t_s_s((l_821 ^= ((l_710 , (safe_lshift_func_uint16_t_u_s((l_659[1][2] &= ((((void*)0 != l_811) < g_126[g_201][g_201][(l_785 + 2)]) , ((safe_mul_func_uint16_t_u_u(((((l_797 = ((l_814 == (g_816 = l_814)) , (g_126[2][1][3] = (((safe_sub_func_int8_t_s_s(0x90L, l_797)) & 0xE1L) && l_790)))) ^ p_19) , (-1L)) & 1L), l_789)) || 0x8909D6D9L))), g_294[0].f1))) <= 0x8DL)), 4294967292UL))) > 0x50L) | g_662) ^ (-1L))), 0xB0L));
                    (*l_801) = &g_2;
                    (*l_811) &= (g_822 != g_822);
                    (*l_802) = &l_789;
                    l_659[1][2] = l_794;
                }
            }
            for (g_92 = 0; (g_92 <= 1); g_92 += 1)
            { 
                const struct S1 l_823[1] = {{0x0A22DCF9L,0x60629189L,0x2BL,0x0BL,-9L}};
                int8_t *l_834 = &l_673;
                int32_t *l_840 = (void*)0;
                int i;
                for (l_821 = 0; (l_821 <= 2); l_821 += 1)
                { 
                    int i, j, k;
                    return g_126[l_821][g_201][(g_92 + 1)];
                }
                (*g_430) = ((((l_823[0] , ((*l_834) ^= ((p_19 ^ ((+(safe_div_func_uint64_t_u_u(p_19, (+0x1EE11DFCL)))) , (l_828 , (safe_div_func_uint8_t_u_u((l_831 , ((l_832[2] , l_785) & 0xABA42A2352584F37LL)), l_832[2].f3))))) >= l_833))) > 253UL) , l_828.f0) , p_19);
                for (g_229 = 0; (g_229 <= 1); g_229 += 1)
                { 
                    int32_t **l_839 = &g_589;
                    int i, j, k;
                    (*l_839) = ((((*l_834) ^= g_126[(g_229 + 1)][g_201][(g_201 + 1)]) > ((l_655[g_229][g_229][(g_229 + 3)] & ((((safe_mul_func_uint16_t_u_u(l_655[g_229][g_229][(g_92 + 4)], l_655[g_229][g_229][(g_92 + 4)])) >= ((safe_div_func_uint32_t_u_u(p_19, ((*g_430) ^= p_18))) != 0x3DAEL)) & l_786[1]) | p_18)) & p_18)) , &l_797);
                    (*l_839) = &g_526;
                    (*l_839) = l_840;
                    (*l_839) = (*l_839);
                }
            }
            (*g_430) = (safe_mul_func_int16_t_s_s((-7L), ((safe_div_func_uint32_t_u_u((p_19 | (l_845[4][0][2] != (p_18 == (l_846 == l_847[6])))), (l_659[1][2] |= p_19))) > l_821)));
            for (g_224 = 1; (g_224 >= 0); g_224 -= 1)
            { 
                uint32_t *l_851 = (void*)0;
                int16_t *l_853[6][7][1] = {{{&g_161[2][4]},{&g_161[2][2]},{&g_148},{&g_129[0]},{&l_787},{&g_294[0].f5},{&g_294[0].f5}},{{&l_787},{&g_129[0]},{&g_148},{&g_161[2][2]},{&g_161[2][4]},{&g_129[0]},{(void*)0}},{{&g_129[0]},{(void*)0},{&g_129[0]},{(void*)0},{&g_129[0]},{&g_161[2][4]},{&g_161[2][2]}},{{&g_148},{&g_129[0]},{&l_787},{&g_294[0].f5},{&g_294[0].f5},{&l_787},{&g_129[0]}},{{&g_148},{&g_161[2][2]},{&g_161[2][4]},{&g_129[0]},{(void*)0},{&g_129[0]},{(void*)0}},{{&g_129[0]},{(void*)0},{&g_129[0]},{&g_161[2][4]},{&g_161[2][2]},{&g_129[0]},{&g_294[0].f5}}};
                int32_t l_861 = (-6L);
                int32_t l_862 = 1L;
                int i, j, k;
                (*g_430) &= (safe_rshift_func_int16_t_s_u(p_18, 1));
                l_862 |= (((l_785 = (p_19 || (+(((l_845[4][0][2] | ((*g_473) , g_8[1])) , l_851) != l_852)))) ^ (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u(((((+((safe_add_func_uint16_t_u_u(p_19, 65535UL)) , p_18)) , 255UL) , 0x2DL) < 0x85L), l_861)) , (**g_472)) , l_659[1][3]), 8))) != g_506);
                (*g_430) = l_831.f4;
                for (g_526 = 1; (g_526 >= 0); g_526 -= 1)
                { 
                    int32_t **l_863 = &g_430;
                    int i, j, k;
                    (*l_863) = (void*)0;
                    return g_126[g_526][g_201][(g_201 + 2)];
                }
            }
        }
        else
        { 
            const uint8_t *****l_877 = &g_873;
            int32_t l_878 = 0x04B15D96L;
            int8_t *l_880 = &g_258[0];
            uint16_t l_883 = 0xED02L;
            uint8_t * const *l_890 = (void*)0;
            uint8_t * const **l_889 = &l_890;
            uint8_t * const ***l_888 = &l_889;
            uint32_t **l_992 = &l_852;
            uint32_t ***l_993 = &l_992;
            if ((((((((~(safe_mod_func_int32_t_s_s((*g_430), 0x8CB01A2FL))) , (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((*g_204) > (((l_788 == ((*l_852) = (safe_lshift_func_uint16_t_u_s((((g_294[0] , ((((((*l_877) = g_873) == (void*)0) , (-1L)) & l_878) & 4294967288UL)) < p_19) == (*g_876)), p_18)))) <= p_19) && 0L)), 7)), p_19))) == g_224) || l_878) != 0x4230L) || 0L) & l_845[4][0][2]))
            { 
                int32_t *l_902 = &l_659[1][2];
                (*g_430) = 0xB01DBCB4L;
                (*g_430) &= (+(l_880 != &g_220));
                for (g_327 = 0; (g_327 <= 1); g_327 += 1)
                { 
                    uint8_t *****l_887 = &l_886;
                    uint8_t * const ****l_891[4];
                    int32_t l_892 = 0xC97BDE3BL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_891[i] = (void*)0;
                    (*g_430) = (((p_19 & (safe_sub_func_uint32_t_u_u(((((l_883 , ((safe_lshift_func_uint16_t_u_s((((*l_887) = l_886) == (l_888 = l_888)), 6)) | l_892)) , (g_184 = g_184)) != ((safe_mod_func_uint8_t_u_u((~(g_324 |= (safe_add_func_int32_t_s_s(1L, l_892)))), l_831.f1)) , (void*)0)) == g_363.f5), p_18))) | (-1L)) && p_19);
                    if (p_18)
                        break;
                    if (g_652.f0)
                        goto lbl_898;
                    if (l_845[1][1][0])
                        break;
                    (*g_430) |= (safe_div_func_uint32_t_u_u(4294967295UL, 0x5FDEF136L));
                }
                for (g_506 = 0; (g_506 <= 1); g_506 += 1)
                { 
                    int32_t **l_901 = (void*)0;
                    g_589 = (l_902 = &l_878);
                    if (g_663)
                        goto lbl_898;
                    (*g_430) = (0x37L || (safe_sub_func_int64_t_s_s((*g_204), l_828.f0)));
                    (*l_877) = (void*)0;
                }
            }
            else
            { 
                int16_t *l_925[7] = {&g_228,&g_228,&g_228,&g_228,&g_228,&g_228,&g_228};
                int16_t *l_933 = (void*)0;
                int32_t l_938 = 0x9278647CL;
                int i;
                (*g_430) |= ((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s(l_780, (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(l_710.f0, 0xCE30L)), 8)))), (safe_sub_func_int32_t_s_s(1L, (safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((((*l_880) |= (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((l_926 = (l_790 = (g_129[0] = ((g_22[1][1] >= 0x4AL) <= ((safe_div_func_int64_t_s_s(p_18, 6L)) == 0UL))))) || g_518), p_19)), l_878))) <= (-10L)) > l_828.f0), p_19)) , 0UL), p_18)))))) >= p_19);
                for (g_324 = 0; (g_324 <= 1); g_324 += 1)
                { 
                    int i;
                    return g_129[g_324];
                }
                if ((safe_div_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((g_662 <= (l_933 != ((((*g_876) > p_18) || ((((safe_add_func_int16_t_s_s(l_938, g_259)) <= ((safe_add_func_uint64_t_u_u((l_814 == (void*)0), p_18)) >= 65528UL)) , (-1L)) <= l_878)) , (void*)0))) <= 4294967295UL), l_938)), 0L)) ^ 0xA31FL) & p_19) <= l_938), g_129[2])))
                { 
                    return l_790;
                }
                else
                { 
                    int32_t *l_941 = &g_160;
                    int32_t *l_942 = &l_821;
                    int32_t *l_943 = &l_790;
                    int32_t *l_944 = (void*)0;
                    int32_t *l_945[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_945[i] = &g_526;
                    if ((*g_430))
                        break;
                    g_946[1]--;
                }
            }
            for (g_663 = 0; (g_663 <= 1); g_663 += 1)
            { 
                struct S0 l_963 = {-1L,0x124A3511L,0L,3L,-1L,0x2093L};
                for (g_73 = 0; (g_73 <= 1); g_73 += 1)
                { 
                    struct S1 *l_949 = (void*)0;
                    const struct S0 **l_953 = (void*)0;
                    const struct S0 ***l_952 = &l_953;
                    l_949 = l_949;
                    (*l_952) = g_950;
                }
            }
            (*g_430) = (g_205[1][4].f0 < ((l_878 & 4294967295UL) < (safe_mul_func_uint16_t_u_u(65535UL, g_294[0].f3))));
            if ((safe_rshift_func_int8_t_s_s(p_19, (((safe_rshift_func_int8_t_s_u(0x78L, 3)) , ((-1L) & (l_846 != ((*l_993) = l_992)))) | (((safe_mod_func_int64_t_s_s((g_294[0] , ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_883, 3)), g_363.f5)), 0x99L)), l_878)) && l_878), (*g_430))) == g_228)), l_790)) , l_1006) == l_1007)))))
            { 
                return p_18;
            }
            else
            { 
                int64_t l_1011 = 0L;
                int32_t **l_1012 = &g_589;
                for (g_61 = 0; (g_61 <= 1); g_61 += 1)
                { 
                    (*g_430) |= l_780;
                    if (p_19)
                        continue;
                    (*g_430) = (l_878 |= (safe_sub_func_int8_t_s_s(l_1011, (*g_876))));
                }
                (*l_1012) = &g_526;
            }
            return p_19;
        }
        for (g_528 = 0; (g_528 <= 1); g_528 += 1)
        { 
            int16_t l_1013[1][5];
            uint8_t *****l_1016[3][3];
            int32_t *l_1038 = &g_5;
            int32_t l_1047 = 0x3046A9B2L;
            uint32_t l_1053 = 4294967295UL;
            struct S0 l_1059 = {0x706657D0L,0x500CB1C1L,-4L,7L,0xC68DB0C40D93A79ELL,0x6341L};
            struct S0 *l_1078 = &g_294[0];
            uint64_t * const ***l_1088 = &l_693;
            const struct S1 l_1128 = {0x1F58D541L,0x50869C97L,255UL,0xEEL,0xED7FD7BFL};
            uint32_t l_1129 = 0x887B6275L;
            uint32_t l_1138 = 1UL;
            int8_t *l_1156[3];
            int32_t l_1181[5];
            int64_t **l_1212 = &g_204;
            int32_t **l_1220 = (void*)0;
            int32_t **l_1221 = &l_1118[3][0];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1013[i][j] = 0L;
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1016[i][j] = &l_886;
            }
            for (i = 0; i < 3; i++)
                l_1156[i] = &l_698;
            for (i = 0; i < 5; i++)
                l_1181[i] = 0xF4EC693BL;
        }
    }
    return p_18;
}



static uint8_t  func_29(uint8_t * p_30, const uint16_t  p_31, uint8_t * p_32, struct S0  p_33, int8_t  p_34)
{ 
    int32_t l_90[3];
    uint32_t l_96 = 1UL;
    uint64_t *l_155 = (void*)0;
    uint64_t **l_154 = &l_155;
    uint8_t l_162[2];
    int64_t **l_267[1][3];
    uint64_t *** const *l_274 = (void*)0;
    uint64_t *** const ** const l_273 = &l_274;
    struct S1 l_279[1][3][6] = {{{{0xBF57C44DL,-3L,0x06L,0UL,0xF89951ACL},{0UL,0L,0x56L,0xB0L,-1L},{4294967295UL,-5L,0xA5L,246UL,0x68D78F43L},{0xBF57C44DL,-3L,0x06L,0UL,0xF89951ACL},{0UL,-1L,0x29L,0xA9L,0x2B07F2A8L},{0UL,-1L,0x29L,0xA9L,0x2B07F2A8L}},{{0xCC73E7C2L,1L,249UL,9UL,0L},{0UL,0L,0x56L,0xB0L,-1L},{0UL,0L,0x56L,0xB0L,-1L},{0xCC73E7C2L,1L,249UL,9UL,0L},{0UL,-1L,0x29L,0xA9L,0x2B07F2A8L},{4294967295UL,-5L,0xA5L,246UL,0x68D78F43L}},{{5UL,1L,255UL,0x66L,0x2FA3D101L},{0UL,0L,0x56L,0xB0L,-1L},{0UL,-1L,0x29L,0xA9L,0x2B07F2A8L},{5UL,1L,255UL,0x66L,0x2FA3D101L},{0UL,-1L,0x29L,0xA9L,0x2B07F2A8L},{0UL,0L,0x56L,0xB0L,-1L}}}};
    int32_t *l_285[3][7][5] = {{{&g_8[0],&g_8[1],&g_160,&g_5,&g_8[1]},{&g_160,&g_8[1],(void*)0,&g_8[1],&g_2},{(void*)0,&g_160,(void*)0,&g_5,&g_2},{&l_90[2],&g_8[0],&g_8[1],&g_8[1],(void*)0},{&g_5,&l_90[0],&l_90[0],&g_5,&g_281},{&g_73,(void*)0,&g_73,&g_8[1],&l_90[0]},{&g_8[0],(void*)0,&g_8[1],&g_5,&g_73}},{{(void*)0,&g_73,&g_8[0],&g_8[1],&g_5},{&g_8[1],(void*)0,(void*)0,&g_5,&g_8[1]},{&g_8[1],&g_8[0],&g_8[0],&g_8[1],&l_90[0]},{&g_8[0],&g_8[1],&g_160,&g_5,&g_8[1]},{&g_160,&g_8[1],(void*)0,&g_8[1],&g_2},{(void*)0,&g_160,(void*)0,&g_5,&g_2},{&l_90[2],&g_8[0],&g_8[1],&g_8[1],(void*)0}},{{&g_5,&l_90[0],&l_90[0],&g_5,&g_281},{&g_73,(void*)0,&g_73,&g_8[1],&l_90[0]},{&g_8[0],(void*)0,&g_8[1],&g_5,&g_73},{(void*)0,&g_73,&g_8[0],&g_8[1],&g_5},{&g_8[1],(void*)0,(void*)0,&g_5,&g_8[1]},{&g_8[1],&g_8[0],&g_8[0],&g_8[1],&l_90[0]},{&g_8[0],&g_8[1],&g_160,&g_5,&g_8[1]}}};
    uint32_t l_321 = 0xBF24F83EL;
    union U2 *l_348[6][7] = {{&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4]},{&g_205[0][1],&g_205[0][1],&g_205[0][0],&g_205[1][4],&g_205[0][0],&g_205[0][1],&g_205[0][1]},{&g_205[1][3],&g_205[1][4],&g_205[0][0],&g_205[1][4],&g_205[1][3],&g_205[1][3],&g_205[1][4]},{&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[0][0],&g_205[0][0],&g_205[1][4],&g_205[1][4]},{&g_205[1][4],&g_205[1][4],&g_205[0][0],&g_205[0][0],&g_205[1][4],&g_205[1][4],&g_205[1][4]},{&g_205[1][4],&g_205[0][0],&g_205[0][0],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[0][0]}};
    int64_t l_353[7];
    int32_t l_417 = 3L;
    int16_t l_440[6] = {0x3B14L,0x3B14L,0x3B14L,0x3B14L,0x3B14L,0x3B14L};
    int8_t l_471 = 0x36L;
    struct S0 *l_480 = (void*)0;
    const uint8_t *l_585[3];
    int32_t l_645 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_90[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_162[i] = 0x16L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_267[i][j] = &g_204;
    }
    for (i = 0; i < 7; i++)
        l_353[i] = 7L;
    for (i = 0; i < 3; i++)
        l_585[i] = &l_162[1];
    for (p_33.f2 = 2; (p_33.f2 >= 0); p_33.f2 -= 1)
    { 
        int32_t *l_91[1];
        int32_t l_127[3];
        uint32_t l_158 = 0x901E9BB6L;
        int16_t *l_189 = &g_129[2];
        uint64_t ***l_194 = &g_156;
        const struct S1 l_257 = {0x79731E70L,0L,255UL,7UL,-5L};
        union U2 *l_291[7] = {&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4],&g_205[1][4]};
        uint8_t l_304 = 246UL;
        int i;
        for (i = 0; i < 1; i++)
            l_91[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_127[i] = 0xAF607F38L;
        --g_92;
        for (g_73 = 2; (g_73 >= 0); g_73 -= 1)
        { 
            int16_t l_95 = 0x7ECDL;
            uint64_t *l_101 = (void*)0;
            uint64_t *l_102 = &g_103;
            struct S0 l_140 = {0x053DA949L,4294967295UL,0xF58EF410L,0x84A95BEA926FAA81LL,0L,-6L};
            int32_t l_153 = 0xADF514A7L;
            int i;
            l_96++;
            if ((!(safe_unary_minus_func_uint64_t_u(((*l_102) ^= l_90[p_33.f2])))))
            { 
                int32_t **l_122 = &l_91[0];
                int8_t *l_125 = &g_126[2][0][3];
                int32_t *l_128[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_128[i] = &l_127[2];
                g_129[0] ^= (l_90[2] = (p_33.f4 >= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((4294967295UL & (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(g_2, 4)), (safe_mod_func_uint64_t_u_u(l_90[p_33.f2], (safe_div_func_int64_t_s_s((((*l_125) = (((safe_mod_func_int8_t_s_s(((((*l_122) = &l_90[p_33.f2]) == &g_5) | (safe_add_func_uint8_t_u_u((g_92 | 0xCAFD932BC35819B7LL), g_5))), l_95)) < g_56[0]) && l_95)) > l_95), l_127[1])))))) <= l_90[p_33.f2]), 13)), 9))) | g_92), 2)), 0xEFL))));
            }
            else
            { 
                int16_t l_139 = 0x446CL;
                for (l_96 = 7; (l_96 == 9); ++l_96)
                { 
                    int32_t *l_132 = &l_127[1];
                    int64_t *l_147[6][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0}},{{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0}},{{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0}},{{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0}},{{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0}},{{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0},{&l_140.f3,(void*)0,(void*)0,&l_140.f3,(void*)0}}};
                    int16_t *l_151 = &l_139;
                    int i, j, k;
                    (*l_132) = ((&l_90[2] == l_132) == (((((((safe_div_func_uint32_t_u_u((l_95 | (safe_add_func_int8_t_s_s(((g_61 & (*l_132)) != (*l_132)), (safe_add_func_int16_t_s_s((((*p_30) , (void*)0) == &g_73), p_33.f0))))), 0xEE521032L)) , 3UL) , (*l_132)) <= (*p_30)) >= g_56[0]) <= l_139) & (*p_30)));
                    l_153 &= (l_140 , (g_152 &= (safe_mul_func_uint16_t_u_u(((g_129[0] == (safe_rshift_func_uint8_t_u_u(((*p_30) = (((p_33.f3 || (safe_sub_func_int64_t_s_s(g_103, (g_148 = g_126[0][1][2])))) ^ (*p_30)) >= (l_90[p_33.f2] = (safe_add_func_uint16_t_u_u(((((*l_151) = ((p_33.f4 ^ 0x4449FB5AL) , 0xA3B8L)) || g_126[0][1][0]) != g_56[0]), g_61))))), 6))) == g_56[0]), (*l_132)))));
                }
                g_156 = l_154;
            }
        }
        if ((l_158 = (-8L)))
        { 
            int32_t * const *l_183 = &l_91[0];
            for (p_33.f5 = 0; (p_33.f5 <= 2); p_33.f5 += 1)
            { 
                uint16_t l_177 = 0UL;
                uint32_t l_178 = 7UL;
                int32_t l_182 = 0x9BD9AF42L;
                for (g_73 = 0; (g_73 <= 2); g_73 += 1)
                { 
                    int32_t l_159 = 0L;
                    uint64_t ***l_166 = &g_156;
                    uint64_t ****l_165 = &l_166;
                    int i;
                    --l_162[1];
                    (*l_165) = (void*)0;
                }
                for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                { 
                    uint32_t *l_169 = (void*)0;
                    uint32_t *l_170 = &l_158;
                    uint8_t *l_179 = &l_162[0];
                    int i, j, k;
                    if (g_129[p_33.f5])
                        break;
                    g_184 = ((g_126[p_33.f2][g_64][p_33.f2] & ((((safe_mod_func_uint16_t_u_u(((((l_90[p_33.f5] > ((*l_170)++)) <= (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((((l_90[p_33.f5] >= 0xD6C9FEA8EEED4EC5LL) == ((l_182 &= ((l_177 = (*p_30)) ^ (((l_178 > ((++(*l_179)) >= 5UL)) & p_31) == p_33.f3))) >= 0L)) && g_129[2]) < p_33.f2), l_178)), p_33.f0))) , &l_91[0]) != l_183), 0x428CL)) | g_61) , p_33.f4) && g_56[0])) , g_184);
                    if (p_33.f1)
                        continue;
                }
            }
        }
        else
        { 
            uint8_t l_197 = 0x76L;
            int64_t *l_200 = &g_201;
            int64_t **l_199 = &l_200;
            int32_t l_221 = 0x866F3FEFL;
            int32_t l_222[2];
            int32_t **l_247 = &l_91[0];
            const int16_t l_250[1][3] = {{7L,7L,7L}};
            int64_t l_266 = (-1L);
            union U2 l_278 = {252UL};
            uint64_t l_282 = 0x69378A79BD23F32CLL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_222[i] = 8L;
            if (((safe_mod_func_int8_t_s_s((0xE7L ^ ((safe_lshift_func_uint8_t_u_s(0x98L, 4)) , (((&l_162[1] == &l_162[1]) , &g_148) != l_189))), (safe_rshift_func_int16_t_s_s(0x921EL, g_161[2][2])))) && l_96))
            { 
                int8_t *l_198 = &g_126[1][1][3];
                int32_t l_217 = 0x21438A76L;
                uint32_t l_218 = 4294967295UL;
                int32_t l_226 = (-2L);
                if ((safe_lshift_func_int16_t_s_u((l_194 == l_194), ((((p_33.f5 <= p_33.f3) , ((safe_lshift_func_int8_t_s_s(((*l_198) ^= ((0L || (g_92 < 4294967295UL)) <= l_197)), g_5)) , (*p_30))) <= 0xE0L) <= l_197))))
                { 
                    int64_t ***l_202[6][3] = {{(void*)0,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,(void*)0,&l_199},{&l_199,&l_199,&l_199},{(void*)0,&l_199,&l_199},{&l_199,(void*)0,(void*)0}};
                    int16_t l_210 = 0x2AD1L;
                    int32_t l_219 = 0x297E8E83L;
                    int i, j;
                    g_203 = l_199;
                    if (g_5)
                        break;
                    l_219 = (((*l_200) = (g_205[1][4] , (((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((l_210 & ((((((safe_lshift_func_uint16_t_u_u((18446744073709551615UL & ((*g_204) > (safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((*p_30) = ((248UL == l_197) , 1UL)) == g_56[0]), l_217)) | 0x97FB4A33L), p_33.f3)))), g_148)) & l_218) && l_218) , g_92) ^ p_33.f1) != p_33.f2)), l_210)), 0x3B6B2B969A7E2A24LL)) & p_33.f2) == g_92))) & p_33.f3);
                }
                else
                { 
                    int32_t l_225 = 7L;
                    uint64_t ** const *l_238 = (void*)0;
                    uint64_t ** const **l_237[5] = {&l_238,&l_238,&l_238,&l_238,&l_238};
                    uint64_t ** const ***l_236 = &l_237[1];
                    int8_t *l_251 = &g_220;
                    int i;
                    if (g_220)
                        break;
                    g_229--;
                    l_90[2] = (safe_sub_func_int16_t_s_s(((-4L) == (safe_rshift_func_int8_t_s_s(((*l_251) |= (((((*l_236) = (void*)0) == ((safe_div_func_uint32_t_u_u(((4UL < (((safe_mod_func_int32_t_s_s(p_33.f2, (safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((((&l_91[0] == l_247) != (safe_mul_func_int16_t_s_s(((((p_33 , g_205[1][4].f0) < (*p_30)) >= l_250[0][2]) && g_126[2][0][3]), 0L))) , p_33.f2), (*g_157))) == p_33.f4), g_223[0])))) < 4L) | 0x50E478B0L)) || 0L), l_217)) , (void*)0)) == g_64) < p_33.f1)), 1))), 0xE25FL));
                }
            }
            else
            { 
                int32_t l_254 = 1L;
                for (g_227 = 0; (g_227 >= 1); g_227++)
                { 
                    return l_254;
                }
                for (g_220 = 0; (g_220 < (-8)); g_220 = safe_sub_func_uint8_t_u_u(g_220, 8))
                { 
                    (*l_247) = (((*p_30) ^ ((l_162[1] < p_33.f4) , (l_257 , l_254))) , &g_73);
                    l_254 &= p_33.f2;
                    ++g_259;
                    if (g_61)
                        continue;
                }
            }
            for (g_224 = 0; (g_224 == (-24)); g_224 = safe_sub_func_uint16_t_u_u(g_224, 1))
            { 
                uint32_t l_270 = 0x79306465L;
                int32_t l_280 = 0x7AD450EAL;
                g_73 = (safe_mul_func_uint8_t_u_u((((l_266 >= (((void*)0 != l_267[0][1]) , (*p_30))) , ((4294967295UL > (g_61 , (safe_div_func_uint16_t_u_u(1UL, 0x7F7CL)))) == l_270)) || l_96), 8UL));
                for (g_148 = (-23); (g_148 > 20); g_148 = safe_add_func_uint64_t_u_u(g_148, 8))
                { 
                    struct S1 l_277[5] = {{4294967286UL,9L,0UL,0xEBL,2L},{4294967286UL,9L,0UL,0xEBL,2L},{4294967286UL,9L,0UL,0xEBL,2L},{4294967286UL,9L,0UL,0xEBL,2L},{4294967286UL,9L,0UL,0xEBL,2L}};
                    int i;
                    g_160 = ((0xA2E21811L && g_161[2][4]) ^ ((((void*)0 == l_273) ^ (safe_rshift_func_int8_t_s_s(((*p_30) || (((l_277[2] , l_278) , l_279[0][0][3]) , 255UL)), 1))) != g_103));
                }
                ++l_282;
            }
            l_285[1][6][3] = (void*)0;
        }
        if (((safe_rshift_func_uint8_t_u_u(g_56[0], 7)) , (g_288 != (void*)0)))
        { 
            union U2 *l_290 = &g_205[1][4];
            union U2 **l_289[5] = {&l_290,&l_290,&l_290,&l_290,&l_290};
            int32_t *l_292 = &l_127[2];
            struct S0 *l_293 = &g_294[0];
            int8_t *l_305 = &g_126[2][0][3];
            int i;
            l_291[3] = &g_205[1][4];
            l_292 = (void*)0;
            l_293 = l_293;
            g_281 = (safe_add_func_int64_t_s_s(((0xBCL == ((*p_30) = (*p_30))) && g_103), (((*l_305) = (safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(p_33.f4, (safe_unary_minus_func_int8_t_s((((g_129[0] , ((safe_mul_func_int8_t_s_s((-5L), g_152)) <= p_33.f4)) , p_31) == l_304))))), p_31))) && p_33.f2)));
        }
        else
        { 
            uint8_t **l_314 = &g_62;
            int8_t *l_318 = &g_258[2];
            uint16_t l_319 = 0x708EL;
            int8_t *l_320 = &g_126[2][0][2];
            int32_t l_322 = 0x1946B902L;
            int32_t l_323 = 0L;
            int16_t l_328 = 0x71EFL;
            l_323 = (l_322 &= ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x51L, (*p_30))), (((l_314 != (void*)0) , 8L) && (safe_unary_minus_func_int8_t_s(((*l_320) = (((((((((((((*l_318) &= (safe_lshift_func_int8_t_s_u(((g_294[0].f0 >= 65526UL) | 0L), 2))) | 0xC9L) & 0xA9A48CD2L) ^ 0x2AL) | l_319) != p_34) ^ p_33.f4) , (void*)0) == (void*)0) && 0x7906L) && 0xA3L) || p_34))))))) > l_321), p_33.f5)), p_33.f4)) , g_73));
            for (g_64 = 2; (g_64 >= 0); g_64 -= 1)
            { 
                union U2 **l_349 = &l_348[3][6];
                int64_t *l_352 = &g_201;
                int i;
                --g_324;
                if (g_129[p_33.f2])
                { 
                    uint16_t l_329[6][7] = {{0x5E40L,0UL,0xFF87L,0x3B7CL,2UL,2UL,0x3B7CL},{0xBADEL,0x65BCL,0xBADEL,0x1753L,0x4DECL,0x5E40L,0UL},{0xBADEL,0xDD1DL,0x3B7CL,0UL,0x5BCEL,0x65BCL,0x5E40L},{0x5E40L,65529UL,0xB66FL,0xB66FL,65529UL,0x5E40L,0x5269L},{65529UL,0x3B7CL,0x5BCEL,0xB66FL,0xFF87L,2UL,0x4DECL},{0xC791L,0x5E40L,65535UL,0UL,0xDD1DL,0UL,65535UL}};
                    int i, j;
                    --l_329[2][5];
                }
                else
                { 
                    if (p_33.f4)
                        break;
                    return g_258[4];
                }
                if (p_34)
                    break;
                l_323 = (safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(0x9FD86F1057A4757ALL, ((*g_157) = ((((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(g_73, (((*g_157) & (((*l_349) = l_348[0][1]) == (g_294[0] , &g_205[1][4]))) >= ((safe_mod_func_int8_t_s_s(((void*)0 != l_352), l_353[5])) && 0x4F46FB19L)))) < p_33.f3), g_92)) , 65535UL) >= g_103) && 0x6DL)))), g_126[0][1][3])) >= (*p_30)), g_294[0].f4)), 65535UL)), (-1L))), p_33.f5));
            }
        }
        for (l_158 = 0; (l_158 == 59); l_158 = safe_add_func_uint64_t_u_u(l_158, 5))
        { 
            uint8_t **l_357 = &g_62;
            uint8_t ***l_356[6][3] = {{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357},{&l_357,&l_357,&l_357}};
            int i, j;
            g_160 = ((g_358 = &g_62) != &g_62);
        }
    }
    return l_645;
}



static uint8_t * func_35(uint8_t * p_36, int64_t  p_37, uint8_t * p_38, uint8_t * p_39)
{ 
    int32_t *l_83 = (void*)0;
    int32_t **l_84 = (void*)0;
    int32_t *l_86 = &g_5;
    int32_t **l_85 = &l_86;
    (*l_85) = (l_83 = l_83);
    return &g_61;
}



static uint8_t * func_40(uint8_t * p_41, uint16_t  p_42, uint8_t * p_43, uint64_t  p_44)
{ 
    uint8_t *l_80 = &g_61;
    for (g_64 = 0; (g_64 >= (-11)); g_64 = safe_sub_func_int8_t_s_s(g_64, 1))
    { 
        return l_80;
    }
    return l_80;
}



static uint32_t  func_45(uint64_t  p_46, uint32_t  p_47, uint64_t  p_48)
{ 
    const uint8_t *l_55 = &g_56[0];
    int32_t l_57[2][6] = {{0x8236511FL,0x8236511FL,0x8236511FL,0x8236511FL,0x8236511FL,0x8236511FL},{0x8236511FL,0x8236511FL,0x8236511FL,0x8236511FL,0x8236511FL,0x8236511FL}};
    uint8_t *l_60[4];
    uint8_t **l_59[3][7] = {{&l_60[1],&l_60[0],(void*)0,(void*)0,&l_60[0],&l_60[1],&l_60[0]},{&l_60[2],&l_60[1],&l_60[1],&l_60[2],&l_60[0],&l_60[2],&l_60[1]},{&l_60[0],&l_60[0],&l_60[1],(void*)0,&l_60[1],&l_60[0],&l_60[0]}};
    int32_t *l_74 = &l_57[0][5];
    int i, j;
    for (i = 0; i < 4; i++)
        l_60[i] = &g_61;
    (*l_74) = ((((safe_add_func_uint8_t_u_u((func_51((((void*)0 != l_55) && (l_57[0][5] > (safe_unary_minus_func_int64_t_s(l_57[0][3])))), (g_62 = (void*)0), &g_56[0]) , l_57[0][0]), l_57[1][5])) || l_57[1][5]) >= g_2) , 0xA33B115EL);
    return g_56[0];
}



static const uint32_t  func_51(uint32_t  p_52, uint8_t * p_53, const uint8_t * p_54)
{ 
    int16_t *l_63[1][1];
    int32_t l_65[2][4] = {{(-1L),(-4L),(-1L),(-1L)},{(-4L),(-4L),(-1L),(-4L)}};
    uint8_t **l_66 = &g_62;
    int32_t l_67 = 0x1D8D4885L;
    int32_t l_68 = 1L;
    struct S0 l_69 = {-1L,4294967295UL,0L,0x7AAC3BC5F263070BLL,0xB20295D0C5FD78DBLL,0x841EL};
    int32_t *l_72 = &g_73;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_63[i][j] = &g_64;
    }
    (*l_72) = ((0xCC72L | (((l_68 |= (l_67 = ((l_65[1][2] = g_5) , (l_66 != &p_53)))) , (l_69 , (g_2 , (safe_sub_func_uint16_t_u_u(g_8[1], g_64))))) && p_52)) , 0x673EEFD7L);
    return g_56[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_22[i][j], "g_22[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_56[i], "g_56[i]", print_hash_value);

    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_126[i][j][k], "g_126[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);

    }
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_161[i][j], "g_161[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_201, "g_201", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_205[i][j].f0, "g_205[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_223[i], "g_223[i]", print_hash_value);

    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_258[i], "g_258[i]", print_hash_value);

    }
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_294[i].f0, "g_294[i].f0", print_hash_value);
        transparent_crc(g_294[i].f1, "g_294[i].f1", print_hash_value);
        transparent_crc(g_294[i].f2, "g_294[i].f2", print_hash_value);
        transparent_crc(g_294[i].f3, "g_294[i].f3", print_hash_value);
        transparent_crc(g_294[i].f4, "g_294[i].f4", print_hash_value);
        transparent_crc(g_294[i].f5, "g_294[i].f5", print_hash_value);

    }
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    transparent_crc(g_363.f1, "g_363.f1", print_hash_value);
    transparent_crc(g_363.f2, "g_363.f2", print_hash_value);
    transparent_crc(g_363.f3, "g_363.f3", print_hash_value);
    transparent_crc(g_363.f4, "g_363.f4", print_hash_value);
    transparent_crc(g_363.f5, "g_363.f5", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_652.f0, "g_652.f0", print_hash_value);
    transparent_crc(g_652.f1, "g_652.f1", print_hash_value);
    transparent_crc(g_652.f2, "g_652.f2", print_hash_value);
    transparent_crc(g_652.f3, "g_652.f3", print_hash_value);
    transparent_crc(g_652.f4, "g_652.f4", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_946[i], "g_946[i]", print_hash_value);

    }
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1182, "g_1182", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1186[i], "g_1186[i]", print_hash_value);

    }
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1248, "g_1248", print_hash_value);
    transparent_crc(g_1271, "g_1271", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1272[i][j], "g_1272[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1283, "g_1283", print_hash_value);
    transparent_crc(g_1400, "g_1400", print_hash_value);
    transparent_crc(g_1469, "g_1469", print_hash_value);
    transparent_crc(g_1531, "g_1531", print_hash_value);
    transparent_crc(g_1568, "g_1568", print_hash_value);
    transparent_crc(g_1624, "g_1624", print_hash_value);
    transparent_crc(g_1749, "g_1749", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1753[i].f0, "g_1753[i].f0", print_hash_value);
        transparent_crc(g_1753[i].f1, "g_1753[i].f1", print_hash_value);
        transparent_crc(g_1753[i].f2, "g_1753[i].f2", print_hash_value);
        transparent_crc(g_1753[i].f3, "g_1753[i].f3", print_hash_value);
        transparent_crc(g_1753[i].f4, "g_1753[i].f4", print_hash_value);
        transparent_crc(g_1753[i].f5, "g_1753[i].f5", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1768[i], "g_1768[i]", print_hash_value);

    }
    transparent_crc(g_1812, "g_1812", print_hash_value);
    transparent_crc(g_1818.f0, "g_1818.f0", print_hash_value);
    transparent_crc(g_1818.f1, "g_1818.f1", print_hash_value);
    transparent_crc(g_1818.f2, "g_1818.f2", print_hash_value);
    transparent_crc(g_1818.f3, "g_1818.f3", print_hash_value);
    transparent_crc(g_1818.f4, "g_1818.f4", print_hash_value);
    transparent_crc(g_1818.f5, "g_1818.f5", print_hash_value);
    transparent_crc(g_1834, "g_1834", print_hash_value);
    transparent_crc(g_1876, "g_1876", print_hash_value);
    transparent_crc(g_1879, "g_1879", print_hash_value);
    transparent_crc(g_1881, "g_1881", print_hash_value);
    transparent_crc(g_1882, "g_1882", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1890, "g_1890", print_hash_value);
    transparent_crc(g_1981, "g_1981", print_hash_value);
    transparent_crc(g_2008, "g_2008", print_hash_value);
    transparent_crc(g_2062, "g_2062", print_hash_value);
    transparent_crc(g_2063, "g_2063", print_hash_value);
    transparent_crc(g_2066, "g_2066", print_hash_value);
    transparent_crc(g_2093, "g_2093", print_hash_value);
    transparent_crc(g_2118, "g_2118", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2163[i], "g_2163[i]", print_hash_value);

    }
    transparent_crc(g_2179, "g_2179", print_hash_value);
    transparent_crc(g_2184, "g_2184", print_hash_value);
    transparent_crc(g_2205, "g_2205", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2230[i][j][k], "g_2230[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2281.f0, "g_2281.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2284[i], "g_2284[i]", print_hash_value);

    }
    transparent_crc(g_2318, "g_2318", print_hash_value);
    transparent_crc(g_2319, "g_2319", print_hash_value);
    transparent_crc(g_2325.f0, "g_2325.f0", print_hash_value);
    transparent_crc(g_2325.f1, "g_2325.f1", print_hash_value);
    transparent_crc(g_2325.f2, "g_2325.f2", print_hash_value);
    transparent_crc(g_2325.f3, "g_2325.f3", print_hash_value);
    transparent_crc(g_2325.f4, "g_2325.f4", print_hash_value);
    transparent_crc(g_2327.f0, "g_2327.f0", print_hash_value);
    transparent_crc(g_2327.f1, "g_2327.f1", print_hash_value);
    transparent_crc(g_2327.f2, "g_2327.f2", print_hash_value);
    transparent_crc(g_2327.f3, "g_2327.f3", print_hash_value);
    transparent_crc(g_2327.f4, "g_2327.f4", print_hash_value);
    transparent_crc(g_2354, "g_2354", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
