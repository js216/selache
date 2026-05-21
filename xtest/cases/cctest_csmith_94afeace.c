// SPDX-License-Identifier: MIT
// cctest_csmith_94afeace.c --- cctest case csmith_94afeace (csmith seed 2494556878)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4e413194 */

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

// Options:   -s 2494556878 -o /tmp/csmith_gen_lms74i0x/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const uint64_t  f1;
   uint64_t  f2;
   const uint64_t  f3;
   int32_t  f4;
   const uint16_t  f5;
   uint8_t  f6;
   uint16_t  f7;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
   uint8_t  f1;
   const uint16_t  f2;
};


static int8_t g_10 = 0x97L;
static int64_t g_30 = (-9L);
static int32_t g_42 = 0x05DE082AL;
static int64_t g_54 = (-1L);
static uint64_t g_74[7][1][3] = {{{0xBDD559FE4D3D82F8LL,0xDC662BFFD659CA02LL,0xBDD559FE4D3D82F8LL}},{{0xBDD559FE4D3D82F8LL,18446744073709551611UL,18446744073709551615UL}},{{0xBDD559FE4D3D82F8LL,1UL,0x2392579B7B7A4FD3LL}},{{0xBDD559FE4D3D82F8LL,0xDC662BFFD659CA02LL,0xBDD559FE4D3D82F8LL}},{{0xBDD559FE4D3D82F8LL,18446744073709551611UL,18446744073709551615UL}},{{0xBDD559FE4D3D82F8LL,1UL,0x2392579B7B7A4FD3LL}},{{0xBDD559FE4D3D82F8LL,0xDC662BFFD659CA02LL,0xBDD559FE4D3D82F8LL}}};
static int32_t g_78 = 0x885CB6E3L;
static int32_t g_81 = 0x1C1CA363L;
static int32_t *g_84 = &g_81;
static uint32_t g_97[7] = {6UL,0x494CAA1CL,6UL,6UL,0x494CAA1CL,6UL,6UL};
static uint16_t g_110 = 0xF1C1L;
static int16_t g_133 = 0x036BL;
static int32_t g_134 = 0x225B6AC9L;
static uint32_t g_136 = 4294967288UL;
static int16_t g_152 = 0L;
static uint8_t g_163[1] = {249UL};
static union U1 g_165 = {0};
static uint16_t *g_177 = &g_110;
static uint16_t **g_176[1] = {&g_177};
static int8_t ***g_193 = (void*)0;
static const int64_t g_213[7] = {7L,7L,7L,7L,7L,7L,7L};
static const int64_t g_215[7] = {0x4C3FBF1EE3AC004CLL,0x4C3FBF1EE3AC004CLL,0x38CD09A4D5CBF6C0LL,0x4C3FBF1EE3AC004CLL,0x4C3FBF1EE3AC004CLL,0x38CD09A4D5CBF6C0LL,0x4C3FBF1EE3AC004CLL};
static const int64_t *g_214[2][3][3] = {{{&g_215[2],&g_213[2],&g_215[2]},{&g_213[2],&g_215[2],&g_215[2]},{&g_213[2],&g_215[2],&g_215[2]}},{{&g_213[2],&g_215[2],&g_215[2]},{&g_213[2],&g_215[2],&g_215[2]},{&g_213[2],&g_215[2],&g_215[2]}}};
static int8_t g_226 = 0x9AL;
static int32_t **g_319 = &g_84;
static int32_t ***g_318[5][7][4] = {{{(void*)0,&g_319,(void*)0,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,(void*)0},{&g_319,&g_319,(void*)0,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319}},{{&g_319,&g_319,&g_319,&g_319},{&g_319,(void*)0,&g_319,&g_319},{&g_319,&g_319,(void*)0,&g_319},{&g_319,(void*)0,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319}},{{(void*)0,&g_319,(void*)0,(void*)0},{&g_319,&g_319,(void*)0,&g_319},{&g_319,&g_319,&g_319,&g_319},{(void*)0,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,(void*)0},{&g_319,&g_319,&g_319,(void*)0}},{{&g_319,&g_319,(void*)0,&g_319},{&g_319,&g_319,(void*)0,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,(void*)0},{&g_319,(void*)0,&g_319,&g_319},{&g_319,(void*)0,&g_319,&g_319},{(void*)0,&g_319,&g_319,(void*)0}},{{&g_319,&g_319,(void*)0,&g_319},{&g_319,&g_319,(void*)0,&g_319},{(void*)0,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,&g_319,&g_319,&g_319},{&g_319,(void*)0,&g_319,&g_319},{&g_319,&g_319,(void*)0,&g_319}}};
static uint32_t g_327 = 8UL;
static int32_t ****g_332 = &g_318[0][2][0];
static const int32_t g_403 = 0xD5F6A0B1L;
static struct S0 g_453 = {0x7156C975L,18446744073709551615UL,0x8547802D0260EBB5LL,1UL,0x1B413DF7L,0xDE3CL,0x9CL,65535UL};
static uint64_t g_487 = 0xA076D994CA1E85E7LL;
static int64_t *** const *g_489 = (void*)0;
static int16_t g_496 = 1L;
static const union U1 *g_504 = &g_165;
static const union U1 **g_503 = &g_504;
static union U1 *g_506 = (void*)0;
static union U1 **g_505 = &g_506;
static int32_t *g_577[1] = {(void*)0};
static uint32_t g_602[2] = {0xB52523C0L,0xB52523C0L};
static int64_t *g_610 = &g_30;
static int64_t **g_609 = &g_610;
static int64_t ***g_608 = &g_609;
static int64_t ****g_607 = &g_608;
static union U1 ***g_728[6] = {&g_505,&g_505,&g_505,&g_505,&g_505,&g_505};
static union U1 ****g_727 = &g_728[5];
static int8_t g_793 = 0L;
static int32_t g_828 = 0x2AFCE0DAL;
static const uint64_t *g_831 = (void*)0;
static const uint64_t **g_830 = &g_831;
static int16_t g_967 = 8L;
static uint64_t *g_1009 = &g_487;
static uint64_t **g_1008 = &g_1009;
static int32_t *g_1041[3][4] = {{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42}};
static int32_t ** const g_1040 = &g_1041[1][1];
static int32_t ** const *g_1039 = &g_1040;
static int32_t ** const **g_1038 = &g_1039;
static int32_t ** const **g_1043 = &g_1039;
static struct S0 g_1119 = {0xE4789536L,8UL,0x7107CC74A1E5AC34LL,0xE85793CFC0846205LL,-1L,0xC818L,0xFBL,0x0370L};
static struct S0 *g_1118[4][4] = {{&g_1119,(void*)0,&g_1119,(void*)0},{&g_1119,(void*)0,&g_1119,(void*)0},{&g_1119,(void*)0,&g_1119,(void*)0},{&g_1119,(void*)0,&g_1119,(void*)0}};
static struct S0 **g_1117 = &g_1118[1][0];
static int32_t g_1211 = (-1L);
static int32_t g_1214[1][3] = {{(-1L),(-1L),(-1L)}};
static uint16_t g_1259 = 1UL;
static struct S0 g_1277[4][3] = {{{0x045E0F0AL,0xDD071A9B156B2FA1LL,18446744073709551615UL,0x98808D3D06DBF321LL,3L,1UL,255UL,0xB186L},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL}},{{0x045E0F0AL,0xDD071A9B156B2FA1LL,18446744073709551615UL,0x98808D3D06DBF321LL,3L,1UL,255UL,0xB186L},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL}},{{0x045E0F0AL,0xDD071A9B156B2FA1LL,18446744073709551615UL,0x98808D3D06DBF321LL,3L,1UL,255UL,0xB186L},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL}},{{0x045E0F0AL,0xDD071A9B156B2FA1LL,18446744073709551615UL,0x98808D3D06DBF321LL,3L,1UL,255UL,0xB186L},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL},{0x9382206DL,0UL,0x5C386D84B9EE6B29LL,0x86B6FC4EC1C5635ALL,0x00FDDB94L,0x863BL,0xA8L,65526UL}}};
static int32_t *****g_1348[5] = {&g_332,&g_332,&g_332,&g_332,&g_332};
static const int32_t *g_1412 = &g_1214[0][0];
static uint32_t **g_1469 = (void*)0;
static uint8_t *g_1481 = &g_1119.f6;
static uint16_t g_1577 = 0UL;
static const uint64_t ***** const g_1584 = (void*)0;
static int32_t g_1612[4][7] = {{0L,0x39FC1379L,(-9L),0x342A58DFL,0x342A58DFL,(-9L),0x39FC1379L},{(-9L),0xF9169896L,0x39FC1379L,0L,(-1L),0x5A4533F0L,0L},{(-9L),1L,0xF5D2EFFDL,0x39FC1379L,0xF5D2EFFDL,1L,(-9L)},{0L,0x5A4533F0L,(-1L),0L,0x39FC1379L,0xF9169896L,(-9L)}};
static uint64_t g_1677 = 0xE7AD7F1939069BA4LL;
static struct S0 g_1700 = {0x0334FADDL,0xDBAD65C039546771LL,0xC85292B606A6B177LL,0x78D5C7F42F7BC55BLL,1L,0xB94FL,0x15L,1UL};



static struct S0  func_1(void);
static const int16_t  func_6(int8_t * p_7, const struct S0  p_8);
static uint64_t  func_14(int8_t * p_15);
static int8_t  func_18(uint64_t  p_19, int8_t * p_20);
static int32_t * func_22(uint32_t  p_23, uint32_t  p_24);
static const uint8_t  func_32(int8_t * p_33, union U1  p_34, uint32_t  p_35);
static int8_t * func_36(int8_t * p_37, uint32_t  p_38);
static union U1  func_44(uint64_t  p_45, uint16_t  p_46);




static struct S0  func_1(void)
{ 
    int8_t *l_9[6] = {&g_10,&g_10,&g_10,&g_10,&g_10,&g_10};
    const struct S0 l_11 = {0x8FE24307L,0UL,0xEF4A0426A7609FA8LL,0xF88E10E5E53494ABLL,0x24891023L,65535UL,0UL,1UL};
    int32_t l_1400[3];
    union U1 **l_1401 = &g_506;
    int64_t ****l_1434 = &g_608;
    uint32_t l_1501 = 0UL;
    uint64_t ****l_1502 = (void*)0;
    int32_t **l_1569[3];
    uint32_t l_1576 = 0x1F47A886L;
    int64_t l_1608[1][1];
    int32_t l_1618 = 0xB30C9CC3L;
    uint8_t l_1626 = 247UL;
    const uint32_t l_1648 = 5UL;
    union U1 *** const *l_1665 = &g_728[5];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1400[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_1569[i] = &g_1041[2][1];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1608[i][j] = 0xDCA58A8B6D6BA055LL;
    }
    if ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((func_6(l_9[0], l_11) || (safe_lshift_func_int8_t_s_s(l_1400[2], 5))), 5)), ((&l_9[0] != (void*)0) & (((**g_727) == l_1401) & 0xA7F8D096L)))))
    { 
        uint16_t l_1407[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1407[i] = 65533UL;
        for (g_133 = 0; (g_133 <= 3); g_133 += 1)
        { 
            struct S0 l_1402 = {0L,0UL,18446744073709551615UL,1UL,0x5560A006L,0x7EADL,8UL,65528UL};
            int16_t *l_1410 = &g_496;
            for (g_78 = 0; (g_78 >= 0); g_78 -= 1)
            { 
                return l_1402;
            }
            (****g_1038) = ((((*l_1410) = (((*g_177) = ((*g_1009) == (safe_rshift_func_int16_t_s_s((((l_11 , (safe_mul_func_int8_t_s_s((4294967295UL & (l_1407[2] , 4294967295UL)), (safe_rshift_func_int16_t_s_s(0x20DFL, 1))))) >= g_453.f4) | l_1407[2]), 9)))) == 5UL)) & g_1277[2][1].f0) , l_1402.f5);
            for (l_1402.f6 = 0; (l_1402.f6 <= 0); l_1402.f6 += 1)
            { 
                for (g_496 = 0; (g_496 >= 0); g_496 -= 1)
                { 
                    int i, j, k;
                    (*g_319) = &l_1400[1];
                }
                for (g_136 = 0; (g_136 <= 0); g_136 += 1)
                { 
                    const int32_t *l_1411 = &g_453.f4;
                    (**g_1040) |= (-1L);
                    g_1412 = l_1411;
                }
            }
        }
    }
    else
    { 
        uint8_t l_1417 = 1UL;
        uint32_t l_1422 = 0x11C87908L;
        int32_t l_1423 = 0L;
        int32_t *l_1424 = &g_1214[0][0];
        uint32_t l_1447[6];
        uint64_t l_1454 = 0x0A426945FA7BDCB1LL;
        int16_t l_1473 = 0x2D1AL;
        struct S0 l_1497 = {-1L,0UL,0xF30B29C45A77E957LL,4UL,1L,0xFBF9L,0x50L,0x336EL};
        struct S0 l_1512 = {0x9E93C2FBL,1UL,0xB8FBC86A1B47EC72LL,0x0C8E450A6524C7FFLL,0xF1EA8FEFL,0xD6C3L,0x73L,65531UL};
        int8_t l_1534 = 0x79L;
        struct S0 l_1579 = {0x50353274L,0x474F8D94E5C0B139LL,0x8E72E1BBF9AD5D70LL,4UL,-7L,8UL,2UL,65535UL};
        uint64_t ***l_1598[2];
        union U1 l_1599 = {0};
        int32_t l_1611 = 0x3065BAA0L;
        int32_t l_1614 = 0x9823A588L;
        int32_t l_1617 = 1L;
        int32_t l_1620 = 0x59A295B3L;
        int32_t l_1622[6][6][4] = {{{0xD064D671L,0L,0x360F4714L,0xADA97BB1L},{7L,0xE1728E04L,1L,0x6B795D47L},{1L,0x6B795D47L,0x43B9E9CBL,0x6B795D47L},{(-10L),0xE1728E04L,0x20023865L,0xADA97BB1L},{2L,0L,(-10L),1L},{0x20023865L,0xA7D6F4E4L,(-6L),0x2F463BD7L}},{{0x20023865L,0L,(-10L),0L},{2L,0x2F463BD7L,0x20023865L,0L},{(-10L),0xF764569CL,0x43B9E9CBL,0L},{1L,0xF764569CL,1L,0L},{7L,0x2F463BD7L,0x360F4714L,0L},{0xD064D671L,0L,(-10L),0x2F463BD7L}},{{0x1E012529L,0xA7D6F4E4L,(-10L),1L},{0xD064D671L,0L,0x360F4714L,0xADA97BB1L},{7L,0xE1728E04L,1L,0x6B795D47L},{1L,0x6B795D47L,0x43B9E9CBL,0x6B795D47L},{(-10L),0xE1728E04L,0x20023865L,0xADA97BB1L},{2L,0L,(-10L),1L}},{{0x20023865L,0xA7D6F4E4L,(-6L),0x2F463BD7L},{0x20023865L,0L,(-10L),0L},{2L,0x2F463BD7L,0x20023865L,0L},{(-10L),0xF764569CL,0x43B9E9CBL,0L},{1L,0xF764569CL,1L,0L},{7L,0x2F463BD7L,0x360F4714L,0L}},{{0xD064D671L,0L,(-10L),0x2F463BD7L},{0x1E012529L,0xA7D6F4E4L,(-10L),1L},{0xD064D671L,0L,0x360F4714L,0xADA97BB1L},{7L,0xE1728E04L,1L,0x6B795D47L},{1L,0x6B795D47L,0x43B9E9CBL,0x6B795D47L},{(-10L),0xE1728E04L,0x20023865L,0xADA97BB1L}},{{2L,0L,(-10L),1L},{0x20023865L,0xA7D6F4E4L,(-6L),0x2F463BD7L},{0x20023865L,0L,(-10L),0L},{2L,0x2F463BD7L,(-10L),0xE1728E04L},{0x1E012529L,0L,2L,0x6B795D47L},{(-6L),0L,(-6L),0xE1728E04L}}};
        int32_t *l_1633 = &g_1214[0][2];
        int32_t l_1646 = 0L;
        uint64_t l_1647 = 3UL;
        uint16_t l_1678[7] = {0x2DC2L,9UL,9UL,0x2DC2L,9UL,9UL,0x2DC2L};
        int32_t * const l_1685 = &g_81;
        uint8_t l_1699 = 0UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1447[i] = 18446744073709551613UL;
        for (i = 0; i < 2; i++)
            l_1598[i] = (void*)0;
        (*l_1424) = ((**g_319) |= (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((l_1417 | (((****g_1043) = (****g_1038)) <= (l_11.f7 <= (-1L)))), l_1400[2])) , ((safe_mod_func_int32_t_s_s(((l_1422 != l_1423) >= 0x885AD01EL), 0x949AFFBCL)) ^ l_11.f7)), l_1417)));
        if ((safe_mod_func_uint64_t_u_u(2UL, (safe_sub_func_uint8_t_u_u(g_74[2][0][1], (safe_unary_minus_func_int64_t_s(((safe_mul_func_int8_t_s_s(0L, (~(+((&g_608 == l_1434) || (safe_mul_func_int8_t_s_s(((***l_1434) != (void*)0), 0x87L))))))) | 0x17L))))))))
        { 
            int32_t *l_1437 = &g_1214[0][2];
            int32_t *l_1438 = &l_1400[1];
            int32_t *l_1439 = (void*)0;
            int32_t *l_1440 = &g_453.f4;
            int32_t *l_1441 = &g_1277[2][1].f4;
            int32_t *l_1442 = (void*)0;
            int32_t *l_1443 = &g_81;
            int32_t *l_1444 = (void*)0;
            int32_t *l_1445 = (void*)0;
            int32_t *l_1446[1][7] = {{&g_1214[0][0],&g_1214[0][0],&g_1214[0][0],&g_1214[0][0],&g_1214[0][0],&g_1214[0][0],&g_1214[0][0]}};
            int8_t l_1468 = 1L;
            uint32_t **l_1470 = (void*)0;
            uint8_t *l_1480 = &g_453.f6;
            int16_t *l_1511 = &g_133;
            int i, j;
            l_1447[2]++;
            for (g_1259 = (-5); (g_1259 > 56); g_1259++)
            { 
                const int32_t l_1467 = 0L;
                struct S0 l_1479 = {-6L,0xEC7235E4E9046360LL,9UL,0x2F7C369AC3E60CEDLL,-1L,1UL,0xB2L,0xD721L};
                uint64_t ***l_1505 = &g_1008;
                uint64_t ****l_1504 = &l_1505;
                for (g_110 = 0; (g_110 == 47); g_110++)
                { 
                    uint64_t l_1457[6][6][6] = {{{5UL,0x6ACBCAC2025BA48DLL,0xF0718F2D4DAF52DCLL,0x5CFA4E9B888434E6LL,1UL,0xA885720D01ECD15FLL},{9UL,0x0A9A7140231D7F1ELL,0xF4664184869E27DCLL,1UL,0x9B610B9C90100F4ELL,0x9B610B9C90100F4ELL},{9UL,0x96EDA0F4C0D11163LL,0x96EDA0F4C0D11163LL,9UL,18446744073709551606UL,9UL},{1UL,0xF0718F2D4DAF52DCLL,0x19FD15566241BCFCLL,18446744073709551615UL,18446744073709551615UL,0xDC0D6ADA43843985LL},{0x0A9A7140231D7F1ELL,1UL,0xAD196803EE584C7CLL,0xDDA6757678B1E53DLL,18446744073709551615UL,0xC3B57E9D0ED24D16LL},{18446744073709551613UL,0xF0718F2D4DAF52DCLL,0x0F08A7101F2EF7B1LL,18446744073709551613UL,18446744073709551606UL,0x465FE985296A1A4FLL}},{{0xFEDEDDE3D2C7F383LL,0x96EDA0F4C0D11163LL,0xBB660436351354D9LL,0x0F08A7101F2EF7B1LL,0x9B610B9C90100F4ELL,0x5CFA4E9B888434E6LL},{0x404768526442B10FLL,0x0A9A7140231D7F1ELL,0xB79EB25B2AE68EAELL,0x2CB721649F2E9028LL,1UL,0x0F08A7101F2EF7B1LL},{0x04D3801FC5F12141LL,0x6ACBCAC2025BA48DLL,1UL,0xF0718F2D4DAF52DCLL,2UL,1UL},{1UL,0xB79EB25B2AE68EAELL,0UL,0xB79EB25B2AE68EAELL,1UL,0x3E98A5F9EC67AA7ALL},{1UL,18446744073709551615UL,0x5CFA4E9B888434E6LL,2UL,0x19FD15566241BCFCLL,18446744073709551606UL},{18446744073709551613UL,18446744073709551613UL,0x0A9A7140231D7F1ELL,18446744073709551615UL,0xF0718F2D4DAF52DCLL,18446744073709551606UL}},{{0UL,0xB2E9E3011E7260CFLL,0x5CFA4E9B888434E6LL,0xF4664184869E27DCLL,0x404768526442B10FLL,0x3E98A5F9EC67AA7ALL},{0xF0718F2D4DAF52DCLL,0x04D3801FC5F12141LL,0UL,5UL,0x3E98A5F9EC67AA7ALL,1UL},{0xBB660436351354D9LL,0xA885720D01ECD15FLL,1UL,0xDC0D6ADA43843985LL,5UL,0x0F08A7101F2EF7B1LL},{18446744073709551610UL,0x3E98A5F9EC67AA7ALL,0xB79EB25B2AE68EAELL,1UL,0xBB660436351354D9LL,0x5CFA4E9B888434E6LL},{0x465FE985296A1A4FLL,0xAD196803EE584C7CLL,0xBB660436351354D9LL,0xBB660436351354D9LL,0xAD196803EE584C7CLL,0x465FE985296A1A4FLL},{0x6ACBCAC2025BA48DLL,18446744073709551615UL,0x0F08A7101F2EF7B1LL,18446744073709551615UL,0xFEDEDDE3D2C7F383LL,0xC3B57E9D0ED24D16LL}},{{0xA885720D01ECD15FLL,18446744073709551613UL,0xAD196803EE584C7CLL,0x19FD15566241BCFCLL,18446744073709551610UL,0xDC0D6ADA43843985LL},{0xA885720D01ECD15FLL,0x5CFA4E9B888434E6LL,0x19FD15566241BCFCLL,18446744073709551615UL,0UL,9UL},{0x6ACBCAC2025BA48DLL,0xFEDEDDE3D2C7F383LL,0x96EDA0F4C0D11163LL,0xBB660436351354D9LL,0x0F08A7101F2EF7B1LL,0x9B610B9C90100F4ELL},{0x465FE985296A1A4FLL,18446744073709551615UL,0xF4664184869E27DCLL,1UL,18446744073709551615UL,0xA885720D01ECD15FLL},{18446744073709551610UL,0xF4664184869E27DCLL,0xF0718F2D4DAF52DCLL,0xDC0D6ADA43843985LL,1UL,18446744073709551615UL},{0xBB660436351354D9LL,0x404768526442B10FLL,18446744073709551613UL,5UL,18446744073709551613UL,0x404768526442B10FLL}},{{0xF0718F2D4DAF52DCLL,0UL,18446744073709551613UL,0xF4664184869E27DCLL,0xB2E9E3011E7260CFLL,1UL},{0UL,0xDDA6757678B1E53DLL,18446744073709551606UL,18446744073709551615UL,0x465FE985296A1A4FLL,9UL},{18446744073709551613UL,0xDDA6757678B1E53DLL,9UL,2UL,0xB2E9E3011E7260CFLL,0xAD196803EE584C7CLL},{1UL,0UL,1UL,0xB79EB25B2AE68EAELL,18446744073709551613UL,0x9B610B9C90100F4ELL},{2UL,1UL,0x19FD15566241BCFCLL,0xBB660436351354D9LL,9UL,9UL},{9UL,0UL,0x2CB721649F2E9028LL,5UL,18446744073709551610UL,0xB2E9E3011E7260CFLL}},{{1UL,0xB2E9E3011E7260CFLL,0x6ACBCAC2025BA48DLL,0x3E98A5F9EC67AA7ALL,0x3E98A5F9EC67AA7ALL,0x6ACBCAC2025BA48DLL},{18446744073709551615UL,18446744073709551615UL,5UL,0x404768526442B10FLL,0xDC0D6ADA43843985LL,0UL},{0xA885720D01ECD15FLL,1UL,0x5CFA4E9B888434E6LL,0xF0718F2D4DAF52DCLL,0x6ACBCAC2025BA48DLL,5UL},{18446744073709551609UL,0xA885720D01ECD15FLL,0x5CFA4E9B888434E6LL,0x19FD15566241BCFCLL,18446744073709551615UL,0UL},{1UL,0x19FD15566241BCFCLL,5UL,1UL,0xA2717AB3040EE698LL,0x6ACBCAC2025BA48DLL},{1UL,0xA2717AB3040EE698LL,0x6ACBCAC2025BA48DLL,2UL,18446744073709551613UL,0xB2E9E3011E7260CFLL}}};
                    int i, j, k;
                    (**g_319) ^= l_1454;
                    (**g_319) = ((safe_sub_func_uint32_t_u_u(((*l_1424) >= ((l_1457[4][4][1] == ((void*)0 != &g_97[6])) , (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_152 = ((g_133 , (!(*l_1438))) > (l_1468 = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((g_1277[2][1].f3 & l_1467), 5)) > l_1467), 65531UL))))), l_1457[4][4][1])), 6)))), 0L)) || l_11.f2);
                    return l_11;
                }
                l_1470 = g_1469;
                if ((0x51L <= (safe_rshift_func_uint8_t_u_s((l_1473 & 0xEDBAL), (safe_unary_minus_func_int16_t_s((!(0x4230L == (((safe_add_func_int8_t_s_s((!((*l_1480) = ((l_1479 , l_1480) != (g_1481 = &g_163[0])))), l_1479.f4)) , (**g_1008)) == (*l_1437))))))))))
                { 
                    int16_t *l_1484 = &g_152;
                    uint32_t *l_1491 = &g_97[5];
                    const int32_t l_1492 = (-10L);
                    uint32_t *l_1493 = &g_136;
                    struct S0 l_1494[7] = {{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL},{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL},{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL},{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL},{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL},{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL},{1L,18446744073709551612UL,18446744073709551607UL,0x51753F06E407527ELL,8L,0x19E3L,255UL,0xDC0DL}};
                    int i;
                    (**g_1040) = ((9UL <= (((((*l_1493) ^= ((((safe_lshift_func_uint16_t_u_u(((((((g_133 = ((*l_1484) &= (*l_1424))) < (0x9029137F7046BA94LL | 0xAB1863F15278BA19LL)) , (***g_727)) == (void*)0) ^ (safe_lshift_func_uint16_t_u_u(((*g_177) = (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((((*l_1491) = (((((-1L) < 1UL) < 0L) && g_81) >= l_1467)) , l_1492), (*l_1424))) == (**g_609)), l_1467)) & (-9L)) & g_967)), l_11.f2))) >= 0x7EL), 15)) | l_1492) , (*l_1424)) > g_1119.f0)) ^ (*l_1438)) && 0xA23AE29FBD2A73D7LL) , 253UL)) >= (*l_1424));
                    return l_1494[4];
                }
                else
                { 
                    uint64_t *l_1500[1][5][3] = {{{&g_74[2][0][1],&g_74[2][0][1],&l_1479.f2},{&g_74[2][0][1],&l_1479.f2,&l_1479.f2},{&l_1479.f2,&g_1119.f2,(void*)0},{&g_74[2][0][1],&g_1119.f2,&g_74[2][0][1]},{&g_74[2][0][1],&l_1479.f2,(void*)0}}};
                    uint64_t *****l_1503 = &l_1502;
                    int32_t l_1507 = 0x4E7F57E8L;
                    int16_t **l_1508 = (void*)0;
                    int16_t *l_1510 = &g_967;
                    int16_t **l_1509 = &l_1510;
                    int i, j, k;
                    (**g_1040) = (safe_sub_func_uint16_t_u_u((((l_1497 , (*g_177)) , (--(*g_177))) & (((func_44(((*l_1424) ^= (**g_1008)), l_1501) , l_1400[2]) , ((*l_1503) = l_1502)) != l_1504)), (-5L)));
                    (***g_1039) &= ((~l_1507) ^ (0x9EC792FAD0300562LL || (l_1479.f2 , ((((*l_1509) = &g_967) == (l_1511 = &g_133)) & ((-1L) >= (8UL != l_1507))))));
                    return l_1512;
                }
            }
        }
        else
        { 
            uint64_t l_1546[1][3];
            const int32_t ** const l_1570 = &g_1412;
            int8_t l_1575[3][5][6];
            uint32_t l_1580 = 0x5BF59916L;
            uint32_t l_1581[2];
            struct S0 l_1600 = {-1L,0x2838DA4BE7C607DDLL,0xDA211F36CF48C81DLL,0x553D09D614BA806FLL,0xD5DCFEE2L,0xC13FL,0xD3L,65529UL};
            const uint64_t ***l_1601[3];
            int16_t *l_1602 = (void*)0;
            int16_t *l_1603 = &g_133;
            int32_t l_1604 = (-1L);
            int32_t l_1605 = 0x18E2708AL;
            int32_t l_1606 = 0L;
            int32_t l_1607 = (-1L);
            int32_t l_1609 = 8L;
            int32_t l_1613 = 0x50CB7734L;
            int32_t l_1615 = 0xAE834484L;
            int32_t l_1616 = 1L;
            int32_t l_1619 = 0L;
            int32_t l_1623 = 0L;
            int32_t l_1624 = (-1L);
            int32_t l_1625[4] = {1L,1L,1L,1L};
            int16_t l_1649[5] = {1L,1L,1L,1L,1L};
            uint64_t l_1682 = 18446744073709551612UL;
            int32_t **l_1686 = &g_577[0];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1546[i][j] = 0xC932EA9324A197BBLL;
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_1575[i][j][k] = 1L;
                }
            }
            for (i = 0; i < 2; i++)
                l_1581[i] = 18446744073709551615UL;
            for (i = 0; i < 3; i++)
                l_1601[i] = &g_830;
            for (l_1512.f4 = 0; (l_1512.f4 <= 5); l_1512.f4 += 1)
            { 
                uint32_t l_1513 = 18446744073709551611UL;
                int32_t l_1561 = 0x6AC1C8AEL;
                (*g_1117) = (void*)0;
                if (l_1513)
                    break;
                for (g_152 = 5; (g_152 >= 0); g_152 -= 1)
                { 
                    uint64_t l_1545 = 0x2DD852DA6017C558LL;
                    union U1 *l_1562 = &g_165;
                    int i;
                    (*g_84) |= (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((*g_177)--), (((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((*g_1481), (*g_1481))), 1)), l_1534)) <= (safe_div_func_int8_t_s_s(0L, (((*l_1424) ^= ((****g_607) > (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((safe_div_func_int8_t_s_s(((*g_1481) != (((**g_1040) &= ((safe_rshift_func_int8_t_s_s((g_602[1] | 1UL), l_1545)) , 0x4D9AA5A5L)) , g_1119.f0)), l_11.f1)) > 2UL) , (*g_1009)), 0x898404037FC2FBC5LL)), 3)))) & l_1546[0][2])))) , l_1513))), l_1513)), (-10L))) == l_1545) || 0xD528L), (**g_609))), 0L)), g_453.f2));
                    l_1561 ^= ((((safe_mod_func_uint8_t_u_u(((*g_504) , (safe_sub_func_uint16_t_u_u(l_1546[0][2], ((((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_11.f6 , (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((*l_1424) , ((1L <= ((safe_div_func_uint16_t_u_u(8UL, l_1400[2])) | 0xBFL)) | (*g_1481))), (*g_1481))) < (**g_1008)), (*g_1481)))), l_1546[0][2])), 0x2918L)) | 4L) , (-10L)) >= l_11.f1)))), l_1546[0][2])) , l_1545) <= (*l_1424)) && (-6L));
                    (*g_505) = l_1562;
                    (**g_1040) &= 0L;
                }
            }
            if ((((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((0x8272L <= (l_1569[2] != ((*g_1481) , l_1570))) & (**l_1570)), (safe_add_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((g_10 = (l_1575[0][0][0] = 0xA7L)), (g_1577 = (((0xABD51E4B76AEA1DELL >= l_1576) > 0x0318L) , (*l_1424))))) | g_1214[0][0]) || g_1119.f6), g_453.f0)))), (**l_1570))) == (**l_1570)), (*g_177))) , 18446744073709551611UL) , 0xBF6FF6ACL))
            { 
                int64_t ***l_1578[6][5] = {{&g_609,&g_609,&g_609,&g_609,&g_609},{&g_609,&g_609,&g_609,&g_609,&g_609},{(void*)0,&g_609,&g_609,&g_609,&g_609},{&g_609,&g_609,(void*)0,&g_609,&g_609},{&g_609,&g_609,&g_609,&g_609,&g_609},{(void*)0,&g_609,&g_609,&g_609,&g_609}};
                int i, j;
                l_1578[1][3] = (*l_1434);
                for (l_1497.f2 = 0; (l_1497.f2 <= 5); l_1497.f2 += 1)
                { 
                    return l_1579;
                }
            }
            else
            { 
                uint32_t l_1583 = 0x2610DCCBL;
                uint32_t *l_1589[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (****g_1038) &= ((l_1581[0] = l_1580) ^ (!(l_1583 > (((void*)0 == g_1584) < ((safe_sub_func_uint8_t_u_u((*g_1481), (*l_1424))) < (safe_add_func_uint32_t_u_u((g_97[5] = g_1119.f0), g_1277[2][1].f0)))))));
                return l_1512;
            }
            if (((safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_1598[1] == (l_1599 , (l_1600 , l_1601[1]))) , ((((*l_1603) = g_213[3]) , (*g_830)) == (void*)0)), (*g_177))), (**l_1570))), g_1277[2][1].f2)) <= (**l_1570)), (*g_1481))) > (**l_1570)))
            { 
                int64_t l_1610 = 0x01639BAB19A78D48LL;
                int32_t l_1621[7] = {0xB79F452AL,0xB79F452AL,0xB79F452AL,0xB79F452AL,0xB79F452AL,0xB79F452AL,0xB79F452AL};
                int16_t *l_1631 = &g_152;
                struct S0 l_1632 = {0L,0UL,18446744073709551607UL,0x5241EA5AAF8EF64ELL,0x522D6CE3L,0x3007L,9UL,0x9B98L};
                int i;
                ++l_1626;
                if ((g_1277[2][1].f0 & (safe_sub_func_int16_t_s_s(((*l_1631) |= ((*l_1603) = g_1277[2][1].f4)), g_1277[2][1].f3))))
                { 
                    return l_1632;
                }
                else
                { 
                    (**g_1040) = l_1632.f2;
                    l_1621[0] = l_1632.f0;
                    l_1633 = &l_1621[3];
                }
                for (l_1615 = 21; (l_1615 >= (-8)); --l_1615)
                { 
                    uint32_t l_1644 = 6UL;
                    uint16_t l_1645 = 9UL;
                    (*l_1424) = ((safe_mod_func_uint32_t_u_u(((((****g_1038) = (*g_84)) || (-5L)) , (0x3A22L | ((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_1644, l_1645)), (l_1621[3] != l_1646))) == (*g_177)) == l_1647), l_1648)) < 0x1C30L) || (**l_1570)) , (-1L)))), 0x21194AF5L)) , l_1649[0]);
                }
                (**g_1040) = 1L;
            }
            else
            { 
                uint32_t l_1676 = 0xF228D6C1L;
                int32_t l_1679 = 1L;
                int32_t l_1681 = (-5L);
                for (l_1615 = 0; (l_1615 <= 3); l_1615 += 1)
                { 
                    union U1 *** const **l_1662 = (void*)0;
                    union U1 *** const *l_1664 = (void*)0;
                    union U1 *** const **l_1663 = &l_1664;
                    int32_t l_1680 = 0xAA353D2DL;
                    int i;
                    (*g_319) = func_22(((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((--(*g_1481)), (((*l_1603) = (0x23L || ((safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_1625[l_1615], (safe_sub_func_uint64_t_u_u((l_1447[l_1615] || (((*l_1663) = &g_728[4]) != l_1665)), ((**g_1008) ^= (((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((*g_177) |= (safe_lshift_func_int8_t_s_u(l_1447[l_1615], 2))), 6)) == (((((0x33C54B14838F1C66LL == 1L) ^ l_1676) > l_1676) > (*l_1424)) & (*l_1633))), 0L)), (**l_1570))), 0x384060B9L)) > (*l_1633)) && 0xDBE1C243L)))))), l_1676)) , (*l_1424)))) != 0xD071L))), g_1677)) || l_1678[4]) > l_1676) <= (**l_1570)), g_453.f5);
                    (*g_319) = (***g_1043);
                    l_1682--;
                    (****g_1043) = ((*l_1424) ^ (**g_1008));
                }
            }
            (*l_1686) = l_1685;
            for (l_1501 = 0; (l_1501 <= 8); ++l_1501)
            { 
                int8_t l_1698 = 0xFEL;
                (*l_1424) = (safe_rshift_func_int8_t_s_s(((((g_1348[3] = &g_332) == (void*)0) <= 1UL) ^ (*g_177)), (safe_div_func_uint64_t_u_u((((*l_1685) = (((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(0x40L, 5)) > (+(((*g_177) <= l_1698) != g_828))), 0x644EL)) != g_453.f3) || (-1L))) & 0xC31FL), l_1699))));
            }
        }
        return g_1700;
    }
    for (g_226 = 7; (g_226 >= 14); g_226 = safe_add_func_int8_t_s_s(g_226, 2))
    { 
        (**g_1040) = (*g_84);
    }
    for (g_828 = 0; (g_828 != 27); g_828++)
    { 
        struct S0 l_1705 = {0xA8F20DCBL,18446744073709551613UL,0xB044500EDF9B2860LL,18446744073709551610UL,0xB8B88044L,0UL,0xD5L,65535UL};
        return l_1705;
    }
    return l_11;
}



static const int16_t  func_6(int8_t * p_7, const struct S0  p_8)
{ 
    int8_t *l_16 = &g_10;
    uint64_t *l_657 = &g_453.f2;
    int32_t l_658 = 1L;
    int64_t **l_670 = &g_610;
    int64_t *** const l_672[3][1][5] = {{{&l_670,&l_670,&l_670,&l_670,&l_670}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_670,&l_670,&l_670,&l_670,&l_670}}};
    int32_t l_695 = (-1L);
    int32_t l_696 = (-2L);
    int32_t l_699[7][6] = {{0xB901ABD4L,6L,0xB44983B2L,(-8L),3L,0xEE877BA8L},{(-8L),3L,0xEE877BA8L,0x2CD3D947L,3L,6L},{0x97CF3B80L,6L,(-1L),0xB901ABD4L,(-1L),6L},{(-4L),9L,0xEE877BA8L,0xED2ABC60L,0xB44983B2L,0xEE877BA8L},{(-4L),(-1L),0xB44983B2L,0xB901ABD4L,1L,3L},{0x97CF3B80L,(-1L),9L,0x2CD3D947L,0xB44983B2L,0xB44983B2L},{(-8L),9L,9L,(-8L),(-1L),3L}};
    int32_t *l_729 = (void*)0;
    uint64_t **l_799 = &l_657;
    uint64_t ***l_798 = &l_799;
    int32_t l_801 = (-9L);
    union U1 ***l_804 = &g_505;
    uint16_t **l_805 = (void*)0;
    const int32_t *l_838 = (void*)0;
    const int32_t **l_837 = &l_838;
    const int32_t ***l_836[6][7] = {{&l_837,&l_837,&l_837,&l_837,&l_837,&l_837,&l_837},{&l_837,&l_837,&l_837,&l_837,&l_837,&l_837,&l_837},{&l_837,&l_837,&l_837,&l_837,&l_837,&l_837,&l_837},{&l_837,&l_837,&l_837,&l_837,&l_837,&l_837,&l_837},{&l_837,&l_837,&l_837,&l_837,&l_837,&l_837,&l_837},{&l_837,&l_837,&l_837,&l_837,&l_837,&l_837,&l_837}};
    const int32_t **** const l_835 = &l_836[3][4];
    uint16_t l_889 = 0xAEEEL;
    union U1 l_895 = {0};
    int32_t l_896 = 0L;
    struct S0 *l_1004 = &g_453;
    uint8_t l_1032[6][3][4] = {{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}};
    uint64_t l_1070 = 0x44B5B4D8EA221875LL;
    int32_t *****l_1090 = (void*)0;
    const int32_t l_1122 = (-5L);
    uint16_t l_1131 = 1UL;
    int8_t **** const l_1156[6][7][1] = {{{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193}},{{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193}},{{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193}},{{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193}},{{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193}},{{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193},{&g_193}}};
    const int32_t l_1195 = 0x757C59BCL;
    uint8_t l_1260[1][3][7] = {{{7UL,0xC4L,0xC4L,7UL,0xC4L,0xC4L,7UL},{0x5CL,0x39L,0x5CL,0x5CL,0x39L,0x5CL,0x5CL},{7UL,7UL,1UL,7UL,7UL,1UL,7UL}}};
    uint64_t l_1275 = 1UL;
    int8_t l_1299 = 0x01L;
    int i, j, k;
    return p_8.f2;
}



static uint64_t  func_14(int8_t * p_15)
{ 
    uint64_t l_17[3];
    int8_t *l_21 = &g_10;
    int64_t *** const **l_617[4][4][3] = {{{(void*)0,&g_489,(void*)0},{(void*)0,&g_489,&g_489},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_489,&g_489}},{{(void*)0,&g_489,(void*)0},{(void*)0,&g_489,&g_489},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_489,&g_489}},{{(void*)0,&g_489,&g_489},{&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489}},{{&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489}}};
    int8_t **l_626 = (void*)0;
    int16_t l_627 = 0L;
    int32_t l_651[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_17[i] = 0x7E291920B2455F99LL;
    for (i = 0; i < 1; i++)
        l_651[i] = 0xEA6B1524L;
    for (g_10 = 2; (g_10 >= 0); g_10 -= 1)
    { 
        union U1 l_614[2] = {{0},{0}};
        int32_t *l_615 = (void*)0;
        int32_t *l_616 = &g_42;
        int64_t *** const **l_618 = &g_489;
        int i;
    }
    for (g_78 = 0; (g_78 > 22); g_78++)
    { 
        uint16_t l_641 = 0UL;
        int32_t l_643 = (-1L);
        int32_t l_652 = 7L;
        int32_t l_653[7] = {1L,1L,1L,1L,1L,1L,1L};
        int i;
        for (g_152 = 28; (g_152 != (-6)); --g_152)
        { 
            uint32_t l_632 = 4294967291UL;
            uint64_t *l_635 = &g_74[4][0][0];
            int32_t *l_642 = (void*)0;
            int32_t *l_644 = (void*)0;
            int32_t *l_645 = &g_453.f4;
            int32_t *l_646 = &g_42;
            int32_t *l_647 = &g_42;
            int32_t *l_648 = &l_643;
            int32_t *l_649 = &g_81;
            int32_t *l_650[5][7] = {{&g_81,(void*)0,(void*)0,&l_643,(void*)0,(void*)0,&l_643},{&g_78,&g_453.f4,&g_78,(void*)0,&l_643,&g_78,(void*)0},{&l_643,&g_453.f4,&g_78,(void*)0,&g_453.f4,(void*)0,&g_453.f4},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_78,&l_643},{(void*)0,&g_81,(void*)0,(void*)0,&l_643,(void*)0,(void*)0}};
            uint32_t l_654[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_654[i] = 0x0E57E5D7L;
            (*g_84) = 1L;
            l_641 = (~(((((((safe_add_func_int8_t_s_s(l_17[2], ((l_626 = &p_15) == (void*)0))) ^ (l_627 < ((g_487 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_632, (safe_mod_func_int64_t_s_s((((((-1L) == ((**g_319) = ((((*l_635)--) == (safe_div_func_uint8_t_u_u(((~l_627) , l_632), 1UL))) == 1UL))) , 6L) & 4294967295UL) < l_17[1]), g_213[5])))), 7))) , 0x7EEA0ADAE6EBE628LL))) <= l_632) == 0x2475DE2CL) | (*g_177)) , (void*)0) == (void*)0));
            l_654[0]++;
        }
    }
    return l_651[0];
}



static int8_t  func_18(uint64_t  p_19, int8_t * p_20)
{ 
    int64_t *l_29 = &g_30;
    int32_t l_31 = 0L;
    int32_t l_51 = 0x13A4B1F0L;
    uint32_t l_52[7][5] = {{0x3167647CL,18446744073709551608UL,0xDDA78404L,0x355A2C03L,0x355A2C03L},{0x8E11F317L,18446744073709551608UL,0x8E11F317L,0x2C08F497L,18446744073709551608UL},{0x355A2C03L,0UL,0x2C08F497L,0x355A2C03L,0x2C08F497L},{0x355A2C03L,0x355A2C03L,0xDDA78404L,18446744073709551608UL,0x3167647CL},{0x8E11F317L,0x3167647CL,0x2C08F497L,0x2C08F497L,0x3167647CL},{0x3167647CL,0UL,0x8E11F317L,0x3167647CL,0x2C08F497L},{18446744073709551608UL,0x3167647CL,0xDDA78404L,0x3167647CL,18446744073709551608UL}};
    const uint32_t l_599 = 4294967289UL;
    uint16_t *l_600 = (void*)0;
    uint16_t *l_601[7] = {&g_453.f7,&g_453.f7,&g_453.f7,&g_453.f7,&g_453.f7,&g_453.f7,&g_453.f7};
    int64_t **l_605 = &l_29;
    int64_t ***l_604[1][6][3] = {{{&l_605,&l_605,&l_605},{(void*)0,&l_605,(void*)0},{&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605},{(void*)0,&l_605,(void*)0}}};
    int64_t ****l_603 = &l_604[0][1][1];
    int64_t *****l_606 = &l_603;
    int32_t l_611 = 0xBF019CC4L;
    int i, j, k;
    (*g_319) = func_22((safe_mul_func_int16_t_s_s(8L, (safe_mod_func_int8_t_s_s(((-3L) != ((l_31 = ((*l_29) = g_10)) == ((func_32(func_36(p_20, g_10), func_44((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((-4L) & p_19), g_10)), l_51)), l_52[4][0]), l_51) > 0xF3L) <= p_19))), g_496)))), l_52[4][0]);
    l_31 = ((l_611 &= (safe_sub_func_int64_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_s((((((safe_mod_func_int64_t_s_s(((l_51 |= ((g_607 = ((*l_606) = ((safe_sub_func_uint16_t_u_u((g_602[1] &= (((--(*g_177)) , ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((+((safe_lshift_func_int16_t_s_s((-1L), 10)) != (g_136 || (safe_mod_func_int64_t_s_s(((((((((void*)0 != &g_97[6]) || p_19) | 0x770B79DBB3CD7EF4LL) < l_52[1][2]) ^ l_599) != p_19) || 8L), 0xEA9E8349339704DBLL))))), l_31)) <= (-6L)) , 0x17L), (*p_20))))) == l_52[4][0])) > p_19)), l_52[2][0])) , l_603))) == &g_608)) , p_19), l_31)) >= l_52[0][2]) != l_52[1][3]) == (-7L)) ^ (*p_20)), 4)) <= l_599)))) != p_19);
    l_31 = l_599;
    return (*p_20);
}



static int32_t * func_22(uint32_t  p_23, uint32_t  p_24)
{ 
    uint64_t l_501 = 0xD479F77945810430LL;
    union U1 **l_508 = &g_506;
    int32_t l_512 = 0L;
    int32_t l_522[6][3][1] = {{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}}};
    int32_t *l_578[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_578[i] = (void*)0;
    for (g_453.f6 = 5; (g_453.f6 == 9); g_453.f6++)
    { 
        const uint64_t **l_509 = (void*)0;
        int32_t l_510 = 1L;
        int32_t l_518 = (-7L);
        int32_t l_520 = 0x10ACCF1BL;
        int32_t l_523 = 0x6501F7D3L;
        int32_t l_529[6] = {0x9516115BL,0x9516115BL,7L,0x9516115BL,0x9516115BL,7L};
        int i;
        for (g_134 = (-6); (g_134 == (-14)); g_134 = safe_sub_func_uint16_t_u_u(g_134, 3))
        { 
            int8_t *l_502 = &g_226;
            union U1 ***l_507 = (void*)0;
            int32_t *l_511 = (void*)0;
            int32_t l_519 = 0x5F87F1B0L;
            int32_t l_521 = 0xB394CAC7L;
            int32_t l_524 = 0L;
            int32_t l_528[7][2] = {{6L,6L},{0xCBCAAB50L,6L},{6L,0xCBCAAB50L},{6L,6L},{0xCBCAAB50L,6L},{6L,0xCBCAAB50L},{6L,6L}};
            uint64_t l_530 = 18446744073709551610UL;
            int32_t l_569 = 1L;
            int i, j;
            l_512 = (l_510 = ((((*l_502) = l_501) ^ p_23) & ((((g_503 != (l_508 = g_505)) , l_509) == (void*)0) , (1UL | l_501))));
            for (g_78 = 0; (g_78 >= (-20)); g_78 = safe_sub_func_uint32_t_u_u(g_78, 3))
            { 
                int32_t l_525 = 0x23B3C51DL;
                int32_t l_526 = (-1L);
                int32_t l_527 = 8L;
                struct S0 l_572 = {1L,18446744073709551609UL,2UL,6UL,-5L,0x8166L,0x14L,65531UL};
                for (g_42 = 0; (g_42 >= 22); g_42++)
                { 
                    int32_t *l_517[5][2] = {{&g_81,&g_81},{&g_81,&l_510},{&l_510,(void*)0},{&l_510,(void*)0},{&l_510,&l_510}};
                    uint32_t *l_541 = &g_97[5];
                    int64_t l_560 = (-8L);
                    uint32_t l_561 = 1UL;
                    uint64_t *l_562 = &g_74[4][0][2];
                    int8_t l_563 = 3L;
                    uint8_t *l_566[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_566[i] = (void*)0;
                    --l_530;
                    l_512 &= ((0x5F6D063ED23AEFB7LL ^ ((*l_562) = ((+(+((safe_rshift_func_uint8_t_u_u(p_24, 3)) != ((safe_add_func_int32_t_s_s((g_213[1] & ((*l_541)--)), l_529[0])) > (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_23, 1)), ((safe_sub_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(0xA9CEL, (safe_mod_func_uint64_t_u_u(g_215[2], p_23)))) && l_520), l_522[4][2][0])) > p_24), 8)), 253UL)) < 0x12E18291L), l_560)) <= 1L))))))) <= l_561))) , l_563);
                    l_527 = ((((safe_sub_func_uint8_t_u_u((g_163[0] = 1UL), (safe_mul_func_uint16_t_u_u(l_569, (safe_div_func_uint32_t_u_u((l_572 , ((((((((safe_div_func_uint16_t_u_u(9UL, 0x732EL)) < ((safe_div_func_uint32_t_u_u(g_136, 5UL)) && p_24)) & l_510) < l_572.f0) , p_24) | 0xB4L) == p_24) , p_24)), 0x955E5BD7L)))))) , p_23) , (-1L)) <= p_24);
                    return g_577[0];
                }
                (*g_319) = &l_523;
            }
            (*g_503) = ((*l_508) = (*l_508));
            (*g_319) = &l_528[4][1];
        }
    }
    return l_578[2];
}



static const uint8_t  func_32(int8_t * p_33, union U1  p_34, uint32_t  p_35)
{ 
    int32_t *l_82 = &g_42;
    uint16_t *l_156 = &g_110;
    int8_t l_206 = 0xE1L;
    uint8_t *l_207 = &g_165.f1;
    const int64_t **l_210 = (void*)0;
    const int64_t *l_212 = &g_213[2];
    const int64_t **l_211[5][3][2] = {{{&l_212,&l_212},{&l_212,&l_212},{(void*)0,&l_212}},{{&l_212,&l_212},{(void*)0,&l_212},{&l_212,&l_212}},{{&l_212,&l_212},{(void*)0,&l_212},{(void*)0,&l_212}},{{&l_212,(void*)0},{&l_212,&l_212},{&l_212,(void*)0}},{{&l_212,&l_212},{(void*)0,&l_212},{&l_212,(void*)0}}};
    int32_t l_230[6] = {0x6B34544CL,0x6B34544CL,0x6B34544CL,0x6B34544CL,0x6B34544CL,0x6B34544CL};
    const struct S0 l_302 = {0L,0x648A997E5A0778CELL,0x83957207AB9D664DLL,0x65936964168314A8LL,4L,65533UL,0xB4L,0UL};
    uint32_t l_336 = 1UL;
    int32_t ****l_354 = &g_318[0][2][0];
    int64_t l_371 = (-5L);
    int64_t l_387 = (-5L);
    int32_t l_388[6][5] = {{0x7B5C6778L,0x147C340DL,0x3D1CE45BL,0x3D1CE45BL,0x147C340DL},{0x7B5C6778L,0x147C340DL,0x3D1CE45BL,0x3D1CE45BL,0x147C340DL},{0x7B5C6778L,0x147C340DL,0x3D1CE45BL,0x3D1CE45BL,0x147C340DL},{0x7B5C6778L,0x147C340DL,0x3D1CE45BL,0x3D1CE45BL,0x147C340DL},{0x7B5C6778L,0x147C340DL,0x3D1CE45BL,0x3D1CE45BL,0x147C340DL},{0x7B5C6778L,0x147C340DL,0x3D1CE45BL,0x3D1CE45BL,0x147C340DL}};
    int8_t l_390 = 0L;
    int8_t l_422 = 0x1FL;
    int64_t l_424 = 0xD0F2D0AB2C6D27BCLL;
    uint8_t l_425 = 1UL;
    int64_t *l_494 = (void*)0;
    int64_t **l_493 = &l_494;
    int64_t *** const l_492 = &l_493;
    int64_t *** const *l_491 = &l_492;
    int i, j, k;
    for (p_35 = 0; (p_35 <= 0); p_35 += 1)
    { 
        const int8_t l_86 = 0L;
        const int32_t l_126[5][3] = {{0x08A75D01L,0x08A75D01L,0x8D0130CBL},{0x08A75D01L,0x08A75D01L,0x8D0130CBL},{0x08A75D01L,0x08A75D01L,0x8D0130CBL},{0x08A75D01L,0x08A75D01L,0x8D0130CBL},{0x08A75D01L,0x08A75D01L,0x8D0130CBL}};
        int32_t l_139 = 0xF996E4E2L;
        int32_t l_153 = 0x791890F0L;
        int32_t **l_157 = &g_84;
        int32_t l_164 = 0L;
        uint16_t **l_178 = (void*)0;
        int8_t **l_195 = (void*)0;
        int8_t ***l_194 = &l_195;
        int i, j;
        for (g_54 = 0; (g_54 <= 0); g_54 += 1)
        { 
            uint32_t l_85 = 18446744073709551606UL;
            int32_t *l_107 = &g_42;
            for (g_42 = 0; (g_42 <= 0); g_42 += 1)
            { 
                int32_t **l_83[6][4][5] = {{{&l_82,&l_82,&l_82,&l_82,(void*)0},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,(void*)0,&l_82,&l_82,&l_82},{&l_82,&l_82,(void*)0,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,(void*)0,&l_82},{&l_82,&l_82,&l_82,&l_82,(void*)0},{&l_82,&l_82,&l_82,&l_82,&l_82}},{{&l_82,(void*)0,&l_82,&l_82,&l_82},{&l_82,&l_82,(void*)0,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82}},{{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,&l_82,&l_82,(void*)0,&l_82}},{{&l_82,&l_82,&l_82,&l_82,(void*)0},{&l_82,&l_82,&l_82,&l_82,&l_82},{&l_82,(void*)0,&l_82,&l_82,&l_82},{&l_82,&l_82,(void*)0,&l_82,&l_82}}};
                uint64_t l_135[1][2][2] = {{{0x47F7C8792F5982E8LL,0x47F7C8792F5982E8LL},{0x47F7C8792F5982E8LL,0x47F7C8792F5982E8LL}}};
                int i, j, k;
                for (g_78 = 0; (g_78 >= 0); g_78 -= 1)
                { 
                    uint16_t l_79[2][3] = {{1UL,1UL,1UL},{0x0820L,0x0820L,0x0820L}};
                    int32_t *l_80 = &g_81;
                    int i, j;
                    (*l_80) ^= l_79[0][0];
                }
                g_84 = l_82;
                if (l_85)
                { 
                    return l_86;
                }
                else
                { 
                    int32_t *l_94 = (void*)0;
                    uint32_t *l_95 = (void*)0;
                    uint32_t *l_96[4] = {&g_97[5],&g_97[5],&g_97[5],&g_97[5]};
                    int32_t l_100[4][7] = {{0L,0x34EF3EF0L,0L,0L,0x34EF3EF0L,0L,0L},{0x34EF3EF0L,0x34EF3EF0L,6L,0x34EF3EF0L,0x34EF3EF0L,6L,0x34EF3EF0L},{0x34EF3EF0L,0L,0L,0x34EF3EF0L,0L,0L,0x34EF3EF0L},{0L,0x34EF3EF0L,0L,0L,0x34EF3EF0L,0L,0L}};
                    uint16_t *l_108 = (void*)0;
                    uint16_t *l_109 = &g_110;
                    int16_t *l_132 = &g_133;
                    struct S0 l_144[7] = {{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL},{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL},{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL},{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL},{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL},{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL},{0x0054F3BAL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x40F3B8A4L,0x4C43L,250UL,0x66DCL}};
                    int16_t *l_151 = &g_152;
                    int i, j, k;
                    g_78 |= (safe_unary_minus_func_uint64_t_u((g_74[(p_35 + 4)][g_54][g_54] |= ((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((&g_42 == (l_94 = l_82)), (--g_97[3]))) > l_100[2][5]), 0UL)), 5)) != (0xB5FE41CD94991403LL | (safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((l_85 <= (safe_mod_func_int32_t_s_s(l_100[2][2], l_86))), g_42)) || p_35) != 0x99L), 12)))))));
                    g_136 |= (((((((l_107 == &g_81) != ((*l_109) = 4UL)) , (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_int16_t_s(p_35)) & (l_135[0][0][1] = ((((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u((g_134 = (safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(l_126[3][0], (~((safe_add_func_uint64_t_u_u(g_78, (safe_rshift_func_int16_t_s_u(((*l_132) = (l_82 == &g_81)), p_35)))) , 0x7421FA51574812A8LL)))) ^ (-4L)), 0UL))), 0x21L)) & 255UL) <= 0x64L) ^ g_81), l_126[0][0])), p_35)) <= p_35) , (void*)0) != l_132))) | g_74[2][0][1]), 0)) || 0x3C0FL), 5L)) >= (*g_84)) >= p_35)) > 0UL) & g_78) > (-10L)) >= 18446744073709551615UL);
                    l_153 = (0x75E0FD25L > (l_100[2][5] &= ((((safe_rshift_func_int16_t_s_s(((*l_132) = (*l_82)), 4)) > (++g_97[5])) > (safe_mul_func_uint16_t_u_u((l_139 |= (l_144[4] , ((safe_rshift_func_uint16_t_u_s((9L & p_35), ((*l_151) = ((safe_mul_func_int8_t_s_s(0xE1L, (safe_add_func_int8_t_s_s(g_74[1][0][0], g_74[2][0][1])))) >= g_74[0][0][1])))) , l_126[3][2]))), g_110))) & g_134)));
                    g_78 = ((*l_82) || g_152);
                    if ((*g_84))
                        continue;
                }
                if ((*g_84))
                    break;
                for (l_139 = 0; (l_139 <= 22); l_139 = safe_add_func_int64_t_s_s(l_139, 5))
                { 
                    return p_35;
                }
            }
            if (((((*l_107) < (((l_86 > g_97[1]) , l_156) != (void*)0)) != ((void*)0 == l_157)) ^ p_35))
            { 
                uint8_t *l_160 = (void*)0;
                uint8_t *l_161 = (void*)0;
                uint8_t *l_162[3][5][5] = {{{&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],(void*)0},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],(void*)0,&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],(void*)0}},{{&g_163[0],(void*)0,&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],(void*)0},{(void*)0,&g_163[0],&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],(void*)0,&g_163[0]}},{{&g_163[0],&g_163[0],&g_163[0],&g_163[0],(void*)0},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],(void*)0,&g_163[0],&g_163[0],&g_163[0]},{&g_163[0],&g_163[0],&g_163[0],(void*)0,&g_163[0]}}};
                int32_t l_166 = 0xBF4AD526L;
                int i, j, k;
                if ((*g_84))
                    break;
                l_166 = (safe_sub_func_uint8_t_u_u((l_164 = 0x3BL), (g_165 , (*l_82))));
            }
            else
            { 
                int32_t *l_174 = &g_81;
                uint16_t *l_184 = &g_110;
                for (l_139 = 20; (l_139 > 15); l_139 = safe_sub_func_uint8_t_u_u(l_139, 7))
                { 
                    int8_t *l_171 = &g_10;
                    int8_t **l_170 = &l_171;
                    int8_t ***l_169 = &l_170;
                    (*l_169) = &p_33;
                }
                (*g_84) &= p_35;
                if ((safe_sub_func_int8_t_s_s(0xF7L, 6L)))
                { 
                    const uint8_t l_175 = 0UL;
                    (*l_157) = (*l_157);
                    (*l_157) = l_174;
                    if (p_35)
                        continue;
                    if (l_175)
                        break;
                    l_178 = g_176[0];
                }
                else
                { 
                    union U1 l_183 = {0};
                    uint32_t *l_196 = &g_97[5];
                    uint8_t *l_197 = (void*)0;
                    uint8_t *l_198 = (void*)0;
                    uint8_t *l_199 = &g_165.f1;
                    int32_t *l_200[3][4][4];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_200[i][j][k] = &l_139;
                        }
                    }
                    l_139 |= (((safe_lshift_func_uint8_t_u_s(0UL, 1)) || (safe_mul_func_int16_t_s_s((l_183 , ((void*)0 == l_184)), (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((*l_199) = (g_163[0] = (((*l_196) &= (safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((*l_82), (g_193 == l_194))), (*g_84)))) && 0x2F718E48L))) >= 0xBCL), 255UL)), 5L))))) <= g_54);
                    if (p_35)
                        continue;
                    return p_35;
                }
            }
        }
    }
lbl_488:
    (*l_82) = (g_78 || (8L | ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u(l_206, (*l_82))))), (((*l_207) = p_35) <= ((safe_add_func_uint64_t_u_u((*l_82), ((g_214[1][1][2] = (void*)0) != (void*)0))) < g_74[2][0][1])))) > (*g_84))));
    for (g_134 = 1; (g_134 <= 6); g_134 += 1)
    { 
        uint16_t *l_218 = &g_110;
        int32_t l_236 = 0x55B6F9C3L;
        int32_t l_237 = 0L;
        int32_t l_240 = 0xD78F5A50L;
        uint16_t l_243 = 65533UL;
        struct S0 l_247[3][3] = {{{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L},{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L},{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L}},{{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L},{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L},{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L}},{{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L},{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L},{-5L,0x5833043BC25FB43ALL,0x6F8DD8E098A7AC5CLL,0x14288EAD5827ACBCLL,-1L,65533UL,7UL,0x3279L}}};
        int64_t *l_304 = &g_54;
        int64_t * const *l_303 = &l_304;
        int8_t l_356 = 0x69L;
        int32_t l_359[3];
        uint32_t l_368 = 18446744073709551609UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_359[i] = (-4L);
        if ((((*l_82) = ((*l_156) = ((safe_lshift_func_uint16_t_u_u(0x96A6L, 1)) == (g_97[g_134] > ((void*)0 == l_218))))) & p_35))
        { 
            (*g_84) = p_35;
            if (p_35)
                break;
        }
        else
        { 
            int32_t l_238[4][5][5] = {{{1L,(-1L),0x4C40A8F4L,(-7L),(-1L)},{0x4C40A8F4L,0x889F105CL,0xAC3371ACL,(-1L),(-1L)},{(-6L),4L,(-6L),0xA852904BL,(-7L)},{4L,0xA852904BL,6L,0x586E6551L,0x42C4B808L},{(-4L),0xB5224E52L,1L,0xC6049207L,6L}},{{0xF0ACE29FL,0L,6L,0x42C4B808L,0xAC3371ACL},{(-1L),0xF0ACE29FL,(-6L),(-4L),0x586E6551L},{(-4L),(-10L),0xAC3371ACL,9L,1L},{(-4L),0x4C40A8F4L,0x4C40A8F4L,(-4L),0xB5224E52L},{(-1L),0xC6049207L,4L,0L,1L}},{{0xF0ACE29FL,(-10L),(-4L),6L,(-4L)},{(-4L),1L,0x889F105CL,0L,0xC6049207L},{4L,0x586E6551L,0L,(-4L),(-7L)},{0xFA0F4181L,(-10L),1L,(-9L),6L},{0L,(-10L),0x889F105CL,(-10L),0L}},{{9L,1L,(-7L),0xC6049207L,0x6BBE5663L},{0x42C4B808L,0xA852904BL,1L,(-4L),1L},{(-1L),0xAC3371ACL,4L,1L,0x6BBE5663L},{0L,(-4L),(-9L),0xB5224E52L,0L},{0x6BBE5663L,0L,0x586E6551L,1L,6L}}};
            int32_t l_241 = 9L;
            int i, j, k;
            for (g_152 = 0; (g_152 <= 0); g_152 += 1)
            { 
                int32_t *l_228 = (void*)0;
                int32_t l_233 = 0x66F46DC2L;
                int32_t l_234 = 0xCDFA98FEL;
                int32_t l_235 = 0x172C5786L;
                int32_t l_239 = 3L;
                if (((((safe_lshift_func_uint16_t_u_u(((*l_156) = 0UL), 7)) | (+(0x9B034DBD4EC956ACLL < 18446744073709551614UL))) ^ ((safe_sub_func_uint32_t_u_u(0x4DEB0707L, g_213[2])) ^ (safe_div_func_uint8_t_u_u(p_35, 0xAFL)))) , (*g_84)))
                { 
                    int32_t l_227[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_227[i] = 0x425E7FC4L;
                    (*l_82) = (p_35 , (*l_82));
                    if ((*g_84))
                        break;
                    (*g_84) |= (g_226 ^ l_227[2]);
                }
                else
                { 
                    int32_t **l_229 = &l_228;
                    (*l_229) = l_228;
                }
                if ((*g_84))
                    break;
                for (g_136 = 0; (g_136 <= 1); g_136 += 1)
                { 
                    return p_35;
                }
                if (g_97[g_134])
                    break;
                for (g_133 = 1; (g_133 >= 0); g_133 -= 1)
                { 
                    uint32_t l_231 = 0x676FA98CL;
                    int32_t *l_232[7][2][3] = {{{&g_78,&l_230[5],&g_81},{&g_42,&g_42,(void*)0}},{{&g_78,(void*)0,&l_230[5]},{&l_230[5],(void*)0,&g_78}},{{(void*)0,&g_42,&g_42},{&g_81,&l_230[5],&g_78}},{{&g_78,(void*)0,&l_230[5]},{&g_78,&g_42,(void*)0}},{{&g_81,&g_81,&g_81},{(void*)0,&g_42,&g_78}},{{&l_230[5],(void*)0,&g_78},{&g_78,&l_230[5],&g_81}},{{&g_42,&g_42,(void*)0},{&g_78,(void*)0,&l_230[5]}}};
                    int32_t l_242 = 0x1E72512AL;
                    uint16_t ***l_246 = &g_176[0];
                    uint32_t *l_249 = &g_97[5];
                    uint32_t *l_252[5][7] = {{&l_231,(void*)0,&g_136,&g_136,(void*)0,&l_231,&g_136},{&l_231,&l_231,&l_231,&l_231,(void*)0,&l_231,&l_231},{&l_231,&g_136,&l_231,(void*)0,&l_231,&g_136,&l_231},{&g_136,&l_231,&g_136,&l_231,&l_231,&g_136,&l_231},{&l_231,(void*)0,&l_231,&l_231,&l_231,&l_231,(void*)0}};
                    int i, j, k;
                    l_231 |= l_230[5];
                    --l_243;
                    if ((*g_84))
                        continue;
                    (*l_246) = &g_177;
                    (*g_84) = ((l_247[1][2] , (~((void*)0 != &g_213[4]))) | ((((*l_249)++) & (++g_136)) , ((safe_mul_func_int8_t_s_s(((0xDBF72F53L > (*l_82)) & ((0xD4AEB905L && (((safe_mod_func_int64_t_s_s((g_81 , p_35), p_35)) , &l_228) == &l_232[4][1][2])) && 1L)), 0x58L)) || (*l_82))));
                }
            }
        }
        for (g_226 = 0; (g_226 <= 1); g_226 += 1)
        { 
            uint8_t *l_294 = &g_165.f1;
            uint8_t *l_295 = &g_163[0];
            int32_t l_296 = 0x542C8543L;
            int16_t *l_297 = &g_152;
            uint16_t *l_311 = &l_243;
            (*g_84) = ((((((((*l_156) = (safe_lshift_func_int8_t_s_u(((+(safe_div_func_uint32_t_u_u((+((*l_297) = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((*l_82), 8)), 15)), (safe_sub_func_uint32_t_u_u(l_247[1][2].f0, p_35)))), (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((!((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_207) = ((*l_295) ^= (((safe_mul_func_uint16_t_u_u((*l_82), (safe_mod_func_int32_t_s_s(0xCCF4FE8CL, (0x120D9452L && (((p_35 && 7UL) >= (*g_84)) , (*g_84))))))) , 0xFCEAAE32L) > (*g_84)))), 6)), 0xFB65L)) & 0x65DFEDC4L) & p_35) | 0L) != p_35) <= g_97[5]), l_247[1][2].f2)), l_247[1][2].f1)) != (*l_82))), 2)) & p_35) < l_247[1][2].f4), 10)), l_296)))) || l_243))), 4294967295UL))) == g_54), 1))) > p_35) != p_35) , &g_84) == (void*)0) < 251UL) <= l_236);
            if (p_35)
                continue;
            (*l_82) &= 0x7F866CF3L;
            for (g_136 = 0; (g_136 <= 1); g_136 += 1)
            { 
                uint16_t *l_310 = &l_243;
                int32_t l_314 = 1L;
                int32_t **l_316 = &g_84;
                int32_t ***l_315 = &l_316;
                for (g_110 = 0; (g_110 <= 1); g_110 += 1)
                { 
                    uint16_t *l_305[4][3][1] = {{{&g_110},{&l_243},{&g_110}},{{&g_110},{&l_243},{&g_110}},{{&g_110},{&l_243},{&g_110}},{{&g_110},{&l_243},{&g_110}}};
                    int32_t l_306[2];
                    int32_t l_307[3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_306[i] = 0x834BDD62L;
                    for (i = 0; i < 3; i++)
                        l_307[i] = 0xA08A2A92L;
                    (*g_84) = (safe_add_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(((0xBBL ^ ((l_302 , ((void*)0 == l_303)) >= ((((void*)0 == l_305[2][1][0]) > (0xC0L >= l_306[1])) == p_35))) , l_307[0]), 1UL)) == (*l_82)), 0x6BFF306726C21DDFLL));
                }
                (*g_84) = (safe_mod_func_int8_t_s_s(((l_311 = l_310) != l_310), ((g_165 , (safe_lshift_func_uint8_t_u_u(p_35, 6))) , ((*l_207) = g_163[0]))));
                if (l_296)
                    continue;
                if (l_314)
                    continue;
                for (g_78 = 1; (g_78 >= 0); g_78 -= 1)
                { 
                    int32_t ****l_317[2][7][7] = {{{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315}},{{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315},{&l_315,&l_315,&l_315,&l_315,&l_315,&l_315,&l_315}}};
                    int i, j, k;
                    g_318[0][2][0] = l_315;
                }
            }
        }
        for (g_152 = 0; (g_152 <= 1); g_152 += 1)
        { 
            int64_t **l_321 = &l_304;
            int64_t ***l_320 = &l_321;
            uint32_t *l_326 = &g_327;
            int32_t ****l_331 = &g_318[2][5][3];
            int32_t *****l_330[6] = {(void*)0,(void*)0,&l_331,(void*)0,(void*)0,&l_331};
            union U1 * const l_339 = &g_165;
            uint64_t l_342 = 0xA0C366FA33A6990FLL;
            const int8_t l_407 = 0L;
            int i;
            l_303 = ((*l_320) = &l_304);
            if (((((safe_mul_func_uint16_t_u_u((((*l_326) = 0xC446DE64L) , (((**l_320) = &g_54) == &g_213[2])), (safe_rshift_func_uint8_t_u_s(((*l_207) = 8UL), 1)))) , (&g_318[3][1][3] == (g_332 = &g_318[0][0][3]))) & (((safe_rshift_func_int16_t_s_s(g_81, g_163[0])) , g_97[g_134]) <= (*g_177))) < p_35))
            { 
                int32_t *l_335[5][6] = {{&l_230[2],&l_230[5],&l_237,&g_78,&l_240,&l_240},{&l_230[5],&l_230[2],&l_230[2],&l_230[5],&l_240,&l_240},{&g_78,&l_240,&l_237,&g_81,&g_78,&g_81},{&l_240,&l_240,&l_240,&g_78,&g_78,&l_230[2]},{&l_237,&l_240,&g_78,&l_240,&l_240,&g_78}};
                uint64_t *l_345 = &l_342;
                int32_t ****l_355 = &g_318[4][1][3];
                uint64_t l_360 = 18446744073709551607UL;
                int i, j;
                for (g_54 = 0; (g_54 <= 1); g_54 += 1)
                { 
                    (*g_319) = l_335[1][2];
                    l_336--;
                    l_335[2][0] = l_335[4][4];
                }
                for (g_226 = 1; (g_226 >= 0); g_226 -= 1)
                { 
                    union U1 *l_341 = &g_165;
                    union U1 **l_340 = &l_341;
                    int i, j, k;
                    (*l_340) = l_339;
                    (*l_82) = l_342;
                }
                (*l_82) ^= (l_237 , p_35);
                for (l_342 = 0; (l_342 <= 1); l_342 += 1)
                { 
                    if (p_35)
                        break;
                    if (p_35)
                        break;
                    return g_74[6][0][1];
                }
                if ((safe_mod_func_uint64_t_u_u(((*l_345) = p_35), ((p_34 , 0x9272L) , (func_44(((safe_rshift_func_uint16_t_u_u(3UL, 6)) && (((void*)0 != l_156) != (((*l_82) |= (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((l_247[1][2].f1 < l_240), 0x76F03E3EL)) < l_247[1][2].f7), 15))) <= 0xC04C170DL))), p_35) , g_152)))))
                { 
                    l_236 ^= (*l_82);
                    l_356 ^= (p_35 || (&g_318[0][2][0] == (l_355 = (l_354 = (g_332 = &g_318[3][5][2])))));
                }
                else
                { 
                    int8_t l_357 = 1L;
                    int32_t l_358[1][4] = {{1L,1L,1L,1L}};
                    int i, j;
                    (*l_82) = p_35;
                    ++l_360;
                }
            }
            else
            { 
                int32_t l_369[7][7][2] = {{{1L,9L},{(-8L),1L},{0xF36EF52DL,0xF36EF52DL},{0xEFD52D6AL,(-1L)},{1L,0x233384A0L},{1L,0x00BA0075L},{0x8894FF6EL,1L}},{{0x40EDFFC6L,0xF36EF52DL},{0x40EDFFC6L,1L},{0x8894FF6EL,0x00BA0075L},{1L,0x233384A0L},{1L,(-1L)},{0xEFD52D6AL,0xF36EF52DL},{0xF36EF52DL,1L}},{{(-8L),9L},{1L,0xFE8A7A93L},{0x14D1C14EL,0L},{0x47FC8334L,0xF36EF52DL},{0L,1L},{2L,0L},{1L,0L}},{{2L,1L},{0L,0xF36EF52DL},{0x47FC8334L,0L},{0x14D1C14EL,0xFE8A7A93L},{1L,9L},{(-8L),1L},{0xF36EF52DL,0xF36EF52DL}},{{0xEFD52D6AL,(-1L)},{1L,0x233384A0L},{1L,0x00BA0075L},{0x8894FF6EL,1L},{0x40EDFFC6L,0xF36EF52DL},{0x40EDFFC6L,1L},{0x8894FF6EL,0x00BA0075L}},{{1L,0x233384A0L},{1L,(-1L)},{0xEFD52D6AL,0xF36EF52DL},{0xF36EF52DL,1L},{(-8L),9L},{1L,0xFE8A7A93L},{0x14D1C14EL,0L}},{{0x47FC8334L,0xF36EF52DL},{0L,1L},{2L,0L},{1L,0L},{2L,1L},{0L,0xF36EF52DL},{0x47FC8334L,0L}}};
                int32_t l_372 = 0xD22CCE88L;
                int32_t l_373 = (-10L);
                int32_t l_374 = 0x95477D9DL;
                int32_t l_375 = 0x31048B9CL;
                int32_t l_376[5][5] = {{0L,(-3L),0L,0L,0L},{0L,(-3L),0L,0L,0L},{0L,(-3L),0L,0L,0L},{0L,(-3L),0L,0L,0L},{6L,6L,6L,0L,0L}};
                uint8_t l_391 = 0x68L;
                int64_t * const **l_394 = (void*)0;
                uint8_t l_399 = 0xCBL;
                int32_t *l_402 = &l_237;
                const int32_t *l_406 = &l_374;
                const int32_t **l_405 = &l_406;
                const int32_t ***l_404 = &l_405;
                int i, j, k;
                if (((safe_mul_func_int32_t_s_s(((((*l_82) = (((safe_lshift_func_int8_t_s_u(8L, 2)) <= (*l_82)) , (!l_368))) && g_136) ^ ((*l_207) = l_369[2][0][1])), ((((l_240 | (g_152 <= 0x21L)) , p_35) , (*g_319)) != (void*)0))) ^ (-1L)))
                { 
                    int16_t l_370 = 0x77EDL;
                    int32_t l_377 = (-1L);
                    int32_t l_378 = 0x0B189075L;
                    int32_t l_379 = (-2L);
                    int32_t l_380 = (-3L);
                    int32_t l_381 = (-1L);
                    int32_t l_382 = 0xFCC7E63AL;
                    int32_t l_383 = 0x0F0EF7A1L;
                    int32_t l_384 = 8L;
                    int32_t l_385 = 0x11C583FDL;
                    int32_t l_386[7] = {0x40E2B816L,0x40E2B816L,0x40E2B816L,0x40E2B816L,0x40E2B816L,0x40E2B816L,0x40E2B816L};
                    int16_t l_389 = 7L;
                    int i;
                    l_391--;
                }
                else
                { 
                    int16_t l_395 = 0L;
                    int32_t l_396 = (-1L);
                    int32_t l_397 = 0x684E1554L;
                    int32_t l_398 = (-2L);
                    l_394 = &l_303;
                    --l_399;
                    l_402 = ((*g_319) = &l_240);
                    return g_403;
                }
                if ((&l_304 == (void*)0))
                { 
                    return l_247[1][2].f1;
                }
                else
                { 
                    (*l_402) = (*l_82);
                    (*l_82) = (((void*)0 != l_404) ^ 5UL);
                    return g_133;
                }
            }
            return l_407;
        }
    }
lbl_495:
    for (g_327 = (-26); (g_327 <= 51); ++g_327)
    { 
        int32_t *l_410 = (void*)0;
        int32_t *l_411 = (void*)0;
        int32_t *l_412 = &l_388[2][3];
        int32_t *l_413 = (void*)0;
        int32_t *l_414 = &g_42;
        int32_t *l_415 = &l_388[2][4];
        int32_t *l_416 = &g_78;
        int32_t *l_417 = &l_388[5][2];
        int32_t *l_418 = &l_230[2];
        int32_t *l_419 = &g_78;
        int32_t *l_420 = (void*)0;
        int32_t *l_421[3];
        int64_t l_423 = 0x86EEA1ED51C45611LL;
        int i;
        for (i = 0; i < 3; i++)
            l_421[i] = &l_230[4];
        l_425--;
    }
    for (l_387 = (-24); (l_387 >= 22); l_387 = safe_add_func_uint16_t_u_u(l_387, 2))
    { 
        int32_t *l_450 = &l_388[0][2];
        int16_t l_464 = 1L;
        for (g_134 = 0; (g_134 != 16); g_134 = safe_add_func_int64_t_s_s(g_134, 8))
        { 
            const uint8_t l_435 = 1UL;
            int32_t l_440 = 0L;
            int16_t l_465 = 0x8B14L;
            int64_t *** const **l_490[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_490[i][j] = (void*)0;
            }
            for (l_371 = 0; (l_371 == (-20)); l_371 = safe_sub_func_uint8_t_u_u(l_371, 3))
            { 
                const int32_t *l_434 = &l_388[5][0];
                l_434 = (void*)0;
                return l_435;
            }
            for (l_206 = 18; (l_206 < 24); ++l_206)
            { 
                uint32_t l_441 = 0x41AD4BFCL;
                struct S0 l_444 = {0x694D4324L,0UL,0x9F167075A1203385LL,1UL,0x7AB7FAC2L,1UL,246UL,0xC01FL};
                uint64_t *l_446 = &g_74[3][0][1];
                uint64_t **l_445 = &l_446;
                int32_t l_471 = (-1L);
                for (g_42 = 0; (g_42 > (-8)); --g_42)
                { 
                    uint64_t ***l_447 = &l_445;
                    uint64_t **l_449 = &l_446;
                    uint64_t ***l_448 = &l_449;
                    l_440 = p_35;
                    l_441++;
                    (*l_448) = (((l_302 , p_35) && (-1L)) , (l_444 , ((*l_447) = l_445)));
                }
                (*g_319) = l_450;
                if (((safe_lshift_func_uint16_t_u_u(((*l_450) > g_403), (l_465 = (g_453 , ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(l_444.f2, (p_35 >= (safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((p_34 , l_464), g_213[4])) , (*l_450)) , p_35), 0L))))) , g_327), 3)), 0)) <= 0xDA6B83A7L))))) < l_435))
                { 
                    int32_t *l_466 = &l_230[5];
                    int32_t *l_467 = &l_444.f4;
                    int32_t *l_468 = &l_444.f4;
                    int32_t *l_469 = &l_444.f4;
                    int32_t *l_470[3];
                    uint16_t l_472 = 65535UL;
                    struct S0 l_479 = {0x3A1B7DA3L,5UL,0x4BD8BC8AD2DD164FLL,0xD14B5A26D39025D5LL,1L,0xF02EL,0xCDL,0x8AE6L};
                    int8_t *l_486 = &g_226;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_470[i] = &l_388[0][2];
                    l_472--;
                    (*l_469) &= ((*l_82) = ((g_487 = (safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((0x769F3E77L & (l_479 , (safe_div_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((g_165 , ((void*)0 == &g_163[0])), (safe_div_func_int8_t_s_s(((*l_486) = (*l_82)), (((p_35 > p_35) || 0x61C0L) ^ 4UL))))) <= l_441), (*l_82))))), (*l_450))), g_152))) & 4294967290UL));
                    if (p_35)
                        continue;
                    (*g_319) = &l_471;
                }
                else
                { 
                    if (g_453.f1)
                        goto lbl_488;
                    return p_35;
                }
            }
            l_491 = g_489;
            if (l_371)
                goto lbl_495;
        }
        (*l_82) |= 0xEDCE5DA9L;
    }
    return p_35;
}



static int8_t * func_36(int8_t * p_37, uint32_t  p_38)
{ 
    int32_t *l_41 = &g_42;
    int8_t *l_43 = (void*)0;
    for (p_38 = 0; (p_38 != 20); p_38 = safe_add_func_int64_t_s_s(p_38, 5))
    { 
        return p_37;
    }
    (*l_41) |= (-6L);
    return l_43;
}



static union U1  func_44(uint64_t  p_45, uint16_t  p_46)
{ 
    int64_t *l_53 = &g_54;
    int32_t l_59 = 0x1BA05761L;
    union U1 l_70 = {0};
    uint32_t l_71 = 0x15DBE4B2L;
    int32_t *l_72 = &l_59;
    int32_t *l_73[4][7] = {{&l_59,&l_59,&l_59,&l_59,&l_59,&l_59,&l_59},{(void*)0,&l_59,&l_59,(void*)0,&l_59,&l_59,&l_59},{&l_59,&l_59,&l_59,&l_59,&l_59,(void*)0,(void*)0},{(void*)0,(void*)0,&l_59,&l_59,&l_59,&l_59,&l_59}};
    union U1 l_77 = {0};
    int i, j;
    (*l_72) = ((((*l_53) = 0x7913DA513E67DCAFLL) != (((p_45 && (((safe_add_func_int8_t_s_s((l_59 == ((safe_add_func_int16_t_s_s(l_59, ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((g_10 , (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((((l_59 , (l_70 , l_59)) == 1L) && p_45) > 18446744073709551615UL) , p_46), p_45)), 0x4C66L))), l_59)), g_10)) , 0x6FFBL))) , g_10)), l_71)) != l_71) < p_46)) & p_45) > g_10)) && 0xC4L);
    --g_74[2][0][1];
    return l_77;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_74[i][j][k], "g_74[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_213[i], "g_213[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_215[i], "g_215[i]", print_hash_value);

    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_453.f0, "g_453.f0", print_hash_value);
    transparent_crc(g_453.f1, "g_453.f1", print_hash_value);
    transparent_crc(g_453.f2, "g_453.f2", print_hash_value);
    transparent_crc(g_453.f3, "g_453.f3", print_hash_value);
    transparent_crc(g_453.f4, "g_453.f4", print_hash_value);
    transparent_crc(g_453.f5, "g_453.f5", print_hash_value);
    transparent_crc(g_453.f6, "g_453.f6", print_hash_value);
    transparent_crc(g_453.f7, "g_453.f7", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_602[i], "g_602[i]", print_hash_value);

    }
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1119.f0, "g_1119.f0", print_hash_value);
    transparent_crc(g_1119.f1, "g_1119.f1", print_hash_value);
    transparent_crc(g_1119.f2, "g_1119.f2", print_hash_value);
    transparent_crc(g_1119.f3, "g_1119.f3", print_hash_value);
    transparent_crc(g_1119.f4, "g_1119.f4", print_hash_value);
    transparent_crc(g_1119.f5, "g_1119.f5", print_hash_value);
    transparent_crc(g_1119.f6, "g_1119.f6", print_hash_value);
    transparent_crc(g_1119.f7, "g_1119.f7", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1214[i][j], "g_1214[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1259, "g_1259", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1277[i][j].f0, "g_1277[i][j].f0", print_hash_value);
            transparent_crc(g_1277[i][j].f1, "g_1277[i][j].f1", print_hash_value);
            transparent_crc(g_1277[i][j].f2, "g_1277[i][j].f2", print_hash_value);
            transparent_crc(g_1277[i][j].f3, "g_1277[i][j].f3", print_hash_value);
            transparent_crc(g_1277[i][j].f4, "g_1277[i][j].f4", print_hash_value);
            transparent_crc(g_1277[i][j].f5, "g_1277[i][j].f5", print_hash_value);
            transparent_crc(g_1277[i][j].f6, "g_1277[i][j].f6", print_hash_value);
            transparent_crc(g_1277[i][j].f7, "g_1277[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(g_1577, "g_1577", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1612[i][j], "g_1612[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1677, "g_1677", print_hash_value);
    transparent_crc(g_1700.f0, "g_1700.f0", print_hash_value);
    transparent_crc(g_1700.f1, "g_1700.f1", print_hash_value);
    transparent_crc(g_1700.f2, "g_1700.f2", print_hash_value);
    transparent_crc(g_1700.f3, "g_1700.f3", print_hash_value);
    transparent_crc(g_1700.f4, "g_1700.f4", print_hash_value);
    transparent_crc(g_1700.f5, "g_1700.f5", print_hash_value);
    transparent_crc(g_1700.f6, "g_1700.f6", print_hash_value);
    transparent_crc(g_1700.f7, "g_1700.f7", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
