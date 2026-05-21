// SPDX-License-Identifier: MIT
// cctest_csmith_535a9273.c --- cctest case csmith_535a9273 (csmith seed 1398444659)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1073023 */

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

// Options:   -s 1398444659 -o /tmp/csmith_gen_xnjy1f6u/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   int64_t  f3;
   const int32_t  f4;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   int32_t  f1;
};


static int32_t g_18 = (-1L);
static uint64_t g_70 = 0x0A54AE8BCD06DB25LL;
static uint32_t g_71 = 0x92334198L;
static int16_t g_75 = 0x56B3L;
static int32_t g_76 = 0L;
static int8_t g_81 = (-8L);
static int32_t g_82 = 0xE6A76871L;
static int32_t g_83 = 0xF7E1B1CDL;
static uint8_t g_101[5][4][3] = {{{0x12L,0UL,247UL},{0x09L,0x7DL,2UL},{0xF7L,0x09L,0UL},{0x88L,1UL,1UL}},{{0x88L,0UL,0x09L},{0xF7L,2UL,0x7DL},{0x09L,247UL,0UL},{0x12L,0xC4L,0UL}},{{1UL,247UL,0x9CL},{0UL,2UL,0x12L},{253UL,0UL,1UL},{1UL,1UL,1UL}},{{0xB0L,0x09L,0x12L},{8UL,0x7DL,0x9CL},{0x59L,0UL,0UL},{0x7DL,0UL,8UL}},{{255UL,0UL,2UL},{0x12L,0xB0L,1UL},{0x7DL,0x95L,7UL},{0x95L,0x95L,0xC4L}}};
static uint8_t g_118 = 0xC2L;
static int32_t g_132 = (-5L);
static int32_t g_151 = 0x5D4B2AF2L;
static int16_t g_199[3][2][2] = {{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}}};
static union U1 g_200 = {4294967295UL};
static uint32_t g_201 = 18446744073709551615UL;



static uint16_t  func_1(void);
static int8_t  func_7(int8_t  p_8, uint32_t  p_9, union U1  p_10);
static uint8_t  func_13(int32_t  p_14);
static uint32_t  func_22(const int16_t  p_23, uint16_t  p_24, uint16_t  p_25, int16_t  p_26, const uint8_t  p_27);




static uint16_t  func_1(void)
{ 
    int8_t l_2 = (-1L);
    int32_t l_202 = 0x773B0532L;
    uint64_t l_228 = 5UL;
    if (l_2)
    { 
        uint32_t l_15[2];
        int i;
        for (i = 0; i < 2; i++)
            l_15[i] = 1UL;
        g_201 &= ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((func_7(((8L || ((safe_div_func_uint16_t_u_u(0UL, (func_13(l_15[0]) , l_15[1]))) | l_2)) < l_15[1]), g_199[1][0][1], g_200) == 252UL) , g_151), 0x2598L)) && g_76), 0x98C0L)) & 6L);
        l_202 = (l_15[1] <= l_2);
    }
    else
    { 
        uint64_t l_203 = 18446744073709551612UL;
        for (g_75 = 1; (g_75 >= 0); g_75 -= 1)
        { 
            int16_t l_210 = 0xEF39L;
            ++l_203;
            for (g_201 = 0; (g_201 <= 1); g_201 += 1)
            { 
                g_76 = (0xBAACL < ((((g_81 = (l_203 && (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_210, ((g_81 <= g_132) || l_203))), 5)))) >= l_210) | 1UL) | g_71));
                g_82 = (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(g_200.f1, 0xF40CL)) || (safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_101[2][3][0], ((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((l_210 ^ l_210) >= g_199[1][0][1]), 14)), 0)), l_202)), l_210)) || 0L))), l_203))), l_210));
                if (g_199[1][0][1])
                    continue;
            }
        }
    }
    g_82 = (~l_2);
    return l_228;
}



static int8_t  func_7(int8_t  p_8, uint32_t  p_9, union U1  p_10)
{ 
    return p_10.f1;
}



static uint8_t  func_13(int32_t  p_14)
{ 
    int32_t l_36 = 1L;
    int32_t l_63 = 5L;
    int32_t l_74 = (-8L);
    int32_t l_77 = 0x008F4F80L;
    int32_t l_78 = (-10L);
    uint16_t l_87 = 1UL;
    int8_t l_117[3][4][5] = {{{(-4L),(-2L),(-4L),(-4L),(-2L)},{(-2L),(-4L),(-4L),(-2L),(-4L)},{(-2L),(-2L),1L,(-2L),(-2L)},{(-4L),(-2L),(-4L),(-4L),(-2L)}},{{(-2L),(-4L),(-4L),(-2L),(-4L)},{(-2L),(-2L),1L,(-2L),(-2L)},{(-4L),(-2L),(-4L),(-4L),(-2L)},{(-2L),(-4L),(-4L),(-2L),(-4L)}},{{(-2L),(-2L),1L,(-2L),(-2L)},{(-4L),(-2L),(-4L),(-4L),(-2L)},{(-2L),(-4L),(-4L),(-2L),(-4L)},{(-2L),(-2L),1L,(-2L),(-2L)}}};
    uint64_t l_169 = 1UL;
    union U1 l_198 = {1UL};
    int i, j, k;
    if (p_14)
    { 
        int8_t l_19[4];
        const int32_t l_35 = 1L;
        union U1 l_50 = {0x7B12393DL};
        int32_t l_79 = 0L;
        int32_t l_85 = 0x685A4B52L;
        int i;
        for (i = 0; i < 4; i++)
            l_19[i] = 0L;
        for (p_14 = 0; (p_14 >= 12); p_14 = safe_add_func_int64_t_s_s(p_14, 9))
        { 
            return p_14;
        }
        if ((l_19[0] &= g_18))
        { 
            int8_t l_37[5] = {0x75L,0x75L,0x75L,0x75L,0x75L};
            int32_t l_39 = 0x5EE35D5DL;
            uint16_t l_53 = 0x7A2EL;
            int i;
            for (p_14 = 0; (p_14 >= 17); ++p_14)
            { 
                uint16_t l_34[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_34[i] = 0x88ADL;
                l_39 = (func_22(((((((safe_sub_func_uint64_t_u_u(g_18, (((((safe_rshift_func_int8_t_s_u((((safe_div_func_int8_t_s_s((-5L), g_18)) & 0x0076L) & 0UL), 1)) || l_34[0]) , 0L) | 0UL) || l_35))) >= 9UL) & 1L) == 0xF3L) && g_18) && 255UL), l_36, l_34[0], l_37[2], g_18) , g_18);
                if (g_18)
                    break;
            }
            l_39 = (safe_add_func_uint8_t_u_u(l_35, (safe_div_func_uint8_t_u_u(0x2EL, l_35))));
            if ((safe_div_func_uint16_t_u_u(((((l_39 = 0x96FCD4D3380D42F5LL) && (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((l_50 , ((((safe_div_func_int8_t_s_s((((l_53 <= ((g_18 == 0UL) && l_50.f0)) == l_35) >= p_14), l_36)) >= g_18) | g_18) != l_19[0])), g_18)), p_14))) >= g_18) >= p_14), g_18)))
            { 
                uint16_t l_62 = 65535UL;
                l_63 &= (((p_14 > (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((l_36 , (safe_add_func_uint32_t_u_u(p_14, (safe_mul_func_int8_t_s_s((g_18 ^ 255UL), l_53))))), l_62)) != l_36) >= g_18), g_18))) ^ 0x8CF11409L) == 1UL);
                return p_14;
            }
            else
            { 
                int64_t l_69[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_69[i] = 0xB0B63B58950224C6LL;
                g_71 = (l_39 <= ((safe_add_func_uint16_t_u_u(0x186EL, (safe_mul_func_int8_t_s_s(0L, (((g_70 |= ((~((p_14 <= (-1L)) || l_69[3])) < 0xB70F7348L)) | l_63) , g_70))))) <= g_18));
            }
        }
        else
        { 
            int64_t l_84 = 1L;
            int32_t l_86 = 1L;
            const uint32_t l_94 = 4294967286UL;
            for (l_63 = 0; (l_63 != 12); l_63 = safe_add_func_uint16_t_u_u(l_63, 6))
            { 
                int32_t l_80 = 0x10A6DD69L;
                --l_87;
                return g_18;
            }
            l_85 = ((l_86 = (p_14 ^ (g_75 | ((((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_76, ((l_94 , (-4L)) || g_82))), l_35)) < g_81) == p_14) > l_50.f0)))) != p_14);
        }
        l_63 = ((safe_rshift_func_int16_t_s_u(g_18, (0x86L || (0x9701DEE0D328F3C5LL | ((g_81 = (safe_mul_func_int16_t_s_s(p_14, g_101[0][1][2]))) == p_14))))) | 4294967295UL);
    }
    else
    { 
        int16_t l_113[2][1][5] = {{{0x7AB3L,0x8060L,0x8060L,0x7AB3L,0x8060L}},{{0x7AB3L,0x7AB3L,(-6L),0x7AB3L,0x7AB3L}}};
        int32_t l_114[3][3] = {{0xFBFF5949L,0L,0xFBFF5949L},{0xFBFF5949L,0L,0xFBFF5949L},{0xFBFF5949L,0L,0xFBFF5949L}};
        int32_t l_131[3];
        uint32_t l_197[5];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_131[i] = 0x1BCF00EDL;
        for (i = 0; i < 5; i++)
            l_197[i] = 4294967295UL;
lbl_155:
        g_76 = l_74;
        if ((safe_rshift_func_uint8_t_u_u(g_101[4][0][1], p_14)))
        { 
            int32_t l_109 = 0xCB2E3AA9L;
            int32_t l_112[4] = {1L,1L,1L,1L};
            int i;
            if ((l_114[1][0] = ((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((g_118 = ((~(((l_109 == 0x86L) | (((safe_sub_func_uint64_t_u_u((((++g_71) != g_82) == (g_81 = (1L == 251UL))), p_14)) < l_87) && g_71)) ^ g_101[0][1][2])) , l_117[2][1][2])), 0xB2L)) > l_114[0][0]), g_101[3][2][0])) || l_113[0][0][1])))
            { 
                uint32_t l_133[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_133[i][j] = 0x1185E692L;
                }
                l_133[0][0] = (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_76 <= (((g_132 ^= ((g_82 <= (safe_rshift_func_int16_t_s_u((0xF0C6D799D52CC188LL ^ (safe_mul_func_uint8_t_u_u((l_131[1] = (l_114[2][2] ^= (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_75 = p_14), 6L)), p_14)))), l_112[2]))), p_14))) && l_114[0][1])) < p_14) , g_71)), g_81)), g_101[0][2][2]));
            }
            else
            { 
                return p_14;
            }
            l_114[1][0] = ((l_109 = (safe_sub_func_int64_t_s_s((safe_unary_minus_func_int32_t_s((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((l_112[2] = (g_151 = (247UL < ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(l_109, 9)), ((safe_add_func_uint32_t_u_u(l_131[1], (safe_sub_func_int64_t_s_s((g_118 ^ g_71), p_14)))) < g_101[1][3][0]))) , g_101[2][2][0]) , p_14) <= g_101[0][1][2])))) | l_113[1][0][1]), g_76)) | 0x4B1F90EDL) && p_14), 5)), 0x5F32A4288E96A696LL)))), 0L))) & 0L);
            g_151 = (g_82 = ((-5L) > p_14));
        }
        else
        { 
            uint32_t l_152 = 18446744073709551613UL;
            int32_t l_166 = 0x744AF555L;
            if (p_14)
            { 
                ++l_152;
                return g_71;
            }
            else
            { 
                if (g_18)
                    goto lbl_155;
            }
            l_131[1] = ((safe_add_func_uint8_t_u_u(l_113[0][0][1], p_14)) || (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((g_75 = ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((l_166 &= 0x53F4L), 14)), (safe_lshift_func_uint16_t_u_s(0xF5DDL, g_118)))) , p_14)), 13)) || l_169) , g_82), p_14)));
            for (g_81 = 0; (g_81 <= 0); g_81 += 1)
            { 
                int16_t l_181 = 0xD5C6L;
                int32_t l_196 = 0L;
                l_197[2] = ((!(g_75 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((l_196 = (safe_sub_func_int8_t_s_s((l_181 ^ ((g_101[0][1][2] ^= (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((safe_sub_func_int32_t_s_s((l_114[1][0] = (((safe_div_func_uint16_t_u_u(((!(1L >= (safe_unary_minus_func_uint8_t_u(g_71)))) >= ((p_14 || 0xF66AD19DAF4E6788LL) , p_14)), g_81)) >= 0xD2L) & l_166)), 0xFF1A9AC7L)) >= g_118) , l_117[0][0][2]) < 4294967295UL) || p_14), 0x5FL)), 15)) <= 0x8B2FA42FL), l_181)), g_81))) < p_14)), l_181))), g_71)) == g_81), 1)), 4)), p_14)))) >= 0x1A7AFFC2L);
                if (l_166)
                    continue;
            }
        }
    }
    g_82 = (g_101[2][2][1] || ((g_75 |= 1L) <= (p_14 != ((l_198 , g_132) , 6L))));
    return g_70;
}



static uint32_t  func_22(const int16_t  p_23, uint16_t  p_24, uint16_t  p_25, int16_t  p_26, const uint8_t  p_27)
{ 
    uint8_t l_38[4][4];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_38[i][j] = 0xC4L;
    }
    for (g_18 = 0; (g_18 <= 3); g_18 += 1)
    { 
        return p_23;
    }
    return g_18;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_101[i][j][k], "g_101[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_199[i][j][k], "g_199[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_200.f1, "g_200.f1", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
