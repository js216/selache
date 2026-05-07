// SPDX-License-Identifier: MIT
// cctest_csmith_ab9f796d.c --- cctest case csmith_ab9f796d (csmith seed 2879355245)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x86f2ec71 */

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

// Options:   -s 2879355245 -o /tmp/csmith_gen_kzd4e6fn/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   int32_t  f2;
   const unsigned f3 : 26;
};
#pragma pack(pop)

struct S1 {
   const signed f0 : 21;
};

union U2 {
   int16_t  f0;
   uint8_t  f1;
   const int32_t  f2;
   int32_t  f3;
};

union U3 {
   uint32_t  f0;
   int8_t  f1;
};


static int32_t g_2 = 0x3D4210E1L;
static int32_t g_5 = 1L;
static int32_t g_11[5] = {0x735B263DL,0x735B263DL,0x735B263DL,0x735B263DL,0x735B263DL};
static int32_t g_12 = (-1L);
static union U3 g_28 = {0xF14186E1L};
static int32_t g_32[1] = {0x88216928L};
static struct S0 g_49[7][1] = {{{1UL,8UL,-6L,7666}},{{1UL,8UL,-6L,7666}},{{1UL,8UL,-6L,7666}},{{1UL,8UL,-6L,7666}},{{1UL,8UL,-6L,7666}},{{1UL,8UL,-6L,7666}},{{1UL,8UL,-6L,7666}}};
static int16_t g_74 = 0xF23EL;
static uint8_t *g_79 = (void*)0;
static int32_t *g_85 = &g_49[3][0].f2;
static int64_t g_86 = (-3L);
static int32_t **g_119 = &g_85;
static const uint16_t g_160 = 65535UL;
static uint32_t g_193[6][7] = {{0UL,4294967295UL,0xD96FB6D2L,0x0ECF60C1L,0xD96FB6D2L,4294967295UL,0UL},{0xB7124CF9L,4294967291UL,4294967292UL,0UL,0x0ECF60C1L,4294967294UL,0UL},{0x0ECF60C1L,0UL,4294967295UL,4294967295UL,0UL,0x0ECF60C1L,0xB7124CF9L},{4294967295UL,4294967295UL,4294967292UL,0xB7124CF9L,0x22C4725CL,0x0ECF60C1L,0x0ECF60C1L},{0UL,0x22C4725CL,0xD96FB6D2L,0x22C4725CL,0UL,4294967292UL,0xB7124CF9L},{0UL,0UL,0x22C4725CL,4294967294UL,4294967295UL,0xB7124CF9L,4294967295UL}};
static uint8_t g_197 = 0UL;
static union U2 g_217[7] = {{0xF18DL},{0xF18DL},{0xF18DL},{0xF18DL},{0xF18DL},{0xF18DL},{0xF18DL}};
static union U2 g_221 = {0x7258L};
static int16_t **g_258 = (void*)0;
static int16_t ***g_257 = &g_258;
static struct S1 g_314[2][3][7] = {{{{636},{704},{-438},{22},{1300},{-589},{1300}},{{994},{1300},{1300},{994},{961},{3},{22}},{{3},{1300},{636},{-589},{1065},{961},{1123}}},{{{22},{704},{3},{-637},{3},{704},{22}},{{1437},{-637},{704},{1123},{3},{1224},{1300}},{{-339},{1224},{-589},{3},{1065},{1065},{3}}}};
static union U2 g_328[6] = {{0x9AFDL},{0xB59EL},{0xB59EL},{0x9AFDL},{0xB59EL},{0xB59EL}};
static union U2 *g_327 = &g_328[1];
static uint8_t ***g_329 = (void*)0;
static uint64_t *g_337 = &g_49[3][0].f0;
static int16_t g_351 = 0x6911L;
static int32_t g_365 = 0L;
static int32_t *g_389 = &g_49[3][0].f2;
static struct S0 g_413 = {18446744073709551606UL,0x32L,0L,3382};
static struct S0 **g_436 = (void*)0;
static struct S0 g_473 = {0UL,0x16L,-1L,6685};
static union U2 *g_481 = &g_221;
static int8_t g_515 = 0xC4L;
static uint32_t g_526 = 0UL;
static int8_t *g_635[5] = {&g_515,&g_515,&g_515,&g_515,&g_515};
static union U2 **g_681 = &g_327;
static union U2 ***g_680[3][6][6] = {{{&g_681,(void*)0,&g_681,&g_681,(void*)0,&g_681},{(void*)0,(void*)0,&g_681,&g_681,(void*)0,&g_681},{&g_681,&g_681,(void*)0,&g_681,&g_681,&g_681},{(void*)0,&g_681,(void*)0,&g_681,&g_681,(void*)0},{&g_681,&g_681,&g_681,&g_681,&g_681,&g_681},{(void*)0,(void*)0,&g_681,&g_681,&g_681,&g_681}},{{&g_681,(void*)0,&g_681,(void*)0,&g_681,&g_681},{&g_681,(void*)0,&g_681,&g_681,&g_681,(void*)0},{&g_681,&g_681,(void*)0,&g_681,&g_681,&g_681},{(void*)0,&g_681,(void*)0,&g_681,&g_681,&g_681},{&g_681,(void*)0,&g_681,(void*)0,&g_681,&g_681},{&g_681,(void*)0,&g_681,&g_681,&g_681,(void*)0}},{{&g_681,(void*)0,&g_681,(void*)0,&g_681,&g_681},{&g_681,&g_681,&g_681,&g_681,&g_681,(void*)0},{(void*)0,&g_681,(void*)0,&g_681,&g_681,(void*)0},{&g_681,&g_681,&g_681,&g_681,(void*)0,&g_681},{&g_681,(void*)0,&g_681,(void*)0,(void*)0,(void*)0},{&g_681,(void*)0,&g_681,&g_681,(void*)0,&g_681}}};
static uint16_t g_699 = 0x8853L;
static uint16_t g_710 = 0x097BL;
static uint64_t **g_727[1][4][3] = {{{(void*)0,(void*)0,(void*)0},{&g_337,&g_337,&g_337},{(void*)0,(void*)0,(void*)0},{&g_337,&g_337,&g_337}}};
static int32_t *g_820[6][1] = {{&g_49[3][0].f2},{&g_49[3][0].f2},{&g_49[3][0].f2},{&g_49[3][0].f2},{&g_49[3][0].f2},{&g_49[3][0].f2}};
static int64_t *g_856 = &g_86;
static int64_t **g_855 = &g_856;
static const union U3 g_916 = {0xDDEEF47DL};
static int32_t g_1026 = 0xC97AA421L;
static uint16_t *g_1092 = (void*)0;
static uint16_t **g_1091[5] = {&g_1092,&g_1092,&g_1092,&g_1092,&g_1092};
static uint16_t ***g_1090 = &g_1091[3];
static uint16_t * const **g_1095 = (void*)0;



static uint32_t  func_1(void);
static uint8_t  func_13(uint32_t  p_14);
static uint64_t  func_19(int32_t  p_20);
static uint8_t  func_25(union U3  p_26, struct S1  p_27);
static int32_t  func_38(uint32_t  p_39, struct S0  p_40, int32_t * p_41, int16_t  p_42, uint8_t  p_43);
static struct S0  func_44(struct S0  p_45, int32_t * p_46);
static struct S0  func_47(int64_t  p_48);
static int32_t ** func_111(int8_t * p_112, int32_t * const  p_113, struct S0  p_114);




static uint32_t  func_1(void)
{ 
    uint32_t l_1108[1];
    int64_t l_1109[4];
    uint16_t l_1114 = 65526UL;
    int64_t l_1116 = 0xDC99E140306DDF7DLL;
    int i;
    for (i = 0; i < 1; i++)
        l_1108[i] = 18446744073709551609UL;
    for (i = 0; i < 4; i++)
        l_1109[i] = 0L;
    for (g_2 = (-18); (g_2 < (-18)); ++g_2)
    { 
        int32_t l_8 = (-1L);
        const uint8_t l_1107 = 252UL;
        int8_t l_1115 = 0x0FL;
        for (g_5 = 21; (g_5 < 23); g_5 = safe_add_func_int8_t_s_s(g_5, 4))
        { 
            return l_8;
        }
        for (l_8 = 0; (l_8 > 5); l_8++)
        { 
            uint8_t l_1101 = 0xBBL;
            uint32_t l_1110 = 1UL;
            for (g_5 = 4; (g_5 >= 0); g_5 -= 1)
            { 
                for (g_12 = 4; (g_12 >= 0); g_12 -= 1)
                { 
                    uint8_t *l_1112 = (void*)0;
                    uint8_t *l_1113[2][5] = {{&l_1101,&l_1101,&l_1101,&l_1101,&l_1101},{&g_328[1].f1,&g_197,&g_328[1].f1,&g_197,&g_328[1].f1}};
                    int i, j;
                    (*g_389) = ((g_11[g_5] = func_13((safe_lshift_func_int16_t_s_u((l_1109[1] = ((g_11[g_5] & (safe_mod_func_uint8_t_u_u((0xA1CF04157736D0C1LL < func_19(g_11[0])), (l_1101 & ((((safe_sub_func_int64_t_s_s(((-2L) ^ ((safe_mul_func_uint8_t_u_u((~(-1L)), 0xBBL)) < l_1107)), (**g_855))) < (-1L)) >= 0L) >= l_1108[0]))))) & l_1108[0])), l_1110)))) , (-1L));
                }
            }
            return l_1114;
        }
        l_1116 ^= (l_1115 , (*g_389));
    }
    (*g_85) = (-3L);
    (*g_389) &= (l_1108[0] && l_1116);
    return l_1109[1];
}



static uint8_t  func_13(uint32_t  p_14)
{ 
    int64_t l_1111 = (-8L);
    (*g_389) |= 0x3675CC3BL;
    return l_1111;
}



static uint64_t  func_19(int32_t  p_20)
{ 
    int32_t l_745[3][4] = {{0x244BAEDCL,(-8L),0xC2DA7C67L,(-8L)},{(-8L),(-1L),0xC2DA7C67L,0xC2DA7C67L},{0x244BAEDCL,0x244BAEDCL,(-8L),0xC2DA7C67L}};
    int32_t l_748 = 0xB452060DL;
    int32_t *l_749 = &g_32[0];
    int16_t *l_754 = (void*)0;
    uint16_t l_839[5];
    struct S0 l_842 = {1UL,0x3FL,0x1A50A1F5L,5288};
    union U3 *l_848 = &g_28;
    const int64_t **l_857[2];
    uint32_t l_861 = 2UL;
    union U2 ** const l_945[4] = {&g_481,&g_481,&g_481,&g_481};
    uint64_t *l_965 = &g_473.f0;
    int32_t ***l_1003 = &g_119;
    union U2 ***l_1021[5] = {&g_681,&g_681,&g_681,&g_681,&g_681};
    uint32_t l_1079 = 0x6ED1C01DL;
    uint16_t * const **l_1093 = (void*)0;
    uint16_t * const ***l_1094[6][6][3] = {{{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093}},{{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,(void*)0,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093}},{{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093}},{{&l_1093,&l_1093,&l_1093},{&l_1093,(void*)0,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093}},{{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093}},{{&l_1093,(void*)0,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093},{&l_1093,&l_1093,&l_1093}}};
    struct S1 l_1096 = {-219};
    int32_t l_1099 = 5L;
    int32_t *l_1100 = &l_745[2][2];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_839[i] = 0x7E79L;
    for (i = 0; i < 2; i++)
        l_857[i] = (void*)0;
    for (p_20 = 0; (p_20 >= 9); p_20++)
    { 
        struct S1 l_29 = {-300};
        int32_t *l_746 = &g_217[2].f3;
        int32_t *l_747[6];
        int16_t *l_755 = &g_351;
        struct S0 *l_756[2];
        int32_t l_761 = 0xF7B236BBL;
        int32_t l_762 = 0x09B71DE3L;
        const int32_t *l_818 = &l_745[2][2];
        union U2 l_847 = {3L};
        int16_t ***l_955 = &g_258;
        int16_t ****l_956 = (void*)0;
        int16_t ****l_957[2][3][6] = {{{&l_955,&g_257,&l_955,&g_257,&l_955,&g_257},{&l_955,&g_257,&l_955,&g_257,&l_955,&g_257},{&l_955,&g_257,&l_955,&g_257,&l_955,&g_257}},{{&l_955,&g_257,&l_955,&g_257,&l_955,&g_257},{&l_955,&g_257,&l_955,&g_257,&l_955,&g_257},{&l_955,&g_257,&l_955,&g_257,&l_955,&g_257}}};
        uint8_t ****l_962 = &g_329;
        const int32_t l_963 = 1L;
        uint64_t *l_964 = &g_473.f0;
        int64_t l_1001 = 0x44F1E8D306709986LL;
        uint32_t l_1049 = 0UL;
        union U2 **l_1064 = &g_327;
        int32_t l_1078 = (-7L);
        uint8_t l_1084 = 4UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_747[i] = &g_328[1].f3;
        for (i = 0; i < 2; i++)
            l_756[i] = &g_473;
    }
    (***l_1003) = (*l_749);
    (*l_1100) |= (safe_add_func_uint32_t_u_u(((g_1090 != (g_1095 = l_1093)) == ((*g_337) = ((*l_749) && (((***l_1003) , &l_754) != (((((l_1096 , ((((safe_div_func_uint8_t_u_u((*l_749), (*l_749))) , p_20) , p_20) , (***l_1003))) == 18446744073709551615UL) > (**g_119)) <= l_1099) , &l_754))))), p_20));
    return (*g_337);
}



static uint8_t  func_25(union U3  p_26, struct S1  p_27)
{ 
    uint32_t l_30[2];
    int32_t l_33 = 0x996FD0FEL;
    int32_t l_34 = 0x75309757L;
    uint32_t l_35 = 0UL;
    uint64_t l_61 = 0x603386B476018F8CLL;
    int32_t l_62 = 0x980504C9L;
    int8_t *l_634 = &g_515;
    int8_t **l_633[6] = {&l_634,&l_634,&l_634,&l_634,&l_634,&l_634};
    int8_t l_642[2];
    int32_t l_643[7][7][5] = {{{0xE10E968BL,0x2B352FBEL,0x2B352FBEL,0xE10E968BL,(-8L)},{1L,0xAE4EF5A1L,1L,1L,0xAE4EF5A1L},{(-8L),0x2B352FBEL,0x7B904315L,0x5FFBCE5AL,0x5FFBCE5AL},{1L,0xADC4A225L,1L,1L,0x751653A4L},{3L,0xE10E968BL,0x5FFBCE5AL,0xE10E968BL,3L},{1L,1L,0xADC4A225L,0xAE4EF5A1L,0xADC4A225L},{(-8L),(-8L),0x5FFBCE5AL,3L,(-4L)}},{{1L,1L,1L,1L,0xADC4A225L},{0xE10E968BL,3L,0x7B904315L,0x7B904315L,3L},{0xADC4A225L,1L,1L,0x751653A4L,0x751653A4L},{0x2B352FBEL,(-8L),0x2B352FBEL,0x7B904315L,0x5FFBCE5AL},{0xAE4EF5A1L,1L,0x751653A4L,1L,0xAE4EF5A1L},{0x2B352FBEL,0xE10E968BL,(-8L),3L,(-8L)},{0xADC4A225L,0xADC4A225L,0x751653A4L,0xAE4EF5A1L,0x24BF1EA1L}},{{0xE10E968BL,0x2B352FBEL,0x2B352FBEL,0xE10E968BL,(-8L)},{1L,0xAE4EF5A1L,1L,1L,0xAE4EF5A1L},{(-8L),0x2B352FBEL,0x7B904315L,0x5FFBCE5AL,0x5FFBCE5AL},{1L,0xADC4A225L,1L,1L,0x751653A4L},{3L,0xE10E968BL,0x5FFBCE5AL,0xE10E968BL,3L},{1L,1L,0xADC4A225L,0xAE4EF5A1L,0xADC4A225L},{(-8L),(-8L),0x5FFBCE5AL,3L,(-4L)}},{{1L,1L,1L,1L,0xADC4A225L},{0xE10E968BL,3L,0x7B904315L,0x7B904315L,3L},{0xADC4A225L,1L,1L,0x751653A4L,0x751653A4L},{0x2B352FBEL,(-8L),0x2B352FBEL,0x7B904315L,0x5FFBCE5AL},{0xAE4EF5A1L,1L,0x751653A4L,1L,0xAE4EF5A1L},{0x2B352FBEL,0xE10E968BL,(-8L),3L,(-8L)},{0xADC4A225L,0xADC4A225L,0x751653A4L,0xAE4EF5A1L,0x24BF1EA1L}},{{0xE10E968BL,0x2B352FBEL,0x2B352FBEL,0xE10E968BL,(-8L)},{1L,0xAE4EF5A1L,1L,1L,0xAE4EF5A1L},{(-8L),0x2B352FBEL,0x7B904315L,0x5FFBCE5AL,0x5FFBCE5AL},{1L,0xADC4A225L,1L,1L,0x751653A4L},{3L,0xE10E968BL,0x5FFBCE5AL,0xE10E968BL,3L},{1L,1L,0xADC4A225L,0xAE4EF5A1L,0xADC4A225L},{(-8L),(-8L),0x5FFBCE5AL,3L,(-4L)}},{{1L,1L,1L,1L,0xADC4A225L},{0xE10E968BL,3L,0x7B904315L,0x7B904315L,3L},{0xADC4A225L,1L,1L,0x751653A4L,0x751653A4L},{0x2B352FBEL,(-4L),3L,0x5FFBCE5AL,(-8L)},{1L,1L,0xADC4A225L,1L,1L},{3L,0x2B352FBEL,(-4L),0x7B904315L,(-4L)},{0x24BF1EA1L,0x24BF1EA1L,0xADC4A225L,1L,1L}},{{0x2B352FBEL,3L,3L,0x2B352FBEL,(-4L)},{1L,1L,0x751653A4L,0x751653A4L,1L},{(-4L),3L,0x5FFBCE5AL,(-8L),(-8L)},{0xAE4EF5A1L,0x24BF1EA1L,0xAE4EF5A1L,0x751653A4L,0xADC4A225L},{0x7B904315L,0x2B352FBEL,(-8L),0x2B352FBEL,0x7B904315L},{0xAE4EF5A1L,1L,0x24BF1EA1L,1L,0x24BF1EA1L},{(-4L),(-4L),(-8L),0x7B904315L,0xE10E968BL}}};
    int16_t l_645[6] = {0x8546L,0x8546L,0x8546L,0x8546L,0x8546L,0x8546L};
    uint32_t l_693[5][3] = {{0UL,0x3147EDC9L,1UL},{0xA614F6A4L,0xA614F6A4L,1UL},{0x3147EDC9L,0UL,3UL},{0UL,0xA614F6A4L,0UL},{0UL,0x3147EDC9L,0xA614F6A4L}};
    union U2 l_739 = {0x139DL};
    union U3 l_741 = {0x4F45CA0BL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_30[i] = 18446744073709551615UL;
    for (i = 0; i < 2; i++)
        l_642[i] = 7L;
    if (p_26.f1)
    { 
lbl_631:
        for (p_26.f0 = 0; (p_26.f0 <= 1); p_26.f0 += 1)
        { 
            int32_t *l_31[4][1][5] = {{{&g_5,&g_12,&g_5,&g_12,&g_5}},{{&g_32[0],&g_32[0],&g_32[0],&g_32[0],&g_32[0]}},{{&g_5,&g_12,&g_5,&g_12,&g_5}},{{&g_32[0],&g_32[0],&g_32[0],&g_32[0],&g_32[0]}}};
            uint8_t *l_56 = (void*)0;
            int8_t *l_58[7] = {&g_28.f1,&g_28.f1,&g_28.f1,&g_28.f1,&g_28.f1,&g_28.f1,&g_28.f1};
            int i, j, k;
            l_35++;
        }
    }
    else
    { 
        if (p_26.f1)
            goto lbl_631;
        (*g_389) &= p_26.f0;
        return l_62;
    }
    if ((safe_unary_minus_func_uint16_t_u(((g_635[2] = &g_515) == (((*g_481) , p_26) , &g_515)))))
    { 
        int16_t l_640 = (-1L);
        int32_t l_641 = 0L;
        int32_t l_644[1][4][5] = {{{(-1L),(-9L),0xBCCCDCBCL,0xBCCCDCBCL,(-9L)},{(-1L),2L,0x47355C0EL,0x47355C0EL,2L},{(-1L),(-9L),0xBCCCDCBCL,0xBCCCDCBCL,(-9L)},{(-1L),2L,0x47355C0EL,0x47355C0EL,2L}}};
        uint32_t l_646 = 0x019FB000L;
        int i, j, k;
        (*g_389) &= 6L;
        (*g_119) = (*g_119);
        for (p_26.f1 = 0; (p_26.f1 > 13); ++p_26.f1)
        { 
            int32_t *l_638 = &g_32[0];
            int32_t *l_639[1][4];
            struct S0 *l_660 = &g_49[3][0];
            int16_t l_661 = 0xA2FBL;
            int32_t l_662 = (-9L);
            uint32_t l_717 = 18446744073709551615UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_639[i][j] = &g_413.f2;
            }
            --l_646;
            for (l_61 = 0; (l_61 <= 4); l_61 += 1)
            { 
                int64_t *l_651[5][6] = {{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86}};
                int32_t l_654 = 0x3D5D782DL;
                int32_t l_655[4][1] = {{0L},{0x7C864393L},{0L},{0x7C864393L}};
                uint64_t l_663[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_663[i] = 0x7B5A59AEBB28ECB9LL;
                (*g_389) = ((l_644[0][2][2] = ((0x1F6DL | 0x92A5L) , (safe_div_func_int16_t_s_s(5L, 0x6510L)))) <= (safe_mod_func_uint64_t_u_u((*g_337), 0x821B431EB5B991FELL)));
                for (g_74 = 0; (g_74 <= 4); g_74 += 1)
                { 
                    int32_t l_656 = 0xE5E4D2A3L;
                    uint16_t l_657 = 3UL;
                    l_657--;
                }
                l_660 = l_660;
                l_663[1]++;
            }
            for (l_662 = 0; (l_662 != 12); l_662 = safe_add_func_int8_t_s_s(l_662, 6))
            { 
                int32_t l_679 = 4L;
                int32_t l_688 = 0x7335B055L;
                int32_t l_689 = 9L;
                int32_t l_690 = (-1L);
                int32_t l_691 = 0x7332B4C9L;
                int32_t l_692 = 6L;
                uint64_t **l_726 = &g_337;
                (*g_85) &= 0xCDED12F0L;
                for (g_86 = 4; (g_86 >= 0); g_86 -= 1)
                { 
                    int i;
                    return l_645[(g_86 + 1)];
                }
                for (g_221.f0 = 25; (g_221.f0 <= (-26)); g_221.f0 = safe_sub_func_uint8_t_u_u(g_221.f0, 5))
                { 
                    struct S0 **l_686 = &l_660;
                    int32_t l_687[3][6][1] = {{{0xF4DBC1AEL},{0x86D1A59CL},{0x86D1A59CL},{0xF4DBC1AEL},{0x86D1A59CL},{0x86D1A59CL}},{{0xF4DBC1AEL},{0x86D1A59CL},{0x86D1A59CL},{0xF4DBC1AEL},{0x86D1A59CL},{0x86D1A59CL}},{{0xF4DBC1AEL},{0x86D1A59CL},{0x86D1A59CL},{0xF4DBC1AEL},{0x86D1A59CL},{0x86D1A59CL}}};
                    uint16_t *l_698 = &g_699;
                    uint16_t *l_709 = &g_710;
                    int i, j, k;
                    (*g_85) = (!(safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((g_314[1][1][0] , (((safe_rshift_func_uint16_t_u_u(l_679, 1)) >= (g_680[0][2][4] != (void*)0)) <= (p_26.f1 && (p_26.f1 > ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_686 != g_436), 1)), p_26.f1)) == (*l_638)))))) , 0x1EL), 4)), 0xDEL)), (-1L))));
                    --l_693[1][2];
                    if (l_646)
                        continue;
                    (*g_85) = ((*l_638) = ((safe_mul_func_uint16_t_u_u((--(*l_698)), (!(safe_add_func_uint64_t_u_u(((**g_119) <= 0x60C6A31CL), (safe_rshift_func_int16_t_s_s(l_690, 12))))))) > (safe_lshift_func_int16_t_s_s(((g_49[3][0] , p_27.f0) ^ (--(*l_709))), (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_687[0][2][0], p_26.f1)), 0xD5E2A941L))))));
                    ++l_717;
                }
                if ((*g_85))
                    break;
                for (g_365 = 0; (g_365 <= 0); g_365 += 1)
                { 
                    uint64_t ***l_728 = &l_726;
                    uint64_t **l_729 = &g_337;
                    uint64_t ***l_730 = &l_729;
                    int i, j, k;
                    g_473.f2 ^= ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((*l_660) , l_644[g_365][(g_365 + 2)][(g_365 + 1)]), (((*l_728) = (g_727[0][2][0] = l_726)) == ((*l_730) = l_729)))) , ((l_645[2] < ((**g_119) ^ (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((***l_728) = (safe_lshift_func_uint16_t_u_u((((0x3458FBFDL & l_679) || g_314[0][2][0].f0) ^ (*l_638)), 0))), l_34)) >= l_692), (*l_638))))) | l_644[g_365][(g_365 + 2)][(g_365 + 1)])), p_26.f1)), l_644[g_365][(g_365 + 2)][(g_365 + 1)])) <= p_27.f0);
                }
            }
        }
        (**g_119) ^= (1UL != p_27.f0);
        if (g_221.f1)
            goto lbl_631;
    }
    else
    { 
        struct S1 l_740 = {149};
        (**g_119) ^= (p_27.f0 <= (1L > (safe_mod_func_uint16_t_u_u(((&g_119 != ((l_739 , l_740) , &g_119)) ^ (l_741 , l_740.f0)), g_710))));
    }
    (*g_119) = (l_739 , (*g_119));
    return l_642[1];
}



static int32_t  func_38(uint32_t  p_39, struct S0  p_40, int32_t * p_41, int16_t  p_42, uint8_t  p_43)
{ 
    uint32_t l_600 = 0xFF282264L;
    struct S0 l_601 = {0x02D2A682F50FB762LL,248UL,9L,1203};
    int32_t l_625 = 0x8D27648AL;
    int32_t l_626 = 0L;
    int32_t l_627 = 0x4F74B6B2L;
    for (p_39 = 0; (p_39 > 10); p_39 = safe_add_func_uint8_t_u_u(p_39, 3))
    { 
        int32_t l_614[5] = {0x1B393802L,0x1B393802L,0x1B393802L,0x1B393802L,0x1B393802L};
        uint32_t l_615 = 18446744073709551611UL;
        uint32_t *l_616 = &g_193[1][2];
        int64_t *l_617 = &g_86;
        int32_t l_620[1][5] = {{0xABB97D1AL,0xABB97D1AL,0xABB97D1AL,0xABB97D1AL,0xABB97D1AL}};
        int i, j;
        if (((*g_389) ^= ((p_40.f0 = ((*g_337) = l_600)) < ((*l_617) = (l_601 , (((((*l_616) ^= (0x7A078F55L || (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((0x0519D1A3FE8340B4LL != g_160), ((g_11[2] != (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0xACABL && p_40.f3), g_86)), g_217[2].f1))) > 1L))), l_601.f3)), l_614[0])), l_615)))) && l_601.f0) != p_40.f1) <= (*p_41)))))))
        { 
            int32_t *l_618 = &l_601.f2;
            (*g_119) = (g_28 , l_618);
        }
        else
        { 
            int32_t *l_619 = (void*)0;
            int32_t *l_621 = &l_620[0][4];
            int32_t *l_622 = &g_413.f2;
            int32_t *l_623 = &l_620[0][4];
            int32_t *l_624[5];
            uint8_t l_628[6];
            int i;
            for (i = 0; i < 5; i++)
                l_624[i] = &l_620[0][0];
            for (i = 0; i < 6; i++)
                l_628[i] = 0x48L;
            l_628[2]--;
            if ((*p_41))
                break;
            (*l_621) = 0L;
        }
    }
    return (*p_41);
}



static struct S0  func_44(struct S0  p_45, int32_t * p_46)
{ 
    uint32_t l_393 = 18446744073709551614UL;
    int8_t *l_416 = &g_28.f1;
    struct S0 l_431[3] = {{0UL,247UL,0xE118DF4FL,1126},{0UL,247UL,0xE118DF4FL,1126},{0UL,247UL,0xE118DF4FL,1126}};
    union U2 **l_444 = &g_327;
    int32_t l_451 = (-7L);
    int32_t l_452 = 0x4B51522DL;
    int32_t l_453 = 7L;
    int32_t l_455 = 0xA50666E2L;
    int32_t l_457 = (-10L);
    int32_t l_458 = 0xE8D6C6A8L;
    int32_t l_460[1][2][6];
    int64_t l_468[3];
    uint64_t l_469 = 1UL;
    uint8_t * const *l_479 = &g_79;
    uint32_t l_537 = 0xA08E28CFL;
    int32_t *l_592 = &g_32[0];
    uint32_t l_595 = 0xA8E3FDC0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
                l_460[i][j][k] = 3L;
        }
    }
    for (i = 0; i < 3; i++)
        l_468[i] = (-2L);
    for (g_365 = 0; (g_365 > (-1)); g_365 = safe_sub_func_int32_t_s_s(g_365, 8))
    { 
        uint16_t l_407 = 65534UL;
        struct S0 l_419 = {0x81B5EB7728FAD109LL,0x01L,-5L,2080};
        int8_t l_456 = 0x72L;
        int32_t l_459 = (-1L);
        int32_t l_461 = 1L;
        int32_t l_462 = 0x3BF60199L;
        int64_t l_463 = (-1L);
        int32_t l_464 = (-1L);
        int32_t l_465 = 3L;
        int32_t l_466 = (-9L);
        int32_t l_467 = 0xCF930278L;
        uint32_t l_558 = 0xAE85B5BCL;
        uint16_t l_569 = 2UL;
        uint64_t l_571 = 6UL;
        int64_t l_576 = 0L;
        int32_t l_585 = 0L;
        int32_t l_586[4][4][6] = {{{0x1AF2316BL,1L,(-1L),1L,0x1AF2316BL,0x160CBF14L},{(-1L),0x160CBF14L,(-1L),0xA431E129L,0x4CC1C453L,(-1L)},{0xA431E129L,0x4CC1C453L,(-1L),(-1L),6L,1L},{1L,(-1L),1L,(-1L),0xA431E129L,0xA431E129L}},{{0xA431E129L,0xBED2329AL,0xBED2329AL,0xA431E129L,0xA16B1780L,(-9L)},{(-1L),1L,1L,0x160CBF14L,1L,1L},{(-3L),(-1L),0x1AF2316BL,0x4F430D94L,1L,0x4CC1C453L},{0xA16B1780L,1L,0xA431E129L,1L,0xA16B1780L,0x4F430D94L}},{{0x1AF2316BL,0xBED2329AL,0xB362E95BL,(-9L),0xA431E129L,(-3L)},{0xB362E95BL,(-1L),0xA16B1780L,0xBED2329AL,6L,(-3L)},{0x4F430D94L,0x4CC1C453L,0xB362E95BL,0xB362E95BL,0x4CC1C453L,0x4F430D94L},{6L,0x160CBF14L,0xA431E129L,1L,0x1AF2316BL,0x4CC1C453L}},{{0x160CBF14L,0xA16B1780L,0x1AF2316BL,1L,(-1L),1L},{0x160CBF14L,(-9L),1L,1L,1L,(-9L)},{6L,0x1AF2316BL,0xBED2329AL,0xB362E95BL,(-9L),0xA431E129L},{0x4F430D94L,(-1L),1L,0xBED2329AL,(-3L),1L}}};
        const union U2 *l_594 = (void*)0;
        int i, j, k;
        --l_393;
        (*g_119) = p_46;
        for (p_45.f2 = 0; (p_45.f2 != 6); p_45.f2++)
        { 
            uint64_t l_411 = 0xC3538599DA618B0BLL;
            int16_t ***l_414 = &g_258;
            union U2 * const l_432 = &g_328[1];
            int32_t l_450 = 0x734F60C5L;
            int32_t l_454[1][4][2] = {{{(-8L),(-8L)},{0L,(-8L)},{(-8L),0L},{(-8L),(-8L)}}};
            int64_t *l_485[3][3][5] = {{{&l_468[2],&l_468[0],&l_468[2],&l_468[2],&l_468[0]},{&l_468[0],&l_468[2],&l_468[2],&l_468[0],&l_468[2]},{&l_468[0],&l_468[0],(void*)0,&l_468[0],&l_468[0]}},{{&l_468[2],&l_468[0],&l_468[2],&l_468[2],&l_468[0]},{&l_468[0],&l_468[2],&l_468[2],&l_468[0],&l_468[2]},{&l_468[0],&l_468[0],(void*)0,&l_468[0],&l_468[0]}},{{&l_468[2],&l_468[0],&l_468[2],&l_468[2],&l_468[0]},{&l_468[0],&l_468[2],&l_468[2],&l_468[0],&l_468[2]},{&l_468[0],&l_468[0],(void*)0,&l_468[0],&l_468[0]}}};
            uint16_t *l_529[7];
            uint16_t **l_528 = &l_529[4];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_529[i] = &l_407;
            for (p_45.f1 = (-2); (p_45.f1 < 41); p_45.f1 = safe_add_func_uint32_t_u_u(p_45.f1, 6))
            { 
                int64_t * const l_406 = (void*)0;
                int16_t ***l_415 = (void*)0;
                int32_t l_433 = 1L;
                union U3 *l_435[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_435[i] = (void*)0;
                (*g_85) = ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0L, (((*g_337) = (l_407 = (g_314[0][2][0] , (l_406 != &g_86)))) == (safe_unary_minus_func_uint16_t_u((g_11[4] , (safe_lshift_func_int16_t_s_s(((((l_411 , (!((l_414 = (g_413 , &g_258)) == l_415))) >= (**g_119)) ^ (-1L)) < 0xA0F27DD6BAF6BBF1LL), p_45.f0)))))))), 1)), l_393)) <= 18446744073709551611UL);
                (*g_389) ^= ((((l_416 != (void*)0) && (safe_mul_func_uint16_t_u_u(((l_419 , (safe_lshift_func_int8_t_s_s(((~(safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((*p_46) < ((((((l_431[0] , l_432) == &g_221) > 0xDE9C6A26EEE2EC9CLL) > p_45.f1) != 0xAB43L) > (*g_337))) >= g_28.f1), l_411)), p_45.f0)) && p_45.f1) <= p_45.f3), l_431[0].f1))) | l_433), p_45.f3))) != 0xC41CL), g_193[3][5]))) >= p_45.f3) != g_11[2]);
                if ((*p_46))
                { 
                    union U3 *l_434 = &g_28;
                    l_435[3] = l_434;
                }
                else
                { 
                    (*g_389) = 1L;
                    (**g_119) ^= 0x48389AF5L;
                    (*g_85) |= l_433;
                }
                (**g_119) = (0x9789L >= (0xD77F4AB8L == (g_436 != (void*)0)));
                if (l_433)
                    continue;
            }
            for (g_221.f1 = 7; (g_221.f1 > 54); g_221.f1 = safe_add_func_uint32_t_u_u(g_221.f1, 9))
            { 
                struct S0 l_441 = {18446744073709551615UL,249UL,-1L,6346};
                int32_t *l_446 = &g_32[0];
                int32_t *l_447 = (void*)0;
                int32_t *l_448 = &g_413.f2;
                int32_t *l_449[3][1];
                int8_t *l_476 = &l_456;
                int64_t *l_484 = &l_468[2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_449[i][j] = (void*)0;
                }
                for (g_197 = 0; (g_197 == 44); ++g_197)
                { 
                    union U2 **l_443 = &g_327;
                    union U2 ***l_442 = &l_443;
                    int32_t l_445 = 0xD8993676L;
                    (*g_119) = p_46;
                    l_444 = ((*l_442) = (l_441 , (p_45.f3 , &g_327)));
                    (*g_85) |= 0x6F1ECEA6L;
                    (*g_389) = (*p_46);
                    (*g_85) &= l_445;
                }
                l_469++;
                if ((*p_46))
                { 
                    struct S0 *l_472 = &g_473;
                    union U3 *l_474 = &g_28;
                    union U3 **l_475 = &l_474;
                    union U2 l_480 = {1L};
                    l_472 = &l_431[1];
                    (*l_475) = l_474;
                    (*g_119) = (((((void*)0 != l_476) ^ (**g_119)) > (safe_sub_func_uint64_t_u_u(0x1FAC4DE871DBE118LL, (((*l_472) , l_479) == (l_480 , &g_79))))) , (void*)0);
                    if ((*g_389))
                        break;
                    (*l_446) = 0x804C3BB1L;
                }
                else
                { 
                    int64_t **l_486 = &l_484;
                    uint64_t *l_487 = &g_473.f0;
                    (*l_446) = ((void*)0 == g_481);
                    (*p_46) = (safe_sub_func_int16_t_s_s(((((*l_486) = (l_485[1][0][1] = l_484)) != (void*)0) <= ((*g_337) | ((*l_487) = p_45.f0))), (((*l_448) = (safe_lshift_func_int16_t_s_s((-7L), (l_452 = (((p_45.f1 && (p_45.f3 , (-1L))) ^ 4294967295UL) , 9L))))) , 0x5BA6L)));
                }
                return p_45;
            }
            for (g_413.f2 = (-2); (g_413.f2 > 14); g_413.f2 = safe_add_func_int16_t_s_s(g_413.f2, 4))
            { 
                int32_t *l_514 = &l_455;
                uint32_t *l_522 = &g_193[2][0];
                uint32_t *l_525 = &g_526;
                uint64_t *l_527[4][7][2] = {{{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0}},{{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0}},{{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0}},{{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0},{&g_473.f0,&g_473.f0}}};
                int32_t *l_531 = (void*)0;
                int32_t *l_532 = &l_461;
                int32_t *l_533 = &l_454[0][2][1];
                int32_t *l_534 = &g_49[3][0].f2;
                int32_t *l_535 = &l_455;
                int32_t *l_536[1][6][6] = {{{&l_457,&l_431[0].f2,&l_431[0].f2,&l_457,&l_431[0].f2,&l_431[0].f2},{&l_457,&l_431[0].f2,&l_431[0].f2,&l_457,&l_431[0].f2,&l_431[0].f2},{&l_457,&l_431[0].f2,&l_431[0].f2,&l_457,&l_431[0].f2,&l_431[0].f2},{&l_457,&l_431[0].f2,&l_431[0].f2,&l_457,&l_431[0].f2,&l_431[0].f2},{&l_457,&l_431[0].f2,&l_431[0].f2,&l_457,&l_431[0].f2,&l_431[0].f2},{&l_457,&l_431[0].f2,&l_431[0].f2,&l_457,&l_431[0].f2,&l_431[0].f2}}};
                int i, j, k;
                (*g_389) = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((g_515 |= (safe_mod_func_int32_t_s_s((((safe_div_func_int16_t_s_s(p_45.f1, ((&g_481 != (((p_45.f0 > ((l_460[0][0][1] >= ((((*l_514) ^= (+(((safe_sub_func_uint8_t_u_u(p_45.f2, (safe_sub_func_uint64_t_u_u(((*p_46) && (safe_unary_minus_func_uint64_t_u((safe_div_func_uint8_t_u_u((!((*p_46) ^= (((safe_mul_func_uint8_t_u_u((!(safe_add_func_uint16_t_u_u((((g_86 && p_45.f3) && 0x259EL) ^ 0x6452C3AAL), g_32[0]))), 0xB7L)) , g_74) & 0x65EEL))), 2UL))))), p_45.f0)))) > 0x2BC42BA4956DCCC2LL) & g_193[3][2]))) , (*l_514)) | 0xF69FL)) == l_468[2])) < l_411) , &l_432)) || p_45.f0))) ^ p_45.f1) ^ 0x1978DEEFL), p_45.f2))) < 1UL), g_5)), g_28.f1));
                if ((((((safe_rshift_func_int16_t_s_s(0x1F13L, 8)) == ((safe_rshift_func_uint16_t_u_u((*l_514), ((safe_sub_func_uint32_t_u_u(((*l_522) = (0xD2C4DF94FE822136LL < ((*g_337) = p_45.f0))), (((l_450 = (safe_lshift_func_uint8_t_u_u(p_45.f0, ((((*p_46) ^= 0x96A0AFD5L) <= ((*l_525) |= (l_456 <= p_45.f2))) , (*l_514))))) == 0x9BF756B83C271B63LL) , (*p_46)))) || p_45.f1))) >= 0x53CFL)) > 0x873195F4L) , (*p_46)) <= (*g_389)))
                { 
                    uint16_t ***l_530 = &l_528;
                    (*g_119) = (*g_119);
                    (*l_530) = l_528;
                    return p_45;
                }
                else
                { 
                    (*g_389) &= l_452;
                }
                ++l_537;
                if (l_460[0][1][5])
                    continue;
            }
            return l_419;
        }
        for (g_473.f2 = (-28); (g_473.f2 > (-7)); g_473.f2++)
        { 
            int32_t **l_552[6] = {&g_389,&g_85,&g_85,&g_389,&g_85,&g_85};
            uint16_t *l_553 = &l_407;
            int8_t l_575 = 0xEEL;
            uint8_t l_589 = 0xFCL;
            int i;
            (*p_46) |= (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_419.f1 > l_465), ((*l_553) = (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(g_515, 0)) || ((safe_div_func_uint8_t_u_u((((void*)0 != l_552[2]) < 18446744073709551606UL), ((g_217[2].f0 >= 0L) , l_463))) <= p_45.f3)), l_419.f2))))) & p_45.f1), p_45.f3));
            for (l_461 = (-25); (l_461 != 25); l_461 = safe_add_func_uint32_t_u_u(l_461, 5))
            { 
                if ((*p_46))
                { 
                    (*l_444) = (void*)0;
                    (*g_119) = (p_45 , (void*)0);
                    return p_45;
                }
                else
                { 
                    (*p_46) = (safe_mul_func_int8_t_s_s(l_558, 0UL));
                }
            }
            for (l_462 = 0; (l_462 >= (-29)); l_462--)
            { 
                int64_t *l_570 = &l_463;
                int32_t l_573 = 0xF3142E51L;
                int32_t l_577 = 0x9F71B3A6L;
                int32_t l_578 = 0L;
                int32_t l_579 = (-1L);
                int32_t l_580 = 1L;
                int32_t l_581 = 0x1AC17E1CL;
                int64_t l_582[7] = {0xAA60B38A169DF43CLL,1L,1L,0xAA60B38A169DF43CLL,1L,1L,0xAA60B38A169DF43CLL};
                int32_t l_583 = 0xC9555A08L;
                int32_t l_584 = 0x1C81D83FL;
                int32_t l_587 = (-1L);
                int32_t l_588 = 0x24EE1C04L;
                int i;
                l_571 &= ((safe_mod_func_int64_t_s_s(((*l_570) = ((0x5023B0A0L > (*g_85)) , (((((l_467 = (safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_45.f0, 0xDFBA21415E73422ALL)), (((void*)0 == &p_46) && ((safe_lshift_func_int16_t_s_u(((p_45 , p_45.f3) ^ 0x1070C99AFAABD6E1LL), 6)) , l_451))))) , l_569) & (*p_46)) != g_328[1].f1) , 1L))), (*g_337))) < p_45.f0);
                for (g_28.f1 = 0; (g_28.f1 <= 2); g_28.f1 += 1)
                { 
                    int32_t l_572 = 0x8A6D3A2FL;
                    int32_t l_574[5] = {7L,7L,7L,7L,7L};
                    const union U2 *l_593 = &g_328[3];
                    int i;
                    l_589++;
                    if (l_468[g_28.f1])
                        break;
                    l_592 = p_46;
                    l_594 = l_593;
                }
                l_595--;
            }
        }
        (*g_119) = &l_467;
    }
    return l_431[0];
}



static struct S0  func_47(int64_t  p_48)
{ 
    uint8_t *l_75 = &g_49[3][0].f1;
    int32_t l_78[1];
    int16_t l_82 = 6L;
    struct S0 l_115 = {0UL,0x58L,0x67933A92L,4429};
    int16_t *l_124 = &g_74;
    int16_t **l_123 = &l_124;
    int16_t ***l_122 = &l_123;
    struct S1 l_138[2][4][1] = {{{{1182}},{{32}},{{1182}},{{1182}}},{{{32}},{{1182}},{{1182}},{{32}}}};
    int32_t l_169[2][7] = {{0xEF2B36ACL,(-1L),0xEF2B36ACL,4L,0L,0L,4L},{0xEF2B36ACL,(-1L),0xEF2B36ACL,4L,0L,0L,4L}};
    int64_t l_170 = 0L;
    uint32_t l_196 = 0xF6AA8AB6L;
    uint64_t * const l_209 = &g_49[3][0].f0;
    union U2 *l_216 = &g_217[2];
    union U2 *l_220 = &g_221;
    uint32_t l_297 = 0x569CB5C4L;
    uint16_t l_360[4][4] = {{0x5599L,0UL,65535UL,0UL},{0UL,4UL,65535UL,65535UL},{0x5599L,0x5599L,0UL,65535UL},{0x7306L,4UL,0x7306L,0UL}};
    uint8_t ****l_379 = &g_329;
    int32_t *l_388 = &l_115.f2;
    int32_t *l_390 = &l_78[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_78[i] = 0xBA36ED29L;
    for (p_48 = 0; (p_48 < 9); p_48 = safe_add_func_int64_t_s_s(p_48, 5))
    { 
        uint32_t l_87 = 0x7DCD999CL;
        uint64_t l_90 = 18446744073709551609UL;
        int32_t l_101 = 0x103D800CL;
        int32_t l_105 = 0x8BDFDF76L;
        uint16_t l_106[4];
        int16_t ***l_142 = &l_123;
        const struct S1 l_165 = {1082};
        int32_t l_173[2][7][7] = {{{0x588204ECL,0xA615A5E8L,5L,0L,1L,0x588204ECL,5L},{0x048B0955L,0xD068D130L,0x71E60DA4L,1L,0x71E60DA4L,0xD068D130L,0x048B0955L},{5L,5L,1L,0xA615A5E8L,5L,(-1L),5L},{7L,8L,7L,0L,0xF3CC42DBL,0xE1F2821DL,(-1L)},{0xA615A5E8L,1L,1L,1L,1L,0xA615A5E8L,0x3D1604EEL},{0xB8FBB2B8L,0L,0x71E60DA4L,0xE1F2821DL,0x9B203F3CL,0xE1F2821DL,0x71E60DA4L},{5L,(-1L),5L,0xA4E7FF8EL,0xA615A5E8L,(-1L),(-1L)}},{{0xF0D1286CL,0L,0x35962A18L,0L,0xF0D1286CL,0xD068D130L,0xF3CC42DBL},{0x588204ECL,1L,0L,5L,0xA615A5E8L,0x588204ECL,0x3D1604EEL},{0x71E60DA4L,8L,(-1L),1L,0x9B203F3CL,0L,0x9B203F3CL},{0x588204ECL,5L,5L,0x588204ECL,1L,0L,5L},{0xF0D1286CL,0xD068D130L,0xF3CC42DBL,1L,0xF3CC42DBL,0xD068D130L,0xF0D1286CL},{5L,0xA615A5E8L,1L,5L,0xA615A5E8L,0xA615A5E8L,0L},{(-1L),0xD068D130L,(-1L),0xE1F2821DL,0xB8FBB2B8L,1L,0x048B0955L}}};
        uint64_t l_175 = 0xEB3699347C11895CLL;
        struct S0 l_178 = {18446744073709551607UL,0x5CL,1L,5718};
        uint32_t l_204[3];
        int32_t *l_275 = &g_49[3][0].f2;
        uint64_t l_302 = 0x0034B15233EBA5CBLL;
        uint16_t l_322 = 1UL;
        const union U2 l_364 = {-1L};
        int32_t *l_378 = &g_32[0];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_106[i] = 0x7E90L;
        for (i = 0; i < 3; i++)
            l_204[i] = 0xAF24A4C6L;
        for (g_28.f0 = 0; (g_28.f0 <= 0); g_28.f0 += 1)
        { 
            int16_t *l_73 = &g_74;
            int8_t *l_80 = (void*)0;
            int8_t *l_81 = (void*)0;
            int32_t *l_84 = &l_78[0];
            int32_t **l_83[4];
            struct S0 l_91[5][3] = {{{0x6052A731AC79CC16LL,0x41L,-7L,7973},{0x51155E3342DF671BLL,1UL,0xF2F45F95L,7133},{0x6052A731AC79CC16LL,0x41L,-7L,7973}},{{8UL,6UL,0L,691},{18446744073709551606UL,0xA4L,-1L,2119},{8UL,6UL,0L,691}},{{0x6052A731AC79CC16LL,0x41L,-7L,7973},{0x51155E3342DF671BLL,1UL,0xF2F45F95L,7133},{0x6052A731AC79CC16LL,0x41L,-7L,7973}},{{8UL,6UL,0L,691},{18446744073709551606UL,0xA4L,-1L,2119},{8UL,6UL,0L,691}},{{0x6052A731AC79CC16LL,0x41L,-7L,7973},{0x51155E3342DF671BLL,1UL,0xF2F45F95L,7133},{0x6052A731AC79CC16LL,0x41L,-7L,7973}}};
            int64_t l_102 = 1L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_83[i] = &l_84;
            if (g_32[g_28.f0])
                break;
            g_32[g_28.f0] = (safe_rshift_func_int8_t_s_s(((&g_32[0] != (void*)0) <= p_48), (l_82 ^= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(0x6AL, (((*l_73) = p_48) & (l_75 == (((safe_mul_func_uint8_t_u_u(p_48, 0xC0L)) != l_78[0]) , g_79))))), 1)), 1L)))));
            g_85 = &l_78[0];
            l_87++;
            if ((*g_85))
            { 
                (*g_85) ^= l_90;
                for (g_74 = 0; g_74 < 4; g_74 += 1)
                {
                    l_83[g_74] = (void*)0;
                }
                return l_91[3][0];
            }
            else
            { 
                int32_t l_94 = 0x6E2F7064L;
                int32_t l_95 = (-1L);
                int32_t l_99 = 0xCEDD96C0L;
                int32_t l_103 = 7L;
                for (l_87 = 0; (l_87 > 15); ++l_87)
                { 
                    int32_t l_96 = 0xBA0D3790L;
                    int32_t l_97 = 0xC462E654L;
                    int32_t l_98 = 1L;
                    int32_t l_100 = 0xD3DDFAC9L;
                    int32_t l_104 = 1L;
                    int16_t **l_110 = &l_73;
                    int16_t ***l_109 = &l_110;
                    int32_t ***l_117 = (void*)0;
                    int32_t ***l_118[2][4] = {{&l_83[3],&l_83[3],&l_83[3],&l_83[3]},{&l_83[3],&l_83[3],&l_83[3],&l_83[3]}};
                    int i, j;
                    l_106[3]--;
                    (*l_109) = (void*)0;
                    g_119 = func_111(l_75, &l_103, l_115);
                }
            }
        }
        for (l_82 = 3; (l_82 != 14); l_82++)
        { 
            uint8_t l_133 = 247UL;
            int32_t l_161 = 0xD5673C17L;
            int32_t l_198 = 0x43F9BEFCL;
            int32_t l_202[5][6] = {{0xC4452132L,(-7L),0xC4452132L,(-7L),0xC4452132L,(-7L)},{0xC4452132L,(-7L),0xC4452132L,(-7L),0xC4452132L,(-7L)},{0xC4452132L,(-7L),0xC4452132L,(-7L),0xC4452132L,(-7L)},{0xC4452132L,(-7L),0xC4452132L,(-7L),0xC4452132L,(-7L)},{0xC4452132L,(-7L),0xC4452132L,(-7L),0xC4452132L,(-7L)}};
            const uint64_t *l_207 = (void*)0;
            int16_t *l_212 = &l_82;
            union U2 **l_218 = (void*)0;
            union U2 **l_219[3][5] = {{(void*)0,&l_216,&l_216,(void*)0,&l_216},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_216,(void*)0,&l_216,&l_216,(void*)0}};
            union U3 l_224 = {0x09D400D4L};
            uint32_t *l_298 = (void*)0;
            uint32_t *l_299[6] = {&g_193[0][3],&g_193[0][3],&g_193[0][3],&g_193[0][3],&g_193[0][3],&g_193[0][3]};
            int i, j;
            if ((*g_85))
            { 
                int16_t l_139[5][7] = {{0L,0x00ABL,0x00ABL,0L,0x00ABL,0x00ABL,0L},{0x00ABL,0L,0x00ABL,0x00ABL,0L,0x00ABL,0x00ABL},{0L,0L,0x9AD7L,0L,0L,0x9AD7L,0L},{0L,0x00ABL,0x00ABL,0L,0x00ABL,0x00ABL,0L},{0x00ABL,0L,0x00ABL,0x00ABL,0L,0x00ABL,0x00ABL}};
                int8_t *l_140 = (void*)0;
                uint64_t *l_141 = &l_115.f0;
                const int16_t *l_159 = &l_139[4][4];
                const int16_t **l_158 = &l_159;
                const int16_t ***l_157 = &l_158;
                int32_t l_168 = 0xAC231147L;
                int32_t l_171 = (-1L);
                int32_t l_172 = (-1L);
                int32_t l_174 = 0x72968D20L;
                int i, j;
                (**g_119) = 0xF9FDB8F8L;
                (*g_85) = (l_122 == (((*l_141) = ((safe_sub_func_uint64_t_u_u(p_48, (safe_sub_func_int32_t_s_s((((safe_add_func_int64_t_s_s((-1L), 0x9B8980116228B080LL)) && ((safe_add_func_int32_t_s_s((((*l_75) &= l_133) , (safe_lshift_func_int8_t_s_u((g_28.f1 = (p_48 >= ((((safe_sub_func_uint16_t_u_u((l_138[1][3][0] , l_139[0][6]), l_115.f0)) & (*g_85)) , (**g_119)) && (**g_119)))), 6))), l_139[3][6])) < g_32[0])) & p_48), 0x3A33BA32L)))) > 2UL)) , l_142));
                for (l_87 = 0; (l_87 < 22); ++l_87)
                { 
                    int64_t l_149[1];
                    uint16_t *l_154 = &l_106[1];
                    int32_t *l_162 = &l_101;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_149[i] = 0x11E79692DFF05BDELL;
                    (*l_162) ^= (l_161 = (((*g_85) = (safe_div_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_u(p_48, 13)) < (l_149[0] || (safe_mul_func_int16_t_s_s((g_32[0] ^ (safe_add_func_uint16_t_u_u((++(*l_154)), p_48))), ((void*)0 == l_157))))) <= (0UL == g_12)) , g_2) & p_48), g_160))) && l_139[3][3]));
                }
                if ((safe_lshift_func_uint8_t_u_u(((*l_75) = p_48), (l_90 > (((((void*)0 == &g_74) , ((p_48 >= p_48) > (l_165 , (*g_85)))) && l_139[0][6]) != 0x69L)))))
                { 
                    int8_t l_166 = 1L;
                    int32_t *l_167[4][5];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_167[i][j] = &g_49[3][0].f2;
                    }
                    l_175--;
                    if (p_48)
                        continue;
                }
                else
                { 
                    (*g_85) &= 1L;
                    if (p_48)
                        break;
                }
                return l_178;
            }
            else
            { 
                int32_t *l_194 = (void*)0;
                int32_t l_203[4][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{6L,6L,6L,6L,6L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{6L,6L,6L,6L,6L}};
                struct S0 l_208 = {0xEBC11B85D3632D98LL,255UL,0x6C139F92L,5806};
                int32_t *l_213 = (void*)0;
                int32_t *l_214 = (void*)0;
                int32_t *l_215 = &l_202[1][0];
                int i, j;
                for (l_133 = 0; (l_133 < 57); l_133 = safe_add_func_uint8_t_u_u(l_133, 6))
                { 
                    uint32_t *l_192 = &g_193[1][2];
                    int64_t *l_195[6][6] = {{&l_170,&l_170,&l_170,&g_86,&l_170,(void*)0},{(void*)0,&l_170,&l_170,&g_86,&g_86,&l_170},{(void*)0,(void*)0,&l_170,(void*)0,&l_170,(void*)0},{&l_170,(void*)0,&l_170,&l_170,&l_170,&g_86},{&l_170,&l_170,&g_86,&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170,&l_170,&l_170,&l_170}};
                    int32_t *l_199 = &l_169[1][0];
                    int32_t *l_200 = (void*)0;
                    int32_t *l_201[7][2] = {{&l_169[0][0],&l_105},{&l_105,&l_169[0][0]},{&l_105,&l_105},{&l_169[0][0],&l_105},{&l_105,&l_169[0][0]},{&l_105,&l_105},{&l_169[0][0],&l_105}};
                    int i, j;
                    (*l_199) ^= ((((**l_123) = (safe_sub_func_int64_t_s_s(l_115.f3, ((l_198 &= (g_197 |= ((safe_rshift_func_uint16_t_u_u((((((safe_add_func_int16_t_s_s(p_48, (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(0xE4574D66L)), ((safe_lshift_func_int8_t_s_s((9UL && (((*l_75) = ((((*l_192) = p_48) > ((g_86 = (l_194 != l_194)) ^ p_48)) , 0x03L)) != l_178.f3)), 1)) , 0xB627L))))) , &g_74) != &g_74) & (**g_119)) , l_161), l_178.f3)) && l_196))) , g_49[3][0].f0)))) <= g_32[0]) , (**g_119));
                    l_204[0]++;
                    if (l_169[0][0])
                        break;
                }
                for (l_101 = 0; l_101 < 1; l_101 += 1)
                {
                    l_78[l_101] = 0x24BC701FL;
                }
                l_105 |= ((l_207 != (l_208 , l_209)) != (((*l_215) |= (0xE5L != ((safe_add_func_uint8_t_u_u(p_48, (g_49[1][0] , (l_212 != &g_74)))) , l_106[0]))) , g_32[0]));
            }
            l_220 = (l_216 = l_216);
            for (l_115.f0 = 0; (l_115.f0 > 1); l_115.f0 = safe_add_func_uint32_t_u_u(l_115.f0, 5))
            { 
                int32_t *l_225 = &l_202[3][0];
                int32_t *l_226 = &l_101;
                int32_t *l_227 = &l_169[1][2];
                int32_t *l_228 = &l_115.f2;
                int32_t *l_229 = &l_173[1][5][5];
                int32_t *l_230 = &l_169[0][6];
                int32_t *l_231 = &g_32[0];
                int32_t *l_232[1][6][3] = {{{&l_178.f2,&l_202[1][0],&l_178.f2},{(void*)0,(void*)0,(void*)0},{&l_178.f2,&l_202[1][0],&l_178.f2},{(void*)0,(void*)0,(void*)0},{&l_178.f2,&l_202[1][0],&l_178.f2},{(void*)0,(void*)0,(void*)0}}};
                uint16_t l_233[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                uint8_t **l_244 = &l_75;
                uint8_t *l_245 = &g_197;
                uint8_t **l_246[1];
                struct S1 l_259 = {1094};
                const union U2 l_268 = {0xC1CFL};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_246[i] = &l_245;
            }
            (*l_275) = ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s(((g_217[2] , (~(safe_add_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(p_48, (((g_2 != ((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(250UL, 0x4FL)), (safe_mul_func_int8_t_s_s(((l_297 & (--g_193[1][2])) | (((**l_123) = 9L) == g_217[2].f0)), l_133)))) != p_48)) & l_302) & g_221.f0))), g_32[0])) & l_202[0][2]), 1L)))) | 3L), p_48)))) , (*g_85));
        }
        (**g_119) = l_78[0];
        (*l_378) ^= ((safe_sub_func_int64_t_s_s(((*l_275) || ((l_78[0] = (((**g_119) | ((safe_add_func_int32_t_s_s(((&l_75 != (void*)0) <= 0x58L), (0xE84F6D5AL || ((safe_add_func_uint8_t_u_u(((p_48 < 5UL) < g_12), l_115.f3)) != (*g_337))))) && g_5)) <= l_115.f3)) < p_48)), 7L)) > 0L);
    }
    (**g_119) = (((*l_379) = g_329) != (void*)0);
    (*g_85) |= ((l_82 != l_138[1][3][0].f0) ^ (safe_rshift_func_int16_t_s_u(p_48, 12)));
    for (l_115.f0 = 0; (l_115.f0 < 22); ++l_115.f0)
    { 
        for (g_86 = 0; g_86 < 2; g_86 += 1)
        {
            for (g_365 = 0; g_365 < 7; g_365 += 1)
            {
                l_169[g_86][g_365] = 0xCB76CFBFL;
            }
        }
        for (g_28.f1 = (-6); (g_28.f1 < 27); g_28.f1 = safe_add_func_int8_t_s_s(g_28.f1, 6))
        { 
            int32_t *l_386[1][6];
            int32_t **l_387[4][6] = {{&l_386[0][5],&l_386[0][5],&l_386[0][1],&l_386[0][1],&l_386[0][1],&l_386[0][5]},{&l_386[0][1],&l_386[0][0],&l_386[0][1],&l_386[0][1],&l_386[0][0],&l_386[0][1]},{&l_386[0][5],&l_386[0][1],&l_386[0][1],&l_386[0][1],&l_386[0][5],&l_386[0][5]},{&l_386[0][1],&l_386[0][1],&l_386[0][1],&l_386[0][1],&l_386[0][0],&l_386[0][1]}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_386[i][j] = &g_32[0];
            }
            l_390 = (g_389 = (l_388 = ((*g_119) = l_386[0][1])));
        }
    }
    (*g_119) = ((*l_390) , (*g_119));
    return l_115;
}



static int32_t ** func_111(int8_t * p_112, int32_t * const  p_113, struct S0  p_114)
{ 
    int32_t **l_116 = &g_85;
    return l_116;
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
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_32[i], "g_32[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_49[i][j].f0, "g_49[i][j].f0", print_hash_value);
            transparent_crc(g_49[i][j].f1, "g_49[i][j].f1", print_hash_value);
            transparent_crc(g_49[i][j].f2, "g_49[i][j].f2", print_hash_value);
            transparent_crc(g_49[i][j].f3, "g_49[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_193[i][j], "g_193[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_197, "g_197", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_217[i].f0, "g_217[i].f0", print_hash_value);
        transparent_crc(g_217[i].f1, "g_217[i].f1", print_hash_value);

    }
    transparent_crc(g_221.f0, "g_221.f0", print_hash_value);
    transparent_crc(g_221.f1, "g_221.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_314[i][j][k].f0, "g_314[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_328[i].f0, "g_328[i].f0", print_hash_value);
        transparent_crc(g_328[i].f1, "g_328[i].f1", print_hash_value);

    }
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    transparent_crc(g_473.f3, "g_473.f3", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_916.f0, "g_916.f0", print_hash_value);
    transparent_crc(g_916.f1, "g_916.f1", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
