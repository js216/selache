// SPDX-License-Identifier: MIT
// cctest_csmith_c1859245.c --- cctest case csmith_c1859245 (csmith seed 3246756421)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaf136596 */

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

// Options:   -s 3246756421 -o /tmp/csmith_gen_fk8paiv3/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint64_t  f3;
   const int16_t  f4;
   int32_t  f5;
   int8_t  f6;
   uint8_t  f7;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   struct S0  f1;
   int16_t  f2;
   int32_t  f3;
   const int32_t  f4;
};

union U2 {
   const struct S0  f0;
   struct S0  f1;
   uint64_t  f2;
   int8_t * f3;
   int32_t  f4;
};

union U3 {
   uint16_t  f0;
   int32_t  f1;
};

union U4 {
   int8_t  f0;
   int8_t  f1;
   uint64_t  f2;
   uint16_t  f3;
   int16_t  f4;
};

union U5 {
   int32_t  f0;
   struct S0  f1;
};

union U6 {
   int64_t  f0;
   struct S0  f1;
   int32_t  f2;
   struct S0  f3;
   int32_t  f4;
};


static uint32_t g_2 = 1UL;
static int8_t g_16 = 2L;
static int8_t *g_15 = &g_16;
static union U2 g_21[6][6][2] = {{{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}}},{{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}}},{{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}}},{{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}}},{{{0x38F738F585950CFDLL,0xE9L,0x4F63ABEFL,0UL,0xEC56L,0x4491D0B6L,0xD0L,0x42L}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}}},{{{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}}},{{{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0x27B1AA435C526587LL,1L,-1L,0UL,0x69EDL,0x94AD4DB1L,0x70L,0x3FL}}},{{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}},{{0UL,0x4EL,0x885C82F7L,0UL,-5L,0x42506ED5L,0xC5L,1UL}}}}};
static union U3 g_30 = {0x7FCFL};
static const union U1 g_52 = {0L};
static int32_t g_63 = 0x676063AEL;
static int32_t *g_65 = &g_63;
static int32_t g_84 = 0x3588D280L;
static union U6 g_85 = {1L};
static union U3 g_87 = {8UL};
static union U3 *g_86 = &g_87;
static union U4 g_88 = {0x56L};
static uint16_t *g_96 = &g_87.f0;
static int32_t g_122 = 0xA6927BAFL;
static int32_t g_127[4][4] = {{0L,0L,0L,0L},{2L,0L,5L,0L},{0L,0xE129BBF8L,5L,5L},{2L,2L,0L,5L}};
static int32_t g_150[1][2] = {{0x8E3A1466L,0x8E3A1466L}};
static int64_t *g_184 = &g_85.f0;
static uint32_t g_187 = 0xA2BFAC57L;
static union U3 **g_238 = &g_86;
static union U3 ***g_237 = &g_238;
static int16_t g_244 = 1L;
static int8_t g_249 = 0x90L;
static union U5 g_258 = {0L};
static int8_t g_274 = 0x85L;
static uint64_t g_278[4][2][4] = {{{18446744073709551615UL,0x1A88EB658A028EC4LL,0x3BFAD3105DCE6AF9LL,0x1A88EB658A028EC4LL},{0x9C23427BEF7557BELL,0x1DB2AF2DE0FF5CEELL,0x66FA6692D8F7FDECLL,0x3BFAD3105DCE6AF9LL}},{{0x1A88EB658A028EC4LL,0x1DB2AF2DE0FF5CEELL,0x1DB2AF2DE0FF5CEELL,0x1A88EB658A028EC4LL},{0x1DB2AF2DE0FF5CEELL,0x1A88EB658A028EC4LL,0x9C23427BEF7557BELL,18446744073709551615UL}},{{0x1DB2AF2DE0FF5CEELL,0x9C23427BEF7557BELL,0x1DB2AF2DE0FF5CEELL,0x66FA6692D8F7FDECLL},{0x1A88EB658A028EC4LL,18446744073709551615UL,0x66FA6692D8F7FDECLL,0x66FA6692D8F7FDECLL}},{{0x9C23427BEF7557BELL,0x9C23427BEF7557BELL,0x3BFAD3105DCE6AF9LL,18446744073709551615UL},{18446744073709551615UL,0x1A88EB658A028EC4LL,0x3BFAD3105DCE6AF9LL,0x1A88EB658A028EC4LL}}};
static int32_t g_286 = 0L;
static int16_t g_298 = (-6L);
static union U3 ****g_332 = (void*)0;
static uint64_t g_349 = 0UL;
static int32_t g_365 = 0x25ED279CL;
static union U2 *g_386 = &g_21[2][5][0];
static union U2 **g_385 = &g_386;
static union U2 ***g_384 = &g_385;
static struct S0 *g_388[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static union U3 *****g_390 = &g_332;
static uint32_t g_449[7] = {4294967295UL,0x4F981CAEL,4294967295UL,4294967295UL,0x4F981CAEL,4294967295UL,4294967295UL};
static uint64_t *g_476[6] = {&g_278[3][1][3],&g_278[3][1][3],&g_278[3][1][3],&g_278[3][1][3],&g_278[3][1][3],&g_278[3][1][3]};
static uint64_t * const *g_475 = &g_476[3];
static union U1 g_490 = {0x4B1179C9AB1DACD6LL};
static int64_t g_492 = 0x5FDE756C50D621DFLL;
static const union U3 *g_502 = &g_30;
static const union U3 ** const g_501[2][4][4] = {{{&g_502,&g_502,&g_502,&g_502},{&g_502,&g_502,&g_502,&g_502},{&g_502,(void*)0,&g_502,&g_502},{&g_502,&g_502,&g_502,&g_502}},{{&g_502,&g_502,&g_502,&g_502},{&g_502,&g_502,&g_502,&g_502},{&g_502,&g_502,&g_502,&g_502},{&g_502,&g_502,&g_502,&g_502}}};
static const union U3 ** const *g_500 = &g_501[1][3][2];
static const union U3 ** const **g_499 = &g_500;
static const int16_t g_509 = 0xCDCDL;
static union U5 *g_511 = &g_258;
static union U5 g_514 = {1L};
static uint16_t **g_548 = &g_96;
static const union U4 *g_574 = &g_88;
static uint64_t g_663[6][1] = {{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}};
static union U6 g_705 = {0x93F22070D4688F78LL};
static int32_t *g_800 = &g_150[0][0];
static union U4 * const *g_830 = (void*)0;
static union U4 * const **g_829[4][1][4] = {{{&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830}}};
static union U5 g_874 = {-1L};
static union U6 g_888 = {0x3ECACD36F5FDB877LL};
static union U6 *g_887 = &g_888;
static union U1 g_908 = {0x4588031C3810BF1BLL};
static uint16_t g_936 = 0UL;
static uint16_t g_944 = 0UL;
static uint16_t **g_954 = &g_96;
static int32_t g_1085 = 0x6F5234A2L;
static union U5 ** const g_1131 = (void*)0;
static union U5 ** const *g_1130 = &g_1131;
static union U1 *g_1185 = (void*)0;
static union U1 **g_1184 = &g_1185;
static uint64_t g_1220 = 0xA4079CDABA52D880LL;
static union U3 g_1222 = {0x6F19L};
static uint8_t g_1360 = 0xF3L;
static struct S0 **g_1418 = (void*)0;
static struct S0 ***g_1417[3][7] = {{&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418},{&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418,&g_1418}};
static const uint64_t g_1432 = 0xC2D34B02F022EA9FLL;
static union U3 g_1446[3][4] = {{{65528UL},{65528UL},{65528UL},{65528UL}},{{65528UL},{65528UL},{65528UL},{65528UL}},{{65528UL},{65528UL},{65528UL},{65528UL}}};
static int32_t **g_1462 = (void*)0;
static int32_t **g_1463[1] = {&g_65};
static struct S0 g_1487 = {0x3FCA0267F77697BFLL,-3L,0xAC2209ABL,6UL,0L,0x66A5C9F5L,0xEEL,0UL};
static union U2 ****g_1656 = &g_384;
static const union U3 **g_1675[4] = {&g_502,&g_502,&g_502,&g_502};
static const union U3 ***g_1674[1] = {&g_1675[1]};
static const union U3 ****g_1673[1] = {&g_1674[0]};
static uint16_t g_1726 = 0x288BL;
static int32_t g_1728 = 1L;
static int16_t *g_1789 = &g_908.f2;
static union U6 g_2011 = {0L};
static union U4 *g_2048[2] = {&g_88,&g_88};
static union U4 **g_2047 = &g_2048[0];
static union U4 ***g_2046 = &g_2047;
static const union U5 g_2188[4][3] = {{{1L},{1L},{1L}},{{0x44ACA4CAL},{0x44ACA4CAL},{0x44ACA4CAL}},{{1L},{1L},{1L}},{{0x44ACA4CAL},{0x44ACA4CAL},{0x44ACA4CAL}}};
static const union U5 *g_2209[1][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
static uint64_t g_2286 = 0x4062B610DE107908LL;
static union U6 g_2327[2][5][1] = {{{{0x452D26409F8CBE57LL}},{{8L}},{{0x452D26409F8CBE57LL}},{{8L}},{{0x452D26409F8CBE57LL}}},{{{8L}},{{0x452D26409F8CBE57LL}},{{8L}},{{0x452D26409F8CBE57LL}},{{8L}}}};
static int64_t g_2382 = (-5L);
static uint32_t g_2392 = 18446744073709551615UL;
static uint16_t g_2413 = 4UL;
static int64_t g_2511 = 0x1F9D4DEDD979350DLL;
static int64_t g_2557 = (-2L);
static union U6 **g_2563 = &g_887;
static union U6 ***g_2562 = &g_2563;
static union U2 g_2618 = {{18446744073709551615UL,-1L,0xA17F318FL,0xB2198786CD2F0257LL,0x144BL,0xD95A346BL,0xE5L,254UL}};
static int8_t g_2662 = (-9L);
static struct S0 ***g_2680 = &g_1418;
static const struct S0 *g_2683 = &g_2618.f0;
static const struct S0 **g_2682 = &g_2683;
static const struct S0 ***g_2681 = &g_2682;



static struct S0  func_1(void);
static uint16_t  func_3(union U3 * p_4, int16_t  p_5, uint16_t  p_6, union U3 * p_7, int8_t  p_8);
static union U3  func_9(union U4  p_10, int8_t * p_11, int8_t * p_12, union U3 * p_13);
static int8_t * func_17(union U2  p_18, int8_t * p_19, const union U1  p_20);
static struct S0  func_23(uint32_t  p_24);
static uint16_t  func_27(union U3 * p_28);
static uint16_t  func_40(union U5  p_41, int32_t  p_42, uint64_t  p_43, union U3 * p_44, union U4  p_45);
static union U6  func_49(const union U1  p_50, union U3 * const  p_51);




static struct S0  func_1(void)
{ 
    int8_t *l_22[5] = {&g_21[5][4][1].f1.f1,&g_21[5][4][1].f1.f1,&g_21[5][4][1].f1.f1,&g_21[5][4][1].f1.f1,&g_21[5][4][1].f1.f1};
    union U3 *l_1221 = &g_1222;
    const union U1 l_1312 = {0x10C514656A2CE2D8LL};
    int32_t l_2654[2][6] = {{0x0CAB6B1CL,1L,1L,0x0CAB6B1CL,0x303219AFL,0x0CAB6B1CL},{0x0CAB6B1CL,0x303219AFL,0x0CAB6B1CL,1L,1L,0x0CAB6B1CL}};
    int32_t l_2663[6] = {1L,1L,1L,1L,1L,1L};
    uint8_t l_2664 = 0x36L;
    uint8_t l_2670 = 1UL;
    int32_t l_2675 = 1L;
    struct S0 ****l_2679 = &g_1417[0][0];
    const struct S0 ***l_2684[5];
    int32_t *l_2685 = &g_87.f1;
    int32_t *l_2686 = &g_87.f1;
    int32_t *l_2687 = &g_874.f0;
    int32_t *l_2688 = &g_30.f1;
    int32_t *l_2689[3];
    int8_t l_2690 = 1L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_2684[i] = &g_2682;
    for (i = 0; i < 3; i++)
        l_2689[i] = &g_21[5][4][1].f4;
    if (g_2)
    { 
        union U4 l_14 = {0x5BL};
        union U3 *l_29 = &g_30;
        union U3 *l_2653 = &g_30;
        int32_t *l_2655 = (void*)0;
        int32_t *l_2656 = &g_705.f2;
        int32_t *l_2657 = (void*)0;
        int32_t *l_2658 = &g_63;
        int32_t *l_2659 = &g_888.f2;
        int32_t *l_2660 = &g_122;
        int32_t *l_2661[3];
        int i;
        for (i = 0; i < 3; i++)
            l_2661[i] = &g_85.f4;
        l_2653 = (func_3((func_9(l_14, g_15, func_17(g_21[5][4][1], l_22[1], (func_23((((safe_mul_func_uint16_t_u_u(func_27(l_29), g_21[5][4][1].f4)) , (void*)0) != l_1221)) , l_1312)), l_1221) , (void*)0), l_14.f1, l_14.f0, l_1221, l_14.f1) , l_29);
        ++l_2664;
    }
    else
    { 
        int32_t l_2667 = 0L;
        int32_t *l_2668 = &g_21[5][4][1].f4;
        int32_t *l_2669[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2669[i][j] = &g_85.f4;
        }
        ++l_2670;
    }
    l_2690 |= (safe_add_func_uint32_t_u_u(((((*l_2687) |= (l_2675 <= ((0x421AD925L && 0x792DCEA0L) ^ (~(safe_mul_func_uint8_t_u_u(g_52.f0, (((g_2680 = ((*l_2679) = &g_1418)) == (l_2684[3] = (g_2681 = g_2681))) || (l_2654[0][3] && g_2557)))))))) | l_2654[1][4]) == g_2327[1][3][0].f0), g_52.f2));
    return (**g_2682);
}



static uint16_t  func_3(union U3 * p_4, int16_t  p_5, uint16_t  p_6, union U3 * p_7, int8_t  p_8)
{ 
    int32_t *l_2646 = &g_87.f1;
    union U3 ****l_2651 = &g_237;
    (*l_2646) = p_5;
    for (g_492 = (-27); (g_492 != (-2)); ++g_492)
    { 
        uint16_t l_2652 = 0x919AL;
        (*l_2646) ^= (safe_lshift_func_int16_t_s_s(((void*)0 != l_2651), 0));
        if (l_2652)
            break;
        return l_2652;
    }
    return (**g_954);
}



static union U3  func_9(union U4  p_10, int8_t * p_11, int8_t * p_12, union U3 * p_13)
{ 
    int64_t l_1366 = 0x9380C445FC3484A3LL;
    int32_t **l_1383[1][3][6] = {{{&g_800,&g_800,&g_800,&g_800,&g_800,&g_800},{(void*)0,&g_800,&g_800,(void*)0,&g_800,&g_800},{&g_800,&g_800,&g_800,&g_800,&g_800,&g_800}}};
    int32_t l_1390 = 7L;
    union U3 l_1391[6][5] = {{{65535UL},{0x87B1L},{0x87B1L},{65535UL},{65535UL}},{{65535UL},{0xB559L},{65529UL},{65529UL},{0xB559L}},{{65535UL},{0x87B1L},{65529UL},{0xD1E4L},{0xD1E4L}},{{0x87B1L},{65535UL},{0x87B1L},{65529UL},{0xD1E4L}},{{0xB559L},{65535UL},{0xD1E4L},{65535UL},{0xB559L}},{{0x87B1L},{65535UL},{65535UL},{0xB559L},{65535UL}}};
    union U3 ***l_1415 = &g_238;
    int32_t **l_1459 = (void*)0;
    const int64_t l_1465 = 0xA8D5CEFD7D6CB0B6LL;
    int32_t l_1513 = 0xC11F7E6EL;
    int32_t l_1514 = (-5L);
    int32_t l_1515 = (-5L);
    int32_t l_1516 = 0x886864E5L;
    int32_t l_1517 = 0x623F4E75L;
    int32_t l_1518 = (-10L);
    int32_t l_1519 = 0x4E6B7C0EL;
    int32_t l_1521 = (-1L);
    union U6 l_1542 = {1L};
    uint32_t l_1548 = 0x6B9E1806L;
    union U4 l_1554 = {-4L};
    union U2 ** const *l_1612 = &g_385;
    union U2 ** const *l_1615 = &g_385;
    union U1 l_1632[1] = {{0x374D0B68505FE020LL}};
    int16_t *l_1665 = &g_908.f2;
    int8_t l_1680 = 0xCFL;
    uint32_t l_1721 = 0x9FA84600L;
    int64_t l_1727 = 0x7533C3544BFB0960LL;
    union U5 ** const l_1733 = &g_511;
    union U5 ** const *l_1732 = &l_1733;
    struct S0 l_1807 = {0x1B49F1C3C2903E32LL,-4L,0x9C2F02CDL,0x01E247EE86EA347ALL,0xC8ACL,0xD2E0E561L,-6L,0xEFL};
    const int32_t l_1810[7][4] = {{0x5100A3D4L,0x5100A3D4L,(-1L),(-3L)},{(-10L),(-1L),(-10L),(-1L)},{(-10L),(-1L),(-1L),(-10L)},{0x5100A3D4L,(-1L),(-3L),(-1L)},{(-1L),(-1L),(-3L),(-3L)},{0x5100A3D4L,0x5100A3D4L,(-1L),(-3L)},{(-10L),(-1L),(-10L),(-1L)}};
    union U4 *l_1849[5][3][6] = {{{(void*)0,&g_88,&g_88,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88}},{{&g_88,(void*)0,&g_88,&g_88,(void*)0,&g_88},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{(void*)0,&g_88,&g_88,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_88,&g_88,(void*)0},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,(void*)0,&g_88,&g_88,(void*)0,&g_88}},{{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88},{&g_88,(void*)0,(void*)0,&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88,(void*)0,(void*)0,&g_88}},{{&g_88,&g_88,(void*)0,(void*)0,(void*)0,&g_88},{(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0},{&g_88,(void*)0,(void*)0,(void*)0,&g_88,&g_88}}};
    union U4 **l_1848[7][2][4] = {{{&l_1849[0][2][1],&l_1849[3][2][5],&l_1849[4][2][2],&l_1849[3][2][5]},{&l_1849[3][2][5],&l_1849[4][1][2],(void*)0,&l_1849[3][2][5]}},{{(void*)0,&l_1849[3][2][5],&l_1849[3][1][4],&l_1849[3][1][4]},{&l_1849[4][2][5],&l_1849[4][2][5],&l_1849[4][2][2],&l_1849[0][2][1]}},{{&l_1849[4][2][5],&l_1849[4][1][2],&l_1849[3][1][4],&l_1849[4][2][5]},{(void*)0,&l_1849[0][2][1],(void*)0,&l_1849[3][1][4]}},{{&l_1849[3][2][5],&l_1849[0][2][1],&l_1849[4][2][2],&l_1849[4][2][5]},{&l_1849[0][2][1],&l_1849[4][1][2],&l_1849[4][1][2],&l_1849[0][2][1]}},{{(void*)0,&l_1849[4][2][5],&l_1849[4][1][2],&l_1849[3][1][4]},{&l_1849[0][2][1],&l_1849[3][2][5],&l_1849[4][2][2],&l_1849[3][2][5]}},{{&l_1849[3][2][5],&l_1849[4][1][2],(void*)0,&l_1849[3][2][5]},{(void*)0,&l_1849[3][2][5],&l_1849[3][1][4],&l_1849[3][1][4]}},{{&l_1849[4][2][5],&l_1849[4][2][5],&l_1849[4][2][2],&l_1849[0][2][1]},{&l_1849[4][2][5],&l_1849[4][1][2],&l_1849[3][1][4],&l_1849[4][2][5]}}};
    int32_t *l_1883 = &g_122;
    union U1 **l_1895 = &g_1185;
    int32_t l_1903 = 0L;
    int32_t l_1907 = (-1L);
    int32_t l_1909 = 0xD61E3FEBL;
    int32_t l_1910 = 1L;
    int32_t l_1911 = 0x9A070969L;
    int32_t l_1912[1][2];
    int32_t l_1926 = 9L;
    const union U2 l_1935[3] = {{{0x126A39EB62D55C42LL,0xA0L,5L,0x3756F9E7161F3A63LL,-1L,0x747D8B88L,0x95L,250UL}},{{0x126A39EB62D55C42LL,0xA0L,5L,0x3756F9E7161F3A63LL,-1L,0x747D8B88L,0x95L,250UL}},{{0x126A39EB62D55C42LL,0xA0L,5L,0x3756F9E7161F3A63LL,-1L,0x747D8B88L,0x95L,250UL}}};
    uint16_t * const l_1946 = &g_1222.f0;
    union U4 ****l_1947 = (void*)0;
    union U3 *l_1994 = &g_87;
    uint8_t l_2008[7] = {9UL,0xDBL,9UL,9UL,0xDBL,9UL,9UL};
    int64_t **l_2104[7][2][2] = {{{&g_184,(void*)0},{&g_184,&g_184}},{{(void*)0,&g_184},{(void*)0,&g_184}},{{&g_184,&g_184},{&g_184,&g_184}},{{&g_184,&g_184},{(void*)0,&g_184}},{{(void*)0,&g_184},{&g_184,(void*)0}},{{&g_184,(void*)0},{&g_184,(void*)0}},{{&g_184,&g_184},{(void*)0,&g_184}}};
    uint64_t l_2125[7][6][4] = {{{0UL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL},{1UL,8UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL},{0UL,18446744073709551615UL,1UL,18446744073709551615UL},{0UL,8UL,0UL,18446744073709551615UL},{0UL,18446744073709551615UL,1UL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL}},{{1UL,8UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL},{0UL,18446744073709551615UL,1UL,18446744073709551615UL},{0UL,8UL,0UL,18446744073709551615UL},{0UL,18446744073709551615UL,1UL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL},{1UL,8UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL}},{{0UL,18446744073709551615UL,1UL,18446744073709551615UL},{0UL,8UL,0UL,18446744073709551615UL},{0UL,18446744073709551615UL,1UL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,18446744073709551615UL},{1UL,8UL,0x2C6D1ADB1F9A50F5LL,8UL},{1UL,18446744073709551615UL,0UL,8UL}},{{0x2C6D1ADB1F9A50F5LL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL},{0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL,0UL,18446744073709551615UL},{1UL,0x15561C656C0C5E8ALL,0x97128C3FF06EEF2CLL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x97128C3FF06EEF2CLL,8UL},{1UL,18446744073709551615UL,0UL,8UL},{0x2C6D1ADB1F9A50F5LL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL}},{{0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL,0UL,18446744073709551615UL},{1UL,0x15561C656C0C5E8ALL,0x97128C3FF06EEF2CLL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x97128C3FF06EEF2CLL,8UL},{1UL,18446744073709551615UL,0UL,8UL},{0x2C6D1ADB1F9A50F5LL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL},{0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL,0UL,18446744073709551615UL}},{{1UL,0x15561C656C0C5E8ALL,0x97128C3FF06EEF2CLL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x97128C3FF06EEF2CLL,8UL},{1UL,18446744073709551615UL,0UL,8UL},{0x2C6D1ADB1F9A50F5LL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL},{0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL,0UL,18446744073709551615UL},{1UL,0x15561C656C0C5E8ALL,0x97128C3FF06EEF2CLL,0x15561C656C0C5E8ALL}},{{0UL,18446744073709551615UL,0x97128C3FF06EEF2CLL,8UL},{1UL,18446744073709551615UL,0UL,8UL},{0x2C6D1ADB1F9A50F5LL,18446744073709551615UL,0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL},{0x2C6D1ADB1F9A50F5LL,0x15561C656C0C5E8ALL,0UL,18446744073709551615UL},{1UL,0x15561C656C0C5E8ALL,0x97128C3FF06EEF2CLL,0x15561C656C0C5E8ALL},{0UL,18446744073709551615UL,0x97128C3FF06EEF2CLL,8UL}}};
    uint8_t l_2153 = 0xB9L;
    union U5 l_2215 = {0x211D84C9L};
    uint32_t l_2234 = 4294967289UL;
    int16_t l_2284 = (-3L);
    int32_t l_2285 = 0x4BA2ECCCL;
    uint32_t l_2313 = 0x5D1A6FD2L;
    uint16_t l_2385 = 0UL;
    const int8_t l_2490 = 4L;
    int8_t l_2506 = 0x85L;
    union U6 ***l_2606 = &g_2563;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1912[i][j] = 8L;
    }
    if ((l_1366 != (safe_div_func_int64_t_s_s((-1L), g_88.f0))))
    { 
        union U6 **l_1369 = &g_887;
        int32_t l_1380[6][4] = {{0x8AA1C612L,0x3FAD7B2AL,0x3FAD7B2AL,0x8AA1C612L},{(-10L),(-1L),0x3FAD7B2AL,1L},{0x8AA1C612L,0x97BCD7F3L,6L,0x97BCD7F3L},{0x97BCD7F3L,0x3FAD7B2AL,(-10L),0x97BCD7F3L},{(-10L),0x97BCD7F3L,1L,1L},{(-1L),(-1L),6L,0x8AA1C612L}};
        int32_t **l_1381 = &g_800;
        struct S0 l_1398 = {0UL,-5L,0L,2UL,0xAB6EL,0x29D73578L,6L,0x13L};
        union U5 l_1414 = {3L};
        union U3 ***l_1416 = &g_238;
        uint32_t *l_1423[4];
        union U2 l_1439[1][4] = {{{{0x869CD478660594BDLL,0x54L,0L,0UL,0L,0x22A14EDAL,-10L,0x35L}},{{0x869CD478660594BDLL,0x54L,0L,0UL,0L,0x22A14EDAL,-10L,0x35L}},{{0x869CD478660594BDLL,0x54L,0L,0UL,0L,0x22A14EDAL,-10L,0x35L}},{{0x869CD478660594BDLL,0x54L,0L,0UL,0L,0x22A14EDAL,-10L,0x35L}}}};
        int32_t **l_1460 = &g_65;
        int32_t ***l_1461[6][3] = {{&l_1459,&l_1459,&l_1459},{&l_1460,&l_1460,&l_1460},{&l_1459,&l_1459,&l_1459},{&l_1460,&l_1460,&l_1460},{&l_1459,&l_1459,&l_1459},{&l_1460,&l_1460,&l_1460}};
        int64_t *l_1464 = &g_908.f0;
        int32_t l_1466 = (-1L);
        uint64_t l_1467 = 0UL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1423[i] = &g_187;
        (*l_1369) = &g_888;
        for (g_888.f3.f7 = 0; (g_888.f3.f7 <= 0); g_888.f3.f7 += 1)
        { 
            int32_t ***l_1382[4][2] = {{(void*)0,&l_1381},{(void*)0,&l_1381},{(void*)0,&l_1381},{(void*)0,&l_1381}};
            int32_t l_1386[2];
            int64_t *l_1387 = &g_492;
            int32_t *l_1388 = &g_84;
            int32_t *l_1389[5];
            uint32_t l_1407 = 18446744073709551614UL;
            union U2 l_1433 = {{0x0A13194D4B585F97LL,-9L,0x88F95294L,18446744073709551615UL,0x01A2L,0x867EE9D6L,-5L,0x11L}};
            union U5 **l_1441 = &g_511;
            union U5 ***l_1440 = &l_1441;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1386[i] = 0xD0403941L;
            for (i = 0; i < 5; i++)
                l_1389[i] = (void*)0;
            l_1390 = ((*l_1388) = (~(safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((+p_10.f0) || (l_1380[2][2] < (l_1380[2][2] < ((&g_800 != (l_1383[0][0][2] = l_1381)) ^ ((*p_13) , ((*l_1387) = ((((((safe_mul_func_int16_t_s_s(l_1366, l_1380[0][3])) >= 0x06F6L) == l_1386[0]) | 0xBBC6130EL) > 0x4CL) > (*p_12)))))))) , p_10.f0), p_10.f1)), 7)) >= (*g_15)), l_1380[2][2]))));
            if (g_87.f0)
            { 
                uint32_t l_1399[2][6][7] = {{{4294967290UL,0x492E3CF0L,0x9E330565L,0xA6CDF10DL,0x0C246B82L,0x9E330565L,4294967295UL},{2UL,1UL,4294967293UL,4294967293UL,1UL,2UL,0x1EFE3F0FL},{4294967290UL,0xA6CDF10DL,3UL,4294967290UL,4294967295UL,0xE327B745L,0xA6CDF10DL},{0x7CCF32D5L,0UL,2UL,0UL,2UL,0UL,0x7CCF32D5L},{0UL,0xA6CDF10DL,0x2D5F32D8L,0x0C246B82L,0x7150B69EL,0UL,0x0C246B82L},{0x594A2B12L,0UL,0UL,0xFE581590L,0xFE581590L,0UL,0UL}},{{0x9E330565L,0xB0C37D24L,4294967293UL,0x492E3CF0L,0xB0C37D24L,0xE327B745L,0UL},{2UL,0xFE581590L,0UL,2UL,0UL,2UL,0UL},{0x0C246B82L,0x0C246B82L,4294967290UL,0x492E3CF0L,0x9E330565L,0xA6CDF10DL,0x0C246B82L},{2UL,0UL,4294967295UL,0xFE581590L,4294967286UL,4294967286UL,0xFE581590L},{4294967295UL,0UL,4294967295UL,0xE327B745L,0x9E330565L,4294967295UL,0xB0C37D24L},{0xFE581590L,0UL,1UL,0x1EFE3F0FL,0UL,0x594A2B12L,0UL}}};
                int i, j, k;
                for (g_122 = 0; (g_122 <= 3); g_122 += 1)
                { 
                    int i, j;
                    if (l_1380[g_122][g_122])
                        break;
                    if (g_52.f3)
                        continue;
                }
                for (g_88.f3 = 0; (g_88.f3 <= 0); g_88.f3 += 1)
                { 
                    int i, j;
                    if (l_1380[2][2])
                        break;
                    return l_1391[1][1];
                }
                for (g_490.f1.f5 = 0; (g_490.f1.f5 <= 5); g_490.f1.f5 += 1)
                { 
                    int i;
                    g_514.f0 = (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_298, g_449[3])), (safe_mul_func_int16_t_s_s((l_1398 , (l_1399[0][4][5] & p_10.f1)), (((!(g_127[1][1] ^= ((*l_1388) ^= (safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((g_908.f0 |= 0x36B481EE61468DC5LL), (safe_sub_func_int8_t_s_s(((**g_475) | p_10.f0), (*p_11))))), 1))))) == g_874.f0) || l_1407)))));
                    return l_1391[1][1];
                }
            }
            else
            { 
                uint8_t *l_1411 = &g_85.f3.f7;
                int32_t l_1429 = 1L;
                uint64_t *l_1434 = &l_1398.f0;
                if ((l_1390 = (((safe_lshift_func_uint8_t_u_u(g_278[1][1][1], ((*l_1411) = (l_1398.f2 != (+(*p_12)))))) <= ((((-1L) >= (l_1390 < ((safe_rshift_func_uint16_t_u_s(p_10.f0, (((l_1414 , l_1415) == l_1416) <= p_10.f1))) | g_84))) >= p_10.f1) && 3L)) , p_10.f0)))
                { 
                    const int64_t l_1424 = 0x6B63AB6D53FA1DBFLL;
                    int32_t l_1425 = 1L;
                    const uint64_t *l_1431 = &g_1432;
                    const uint64_t **l_1430 = &l_1431;
                    uint64_t **l_1435 = &l_1434;
                    (**l_1415) = (void*)0;
                    l_1425 &= (((**g_475) |= ((**g_237) != ((((void*)0 == g_1417[0][0]) ^ ((safe_div_func_uint32_t_u_u(((-2L) && ((safe_lshift_func_uint16_t_u_s(p_10.f0, 1)) && ((l_1423[0] == (void*)0) , p_10.f1))), (*l_1388))) && l_1424)) , p_13))) > p_10.f1);
                    if (l_1425)
                        break;
                    (*l_1388) = (((safe_mul_func_int8_t_s_s(0x9EL, ((((-4L) == (+((*l_1411) = l_1429))) < (**g_475)) | (((*l_1430) = (void*)0) != (l_1433 , ((*l_1435) = l_1434)))))) == 0x4E584815L) && 0x4B6BL);
                    l_1425 ^= (&g_476[3] != &g_476[4]);
                }
                else
                { 
                    uint16_t l_1436 = 9UL;
                    (*l_1388) |= p_10.f0;
                    l_1436++;
                }
            }
            (*l_1388) = ((((p_10.f0 != p_10.f1) | (((l_1439[0][3] , l_1440) == (void*)0) || (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(p_10.f1, (**g_475))), l_1439[0][3].f0.f7)))) && p_10.f1) & l_1439[0][3].f1.f5);
            return g_1446[2][2];
        }
        l_1466 = (((*g_502) , (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(0x3A3E0A9E2486EF65LL, ((((safe_add_func_int64_t_s_s(p_10.f0, ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(g_249, g_127[0][1])) , ((*l_1464) = ((l_1459 != (g_1463[0] = (g_1462 = l_1460))) != g_244))) ^ l_1465), l_1465)), (*p_12))) >= 0x3CC466676CFDADECLL))) ^ (-9L)) || (-9L)) > g_87.f0))), p_10.f1))) & p_10.f0);
        --l_1467;
    }
    else
    { 
        int32_t l_1475 = 6L;
        struct S0 *l_1486 = &g_1487;
        int32_t l_1502 = (-1L);
        int32_t l_1505 = 1L;
        int32_t l_1512[7][4][3] = {{{1L,0x5C8A5049L,0L},{0L,1L,0x5AD458AFL},{(-1L),9L,0x5AD458AFL},{0x499092A5L,0L,0L}},{{0x23532A70L,0xC3022AD8L,0x1C23A75FL},{0L,0x5355AFEAL,0x23532A70L},{0x85B944C0L,0x7E31FBCCL,0L},{(-1L),(-1L),0x499092A5L}},{{1L,0x7E31FBCCL,9L},{0L,0x5355AFEAL,0x43B41D64L},{0x01347F3AL,0xC3022AD8L,0L},{0x5C8A5049L,0L,0x2263D1AFL}},{{0L,9L,(-1L)},{0L,1L,0x01347F3AL},{0x5C8A5049L,0x5C8A5049L,(-1L)},{0x01347F3AL,(-1L),0L}},{{0L,0L,0x37DCB182L},{1L,0x37DCB182L,0xF8988E87L},{(-1L),0L,0x37DCB182L},{0x85B944C0L,0x1C23A75FL,0L}},{{0L,0x5AD458AFL,(-1L)},{0x23532A70L,0L,0x01347F3AL},{0x499092A5L,0x43B41D64L,(-1L)},{(-1L),0x43B41D64L,0x2263D1AFL}},{{0L,0L,0L},{1L,0x5AD458AFL,0x43B41D64L},{0L,0x1C23A75FL,9L},{0xC3022AD8L,0L,0x499092A5L}}};
        int32_t l_1520 = 2L;
        const union U1 l_1540[1] = {{0xF9C85DEC11D1DB7BLL}};
        union U3 * const l_1541 = &l_1391[2][1];
        uint16_t l_1573 = 0UL;
        int64_t *l_1610 = &g_490.f0;
        int i, j, k;
        for (g_122 = 0; (g_122 <= 1); g_122 += 1)
        { 
            struct S0 ***l_1471 = (void*)0;
            int32_t l_1472 = (-6L);
            int32_t l_1504 = 0x83B13714L;
            int8_t l_1506 = 0x0CL;
            int32_t l_1509 = (-6L);
            int32_t l_1510 = 7L;
            int32_t l_1511[2][6][3] = {{{0x5136DCAFL,0x5136DCAFL,0x5136DCAFL},{0xD258F58AL,0xD258F58AL,0xD258F58AL},{0x5136DCAFL,0x5136DCAFL,0x5136DCAFL},{0xD258F58AL,0xD258F58AL,0xD258F58AL},{0x5136DCAFL,0x5136DCAFL,0x5136DCAFL},{0xD258F58AL,0xD258F58AL,0xD258F58AL}},{{0x5136DCAFL,0x5136DCAFL,0x5136DCAFL},{0xD258F58AL,0xD258F58AL,0xD258F58AL},{0x5136DCAFL,0x5136DCAFL,0x5136DCAFL},{0xD258F58AL,0xD258F58AL,0xD258F58AL},{0x5136DCAFL,0x5136DCAFL,0x5136DCAFL},{0xD258F58AL,0xD258F58AL,0xD258F58AL}}};
            uint8_t l_1522[5][6] = {{0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL},{0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL},{0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL},{0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL},{0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL}};
            int i, j, k;
            for (g_490.f1.f1 = 1; (g_490.f1.f1 >= 0); g_490.f1.f1 -= 1)
            { 
                uint64_t l_1495 = 0UL;
                int16_t l_1501[1];
                int32_t l_1503 = (-1L);
                int32_t l_1507 = 0xC850FAF3L;
                int32_t l_1508[3][2];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1501[i] = 0xAE68L;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1508[i][j] = 4L;
                }
                for (g_888.f3.f7 = 0; (g_888.f3.f7 <= 1); g_888.f3.f7 += 1)
                { 
                    struct S0 ***l_1470 = (void*)0;
                    int32_t *l_1473 = (void*)0;
                    int32_t *l_1474 = &g_63;
                    uint32_t *l_1492[5] = {&g_2,&g_2,&g_2,&g_2,&g_2};
                    int32_t *l_1496 = &g_705.f2;
                    int32_t *l_1497 = (void*)0;
                    int32_t *l_1498 = (void*)0;
                    int32_t *l_1499 = (void*)0;
                    int32_t *l_1500[7][6] = {{&l_1472,&g_122,&l_1472,&g_127[0][2],&g_127[0][2],&l_1472},{&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2]},{&g_127[0][2],&g_122,&g_127[0][2],&g_127[0][2],&g_122,&g_127[0][2]},{&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2]},{&l_1472,&g_127[0][2],&g_127[0][2],&l_1472,&g_122,&l_1472},{&l_1472,&g_122,&l_1472,&g_127[0][2],&g_127[0][2],&l_1472},{&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2],&g_127[0][2]}};
                    int i, j;
                    (*l_1474) = ((l_1470 != l_1471) > l_1472);
                    if (l_1475)
                        break;
                    (*l_1474) = (p_10.f1 ^ ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(p_10.f0, (p_10.f0 || ((++(**g_475)) , (((void*)0 == l_1486) != (((g_88.f0 == ((*g_96) = (safe_add_func_int16_t_s_s((((**g_475) = (safe_add_func_int16_t_s_s((((++g_449[4]) ^ g_908.f4) >= 0xE3L), p_10.f1))) & 0xA639891AC0102209LL), l_1472)))) & g_490.f0) ^ g_1487.f3)))))), 4)), 13)) && l_1495), l_1472)) ^ p_10.f0));
                    ++l_1522[4][5];
                }
            }
            for (g_944 = 0; (g_944 <= 1); g_944 += 1)
            { 
                uint64_t l_1535 = 1UL;
                for (g_908.f0 = 1; (g_908.f0 >= 0); g_908.f0 -= 1)
                { 
                    int32_t *l_1525 = (void*)0;
                    int32_t *l_1526 = &g_888.f2;
                    int32_t *l_1527 = &l_1511[1][0][0];
                    int32_t *l_1528 = &l_1509;
                    int32_t *l_1529 = &l_1505;
                    int32_t *l_1530 = &g_85.f4;
                    int32_t *l_1531 = &g_127[0][2];
                    int32_t *l_1532 = (void*)0;
                    int32_t *l_1533 = &l_1521;
                    int32_t *l_1534[7][5][5] = {{{&l_1509,&g_705.f4,&g_514.f0,&l_1509,(void*)0},{&l_1509,(void*)0,&g_85.f4,&g_30.f1,&g_122},{&g_84,&g_85.f4,&l_1510,&g_84,&l_1505},{&l_1509,&l_1517,&g_84,&g_705.f4,&g_85.f4},{&l_1509,&l_1472,&g_85.f2,&l_1504,&l_1504}},{{(void*)0,&g_514.f0,(void*)0,&l_1504,(void*)0},{&l_1510,&l_1510,(void*)0,&g_705.f4,&l_1504},{&l_1509,&g_514.f0,&g_514.f0,&g_84,&l_1509},{(void*)0,&l_1504,&l_1513,&g_30.f1,&g_705.f4},{&g_84,&g_514.f0,&l_1472,&l_1509,&l_1509}},{{&l_1505,&l_1510,&g_874.f0,&l_1390,&l_1510},{&g_874.f0,&g_514.f0,&l_1504,&l_1510,&l_1510},{&l_1513,&l_1472,&l_1513,&l_1517,&l_1509},{&l_1472,&l_1517,&l_1509,(void*)0,&g_705.f4},{&g_122,&g_85.f4,&l_1504,(void*)0,&l_1509}},{{&g_705.f4,(void*)0,&l_1509,&g_705.f4,&l_1504},{&g_85.f2,&g_705.f4,&l_1513,&g_122,(void*)0},{&l_1513,&g_84,&l_1504,&g_514.f0,&l_1504},{&l_1513,&g_874.f0,&g_874.f0,&l_1513,&g_85.f4},{&g_85.f2,(void*)0,&l_1472,(void*)0,&l_1505}},{{&g_705.f4,&l_1509,&l_1513,&l_1509,&g_122},{&g_122,&l_1511[1][0][0],&g_514.f0,(void*)0,(void*)0},{&l_1472,(void*)0,(void*)0,&l_1513,&g_84},{&l_1513,&g_122,(void*)0,&g_514.f0,&g_30.f1},{&g_874.f0,&g_122,&g_85.f2,&g_122,&g_874.f0}},{{&l_1505,(void*)0,&g_84,&g_705.f4,&l_1510},{&g_84,&l_1511[1][0][0],&l_1510,(void*)0,&l_1517},{&l_1510,&l_1504,&l_1472,&l_1505,&g_514.f0},{(void*)0,&g_122,&g_30.f1,&g_85.f4,(void*)0},{&g_514.f0,(void*)0,(void*)0,&l_1504,&l_1509}},{{&g_122,&l_1390,(void*)0,(void*)0,&l_1390},{&l_1517,&l_1509,&g_30.f1,&l_1504,&g_122},{&l_1504,&g_85.f2,&l_1472,&l_1509,&g_84},{&l_1390,&l_1472,&l_1504,&g_705.f4,&g_514.f0},{&l_1504,&g_85.f4,&l_1390,&l_1509,&l_1472}}};
                    int i, j, k;
                    ++l_1535;
                    (*l_1526) = (l_1522[(g_944 + 3)][(g_908.f0 + 2)] , (g_365 != ((safe_mod_func_uint64_t_u_u((l_1542 , (**g_475)), p_10.f1)) <= 9L)));
                }
                for (g_286 = 0; (g_286 <= 1); g_286 += 1)
                { 
                    int32_t l_1543 = 0x61D6CFDEL;
                    l_1511[1][0][0] = l_1543;
                    if (l_1540[0].f0)
                        break;
                }
            }
            for (g_908.f1.f0 = 0; (g_908.f1.f0 <= 1); g_908.f1.f0 += 1)
            { 
                uint64_t l_1544 = 1UL;
                struct S0 l_1545 = {0xD8F4FF0AD40272B4LL,-8L,0xA5CE03BDL,0xD9D9D05269F9BCF4LL,-1L,0xA92CDDB6L,3L,0x8BL};
                int32_t *l_1556 = &l_1509;
                int32_t l_1566[3][6][5] = {{{0x6D8AB043L,0L,0x15A3C91BL,0x15A3C91BL,0L},{0xE4F32C4FL,(-3L),0x51D2EEBFL,0x85FCDAF7L,0L},{0x9036783CL,5L,0x9036783CL,0x15A3C91BL,(-8L)},{(-1L),0x84B8DD15L,0L,0x84B8DD15L,(-1L)},{0x9036783CL,0x6D8AB043L,5L,0L,5L},{0xE4F32C4FL,(-10L),0L,0xAFA9A905L,0x2B07E455L}},{{0x6D8AB043L,0x9036783CL,0x9036783CL,0x6D8AB043L,5L},{0xE048BFB0L,0xAFA9A905L,0x51D2EEBFL,0xD5C1FCCAL,(-1L)},{5L,0x9036783CL,0x15A3C91BL,(-8L),(-8L)},{(-1L),(-10L),(-1L),0xD5C1FCCAL,0L},{0L,0x6D8AB043L,(-8L),0x6D8AB043L,0L},{(-1L),0x84B8DD15L,0xE4F32C4FL,0xAFA9A905L,0xE4F32C4FL}},{{5L,5L,(-8L),0L,(-1L)},{0xE048BFB0L,(-3L),(-1L),0x84B8DD15L,0xE4F32C4FL},{0x6D8AB043L,0L,0x15A3C91BL,0x15A3C91BL,0L},{0xE4F32C4FL,(-3L),0x51D2EEBFL,0x85FCDAF7L,0L},{0x9036783CL,5L,0x9036783CL,0x15A3C91BL,(-8L)},{(-1L),0x84B8DD15L,0L,0x84B8DD15L,(-1L)}}};
                union U4 l_1588[3] = {{-1L},{-1L},{-1L}};
                int32_t *l_1591 = &l_1502;
                int32_t *l_1592 = &l_1391[1][1].f1;
                int32_t *l_1593 = (void*)0;
                int32_t *l_1594 = &l_1515;
                int32_t *l_1595 = &g_705.f2;
                int32_t *l_1596 = &l_1509;
                int32_t *l_1597[7] = {&g_127[3][1],&g_84,&g_127[3][1],&g_127[3][1],&g_84,&g_127[3][1],&g_127[3][1]};
                uint16_t l_1598 = 0x9308L;
                int i, j, k;
                for (g_888.f1.f0 = 0; (g_888.f1.f0 <= 1); g_888.f1.f0 += 1)
                { 
                    uint64_t ***l_1553 = (void*)0;
                    int32_t *l_1555 = &g_85.f2;
                    if (l_1544)
                        break;
                    (*l_1555) = (l_1545 , (((((((safe_sub_func_uint16_t_u_u(l_1548, (safe_add_func_uint32_t_u_u(p_10.f1, (safe_lshift_func_uint8_t_u_u(((void*)0 != l_1553), ((*g_15) ^ ((*p_13) , l_1511[0][2][2])))))))) , &g_509) == &g_244) , l_1554) , g_85.f2) , p_10.f0) == g_490.f2));
                    (*l_1555) |= ((void*)0 != &l_1383[0][1][2]);
                    if ((*l_1555))
                        break;
                }
                (*l_1556) = 0x2F076117L;
                for (l_1506 = 0; (l_1506 <= 1); l_1506 += 1)
                { 
                    int32_t *l_1557 = &l_1515;
                    int32_t *l_1558 = &l_1511[1][0][0];
                    int32_t *l_1559 = (void*)0;
                    int32_t *l_1560 = &g_258.f0;
                    int32_t *l_1561 = &g_84;
                    int32_t *l_1562 = (void*)0;
                    int32_t *l_1563 = &l_1512[5][3][0];
                    int32_t *l_1564 = (void*)0;
                    int32_t *l_1565 = &l_1516;
                    int32_t *l_1567 = &g_85.f2;
                    int32_t *l_1568 = (void*)0;
                    int32_t *l_1569 = &l_1542.f2;
                    int32_t *l_1570 = (void*)0;
                    int32_t *l_1571 = &l_1513;
                    int32_t *l_1572[1][5][5] = {{{&g_705.f4,&g_705.f4,&g_705.f4,&g_705.f4,&g_705.f4},{(void*)0,&g_286,(void*)0,&g_286,(void*)0},{&g_705.f4,&g_705.f4,&g_705.f4,&g_705.f4,&g_705.f4},{(void*)0,&g_286,(void*)0,&g_286,(void*)0},{&g_705.f4,&g_705.f4,&g_705.f4,&g_705.f4,&g_705.f4}}};
                    int i, j, k;
                    l_1573--;
                    (*l_1569) = ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(4UL, ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((&l_1512[5][3][0] == (l_1588[0] , l_1560)), 0)), ((safe_sub_func_uint16_t_u_u((p_13 != p_13), 0x198BL)) && g_150[0][0]))) != 0xDC84L))) && (**g_475)), 0)) != 0x779AC00B9410504ELL) != p_10.f0) != p_10.f0) < g_85.f4), (*g_15))), g_490.f2)) > 0xCEL);
                    (*l_1557) = p_10.f0;
                }
                l_1598--;
                (*l_1591) = p_10.f0;
                for (g_888.f1.f1 = 1; (g_888.f1.f1 >= 0); g_888.f1.f1 -= 1)
                { 
                    return (*p_13);
                }
            }
        }
        for (g_258.f1.f6 = 0; (g_258.f1.f6 > 9); ++g_258.f1.f6)
        { 
            int32_t *l_1603 = &g_21[5][4][1].f4;
            int32_t **l_1604 = &l_1603;
            union U1 l_1609[6][7][6] = {{{{0x8648A1B5393096AELL},{0L},{0x462892D5EC242DCCLL},{0xF61C442166953425LL},{0x1F7B2539C02771F1LL},{-9L}},{{0L},{1L},{0xF61C442166953425LL},{0x5BFFDADD3192C682LL},{1L},{1L}},{{-1L},{0xFEFF8E969702BB50LL},{0xFEFF8E969702BB50LL},{-1L},{1L},{0x92F01398E05FCD24LL}},{{0xE6C9F2CB62BED725LL},{0xDB5FEFC054B48A9DLL},{0x0016DD56EE4A9FD0LL},{-9L},{0x5BFFDADD3192C682LL},{3L}},{{-1L},{0xD425E7452605EA59LL},{3L},{0L},{0x92F01398E05FCD24LL},{0x50E5D2E0951C0193LL}},{{0xB4EE8D730D8C9820LL},{0L},{1L},{3L},{0x88B9B3EE44FEFAEBLL},{1L}},{{0L},{3L},{0x3F3B573118563516LL},{3L},{0x8648A1B5393096AELL},{0x2FA06A06E3F9303FLL}}},{{{0L},{0xEC4C08A7187A1B9ELL},{0xE6C9F2CB62BED725LL},{0xF61C442166953425LL},{0xF448621B9FFF5155LL},{0L}},{{3L},{0xD425E7452605EA59LL},{-1L},{-1L},{3L},{0xF61C442166953425LL}},{{-1L},{1L},{0xEC4C08A7187A1B9ELL},{0x3F3B573118563516LL},{-1L},{-1L}},{{0xEC4C08A7187A1B9ELL},{0x134225549F18673DLL},{1L},{0xDB5FEFC054B48A9DLL},{0x03F775840E4CD775LL},{0xE6C9F2CB62BED725LL}},{{0x50E5D2E0951C0193LL},{0xB4EE8D730D8C9820LL},{3L},{0xB4EE8D730D8C9820LL},{0x50E5D2E0951C0193LL},{1L}},{{-1L},{0xEC4C08A7187A1B9ELL},{0xB4EE8D730D8C9820LL},{0x1B0B73E0871B55B0LL},{0L},{0L}},{{0L},{0x03F775840E4CD775LL},{0L},{0xEC4C08A7187A1B9ELL},{3L},{0L}}},{{{-1L},{0x8648A1B5393096AELL},{0xB4EE8D730D8C9820LL},{-6L},{0x92F01398E05FCD24LL},{1L}},{{3L},{0x8E4BE4EE1A6DA833LL},{3L},{0L},{1L},{0xE6C9F2CB62BED725LL}},{{-5L},{0x851D63D518071FB3LL},{1L},{3L},{-9L},{-1L}},{{0L},{3L},{0xEC4C08A7187A1B9ELL},{3L},{0L},{0xF61C442166953425LL}},{{0L},{0x3DC3103039797CB1LL},{-1L},{0x0016DD56EE4A9FD0LL},{0xE6C9F2CB62BED725LL},{0L}},{{-9L},{-5L},{0xE6C9F2CB62BED725LL},{-6L},{3L},{0x2FA06A06E3F9303FLL}},{{1L},{0x134225549F18673DLL},{0x3F3B573118563516LL},{0x3F3B573118563516LL},{0x134225549F18673DLL},{1L}}},{{{0xFEFF8E969702BB50LL},{-1L},{1L},{0x92F01398E05FCD24LL},{0L},{0x50E5D2E0951C0193LL}},{{-1L},{0xB4EE8D730D8C9820LL},{3L},{0L},{0xF448621B9FFF5155LL},{1L}},{{-1L},{0x3DC3103039797CB1LL},{0L},{0x92F01398E05FCD24LL},{0x851D63D518071FB3LL},{0L}},{{0xFEFF8E969702BB50LL},{0L},{3L},{0x3F3B573118563516LL},{3L},{0x8648A1B5393096AELL}},{{1L},{0L},{0x4ED9FCD9CB1F1767LL},{-6L},{1L},{-1L}},{{-9L},{3L},{3L},{0x0016DD56EE4A9FD0LL},{-6L},{0x50E5D2E0951C0193LL}},{{0L},{0x851D63D518071FB3LL},{1L},{3L},{0x88B9B3EE44FEFAEBLL},{0x462892D5EC242DCCLL}}},{{{0L},{0x03F775840E4CD775LL},{0L},{3L},{0x851D63D518071FB3LL},{0xF61C442166953425LL}},{{-5L},{0xFEFF8E969702BB50LL},{0xE6C9F2CB62BED725LL},{0L},{0xE6C9F2CB62BED725LL},{0xFEFF8E969702BB50LL}},{{3L},{0xD425E7452605EA59LL},{4L},{-6L},{0x03F775840E4CD775LL},{0x0016DD56EE4A9FD0LL}},{{-1L},{-1L},{0x3F3B573118563516LL},{0xEC4C08A7187A1B9ELL},{1L},{-1L}},{{0L},{-1L},{1L},{0x1B0B73E0871B55B0LL},{0x03F775840E4CD775LL},{-1L}},{{-1L},{0xD425E7452605EA59LL},{3L},{0xB4EE8D730D8C9820LL},{0xE6C9F2CB62BED725LL},{1L}},{{0x50E5D2E0951C0193LL},{0xFEFF8E969702BB50LL},{0xB4EE8D730D8C9820LL},{0xDB5FEFC054B48A9DLL},{0x851D63D518071FB3LL},{0x8648A1B5393096AELL}}},{{{0xEC4C08A7187A1B9ELL},{0x03F775840E4CD775LL},{0x6DE7C755C647BDC4LL},{0x3F3B573118563516LL},{0x88B9B3EE44FEFAEBLL},{0x851D63D518071FB3LL}},{{-1L},{-1L},{0x8E4BE4EE1A6DA833LL},{0L},{0x851D63D518071FB3LL},{0xEC4C08A7187A1B9ELL}},{{-6L},{0x1B0B73E0871B55B0LL},{1L},{0x4ED9FCD9CB1F1767LL},{0x8648A1B5393096AELL},{1L}},{{-6L},{0x50E5D2E0951C0193LL},{3L},{1L},{1L},{3L}},{{0x0016DD56EE4A9FD0LL},{0x0016DD56EE4A9FD0LL},{0L},{0x134225549F18673DLL},{-1L},{0xB4EE8D730D8C9820LL}},{{0x92472564C60A1DBDLL},{0L},{-1L},{0xD425E7452605EA59LL},{-1L},{0L}},{{-1L},{0x92472564C60A1DBDLL},{-1L},{0L},{0x0016DD56EE4A9FD0LL},{0xB4EE8D730D8C9820LL}}}};
            int64_t **l_1611[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1611[i] = (void*)0;
            (*l_1604) = l_1603;
            l_1521 ^= ((**l_1604) = (safe_lshift_func_uint16_t_u_s(((((**g_475) = ((p_10.f1 == ((l_1609[4][4][3] , l_1610) != (g_184 = &g_492))) ^ (*g_15))) > (((*l_1603) & 0x0AL) >= g_1487.f4)) == (**l_1604)), p_10.f0)));
        }
    }
    return (*p_13);
}



static int8_t * func_17(union U2  p_18, int8_t * p_19, const union U1  p_20)
{ 
    int16_t l_1313 = 0x1234L;
    uint64_t l_1332 = 18446744073709551614UL;
    int32_t l_1333 = 0xFE587D08L;
    int32_t *l_1334[7] = {&g_21[5][4][1].f4,&g_286,&g_286,&g_21[5][4][1].f4,&g_286,&g_286,&g_21[5][4][1].f4};
    int i;
    if (l_1313)
    { 
        (*g_238) = (*g_238);
        return &g_249;
    }
    else
    { 
        union U2 l_1321 = {{1UL,0xD9L,0xEB9E2461L,18446744073709551615UL,0x028DL,-10L,0xE5L,0UL}};
        union U3 l_1322 = {5UL};
        uint32_t *l_1323 = &g_2;
        int32_t *l_1326 = (void*)0;
        int32_t *l_1327 = (void*)0;
        int32_t *l_1328 = &g_705.f2;
        (*l_1328) |= ((++(**g_475)) >= ((safe_lshift_func_uint16_t_u_s((*g_96), (((*g_15) < (*g_15)) > (+(p_18.f2++))))) != (l_1321 , (l_1322 , (((*l_1323) = 0xD314BF63L) || (safe_sub_func_uint64_t_u_u(0x984277CCA8AC6717LL, 5L)))))));
        if (l_1321.f1.f7)
            goto lbl_1329;
        p_18.f4 = 1L;
lbl_1329:
        (**g_237) = &l_1322;
        (*l_1328) &= p_20.f3;
        (*l_1328) |= 0xA6EABAE9L;
    }
    g_21[5][4][1].f4 &= ((safe_div_func_uint8_t_u_u(p_20.f3, l_1332)) | (l_1333 = p_20.f3));
    for (g_888.f3.f6 = 0; (g_888.f3.f6 < (-19)); --g_888.f3.f6)
    { 
        int32_t *l_1337 = (void*)0;
        int32_t **l_1338 = &l_1337;
        (*l_1338) = l_1337;
    }
    for (g_490.f1.f2 = 0; (g_490.f1.f2 >= 5); ++g_490.f1.f2)
    { 
        union U4 * const ***l_1350 = &g_829[3][0][1];
        int32_t l_1358 = 0x38C9FE3EL;
        int32_t l_1364 = (-1L);
        for (g_888.f3.f5 = 0; (g_888.f3.f5 < 19); g_888.f3.f5 = safe_add_func_uint32_t_u_u(g_888.f3.f5, 9))
        { 
            int32_t l_1343 = 0L;
            int32_t l_1346 = 0xAFD816F4L;
            if (l_1343)
            { 
                l_1346 &= (safe_mod_func_uint8_t_u_u(((void*)0 != &g_65), l_1343));
                return &g_249;
            }
            else
            { 
                int8_t l_1347 = 8L;
                uint8_t *l_1359[2][4] = {{(void*)0,&g_21[5][4][1].f1.f7,(void*)0,(void*)0},{&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&g_1360,&g_21[5][4][1].f1.f7}};
                int32_t l_1361 = 6L;
                int16_t *l_1362 = (void*)0;
                int16_t *l_1363[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                if (l_1343)
                    break;
                if (l_1347)
                    break;
                l_1364 &= (p_20.f2 <= (l_1358 = (safe_mul_func_uint8_t_u_u(((p_18.f4 = l_1347) , (l_1350 == &g_829[3][0][1])), (l_1361 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((*g_96) = (l_1347 , (4L <= ((g_490.f0 & 0x483A900AL) < p_20.f0)))), l_1358)) == l_1358), p_20.f3)) ^ 0x9B7A87EAL))), p_20.f2)))))));
                p_18.f4 = (safe_unary_minus_func_int64_t_s(0x783640FC1A9F5152LL));
            }
        }
    }
    return &g_274;
}



static struct S0  func_23(uint32_t  p_24)
{ 
    union U2 ****l_1229 = &g_384;
    int32_t l_1231 = 0x36EF3FE7L;
    uint32_t l_1249 = 1UL;
    uint64_t ****l_1282 = (void*)0;
    int32_t l_1302[3][6][1] = {{{0x0D7E66E8L},{0x29D5F0A8L},{0x29D5F0A8L},{0x0D7E66E8L},{(-1L)},{(-10L)}},{{0x0D7E66E8L},{(-10L)},{(-1L)},{0x0D7E66E8L},{0x29D5F0A8L},{0x29D5F0A8L}},{{0x0D7E66E8L},{(-1L)},{(-10L)},{0x0D7E66E8L},{(-10L)},{(-1L)}}};
    uint32_t l_1305[2];
    struct S0 l_1311 = {0xA0E650DFF2D4DB50LL,-9L,0x60988423L,18446744073709551615UL,1L,0xC027A5D6L,0xA7L,0UL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1305[i] = 18446744073709551615UL;
    for (g_705.f4 = 0; (g_705.f4 <= 1); g_705.f4 += 1)
    { 
        union U2 ****l_1226[1][1][1];
        int32_t l_1230 = 0L;
        union U3 * const l_1279[7] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
        const int64_t *l_1285[6] = {&g_490.f0,&g_490.f0,&g_490.f0,&g_490.f0,&g_490.f0,&g_490.f0};
        union U1 l_1289 = {0L};
        int32_t l_1300 = 1L;
        int32_t l_1301 = 0L;
        int32_t l_1304 = 0x862D3468L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1226[i][j][k] = &g_384;
            }
        }
        for (g_888.f3.f5 = 0; (g_888.f3.f5 <= 1); g_888.f3.f5 += 1)
        { 
            uint16_t l_1223[7] = {65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL};
            int i;
            l_1223[1] = 1L;
        }
        for (g_88.f0 = 1; (g_88.f0 >= 0); g_88.f0 -= 1)
        { 
            const union U1 l_1227 = {0L};
            union U3 * const l_1228 = &g_87;
            int8_t l_1245 = (-4L);
            if ((safe_mul_func_int8_t_s_s((l_1226[0][0][0] != (g_888 , l_1229)), (g_21[5][4][1].f0.f5 < ((p_24 > p_24) ^ l_1230)))))
            { 
                int16_t l_1244 = 1L;
                int32_t l_1258 = 0x7D751A4CL;
                for (g_888.f1.f2 = 0; (g_888.f1.f2 >= 0); g_888.f1.f2 -= 1)
                { 
                    int32_t l_1236 = 9L;
                    int16_t *l_1241 = &g_298;
                    int32_t l_1246 = 0x382E455DL;
                    int32_t l_1259 = 0xDAF0650AL;
                    int32_t *l_1260 = &g_84;
                    int i, j;
                    l_1246 = ((l_1231 >= (!p_24)) , (safe_add_func_int8_t_s_s((+l_1236), ((safe_mul_func_uint16_t_u_u((**g_954), (safe_add_func_int64_t_s_s((((*l_1241) = l_1230) <= (((safe_div_func_int16_t_s_s(p_24, l_1244)) != l_1245) , 0xD8CFL)), (-1L))))) > 0x64L))));
                    (*l_1260) |= (((safe_add_func_uint32_t_u_u(l_1231, (0x14A86A1AL >= l_1249))) && (safe_rshift_func_int16_t_s_s((((((safe_add_func_uint64_t_u_u((((0xFAL > (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((l_1258 && (l_1259 == 0x5098C1DDL)), 1)) <= l_1249), 2))) | l_1244) > p_24), p_24)) , g_15) == g_15) , &g_1185) == (void*)0), p_24))) > l_1244);
                }
            }
            else
            { 
                int64_t l_1262 = 1L;
                for (g_908.f1.f0 = 0; (g_908.f1.f0 <= 1); g_908.f1.f0 += 1)
                { 
                    int32_t *l_1261[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1261[i] = &g_888.f4;
                    g_127[0][1] |= l_1231;
                    if (l_1231)
                        continue;
                    if (p_24)
                        continue;
                    l_1262 &= p_24;
                }
            }
        }
        l_1230 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s(0x6377E21B8A1BED8CLL, (safe_lshift_func_int8_t_s_s(((g_52.f2 <= (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((*g_238) != l_1279[3]), (+(~(l_1282 == l_1282))))), (safe_add_func_int8_t_s_s((-8L), 0x62L)))), 0x2AL))) >= l_1249), p_24)))), g_705.f4)), 9)), p_24));
        for (g_85.f3.f1 = 1; (g_85.f3.f1 >= 0); g_85.f3.f1 -= 1)
        { 
            union U2 l_1288 = {{0x473FB9BDF6D09780LL,2L,0x175A122FL,0xE1C1680302AFA575LL,-9L,1L,0x33L,0x06L}};
            int32_t *l_1294 = &g_84;
            int32_t l_1299[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1299[i] = 0x7A441CBBL;
            if (l_1249)
                break;
            (*l_1294) |= (((l_1285[1] == (g_184 = (((((safe_sub_func_uint64_t_u_u((l_1288 , (l_1289 , ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*g_15), (*g_15))), (p_24 <= p_24))) && 0xAB060579L))), p_24)) < 0x8C577C02034A491ELL) >= p_24) != g_888.f4) , (void*)0))) > g_88.f0) && 0x1FE8L);
            for (g_249 = 0; (g_249 <= 1); g_249 += 1)
            { 
                int32_t l_1298[4][6] = {{0x052742F7L,0xF602A711L,0xF602A711L,0x052742F7L,3L,(-1L)},{0x26BBAFD5L,0xF602A711L,3L,0x26BBAFD5L,3L,0xF602A711L},{0x9F4F8C6DL,0xF602A711L,(-1L),0x9F4F8C6DL,3L,3L},{0x052742F7L,0xF602A711L,0xF602A711L,0x052742F7L,3L,(-1L)}};
                int32_t l_1303[6][7][3] = {{{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L}},{{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL}},{{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L}},{{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L}},{{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L}},{{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL},{0x872ED102L,0x872ED102L,9L},{0L,1L,0L},{0x872ED102L,9L,9L},{0xB9D71CFEL,1L,0xB9D71CFEL}}};
                int i, j, k;
                (*l_1294) = p_24;
                if (l_1289.f0)
                { 
                    int32_t *l_1295 = (void*)0;
                    int32_t *l_1296 = &g_888.f2;
                    int32_t *l_1297[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1297[i] = &g_514.f0;
                    if (p_24)
                        break;
                    ++l_1305[1];
                }
                else
                { 
                    struct S0 l_1310 = {0xA236570EAB3104E5LL,0L,0L,0xEB77425D4EB635C4LL,-1L,1L,0xDCL,0xBAL};
                    (*l_1294) = (safe_add_func_uint8_t_u_u(0xD7L, (l_1303[5][2][0] | 0x77B5D843L)));
                    (*l_1294) = p_24;
                    return l_1310;
                }
            }
        }
    }
    return l_1311;
}



static uint16_t  func_27(union U3 * p_28)
{ 
    uint32_t l_39 = 18446744073709551608UL;
    union U5 l_46 = {0L};
    int8_t l_283 = 0x0DL;
    uint8_t *l_284 = &g_258.f1.f7;
    int32_t *l_285[6] = {&g_286,&g_286,&g_286,&g_286,&g_286,&g_286};
    union U2 *l_291 = &g_21[4][0][1];
    uint16_t *l_292 = &g_88.f3;
    uint16_t *l_293 = (void*)0;
    uint16_t *l_294 = &g_88.f3;
    uint16_t *l_295 = (void*)0;
    uint16_t *l_296 = &g_88.f3;
    uint16_t *l_297[4][6] = {{(void*)0,&g_87.f0,&g_87.f0,(void*)0,&g_87.f0,&g_87.f0},{(void*)0,&g_87.f0,&g_87.f0,(void*)0,&g_87.f0,&g_87.f0},{(void*)0,&g_87.f0,&g_87.f0,(void*)0,&g_87.f0,&g_87.f0},{(void*)0,&g_87.f0,&g_87.f0,(void*)0,&g_87.f0,&g_87.f0}};
    const union U3 * const *** const l_334 = (void*)0;
    const union U3 * const *** const *l_333[2];
    const int32_t l_335 = (-8L);
    int16_t l_337 = (-8L);
    uint64_t *l_378[2][6] = {{(void*)0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,(void*)0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0},{(void*)0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,(void*)0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0}};
    uint8_t l_482 = 0x8CL;
    union U2 l_488 = {{0xF7CE75AFCE4DCDC1LL,0xABL,0xBFA205D7L,0x7C498F351691228ELL,0x45B2L,0x4F3CF18BL,0x7EL,0x0AL}};
    uint32_t l_546[2][7][1];
    union U5 **l_563 = &g_511;
    const int32_t l_569 = 0L;
    int8_t l_575 = (-1L);
    int8_t l_576 = 0xBEL;
    const int32_t l_625[2] = {0L,0L};
    union U1 *l_671 = &g_490;
    union U2 ***l_683 = &g_385;
    union U6 l_694 = {1L};
    int32_t l_699[6][6] = {{0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L},{0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L},{0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L},{0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L},{0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L},{0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L,0xC6691635L}};
    int16_t *l_700[4];
    union U6 *l_704 = &g_705;
    uint64_t l_716 = 18446744073709551609UL;
    union U4 l_913 = {0x02L};
    union U2 ****l_1114 = &g_384;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_333[i] = &l_334;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_546[i][j][k] = 18446744073709551615UL;
        }
    }
    for (i = 0; i < 4; i++)
        l_700[i] = (void*)0;
lbl_450:
    g_286 ^= (safe_rshift_func_int16_t_s_s((((*l_284) = (safe_mod_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_39 && (((l_46.f0 = (l_39 < func_40(l_46, (safe_lshift_func_int8_t_s_s((0x5A6EDB5BL | (((l_46.f0 ^ 0L) , func_49(g_52, p_28)) , 0xCC605353L)), 1)), l_39, g_86, g_88))) | l_39) , l_39)) >= l_39), l_283)), 1UL)) == l_283), l_39))) , 0xDA63L), 15));
    if ((((*g_184) == (safe_rshift_func_uint8_t_u_s(((*l_284) = g_52.f3), 1))) <= (safe_div_func_int32_t_s_s(((g_298 &= (g_52.f2 == (((void*)0 != l_291) ^ ((g_30.f0 != (*g_96)) && g_150[0][1])))) && g_21[5][4][1].f0.f4), g_21[5][4][1].f0.f7))))
    { 
        int32_t l_311[4][6] = {{0x551A3DD6L,0x1E1EF249L,0x40362993L,0x7D2C5115L,0x40362993L,0x1E1EF249L},{0x40362993L,0x551A3DD6L,0L,5L,5L,0L},{0x40362993L,0x40362993L,5L,0x7D2C5115L,0xAA573B12L,0x7D2C5115L},{0x551A3DD6L,0x40362993L,0x551A3DD6L,0L,5L,5L}};
        int32_t l_314[7][4] = {{5L,5L,0x7673ABEBL,5L},{5L,0x3F9FCAC3L,0x3F9FCAC3L,5L},{0x3F9FCAC3L,5L,0x3F9FCAC3L,0x3F9FCAC3L},{5L,5L,0x7673ABEBL,5L},{5L,0x3F9FCAC3L,0x3F9FCAC3L,5L},{0x3F9FCAC3L,5L,0x3F9FCAC3L,0x3F9FCAC3L},{5L,5L,0x7673ABEBL,5L}};
        int16_t l_315 = 0x3642L;
        int32_t l_316 = 0xF66929CFL;
        union U3 ****l_331 = &g_237;
        union U3 *****l_330[7] = {(void*)0,&l_331,&l_331,(void*)0,&l_331,&l_331,(void*)0};
        int64_t l_336 = 0xD534FA00A9F9CE9BLL;
        union U4 l_360[7][1][3] = {{{{0L},{0L},{0L}}},{{{0L},{0L},{0L}}},{{{0L},{0L},{0L}}},{{{0L},{0L},{0L}}},{{{0L},{0L},{0L}}},{{{0L},{0L},{0L}}},{{{0L},{0L},{0L}}}};
        union U2 *l_361 = &g_21[0][4][1];
        const struct S0 l_377 = {0xB76ED0D1A3F0EE69LL,-1L,0L,0x3F198DC54B8A9A32LL,0x11D6L,0x7BDD3ABBL,0xC8L,255UL};
        uint64_t *l_379[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_391 = 18446744073709551615UL;
        uint32_t l_416[7] = {0x6611B2A4L,0x6611B2A4L,0x6611B2A4L,0x6611B2A4L,0x6611B2A4L,0x6611B2A4L,0x6611B2A4L};
        uint32_t l_420 = 0xB3C63A3BL;
        const union U3 *l_446 = &g_87;
        const union U3 **l_445 = &l_446;
        const union U3 ***l_444 = &l_445;
        uint8_t l_463 = 253UL;
        uint64_t ***l_465 = (void*)0;
        const int32_t l_479[7][3][4] = {{{(-10L),0L,6L,0x102A218BL},{0L,0L,0x86B2B067L,(-2L)},{(-2L),1L,1L,(-2L)}},{{0x75609334L,0x61A8A0F5L,(-6L),(-1L)},{0L,(-2L),0xC57EB328L,0xA67F9876L},{(-2L),0x3806EBA1L,(-10L),0xA67F9876L}},{{6L,(-2L),0x634DA196L,(-1L)},{0x6DC4C36AL,0x61A8A0F5L,0xB8AAAD6DL,(-2L)},{0L,1L,0x75609334L,(-2L)}},{{(-6L),0L,0x634DA196L,0x102A218BL},{3L,0L,0xD99BB7E1L,0L},{(-2L),0x634DA196L,6L,0x61A8A0F5L}},{{0x634DA196L,0L,(-6L),(-10L)},{(-2L),0L,0L,(-2L)},{(-2L),0x102A218BL,(-6L),1L}},{{0x634DA196L,(-2L),6L,0xCAA482C1L},{(-2L),0xAD8C09BBL,0xD99BB7E1L,0xA67F9876L},{3L,0x75609334L,0x634DA196L,1L}},{{(-6L),0x61A8A0F5L,0x75609334L,0x75609334L},{0L,0L,0xB8AAAD6DL,(-2L)},{0x6DC4C36AL,(-1L),0x634DA196L,0x61A8A0F5L}}};
        int32_t l_590 = 0x6BB07276L;
        union U4 l_612 = {0x4DL};
        uint64_t l_613 = 18446744073709551608UL;
        const uint16_t **l_615 = (void*)0;
        const uint16_t ***l_614[6] = {&l_615,&l_615,&l_615,&l_615,&l_615,&l_615};
        uint32_t l_640[2];
        int32_t l_659[2][2][1];
        int32_t l_675 = (-8L);
        uint16_t **l_735[7] = {(void*)0,&l_296,(void*)0,(void*)0,&l_296,(void*)0,(void*)0};
        int64_t l_753 = 1L;
        union U6 l_817 = {0x72D19130A6CCAC9CLL};
        union U2 ****l_858 = &g_384;
        const union U1 l_909[6] = {{0xAD45BE41F5EEAEFALL},{0xAD45BE41F5EEAEFALL},{0xAD45BE41F5EEAEFALL},{0xAD45BE41F5EEAEFALL},{0xAD45BE41F5EEAEFALL},{0xAD45BE41F5EEAEFALL}};
        uint64_t l_965 = 18446744073709551615UL;
        int32_t l_1009 = 0xC10995CEL;
        uint16_t l_1078 = 0xFFC0L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_640[i] = 0x52B807A7L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_659[i][j][k] = 0xEEB43E5EL;
            }
        }
        l_316 &= (safe_div_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((-1L) & (((safe_add_func_uint64_t_u_u(g_21[5][4][1].f1.f0, 0L)) & (((safe_div_func_int64_t_s_s(l_311[2][2], ((*g_184) = (l_311[0][5] && ((((safe_rshift_func_int8_t_s_u(l_311[2][2], 6)) != 0xB2EF82F4B32328A2LL) < l_311[2][2]) || l_314[5][3]))))) != l_314[3][3]) <= g_21[5][4][1].f0.f0)) , (*g_184))) > g_21[5][4][1].f0.f0), g_258.f0)) , g_52.f0), 4294967295UL)), l_315)) >= 18446744073709551606UL), (-1L)));
        if ((((((safe_mul_func_int8_t_s_s((+(safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((l_314[0][3] , (safe_mul_func_uint8_t_u_u((((g_332 = (void*)0) != (l_311[2][2] , &g_237)) == ((6UL & ((*l_284) = ((l_333[0] == (void*)0) ^ l_335))) | (*g_96))), g_187))), g_21[5][4][1].f0.f5)), l_336)), l_314[5][3])), l_315))), l_316)) || l_316) , g_21[5][4][1].f1.f7) >= l_337) && 18446744073709551613UL))
        { 
            uint64_t l_344 = 18446744073709551615UL;
            int32_t l_345[5][7] = {{0xE1F256A3L,5L,0xE1F256A3L,0L,0xE1F256A3L,5L,0xE1F256A3L},{0x920A235CL,(-7L),0xAF32937BL,(-1L),(-1L),0xAF32937BL,(-7L)},{0L,5L,0x1279A759L,5L,0L,5L,0x1279A759L},{(-1L),(-1L),0xAF32937BL,(-7L),0x920A235CL,0x920A235CL,(-7L)},{0xE1F256A3L,0L,0xE1F256A3L,5L,0xE1F256A3L,0L,0xE1F256A3L}};
            uint8_t *l_346 = (void*)0;
            uint8_t *l_347 = &g_258.f1.f7;
            uint8_t *l_348[2][7] = {{&g_85.f1.f7,&g_85.f1.f7,&g_85.f1.f7,&g_85.f1.f7,&g_85.f1.f7,&g_85.f1.f7,&g_85.f1.f7},{&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7}};
            uint64_t *l_352 = (void*)0;
            uint64_t *l_353 = &g_85.f3.f0;
            uint64_t *l_354 = (void*)0;
            uint64_t *l_355 = &g_85.f1.f3;
            uint64_t *l_356 = &g_85.f1.f3;
            uint64_t *l_357 = &g_85.f3.f3;
            uint64_t *l_358 = (void*)0;
            uint64_t *l_359 = &g_278[1][1][1];
            uint32_t *l_362 = (void*)0;
            uint32_t *l_363 = &g_187;
            uint32_t *l_364[3];
            uint16_t l_381 = 65529UL;
            int32_t l_383 = 0x61F96C25L;
            union U4 l_406 = {0L};
            union U2 **l_419 = &l_291;
            int16_t l_480 = (-1L);
            union U1 *l_489[4][7] = {{&g_490,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490},{(void*)0,&g_490,&g_490,&g_490,&g_490,&g_490,&g_490}};
            union U5 *l_513 = &g_514;
            uint16_t **l_545 = &l_293;
            uint16_t **l_547 = &l_296;
            int i, j;
            for (i = 0; i < 3; i++)
                l_364[i] = (void*)0;
            if ((((g_365 = ((*l_363) |= (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint64_t_u_u(l_344, (((*l_291) , g_184) == (void*)0))), ((((*l_353) = ((*l_359) &= (l_314[2][1] & (g_349--)))) & ((l_360[4][0][1] , ((g_21[5][4][1].f1.f6 , l_361) != l_361)) & (*g_96))) > l_311[2][2]))), (*g_96))))) , l_345[0][1]) & l_345[3][4]))
            { 
                int64_t **l_368[7][4] = {{(void*)0,&g_184,&g_184,&g_184},{&g_184,(void*)0,&g_184,&g_184},{(void*)0,(void*)0,&g_184,&g_184},{(void*)0,(void*)0,(void*)0,&g_184},{(void*)0,&g_184,&g_184,(void*)0},{(void*)0,&g_184,&g_184,&g_184},{&g_184,(void*)0,&g_184,&g_184}};
                int16_t *l_380 = &l_337;
                int32_t l_382 = (-1L);
                union U2 ****l_387 = &g_384;
                struct S0 **l_389 = &g_388[4][1];
                int i, j;
                for (g_258.f1.f5 = 0; (g_258.f1.f5 <= 0); g_258.f1.f5 += 1)
                { 
                    union U5 *l_367 = &g_258;
                    union U5 **l_366 = &l_367;
                    (*l_366) = &g_258;
                    return (*g_96);
                }
                l_383 |= ((g_184 = g_184) == (((--(*l_363)) , (safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(((*l_380) = (g_52 , (safe_mul_func_int8_t_s_s(((*g_15) = (((((l_377 , &l_316) == &l_345[3][4]) , l_378[1][2]) == l_379[3]) ^ (*g_15))), l_345[2][2])))), l_381)) == (-1L)), l_382))) , l_378[0][5]));
                (*l_387) = g_384;
                (*l_389) = g_388[4][0];
            }
            else
            { 
                return (*g_96);
            }
            g_390 = (void*)0;
            ++l_391;
            if (l_377.f2)
            { 
                uint64_t **l_396 = &l_354;
                int32_t l_403 = (-1L);
                if ((safe_mod_func_int32_t_s_s((l_345[3][4] && (l_378[1][2] == ((*l_396) = &g_349))), (safe_sub_func_uint8_t_u_u(g_274, (g_21[5][4][1].f0.f6 | (g_21[5][4][1].f1.f2 != (safe_mul_func_uint16_t_u_u(0x6938L, l_403)))))))))
                { 
                    return l_403;
                }
                else
                { 
                    union U2 l_409[1][4][1] = {{{{{18446744073709551615UL,8L,-1L,0UL,0L,0xFF209D15L,0x04L,0x93L}}},{{{18446744073709551615UL,8L,-1L,0UL,0L,0xFF209D15L,0x04L,0x93L}}},{{{18446744073709551615UL,8L,-1L,0UL,0L,0xFF209D15L,0x04L,0x93L}}},{{{18446744073709551615UL,8L,-1L,0UL,0L,0xFF209D15L,0x04L,0x93L}}}}};
                    struct S0 *l_412 = &g_21[5][4][1].f1;
                    struct S0 **l_413 = &l_412;
                    int i, j, k;
                    g_87.f1 = ((*g_96) || (l_377.f1 == ((safe_lshift_func_int16_t_s_u((l_406 , (g_388[4][0] == ((*l_413) = ((safe_rshift_func_int16_t_s_s((l_409[0][2][0] , (g_85 , (safe_div_func_uint32_t_u_u(l_360[4][0][1].f1, 0x48E2DB8CL)))), 8)) , l_412)))), (*g_96))) & l_409[0][2][0].f1.f3)));
                    l_316 &= (safe_lshift_func_uint8_t_u_s(3UL, 6));
                    return l_416[4];
                }
            }
            else
            { 
                struct S0 l_421 = {0x75AF4E7569644A7FLL,0x48L,-8L,6UL,-7L,0x7AC33672L,0L,4UL};
                int32_t l_422 = 0xE96F6834L;
                union U2 **l_428 = &l_361;
                int32_t **l_455 = &l_285[0];
                int32_t **l_457 = &g_65;
                int32_t l_481 = 1L;
                union U3 * const **l_495 = (void*)0;
                uint64_t l_508 = 0xCE50CC6432BB8DB4LL;
lbl_468:
                if ((l_383 &= (safe_lshift_func_int16_t_s_u((((l_344 >= (((*g_384) != ((l_416[6] | l_345[3][4]) , l_419)) <= l_420)) , l_421) , l_377.f2), 13))))
                { 
                    int16_t *l_435 = &g_298;
                    int32_t l_447 = 0x9C159114L;
                    const uint32_t l_448 = 0UL;
                    l_422 = l_421.f7;
                    g_127[0][2] = l_345[3][4];
                    l_316 ^= (safe_add_func_uint16_t_u_u((((!((((*g_384) = (*g_384)) == l_428) , (safe_add_func_uint64_t_u_u((g_150[0][0] , (((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((*l_435) &= 0x1C20L), 11)), 6)) <= (0L & (safe_div_func_int32_t_s_s((!(((((((safe_mod_func_int16_t_s_s((l_345[4][3] == ((~(safe_add_func_int8_t_s_s((l_444 == (*l_331)), g_63))) < 0xC4F8F9C657D68D3ALL)), (*g_96))) | l_391) != g_88.f0) >= 0xDB87L) || 0x939585662C7F46D2LL) , l_336) <= l_447)), (-4L))))) , g_365)), l_447)))) <= l_448) | 0UL), g_449[2]));
                }
                else
                { 
                    int32_t ***l_456 = &l_455;
                    int32_t l_464 = 1L;
                    uint64_t ****l_466 = (void*)0;
                    uint64_t ****l_467 = &l_465;
                    if (g_52.f0)
                        goto lbl_450;
                    if (l_421.f6)
                        goto lbl_468;
                    g_85.f4 = ((safe_div_func_int64_t_s_s((((((safe_add_func_int8_t_s_s((*g_15), (((*l_456) = l_455) == l_457))) <= g_21[5][4][1].f1.f5) || (*g_15)) , (*p_28)) , (safe_unary_minus_func_uint8_t_u(((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_463 &= 0x50BD24C7L), l_464)), l_360[4][0][1].f1)) , l_381)))), (*g_184))) ^ l_464);
                    (*l_467) = l_465;
                    g_85.f4 |= (-2L);
                }
                l_316 = (safe_rshift_func_int8_t_s_u(((((safe_sub_func_int64_t_s_s((g_298 ^ (((g_449[2] == 3UL) == (((*l_292) = (safe_div_func_uint16_t_u_u(((g_475 == &g_476[4]) , (safe_div_func_int8_t_s_s((-1L), g_21[5][4][1].f2))), (*g_96)))) <= 0x77AFL)) && (*g_96))), 0x84E4BF5F36696C22LL)) ^ 1L) < l_479[3][1][0]) <= (*g_96)), 7));
                l_482--;
                for (g_85.f3.f7 = 12; (g_85.f3.f7 < 37); g_85.f3.f7 = safe_add_func_uint64_t_u_u(g_85.f3.f7, 8))
                { 
                    int32_t l_487 = 0x204CE9E6L;
                    union U1 **l_491 = &l_489[1][1];
                    const uint32_t l_496 = 18446744073709551610UL;
                    const union U3 ** const ***l_503 = &g_499;
                    int16_t *l_504 = (void*)0;
                    int16_t *l_505 = &l_360[4][0][1].f4;
                    int16_t *l_506 = (void*)0;
                    int16_t *l_507[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_507[i] = &g_244;
                    l_487 |= 0xE19FBED2L;
                    (*l_491) = (l_488 , l_489[1][1]);
                    g_492 = 4L;
                    l_508 &= ((safe_div_func_int8_t_s_s((l_495 != (((((l_377 , (l_496 | ((void*)0 == &g_127[0][2]))) & (safe_mul_func_int16_t_s_s((g_244 &= (&l_495 == ((*l_503) = g_499))), 7UL))) == l_377.f6) , (*p_28)) , (*l_331))), (-8L))) , l_345[3][4]);
                }
                l_316 = g_509;
            }
            if ((~l_463))
            { 
                return l_406.f1;
            }
            else
            { 
                union U5 **l_512[4][3][4] = {{{&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,&g_511,&g_511}},{{&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,(void*)0,&g_511},{&g_511,&g_511,(void*)0,&g_511}},{{&g_511,&g_511,&g_511,(void*)0},{&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,&g_511,&g_511}},{{&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,&g_511,&g_511},{&g_511,&g_511,(void*)0,&g_511}}};
                int32_t l_534[3];
                uint32_t *l_568 = &g_449[2];
                uint16_t l_570 = 0x8A0AL;
                int32_t **l_577 = (void*)0;
                int32_t **l_578 = &l_285[5];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_534[i] = 0xA58BBA93L;
                l_513 = (l_377 , g_511);
                for (l_336 = 0; (l_336 >= 21); ++l_336)
                { 
                    const union U6 l_531 = {0xCFD712ACB60B3A69LL};
                    int16_t *l_535 = &l_480;
                    uint16_t ** const l_544 = &l_297[0][3];
                    uint16_t ***l_549 = &l_547;
                    int64_t *l_554 = &g_85.f0;
                    int64_t *l_555 = &g_492;
                    int32_t l_556 = 1L;
                    l_383 = (safe_div_func_uint8_t_u_u(l_383, (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((*g_15) = 0x37L), (safe_div_func_uint8_t_u_u(((-1L) == (g_30.f0 |= ((*l_296) = ((((safe_lshift_func_uint8_t_u_u(((g_127[0][2] = (l_531 , (((*l_535) |= (l_360[4][0][1].f1 <= (safe_sub_func_int8_t_s_s(((g_490.f2 || l_534[1]) != l_534[1]), l_416[2])))) != (*g_96)))) < l_377.f5), 0)) <= l_345[3][4]) == 0x8AE4165638D19F29LL) ^ 0xE4C0BF29E3691A8FLL)))), g_21[5][4][1].f1.f6)))), 0x2DCBL)), l_344)), l_345[4][0]))));
                    l_546[1][0][0] |= (((l_377.f7 | (safe_add_func_uint32_t_u_u(((((g_21[5][4][1].f0.f6 , l_363) == (void*)0) == ((safe_lshift_func_int16_t_s_u(0L, (((*l_535) |= (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_544 != l_545), 0x477EL)), (*g_96)))) > 65527UL))) , 0x375CL)) & 0x15F0L), g_365))) && 0xC75074A92E54A1E2LL) && l_345[2][3]);
                    l_556 &= (((*l_355) = ((((((*l_549) = (g_548 = l_547)) != ((9UL >= g_21[5][4][1].f1.f7) , &g_96)) <= (safe_add_func_int64_t_s_s((l_377 , ((*l_555) &= (((safe_lshift_func_uint8_t_u_u(l_531.f2, (((*g_96) &= (l_377.f2 | l_534[1])) , 0UL))) , l_531.f2) ^ 1L))), l_377.f2))) > (-8L)) & 18446744073709551615UL)) ^ 18446744073709551615UL);
                    return l_479[5][2][2];
                }
                l_534[0] = ((safe_sub_func_int32_t_s_s((1L >= ((safe_rshift_func_int8_t_s_s((l_311[0][3] == g_490.f4), ((*g_15) = (*g_15)))) == (safe_mod_func_int64_t_s_s((((void*)0 != l_563) ^ (((l_383 |= (((*l_568) |= (safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u((l_345[1][5] = (0x92E5L && l_479[3][1][3])), 18446744073709551615UL)), 0x289AA39DL))) , l_360[4][0][1].f1)) , 0x55DBL) == g_298)), l_569)))), 0x005F9193L)) == l_570);
                for (g_490.f1.f5 = 6; (g_490.f1.f5 >= 0); g_490.f1.f5 -= 1)
                { 
                    const union U4 *l_571[7][1] = {{&l_360[4][0][1]},{&l_360[0][0][0]},{&l_360[4][0][1]},{&l_360[0][0][0]},{&l_360[4][0][1]},{&l_360[0][0][0]},{&l_360[4][0][1]}};
                    const union U4 **l_572 = (void*)0;
                    const union U4 **l_573[6][4] = {{&l_571[5][0],&l_571[5][0],&l_571[5][0],&l_571[5][0]},{&l_571[5][0],&l_571[5][0],&l_571[5][0],&l_571[5][0]},{&l_571[5][0],&l_571[5][0],&l_571[5][0],&l_571[5][0]},{&l_571[5][0],&l_571[5][0],&l_571[5][0],&l_571[5][0]},{&l_571[5][0],&l_571[5][0],&l_571[5][0],&l_571[5][0]},{&l_571[5][0],&l_571[5][0],&l_571[5][0],&l_571[5][0]}};
                    int i, j;
                    (**g_237) = p_28;
                    g_574 = l_571[2][0];
                    if (l_381)
                        continue;
                    if (l_575)
                        break;
                    if (l_576)
                        continue;
                }
                (*l_578) = &l_316;
            }
        }
        else
        { 
            (*l_563) = &g_514;
        }
        for (g_88.f2 = 0; (g_88.f2 <= 46); g_88.f2 = safe_add_func_int64_t_s_s(g_88.f2, 2))
        { 
            int8_t l_585 = 0x7CL;
            int32_t **l_596 = (void*)0;
            int32_t ***l_597 = &l_596;
            uint64_t **l_609 = &l_379[3];
            uint64_t ***l_608 = &l_609;
            for (g_490.f1.f5 = (-19); (g_490.f1.f5 == (-6)); g_490.f1.f5 = safe_add_func_uint64_t_u_u(g_490.f1.f5, 9))
            { 
                const int32_t *l_584 = &g_258.f0;
                const int32_t **l_583 = &l_584;
                (*l_583) = &l_335;
                l_585 = g_21[5][4][1].f1.f3;
            }
            for (g_249 = (-13); (g_249 >= 13); ++g_249)
            { 
                uint16_t l_591 = 0x6FA9L;
                if (l_377.f7)
                    break;
                for (l_337 = (-28); (l_337 != 2); l_337 = safe_add_func_uint8_t_u_u(l_337, 6))
                { 
                    const union U1 *l_593 = &g_52;
                    const union U1 **l_592 = &l_593;
                    l_590 |= 0x946F9C4BL;
                    l_591 = l_585;
                    (*l_592) = &g_52;
                    if (g_21[5][4][1].f0.f7)
                        continue;
                }
                g_85.f4 ^= ((safe_sub_func_int8_t_s_s(l_311[2][2], l_377.f2)) > (**g_548));
            }
            (*l_597) = l_596;
            l_316 = (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((1L <= ((safe_mul_func_uint16_t_u_u((g_30.f0 = ((*g_96) = ((((safe_rshift_func_int16_t_s_s(g_249, (safe_rshift_func_int8_t_s_u(((void*)0 != l_608), (((*l_361) , l_479[3][1][0]) ^ ((safe_mul_func_int16_t_s_s(((l_612 , l_613) , 0x3E0BL), g_84)) , l_416[3])))))) , l_614[2]) != &l_615) == l_585))), g_274)) ^ l_479[4][1][0])) , l_585) && l_377.f0), l_377.f2)) && (**g_548)), l_585));
        }
        if ((((void*)0 != l_361) ^ (((**g_475) = (((l_316 = ((l_590 >= (((safe_mul_func_uint8_t_u_u(((**l_563) , (!((safe_lshift_func_uint16_t_u_s(l_311[3][5], (&g_476[3] != (l_625[0] , (void*)0)))) != 0xC2CACE181971561ALL))), (*g_15))) , l_377.f2) < g_30.f0)) | (**g_548))) >= 1L) < (**g_475))) == l_479[3][1][0])))
        { 
            int32_t l_628[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint64_t **l_633 = (void*)0;
            uint64_t **l_638 = &l_378[1][2];
            uint64_t **l_639 = &l_379[3];
            union U6 *l_703 = &l_694;
            int8_t l_721 = 1L;
            uint8_t l_742[5][4] = {{0xD8L,0xD8L,0xD8L,0xD8L},{0xD8L,0xD8L,0xD8L,0xD8L},{0xD8L,0xD8L,0xD8L,0xD8L},{0xD8L,0xD8L,0xD8L,0xD8L},{0xD8L,0xD8L,0xD8L,0xD8L}};
            int32_t l_803 = 0x28AD990FL;
            union U2 ** const *l_835 = &g_385;
            int32_t **l_839 = &l_285[0];
            int i, j;
            (*l_563) = &g_258;
            l_316 &= ((18446744073709551615UL == ((safe_sub_func_int16_t_s_s((l_628[4] , (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((l_377.f5 > l_628[4]) || l_311[2][2]), (l_633 != (void*)0))), 1)) ^ g_16) != (-1L))), 0x03E8L)) & l_628[4])) <= 0x4AA6EAF94BDE6323LL);
            if ((safe_sub_func_int32_t_s_s(l_377.f3, (((void*)0 != &l_628[4]) >= (((((safe_rshift_func_uint8_t_u_u((((*l_639) = ((*l_638) = l_378[1][3])) != &l_613), g_490.f4)) , l_293) == (*g_548)) <= (**g_475)) ^ l_640[0])))))
            { 
                uint8_t l_653 = 0x80L;
                uint8_t *l_658[6][5][5] = {{{&l_482,&l_488.f1.f7,&l_463,&l_488.f1.f7,&l_488.f1.f7},{&l_653,(void*)0,&l_463,&l_653,&l_653},{&g_21[5][4][1].f1.f7,&l_653,&l_653,&l_463,&l_653},{&l_463,&l_488.f1.f7,&g_21[5][4][1].f1.f7,&l_463,&l_463},{&g_21[5][4][1].f1.f7,&l_488.f1.f7,&l_653,&l_482,&l_463}},{{&l_488.f1.f7,&g_21[5][4][1].f1.f7,&l_653,&l_482,&l_653},{&l_482,&l_482,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&l_653},{&l_463,&l_653,&l_653,(void*)0,(void*)0},{&g_21[5][4][1].f1.f7,&l_653,&l_463,&g_21[5][4][1].f1.f7,&l_463},{&g_21[5][4][1].f1.f7,&l_653,(void*)0,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7}},{{(void*)0,&g_21[5][4][1].f1.f7,&l_653,&g_21[5][4][1].f1.f7,&l_653},{&g_21[5][4][1].f1.f7,&l_488.f1.f7,&l_463,&l_653,&g_21[5][4][1].f1.f7},{&l_653,&l_653,&l_463,&l_653,&g_21[5][4][1].f1.f7},{&g_21[5][4][1].f1.f7,(void*)0,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,(void*)0},{(void*)0,&l_653,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,(void*)0}},{{&l_482,&l_653,&l_488.f1.f7,&g_21[5][4][1].f1.f7,&l_653},{(void*)0,(void*)0,&l_653,(void*)0,&g_21[5][4][1].f1.f7},{&l_482,&g_21[5][4][1].f1.f7,(void*)0,&g_21[5][4][1].f1.f7,&l_653},{(void*)0,&l_482,&l_488.f1.f7,&g_21[5][4][1].f1.f7,&l_653},{&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&l_653,(void*)0,&l_653}},{{&l_653,&l_653,&l_653,&l_463,&l_653},{&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&l_488.f1.f7,&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7},{(void*)0,&l_653,(void*)0,&l_463,&g_21[5][4][1].f1.f7},{&g_21[5][4][1].f1.f7,&g_21[5][4][1].f1.f7,&l_653,&l_653,&g_21[5][4][1].f1.f7},{&g_21[5][4][1].f1.f7,&l_482,&l_488.f1.f7,&l_653,&g_21[5][4][1].f1.f7}},{{&l_463,&l_653,&g_21[5][4][1].f1.f7,&l_653,&g_21[5][4][1].f1.f7},{&g_21[5][4][1].f1.f7,&l_653,&g_21[5][4][1].f1.f7,&l_653,&l_653},{(void*)0,&l_653,&l_463,&g_21[5][4][1].f1.f7,&l_653},{&l_488.f1.f7,&l_653,&l_463,&l_653,&l_653},{&l_463,&l_653,&l_653,&l_463,&l_653}}};
                int32_t l_660 = (-9L);
                int32_t l_661 = 1L;
                int16_t l_662 = (-5L);
                int16_t *l_674[6][2] = {{&l_337,&l_337},{&l_337,&l_337},{&l_337,&l_337},{&l_337,&l_337},{&l_337,&l_337},{&l_337,&l_337}};
                union U2 *l_687 = &g_21[5][4][1];
                int i, j, k;
                for (g_85.f1.f2 = (-25); (g_85.f1.f2 < (-30)); g_85.f1.f2--)
                { 
                    if (l_628[1])
                        break;
                }
                for (l_337 = 0; (l_337 >= 6); l_337++)
                { 
                    const uint32_t l_654[5] = {0xBCDABB25L,0xBCDABB25L,0xBCDABB25L,0xBCDABB25L,0xBCDABB25L};
                    int32_t l_655 = 0x94DAEF63L;
                    const int32_t *l_657 = &l_625[1];
                    const int32_t **l_656 = &l_657;
                    int i;
                    l_655 &= ((l_314[5][3] , (safe_mul_func_int8_t_s_s(((((g_286 = (-1L)) & (safe_lshift_func_int8_t_s_s((g_365 != (safe_mul_func_int8_t_s_s((((l_628[4] != (((((-8L) ^ 65535UL) , (l_628[0] == g_84)) ^ l_628[3]) > l_653)) & 7L) != 0UL), (*g_15)))), 0))) | l_653) <= l_653), (-10L)))) ^ l_654[2]);
                    (*l_656) = &l_479[2][2][0];
                    return l_377.f0;
                }
                if ((l_675 ^= (l_316 = (g_286 &= (l_659[0][0][0] = (((g_663[0][0]++) ^ l_628[4]) & ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(8UL)) & (((void*)0 != g_15) & ((**g_475) = l_628[3]))), (safe_mul_func_uint16_t_u_u((l_671 == (((((g_88.f4 ^= (safe_div_func_int8_t_s_s((((l_661 = l_463) || l_336) < 1L), (*g_15)))) , l_653) < g_21[5][4][1].f1.f4) || (*g_96)) , &g_52)), l_628[4])))) || 0x2A14L)))))))
                { 
                    return l_360[4][0][1].f1;
                }
                else
                { 
                    uint16_t l_676 = 0UL;
                    int32_t l_684 = (-6L);
                    g_65 = &l_628[4];
                    l_676--;
                    (*g_65) = 0x3C16F5BBL;
                    (*g_65) = (safe_add_func_int8_t_s_s(((*g_15) = (0x6ABBL & 0x0F4DL)), ((((-3L) != (safe_sub_func_int32_t_s_s((l_684 &= (&g_385 == (l_683 = l_683))), l_377.f6))) > ((safe_rshift_func_int16_t_s_s(l_660, 5)) || (**g_475))) >= l_676)));
                    (*g_385) = l_687;
                }
            }
            else
            { 
                int32_t l_698 = 0x6A7A7F44L;
                int32_t l_711 = 0xE1A9BF01L;
                int32_t l_712[3][3] = {{0xA434F4F5L,(-8L),0xA434F4F5L},{1L,1L,1L},{0xA434F4F5L,(-8L),0xA434F4F5L}};
                int64_t l_715 = 0xD6D7341EE2701EC2LL;
                uint32_t l_725 = 0UL;
                union U4 *l_736 = &l_360[4][0][1];
                union U5 l_743 = {0x83F67152L};
                uint16_t *l_763 = &g_30.f0;
                int32_t l_768 = 0x1AEC8655L;
                union U1 l_784 = {3L};
                uint64_t *l_792[7] = {&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0,&g_21[5][4][1].f1.f0};
                int i, j;
                if ((safe_lshift_func_int16_t_s_u(((void*)0 != &l_361), 15)))
                { 
                    int16_t *l_701 = &g_298;
                    int32_t l_702[5][7] = {{8L,0xD945ED58L,0xD945ED58L,8L,0xF293AB8FL,0L,0xF293AB8FL},{8L,0xD945ED58L,0xD945ED58L,8L,0xF293AB8FL,0L,0xF293AB8FL},{8L,0xD945ED58L,0xD945ED58L,8L,0xF293AB8FL,0L,0xF293AB8FL},{8L,0xD945ED58L,0xD945ED58L,8L,0xF293AB8FL,0L,0xF293AB8FL},{8L,0xD945ED58L,0xD945ED58L,8L,0xF293AB8FL,0L,0xF293AB8FL}};
                    int i, j;
                    l_702[3][0] |= ((l_628[2] ^ ((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((l_694 , (~(safe_lshift_func_uint16_t_u_s((l_698 , l_699[2][2]), 13)))) , (*g_238)) != p_28) & (g_449[6] = (((l_700[0] = &l_315) == l_701) && 0xFD3FF28E672D979FLL))), g_298)), (-1L))) || (-1L))) < 0x45L);
                    l_704 = l_703;
                }
                else
                { 
                    return l_628[4];
                }
                for (g_258.f0 = 0; (g_258.f0 != 11); g_258.f0 = safe_add_func_int8_t_s_s(g_258.f0, 1))
                { 
                    uint32_t l_708 = 8UL;
                    int8_t l_713 = 0xCEL;
                    int32_t l_714[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_714[i] = 0x70560932L;
                    l_708++;
                    g_84 = 0x1FD8D3D3L;
                    --l_716;
                    if (l_708)
                        break;
                    if (g_258.f0)
                        goto lbl_724;
                }
                (**g_384) = (*g_385);
                if ((safe_mod_func_uint64_t_u_u((l_721 , 0xA7684E6870728F95LL), (safe_lshift_func_uint16_t_u_u((g_286 != ((*g_86) , l_628[4])), 6)))))
                { 
lbl_724:
                    l_628[2] &= (-10L);
                    l_725 ^= ((l_721 , ((void*)0 == g_388[0][1])) <= (**g_548));
                    g_388[0][1] = g_388[1][0];
                }
                else
                { 
                    const int64_t *l_741[5][1][2] = {{{&g_705.f0,&g_705.f0}},{{&g_705.f0,&g_705.f0}},{{&g_705.f0,&g_705.f0}},{{&g_705.f0,&g_705.f0}},{{&g_705.f0,&g_705.f0}}};
                    const int64_t **l_740 = &l_741[0][0][1];
                    const int32_t l_744 = 0x7139097FL;
                    int32_t l_745 = 0L;
                    int32_t **l_746 = &g_65;
                    int i, j, k;
                    l_675 = g_705.f0;
                    if (g_16)
                        goto lbl_728;
lbl_728:
                    g_85.f4 = (safe_mod_func_uint8_t_u_u(g_85.f4, 0x56L));
                    l_745 &= ((safe_lshift_func_uint16_t_u_u((((((safe_add_func_uint32_t_u_u(((((((&g_96 != (l_735[3] = &g_96)) | (l_736 == &g_88)) , l_725) , (((((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint16_t_u_u(((*l_292) &= (((*l_284) = ((void*)0 != l_740)) , (**g_548))), (**g_548))))) < l_742[1][3]) , l_640[0]) , l_743) , 0x127E9A29L)) , l_712[1][1]) < g_30.f0), l_640[0])) >= 1L) || l_640[0]) | l_711) | 0x35CAE57571A954C8LL), l_744)) | 0x3036F19C8AD10A8ALL);
                    (*l_746) = &g_84;
                }
                if (l_360[4][0][1].f0)
                { 
                    int16_t l_758 = 0xDEE2L;
                    struct S0 **l_762 = (void*)0;
                    const uint16_t *l_764[2][6][7] = {{{&g_30.f0,(void*)0,(void*)0,(void*)0,&g_88.f3,(void*)0,(void*)0},{&g_88.f3,&g_30.f0,&g_88.f3,&g_30.f0,&g_88.f3,(void*)0,(void*)0},{&g_88.f3,(void*)0,(void*)0,&g_87.f0,&g_30.f0,&g_30.f0,&g_30.f0},{&g_88.f3,(void*)0,(void*)0,&g_88.f3,&g_30.f0,&g_87.f0,&g_30.f0},{&g_88.f3,&g_87.f0,&g_88.f3,&g_87.f0,&g_87.f0,&g_87.f0,&g_87.f0},{&g_88.f3,(void*)0,&g_88.f3,&g_87.f0,(void*)0,&g_88.f3,&g_30.f0}},{{&g_30.f0,&g_87.f0,&g_30.f0,&g_88.f3,&g_30.f0,&g_88.f3,&g_30.f0},{(void*)0,(void*)0,&g_30.f0,&g_88.f3,&g_30.f0,&g_88.f3,(void*)0},{(void*)0,(void*)0,&g_87.f0,(void*)0,(void*)0,&g_87.f0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_88.f3,&g_30.f0,&g_87.f0,&g_88.f3},{&g_87.f0,&g_30.f0,&g_30.f0,(void*)0,&g_30.f0,&g_30.f0,&g_87.f0},{&g_88.f3,&g_87.f0,&g_30.f0,&g_88.f3,(void*)0,(void*)0,(void*)0}}};
                    int64_t *l_767 = &l_694.f0;
                    int i, j, k;
                    g_127[1][3] = ((safe_add_func_uint64_t_u_u(0x1A4CE1DDEB5FA162LL, (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((l_698 = (l_311[2][2] , l_715)) , ((l_753 = l_712[1][0]) < (((-5L) >= (((((safe_sub_func_int64_t_s_s(l_612.f1, ((((safe_div_func_int64_t_s_s(((((l_628[4] = ((0x7CE1A051L > 2UL) != g_21[5][4][1].f0.f7)) != l_758) > g_21[5][4][1].f4) & 4294967291UL), 0x4ABDEC89EC81F735LL)) >= g_365) > l_314[1][1]) ^ 0xAAL))) , 0x2AL) == 0xB6L) != g_21[5][4][1].f1.f1) > 18446744073709551615UL)) | g_514.f0))), l_758)), 0xE66F4258AD6ED0AFLL)))) , 1L);
                    g_258.f0 = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((((&g_388[2][1] != (l_762 = &g_388[4][0])) <= l_360[4][0][1].f0) , l_763) == l_764[1][2][5]))), ((((safe_lshift_func_int16_t_s_s((((((*l_767) &= (l_758 && g_21[5][4][1].f0.f2)) || l_768) <= (**g_475)) == l_712[0][0]), l_742[1][3])) , 18446744073709551612UL) , g_88.f4) , (**g_548))));
                    g_85.f2 |= ((safe_lshift_func_uint8_t_u_u(l_758, l_721)) == 0x92DBL);
                }
                else
                { 
                    int32_t l_785 = 1L;
                    int32_t l_786 = 0xBFCB4DE7L;
                    uint32_t *l_797 = &g_449[4];
                    g_85.f4 ^= ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_286, 2)), ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*g_15) ^= (~(**g_475))), (l_786 &= ((l_784 , (*g_386)) , ((g_88.f4 = l_785) | 65527UL))))), 6)), g_21[5][4][1].f1.f1)) && l_786))) == 0xF1L), 4)) <= 2L);
                    g_286 = (safe_lshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((~(((*l_639) = (((&g_187 == &g_187) || ((void*)0 != (*g_475))) , l_792[5])) != (*g_475))) | ((((((*l_797) = (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_628[4] = l_640[1]), (-5L))), 8))) && l_786) | l_784.f3) <= 0xE7L) != l_785)), 0x7A5BD827L)) , g_509) & l_377.f4), (*g_15)));
                }
            }
            if ((l_803 = ((l_628[3] = (safe_lshift_func_int16_t_s_u((l_675 &= ((void*)0 == &g_65)), ((((g_800 = &g_150[0][0]) == &l_569) , (safe_lshift_func_int16_t_s_s((g_122 >= (((&l_659[0][0][0] == ((*l_704) , &l_335)) ^ 0xED5EB98DL) & 1UL)), l_742[4][2]))) <= l_628[4])))) == l_315)))
            { 
                uint64_t **l_810 = &l_378[0][2];
                int32_t l_826 = 1L;
                int32_t **l_838 = &l_285[0];
                for (g_258.f1.f1 = 0; (g_258.f1.f1 >= 0); g_258.f1.f1 -= 1)
                { 
                    union U6 l_824[1] = {{-6L}};
                    int16_t l_825[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_825[i] = 0x4DBFL;
                    l_628[2] = ((((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((0x48L ^ (safe_sub_func_uint32_t_u_u((l_639 == l_810), (safe_rshift_func_uint8_t_u_u(((l_824[0].f2 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((l_817 , ((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_824[0] , l_824[0].f0), (g_21[5][4][1].f2 & l_825[0]))), l_826)), g_514.f0)) != l_675)) > g_52.f0) , g_258.f0), l_826)), (**g_548)))) ^ g_663[2][0]), l_803))))), 0x63L)), l_826)) < 0x40L) ^ (*g_15)) || l_824[0].f2);
                }
                for (g_705.f3.f1 = (-28); (g_705.f3.f1 == (-2)); g_705.f3.f1 = safe_add_func_int64_t_s_s(g_705.f3.f1, 8))
                { 
                    union U4 * const ***l_831 = &g_829[3][0][2];
                    union U2 ****l_834 = &g_384;
                    (*l_831) = g_829[3][0][1];
                    g_286 = (safe_mul_func_uint16_t_u_u((**g_548), (((*l_834) = &g_385) == l_835)));
                }
                l_628[4] |= (((*l_284) = ((void*)0 != &g_829[3][0][1])) == 0xA6L);
                l_316 &= ((safe_add_func_int32_t_s_s(l_628[4], (l_838 != l_839))) , g_85.f2);
            }
            else
            { 
                uint32_t l_853 = 0x81336795L;
                int32_t l_854[1];
                uint8_t l_855[2][1];
                int64_t *l_856 = &l_753;
                int32_t l_857[7];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_854[i] = 0L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_855[i][j] = 0xDCL;
                }
                for (i = 0; i < 7; i++)
                    l_857[i] = 0x0E9BCE10L;
                l_857[1] &= ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((&l_331 == (void*)0), 5)), (safe_div_func_uint32_t_u_u(l_377.f5, ((safe_lshift_func_int16_t_s_s(((((*l_856) ^= (safe_div_func_int32_t_s_s((g_30.f0 & (0x9A418616L < (+(((safe_div_func_int64_t_s_s(((g_21[5][4][1].f1.f6 > (g_449[2] &= (18446744073709551615UL == g_88.f3))) >= (*g_96)), l_853)) <= l_853) <= l_854[0])))), l_855[1][0]))) == 0xB3DACCF9F273B3FELL) != l_612.f1), 13)) , 0x48CD3931L))))) > g_52.f2);
            }
        }
        else
        { 
            uint32_t *l_866[7];
            union U2 l_878[5][3][3] = {{{{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}},{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}}},{{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}},{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}}},{{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{18446744073709551615UL,-3L,7L,0x4DA2D4A5B050A9F8LL,0L,-2L,0xABL,0xE3L}},{{18446744073709551615UL,-3L,7L,0x4DA2D4A5B050A9F8LL,0L,-2L,0xABL,0xE3L}}}},{{{{0xE0607966FB74C517LL,0x80L,8L,18446744073709551615UL,1L,0xB57B0A04L,1L,0x11L}},{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}},{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}}},{{{0xDC9B7B3D4C594917LL,0L,-1L,0x9CA5B3F2F0C3597FLL,0x48D8L,-1L,0x74L,0x1EL}},{{0xA72D8796AB37EBA4LL,0x31L,-6L,1UL,0x0937L,0x5CA28D8CL,0L,0xD3L}},{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}}},{{{0xDC9B7B3D4C594917LL,0L,-1L,0x9CA5B3F2F0C3597FLL,0x48D8L,-1L,0x74L,0x1EL}},{{18446744073709551612UL,0x49L,0x60F9C5F8L,1UL,3L,0x882C726BL,0L,1UL}},{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}}}},{{{{0xE0607966FB74C517LL,0x80L,8L,18446744073709551615UL,1L,0xB57B0A04L,1L,0x11L}},{{0x04C1C23241E98704LL,0x11L,0x28E7B6A8L,0x353986FB481ECF62LL,0x6C2EL,0xA516148AL,0x34L,7UL}},{{0xE0607966FB74C517LL,0x80L,8L,18446744073709551615UL,1L,0xB57B0A04L,1L,0x11L}}},{{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{18446744073709551612UL,0x49L,0x60F9C5F8L,1UL,3L,0x882C726BL,0L,1UL}},{{0xDC9B7B3D4C594917LL,0L,-1L,0x9CA5B3F2F0C3597FLL,0x48D8L,-1L,0x74L,0x1EL}}},{{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}},{{0xA72D8796AB37EBA4LL,0x31L,-6L,1UL,0x0937L,0x5CA28D8CL,0L,0xD3L}},{{0xDC9B7B3D4C594917LL,0L,-1L,0x9CA5B3F2F0C3597FLL,0x48D8L,-1L,0x74L,0x1EL}}}},{{{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}},{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}},{{0xE0607966FB74C517LL,0x80L,8L,18446744073709551615UL,1L,0xB57B0A04L,1L,0x11L}}},{{{18446744073709551615UL,-3L,7L,0x4DA2D4A5B050A9F8LL,0L,-2L,0xABL,0xE3L}},{{18446744073709551615UL,-3L,7L,0x4DA2D4A5B050A9F8LL,0L,-2L,0xABL,0xE3L}},{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}}},{{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}},{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}}}},{{{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}},{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}}},{{{8UL,0x3DL,1L,0UL,-1L,0x31025756L,0x12L,0x57L}},{{18446744073709551615UL,-3L,7L,0x4DA2D4A5B050A9F8LL,0L,-2L,0xABL,0xE3L}},{{18446744073709551615UL,-3L,7L,0x4DA2D4A5B050A9F8LL,0L,-2L,0xABL,0xE3L}}},{{{0xE0607966FB74C517LL,0x80L,8L,18446744073709551615UL,1L,0xB57B0A04L,1L,0x11L}},{{18446744073709551607UL,0xE2L,0L,18446744073709551615UL,0x00D1L,0xDDD0415FL,6L,0x27L}},{{0xE7339B04A629AB02LL,1L,0x7039C0FBL,18446744073709551607UL,-1L,0x52D64878L,0L,6UL}}}}};
            const union U1 l_880[1][7] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
            union U4 l_898 = {0x98L};
            union U4 *l_929 = &g_88;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_866[i] = &l_640[1];
            if ((l_858 == (((g_21[5][4][1].f1.f0 == 0L) || ((&g_384 == ((safe_sub_func_int64_t_s_s(l_377.f7, (safe_div_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s((l_817.f2 = ((((void*)0 == l_866[2]) != 0L) , 0x2C0EL)))), 0xFC15CE880CEF46B9LL)))) , l_858)) != 0UL)) , &g_384)))
            { 
                union U5 *l_873 = &g_874;
                int32_t l_875 = (-1L);
                for (l_817.f1.f2 = (-9); (l_817.f1.f2 == 25); l_817.f1.f2 = safe_add_func_uint16_t_u_u(l_817.f1.f2, 1))
                { 
                    union U5 *l_869 = &l_46;
                    union U5 **l_870 = (void*)0;
                    union U5 **l_871 = (void*)0;
                    union U5 **l_872[3][4] = {{&l_869,&l_869,&l_869,&l_869},{&l_869,&l_869,&l_869,&l_869},{&l_869,&l_869,&l_869,&l_869}};
                    union U5 l_879 = {1L};
                    uint32_t *l_881 = (void*)0;
                    uint32_t *l_882 = (void*)0;
                    uint32_t *l_883[7][3] = {{&g_449[3],&g_449[3],&g_449[4]},{&g_2,(void*)0,(void*)0},{&g_449[4],&g_2,(void*)0},{&g_2,&l_416[4],&g_2},{&g_449[3],&g_449[4],(void*)0},{&g_2,&g_2,(void*)0},{&l_416[2],&g_449[4],&g_449[4]}};
                    int i, j;
                    l_873 = ((*l_563) = l_869);
                    l_875 |= g_21[5][4][1].f1.f2;
                    g_84 |= (((((((l_878[3][2][1].f4 = (((safe_mod_func_uint32_t_u_u((l_336 ^ g_21[5][4][1].f0.f3), ((l_878[3][2][1] , 0UL) , ((**l_563) , (g_2 = (l_879 , ((l_880[0][0] , l_817.f4) ^ 0xF257D00D79F000BDLL))))))) | l_463) ^ 0x18C1L)) , g_2) ^ l_875) < 1L) != g_705.f4) > (**g_475)) < g_21[5][4][1].f1.f1);
                }
            }
            else
            { 
                union U5 l_895 = {0xD0572B76L};
                int8_t l_901 = 0x2BL;
                uint16_t **l_922 = &l_296;
                union U4 *l_928 = &l_898;
                for (l_612.f0 = (-16); (l_612.f0 == (-20)); l_612.f0 = safe_sub_func_uint32_t_u_u(l_612.f0, 7))
                { 
                    struct S0 **l_886 = &g_388[4][0];
                    (*l_886) = (void*)0;
                    g_388[0][1] = g_388[4][0];
                }
                g_887 = &l_694;
                if ((safe_div_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((g_490 , l_895) , l_878[3][2][1].f1.f5), (safe_div_func_int64_t_s_s((l_898 , ((*g_184) = (safe_div_func_uint64_t_u_u((l_314[0][3] & ((l_878[3][2][1].f4 && l_895.f0) > 1L)), 6UL)))), g_127[0][2])))), 1)) <= 0x5F2C8F96377CDC41LL) <= l_901), l_878[3][2][1].f1.f3)))
                { 
                    uint32_t l_902[4] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
                    int32_t l_907 = 5L;
                    union U3 * const l_910 = &g_87;
                    int32_t **l_923 = &g_800;
                    int32_t **l_924 = (void*)0;
                    int32_t **l_925 = &g_65;
                    int i;
                    ++l_902[0];
                    g_705.f4 = (g_21[5][4][1].f1.f7 ^ (safe_mod_func_int64_t_s_s((((l_907 |= g_514.f0) < (((((0x2CD0DE7F2CB4FC28LL || (((func_49((g_908 , l_909[1]), l_910) , l_880[0][0].f0) ^ 18446744073709551613UL) , (*g_184))) >= l_878[3][2][1].f0.f4) , l_878[3][2][1].f1.f1) > 0xBE36C9D540F495C8LL) == l_909[1].f3)) < l_902[0]), (*g_184))));
                    (*l_925) = (((((safe_lshift_func_uint16_t_u_s((l_913 , l_902[3]), (l_907 ^= (safe_mod_func_int64_t_s_s(((*g_184) |= (safe_lshift_func_int8_t_s_u(l_901, 0))), (safe_mul_func_int16_t_s_s((g_244 = (safe_add_func_int8_t_s_s((l_922 != &g_96), l_895.f0))), (((*l_923) = &l_314[5][1]) != &l_590)))))))) != l_902[0]) != l_895.f0) & l_391) , (void*)0);
                    g_85.f2 = (safe_sub_func_uint16_t_u_u((*g_96), g_278[1][1][1]));
                }
                else
                { 
                    l_929 = l_928;
                }
            }
        }
        for (l_817.f2 = 6; (l_817.f2 >= 11); l_817.f2 = safe_add_func_int64_t_s_s(l_817.f2, 4))
        { 
            uint64_t l_940[3];
            union U6 **l_947 = &g_887;
            uint16_t **l_953 = &l_297[0][4];
            uint16_t ***l_955 = (void*)0;
            uint16_t ***l_956 = &l_735[3];
            union U3 *l_972 = &g_87;
            int8_t *l_989 = &g_705.f1.f1;
            int8_t *l_990 = (void*)0;
            int8_t *l_991[2];
            int32_t l_992 = 0x09780EA8L;
            uint32_t l_1057 = 0UL;
            const int32_t *l_1061 = &g_150[0][0];
            const int32_t **l_1060[2];
            int i;
            for (i = 0; i < 3; i++)
                l_940[i] = 0xA64CBF4A04AD663ALL;
            for (i = 0; i < 2; i++)
                l_991[i] = &g_888.f1.f1;
            for (i = 0; i < 2; i++)
                l_1060[i] = &l_1061;
            for (g_258.f1.f0 = 14; (g_258.f1.f0 == 14); ++g_258.f1.f0)
            { 
                int8_t l_943[6][6][2] = {{{1L,1L},{2L,0xC7L},{5L,0x55L},{0xC7L,0L},{0xA4L,0xC7L},{1L,2L}},{{0xC3L,0xA4L},{0x0EL,2L},{0xA4L,(-4L)},{4L,0xA4L},{1L,0xC3L},{0xC3L,(-8L)}},{{4L,2L},{(-8L),2L},{4L,(-8L)},{0xC3L,0xC3L},{1L,0xA4L},{4L,(-4L)}},{{0xA4L,2L},{0x0EL,0xA4L},{0xC3L,1L},{0xC3L,0xA4L},{0x0EL,2L},{0xA4L,(-4L)}},{{4L,0xA4L},{1L,0xC3L},{0xC3L,(-8L)},{4L,2L},{(-8L),2L},{4L,(-8L)}},{{0xC3L,0xC3L},{1L,0xA4L},{4L,(-4L)},{0xA4L,2L},{0x0EL,0xA4L},{0xC3L,1L}}};
                int i, j, k;
                for (l_694.f3.f2 = (-15); (l_694.f3.f2 >= (-15)); l_694.f3.f2 = safe_add_func_int16_t_s_s(l_694.f3.f2, 3))
                { 
                    int32_t **l_937 = (void*)0;
                    int32_t **l_938 = (void*)0;
                    int32_t **l_939[7][7][5] = {{{&g_65,&l_285[0],&l_285[0],&l_285[0],&l_285[0]},{&l_285[0],&g_65,&g_65,&g_65,(void*)0},{(void*)0,&l_285[0],&l_285[3],&g_65,(void*)0},{(void*)0,&l_285[0],&l_285[4],&l_285[0],&l_285[0]},{&g_65,&l_285[2],(void*)0,(void*)0,&l_285[2]},{&l_285[0],(void*)0,&l_285[0],&l_285[3],&l_285[0]},{&l_285[1],&l_285[3],&l_285[0],&l_285[0],&l_285[3]}},{{&l_285[5],(void*)0,&g_65,(void*)0,&l_285[4]},{&l_285[1],&l_285[0],&l_285[0],&l_285[0],&l_285[0]},{&l_285[0],&l_285[1],&g_65,&l_285[0],&g_65},{&g_65,(void*)0,&g_65,&l_285[0],(void*)0},{(void*)0,&g_65,(void*)0,&l_285[0],&l_285[0]},{(void*)0,&l_285[1],&l_285[1],&g_65,&g_65},{&l_285[0],(void*)0,&g_65,(void*)0,&l_285[0]}},{{&g_65,&l_285[3],&l_285[0],(void*)0,&l_285[1]},{&l_285[0],&l_285[0],&l_285[0],(void*)0,&g_65},{&l_285[0],&g_65,&l_285[0],&l_285[0],&l_285[0]},{(void*)0,(void*)0,&l_285[1],(void*)0,&l_285[0]},{&l_285[3],&l_285[5],&g_65,&l_285[0],&l_285[0]},{&l_285[0],&g_65,&g_65,&l_285[0],(void*)0},{&l_285[1],&l_285[5],&g_65,&l_285[0],&l_285[0]}},{{&l_285[1],(void*)0,&l_285[0],&g_65,&g_65},{(void*)0,&g_65,&l_285[0],&l_285[0],&l_285[0]},{(void*)0,&l_285[0],&l_285[5],(void*)0,&g_65},{&l_285[0],&l_285[3],(void*)0,&g_65,&l_285[1]},{&g_65,(void*)0,(void*)0,(void*)0,(void*)0},{&g_65,(void*)0,&g_65,&l_285[0],&g_65},{&l_285[5],&l_285[0],&g_65,&l_285[0],&l_285[5]}},{{(void*)0,&l_285[3],&l_285[1],&l_285[1],&l_285[1]},{(void*)0,(void*)0,(void*)0,&l_285[0],&l_285[5]},{&l_285[0],&l_285[2],&l_285[0],&g_65,&l_285[0]},{&g_65,(void*)0,&g_65,&l_285[0],&l_285[0]},{(void*)0,&l_285[1],&l_285[0],&l_285[0],&l_285[0]},{&l_285[0],&g_65,(void*)0,(void*)0,&l_285[5]},{&l_285[0],&l_285[0],&l_285[1],&l_285[3],&l_285[4]}},{{&l_285[0],&l_285[1],&g_65,(void*)0,&g_65},{&l_285[1],&g_65,&g_65,&l_285[0],&l_285[3]},{(void*)0,&l_285[0],(void*)0,&l_285[5],(void*)0},{&l_285[0],&g_65,&l_285[0],&l_285[0],&g_65},{&g_65,&g_65,&l_285[0],&l_285[0],(void*)0},{&l_285[4],&g_65,&g_65,&l_285[0],&g_65},{&l_285[4],&l_285[0],&l_285[0],&l_285[4],&g_65}},{{&g_65,(void*)0,&l_285[4],&l_285[3],&l_285[0]},{&l_285[0],(void*)0,&l_285[0],&l_285[0],(void*)0},{(void*)0,&l_285[2],&l_285[0],&l_285[3],&g_65},{&l_285[0],&g_65,&l_285[0],&l_285[4],&l_285[1]},{&l_285[1],&l_285[0],&l_285[2],&l_285[0],&l_285[0]},{&l_285[0],(void*)0,&l_285[0],&l_285[0],&l_285[0]},{&l_285[2],&g_65,&g_65,&l_285[0],&l_285[5]}}};
                    int i, j, k;
                    if (g_936)
                        break;
                    l_285[2] = (void*)0;
                    l_940[1]++;
                    g_944++;
                }
                if (g_258.f0)
                    break;
            }
            (*l_947) = &l_817;
        }
    }
    else
    { 
        uint32_t l_1091 = 0UL;
        int32_t l_1092 = 0xA5A52B94L;
        union U2 ****l_1113 = &l_683;
        const int32_t *l_1155 = &g_514.f0;
        int32_t l_1160[7][2] = {{4L,0xFEF91540L},{0xFEF91540L,4L},{0xFEF91540L,0xFEF91540L},{4L,0xFEF91540L},{0xFEF91540L,4L},{0xFEF91540L,0xFEF91540L},{4L,0xFEF91540L}};
        int32_t l_1169 = 0xE13FAD9FL;
        struct S0 **l_1178 = &g_388[4][0];
        int i, j;
        for (g_85.f2 = (-12); (g_85.f2 >= (-12)); g_85.f2 = safe_add_func_int16_t_s_s(g_85.f2, 6))
        { 
            int32_t l_1105 = 0xF26B7E4DL;
            int32_t l_1119 = 0x5DBD4F9DL;
            int32_t l_1120 = 0x46C9FC53L;
            int32_t l_1121 = 2L;
            uint64_t *l_1134 = &g_21[5][4][1].f1.f3;
            uint64_t *l_1136 = &g_888.f3.f0;
            int32_t l_1162 = (-5L);
            int32_t l_1163 = 1L;
            int32_t l_1164 = (-10L);
            int32_t l_1165 = 0xE8A0601AL;
            int32_t l_1166 = 2L;
            int32_t l_1167[7][1][5] = {{{3L,(-1L),(-1L),0xB79D3F7DL,(-1L)}},{{9L,9L,0L,9L,9L}},{{(-1L),0xB79D3F7DL,(-1L),(-1L),3L}},{{9L,(-1L),(-1L),9L,(-1L)}},{{3L,0xB79D3F7DL,0x5E75A0A8L,0xB79D3F7DL,3L}},{{(-1L),9L,(-1L),(-1L),9L}},{{3L,(-1L),(-1L),0xB79D3F7DL,(-1L)}}};
            union U2 *l_1187 = &l_488;
            int8_t *l_1211 = &l_488.f1.f6;
            int i, j, k;
            if ((l_1092 = l_1091))
            { 
                if (l_1091)
                    break;
            }
            else
            { 
                for (l_39 = 8; (l_39 <= 2); l_39 = safe_sub_func_int16_t_s_s(l_39, 9))
                { 
                    int8_t *l_1104 = &l_488.f1.f1;
                    int8_t **l_1103 = &l_1104;
                    union U5 ***l_1106 = &l_563;
                    union U5 ****l_1107 = &l_1106;
                    l_1105 |= (((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_1092, (safe_sub_func_int8_t_s_s((((*g_574) , &g_384) == (void*)0), (((g_888.f3.f7 = (((safe_mod_func_int8_t_s_s((((((*l_1103) = &g_16) != &g_274) || 1L) ^ g_150[0][0]), 0xA3L)) || 0x77L) > l_1091)) && 0x93L) > l_1091))))), 7)) && 0x63L) ^ g_298);
                    if (l_1092)
                        continue;
                    (*l_1107) = l_1106;
                }
            }
            g_258.f0 = ((*g_15) && ((*g_15) &= ((safe_rshift_func_int16_t_s_u(((!g_150[0][0]) != (&l_683 != (l_1114 = l_1113))), 2)) && (l_1105 >= (safe_mul_func_uint8_t_u_u(g_908.f4, l_1105))))));
            for (g_874.f1.f1 = 0; (g_874.f1.f1 >= (-14)); g_874.f1.f1 = safe_sub_func_uint64_t_u_u(g_874.f1.f1, 8))
            { 
                uint8_t l_1137 = 1UL;
                int32_t l_1152 = (-8L);
                const int32_t *l_1154[3][3][5] = {{{&g_888.f4,&l_625[1],&g_85.f4,&g_85.f4,&l_625[1]},{&g_888.f2,&g_490.f4,&l_1120,&g_490.f4,&g_127[0][2]},{&g_888.f4,&l_625[1],&g_85.f4,&g_85.f4,&l_625[1]}},{{&g_888.f2,&g_490.f4,&l_1120,&g_490.f4,&g_127[0][2]},{&g_888.f4,&l_625[1],&g_85.f4,&g_85.f4,&l_625[1]},{&g_888.f2,&g_490.f4,&g_127[0][2],&g_490.f4,(void*)0}},{{&g_490.f4,&l_488.f4,&l_625[1],&l_625[1],&l_488.f4},{&l_699[2][2],&g_127[0][2],&g_127[0][2],&g_490.f4,(void*)0},{&g_490.f4,&l_488.f4,&l_625[1],&l_625[1],&l_488.f4}}};
                const int32_t **l_1153[4][7] = {{&l_1154[1][2][2],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[1][2][2],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[1][2][2]},{&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[0][1][3],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[0][1][3],&l_1154[1][2][2]},{&l_1154[0][1][3],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[0][1][3],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[0][1][3]},{&l_1154[1][2][2],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[1][2][2],&l_1154[1][2][2],&l_1154[0][1][3],&l_1154[1][2][2]}};
                int32_t l_1158 = 0x470F6C15L;
                int32_t l_1159 = 0x3ED6D37AL;
                int32_t l_1161[6][5][1] = {{{(-9L)},{5L},{(-9L)},{0x9C57E726L},{6L}},{{0x9C57E726L},{(-9L)},{5L},{(-9L)},{0x9C57E726L}},{{6L},{0x9C57E726L},{(-9L)},{5L},{(-9L)}},{{0x9C57E726L},{6L},{0x9C57E726L},{(-9L)},{5L}},{{(-9L)},{0x9C57E726L},{6L},{0x9C57E726L},{(-9L)}},{{5L},{(-9L)},{0x9C57E726L},{6L},{0x9C57E726L}}};
                int32_t l_1168 = 0xF0E97411L;
                uint32_t l_1170 = 0xB8A48779L;
                int i, j, k;
                for (l_694.f3.f1 = 0; (l_694.f3.f1 <= 3); l_694.f3.f1 += 1)
                { 
                    uint32_t l_1122 = 18446744073709551611UL;
                    uint64_t **l_1135[3][7] = {{&l_378[1][2],&l_378[1][2],&l_378[1][2],&l_378[0][2],(void*)0,&l_378[0][2],&l_378[1][2]},{&l_378[1][2],&l_378[1][2],&l_378[1][2],&l_378[0][2],(void*)0,&l_378[0][2],&l_378[1][2]},{&l_378[1][2],&l_378[1][2],&l_378[1][2],&l_378[0][2],(void*)0,&l_378[0][2],&l_378[1][2]}};
                    int i, j;
                    l_1122--;
                    l_1137 |= (0x7C862D43L || (l_1092 = ((!(safe_mul_func_int16_t_s_s(l_1092, (safe_add_func_uint32_t_u_u(6UL, ((g_1130 != (void*)0) , ((l_1134 != (l_1136 = l_1134)) >= 0UL))))))) ^ l_1119)));
                    if (g_244)
                        break;
                    l_1121 = (-7L);
                }
                if (l_1121)
                { 
                    uint64_t l_1142 = 18446744073709551608UL;
                    int64_t **l_1151 = &g_184;
                    l_1152 = (safe_lshift_func_int16_t_s_u((((g_88.f4 = (safe_lshift_func_int16_t_s_s((l_1142 < (((((*g_15) = (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(l_1091, ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((*l_1151) = &g_492) == (void*)0), 6)) | ((l_1137 > (g_705.f4 , 0xDAL)) == l_1092)), l_1092)) || 0x8AL))), 6L))) > l_1137) & 251UL) && g_888.f2)), 8))) , (***l_1113)) != (*g_385)), 6));
                }
                else
                { 
                    return (**g_954);
                }
                l_1155 = &l_335;
                for (g_705.f3.f3 = 0; (g_705.f3.f3 <= 3); g_705.f3.f3 += 1)
                { 
                    union U6 **l_1157 = &g_887;
                    union U6 ***l_1156 = &l_1157;
                    (*l_1156) = (void*)0;
                }
                l_1170--;
            }
            for (g_874.f0 = 17; (g_874.f0 < 26); g_874.f0++)
            { 
                int16_t l_1175 = 0x9E0FL;
                struct S0 ***l_1179 = &l_1178;
                int32_t l_1188 = 0xE6EF2B4EL;
                int32_t l_1190 = 0x2AF50E3EL;
                int32_t l_1192 = (-1L);
                int32_t l_1194 = 0x3F0BB8D8L;
                int32_t l_1196 = 0xB25FF95AL;
                int32_t l_1198 = 0xB1ABD6D3L;
                int32_t l_1199[5][3][5] = {{{5L,5L,4L,(-1L),0x552480BBL},{2L,1L,1L,2L,0xE5145E10L},{9L,(-1L),0x8BDF1F9CL,0x8BDF1F9CL,(-1L)}},{{0xE5145E10L,1L,0xA1CA67E0L,0x4CF4AA93L,0x4CF4AA93L},{0x6FCAD5DCL,5L,0x6FCAD5DCL,0x8BDF1F9CL,4L},{0xCF44996FL,2L,0x4CF4AA93L,2L,0xCF44996FL}},{{0x6FCAD5DCL,9L,5L,(-1L),5L},{0xE5145E10L,0xE5145E10L,0x4CF4AA93L,0xCF44996FL,0L},{9L,0x6FCAD5DCL,0x6FCAD5DCL,9L,5L}},{{2L,0xCF44996FL,0xA1CA67E0L,0xA1CA67E0L,0xCF44996FL},{5L,0x6FCAD5DCL,0x8BDF1F9CL,4L,4L},{1L,0xE5145E10L,1L,0xA1CA67E0L,0x4CF4AA93L}},{{(-1L),9L,4L,9L,(-1L)},{1L,2L,0xE5145E10L,0xCF44996FL,0xE5145E10L},{5L,5L,4L,(-1L),0x552480BBL}}};
                uint32_t l_1201 = 0x596A7F32L;
                uint64_t l_1204 = 1UL;
                union U5 l_1212[2][2] = {{{0x5543AACCL},{0x5543AACCL}},{{0x5543AACCL},{0x5543AACCL}}};
                uint32_t *l_1217[6];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1217[i] = &g_449[0];
                if (l_1175)
                    break;
                if ((safe_lshift_func_uint8_t_u_s(((((*l_1179) = l_1178) != (void*)0) , (l_1164 = ((*g_887) , ((((safe_rshift_func_uint8_t_u_u((l_1120 | (l_1166 = (safe_rshift_func_uint8_t_u_s((*l_1155), 6)))), 4)) <= (g_1184 != &g_1185)) & (**g_548)) <= g_30.f0)))), 6)))
                { 
                    int32_t **l_1186[6][2][2] = {{{&l_285[0],(void*)0},{&l_285[0],(void*)0}},{{&l_285[0],&l_285[0]},{&g_65,&g_65}},{{&g_65,&l_285[0]},{&l_285[0],(void*)0}},{{&l_285[0],(void*)0},{&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0]},{&l_285[0],&l_285[0]}},{{&g_65,&g_65},{&l_285[0],&g_65}}};
                    int i, j, k;
                    g_65 = (void*)0;
                    g_122 = (*l_1155);
                    (*g_385) = l_1187;
                }
                else
                { 
                    int32_t l_1189 = (-1L);
                    int32_t l_1191 = 0L;
                    int32_t l_1193 = 0x8E6FEF61L;
                    int32_t l_1195 = 1L;
                    int32_t l_1197 = 8L;
                    int32_t l_1200[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1200[i] = 0xD290070EL;
                    if ((*l_1155))
                        break;
                    --l_1201;
                    if (l_1204)
                        continue;
                    g_258.f0 = 0xF90B80CBL;
                }
                l_1165 = (0xEC50L || ((**g_954) = (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(0xC48DL, (((void*)0 == l_1211) <= ((l_1212[0][0] , (5L == ((safe_lshift_func_uint16_t_u_s(((g_2 = l_1165) & (*l_1155)), (*l_1155))) >= (*l_1155)))) , (*l_1155))))), l_1190)) != l_1199[4][0][0]), 3))));
            }
        }
    }
    g_63 &= (safe_mod_func_uint64_t_u_u(1UL, ((**g_954) , g_1220)));
    g_127[0][2] = 0L;
    return (*g_96);
}



static uint16_t  func_40(union U5  p_41, int32_t  p_42, uint64_t  p_43, union U3 * p_44, union U4  p_45)
{ 
    int32_t *l_89[2][5][1] = {{{&g_63},{(void*)0},{&g_63},{(void*)0},{&g_63}},{{(void*)0},{&g_63},{(void*)0},{&g_63},{(void*)0}}};
    int32_t **l_90 = (void*)0;
    int32_t **l_91 = &g_65;
    int8_t l_151 = (-1L);
    int64_t l_158 = 0xAD0993023009E39CLL;
    union U3 **l_206 = &g_86;
    int32_t l_245 = 0x8476B102L;
    int32_t l_273 = 0xADBBC01CL;
    uint16_t l_275 = 65529UL;
    uint64_t l_280 = 7UL;
    int i, j, k;
    l_89[0][3][0] = l_89[0][4][0];
    (*l_91) = l_89[0][4][0];
    for (p_41.f1.f0 = 0; (p_41.f1.f0 <= 0); p_41.f1.f0 += 1)
    { 
        const int32_t l_103 = 1L;
        uint32_t l_129 = 0xF8CE80C6L;
        union U5 *l_132 = (void*)0;
        uint16_t *l_148 = &g_30.f0;
        int32_t l_152 = 0x7BA114AEL;
        int32_t l_154 = 0x661964D5L;
        int32_t l_155 = 0x6E9993CBL;
        int32_t l_156[3];
        int i;
        for (i = 0; i < 3; i++)
            l_156[i] = 0x82A6E03DL;
        for (g_85.f1.f6 = 0; (g_85.f1.f6 <= 0); g_85.f1.f6 += 1)
        { 
            uint8_t l_92 = 0x96L;
            uint16_t *l_93 = &g_87.f0;
            int8_t *l_95 = &g_21[5][4][1].f1.f6;
            int32_t l_124[4];
            union U3 **l_134[7][3] = {{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86}};
            union U3 ***l_133 = &l_134[5][1];
            union U2 l_139[2] = {{{1UL,0x3FL,1L,9UL,1L,-2L,0L,0x6AL}},{{1UL,0x3FL,1L,9UL,1L,-2L,0L,0x6AL}}};
            int32_t *l_149 = &g_150[0][0];
            uint16_t l_159[6];
            int64_t *l_166 = &g_85.f0;
            union U3 * const **l_173 = (void*)0;
            int32_t l_246 = 0x28AE5848L;
            int32_t l_251[6][5][5] = {{{(-1L),3L,3L,3L,3L},{0xCAD7FDC3L,0x251C7DA0L,0x5890F40DL,0x5E445934L,0x251C7DA0L},{0xDD0B4287L,3L,0x76B277BDL,9L,3L},{(-8L),9L,0x5890F40DL,0x5890F40DL,9L},{0xDD0B4287L,0x995CF14DL,3L,9L,0x995CF14DL}},{{0xCAD7FDC3L,9L,(-1L),0x5E445934L,9L},{(-1L),3L,3L,3L,3L},{0xCAD7FDC3L,0x251C7DA0L,0x5890F40DL,0x5E445934L,0x251C7DA0L},{0xDD0B4287L,3L,0x76B277BDL,9L,3L},{(-8L),9L,0x5890F40DL,0x5890F40DL,9L}},{{0xDD0B4287L,0x995CF14DL,3L,9L,0x995CF14DL},{0xCAD7FDC3L,9L,(-1L),0x5E445934L,9L},{(-1L),3L,3L,3L,3L},{0xCAD7FDC3L,0x251C7DA0L,0x5890F40DL,0x5E445934L,0x251C7DA0L},{0xDD0B4287L,3L,0x76B277BDL,9L,3L}},{{(-8L),9L,0x5890F40DL,0x5890F40DL,9L},{0xDD0B4287L,0x995CF14DL,3L,9L,0x995CF14DL},{0xCAD7FDC3L,9L,(-1L),0x5E445934L,9L},{(-1L),3L,3L,3L,3L},{0xCAD7FDC3L,0x251C7DA0L,0x5890F40DL,0x5E445934L,0x251C7DA0L}},{{0xDD0B4287L,3L,0x76B277BDL,9L,3L},{(-8L),9L,0x5890F40DL,0x5890F40DL,9L},{0xDD0B4287L,0x995CF14DL,3L,9L,0x995CF14DL},{0xCAD7FDC3L,9L,(-1L),0x5E445934L,9L},{(-1L),3L,3L,3L,3L}},{{0xCAD7FDC3L,0x251C7DA0L,0x5890F40DL,0x5E445934L,0x251C7DA0L},{0xDD0B4287L,3L,0x76B277BDL,9L,3L},{(-8L),9L,0x5890F40DL,0x5890F40DL,9L},{0xDD0B4287L,0x995CF14DL,3L,9L,0x995CF14DL},{0xCAD7FDC3L,9L,(-1L),0x5E445934L,(-8L)}}};
            uint8_t l_254[3][6] = {{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L},{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L},{0xA5L,0xA5L,0xA5L,0xA5L,0xA5L,0xA5L}};
            union U5 *l_257 = &g_258;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_124[i] = 0x0400E0B9L;
            for (i = 0; i < 6; i++)
                l_159[i] = 0x0DCDL;
            if (p_43)
            { 
                for (g_2 = 0; (g_2 <= 0); g_2 += 1)
                { 
                    int i, j, k;
                    if (p_43)
                        break;
                    return l_92;
                }
            }
            else
            { 
                uint16_t **l_94 = &l_93;
                uint16_t **l_97 = (void*)0;
                uint16_t **l_98 = &g_96;
                int32_t l_104 = 0x4D451FECL;
                int64_t *l_121[1];
                uint8_t *l_123 = &l_92;
                int32_t l_125 = 0x71FFC78FL;
                int32_t l_128[1][5] = {{0xBE5E263DL,0xBE5E263DL,0xBE5E263DL,0xBE5E263DL,0xBE5E263DL}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_121[i] = (void*)0;
                l_104 = ((((*l_94) = l_93) != ((*l_98) = ((l_95 == (void*)0) , g_96))) ^ (safe_mod_func_uint64_t_u_u(((65531UL || ((0xE3EC41181933AC35LL >= (((safe_rshift_func_int8_t_s_s((*g_15), p_42)) || l_103) <= p_42)) || l_103)) || 18446744073709551614UL), p_45.f0)));
                l_124[0] = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((l_125 = (l_103 && ((safe_add_func_uint8_t_u_u(((*l_123) = (safe_sub_func_uint32_t_u_u(((g_122 ^= (((g_21[5][4][1].f2 != (((0xE1B5AB6CAC88EEA0LL > ((((safe_sub_func_int16_t_s_s(((((*g_96) = p_43) | 0x3633L) || (g_88.f0 >= (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(p_43, p_41.f0)), 0x406C9851B6DC0836LL)))), l_92)) < p_43) | p_43) && l_104)) ^ g_85.f0) < g_21[5][4][1].f0.f2)) ^ p_45.f1) ^ g_21[5][4][1].f0.f6)) , g_52.f2), l_92))), l_124[1])) | p_45.f1))), p_41.f0)), 7));
                for (g_87.f0 = 0; (g_87.f0 <= 0); g_87.f0 += 1)
                { 
                    int32_t l_126[4];
                    union U3 ****l_135 = &l_133;
                    union U3 ***l_137 = &l_134[6][1];
                    union U3 ****l_136 = &l_137;
                    int32_t l_138[5][2] = {{0x1BE2ED98L,0x1BE2ED98L},{0x1BE2ED98L,0x1BE2ED98L},{0x1BE2ED98L,0x1BE2ED98L},{0x1BE2ED98L,0x1BE2ED98L},{0x1BE2ED98L,0x1BE2ED98L}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_126[i] = 0x9686C71FL;
                    l_129--;
                    l_132 = (void*)0;
                    (*l_136) = ((*l_135) = l_133);
                    l_138[3][0] = ((void*)0 == g_96);
                    if (p_43)
                        break;
                }
            }
            if (((g_88.f1 ^ g_21[5][4][1].f1.f4) != (l_139[0] , ((*l_93) |= (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((((*l_149) &= ((l_124[1] = (((&p_44 == (void*)0) & (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((l_148 != l_93), g_85.f4)), l_129))) & p_45.f1)) || l_139[0].f1.f6)) , p_42) | g_52.f0), 0x1E479A4C43A831FELL)), 0x7C6D75ADL))))))
            { 
                int32_t l_153 = 0xA669385DL;
                int32_t l_157 = (-2L);
                union U3 ***l_172 = &l_134[6][0];
                if (l_151)
                    break;
                if (g_2)
                    goto lbl_279;
                l_159[0]--;
                l_157 = (safe_div_func_int64_t_s_s(p_45.f0, (safe_mod_func_int32_t_s_s((((((((((void*)0 == l_166) != (p_43 != (safe_mul_func_uint16_t_u_u((((l_153 , ((safe_add_func_int16_t_s_s(p_43, ((+p_43) || 0x818C57DBE0CD2700LL))) >= l_154)) , l_172) != l_173), l_159[0])))) == l_159[0]) & l_124[1]) , g_52) , p_43) ^ g_21[5][4][1].f1.f7) || 0x15293983L), 0xB8D06BC6L))));
            }
            else
            { 
                uint8_t l_182 = 0x2CL;
                const union U1 l_183 = {0x9857E4DE94C89D1CLL};
                if ((safe_sub_func_int64_t_s_s(2L, g_21[5][4][1].f0.f0)))
                { 
                    int64_t *l_178 = &l_158;
                    int16_t *l_181 = &g_88.f4;
                    (*l_91) = (void*)0;
                    l_124[3] &= (((func_49((((((p_42 ^ 0xAEL) || 0xC5C8L) || ((safe_add_func_int64_t_s_s(((*l_178) ^= g_84), g_150[0][0])) ^ ((safe_rshift_func_int16_t_s_s(((*l_181) = (((void*)0 != &g_16) , g_21[5][4][1].f4)), 5)) > l_182))) >= 1UL) , l_183), p_44) , g_184) == l_166) >= l_152);
                    return p_42;
                }
                else
                { 
                    int8_t l_185 = (-1L);
                    int32_t l_186[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_186[i] = 8L;
                    ++g_187;
                    if (p_42)
                        break;
                }
                if (g_63)
                    continue;
                (*l_91) = &g_63;
            }
            if ((((safe_div_func_uint16_t_u_u((g_21[5][4][1].f0.f3 > ((safe_lshift_func_uint8_t_u_s(255UL, ((*g_15) = (0xD37C6442FD4E0F7FLL >= (-1L))))) & ((*p_44) , (safe_sub_func_int8_t_s_s(p_41.f0, (safe_div_func_uint8_t_u_u(9UL, p_42))))))), (*g_96))) == 0L) && p_45.f0))
            { 
                int8_t *l_210 = &l_151;
                int32_t *l_211 = &l_156[0];
                uint16_t *l_212 = (void*)0;
                uint16_t *l_213 = &l_159[5];
                int32_t l_215[3][5] = {{0xF30CB5C3L,7L,0xF30CB5C3L,0L,0L},{0xF30CB5C3L,7L,0xF30CB5C3L,0L,0L},{0xF30CB5C3L,7L,0xF30CB5C3L,0L,0L}};
                uint32_t l_227 = 0x8589551DL;
                uint8_t *l_271 = &l_139[0].f1.f7;
                int i, j;
                for (g_88.f0 = 0; g_88.f0 < 7; g_88.f0 += 1)
                {
                    for (p_45.f3 = 0; p_45.f3 < 3; p_45.f3 += 1)
                    {
                        l_134[g_88.f0][p_45.f3] = (void*)0;
                    }
                }
                l_152 &= ((*l_211) = (safe_mod_func_uint32_t_u_u((0x783CDB2FL != (safe_mul_func_int8_t_s_s(0L, (safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((((*l_133) = l_206) == &p_44), (safe_lshift_func_int8_t_s_u((*g_15), (((((*l_148) = ((*g_96) = (+((((p_45.f0 <= ((*l_210) = p_45.f1)) , (void*)0) == l_211) == p_45.f0)))) ^ 0xE24EL) <= g_187) | 65535UL))))) , p_41.f0), p_43))))), 0x84BAB362L)));
                if (((*g_15) > (((*l_213) &= (g_84 , ((p_45.f0 >= (((*l_148) = (*g_96)) ^ ((l_156[0] = (g_21[5][4][1].f0 , (&g_16 == &g_16))) && g_84))) , p_43))) >= (*g_96))))
                { 
                    int32_t l_214 = 0L;
                    int32_t l_216 = 0xDCDCB93CL;
                    int32_t l_217 = 0xF59F603DL;
                    int32_t l_218 = 0x0B6B5915L;
                    int32_t l_219 = 1L;
                    int32_t l_220 = 0L;
                    int32_t l_221 = 3L;
                    int32_t l_222 = 1L;
                    int32_t l_223 = (-8L);
                    int32_t l_224 = 0xC2C58BBAL;
                    int32_t l_225 = 0x8D9BABF2L;
                    int32_t l_226 = 0xF10F74F5L;
                    union U2 **l_230 = (void*)0;
                    union U2 *l_232 = &l_139[0];
                    union U2 **l_231 = &l_232;
                    int16_t *l_243[2][3][7] = {{{&g_244,(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244},{(void*)0,(void*)0,&g_244,(void*)0,(void*)0,&g_244,(void*)0},{(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244,(void*)0}},{{&g_244,(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244},{(void*)0,(void*)0,&g_244,(void*)0,(void*)0,&g_244,(void*)0},{(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244,(void*)0}}};
                    int i, j, k;
                    l_227++;
                    (*l_231) = &g_21[5][0][0];
                    if (g_52.f3)
                        continue;
                    g_127[0][2] = ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_237 != (void*)0) <= (p_41.f0 <= (safe_mul_func_uint16_t_u_u((((g_88.f4 = (p_41.f0 >= (safe_mul_func_int8_t_s_s(p_45.f1, (*g_15))))) ^ (g_30.f0 || 8L)) != p_45.f0), p_42)))), p_45.f0)), p_45.f0)) > g_21[5][4][1].f2);
                    (*l_211) |= (g_87.f1 = (l_139[0].f0.f4 < p_43));
                }
                else
                { 
                    int32_t l_247 = 1L;
                    int32_t l_248 = 1L;
                    int32_t l_250 = 0xD366DB7AL;
                    int32_t l_252 = 0L;
                    int32_t l_253 = 0x585EAEFBL;
                    ++l_254[2][0];
                    if (p_41.f0)
                        continue;
                    if (p_42)
                        continue;
                    (*l_211) |= ((void*)0 != l_257);
                }
                (*l_211) |= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_21[5][4][1].f0.f0, (safe_lshift_func_uint8_t_u_u(((((-1L) ^ ((((g_85.f0 >= 4294967295UL) , (g_21[4][3][0] , (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((*l_271) = (g_52.f2 && l_139[0].f1.f3)), g_244)), p_42)))) && p_43) == p_45.f1)) >= (*g_15)) > 1L), 5)))), g_249));
            }
            else
            { 
                int64_t *l_272 = (void*)0;
                for (g_122 = 0; (g_122 <= 0); g_122 += 1)
                { 
                    int i;
                    l_139[0].f4 &= (g_184 == l_272);
                }
                if (p_45.f1)
                    break;
            }
            l_275--;
            return (*g_96);
        }
        return g_278[1][1][1];
    }
lbl_279:
    for (g_258.f1.f5 = 0; (g_258.f1.f5 >= 0); g_258.f1.f5 -= 1)
    { 
        return (*g_96);
    }
    ++l_280;
    return p_45.f1;
}



static union U6  func_49(const union U1  p_50, union U3 * const  p_51)
{ 
    union U3 *l_60 = &g_30;
    union U3 **l_59 = &l_60;
    struct S0 l_61 = {9UL,0x19L,0x7376B242L,0xFF427032CD4B48EDLL,0x2973L,0x5BB970EAL,0x32L,0x4CL};
    int32_t *l_62[7] = {&g_63,&g_63,&g_63,&g_63,&g_63,&g_63,&g_63};
    int32_t *l_64 = &g_21[5][4][1].f4;
    uint32_t l_70 = 0x4A9589ABL;
    uint32_t l_73 = 1UL;
    int32_t **l_81 = &l_62[6];
    uint16_t *l_82 = &g_30.f0;
    int32_t *l_83 = &g_84;
    int i;
    g_63 ^= (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((g_30.f0 >= (safe_lshift_func_int16_t_s_u((((*l_59) = (void*)0) != (void*)0), ((p_50.f3 == ((((l_61 , p_51) == p_51) ^ g_21[5][4][1].f2) == g_21[5][4][1].f1.f4)) && l_61.f6)))), l_61.f4)), 0xE555501DL));
    g_65 = l_64;
    (*l_83) |= ((safe_rshift_func_uint16_t_u_s(((*l_82) = (safe_add_func_int8_t_s_s((l_70 | (((0x5F641D31L || ((safe_add_func_uint8_t_u_u(l_73, (safe_div_func_uint8_t_u_u((((*l_81) = ((!((safe_sub_func_int16_t_s_s(g_21[5][4][1].f0.f4, 65535UL)) , (0xD38C14FD429592AELL || (safe_mod_func_uint8_t_u_u((((p_51 != &g_30) != p_50.f2) >= g_63), p_50.f2))))) , l_62[6])) != l_64), g_30.f0)))) <= 0xF91DL)) , 0xFF0E9B23L) ^ p_50.f0)), g_21[5][4][1].f4))), g_52.f4)) | 0x0CL);
    return g_85;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_21[i][j][k].f4, "g_21[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_127[i][j], "g_127[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_278[i][j][k], "g_278[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_449[i], "g_449[i]", print_hash_value);

    }
    transparent_crc(g_490.f0, "g_490.f0", print_hash_value);
    transparent_crc(g_490.f2, "g_490.f2", print_hash_value);
    transparent_crc(g_490.f3, "g_490.f3", print_hash_value);
    transparent_crc(g_490.f4, "g_490.f4", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_514.f0, "g_514.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_663[i][j], "g_663[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_705.f2, "g_705.f2", print_hash_value);
    transparent_crc(g_705.f4, "g_705.f4", print_hash_value);
    transparent_crc(g_874.f0, "g_874.f0", print_hash_value);
    transparent_crc(g_888.f2, "g_888.f2", print_hash_value);
    transparent_crc(g_888.f4, "g_888.f4", print_hash_value);
    transparent_crc(g_908.f0, "g_908.f0", print_hash_value);
    transparent_crc(g_908.f2, "g_908.f2", print_hash_value);
    transparent_crc(g_908.f3, "g_908.f3", print_hash_value);
    transparent_crc(g_908.f4, "g_908.f4", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1222.f0, "g_1222.f0", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1432, "g_1432", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1446[i][j].f0, "g_1446[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_1487.f0, "g_1487.f0", print_hash_value);
    transparent_crc(g_1487.f1, "g_1487.f1", print_hash_value);
    transparent_crc(g_1487.f2, "g_1487.f2", print_hash_value);
    transparent_crc(g_1487.f3, "g_1487.f3", print_hash_value);
    transparent_crc(g_1487.f4, "g_1487.f4", print_hash_value);
    transparent_crc(g_1487.f5, "g_1487.f5", print_hash_value);
    transparent_crc(g_1487.f6, "g_1487.f6", print_hash_value);
    transparent_crc(g_1487.f7, "g_1487.f7", print_hash_value);
    transparent_crc(g_1726, "g_1726", print_hash_value);
    transparent_crc(g_1728, "g_1728", print_hash_value);
    transparent_crc(g_2011.f0, "g_2011.f0", print_hash_value);
    transparent_crc(g_2011.f2, "g_2011.f2", print_hash_value);
    transparent_crc(g_2011.f4, "g_2011.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2188[i][j].f0, "g_2188[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_2286, "g_2286", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2327[i][j][k].f0, "g_2327[i][j][k].f0", print_hash_value);
                transparent_crc(g_2327[i][j][k].f2, "g_2327[i][j][k].f2", print_hash_value);
                transparent_crc(g_2327[i][j][k].f4, "g_2327[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_2382, "g_2382", print_hash_value);
    transparent_crc(g_2392, "g_2392", print_hash_value);
    transparent_crc(g_2413, "g_2413", print_hash_value);
    transparent_crc(g_2511, "g_2511", print_hash_value);
    transparent_crc(g_2557, "g_2557", print_hash_value);
    transparent_crc(g_2618.f0.f0, "g_2618.f0.f0", print_hash_value);
    transparent_crc(g_2618.f0.f1, "g_2618.f0.f1", print_hash_value);
    transparent_crc(g_2618.f0.f2, "g_2618.f0.f2", print_hash_value);
    transparent_crc(g_2618.f0.f3, "g_2618.f0.f3", print_hash_value);
    transparent_crc(g_2618.f0.f4, "g_2618.f0.f4", print_hash_value);
    transparent_crc(g_2618.f0.f5, "g_2618.f0.f5", print_hash_value);
    transparent_crc(g_2618.f0.f6, "g_2618.f0.f6", print_hash_value);
    transparent_crc(g_2618.f0.f7, "g_2618.f0.f7", print_hash_value);
    transparent_crc(g_2618.f1.f0, "g_2618.f1.f0", print_hash_value);
    transparent_crc(g_2618.f1.f1, "g_2618.f1.f1", print_hash_value);
    transparent_crc(g_2618.f1.f2, "g_2618.f1.f2", print_hash_value);
    transparent_crc(g_2618.f1.f3, "g_2618.f1.f3", print_hash_value);
    transparent_crc(g_2618.f1.f4, "g_2618.f1.f4", print_hash_value);
    transparent_crc(g_2618.f1.f5, "g_2618.f1.f5", print_hash_value);
    transparent_crc(g_2618.f1.f6, "g_2618.f1.f6", print_hash_value);
    transparent_crc(g_2618.f1.f7, "g_2618.f1.f7", print_hash_value);
    transparent_crc(g_2618.f2, "g_2618.f2", print_hash_value);
    transparent_crc(g_2618.f4, "g_2618.f4", print_hash_value);
    transparent_crc(g_2662, "g_2662", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
