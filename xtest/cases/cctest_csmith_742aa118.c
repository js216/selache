// SPDX-License-Identifier: MIT
// cctest_csmith_742aa118.c --- cctest case csmith_742aa118 (csmith seed 1948950808)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3f521d7 */

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

// Options:   -s 1948950808 -o /tmp/csmith_gen_ja3yc5cz/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   const uint8_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   uint16_t  f1;
};


static int32_t g_4 = (-1L);
static uint8_t g_64 = 255UL;
static uint8_t g_66 = 249UL;
static uint8_t *g_65[1][7] = {{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66}};
static int32_t g_69 = 0x4954824FL;
static int8_t g_74 = 0x8EL;
static int16_t g_76 = 0x81CAL;
static uint32_t g_77 = 0x795BCD59L;
static int64_t g_92 = 1L;
static int32_t *g_97 = &g_69;
static const struct S0 g_101[4] = {{-10L,0x71L,0x4F06L,1UL,0x93EB3337L},{-10L,0x71L,0x4F06L,1UL,0x93EB3337L},{-10L,0x71L,0x4F06L,1UL,0x93EB3337L},{-10L,0x71L,0x4F06L,1UL,0x93EB3337L}};
static const struct S0 *g_100[1] = {&g_101[1]};
static const struct S0 g_103 = {0x4377L,0UL,0x1AB8L,253UL,-10L};
static int8_t g_105 = 0xDAL;
static uint16_t g_109[5][2] = {{1UL,0x3D8BL},{0x960BL,0x960BL},{0x960BL,0x3D8BL},{1UL,0x9346L},{0x3D8BL,0x9346L}};
static uint64_t g_117 = 18446744073709551615UL;
static uint16_t g_142 = 65535UL;
static uint64_t g_163[7][4] = {{0x0517B6AFEBA28959LL,0x0517B6AFEBA28959LL,0x6CAE52F1CB2A3AB4LL,0x0517B6AFEBA28959LL},{0x0517B6AFEBA28959LL,18446744073709551614UL,18446744073709551614UL,0x0517B6AFEBA28959LL},{18446744073709551614UL,0x0517B6AFEBA28959LL,18446744073709551614UL,18446744073709551614UL},{0x0517B6AFEBA28959LL,0x0517B6AFEBA28959LL,0x6CAE52F1CB2A3AB4LL,0x0517B6AFEBA28959LL},{0x0517B6AFEBA28959LL,18446744073709551614UL,18446744073709551614UL,0x0517B6AFEBA28959LL},{18446744073709551614UL,0x0517B6AFEBA28959LL,18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL,0x0517B6AFEBA28959LL,18446744073709551614UL}};
static int64_t g_199 = 0xF5F8C25799EF2C49LL;
static uint32_t g_201 = 4294967292UL;
static int16_t g_206 = 0x0368L;
static uint32_t g_222[3] = {0x9D5C1E08L,0x9D5C1E08L,0x9D5C1E08L};
static int32_t g_223 = 0xD9D8ABC6L;
static int16_t g_251 = 1L;
static int16_t g_252 = 0xFE96L;
static uint16_t g_253 = 0x0DFEL;
static int32_t * const *g_279 = &g_97;
static int32_t * const **g_278[2][7][4] = {{{(void*)0,&g_279,&g_279,&g_279},{(void*)0,(void*)0,(void*)0,&g_279},{&g_279,&g_279,(void*)0,&g_279},{&g_279,&g_279,&g_279,(void*)0},{(void*)0,&g_279,(void*)0,&g_279},{&g_279,&g_279,&g_279,&g_279},{&g_279,(void*)0,&g_279,&g_279}},{{&g_279,&g_279,&g_279,&g_279},{&g_279,&g_279,&g_279,(void*)0},{&g_279,&g_279,(void*)0,(void*)0},{(void*)0,(void*)0,&g_279,(void*)0},{&g_279,&g_279,(void*)0,(void*)0},{&g_279,&g_279,(void*)0,&g_279},{(void*)0,&g_279,&g_279,&g_279}}};
static uint16_t **g_356 = (void*)0;
static uint8_t **g_444 = &g_65[0][3];
static int32_t g_471 = 0xECA38126L;
static const int64_t g_513[2] = {(-6L),(-6L)};
static int32_t ***g_533 = (void*)0;
static uint16_t ***g_551 = &g_356;
static uint16_t ****g_550[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_560 = (-1L);
static uint32_t *g_574 = &g_201;
static uint32_t **g_573 = &g_574;
static uint16_t g_637[2][7][4] = {{{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL}},{{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL},{0x28D3L,65535UL,0x28D3L,65535UL}}};
static union U1 g_653 = {{1L,0xD7L,0xD78DL,0xAFL,0x45A3E977L}};
static union U1 *g_652 = &g_653;
static union U1 **g_651 = &g_652;
static uint8_t g_735 = 0x11L;
static int32_t g_786 = 1L;
static uint64_t g_884 = 0xE9D80FF54F0B1AE5LL;
static int16_t *g_936 = &g_76;
static int16_t ** const g_935[4][4][1] = {{{&g_936},{&g_936},{&g_936},{&g_936}},{{&g_936},{&g_936},{&g_936},{&g_936}},{{&g_936},{&g_936},{&g_936},{&g_936}},{{&g_936},{&g_936},{&g_936},{&g_936}}};
static int8_t *g_953 = &g_105;
static int8_t **g_952 = &g_953;
static struct S0 g_995 = {-9L,255UL,0xAB74L,0xF8L,0x71BDA037L};
static uint64_t *g_1007[4][4] = {{&g_163[4][0],&g_163[4][0],&g_163[4][0],&g_163[4][0]},{&g_163[4][0],&g_163[4][0],&g_163[4][0],&g_163[4][0]},{&g_163[4][0],&g_163[4][0],&g_163[4][0],&g_163[4][0]},{&g_163[4][0],&g_163[4][0],&g_163[4][0],&g_163[4][0]}};
static uint64_t **g_1006 = &g_1007[0][1];
static uint64_t ***g_1005 = &g_1006;
static int16_t **g_1074 = &g_936;
static int16_t ***g_1073 = &g_1074;
static int16_t ****g_1072[6][4] = {{&g_1073,(void*)0,&g_1073,(void*)0},{&g_1073,(void*)0,&g_1073,(void*)0},{&g_1073,(void*)0,&g_1073,(void*)0},{&g_1073,(void*)0,&g_1073,(void*)0},{&g_1073,(void*)0,&g_1073,(void*)0},{&g_1073,(void*)0,&g_1073,(void*)0}};
static uint32_t g_1097 = 18446744073709551615UL;
static uint16_t *****g_1243[7][1][4] = {{{&g_550[1],&g_550[3],&g_550[3],&g_550[1]}},{{&g_550[1],&g_550[3],&g_550[3],&g_550[1]}},{{&g_550[3],&g_550[1],(void*)0,&g_550[3]}},{{&g_550[3],(void*)0,&g_550[3],&g_550[1]}},{{&g_550[3],&g_550[3],&g_550[1],&g_550[1]}},{{(void*)0,(void*)0,&g_550[1],&g_550[3]}},{{&g_550[3],&g_550[3],&g_550[1],&g_550[3]}}};
static uint8_t g_1304 = 255UL;
static uint32_t ***g_1308 = &g_573;
static uint32_t ****g_1307 = &g_1308;
static const int16_t * const g_1329 = &g_206;
static const int16_t * const *g_1328[7][7] = {{(void*)0,&g_1329,&g_1329,&g_1329,(void*)0,(void*)0,&g_1329},{(void*)0,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329},{&g_1329,&g_1329,(void*)0,&g_1329,&g_1329,&g_1329,&g_1329},{(void*)0,&g_1329,(void*)0,(void*)0,&g_1329,(void*)0,&g_1329},{(void*)0,(void*)0,&g_1329,(void*)0,&g_1329,&g_1329,(void*)0},{(void*)0,&g_1329,(void*)0,&g_1329,&g_1329,&g_1329,(void*)0},{&g_1329,(void*)0,(void*)0,&g_1329,(void*)0,(void*)0,&g_1329}};
static const int16_t * const **g_1327 = &g_1328[5][5];
static int32_t g_1333[4] = {0x63F6708FL,0x63F6708FL,0x63F6708FL,0x63F6708FL};
static int16_t g_1337 = 0x5DEAL;
static uint8_t g_1348 = 1UL;
static struct S0 g_1351 = {-7L,0xF7L,4UL,0UL,0xC9526D8BL};
static int32_t g_1384[5] = {1L,1L,1L,1L,1L};
static int32_t ****g_1386 = &g_533;
static int32_t *****g_1385 = &g_1386;
static int32_t g_1424[4] = {(-8L),(-8L),(-8L),(-8L)};



static const uint64_t  func_1(void);
static int32_t  func_2(struct S0  p_3);
static uint16_t  func_5(uint16_t  p_6);
static int16_t  func_20(const int32_t  p_21, uint64_t  p_22, int8_t  p_23);
static uint64_t  func_27(uint16_t  p_28, uint32_t  p_29, struct S0  p_30, uint32_t  p_31, uint32_t  p_32);
static uint16_t  func_33(uint8_t  p_34, int64_t  p_35, uint16_t  p_36, uint8_t  p_37);
static uint8_t  func_38(int64_t  p_39, int32_t  p_40, const uint8_t  p_41);
static int16_t  func_51(int8_t  p_52, int16_t  p_53, union U1  p_54, uint32_t  p_55, uint32_t  p_56);




static const uint64_t  func_1(void)
{ 
    int8_t l_7 = 0xE6L;
    uint16_t *l_1315 = &g_637[0][1][2];
    struct S0 l_1316 = {-1L,1UL,0x0554L,0xE4L,0xDB506C8FL};
    int32_t l_1431 = 0x5B1FCEB3L;
    if (func_2(((g_4 > ((-2L) > (((*l_1315) ^= func_5(l_7)) , l_7))) , l_1316)))
    { 
        int32_t *l_1429 = (void*)0;
        int32_t *l_1430[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1430[i] = &g_1424[0];
        l_1431 = (((**g_952) = (**g_952)) , 1L);
    }
    else
    { 
        return (***g_1005);
    }
    return l_1316.f2;
}



static int32_t  func_2(struct S0  p_3)
{ 
    uint32_t l_1321[7][2] = {{0xB82F451DL,0xB82F451DL},{0xB82F451DL,0xB82F451DL},{0xB82F451DL,0xB82F451DL},{0xB82F451DL,0xB82F451DL},{0xB82F451DL,0xB82F451DL},{0xB82F451DL,0xB82F451DL},{0xB82F451DL,0xB82F451DL}};
    uint16_t l_1325 = 0x759DL;
    int32_t l_1339 = 0L;
    uint16_t *l_1390 = &g_637[1][1][2];
    int16_t *** const *l_1405 = &g_1073;
    uint16_t *** const *l_1410 = &g_551;
    uint16_t ****l_1411 = &g_551;
    uint16_t ****l_1414 = &g_551;
    int32_t l_1416 = 0x4BE8CAB7L;
    int32_t l_1417[4][2][5] = {{{3L,5L,3L,5L,3L},{0x797F37ADL,0x7E869C64L,0x7E869C64L,0x797F37ADL,0x797F37ADL}},{{(-3L),5L,(-3L),5L,(-3L)},{0x797F37ADL,0x797F37ADL,0x7E869C64L,0x7E869C64L,0x797F37ADL}},{{3L,5L,3L,5L,3L},{0x797F37ADL,0x7E869C64L,0x7E869C64L,0x797F37ADL,0x797F37ADL}},{{(-3L),5L,(-3L),5L,(-3L)},{0x797F37ADL,0x797F37ADL,0x7E869C64L,0x7E869C64L,0x797F37ADL}}};
    int32_t * const **l_1428 = &g_279;
    int i, j, k;
    for (g_995.f2 = 24; (g_995.f2 <= 57); ++g_995.f2)
    { 
        int16_t ***l_1326[7][1][3] = {{{&g_1074,&g_1074,&g_1074}},{{&g_1074,&g_1074,&g_1074}},{{&g_1074,&g_1074,&g_1074}},{{&g_1074,&g_1074,&g_1074}},{{&g_1074,&g_1074,&g_1074}},{{&g_1074,&g_1074,&g_1074}},{{&g_1074,&g_1074,&g_1074}}};
        int32_t l_1334[2];
        int32_t l_1370 = 1L;
        int32_t *l_1415 = &g_1384[4];
        uint8_t l_1418 = 0xD1L;
        int32_t *l_1421 = (void*)0;
        int32_t *l_1422 = &g_1333[2];
        int32_t *l_1423[5][2][7] = {{{&l_1339,&l_1417[2][0][3],&l_1417[2][1][2],&l_1417[0][1][0],&l_1417[0][1][0],&l_1417[2][1][2],&l_1417[2][0][3]},{&g_1384[3],&g_1333[2],&l_1370,&g_1333[2],&g_1384[3],&g_1333[2],&l_1370}},{{&l_1417[0][1][0],&l_1417[0][1][0],&l_1417[2][1][2],&l_1417[2][0][3],&l_1339,&l_1339,&l_1417[2][0][3]},{(void*)0,&g_4,(void*)0,&g_1333[2],(void*)0,&g_4,(void*)0}},{{&l_1417[0][1][0],&l_1417[2][0][3],&l_1417[2][0][3],&l_1417[0][1][0],&l_1339,&l_1417[2][1][2],&l_1417[2][1][2]},{&g_1384[3],&g_4,&l_1370,&g_4,&g_1384[3],&g_4,&l_1370}},{{&l_1339,&l_1417[0][1][0],&l_1417[2][0][3],&l_1417[2][0][3],&l_1417[0][1][0],&l_1339,&l_1417[2][1][2]},{(void*)0,&g_1333[2],(void*)0,&g_4,(void*)0,&g_1333[2],(void*)0}},{{&l_1339,&l_1417[2][0][3],&l_1417[2][1][2],&l_1417[0][1][0],&l_1417[0][1][0],&l_1417[2][1][2],&l_1417[2][0][3]},{&g_1384[3],&g_1333[2],&l_1370,&g_1333[2],&g_1384[3],&g_1333[2],&l_1370}}};
        uint8_t l_1425 = 255UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1334[i] = 1L;
        for (g_653.f0.f0 = 0; (g_653.f0.f0 > 20); ++g_653.f0.f0)
        { 
            int32_t *l_1322 = &g_4;
            int32_t l_1338[7];
            uint32_t l_1340 = 0UL;
            const struct S0 *l_1350 = &g_1351;
            int i;
            for (i = 0; i < 7; i++)
                l_1338[i] = 1L;
            (*l_1322) = l_1321[6][0];
            if ((*l_1322))
            { 
                const int16_t * const ***l_1330 = &g_1327;
                int32_t *l_1331 = &g_69;
                int32_t *l_1332 = &g_1333[2];
                int32_t *l_1335 = (void*)0;
                int32_t *l_1336[5] = {&g_69,&g_69,&g_69,&g_69,&g_69};
                int64_t *l_1347 = &g_92;
                uint32_t l_1369 = 3UL;
                uint16_t *l_1389 = &g_637[1][0][0];
                int i;
                (*l_1332) = ((safe_div_func_int32_t_s_s(((*l_1322) = (((l_1325 = (*l_1322)) | (*l_1322)) , 0x76F38332L)), ((*l_1331) &= ((-2L) < (((l_1326[4][0][2] != ((*l_1330) = g_1327)) , (***g_1307)) == &l_1321[6][0]))))) | (**g_952));
                --l_1340;
                if ((((safe_mod_func_int64_t_s_s((((**g_1006) = (l_1334[1] , (l_1321[6][0] > (safe_mul_func_uint8_t_u_u(p_3.f0, p_3.f2))))) != ((*l_1347) = ((*g_652) , (((((*g_652) , (l_1339 = (((****g_1307) = (****g_1307)) == p_3.f4))) != p_3.f2) | (***g_1073)) , (*l_1322))))), p_3.f4)) , g_1348) <= (**g_952)))
                { 
                    const struct S0 **l_1349[6];
                    int32_t **l_1357 = &l_1331;
                    int32_t ***l_1356 = &l_1357;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1349[i] = &g_100[0];
                    l_1350 = &g_103;
                    (*l_1332) |= ((((((safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((*l_1356) = &l_1322) != (void*)0), (safe_lshift_func_uint8_t_u_u(p_3.f1, (((p_3.f0 = (l_1334[0] = ((**g_1074) = (safe_add_func_uint32_t_u_u(0xB615237BL, ((safe_sub_func_uint64_t_u_u(l_1325, (p_3 , (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((!(((((p_3.f3 >= p_3.f4) && (***g_1005)) != (**g_1074)) >= p_3.f4) || p_3.f4)) , l_1369) , (*l_1322)), l_1339)), (*l_1322)))))) < (*g_574))))))) <= (*l_1322)) , (*l_1331)))))) , (-1L)), p_3.f4)) , (**l_1357)) & 4294967292UL) != l_1370) <= p_3.f2) <= 0xFB7D8788L);
                    g_1384[3] = ((safe_div_func_int8_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_s((*l_1322), ((((safe_unary_minus_func_int32_t_s(((-8L) >= (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_3.f2, (***g_1073))), p_3.f4)) , (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((*l_1322), l_1321[4][0])), (*l_1332)))) , p_3.f0)))) == (**g_952)) , p_3.f0) == 0x7A5F0C49L))) , l_1321[6][0]))) != 0x9580L);
                    (*l_1357) = &l_1334[0];
                    if (p_3.f3)
                        continue;
                }
                else
                { 
                    uint8_t l_1399[3];
                    int8_t *l_1402 = &g_105;
                    int16_t l_1403 = 6L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1399[i] = 1UL;
                    g_1385 = (void*)0;
                    (*l_1322) = (((0x64L ^ p_3.f3) || (((l_1390 = l_1389) == (void*)0) ^ (safe_mod_func_uint8_t_u_u(p_3.f3, p_3.f4)))) >= ((safe_mul_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((**g_952) = (p_3.f4 ^ 0x3EB18F2572720EB6LL)), l_1339)), 0x5914L)) || l_1334[1]) > 0x1457L) | l_1399[2]), l_1334[0])) <= p_3.f0));
                    (*l_1331) = (safe_sub_func_int32_t_s_s(((*l_1322) |= (l_1402 != (*g_952))), l_1403));
                    if (p_3.f4)
                        break;
                }
            }
            else
            { 
                int32_t **l_1404[1][5] = {{&g_97,&g_97,&g_97,&g_97,&g_97}};
                int i, j;
                g_97 = &l_1339;
                if ((l_1339 = (l_1405 != l_1405)))
                { 
                    if (p_3.f2)
                        break;
                    (*l_1322) &= 0xAEB58A55L;
                    g_97 = &l_1339;
                    if ((*g_97))
                        break;
                }
                else
                { 
                    uint32_t l_1408 = 0x011EBD11L;
                    uint64_t l_1409 = 0x93E7407C964B28A1LL;
                    uint16_t *****l_1412 = &l_1411;
                    uint16_t *****l_1413[7][1];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1413[i][j] = &g_550[1];
                    }
                    (*l_1322) ^= (((safe_div_func_int8_t_s_s(0L, l_1408)) || l_1409) , (**g_279));
                    (*l_1322) = ((l_1334[0] != ((**g_279) |= (((p_3.f2 > 1L) , l_1410) == (l_1414 = ((*l_1412) = l_1411))))) | (0x2EA8L ^ p_3.f4));
                }
                l_1415 = &l_1338[6];
                l_1418--;
            }
        }
        --l_1425;
    }
    l_1416 &= ((void*)0 == l_1428);
    return p_3.f2;
}



static uint16_t  func_5(uint16_t  p_6)
{ 
    const uint16_t l_8 = 0UL;
    int32_t l_17 = 0xC3DC99CDL;
    int32_t l_44 = 1L;
    const int64_t l_45 = (-7L);
    int32_t l_1265 = 0x9B05E7EFL;
    int32_t l_1295 = 1L;
    int32_t l_1296 = 0xE1A1D427L;
    int32_t l_1297 = 0x488DDCFBL;
    int32_t l_1298 = 0xF378C2C9L;
    uint8_t l_1299 = 0x22L;
    int32_t l_1303 = (-1L);
    int32_t *l_1310 = &l_1298;
    int32_t ***l_1312 = (void*)0;
    int64_t *l_1313 = &g_199;
    union U1 l_1314 = {{1L,0x6CL,0x1320L,246UL,8L}};
    if (l_8)
    { 
        int32_t l_26 = 7L;
        int64_t l_46 = 0xB06D9E96BB645487LL;
        struct S0 l_47 = {-5L,0x40L,0xBE2FL,255UL,2L};
        int32_t *l_1194 = &l_44;
        int16_t ***l_1195 = (void*)0;
        int32_t **l_1206[6][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{&l_1194,&l_1194,&l_1194}},{{(void*)0,(void*)0,(void*)0}},{{&l_1194,&l_1194,&l_1194}},{{(void*)0,(void*)0,(void*)0}},{{&l_1194,&l_1194,&l_1194}}};
        int i, j, k;
        (*l_1194) = ((safe_rshift_func_uint16_t_u_s(p_6, (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((l_17 &= (+(safe_add_func_uint64_t_u_u(l_8, 0x23AAF5BFB66FEBFBLL)))))), (safe_div_func_int16_t_s_s(func_20((safe_div_func_int32_t_s_s(l_26, p_6)), ((g_4 & (func_27(func_33(func_38((safe_lshift_func_int16_t_s_u((l_44 = 0xC2E3L), 9)), g_4, l_45), l_26, l_46, g_4), l_45, l_47, l_45, l_45) , (**g_444))) >= l_8), (*g_953)), l_46)))))) , 0x6C6F3DFCL);
        if ((l_1195 == (g_101[1].f0 , l_1195)))
        { 
            int8_t l_1200 = 0x9EL;
            union U1 l_1205[5][5] = {{{{0xEE68L,5UL,6UL,0xA3L,-8L}},{{0x0E2CL,255UL,1UL,1UL,0x2F856994L}},{{0x97E5L,0x0CL,65535UL,255UL,0xBDE224C2L}},{{0x97E5L,0x0CL,65535UL,255UL,0xBDE224C2L}},{{0x0E2CL,255UL,1UL,1UL,0x2F856994L}}},{{{-2L,255UL,65535UL,0xACL,-1L}},{{0xF8F6L,0UL,0xD53AL,0x37L,0x10E62197L}},{{8L,0UL,0xE1D6L,250UL,-1L}},{{8L,0UL,0xE1D6L,250UL,-1L}},{{0xF8F6L,0UL,0xD53AL,0x37L,0x10E62197L}}},{{{0xEE68L,5UL,6UL,0xA3L,-8L}},{{0x0E2CL,255UL,1UL,1UL,0x2F856994L}},{{0x97E5L,0x0CL,65535UL,255UL,0xBDE224C2L}},{{0x97E5L,0x0CL,65535UL,255UL,0xBDE224C2L}},{{0x0E2CL,255UL,1UL,1UL,0x2F856994L}}},{{{-2L,255UL,65535UL,0xACL,-1L}},{{0xF8F6L,0UL,0xD53AL,0x37L,0x10E62197L}},{{8L,0UL,0xE1D6L,250UL,-1L}},{{8L,0UL,0xE1D6L,250UL,-1L}},{{0xF8F6L,0UL,0xD53AL,0x37L,0x10E62197L}}},{{{0xEE68L,5UL,6UL,0xA3L,-8L}},{{0x0E2CL,255UL,1UL,1UL,0x2F856994L}},{{0x97E5L,0x0CL,65535UL,255UL,0xBDE224C2L}},{{0x97E5L,0x0CL,65535UL,255UL,0xBDE224C2L}},{{0x0E2CL,255UL,1UL,1UL,0x2F856994L}}}};
            int i, j;
            (*l_1194) = (safe_mul_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u((*g_574), (l_1200 > (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(65535UL, p_6)), (*l_1194)))))) & l_1200) < (l_1205[2][3] , p_6)) != (*l_1194)), (*l_1194)));
        }
        else
        { 
            return p_6;
        }
        g_97 = l_1194;
        return p_6;
    }
    else
    { 
        int32_t l_1211[4][4][5] = {{{0xFA295410L,0L,(-1L),1L,0x0B1C06BFL},{0L,1L,7L,0x2DFAEE37L,7L},{(-5L),(-1L),0x0B1C06BFL,0L,0x0B1C06BFL},{0x2DFAEE37L,0x2DFAEE37L,0L,7L,1L}},{{0x0B1C06BFL,0x921D0C3DL,0x99297E76L,0x61FE30F6L,0x29265C83L},{2L,0x1F07B77DL,7L,0x473BAB24L,0x961EE418L},{0xF76F4A97L,0x921D0C3DL,0x921D0C3DL,0xF76F4A97L,0xB91B291CL},{1L,0x2DFAEE37L,0x245AF789L,1L,0xD5347048L}},{{0x99297E76L,(-1L),0x2A45C3D7L,(-5L),0x921D0C3DL},{0x1F07B77DL,1L,1L,1L,1L},{0x29265C83L,0L,(-1L),0xF76F4A97L,0xFA295410L},{0x5271D7FBL,0x961EE418L,0x2DFAEE37L,0x473BAB24L,0x245AF789L}},{{0L,0xD84AA1E7L,1L,0x61FE30F6L,0x61FE30F6L},{0x5271D7FBL,0L,0x5271D7FBL,7L,0x7F4CC08EL},{0x29265C83L,(-1L),(-5L),0L,1L},{0x1F07B77DL,0x473BAB24L,0xD5347048L,0x2DFAEE37L,0xB5E344B0L}}};
        int32_t *l_1232 = &g_786;
        int32_t **l_1231 = &l_1232;
        int32_t l_1233 = (-7L);
        uint16_t ** const *l_1240 = &g_356;
        uint16_t ** const **l_1239 = &l_1240;
        uint16_t ** const ***l_1238 = &l_1239;
        int32_t l_1293 = 0x363913EDL;
        int32_t l_1294 = 0x762ECA3EL;
        uint32_t *****l_1309 = &g_1307;
        int32_t **l_1311 = &l_1310;
        int i, j, k;
        if ((l_1233 = ((safe_mul_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(l_1211[2][1][4], l_1211[3][1][0])) || ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((l_1211[2][1][4] >= (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((**g_573), ((safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((((void*)0 == &g_651) != (safe_unary_minus_func_uint16_t_u((((*l_1231) = &l_1211[2][1][4]) == (void*)0)))) ^ p_6), l_17)) <= l_1211[2][1][4]), (*g_953))) , p_6))), p_6)), p_6))), 0xDD16L)), 0)), l_1211[2][1][4])), p_6)) | p_6)) != l_1211[1][1][2]), (*g_953))) | (-1L))))
        { 
            uint16_t ** const ***l_1241 = &l_1239;
            uint16_t ** const ***l_1242 = &l_1239;
            int32_t l_1251 = 1L;
            int32_t l_1252 = 0xE6C5D644L;
            int32_t *l_1289 = &g_69;
            int32_t *l_1290 = (void*)0;
            int32_t *l_1291 = (void*)0;
            int32_t *l_1292[6] = {(void*)0,(void*)0,&g_4,(void*)0,(void*)0,&g_4};
            int i;
            if (((safe_mul_func_uint16_t_u_u((l_1252 |= (safe_lshift_func_int8_t_s_u((((p_6 | ((l_1242 = (l_1241 = l_1238)) != (g_1243[2][0][3] = &g_550[1]))) != ((*g_573) != (void*)0)) && (((safe_lshift_func_uint8_t_u_u(((!p_6) || (safe_lshift_func_int16_t_s_u(((((p_6++) < (***g_1073)) , l_1233) == l_44), 15))), l_1251)) , p_6) || p_6)), l_1251))), l_44)) > (**g_573)))
            { 
                uint32_t l_1270[6] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL};
                struct S0 l_1279 = {0x2492L,0UL,0xDA08L,0xA2L,-1L};
                int i;
lbl_1288:
                for (g_251 = 1; (g_251 >= (-9)); g_251 = safe_sub_func_int8_t_s_s(g_251, 1))
                { 
                    uint16_t *l_1262 = &g_109[0][0];
                    int32_t l_1268 = 0xEC2EF330L;
                    int32_t *l_1269[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1269[i] = &l_1233;
                    l_1251 |= (safe_sub_func_int16_t_s_s(l_44, (l_1252 = (p_6 = 65530UL))));
                    (**g_279) = (safe_unary_minus_func_uint32_t_u((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((((*l_1262)++) > (p_6 | l_1252)) > ((l_1268 = ((l_1265 >= ((***g_1005) = (safe_mul_func_uint8_t_u_u(255UL, l_1211[2][1][4])))) && 5L)) , 0xA1L)), (**g_444))), p_6))));
                    ++l_1270[1];
                    (*g_97) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(p_6, (l_1279 , (safe_mul_func_uint16_t_u_u(((((*g_652) , (l_1252 ^= (**g_573))) != (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(l_44, (((((safe_div_func_uint64_t_u_u((l_1251 > ((*l_1262) ^= (l_1233 = p_6))), 1L)) , l_44) , l_1211[2][1][3]) ^ l_1251) && p_6))), p_6))) & p_6), 0x8560L))))), p_6)), (*g_936)));
                    if (p_6)
                        break;
                }
                (**g_279) = 0x73153D7DL;
                if (g_653.f0.f0)
                    goto lbl_1288;
                if (g_64)
                    goto lbl_1288;
            }
            else
            { 
                return p_6;
            }
            l_1299++;
        }
        else
        { 
            int32_t *l_1302[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1302[i] = &l_44;
            g_1304++;
        }
        (*l_1309) = g_1307;
        (*l_1311) = l_1310;
    }
    (*g_97) = (((*l_1313) &= ((void*)0 != l_1312)) == ((((*l_1310) <= (*l_1310)) , l_1314) , 0x67605675FD23B0B2LL));
    return p_6;
}



static int16_t  func_20(const int32_t  p_21, uint64_t  p_22, int8_t  p_23)
{ 
    uint32_t **l_1170 = &g_574;
    uint32_t ***l_1171[4] = {&l_1170,&l_1170,&l_1170,&l_1170};
    const int32_t l_1175 = 1L;
    int8_t l_1176 = 1L;
    int32_t l_1181 = 0x8167E4A5L;
    const uint8_t *l_1182 = &g_66;
    int32_t l_1183 = (-7L);
    int8_t ***l_1188 = &g_952;
    int i;
    g_573 = l_1170;
    l_1183 = (safe_add_func_int64_t_s_s((+l_1175), (l_1176 && (safe_div_func_int16_t_s_s(((((l_1181 = p_22) == (((l_1182 == (*g_444)) != p_21) == p_23)) & 0xCAL) | l_1176), 1UL)))));
    l_1183 = l_1175;
    (**g_279) &= (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_22, (((l_1181 = (l_1188 != (void*)0)) <= ((+65532UL) | ((-2L) || l_1175))) , (safe_add_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(((((*g_444) = (void*)0) != l_1182) || 1L), 0x15DDFF13937B704BLL)) , l_1183) || l_1175), (***g_1005)))))), 7));
    return l_1176;
}



static uint64_t  func_27(uint16_t  p_28, uint32_t  p_29, struct S0  p_30, uint32_t  p_31, uint32_t  p_32)
{ 
    const uint64_t l_48 = 0x49A5C1B09C821F99LL;
    uint8_t *l_63 = &g_64;
    union U1 l_67 = {{1L,0xDDL,0x4EA3L,0x91L,-1L}};
    const struct S0 *l_102 = &g_103;
    int32_t l_106 = (-1L);
    int32_t l_107 = 0L;
    int32_t l_108[5] = {0x4F57EB90L,0x4F57EB90L,0x4F57EB90L,0x4F57EB90L,0x4F57EB90L};
    int32_t **l_148 = &g_97;
    int32_t l_156 = 2L;
    uint8_t *l_236 = &g_66;
    uint32_t l_294[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    int32_t l_330 = 0xA2A2AF9BL;
    uint16_t *l_449 = &g_109[2][1];
    uint16_t ** const l_448 = &l_449;
    int64_t l_454 = 0x1528A50D8690CB98LL;
    const struct S0 l_456 = {-1L,0UL,65533UL,0x1CL,1L};
    uint64_t l_501 = 18446744073709551614UL;
    int16_t l_506 = 0xE40DL;
    uint64_t *l_686 = &g_163[4][0];
    uint64_t * const *l_685 = &l_686;
    uint64_t *l_697 = &g_163[5][1];
    uint16_t l_725 = 0x91ADL;
    uint8_t * const * const l_766 = &l_236;
    uint8_t * const * const *l_765[5][2] = {{&l_766,&l_766},{&l_766,&l_766},{&l_766,&l_766},{&l_766,&l_766},{&l_766,&l_766}};
    int64_t l_777 = (-1L);
    int8_t l_778 = (-8L);
    int32_t l_784 = 0L;
    int64_t l_787 = 0L;
    int8_t l_788 = (-1L);
    int8_t l_789 = 0x6EL;
    uint32_t l_818 = 1UL;
    int32_t *l_819 = &l_108[2];
    int32_t *l_820 = &l_107;
    int32_t *l_821 = &l_106;
    int32_t *l_822 = &l_107;
    int32_t *l_823[7] = {(void*)0,&g_4,&g_4,(void*)0,&g_4,&g_4,(void*)0};
    uint16_t l_824 = 1UL;
    uint16_t *l_870[3][4][1] = {{{&g_637[0][1][1]},{&g_637[1][1][3]},{&g_637[0][1][1]},{&g_637[1][1][3]}},{{&g_637[0][1][1]},{&g_637[1][1][3]},{&g_637[0][1][1]},{&g_637[1][1][3]}},{{&g_637[0][1][1]},{&g_637[1][1][3]},{&g_637[0][1][1]},{&g_637[1][1][3]}}};
    const uint32_t l_877 = 0x708D8329L;
    const int64_t l_1009 = 0xAD121AC22D618832LL;
    union U1 **l_1042 = &g_652;
    int8_t l_1071 = 6L;
    uint16_t l_1082[2][5] = {{65535UL,0x17D5L,65535UL,0x17D5L,65535UL},{65535UL,0x17D5L,65535UL,0x17D5L,65535UL}};
    int32_t l_1162[1];
    int32_t l_1163 = 1L;
    int16_t l_1165 = 0x1A01L;
    int8_t l_1169[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1162[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1169[i] = 0xC3L;
    if ((l_48 > (((-1L) ^ ((safe_mod_func_int64_t_s_s(func_38(g_4, ((func_51(g_4, (safe_mod_func_uint32_t_u_u((((((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*l_63) ^= 255UL), (0xB1L && (g_65[0][1] != l_63)))), l_48)) > (-1L)) , p_31) & l_48) & 0x13L), p_31)), l_67, g_4, p_31) , g_4) , l_67.f0.f3), p_28), 1UL)) > (-9L))) && p_30.f2)))
    { 
        l_102 = g_100[0];
        return l_67.f0.f0;
    }
    else
    { 
        int32_t *l_104[6];
        uint16_t l_138 = 65527UL;
        const struct S0 *l_147 = (void*)0;
        int i;
        for (i = 0; i < 6; i++)
            l_104[i] = &g_69;
        --g_109[0][1];
        if ((safe_mul_func_uint16_t_u_u(0x2E79L, (g_92 ^ 18446744073709551610UL))))
        { 
            for (l_67.f0.f4 = 0; (l_67.f0.f4 <= 0); l_67.f0.f4 += 1)
            { 
                int32_t *l_114 = &l_107;
                l_114 = &l_108[4];
                if (p_28)
                    break;
                for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                { 
                    if (p_29)
                        break;
                }
            }
            (*g_97) |= p_32;
            for (p_30.f0 = 0; (p_30.f0 == (-10)); p_30.f0 = safe_sub_func_uint16_t_u_u(p_30.f0, 5))
            { 
                int16_t l_137[7][5][1] = {{{0xF928L},{(-9L)},{4L},{0x099EL},{0xE8D0L}},{{(-6L)},{(-6L)},{0x5F2BL},{0x5F2BL},{(-6L)}},{{(-6L)},{0xE8D0L},{0x099EL},{4L},{(-9L)}},{{0xF928L},{0xFD6EL},{0xF928L},{(-9L)},{4L}},{{0x099EL},{0xE8D0L},{(-6L)},{(-6L)},{0x5F2BL}},{{0x5F2BL},{(-6L)},{(-6L)},{0xE8D0L},{0x099EL}},{{4L},{(-9L)},{0xF928L},{0xFD6EL},{0xF928L}}};
                int i, j, k;
                --g_117;
                for (g_76 = 0; (g_76 <= (-7)); g_76--)
                { 
                    int32_t l_136[5] = {0x2C0FF22BL,0x2C0FF22BL,0x2C0FF22BL,0x2C0FF22BL,0x2C0FF22BL};
                    int i;
                    if (p_30.f0)
                        break;
                    l_138 = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((0xB7D2L != ((safe_rshift_func_int16_t_s_s(0xB8DAL, (safe_mod_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(g_64, (g_92 | p_30.f1))) , ((3UL & p_31) && g_92)), g_101[1].f4)) , l_108[2]) >= p_32), p_28)))) > 1UL)) == p_30.f4), 6)), p_30.f4)) <= l_136[4]), l_137[0][0][0]));
                    if (l_137[0][0][0])
                        break;
                    (*g_97) &= 0x11D5598AL;
                }
                return g_109[0][1];
            }
        }
        else
        { 
            uint64_t l_139 = 0xF2D310D2121A4FECLL;
            int32_t l_140 = 8L;
            int32_t l_141 = 0xF98C0194L;
            l_139 = 8L;
            g_142--;
        }
        l_106 = ((((((safe_sub_func_int16_t_s_s(((-10L) < ((void*)0 != l_147)), ((((&l_104[2] == (l_148 = &g_97)) != (!(safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((-1L), l_108[3])) && g_103.f4) & 1L), 65531UL)), l_67.f0.f4)))) >= p_29) >= l_156))) || p_30.f3) , g_109[0][1]) < 0x20L) & 0xE4044F880E7157E9LL) && p_30.f3);
        l_104[1] = (*l_148);
        (*l_148) = &g_69;
    }
    return l_1169[0];
}



static uint16_t  func_33(uint8_t  p_34, int64_t  p_35, uint16_t  p_36, uint8_t  p_37)
{ 
    return g_4;
}



static uint8_t  func_38(int64_t  p_39, int32_t  p_40, const uint8_t  p_41)
{ 
    return p_41;
}



static int16_t  func_51(int8_t  p_52, int16_t  p_53, union U1  p_54, uint32_t  p_55, uint32_t  p_56)
{ 
    int32_t *l_68 = &g_69;
    int32_t *l_70 = &g_69;
    int32_t *l_71 = &g_69;
    int32_t *l_72 = &g_69;
    int32_t *l_73[1][2];
    int32_t l_75 = 0x5B6EF3BBL;
    uint8_t *l_82 = &g_66;
    int32_t **l_83 = &l_72;
    uint16_t l_99 = 65535UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_73[i][j] = &g_69;
    }
    g_77--;
    (*l_68) = (((safe_lshift_func_uint16_t_u_s(g_66, ((void*)0 != &g_69))) , ((l_82 == (p_54 , &g_66)) , l_82)) != l_82);
lbl_98:
    (*l_83) = &g_4;
    g_92 = ((0L == g_4) || ((safe_sub_func_uint64_t_u_u((((safe_div_func_int8_t_s_s((((((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(p_53, p_53)) , (**l_83)) , (((*l_70) = 0x4E3EL) == g_64)), p_55)) < p_53) , (void*)0) != &g_4) == (**l_83)), p_54.f0.f2)) && p_54.f0.f1) & (*l_72)), 0L)) ^ 0xF746L));
    for (l_75 = (-18); (l_75 >= (-12)); ++l_75)
    { 
        uint8_t **l_95 = &l_82;
        int32_t *l_96[5];
        int i;
        for (i = 0; i < 5; i++)
            l_96[i] = &g_69;
        g_97 = ((((*l_95) = (void*)0) == (((void*)0 == l_96[3]) , &g_64)) , (*l_83));
        g_97 = &g_69;
        if (p_54.f0.f4)
            goto lbl_98;
    }
    return l_99;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_101[i].f0, "g_101[i].f0", print_hash_value);
        transparent_crc(g_101[i].f1, "g_101[i].f1", print_hash_value);
        transparent_crc(g_101[i].f2, "g_101[i].f2", print_hash_value);
        transparent_crc(g_101[i].f3, "g_101[i].f3", print_hash_value);
        transparent_crc(g_101[i].f4, "g_101[i].f4", print_hash_value);

    }
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_109[i][j], "g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_163[i][j], "g_163[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);

    }
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_513[i], "g_513[i]", print_hash_value);

    }
    transparent_crc(g_560, "g_560", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_637[i][j][k], "g_637[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_653.f0.f0, "g_653.f0.f0", print_hash_value);
    transparent_crc(g_653.f0.f1, "g_653.f0.f1", print_hash_value);
    transparent_crc(g_653.f0.f2, "g_653.f0.f2", print_hash_value);
    transparent_crc(g_653.f0.f3, "g_653.f0.f3", print_hash_value);
    transparent_crc(g_653.f0.f4, "g_653.f0.f4", print_hash_value);
    transparent_crc(g_653.f1, "g_653.f1", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_995.f0, "g_995.f0", print_hash_value);
    transparent_crc(g_995.f1, "g_995.f1", print_hash_value);
    transparent_crc(g_995.f2, "g_995.f2", print_hash_value);
    transparent_crc(g_995.f3, "g_995.f3", print_hash_value);
    transparent_crc(g_995.f4, "g_995.f4", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1333[i], "g_1333[i]", print_hash_value);

    }
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    transparent_crc(g_1351.f0, "g_1351.f0", print_hash_value);
    transparent_crc(g_1351.f1, "g_1351.f1", print_hash_value);
    transparent_crc(g_1351.f2, "g_1351.f2", print_hash_value);
    transparent_crc(g_1351.f3, "g_1351.f3", print_hash_value);
    transparent_crc(g_1351.f4, "g_1351.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1384[i], "g_1384[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1424[i], "g_1424[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
