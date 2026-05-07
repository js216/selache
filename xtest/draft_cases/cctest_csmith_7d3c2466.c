// SPDX-License-Identifier: MIT
// cctest_csmith_7d3c2466.c --- cctest case csmith_7d3c2466 (csmith seed 2101093478)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6a324c37 */

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

// Options:   -s 2101093478 -o /tmp/csmith_gen_3_hbgqro/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 1;
   const unsigned f1 : 18;
   signed f2 : 12;
   signed f3 : 8;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 17;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   const int32_t  f1;
};

union U3 {
   int64_t  f0;
   const uint64_t  f1;
   int64_t  f2;
};

union U4 {
   int16_t  f0;
};

union U5 {
   uint16_t  f0;
   uint32_t  f1;
};

union U6 {
   int64_t  f0;
   uint64_t  f1;
   int64_t  f2;
};


static uint64_t g_2 = 18446744073709551610UL;
static int32_t g_4[4][3] = {{0xC7104272L,0xB8AE505BL,0xC7104272L},{0xC7104272L,0xB8AE505BL,0xC7104272L},{0xC7104272L,0xB8AE505BL,0xC7104272L},{0xC7104272L,0xB8AE505BL,0xC7104272L}};
static int16_t g_27 = 0x214DL;
static int16_t g_29 = 0xC3AEL;
static union U3 g_50 = {0xC9AD537E8F88485BLL};
static uint64_t g_77 = 0x9115BA09F94EB44DLL;
static uint8_t g_79 = 0x82L;
static uint8_t g_80[3][7][1] = {{{0xAFL},{0UL},{0xAFL},{0UL},{0xAFL},{0UL},{0xAFL}},{{0UL},{0xAFL},{0UL},{0xAFL},{0UL},{0xAFL},{0UL}},{{0xAFL},{0UL},{0xAFL},{0UL},{0xAFL},{0UL},{0xAFL}}};
static int32_t g_82 = 0x5FA60710L;
static int16_t *g_92 = &g_27;
static int16_t **g_91 = &g_92;
static int16_t ***g_90 = &g_91;
static uint8_t g_102 = 253UL;
static union U4 g_108 = {2L};
static struct S0 g_109 = {0,182,27,10};
static const int8_t g_117 = 0xF5L;
static const int8_t *g_116 = &g_117;
static union U2 g_127 = {0x050BF12BL};
static int8_t g_134 = 0x7EL;
static uint16_t g_135 = 1UL;
static struct S1 g_138 = {219};
static struct S1 g_141[7][2][1] = {{{{126}},{{163}}},{{{126}},{{288}}},{{{310}},{{310}}},{{{288}},{{126}}},{{{163}},{{126}}},{{{288}},{{310}}},{{{310}},{{163}}}};
static union U6 g_144 = {7L};
static uint32_t g_150 = 18446744073709551607UL;
static int32_t *g_154 = &g_82;
static int16_t g_168 = (-5L);
static int8_t g_169 = (-8L);
static int8_t g_170 = (-6L);
static uint8_t g_171 = 0xCBL;
static uint32_t g_205 = 0UL;
static uint32_t g_216 = 0UL;
static const int64_t * const g_273 = &g_50.f2;
static union U5 g_287 = {0x6F03L};
static uint32_t g_372 = 0x5574EA30L;
static const int64_t *g_406 = &g_144.f0;
static const int64_t **g_405 = &g_406;
static uint32_t g_463 = 0xF45AB369L;
static const uint32_t *g_481[1] = {&g_127.f0};
static const uint32_t **g_480 = &g_481[0];
static const uint32_t *** const g_479 = &g_480;
static union U3 * const g_503 = &g_50;
static union U3 * const *g_502[6][2] = {{&g_503,&g_503},{&g_503,&g_503},{&g_503,&g_503},{&g_503,&g_503},{&g_503,&g_503},{&g_503,&g_503}};
static int32_t **g_513[7][4] = {{&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154}};
static int32_t ***g_512 = &g_513[3][3];
static int16_t ** const *g_535 = (void*)0;
static int16_t ** const **g_534 = &g_535;
static int32_t g_576 = 4L;
static union U6 g_604 = {-6L};
static int16_t ****g_666 = &g_90;
static int16_t *****g_665 = &g_666;
static int8_t *g_747 = &g_170;
static int8_t **g_746[7][7] = {{&g_747,(void*)0,&g_747,&g_747,&g_747,(void*)0,&g_747},{&g_747,&g_747,&g_747,&g_747,&g_747,&g_747,&g_747},{&g_747,(void*)0,&g_747,&g_747,&g_747,(void*)0,&g_747},{&g_747,&g_747,&g_747,&g_747,&g_747,&g_747,&g_747},{&g_747,(void*)0,&g_747,&g_747,&g_747,(void*)0,&g_747},{&g_747,&g_747,&g_747,&g_747,&g_747,&g_747,&g_747},{&g_747,(void*)0,&g_747,&g_747,&g_747,(void*)0,&g_747}};
static union U6 *g_884[7] = {&g_604,&g_604,&g_604,&g_604,&g_604,&g_604,&g_604};
static union U6 **g_883 = &g_884[5];
static uint32_t g_934 = 2UL;
static uint64_t g_963 = 1UL;
static int32_t **g_981 = &g_154;
static int32_t g_982 = (-1L);
static int32_t g_1020 = 0xF83EFBD7L;
static struct S0 g_1056 = {-0,3,55,-6};
static struct S0 *g_1055 = &g_1056;
static const uint16_t g_1095[2][7] = {{0xF53EL,0xF53EL,0xF53EL,0xF53EL,0xF53EL,0xF53EL,0xF53EL},{0xF53EL,0xF53EL,0xF53EL,0xF53EL,0xF53EL,0xF53EL,0xF53EL}};
static union U3 *g_1122 = (void*)0;
static union U3 **g_1121[6] = {&g_1122,&g_1122,&g_1122,&g_1122,&g_1122,&g_1122};
static union U3 ***g_1120 = &g_1121[3];
static union U3 ****g_1119[5] = {&g_1120,&g_1120,&g_1120,&g_1120,&g_1120};
static union U3 ** const g_1163 = &g_1122;
static int64_t *g_1174 = &g_604.f0;
static int64_t **g_1173[3] = {&g_1174,&g_1174,&g_1174};
static int64_t ***g_1172[3][4][6] = {{{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]}},{{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]}},{{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0],&g_1173[0]}}};
static int64_t ****g_1171 = &g_1172[2][1][0];
static int64_t *****g_1170[6] = {&g_1171,&g_1171,&g_1171,&g_1171,&g_1171,&g_1171};
static int64_t g_1213 = 0L;
static const struct S0 g_1244 = {-0,144,-16,6};
static int16_t g_1253[4][7][5] = {{{8L,(-7L),1L,0xDF8AL,0x3DC9L},{(-8L),0x9C9BL,1L,0xBB2DL,0L},{0L,1L,1L,0L,(-1L)},{0xDF8AL,8L,1L,0x9C9BL,0xA8BCL},{0x9E0AL,0x3DC9L,0x9C37L,(-1L),8L},{0xA8BCL,1L,0xD890L,0x9C9BL,0xBB2DL},{0L,0xA8BCL,0xD771L,0L,0xE125L}},{{0x9E0AL,0xE125L,0xBB2DL,0xBB2DL,0xE125L},{(-7L),0x499BL,(-8L),0xDF8AL,0xBB2DL},{0x3DC9L,0xDF8AL,1L,(-7L),8L},{(-8L),0L,0x499BL,0xBB2DL,0xA8BCL},{0x3DC9L,1L,0x8C49L,0x3DC9L,(-1L)},{(-7L),0L,1L,0L,0L},{0x9E0AL,0L,0x9E0AL,(-1L),0x3DC9L}},{{0L,1L,(-1L),0xA8BCL,0xBB2DL},{0xA8BCL,0L,0xD771L,8L,(-7L)},{0x9E0AL,0xDF8AL,(-1L),0xBB2DL,0xDF8AL},{0xDF8AL,0x499BL,0x9E0AL,0xE125L,0xBB2DL},{0L,0xE125L,1L,0xE125L,0L},{(-8L),0xA8BCL,0x8C49L,0xBB2DL,0x9C9BL},{8L,1L,0x499BL,8L,(-1L)}},{{0xE125L,0x3DC9L,1L,0xA8BCL,0x9C9BL},{0x9E0AL,8L,(-8L),(-1L),0L},{0x9C9BL,1L,0xBB2DL,0L,0xBB2DL},{0x9C9BL,0x9C9BL,0xD771L,0x3DC9L,0xDF8AL},{0x9E0AL,(-7L),0xD890L,0xBB2DL,(-7L)},{0xE125L,0x499BL,0x9C37L,(-7L),0xBB2DL},{8L,(-7L),1L,0xDF8AL,0x3DC9L}}};
static int8_t ***g_1316 = &g_746[3][0];
static int8_t ****g_1315 = &g_1316;
static uint16_t g_1327 = 1UL;
static int16_t g_1372[1][3] = {{(-1L),(-1L),(-1L)}};
static const int16_t **g_1418 = (void*)0;
static const int16_t ***g_1417 = &g_1418;
static const int16_t ****g_1416 = &g_1417;
static int8_t g_1466[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static const int64_t g_1589 = 0x4BBDD4C41C3505D6LL;
static union U2 g_1615 = {4294967287UL};
static uint64_t g_1649[2][5][3] = {{{18446744073709551609UL,18446744073709551609UL,0xF95DE311B6FA3ADBLL},{0xCBC9777BFAC0AC19LL,0xA0F1FAF7F001943ALL,0xA0F1FAF7F001943ALL},{0xF95DE311B6FA3ADBLL,6UL,0x2A4B80F69180B502LL},{0xCBC9777BFAC0AC19LL,0x75D2C9D34873E701LL,0xCBC9777BFAC0AC19LL},{18446744073709551609UL,0xF95DE311B6FA3ADBLL,0x2A4B80F69180B502LL}},{{0UL,0UL,0xA0F1FAF7F001943ALL},{0x209DD43B5ADD4FF5LL,0xF95DE311B6FA3ADBLL,0xF95DE311B6FA3ADBLL},{0xA0F1FAF7F001943ALL,0x75D2C9D34873E701LL,0x535A6DAC35828F47LL},{0x209DD43B5ADD4FF5LL,6UL,0x209DD43B5ADD4FF5LL},{0UL,0xCBC9777BFAC0AC19LL,0x75D2C9D34873E701LL}}};
static const int8_t ***g_1652 = (void*)0;
static int64_t g_1789[4] = {0x75375B2F1CB34AC1LL,0x75375B2F1CB34AC1LL,0x75375B2F1CB34AC1LL,0x75375B2F1CB34AC1LL};
static union U6 g_1934 = {0xD853DF8C1C891676LL};
static union U4 **g_1981[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_2129 = (-8L);
static uint16_t *g_2152 = &g_1327;
static uint16_t **g_2151 = &g_2152;
static uint16_t *** const g_2150 = &g_2151;
static uint16_t *** const *g_2149 = &g_2150;
static uint32_t ****g_2258 = (void*)0;
static union U2 g_2287 = {0xD07A39ADL};
static union U2 *g_2286 = &g_2287;
static int32_t g_2314 = 0x4E12F738L;
static struct S0 **g_2328 = (void*)0;
static struct S0 ***g_2327 = &g_2328;
static struct S0 ***g_2329 = &g_2328;
static union U5 * const *g_2340 = (void*)0;
static union U5 * const **g_2339 = &g_2340;
static const uint8_t *g_2374 = &g_102;
static const uint8_t **g_2373[6] = {&g_2374,&g_2374,&g_2374,&g_2374,&g_2374,&g_2374};
static union U5 **g_2468 = (void*)0;
static union U5 ***g_2467 = &g_2468;
static uint32_t g_2486 = 0xA148C63DL;
static int32_t g_2520 = 0L;
static uint16_t g_2527 = 0UL;
static const int32_t *g_2555 = (void*)0;



static struct S0  func_1(void);
static int32_t  func_5(const int8_t  p_6, const uint32_t  p_7);
static int64_t  func_8(uint64_t  p_9, int32_t * p_10, union U6  p_11);
static uint32_t  func_12(uint32_t  p_13);
static union U6  func_31(union U6  p_32);
static union U6  func_33(int16_t * const  p_34, int32_t * p_35, union U6  p_36, const struct S1  p_37);
static union U6  func_38(int16_t  p_39);
static int32_t * func_40(int16_t * p_41, int64_t  p_42, int16_t * p_43, uint8_t  p_44, union U2  p_45);




static struct S0  func_1(void)
{ 
    int32_t *l_3 = &g_4[3][0];
    uint16_t l_23[3][4][1] = {{{0xB66EL},{0xE737L},{0xB66EL},{0xE737L}},{{0xB66EL},{0xE737L},{0xB66EL},{0xE737L}},{{0xB66EL},{0xE737L},{0xB66EL},{0xE737L}}};
    int16_t *l_26 = &g_27;
    int16_t *l_28[4][7][3] = {{{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0}},{{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0}},{{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0}},{{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0},{(void*)0,&g_29,(void*)0}}};
    uint16_t l_30[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
    union U6 *l_849 = (void*)0;
    union U6 *l_850[4] = {&g_144,&g_144,&g_144,&g_144};
    const struct S1 l_851 = {223};
    uint32_t *l_1463 = (void*)0;
    uint32_t *l_1464 = &g_216;
    int8_t *l_1465[3];
    int32_t l_2305 = 0L;
    int32_t l_2311 = 0xE832F596L;
    union U2 l_2338 = {1UL};
    const int32_t *l_2342 = &l_2311;
    struct S0 ****l_2346[2];
    struct S1 *l_2419 = &g_141[0][0][0];
    int32_t l_2433 = 0x5D504036L;
    int32_t l_2476[2][2][4] = {{{(-1L),0x8550B225L,0x76E5CE79L,0x76E5CE79L},{0x56615242L,0x56615242L,(-1L),0x76E5CE79L}},{{2L,0x8550B225L,2L,(-1L)},{2L,(-1L),(-1L),2L}}};
    int8_t l_2477 = 0xC5L;
    int64_t l_2480 = (-1L);
    int32_t l_2507 = 0x014AA961L;
    int32_t l_2509 = 1L;
    union U4 *l_2516 = &g_108;
    int8_t l_2523 = 5L;
    union U3 l_2535 = {1L};
    union U5 l_2536[7][1][4] = {{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}},{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}},{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}},{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}},{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}},{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}},{{{0xA4CBL},{0xA4CBL},{0xA4CBL},{0xA4CBL}}}};
    int16_t *****l_2560 = &g_666;
    uint8_t *l_2586[7];
    uint8_t **l_2585 = &l_2586[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1465[i] = &g_1466[1];
    for (i = 0; i < 2; i++)
        l_2346[i] = &g_2329;
    for (i = 0; i < 7; i++)
        l_2586[i] = &g_80[2][2][0];
    (*l_3) |= g_2;
    return (*g_1055);
}



static int32_t  func_5(const int8_t  p_6, const uint32_t  p_7)
{ 
    union U5 l_1958 = {7UL};
    uint8_t *l_1963 = &g_79;
    struct S0 l_1978[5] = {{-0,150,50,13},{-0,150,50,13},{-0,150,50,13},{-0,150,50,13},{-0,150,50,13}};
    union U4 * const l_1980 = &g_108;
    union U4 * const *l_1979 = &l_1980;
    union U3 ***l_1982 = &g_1121[3];
    uint32_t *l_1983 = &g_216;
    int16_t ****l_1997 = &g_90;
    uint32_t l_2045 = 7UL;
    int32_t l_2072 = 9L;
    int32_t l_2073 = 0x8CBFCAC5L;
    int32_t l_2074 = 7L;
    int32_t l_2075 = 0xDCAE11F2L;
    int32_t l_2076[5][7] = {{0x73A92067L,0L,0L,0x73A92067L,0L,0L,0x73A92067L},{(-9L),0L,(-9L),(-9L),0L,(-9L),(-9L)},{0x73A92067L,0x73A92067L,0x94069653L,0x73A92067L,0x73A92067L,0x73A92067L,0L},{(-9L),0x025F2453L,0x025F2453L,(-9L),0x025F2453L,0x025F2453L,(-9L)},{0x94069653L,0L,0x94069653L,0x94069653L,0L,0x94069653L,0x94069653L}};
    int8_t l_2078 = 0xD3L;
    int32_t l_2080 = 0x6E773C6DL;
    int32_t l_2081[2][4][3] = {{{9L,0x26ACBAAFL,0x598965B0L},{0x5767B01CL,0L,0x598965B0L},{0xACA0E5A8L,0x5767B01CL,0L},{0L,0L,9L}},{{0xACA0E5A8L,9L,0x5767B01CL},{0x5767B01CL,9L,0xACA0E5A8L},{9L,0L,0L},{0L,0x5767B01CL,0xACA0E5A8L}}};
    uint8_t l_2083[2][2] = {{251UL,251UL},{251UL,251UL}};
    const int8_t l_2144 = 0x8EL;
    uint8_t l_2182 = 0x14L;
    union U6 l_2211 = {0x83648BD921B0AE28LL};
    int32_t l_2230[6][7] = {{1L,1L,0x93632CACL,0x93632CACL,1L,1L,0x93632CACL},{0x675DAAFEL,0x18DA91E5L,0x675DAAFEL,0x18DA91E5L,0x675DAAFEL,0x18DA91E5L,0x675DAAFEL},{1L,0x93632CACL,0x93632CACL,1L,1L,0x93632CACL,0x93632CACL},{0x0A341A46L,0x18DA91E5L,0x0A341A46L,0x18DA91E5L,0x0A341A46L,0x18DA91E5L,0x0A341A46L},{1L,1L,0x93632CACL,0x93632CACL,1L,1L,0x93632CACL},{0x675DAAFEL,0x18DA91E5L,0x675DAAFEL,0x18DA91E5L,0x675DAAFEL,0x18DA91E5L,0x675DAAFEL}};
    uint16_t * const l_2231 = &l_1958.f0;
    const union U2 l_2256 = {0x104B165BL};
    int i, j, k;
    if ((safe_sub_func_int32_t_s_s(((l_1958 , ((*l_1983) ^= (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((((*l_1963) ^= (l_1958.f0 && 0x6D7FA91FL)) , (safe_rshift_func_int8_t_s_u(0L, ((*g_503) , ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((l_1978[1] , l_1979) == g_1981[2]) < 5UL), (***g_479))), 0x808EF10DL)) || 0xEEL), 0xD6C8L)) && p_6) >= 255UL), 6)) , (void*)0) != l_1982), 14)), (-1L))) <= g_1649[0][4][2]))))) | l_1978[1].f0), p_6)), l_1978[1].f0)))) ^ p_7), (-8L))))
    { 
        uint32_t l_1993[7][4] = {{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L},{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L},{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L},{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L},{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L},{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L},{0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L,0xAE82C2A9L}};
        union U4 **l_1994 = (void*)0;
        union U4 ***l_1995 = &g_1981[3];
        int16_t ****l_1996 = &g_90;
        union U3 l_1998 = {0xB450B71ECEDAFCF4LL};
        int32_t *l_2004[3][7] = {{&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2]},{&g_4[2][2],(void*)0,&g_4[2][2],(void*)0,&g_4[2][2],(void*)0,&g_4[2][2]},{&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2],&g_4[1][2]}};
        struct S0 l_2020 = {0,451,-29,-10};
        union U5 *l_2038 = &l_1958;
        union U5 **l_2037 = &l_2038;
        uint16_t *l_2065 = &g_1327;
        int64_t l_2066[3][5] = {{(-2L),0x6EFD37DBA1F4C3EALL,(-2L),0x6EFD37DBA1F4C3EALL,(-2L)},{0x5F38B9C6AE6C9E42LL,0x5F38B9C6AE6C9E42LL,0x5F38B9C6AE6C9E42LL,0x5F38B9C6AE6C9E42LL,0x5F38B9C6AE6C9E42LL},{(-2L),0x6EFD37DBA1F4C3EALL,(-2L),0x6EFD37DBA1F4C3EALL,(-2L)}};
        int32_t l_2079 = 1L;
        uint8_t l_2115 = 0x17L;
        union U2 l_2139[4] = {{0x0E315AA0L},{0x0E315AA0L},{0x0E315AA0L},{0x0E315AA0L}};
        union U6 ***l_2158[7] = {&g_883,&g_883,&g_883,&g_883,&g_883,&g_883,&g_883};
        int32_t *l_2197 = &l_2074;
        struct S1 l_2198 = {214};
        union U4 l_2200[6][3][3] = {{{{-5L},{0xD698L},{0x013DL}},{{0xE948L},{7L},{0x4F07L}},{{0xD698L},{0xD698L},{7L}}},{{{0L},{1L},{0xBE39L}},{{0L},{0L},{0xE948L}},{{0xD698L},{0x013DL},{1L}}},{{{0xE948L},{0L},{0xE948L}},{{-5L},{-10L},{0xBE39L}},{{0x946CL},{-10L},{7L}}},{{{0x013DL},{0L},{0x4F07L}},{{0xD698L},{0x0D3AL},{0x0D3AL}},{{0x0D3AL},{0xBE39L},{7L}}},{{{0xE948L},{0x013DL},{7L}},{{-10L},{7L},{0x0D3AL}},{{1L},{0L},{0x946CL}}},{{{7L},{7L},{0L}},{{-5L},{0x013DL},{0x4F07L}},{{-5L},{0xBE39L},{1L}}}};
        int64_t l_2214 = 1L;
        uint32_t l_2216 = 0xD0A3205FL;
        int64_t *****l_2224[4] = {&g_1171,&g_1171,&g_1171,&g_1171};
        uint64_t l_2244[6][6][4] = {{{0UL,0x80ABA0674BD75D9BLL,0UL,0x5671B2A7AC8E6169LL},{0UL,0x632A9BCAD3CECD0FLL,0x1150147E15CB465DLL,18446744073709551611UL},{0x1584D3EBC0214765LL,18446744073709551608UL,18446744073709551615UL,0UL},{0x521574284727EF2ELL,1UL,18446744073709551611UL,18446744073709551615UL},{0x2DC29D91FBEB5A7ELL,18446744073709551613UL,0x811EA0A7BF822096LL,0x80ABA0674BD75D9BLL},{0xFD8E0A4D05B2AB3ALL,5UL,0x1584D3EBC0214765LL,0x2DC29D91FBEB5A7ELL}},{{0xE1F0CC2D3683BAF0LL,0x632A9BCAD3CECD0FLL,0UL,0UL},{0UL,18446744073709551613UL,18446744073709551611UL,0x3ECD4BAD59095518LL},{1UL,0xE1F0CC2D3683BAF0LL,1UL,5UL},{0x2DC29D91FBEB5A7ELL,1UL,0x2DC29D91FBEB5A7ELL,4UL},{0x811EA0A7BF822096LL,0UL,0xF19BD61A28F2DD18LL,0x65D561E864F27C2CLL},{3UL,0x80ABA0674BD75D9BLL,0x1150147E15CB465DLL,0UL}},{{0x632A9BCAD3CECD0FLL,0x556A32945A0FBD7CLL,0x1150147E15CB465DLL,0x224DB28FCC98A5ECLL},{3UL,1UL,0xF19BD61A28F2DD18LL,0UL},{0x811EA0A7BF822096LL,18446744073709551613UL,0x2DC29D91FBEB5A7ELL,0xF19BD61A28F2DD18LL},{0x2DC29D91FBEB5A7ELL,0xF19BD61A28F2DD18LL,1UL,18446744073709551615UL},{1UL,5UL,18446744073709551611UL,18446744073709551611UL},{0UL,0x556A32945A0FBD7CLL,0UL,0x1150147E15CB465DLL}},{{0xE1F0CC2D3683BAF0LL,0x6802A6C391FFBB29LL,0x1584D3EBC0214765LL,0x3ECD4BAD59095518LL},{0xFD8E0A4D05B2AB3ALL,0x3D2BCF0FF9CC6DD0LL,0x811EA0A7BF822096LL,4UL},{0x2DC29D91FBEB5A7ELL,18446744073709551615UL,18446744073709551611UL,1UL},{0x521574284727EF2ELL,0UL,18446744073709551615UL,0xFB0DC27877F70597LL},{0x1584D3EBC0214765LL,18446744073709551613UL,0x1150147E15CB465DLL,0x1150147E15CB465DLL},{0UL,0UL,0UL,0x224DB28FCC98A5ECLL}},{{0UL,18446744073709551608UL,0xFD8E0A4D05B2AB3ALL,0x80ABA0674BD75D9BLL},{0x811EA0A7BF822096LL,0xF19BD61A28F2DD18LL,18446744073709551611UL,0xFD8E0A4D05B2AB3ALL},{1UL,0xF19BD61A28F2DD18LL,18446744073709551610UL,0x80ABA0674BD75D9BLL},{0xF19BD61A28F2DD18LL,18446744073709551608UL,18446744073709551611UL,0x224DB28FCC98A5ECLL},{0xE1F0CC2D3683BAF0LL,0UL,0x632A9BCAD3CECD0FLL,0x1150147E15CB465DLL},{0x5671B2A7AC8E6169LL,18446744073709551613UL,0UL,0xFB0DC27877F70597LL}},{{0xFD8E0A4D05B2AB3ALL,0UL,1UL,1UL},{1UL,18446744073709551615UL,0x224DB28FCC98A5ECLL,4UL},{1UL,0x3D2BCF0FF9CC6DD0LL,18446744073709551615UL,0x3ECD4BAD59095518LL},{3UL,0x6802A6C391FFBB29LL,0UL,0x1150147E15CB465DLL},{6UL,0x556A32945A0FBD7CLL,0x5671B2A7AC8E6169LL,18446744073709551611UL},{0UL,5UL,0xF19BD61A28F2DD18LL,18446744073709551615UL}}};
        int i, j, k;
lbl_2232:
        if ((safe_unary_minus_func_int32_t_s((safe_div_func_int32_t_s_s((((safe_unary_minus_func_int32_t_s(l_1978[1].f0)) < ((((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((l_1978[1] , l_1978[1].f3), ((~l_1993[2][3]) | ((*l_1983) = (((((l_1994 == ((*l_1995) = l_1994)) != ((****g_1171) |= ((((*g_665) = l_1996) == l_1997) & l_1978[1].f0))) > p_7) , l_1998) , (***g_479)))))), 0)) || 0xB93A0108242F0E16LL) , 65533UL) == g_1934.f0)) , l_1993[5][2]), (***g_479))))))
        { 
            uint32_t l_2001 = 8UL;
            struct S1 l_2013 = {347};
            int32_t l_2022 = 0x9FDE8CC5L;
            uint16_t *l_2059 = &g_287.f0;
            const union U6 l_2064 = {0x0A30976D4009C784LL};
            uint32_t l_2067 = 0x7FBDE9E3L;
            int32_t l_2070 = 1L;
            int32_t l_2071[3];
            int16_t l_2077[7][4][3] = {{{(-1L),(-1L),0xD47EL},{0x52CCL,0x52CCL,1L},{8L,(-1L),(-1L)},{1L,0x6FB6L,1L}},{{8L,0x95B0L,8L},{0x52CCL,1L,1L},{(-1L),(-1L),8L},{1L,0xEAA3L,0xEAA3L}},{{8L,(-1L),0x95B0L},{1L,0x52CCL,1L},{(-1L),8L,0x95B0L},{1L,1L,0xEAA3L}},{{0xD47EL,8L,8L},{0xEAA3L,0x52CCL,0x6FB6L},{0xD47EL,(-1L),0xD47EL},{1L,0xEAA3L,0x6FB6L}},{{(-1L),(-1L),8L},{1L,0xEAA3L,0xEAA3L},{8L,(-1L),0x95B0L},{1L,0x52CCL,1L}},{{(-1L),8L,0x95B0L},{1L,1L,0xEAA3L},{0xD47EL,8L,8L},{0xEAA3L,0x52CCL,0x6FB6L}},{{0xD47EL,(-1L),0xD47EL},{1L,0xEAA3L,0x6FB6L},{(-1L),(-1L),8L},{1L,0xEAA3L,0xEAA3L}}};
            union U4 l_2104[3][2] = {{{-1L},{-1L}},{{-1L},{-1L}},{{-1L},{-1L}}};
            const union U3 *l_2120 = &g_50;
            union U3 * const l_2121[2] = {&g_50,&g_50};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2071[i] = 1L;
lbl_2068:
            if ((l_1978[1].f0 = p_7))
            { 
                int32_t *l_2005 = &g_4[1][1];
                struct S1 l_2012 = {74};
                union U3 **l_2019 = &g_1122;
                union U3 **l_2021 = (void*)0;
                for (g_1934.f2 = 0; (g_1934.f2 <= 6); g_1934.f2 += 1)
                { 
                    int32_t *l_1999 = &g_82;
                    int32_t *l_2000[2];
                    struct S1 *l_2010 = &g_141[2][0][0];
                    struct S1 *l_2011 = &g_138;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2000[i] = &g_4[1][0];
                    ++l_2001;
                    l_2005 = l_2004[0][5];
                    (*l_1999) ^= (safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((((l_1958 , p_6) , 0x79A9L) != (**g_91)), (0x4136684DA42181C4LL | p_6))) > (((void*)0 == &g_512) != l_1978[1].f3)) ^ 0x58L), l_2001));
                    l_2012 = ((*l_2011) = ((*l_2010) = g_141[5][0][0]));
                }
                for (g_604.f2 = 2; (g_604.f2 >= 0); g_604.f2 -= 1)
                { 
                    struct S1 *l_2014 = &g_141[0][1][0];
                    (*l_2014) = l_2013;
                    l_2022 = (((safe_add_func_int32_t_s_s(p_7, (safe_lshift_func_int16_t_s_u((l_2013 , ((**g_91) = p_6)), 8)))) >= (((l_2019 = ((*g_1120) = (*l_1982))) == (l_2020 , l_2021)) > ((0x4C9D9ACCL || p_7) , 0x4DL))) <= 1UL);
                    (*g_981) = l_1983;
                }
            }
            else
            { 
                uint8_t l_2030 = 8UL;
                int32_t l_2042[5] = {0x13764A47L,0x13764A47L,0x13764A47L,0x13764A47L,0x13764A47L};
                uint16_t *l_2048 = &g_1327;
                int i;
                for (g_2 = 0; (g_2 <= 41); g_2++)
                { 
                    uint32_t *l_2039 = (void*)0;
                    uint32_t *l_2040 = (void*)0;
                    uint32_t *l_2041 = &g_1615.f0;
                    l_2042[0] = (((~(((((****g_1171) = p_6) || (safe_div_func_int8_t_s_s((l_2022 |= (((0x6A38EA78L > ((safe_mod_func_int8_t_s_s(((*g_747) = l_1978[1].f3), l_2030)) >= (safe_add_func_uint32_t_u_u((((*l_2041) = ((*l_1983) = (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((l_2037 != &l_2038) >= (l_1998 , p_6)), 8L)), g_216)))) , p_6), l_1958.f0)))) == 0xF0744F45L) >= l_1978[1].f2)), l_2030))) & 1UL) && (**g_91))) <= p_7) > p_6);
                    return p_6;
                }
                l_1978[1].f2 |= ((((*l_2048) |= (l_2045++)) , 0x4262L) == ((0L & (safe_div_func_int16_t_s_s(((((l_2022 = l_1958.f0) || (safe_sub_func_uint64_t_u_u(g_1095[1][1], 0x567702DD2C484B16LL))) ^ ((g_287 , (l_1978[1].f3 = (l_1978[1].f0 &= (safe_add_func_uint32_t_u_u(0xF3392B84L, l_2013.f0))))) && p_6)) > p_7), p_6))) < l_2042[0]));
            }
            if ((((255UL < (safe_sub_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((l_2059 == ((0x313A8B13DF6A3955LL & ((safe_add_func_int8_t_s_s((*g_747), ((l_2064 , 0L) != l_2064.f0))) >= p_6)) , l_2065)), 11)) > l_2045) != (-6L)) >= l_2066[0][4]), l_2067))) & l_2045) != g_4[1][1]))
            { 
                int32_t l_2069[7] = {0xA648120DL,0xA648120DL,0xA648120DL,0xA648120DL,0xA648120DL,0xA648120DL,0xA648120DL};
                int64_t l_2082 = 0x4ED76F3F94A196C1LL;
                uint32_t *l_2103 = &l_2067;
                int i;
                if (g_127.f0)
                    goto lbl_2068;
                l_2083[0][1]--;
                if ((safe_mul_func_uint8_t_u_u(((*l_1963) = (((safe_div_func_int64_t_s_s((((safe_rshift_func_int16_t_s_u(4L, l_2064.f2)) != ((*g_747) = (0x8F547DB26487431ELL <= ((safe_lshift_func_uint16_t_u_u((p_7 >= (((((safe_sub_func_uint32_t_u_u(((*l_2103) = (safe_mul_func_uint16_t_u_u(g_80[2][5][0], (safe_div_func_uint64_t_u_u((((*l_1983) |= (**g_480)) || (safe_div_func_int8_t_s_s((+l_2083[0][1]), 254UL))), 4UL))))), 1UL)) > g_1649[1][2][0]) < 0xB4FBL) == l_2069[1]) || p_6)), g_80[0][2][0])) <= (*g_116))))) , (*g_406)), l_2082)) , l_2104[2][1]) , l_2013.f0)), 0x70L)))
                { 
                    int32_t l_2105[6] = {0x9DB4139FL,0xB7D1BB20L,0xB7D1BB20L,0x9DB4139FL,0xB7D1BB20L,0xB7D1BB20L};
                    int i;
                    l_2105[5] &= (-1L);
                    l_2105[3] |= (p_7 != ((*l_1963) = 0xA2L));
                    return p_6;
                }
                else
                { 
                    uint16_t l_2106 = 65535UL;
                    if (l_2013.f0)
                        goto lbl_2068;
                    l_2106--;
                    return l_2082;
                }
            }
            else
            { 
                int8_t l_2109 = 0x99L;
                struct S0 *l_2110 = &l_2020;
                union U4 l_2132 = {8L};
                if ((l_2109 = 0L))
                { 
                    struct S0 **l_2111 = &g_1055;
                    int32_t l_2112 = 0x66893B75L;
                    (*l_2111) = l_2110;
                    return l_2112;
                }
                else
                { 
                    l_2022 |= (safe_rshift_func_uint16_t_u_s((l_2115 > (((safe_add_func_int32_t_s_s(1L, (((0x71L | ((l_2120 != l_2121[1]) > (safe_mod_func_uint32_t_u_u(((-1L) > ((****g_1171) ^= ((((((*g_747) = l_1978[1].f1) ^ p_6) > g_963) & (***g_479)) , (-8L)))), p_7)))) | l_2064.f0) , l_2071[2]))) & l_2001) >= p_7)), 13));
                    (*g_981) = &l_2076[0][6];
                }
                if (((l_2081[1][2][1] <= (safe_lshift_func_uint8_t_u_u(p_7, 0))) , (((((*l_1963) ^= (~(p_6 && ((++(*l_2065)) == (l_2132 , l_2132.f0))))) && (safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(((l_2073 = ((safe_add_func_int8_t_s_s((l_2139[3] , ((*g_747) |= ((safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(p_6, 1UL)) < l_2109) <= 0x1136L), (*g_92))) & g_135))), l_2144)) != 5UL)) < 0x86L), g_1934.f1)), 6))) > 4294967290UL) | l_2064.f2)))
                { 
                    uint16_t *** const **l_2153 = (void*)0;
                    uint16_t *** const **l_2154 = &g_2149;
                    uint16_t *** const *l_2156 = (void*)0;
                    uint16_t *** const **l_2155 = &l_2156;
                    int32_t l_2159 = 0x62DC153FL;
                    union U3 l_2173 = {0xAAB11996C2CA4159LL};
                    (*g_154) |= ((-9L) | (((safe_mul_func_uint16_t_u_u(p_6, (safe_lshift_func_int8_t_s_u((((*l_2155) = ((*l_2154) = g_2149)) != (l_2132 , (void*)0)), 6)))) , ((l_2159 |= (((l_2071[2] = (~(0x2982L < ((*l_2059) &= ((**g_2151) = (l_2158[1] == (void*)0)))))) , p_6) & (-5L))) <= 0xA0L)) >= 1L));
                    (*g_154) = ((((*g_747) = p_6) ^ ((p_6 > (~(0L <= ((l_2182 &= ((safe_sub_func_uint32_t_u_u((((+p_6) > (((+(safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(1UL, ((*l_1963)++))), (l_2173 , (((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_int64_t_s_s(l_2013.f0, l_2071[2])))), 7UL)), l_2013.f0)))) | 0xC686AEEDL) , p_6)))) | p_6) , p_6) != p_7), l_2080))) <= 0x1696AA73L) != 0x39L)) > 0x568DL), p_7)) > l_2132.f0)) < l_2132.f0)))) && 0x76L)) != 0x7CCAL);
                }
                else
                { 
                    l_2071[0] |= (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0xB537L, p_7)), (safe_lshift_func_uint16_t_u_u(p_6, 7))));
                    (**l_1982) = (**l_1982);
                }
                for (g_134 = 6; (g_134 >= 0); g_134 -= 1)
                { 
                    uint32_t l_2189 = 0xB13D7AF4L;
                    ++l_2189;
                    if (l_2013.f0)
                        break;
                }
            }
        }
        else
        { 
            for (l_2115 = 0; (l_2115 > 5); ++l_2115)
            { 
                uint16_t l_2194 = 0x7C76L;
                struct S1 *l_2199 = &l_2198;
                l_2194 = p_7;
                for (g_50.f0 = (-9); (g_50.f0 <= 29); g_50.f0++)
                { 
                    l_2197 = &l_2079;
                }
                (*l_2199) = l_2198;
            }
        }
        if ((l_1978[1].f2 &= ((l_2076[2][5] > 0x46E19D4E05759A31LL) ^ (l_2200[3][2][2] , (safe_mod_func_int8_t_s_s(0x7AL, (safe_add_func_int8_t_s_s((0xE2B5L > ((safe_div_func_int8_t_s_s(0x92L, (((****g_1171) = (*l_2197)) , p_6))) < p_7)), g_1934.f1))))))))
        { 
            const int8_t l_2210[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
            int i;
            (*l_2197) ^= ((~((*l_1963) = (l_2210[1] <= ((g_109.f2 < l_2210[4]) < (g_1244.f1 ^ (l_2211 , (((safe_lshift_func_uint8_t_u_u(p_7, 4)) ^ (*g_406)) == (-2L)))))))) , l_2214);
        }
        else
        { 
            int32_t *l_2215 = &l_2075;
            union U3 l_2223[7] = {{0xF2A6CA0CEC51938DLL},{0xF2A6CA0CEC51938DLL},{0xF2A6CA0CEC51938DLL},{0xF2A6CA0CEC51938DLL},{0xF2A6CA0CEC51938DLL},{0xF2A6CA0CEC51938DLL},{0xF2A6CA0CEC51938DLL}};
            uint16_t l_2229 = 65531UL;
            int32_t l_2239 = (-4L);
            int32_t l_2241 = 0xE0AFCEDFL;
            int32_t l_2242 = 0xABF990BDL;
            int32_t l_2243[4] = {0xC88FD2EAL,0xC88FD2EAL,0xC88FD2EAL,0xC88FD2EAL};
            uint8_t l_2247[4][6][5] = {{{0x53L,255UL,1UL,9UL,1UL},{0xFEL,0xCDL,249UL,255UL,0x28L},{0x85L,0xFEL,0x56L,4UL,0xE0L},{0x53L,0xE0L,0x28L,0x28L,0xE0L},{0xE1L,0x94L,0x0AL,0xC2L,0x28L},{255UL,0xC2L,0x00L,0xE1L,1UL}},{{0x0AL,0x85L,0x94L,0x28L,0xFEL},{255UL,0xCDL,0xBBL,255UL,9UL},{0xE1L,4UL,0x00L,0x85L,0x85L},{0x53L,4UL,0x53L,9UL,255UL},{0x85L,0xCDL,9UL,0xFEL,0x28L},{0xFEL,0x85L,0x56L,1UL,0xE1L}},{{0x53L,0xC2L,9UL,0x28L,0xC2L},{0xC2L,0x94L,0x53L,0xE0L,0x28L},{4UL,0xE0L,0x00L,0xE0L,4UL},{0x0AL,0xFEL,0xBBL,0x28L,255UL},{1UL,0xCDL,0x94L,0x94L,0xD4L},{249UL,0xCDL,0xFEL,0x53L,1UL}},{{0x85L,0x94L,251UL,0xD4L,0xBBL},{1UL,250UL,3UL,0x0AL,3UL},{1UL,1UL,0x85L,0xCDL,9UL},{0x85L,0x28L,0x17L,3UL,0x28L},{249UL,0x00L,0xA8L,0x28L,3UL},{0x94L,0x28L,0xFEL,9UL,0xCDL}}};
            union U6 **l_2257[5] = {&g_884[5],&g_884[5],&g_884[5],&g_884[5],&g_884[5]};
            int i, j, k;
lbl_2253:
            l_2215 = (void*)0;
            --l_2216;
            if (((safe_mul_func_int8_t_s_s((g_109 , ((((((((safe_div_func_uint16_t_u_u(((l_2223[2] , ((void*)0 != l_2224[3])) , (++(**g_2151))), (p_6 ^ ((safe_div_func_int32_t_s_s(((l_2223[0] , 8UL) & 0xE874L), (***g_479))) > l_2229)))) , g_141[5][0][0].f0) , (*****g_665)) ^ l_2230[5][0]) == p_6) , g_168) , l_2231) != &l_2229)), g_1649[0][1][0])) | p_7))
            { 
                if (l_2045)
                    goto lbl_2232;
                return p_6;
            }
            else
            { 
                int32_t l_2235 = 0x57B06F86L;
                int32_t l_2236 = 2L;
                int32_t l_2240[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_2240[i] = 0L;
                if ((safe_rshift_func_uint16_t_u_s(p_7, 7)))
                { 
                    int32_t l_2237 = (-10L);
                    int32_t l_2238[4];
                    union U2 **l_2250 = (void*)0;
                    union U2 *l_2252 = &g_127;
                    union U2 **l_2251 = &l_2252;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2238[i] = 0xCE99C241L;
                    --l_2244[3][3][1];
                    --l_2247[0][0][2];
                    (*l_2251) = &g_1615;
                    if (g_109.f2)
                        goto lbl_2253;
                }
                else
                { 
                    uint32_t *****l_2259 = &g_2258;
                    int32_t l_2273[4][4][7] = {{{1L,(-3L),(-1L),0xEE2F40C1L,0xEE2F40C1L,(-1L),(-3L)},{0L,0x38BBA601L,(-5L),0x38BBA601L,0L,0x38BBA601L,(-5L)},{0xEE2F40C1L,0xEE2F40C1L,(-1L),(-3L),1L,1L,(-3L)},{9L,0x6E18EC0DL,9L,0x38BBA601L,9L,0x6E18EC0DL,9L}},{{0xEE2F40C1L,(-3L),(-3L),0xEE2F40C1L,1L,(-1L),(-1L)},{0L,0x6E18EC0DL,(-5L),0x6E18EC0DL,0L,0x6E18EC0DL,(-5L)},{1L,0xEE2F40C1L,(-3L),(-3L),0xEE2F40C1L,1L,(-1L)},{9L,0x38BBA601L,9L,0x6E18EC0DL,9L,0x38BBA601L,9L}},{{1L,(-3L),(-1L),0xEE2F40C1L,0xEE2F40C1L,(-1L),(-3L)},{0L,0x38BBA601L,(-5L),0x38BBA601L,0L,0x38BBA601L,(-5L)},{0xEE2F40C1L,0xEE2F40C1L,(-1L),(-3L),1L,1L,(-3L)},{9L,0x6E18EC0DL,9L,0x38BBA601L,9L,0x6E18EC0DL,9L}},{{0xEE2F40C1L,(-3L),(-3L),0xEE2F40C1L,1L,(-1L),(-1L)},{0L,0x6E18EC0DL,(-5L),0x6E18EC0DL,0L,0x6E18EC0DL,(-5L)},{1L,0xEE2F40C1L,(-3L),(-3L),0xEE2F40C1L,1L,(-1L)},{9L,0x38BBA601L,9L,0x6E18EC0DL,9L,0x38BBA601L,9L}}};
                    int i, j, k;
                    (*l_2197) = (safe_rshift_func_int16_t_s_s((l_2256 , (l_2257[2] == ((((*l_2259) = g_2258) == (void*)0) , (void*)0))), 3));
                    l_2273[0][3][3] ^= (+((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((*l_2197), p_6)), (safe_div_func_int32_t_s_s((-1L), (safe_sub_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(0x8B5CL, ((*l_2065) &= 0x89F2L))) < (((*l_1983) ^= (safe_lshift_func_int16_t_s_u(((&l_2256 != &g_1615) > 18446744073709551611UL), 4))) && l_1978[1].f2)) ^ g_1649[1][3][0]), p_6)))))) >= p_6));
                }
            }
            if (((((((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((*l_2197) &= l_2230[5][0]), (((*g_747) = (l_2020 , ((***g_2150) < (p_6 , (safe_mod_func_int64_t_s_s(((p_6 , ((((((safe_add_func_uint8_t_u_u((l_2211 , ((p_7 , (**l_1997)) != (**l_1996))), 0x6FL)) == g_80[0][2][0]) & 0x9539F4849B7B0AB9LL) >= 0x3FL) || (-1L)) , 0x93A4L)) >= p_6), g_50.f0)))))) , 0x51808E25L))) , g_1056.f3), g_77)), p_6)) || g_168) == 0x17L) >= 0x96AEL) != (*g_2152)) ^ p_6))
            { 
                return p_7;
            }
            else
            { 
                uint16_t l_2288 = 65531UL;
                for (l_2242 = 6; (l_2242 >= 1); l_2242 -= 1)
                { 
                    struct S1 l_2284 = {344};
                    struct S1 *l_2285 = &l_2284;
                    (*l_2285) = l_2284;
                    g_2286 = &g_1615;
                    l_2288--;
                }
                return l_2223[2].f2;
            }
        }
    }
    else
    { 
        int32_t l_2294 = 0L;
        union U3 ** const *l_2302 = &g_1121[5];
        union U3 ** const **l_2301[7] = {&l_2302,&l_2302,&l_2302,&l_2302,&l_2302,&l_2302,&l_2302};
        int32_t l_2303 = 0xE7C4BEF2L;
        int32_t l_2304 = 0x6D710391L;
        int i;
        l_2304 |= ((safe_unary_minus_func_uint64_t_u(g_144.f1)) & (l_2303 ^= (((g_27 , (l_2256 , (safe_lshift_func_uint16_t_u_s((l_2294 & (&g_1120 != ((safe_add_func_uint8_t_u_u((0x4C0AL | ((safe_div_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(0L, l_2294)) ^ 0x089767DCL) != (**g_405)), p_6)) && g_604.f0)), p_6)) , l_2301[0]))), (*g_92))))) || l_1978[1].f0) < l_2078)));
    }
    return p_7;
}



static int64_t  func_8(uint64_t  p_9, int32_t * p_10, union U6  p_11)
{ 
    int16_t l_1935 = (-5L);
    int32_t l_1936[7];
    int32_t *l_1937 = &g_4[3][2];
    int32_t *l_1938 = &l_1936[3];
    int32_t *l_1939 = &g_4[1][0];
    int32_t *l_1940 = (void*)0;
    int32_t *l_1941 = &g_82;
    int32_t *l_1942 = &l_1936[2];
    int32_t *l_1943 = &g_82;
    int32_t *l_1944 = &g_82;
    int32_t *l_1945 = &g_82;
    int32_t *l_1946 = &l_1936[1];
    int32_t *l_1947 = &g_4[3][0];
    int32_t *l_1948 = &g_4[3][1];
    int32_t *l_1949 = (void*)0;
    int32_t *l_1950 = &g_82;
    int32_t *l_1951 = &g_4[2][1];
    int32_t *l_1952[6] = {&l_1936[3],&l_1936[3],&g_82,&l_1936[3],&l_1936[3],&g_82};
    uint64_t l_1953[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int i;
    for (i = 0; i < 7; i++)
        l_1936[i] = 0x9AEF5ECAL;
    l_1953[0]--;
    return (*g_1174);
}



static uint32_t  func_12(uint32_t  p_13)
{ 
    int8_t *****l_1467 = &g_1315;
    int32_t **l_1468 = &g_154;
    struct S1 l_1469 = {195};
    int32_t *l_1470 = &g_82;
    int16_t * const *l_1481 = (void*)0;
    int16_t * const **l_1480[5][7] = {{&l_1481,&l_1481,&l_1481,&l_1481,&l_1481,&l_1481,&l_1481},{&l_1481,&l_1481,&l_1481,&l_1481,&l_1481,&l_1481,&l_1481},{&l_1481,&l_1481,(void*)0,&l_1481,&l_1481,&l_1481,&l_1481},{&l_1481,&l_1481,&l_1481,&l_1481,&l_1481,&l_1481,&l_1481},{(void*)0,&l_1481,(void*)0,(void*)0,&l_1481,(void*)0,(void*)0}};
    uint64_t *l_1489 = &g_144.f1;
    uint16_t l_1493[6][5][1] = {{{4UL},{65535UL},{0UL},{65535UL},{4UL}},{{0x5A2EL},{4UL},{65535UL},{0UL},{65535UL}},{{4UL},{0x5A2EL},{4UL},{65535UL},{0UL}},{{65535UL},{4UL},{0x5A2EL},{4UL},{65535UL}},{{0UL},{65535UL},{4UL},{0x5A2EL},{4UL}},{{65535UL},{0UL},{65535UL},{4UL},{0x5A2EL}}};
    union U3 **l_1504 = &g_1122;
    int64_t **l_1506[6] = {&g_1174,&g_1174,&g_1174,&g_1174,&g_1174,&g_1174};
    int64_t **l_1507 = &g_1174;
    union U2 l_1531 = {6UL};
    int32_t l_1541[1][2][1];
    const union U4 l_1552 = {0xA367L};
    union U3 l_1575 = {0x6BF3856C0D2126C0LL};
    struct S0 l_1669[7] = {{-0,465,-47,1},{-0,465,-47,1},{-0,465,-47,1},{-0,465,-47,1},{-0,465,-47,1},{-0,465,-47,1},{-0,465,-47,1}};
    union U2 *l_1672[7] = {&l_1531,&g_1615,&g_1615,&l_1531,&g_1615,&g_1615,&l_1531};
    union U2 **l_1671[5][3] = {{&l_1672[0],&l_1672[0],&l_1672[0]},{&l_1672[0],&l_1672[0],&l_1672[0]},{&l_1672[0],&l_1672[0],&l_1672[0]},{&l_1672[0],&l_1672[0],&l_1672[0]},{&l_1672[0],&l_1672[0],&l_1672[0]}};
    union U6 **l_1714 = &g_884[5];
    int32_t ****l_1720 = &g_512;
    uint8_t l_1740[6] = {252UL,252UL,252UL,252UL,252UL,252UL};
    int64_t l_1763 = 0x914621627FA69ED5LL;
    int16_t l_1769 = (-10L);
    int64_t l_1785 = 1L;
    struct S1 l_1849 = {213};
    int64_t l_1887 = 0x5E007FF2EC880E28LL;
    uint32_t *l_1903[1];
    uint32_t **l_1902 = &l_1903[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1541[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 1; i++)
        l_1903[i] = &l_1531.f0;
    (*l_1470) = ((((void*)0 == l_1467) , l_1468) == (l_1469 , l_1468));
    if ((*l_1470))
    { 
        union U3 l_1479 = {-3L};
        int32_t l_1482[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1482[i] = 1L;
        if ((safe_lshift_func_uint16_t_u_u(0x3490L, (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((*l_1470) = (*l_1470)) == (safe_rshift_func_uint16_t_u_s((((**g_665) != (l_1479 , (((-3L) != 0L) , l_1480[0][0]))) && 0UL), (**g_91)))), 0xA7L)), 0xDAL)))))
        { 
            if (((*l_1470) = 0xF6625A5BL))
            { 
                return p_13;
            }
            else
            { 
                uint8_t l_1483 = 0x1AL;
                ++l_1483;
                return p_13;
            }
        }
        else
        { 
            int64_t l_1486 = 0x92E384742BDB40C4LL;
            l_1482[3] = (((*l_1470) &= (l_1486 && ((****g_666) = (safe_sub_func_int64_t_s_s(0x94524A6FBF73D504LL, l_1479.f0))))) || ((void*)0 != (*g_1120)));
            if ((l_1489 == (void*)0))
            { 
                uint32_t l_1490 = 2UL;
                l_1490++;
                return p_13;
            }
            else
            { 
                return p_13;
            }
        }
    }
    else
    { 
lbl_1550:
        (*l_1470) &= l_1493[0][1][0];
    }
    if (p_13)
    { 
        uint16_t l_1494 = 0x06D3L;
        union U3 **l_1501 = (void*)0;
        int64_t **l_1505 = &g_1174;
        int64_t l_1511 = 0L;
        int32_t l_1512 = 0xC20923DEL;
        uint32_t l_1513 = 0x1258A56CL;
        const union U2 l_1524 = {0x3D5976DDL};
        uint16_t l_1548 = 0x9F36L;
        int16_t l_1623 = 0xA040L;
        union U2 *l_1668 = &l_1531;
        union U2 **l_1667 = &l_1668;
        int16_t **l_1681[5][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U5 **l_1684[1];
        int8_t l_1685[4][5] = {{(-8L),(-8L),(-8L),(-8L),(-8L)},{2L,2L,2L,2L,2L},{(-8L),(-8L),(-8L),(-8L),(-8L)},{2L,2L,2L,2L,2L}};
        int32_t **l_1738 = &l_1470;
        struct S0 **l_1804 = &g_1055;
        struct S0 **l_1806 = &g_1055;
        struct S1 l_1847 = {74};
        uint32_t *l_1901 = &g_216;
        uint32_t **l_1900 = &l_1901;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1684[i] = (void*)0;
lbl_1933:
        if ((l_1494 > (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_1501 != ((safe_sub_func_int16_t_s_s(p_13, ((*l_1470) >= (*g_747)))) , l_1504)), ((l_1506[1] = l_1505) != l_1507))), l_1494)), p_13))))
        { 
            int32_t *l_1508 = &g_82;
            int32_t *l_1509 = &g_82;
            int32_t *l_1510[5];
            uint16_t *l_1517 = &g_287.f0;
            struct S1 *l_1520[4][2] = {{&g_141[4][1][0],&g_141[4][1][0]},{&g_141[4][1][0],&g_141[4][1][0]},{&g_141[4][1][0],&g_141[4][1][0]},{&g_141[4][1][0],&g_141[4][1][0]}};
            union U5 l_1529 = {1UL};
            union U3 l_1532[1] = {{0xA2E88FFC10A4EF71LL}};
            uint64_t l_1599 = 0x69705ACAC5A6FE98LL;
            uint8_t *l_1606 = &g_80[0][2][0];
            union U2 *l_1614 = &g_1615;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1510[i] = &g_82;
            ++l_1513;
            if (((l_1512 = (!(0x6D23L == p_13))) >= ((*l_1517) = g_1253[0][3][4])))
            { 
                union U4 l_1528 = {9L};
                union U5 *l_1530 = &g_287;
                const struct S1 l_1549 = {241};
                union U6 **l_1554 = &g_884[0];
                int32_t l_1572[7] = {0x85876C31L,0x85876C31L,0x85876C31L,0x85876C31L,0x85876C31L,0x85876C31L,0x85876C31L};
                int i;
                for (g_135 = (-30); (g_135 > 14); g_135 = safe_add_func_uint8_t_u_u(g_135, 9))
                { 
                    struct S1 **l_1521 = &l_1520[1][0];
                    (*l_1521) = l_1520[0][0];
                    (*l_1508) ^= (-6L);
                    return (***g_479);
                }
                for (g_168 = 0; (g_168 == 11); g_168 = safe_add_func_int32_t_s_s(g_168, 1))
                { 
                    return (*l_1509);
                }
                (*g_981) = (l_1524 , &l_1512);
                for (g_216 = 0; (g_216 <= 0); g_216 += 1)
                { 
                    int32_t l_1542 = (-1L);
                    int i;
                    l_1541[0][1][0] ^= (l_1532[0] , ((*l_1508) |= (l_1512 <= (safe_add_func_int64_t_s_s((((((0xD2AEL == (p_13 > (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_1517) ^= 2UL), ((((*l_1489) ^= (safe_rshift_func_uint8_t_u_s((p_13 & (((**l_1468) & p_13) > 65531UL)), 0))) >= p_13) < 0x18BDL))), p_13)))) & p_13) > p_13) == (**l_1468)) || 0L), g_50.f1)))));
                    l_1542 &= p_13;
                }
                for (g_1213 = 8; (g_1213 <= (-1)); g_1213 = safe_sub_func_int32_t_s_s(g_1213, 1))
                { 
                    const union U6 *l_1556[5][3] = {{&g_144,&g_144,&g_604},{&g_144,&g_144,&g_144},{&g_604,&g_144,&g_144},{&g_144,&g_144,&g_604},{&g_604,&g_144,&g_604}};
                    const union U6 **l_1555 = &l_1556[3][0];
                    int i, j;
                    (*l_1509) = (p_13 || ((l_1528.f0 || ((*g_116) , 1UL)) || (safe_rshift_func_int8_t_s_u(((((****g_666) |= ((((+(l_1548 == (0x4977L | (l_1549 , 0xBBE1L)))) != l_1528.f0) || p_13) ^ l_1513)) && 6L) || (****g_666)), 3))));
                    if (l_1469.f0)
                        goto lbl_1550;
                    (*l_1470) = (l_1572[1] = (((~((*g_747) = (((g_963 = (l_1552 , ((+(l_1554 == l_1555)) <= ((safe_unary_minus_func_uint8_t_u((p_13 ^ ((*g_154) = (*l_1508))))) != (safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_138 , l_1524.f0), (-8L))), l_1513)), 0x9B1144896DA7AC58LL)) >= p_13), p_13)), p_13)), 0x93L)) == l_1549.f0), 0x318DL)))))) != 0UL) , p_13))) , p_13) < p_13));
                }
            }
            else
            { 
                const int64_t *l_1588 = &g_1589;
                int32_t l_1597 = 0x62A108E0L;
                for (g_150 = (-21); (g_150 == 53); g_150 = safe_add_func_int64_t_s_s(g_150, 3))
                { 
                    struct S1 l_1590[4][6][1] = {{{{307}},{{65}},{{307}},{{297}},{{218}},{{297}}},{{{307}},{{65}},{{307}},{{297}},{{218}},{{297}}},{{{307}},{{65}},{{307}},{{297}},{{167}},{{65}}},{{{218}},{{36}},{{218}},{{65}},{{167}},{{65}}}};
                    uint16_t *l_1598 = &l_1548;
                    int i, j, k;
                    (*l_1470) = (l_1575 , (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0UL, 4)), ((((((*l_1598) = ((*l_1517) = (safe_add_func_uint32_t_u_u((((g_144.f1 = ((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((l_1588 = (*g_405)) == (l_1590[0][2][0] , (*l_1505))), (((safe_lshift_func_int16_t_s_u(((*g_92) = (0x529B1510L & (safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u((g_1244.f1 > p_13), l_1590[0][2][0].f0)), g_1327)))), 11)) & (**g_480)) != 0L))) != 0xBEE4L), p_13)), 0xB3L)) < l_1513)) || p_13) > 0x36BCAC8115C2681ELL), l_1597)))) == p_13) || (*l_1470)) , p_13) && 0x5E4FL))));
                }
            }
            if ((l_1512 = (l_1599 > (safe_rshift_func_uint16_t_u_s(((((g_1213 , ((*g_92) = ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((-2L), 4294967290UL)), ((*l_1606) ^= 0UL))) == (((*l_1470) = (safe_rshift_func_int16_t_s_u(l_1513, ((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((18446744073709551615UL & 0L), 0x4539L)), g_1095[1][5])) ^ (*l_1509))))) | (*g_116))))) >= (-1L)) , 4294967295UL) != p_13), 1)))))
            { 
                int32_t *l_1613 = &g_4[0][1];
                l_1613 = l_1613;
                return p_13;
            }
            else
            { 
                union U5 *l_1629 = &g_287;
                union U5 **l_1628 = &l_1629;
                uint32_t l_1631 = 0x233D2841L;
                int16_t ***l_1646 = &g_91;
                int32_t *l_1655[5][5][5] = {{{&g_4[3][2],(void*)0,&l_1512,&l_1541[0][1][0],(void*)0},{&g_4[3][0],&l_1541[0][1][0],&l_1512,&l_1541[0][0][0],&l_1541[0][0][0]},{&l_1512,&g_4[3][0],&l_1512,&l_1512,&l_1541[0][0][0]},{&l_1541[0][1][0],&l_1512,&l_1541[0][1][0],&g_4[3][2],(void*)0},{&l_1541[0][1][0],&g_4[3][2],&g_4[3][2],&l_1541[0][1][0],&g_4[3][0]}},{{&l_1512,&g_4[3][0],&l_1541[0][1][0],(void*)0,&l_1541[0][1][0]},{&g_4[3][2],&l_1512,&l_1512,&g_4[3][2],&l_1512},{&g_4[3][2],&l_1541[0][1][0],&l_1512,&l_1541[0][1][0],&l_1541[0][1][0]},{&l_1512,&l_1541[0][1][0],&l_1512,&l_1541[0][1][0],&l_1541[0][0][0]},{&l_1541[0][1][0],&l_1512,&l_1512,&l_1541[0][1][0],&l_1541[0][1][0]}},{{&l_1541[0][1][0],&g_4[3][2],&l_1541[0][1][0],&g_4[3][2],&l_1541[0][1][0]},{&l_1512,&g_4[3][2],&l_1512,(void*)0,&g_4[3][0]},{&g_4[3][0],&l_1512,&l_1541[0][1][0],&l_1541[0][1][0],&l_1541[0][1][0]},{&g_4[3][2],&l_1541[0][1][0],&g_4[3][1],&g_4[3][2],&g_4[3][0]},{&l_1512,&l_1541[0][1][0],&l_1512,&l_1512,&l_1541[0][1][0]}},{{&g_4[3][0],&l_1512,&l_1512,&l_1541[0][0][0],&l_1541[0][1][0]},{&l_1541[0][1][0],&g_4[3][0],&g_4[3][1],&l_1541[0][1][0],&l_1541[0][0][0]},{(void*)0,&g_4[3][2],&l_1541[0][1][0],&l_1512,&l_1541[0][1][0]},{&l_1541[0][1][0],&l_1512,&l_1512,&l_1541[0][1][0],&l_1512},{&g_4[3][0],&g_4[3][0],&l_1541[0][1][0],&l_1541[0][1][0],&l_1541[0][1][0]}},{{&l_1512,&l_1541[0][1][0],&l_1512,&l_1512,&g_4[3][0]},{&g_4[3][2],(void*)0,&l_1512,&l_1541[0][1][0],(void*)0},{&g_4[3][0],&l_1541[0][1][0],&l_1512,&l_1541[0][0][0],&l_1541[0][0][0]},{&l_1512,&g_4[3][0],&l_1512,&l_1512,&l_1541[0][0][0]},{&l_1541[0][1][0],&l_1512,&l_1541[0][1][0],&g_4[3][2],(void*)0}}};
                union U6 l_1656 = {-8L};
                int i, j, k;
lbl_1627:
                l_1614 = &g_127;
                if (((safe_mul_func_uint16_t_u_u((+((~p_13) <= p_13)), (safe_lshift_func_int16_t_s_u((((~g_1589) == l_1623) && ((l_1529 , (p_13 , (((~(((safe_mul_func_int8_t_s_s(0L, 0x77L)) | p_13) != 0x30861F60L)) && 3L) <= 5UL))) & (*l_1470))), g_144.f0)))) ^ 0UL))
                { 
                    if (g_150)
                        goto lbl_1627;
                    return p_13;
                }
                else
                { 
                    union U5 ***l_1630 = &l_1628;
                    int16_t ****l_1647 = &l_1646;
                    int32_t l_1648 = 7L;
                    const int8_t ****l_1653[5] = {&g_1652,&g_1652,&g_1652,&g_1652,&g_1652};
                    union U6 l_1657 = {-1L};
                    int i;
                    l_1512 = p_13;
                    (*l_1630) = l_1628;
                    l_1631 ^= p_13;
                    (*l_1470) &= (safe_mod_func_int64_t_s_s(((*g_1174) = ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((***g_479), (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((**g_91) = ((((safe_div_func_uint8_t_u_u(p_13, p_13)) && ((((**g_665) = (**g_665)) == ((*l_1647) = l_1646)) >= 2L)) || (*g_747)) != g_138.f0)), p_13)), l_1648)))), g_109.f1)) , g_1244.f0), 0)) >= (-10L))), g_1649[0][1][0]));
                    l_1648 = (((safe_mul_func_uint8_t_u_u(((*l_1508) = ((g_1652 = g_1652) == (void*)0)), ((~(l_1657 , p_13)) == 5L))) || (-1L)) <= (-1L));
                }
                return (***g_479);
            }
        }
        else
        { 
            union U4 l_1658 = {0x25D2L};
            union U2 l_1670 = {6UL};
            union U2 ***l_1673 = &l_1671[2][2];
            struct S1 l_1688[1][2] = {{{277},{277}}};
            int16_t *l_1695 = &l_1623;
            int32_t **l_1739 = &l_1470;
            int32_t l_1776 = 0x2D806CDCL;
            uint32_t l_1777 = 0UL;
            int32_t l_1784[1];
            int8_t l_1793 = 0x07L;
            int32_t *l_1794 = &l_1784[0];
            int32_t *l_1795 = &l_1512;
            int32_t *l_1796 = &g_82;
            int32_t *l_1797 = &l_1776;
            int32_t *l_1798 = &l_1512;
            int32_t *l_1799 = &l_1784[0];
            int32_t *l_1800[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_1801[2];
            uint64_t l_1846 = 0xFEEC3E375B17FE09LL;
            int32_t l_1879 = (-4L);
            int8_t l_1910[4][3] = {{0xADL,0xADL,0x8BL},{(-1L),(-1L),0xAFL},{0xADL,0xADL,0x8BL},{(-1L),(-1L),0xAFL}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1784[i] = 0x81D33C32L;
            for (i = 0; i < 2; i++)
                l_1801[i] = 0x50F0FCB4L;
            if ((((*l_1489) = (((l_1658 , (safe_add_func_uint64_t_u_u(0UL, (((p_13 < ((safe_lshift_func_int16_t_s_u((l_1512 ^= ((((safe_sub_func_uint16_t_u_u(g_109.f1, ((safe_div_func_uint16_t_u_u((l_1667 == ((*l_1673) = ((((l_1669[0] , (l_1670 , g_1589)) & (*l_1470)) < (*l_1470)) , l_1671[2][2]))), p_13)) & (*l_1470)))) || (*g_116)) | (*l_1470)) || p_13)), 3)) && 6L)) < g_150) < g_171)))) < g_50.f0) , 0xC866644DF744B799LL)) == p_13))
            { 
                union U5 *l_1683[7] = {&g_287,&g_287,(void*)0,&g_287,&g_287,(void*)0,&g_287};
                union U5 **l_1682 = &l_1683[0];
                int32_t l_1686 = (-4L);
                struct S1 l_1690 = {187};
                int i;
lbl_1697:
                for (g_144.f2 = 13; (g_144.f2 != (-24)); --g_144.f2)
                { 
                    (*l_1470) |= 0x00E9E05EL;
                    (*g_981) = (void*)0;
                    return l_1511;
                }
                if ((((safe_add_func_int8_t_s_s((p_13 != l_1524.f1), (!((safe_mod_func_uint32_t_u_u((((*g_747) = (l_1681[1][3] != l_1681[3][6])) >= (0x106BL || ((((((((l_1684[0] = l_1682) != (void*)0) != 4UL) < l_1685[3][0]) ^ l_1686) & p_13) & 0x44A8L) , g_1244.f2))), (*l_1470))) && (*l_1470))))) && g_1244.f1) | l_1686))
                { 
                    struct S1 l_1687 = {288};
                    int32_t *l_1689 = &g_82;
                    l_1688[0][1] = l_1687;
                    if (l_1670.f1)
                        goto lbl_1933;
                    (*l_1468) = l_1689;
                }
                else
                { 
                    struct S1 *l_1691 = (void*)0;
                    struct S1 l_1692 = {153};
                    uint8_t *l_1694 = (void*)0;
                    int32_t *l_1696 = &l_1512;
                    struct S1 l_1698 = {301};
                    struct S1 *l_1699[7] = {&l_1688[0][1],&g_141[2][0][0],&g_141[2][0][0],&l_1688[0][1],&g_141[2][0][0],&g_141[2][0][0],&l_1688[0][1]};
                    int i;
                    l_1692 = l_1690;
                    (*l_1468) = (((p_13 & (+(g_1372[0][2] ^ (g_80[1][5][0] &= 255UL)))) , l_1658) , l_1696);
                    if (l_1494)
                        goto lbl_1697;
                    l_1469 = l_1698;
                    return (**g_480);
                }
                return p_13;
            }
            else
            { 
                struct S1 l_1700 = {126};
                int32_t ****l_1719 = &g_512;
                union U6 ** const l_1721 = (void*)0;
                int32_t l_1723 = 1L;
                int32_t l_1742 = 0x7477B55BL;
                int16_t *l_1743 = (void*)0;
                int32_t l_1786 = 0L;
                int32_t l_1787 = 1L;
                int32_t l_1788[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1788[i] = 0L;
                if (l_1524.f0)
                { 
                    g_141[5][0][0] = l_1700;
                    return l_1700.f0;
                }
                else
                { 
                    struct S1 *l_1701 = (void*)0;
                    struct S1 *l_1702 = &l_1700;
                    uint32_t *l_1709[2];
                    union U6 ***l_1715 = &l_1714;
                    uint16_t *l_1716 = &g_287.f0;
                    uint8_t *l_1722[3];
                    int32_t l_1741 = (-6L);
                    uint32_t l_1764[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1709[i] = &g_216;
                    for (i = 0; i < 3; i++)
                        l_1722[i] = &g_80[2][4][0];
                    (*l_1702) = g_141[5][0][0];
                    l_1742 &= (safe_lshift_func_uint8_t_u_u(((l_1741 ^= ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((g_127.f0--), (safe_div_func_uint8_t_u_u((l_1723 = (((*l_1715) = l_1714) == (((--(*l_1716)) >= (l_1719 != l_1720)) , l_1721))), ((((1L ^ (((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((l_1658 , ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((**l_1720) = l_1738) == l_1739), p_13)), 8)) < p_13)) , (*****g_665)), (**l_1738))) & (*****g_665)), 9)), 0L)), g_1589)), g_1020)) | p_13) || 0xDDA5EB8EL)) > (**l_1739)) <= 0xFEB1L) , l_1740[0]))))), 1)) ^ (*g_747))) | g_109.f3), 2));
                    (*l_1702) = l_1469;
                    (*l_1739) = &l_1741;
                    (*l_1739) = (*l_1739);
                }
                (*l_1468) = &l_1541[0][1][0];
                for (g_102 = 0; (g_102 <= 4); g_102 += 1)
                { 
                    uint32_t l_1778 = 0x617AE2CDL;
                    int32_t *l_1781 = &l_1742;
                    int32_t *l_1782 = &l_1541[0][0][0];
                    int32_t *l_1783[1];
                    uint16_t l_1790 = 0x0EF2L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1783[i] = &l_1541[0][1][0];
                    --l_1778;
                    (*g_981) = l_1781;
                    --l_1790;
                    if (p_13)
                        continue;
                }
                (*g_981) = (*l_1468);
                (**g_981) = 9L;
            }
            --l_1801[0];
            if (((g_287 , p_13) < p_13))
            { 
                struct S0 ***l_1805[5] = {&l_1804,&l_1804,&l_1804,&l_1804,&l_1804};
                int32_t l_1807 = 0x31B5220CL;
                uint8_t *l_1834 = &l_1740[5];
                int64_t l_1844 = 0x41670120C143490BLL;
                const union U3 l_1845 = {0L};
                struct S1 l_1862 = {15};
                struct S1 *l_1863 = &l_1862;
                union U2 l_1880 = {1UL};
                int i;
                (*l_1797) |= (l_1804 == (l_1806 = (void*)0));
                if (l_1807)
                { 
                    return (**g_480);
                }
                else
                { 
                    uint16_t l_1808 = 1UL;
                    uint8_t *l_1817[2][1][2];
                    int32_t l_1818[2][4][4] = {{{0x619F45F3L,0x619F45F3L,(-8L),0x6C6D5E99L},{0x6C6D5E99L,0x9DE0B8D6L,(-8L),0x9DE0B8D6L},{0x619F45F3L,(-1L),(-8L),0x619F45F3L},{(-1L),0x6C6D5E99L,0x6C6D5E99L,(-1L)}},{{0x6C6D5E99L,(-1L),0x1944D2B5L,1L},{0x6C6D5E99L,0x1944D2B5L,0x6C6D5E99L,(-8L)},{(-1L),1L,(-8L),(-8L)},{0x1944D2B5L,0x1944D2B5L,0x619F45F3L,1L}}};
                    int64_t **l_1827[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1817[i][j][k] = &g_80[0][2][0];
                        }
                    }
                    for (i = 0; i < 2; i++)
                        l_1827[i] = &g_1174;
                    (*l_1796) = (l_1807 != (*g_1174));
                    l_1808--;
                    l_1807 = (safe_div_func_int16_t_s_s(0xFBF2L, p_13));
                    (*l_1799) |= (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((g_80[0][2][0]++) & (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((++g_1327), 10)) ^ ((l_1827[1] != ((**g_1171) = ((g_127 , ((!g_109.f0) & p_13)) , (**g_1171)))) <= ((l_1807 = p_13) , (safe_rshift_func_uint16_t_u_s(((((~(safe_mod_func_int64_t_s_s((0x939BL == l_1818[0][2][0]), l_1818[1][0][2]))) && 0L) == p_13) | l_1807), p_13))))), 65528UL))) != l_1818[1][2][3]), 255UL)), g_127.f0));
                }
                for (g_205 = 0; (g_205 <= 2); g_205 += 1)
                { 
                    uint8_t **l_1835 = &l_1834;
                    struct S1 *l_1848[1];
                    const union U2 l_1854 = {0x7800AEABL};
                    uint32_t l_1861 = 18446744073709551609UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1848[i] = &g_141[5][0][0];
                    l_1849 = ((((*l_1835) = l_1834) == ((safe_mul_func_int16_t_s_s((g_1466[(g_205 + 3)] < (safe_sub_func_uint8_t_u_u(g_80[2][0][0], ((l_1807 = (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_13, p_13)), l_1844))) == ((l_1845 , g_1244) , l_1846))))), g_127.f0)) , (void*)0)) , l_1847);
                    (*l_1796) = ((safe_mul_func_uint8_t_u_u(((((*l_1799) ^= (((safe_mul_func_int16_t_s_s((p_13 && (l_1854 , (((safe_rshift_func_uint8_t_u_s((250UL < ((*l_1834) ^= (safe_add_func_uint64_t_u_u((g_1466[2] >= p_13), ((safe_lshift_func_uint16_t_u_u(1UL, (g_150 > 0xC9AEL))) > l_1861))))), 5)) , 4294967289UL) && p_13))), l_1807)) < 0xA243D01E74E9CC1ALL) & (*l_1797))) < p_13) & p_13), p_13)) | p_13);
                    l_1688[0][1] = l_1862;
                    l_1469 = g_141[5][0][0];
                    return (***g_479);
                }
                (*l_1863) = l_1688[0][0];
                if (p_13)
                { 
                    uint16_t *l_1866 = &l_1493[0][1][0];
                    int32_t l_1875[5][4] = {{0xB0DB774EL,0x6D38C2AAL,0x4C8C810BL,0x6D38C2AAL},{1L,0x5BC635FCL,0x9922303FL,0x4C8C810BL},{0x6D38C2AAL,0x5BC635FCL,0x5BC635FCL,0x6D38C2AAL},{0x5BC635FCL,0x6D38C2AAL,1L,0xB0DB774EL},{0x5BC635FCL,1L,0x5BC635FCL,0x9922303FL}};
                    uint32_t *l_1876 = &l_1670.f0;
                    uint16_t *l_1877 = &l_1494;
                    int i, j;
                    (*l_1799) |= (safe_mod_func_int64_t_s_s(((((*l_1866) ^= 0UL) != (l_1862.f0 , (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(l_1845.f2)), p_13)))) > (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0x673AL, 9)), ((*l_1877) |= (!((*l_1876) &= (g_77 , (((**g_480) < l_1875[4][1]) == 5L)))))))), 0x2D1957ADC1E4F695LL));
                }
                else
                { 
                    int16_t *l_1878 = (void*)0;
                    (*l_1738) = &l_1807;
                }
            }
            else
            { 
                int64_t l_1894 = (-1L);
                uint32_t ***l_1904 = (void*)0;
                uint32_t ***l_1905 = &l_1902;
                uint8_t *l_1911 = &g_80[0][5][0];
                struct S1 l_1931[4][6] = {{{261},{261},{261},{261},{261},{261}},{{261},{261},{261},{261},{261},{261}},{{261},{261},{261},{261},{261},{261}},{{261},{261},{261},{261},{261},{261}}};
                int i, j;
                if (((0x29906FA99A3637F7LL != (g_141[5][0][0].f0 ^ (safe_rshift_func_int8_t_s_s(p_13, ((((((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((((*l_1794) ^= (l_1887 ^ (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_13, p_13)), (safe_mul_func_uint8_t_u_u((g_982 != g_1056.f0), (*g_116))))))) > p_13) , g_150) && l_1894), p_13)), (*l_1796))) | 0xB5C12ED2L) <= 0x8A77L) == g_1253[3][5][1]) >= (*l_1798)) || p_13))))) , 0xE5AC1FD7L))
                { 
                    (*l_1795) = 0x03AF766FL;
                }
                else
                { 
                    union U4 **l_1895 = (void*)0;
                    union U4 *l_1897[1][2][2] = {{{&g_108,&g_108},{&g_108,&g_108}}};
                    union U4 **l_1896 = &l_1897[0][0][0];
                    int i, j, k;
                    (*l_1896) = &g_108;
                }
                (*l_1795) ^= (safe_rshift_func_int16_t_s_s(((****g_666) = ((18446744073709551611UL ^ (((*l_1668) , l_1900) == ((*l_1905) = l_1902))) > (((*l_1489) = (((safe_lshift_func_int8_t_s_s(((*g_747) = ((safe_sub_func_int8_t_s_s(p_13, (g_77 | ((*l_1911) = ((l_1910[1][0] <= p_13) , 0x57L))))) , p_13)), 0)) > 9L) & (*g_1174))) , (-1L)))), p_13));
                for (g_50.f0 = (-29); (g_50.f0 < 5); g_50.f0++)
                { 
                    uint16_t *l_1927 = &l_1548;
                    int32_t l_1928 = (-6L);
                    struct S1 l_1929 = {219};
                    struct S1 *l_1930 = (void*)0;
                    struct S1 *l_1932 = &g_141[5][0][0];
                    (*l_1796) = (safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((p_13 >= 4294967295UL) <= ((l_1688[0][0] , (safe_lshift_func_int16_t_s_u((~((*l_1927) &= ((l_1467 != (void*)0) || 0x6F948348B7CC36B0LL))), 12))) , ((*g_1417) == (**g_666)))) , 7UL), l_1928)), g_109.f0)) , 0xB0L) <= g_463) && 0L), 0)) , (*g_1174)) ^ p_13) <= 0xBB23F4907D69D8C9LL), 1));
                    l_1931[2][5] = l_1929;
                    if (p_13)
                        continue;
                    (*l_1932) = g_141[0][0][0];
                }
            }
        }
        return p_13;
    }
    else
    { 
        return (***g_479);
    }
}



static union U6  func_31(union U6  p_32)
{ 
    uint16_t l_1107[4] = {65526UL,65526UL,65526UL,65526UL};
    uint8_t *l_1108[4][6][1] = {{{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]}},{{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]}},{{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]}},{{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]},{&g_102},{&g_80[2][6][0]}}};
    int32_t l_1109 = (-2L);
    int32_t l_1112 = (-1L);
    int32_t *l_1113 = (void*)0;
    int32_t *l_1114 = &g_82;
    uint16_t *** const l_1139 = (void*)0;
    struct S1 l_1167 = {132};
    int32_t *l_1168 = &g_4[3][0];
    int64_t *****l_1175 = &g_1171;
    const union U3 *l_1203[1];
    int32_t l_1215[6][7][6] = {{{(-1L),0x97A559F9L,0xB8A13625L,0L,(-10L),0x687ABC52L},{7L,1L,(-1L),0xC4123B0EL,(-1L),1L},{(-10L),0xBD26A9E0L,(-4L),(-1L),0xE0C8CA4BL,0xBD26A9E0L},{(-10L),1L,0x687ABC52L,0xC4123B0EL,0L,1L},{7L,0x687ABC52L,0x97A559F9L,0L,0L,0x97A559F9L},{(-1L),(-1L),0xFAB42F44L,0xB2936768L,0L,0L},{0L,0x674B91E2L,0xC4123B0EL,0xC94168C8L,0xE0C8CA4BL,0xFAB42F44L}},{{0L,0L,0xC4123B0EL,0x6C72ED3AL,(-1L),0L},{0L,0x6C72ED3AL,0xFAB42F44L,0xAAAD6BBEL,(-10L),0x97A559F9L},{0xAAAD6BBEL,(-10L),0x97A559F9L,0x964F30F4L,0xC94168C8L,1L},{0L,0xB8A13625L,0x687ABC52L,1L,0L,0xBD26A9E0L},{0L,0xC94168C8L,(-4L),0xFAB42F44L,0L,1L},{0L,0xB8A13625L,(-1L),7L,0xC94168C8L,0x687ABC52L},{(-1L),(-10L),0xB8A13625L,0xB8A13625L,(-10L),(-1L)}},{{7L,0x6C72ED3AL,(-1L),0L,(-1L),0x674B91E2L},{(-10L),0L,(-4L),0xFAB42F44L,0L,7L},{0xAAAD6BBEL,(-1L),0xFAB42F44L,0L,0xE0C8CA4BL,0x674B91E2L},{1L,0xC94168C8L,0x964F30F4L,0x97A559F9L,(-10L),0xAAAD6BBEL},{0xC94168C8L,0xFAB42F44L,0xBD26A9E0L,1L,0xE0C8CA4BL,0x97A559F9L},{7L,0L,0xB8A13625L,0xBD26A9E0L,0L,0L},{0L,0xB2936768L,0xB8A13625L,1L,0xC94168C8L,0x97A559F9L}},{{0L,1L,0xBD26A9E0L,0x687ABC52L,0xAAAD6BBEL,0xAAAD6BBEL},{(-1L),0x964F30F4L,0x964F30F4L,(-1L),0L,0x674B91E2L},{0L,(-10L),0xFAB42F44L,0x674B91E2L,0L,7L},{0L,0xBD26A9E0L,0x71C07FF7L,0L,0L,(-1L)},{7L,(-10L),(-4L),0x6C72ED3AL,0L,0xC94168C8L},{0xC94168C8L,0x964F30F4L,0x97A559F9L,(-10L),0xAAAD6BBEL,0xFAB42F44L},{1L,1L,(-4L),0xB8A13625L,0xC94168C8L,0L}},{{0xAAAD6BBEL,0xB2936768L,0x71C07FF7L,0xC94168C8L,0L,0xB2936768L},{0xAAAD6BBEL,0L,0xFAB42F44L,0xB8A13625L,0xE0C8CA4BL,1L},{1L,0xFAB42F44L,0x964F30F4L,(-10L),(-10L),0x964F30F4L},{0xC94168C8L,0xC94168C8L,0xBD26A9E0L,0x6C72ED3AL,0xE0C8CA4BL,(-10L)},{7L,(-1L),0xB8A13625L,0L,0L,0xBD26A9E0L},{0L,7L,0xB8A13625L,0x674B91E2L,0xC94168C8L,(-10L)},{0L,0x674B91E2L,0xBD26A9E0L,(-1L),0xAAAD6BBEL,0x964F30F4L}},{{(-1L),0xAAAD6BBEL,0x964F30F4L,0x687ABC52L,0L,1L},{0L,0x97A559F9L,0xFAB42F44L,1L,0L,0xB2936768L},{0L,0L,0x71C07FF7L,0xBD26A9E0L,0L,0L},{7L,0x97A559F9L,(-4L),1L,0L,0xFAB42F44L},{0xC94168C8L,0xAAAD6BBEL,0x97A559F9L,0x97A559F9L,0xAAAD6BBEL,0xC94168C8L},{1L,0x674B91E2L,(-4L),0L,0xC94168C8L,(-1L)},{0xAAAD6BBEL,7L,0x71C07FF7L,0xFAB42F44L,0L,7L}}};
    int8_t ***l_1222 = &g_746[3][0];
    const uint16_t *l_1225[1][4];
    const uint16_t **l_1224 = &l_1225[0][1];
    struct S0 **l_1245 = (void*)0;
    uint32_t l_1255[1];
    uint64_t l_1290 = 0UL;
    int32_t l_1329 = 0x590763B4L;
    int16_t l_1341 = 0xE3A3L;
    uint64_t l_1343 = 0x927FD38C3844AA9DLL;
    int32_t l_1379 = 1L;
    int32_t l_1380 = 0L;
    int32_t l_1382 = 0xEB38F256L;
    int32_t l_1383 = 1L;
    int32_t l_1384[1][1][6];
    uint32_t l_1385[2];
    int32_t *l_1424 = &g_82;
    uint32_t ****l_1426 = (void*)0;
    union U6 l_1435 = {0L};
    uint8_t l_1438 = 1UL;
    int8_t l_1449 = 0x7DL;
    uint8_t l_1452 = 1UL;
    struct S1 l_1459[7][3][2] = {{{{314},{44}},{{314},{132}},{{170},{170}}},{{{132},{314}},{{44},{314}},{{132},{170}}},{{{170},{132}},{{314},{44}},{{314},{132}}},{{{170},{170}},{{132},{314}},{{44},{314}}},{{{132},{170}},{{170},{132}},{{314},{44}}},{{{314},{132}},{{205},{205}},{{44},{132}}},{{{107},{132}},{{44},{205}},{{205},{44}}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1203[i] = &g_50;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1225[i][j] = &g_287.f0;
    }
    for (i = 0; i < 1; i++)
        l_1255[i] = 0UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_1384[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 2; i++)
        l_1385[i] = 0x5BDAEF55L;
    if (((*l_1114) ^= ((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((l_1109 = (safe_mod_func_uint64_t_u_u(l_1107[2], p_32.f0))), p_32.f1)), (safe_add_func_uint16_t_u_u(0x3F7CL, ((p_32.f0 == g_168) , (l_1112 = ((((g_141[5][0][0] , (void*)0) != &g_77) && 0x28L) | l_1107[3]))))))) || 5L)))
    { 
        uint16_t *l_1117 = (void*)0;
        uint16_t **l_1116 = &l_1117;
        uint16_t ***l_1115 = &l_1116;
        uint16_t ****l_1118 = &l_1115;
        int32_t l_1123 = 0x58C5E819L;
        union U4 l_1130 = {-1L};
        int32_t ***l_1136 = &g_513[6][2];
        uint16_t *l_1142 = (void*)0;
        uint16_t *l_1143 = &l_1107[2];
        uint64_t l_1164[1];
        int32_t **l_1169 = &l_1114;
        uint64_t *l_1181 = &g_144.f1;
        int32_t *l_1182 = (void*)0;
        int32_t *l_1183 = &g_82;
        const union U3 *l_1202[6];
        const int64_t l_1234 = 0x2E662615E069225ELL;
        const struct S0 *l_1243 = &g_1244;
        const struct S0 **l_1242 = &l_1243;
        const struct S0 ***l_1241 = &l_1242;
        int i;
        for (i = 0; i < 1; i++)
            l_1164[i] = 0x36C507837D5DD23CLL;
        for (i = 0; i < 6; i++)
            l_1202[i] = &g_50;
        (*l_1118) = l_1115;
        if ((l_1123 ^= ((p_32.f2 , ((void*)0 == g_1119[3])) & ((*l_1114) ^= p_32.f0))))
        { 
            for (g_205 = 0; (g_205 == 48); g_205 = safe_add_func_uint16_t_u_u(g_205, 2))
            { 
                l_1123 = p_32.f0;
            }
        }
        else
        { 
            const union U3 *l_1133 = &g_50;
            int32_t l_1134 = 0x7C134DEDL;
            int32_t l_1135 = 5L;
            (*l_1114) |= (((&g_513[3][3] == (p_32.f2 , (((((safe_mod_func_int16_t_s_s((***g_90), (-8L))) > (g_168 = (safe_mod_func_int64_t_s_s((((((l_1130 , 0xAC9B49DE5A67D863LL) < (((safe_lshift_func_int16_t_s_u(((l_1133 != l_1133) | g_2), l_1134)) , p_32.f1) , (*g_273))) ^ p_32.f2) <= l_1135) , (**g_405)), l_1123)))) >= 248UL) == l_1135) , l_1136))) ^ p_32.f2) ^ (****g_666));
        }
        (*l_1114) &= (safe_add_func_int8_t_s_s(((void*)0 != l_1139), ((safe_add_func_uint16_t_u_u(((*l_1143) |= p_32.f2), ((safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s(((g_80[2][5][0]++) || (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s(0x6BL, (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((&g_77 == &g_77) , (((*g_1120) = (*g_1120)) != g_1163)) == (-1L)) >= 0xDAD6L), 4294967295UL)), l_1164[0])))))) >= (-2L)), 0UL)) > (****g_666)), 0UL))), p_32.f2)), 0x0D5E1747C0B7ACB1LL)) <= 0x6AB4A5A2L))) ^ (*g_406))));
        if ((l_1112 = (((*l_1183) = (safe_add_func_uint64_t_u_u(((((g_102 |= ((((*l_1169) = (l_1167 , l_1168)) == &l_1109) >= ((l_1175 = g_1170[3]) != (void*)0))) || ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u((~0L), ((*l_1181) = p_32.f1))) == p_32.f2), 6)) <= (*l_1168))) < p_32.f1) < 0L), 1UL))) || (***g_479))))
        { 
            int64_t l_1207[6][7];
            int8_t ***l_1219[6][1] = {{(void*)0},{&g_746[0][0]},{&g_746[0][0]},{(void*)0},{&g_746[0][0]},{&g_746[0][0]}};
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1207[i][j] = 0xC3D657D127EB6DBCLL;
            }
            if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((p_32 , (&g_127 != &g_127)), 7)), (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((*g_116), (&g_116 == (void*)0))) || (safe_sub_func_uint8_t_u_u(p_32.f0, p_32.f1))), 8)))))
            { 
                const union U3 **l_1204 = &l_1203[0];
                uint64_t *l_1208[2][1][3] = {{{&g_2,&g_2,&g_2}},{{&g_604.f1,&g_604.f1,&g_604.f1}}};
                int32_t l_1209 = (-1L);
                int i, j, k;
                (*l_1183) = (((18446744073709551615UL != (safe_sub_func_uint64_t_u_u(p_32.f0, (l_1209 = (((*l_1181) = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((**g_90) != (((safe_rshift_func_uint16_t_u_u((g_604.f0 | (l_1202[5] != ((*l_1204) = l_1203[0]))), 6)) ^ ((safe_mul_func_uint16_t_u_u(p_32.f1, p_32.f0)) != p_32.f1)) , (void*)0)), g_604.f1)), 0))) , l_1207[2][5]))))) | 6L) ^ 2UL);
            }
            else
            { 
                uint8_t l_1210[5];
                struct S1 l_1216[1] = {{81}};
                int32_t l_1218 = 0xBE4E513CL;
                int8_t ****l_1220 = (void*)0;
                int8_t ****l_1221[6][5] = {{&l_1219[5][0],&l_1219[4][0],&l_1219[5][0],&l_1219[2][0],&l_1219[1][0]},{&l_1219[5][0],&l_1219[2][0],&l_1219[4][0],&l_1219[4][0],&l_1219[2][0]},{&l_1219[2][0],&l_1219[3][0],&l_1219[5][0],&l_1219[1][0],&l_1219[2][0]},{&l_1219[2][0],&l_1219[3][0],&l_1219[1][0],(void*)0,(void*)0},{&l_1219[4][0],&l_1219[2][0],&l_1219[2][0],&l_1219[4][0],(void*)0},{&l_1219[2][0],&l_1219[4][0],&l_1219[2][0],&l_1219[2][0],(void*)0}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1210[i] = 1UL;
                l_1210[2] = p_32.f1;
                if (p_32.f0)
                { 
                    int64_t l_1217[3][6] = {{0x75D0DAC2BFA7A88ELL,2L,0x75D0DAC2BFA7A88ELL,2L,0x75D0DAC2BFA7A88ELL,2L},{0L,2L,0L,2L,0L,2L},{0x75D0DAC2BFA7A88ELL,2L,0x75D0DAC2BFA7A88ELL,2L,0x75D0DAC2BFA7A88ELL,2L}};
                    int i, j;
                    l_1218 ^= (safe_add_func_int16_t_s_s(0x88A1L, (((((*g_1174) &= (g_205 || 1L)) && (g_1213 , ((*l_1181) &= (safe_unary_minus_func_int32_t_s(l_1215[4][0][5]))))) , l_1216[0]) , (l_1210[2] ^ l_1217[0][3]))));
                }
                else
                { 
                    (*g_981) = ((*l_1169) = &l_1218);
                }
                l_1222 = l_1219[2][0];
            }
        }
        else
        { 
            int8_t l_1226 = (-1L);
            int32_t *l_1240 = &l_1109;
            if (((!((void*)0 == l_1224)) , l_1226))
            { 
                uint16_t *l_1237 = &g_135;
                (*l_1183) |= (p_32.f1 < (*l_1114));
                for (g_463 = 0; (g_463 <= 5); g_463 += 1)
                { 
                    uint32_t l_1227 = 18446744073709551609UL;
                    int32_t *l_1239 = &l_1123;
                    --l_1227;
                    (*l_1183) ^= (-2L);
                    (*l_1183) ^= ((-1L) > (((safe_rshift_func_int16_t_s_s(((l_1234 && (safe_div_func_uint64_t_u_u((l_1237 == (void*)0), ((*g_747) , ((safe_unary_minus_func_uint16_t_u(g_109.f3)) , p_32.f0))))) && 9UL), p_32.f2)) & p_32.f0) == p_32.f0));
                    (*g_981) = l_1239;
                }
            }
            else
            { 
                (*g_981) = l_1240;
            }
        }
        if ((((*l_1241) = (void*)0) != l_1245))
        { 
            uint64_t l_1248 = 0x6395B2F023A7786DLL;
            (*l_1183) ^= (((safe_mul_func_int8_t_s_s((*g_116), (p_32.f1 , 253UL))) | l_1248) , ((g_1253[3][2][4] = (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((0x251E3B24ED5692A0LL != (*l_1168)) , ((18446744073709551607UL | g_372) <= 0L)), (*g_747))), 0xB9B3L))) && 0x482DL));
        }
        else
        { 
            const int64_t l_1254 = 0x09206B680FA98FB9LL;
            (*l_1183) = l_1254;
        }
    }
    else
    { 
        union U6 l_1256 = {1L};
        const union U2 *l_1269[5][6][5] = {{{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127}},{{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127}},{{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127}},{{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127}},{{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127},{&g_127,&g_127,&g_127,&g_127,&g_127},{(void*)0,&g_127,&g_127,&g_127,&g_127}}};
        int32_t l_1284 = 0x068E7966L;
        int32_t l_1287 = (-10L);
        int32_t l_1289 = 7L;
        int16_t * const * const *l_1332 = (void*)0;
        int16_t * const * const **l_1331 = &l_1332;
        int16_t * const * const ***l_1330 = &l_1331;
        int32_t l_1342 = 0L;
        int32_t ****l_1368 = &g_512;
        int32_t l_1373 = 1L;
        int64_t l_1374 = (-7L);
        int32_t l_1376[2];
        int8_t l_1407 = 0x5CL;
        int32_t l_1446[2][7][4] = {{{1L,(-8L),0L,0L},{0x08894F1CL,0x08894F1CL,1L,0L},{0xF46F38D9L,(-8L),0xF46F38D9L,1L},{0xF46F38D9L,1L,1L,0xF46F38D9L},{0x08894F1CL,1L,0L,1L},{1L,(-8L),0L,0L},{0x08894F1CL,0x08894F1CL,1L,0L}},{{0xF46F38D9L,(-8L),0xF46F38D9L,1L},{0xF46F38D9L,1L,1L,0xF46F38D9L},{0x08894F1CL,1L,0L,1L},{1L,(-8L),0L,0L},{0x08894F1CL,0x08894F1CL,1L,0L},{0xF46F38D9L,(-8L),0xF46F38D9L,1L},{0xF46F38D9L,1L,1L,0xF46F38D9L}}};
        int64_t l_1451 = 1L;
        int32_t *l_1462 = &l_1376[1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1376[i] = 0xC6563D0CL;
        if (l_1255[0])
        { 
            return l_1256;
        }
        else
        { 
            uint32_t l_1265 = 5UL;
            int32_t l_1270 = 6L;
            int64_t ***l_1271[3][3][4] = {{{&g_1173[0],&g_1173[1],(void*)0,(void*)0},{&g_1173[0],&g_1173[0],&g_1173[2],(void*)0},{(void*)0,&g_1173[0],&g_1173[0],(void*)0}},{{&g_1173[0],&g_1173[1],&g_1173[0],&g_1173[2]},{&g_1173[0],&g_1173[0],&g_1173[2],&g_1173[0]},{&g_1173[1],&g_1173[0],&g_1173[2],&g_1173[0]}},{{(void*)0,&g_1173[0],&g_1173[2],&g_1173[0]},{&g_1173[1],&g_1173[2],&g_1173[2],&g_1173[1]},{&g_1173[0],(void*)0,&g_1173[0],&g_1173[1]}}};
            int32_t l_1288[5][6] = {{8L,(-1L),8L,(-1L),8L,(-1L)},{8L,(-1L),8L,(-1L),8L,(-1L)},{8L,(-1L),8L,(-1L),8L,(-1L)},{8L,(-1L),8L,(-1L),8L,(-1L)},{8L,(-1L),8L,(-1L),8L,(-1L)}};
            uint64_t l_1360 = 0UL;
            int16_t **l_1393 = (void*)0;
            int32_t *l_1420 = &l_1288[2][5];
            int i, j, k;
            for (g_50.f2 = 0; (g_50.f2 <= 0); g_50.f2 += 1)
            { 
                int64_t l_1262 = 7L;
                int8_t *l_1263 = &g_170;
                int32_t l_1264 = (-2L);
                struct S0 l_1297 = {-0,227,-58,-13};
                union U5 l_1314 = {0x589BL};
                int32_t l_1375 = 0xC4E969F6L;
                int32_t l_1377 = 0xE8D5B9D1L;
                int32_t l_1378 = 0xD34DEB44L;
                int32_t l_1381[6][7][4] = {{{(-1L),5L,0L,0x40EEDD20L},{7L,0xAD32E435L,0x21D6F023L,5L},{1L,5L,0x21D6F023L,0xAA80D316L},{7L,0xB7398EDBL,0L,0L},{(-1L),(-1L),0xAD32E435L,1L},{0xAD32E435L,1L,0L,0L},{0L,(-6L),(-1L),0L}},{{0xB7283D8DL,(-6L),0x949EE783L,0L},{(-6L),1L,(-9L),1L},{(-1L),(-1L),(-1L),(-9L)},{0xAD32E435L,0xAA80D316L,7L,0x949EE783L},{(-9L),7L,1L,(-1L)},{(-9L),(-1L),7L,0L},{0xAD32E435L,(-1L),(-1L),0xAD32E435L}},{{0x40EEDD20L,5L,0xAD32E435L,0L},{1L,0L,0L,0x21D6F023L},{(-1L),0x949EE783L,0xB7283D8DL,0x21D6F023L},{5L,0L,(-6L),0L},{(-1L),5L,(-1L),0xAD32E435L},{0xB7283D8DL,(-1L),(-9L),0L},{0x21D6F023L,(-1L),0L,(-1L)}},{{5L,7L,0L,0x949EE783L},{0x21D6F023L,0xAA80D316L,(-9L),(-9L)},{0xB7283D8DL,0xB7283D8DL,(-1L),5L},{(-1L),5L,(-6L),5L},{5L,1L,0xB7283D8DL,(-6L)},{(-1L),1L,0L,5L},{1L,5L,0xAD32E435L,5L}},{{0x40EEDD20L,0xB7283D8DL,(-1L),(-9L)},{0xAD32E435L,0xAA80D316L,7L,0x949EE783L},{(-9L),7L,1L,(-1L)},{(-9L),(-1L),7L,0L},{0xAD32E435L,(-1L),(-1L),0xAD32E435L},{0x40EEDD20L,5L,0xAD32E435L,0L},{1L,0L,0L,0x21D6F023L}},{{(-1L),0x949EE783L,0xB7283D8DL,0x21D6F023L},{5L,0L,(-6L),0L},{(-1L),5L,(-1L),0xAD32E435L},{0xB7283D8DL,(-1L),(-9L),0L},{0x21D6F023L,(-1L),0L,(-1L)},{5L,7L,0L,0x949EE783L},{0x21D6F023L,0xAA80D316L,(-9L),(-9L)}}};
                int i, j, k;
                for (p_32.f2 = 0; (p_32.f2 >= 0); p_32.f2 -= 1)
                { 
                    return l_1256;
                }
                (*l_1114) |= (((safe_mod_func_int8_t_s_s(((-1L) == ((l_1264 ^= (((safe_sub_func_int64_t_s_s((!(-9L)), l_1262)) != ((void*)0 == l_1263)) >= (((*l_1263) = 0xAEL) | (p_32.f0 < p_32.f0)))) && (*g_92))), (*l_1168))) == 0x9BA3F842L) > l_1265);
                for (g_576 = 0; (g_576 >= 0); g_576 -= 1)
                { 
                    const int32_t l_1266[2] = {0xE571CDB1L,0xE571CDB1L};
                    int i;
                    (*l_1114) = (l_1270 = (l_1266[0] <= (safe_mul_func_uint8_t_u_u(p_32.f1, (l_1269[3][1][2] != (void*)0)))));
                    l_1270 = (l_1167 , l_1266[0]);
                }
                if ((((((void*)0 != l_1271[2][2][2]) | (((***l_1175) != ((((((++g_80[0][6][0]) > (l_1270 &= (safe_rshift_func_uint16_t_u_s(g_108.f0, ((p_32.f1 < ((****g_1171) = (((*l_1114) = (safe_rshift_func_uint16_t_u_u(((((*g_747) = (-1L)) <= (safe_lshift_func_uint16_t_u_u(((l_1284 = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((****g_666) = p_32.f1), g_50.f0)) && p_32.f0), (*l_1114)))) ^ p_32.f1), 7))) && l_1265), g_168))) != 0x4904B787L))) >= (*g_406)))))) & p_32.f1) ^ p_32.f1) , g_1056) , (void*)0)) | 0xE9C61FE0L)) & p_32.f0) == 0x9F88A80D243B1284LL))
                { 
                    int16_t l_1285 = 0xBCF9L;
                    int32_t *l_1286[5] = {&l_1109,&l_1109,&l_1109,&l_1109,&l_1109};
                    uint16_t *l_1302 = &l_1107[2];
                    struct S1 *l_1303 = &g_141[5][0][0];
                    uint8_t *l_1313 = (void*)0;
                    int8_t *****l_1317 = &g_1315;
                    int i;
                    --l_1290;
                    if (p_32.f1)
                        break;
                    (*l_1303) = (((g_1095[1][5] <= (((*****g_665) ^= (safe_mul_func_uint16_t_u_u(((*l_1302) = (safe_div_func_uint8_t_u_u(((l_1297 , (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(g_205, ((((*l_1114) = (((*g_883) = (*g_883)) != (l_1167 , &l_1256))) != p_32.f0) && 0xD70ABC6A834C269ELL))) >= p_32.f2), l_1289))) ^ 0x0AL), p_32.f1))), p_32.f2))) == p_32.f0)) & p_32.f2) , l_1167);
                    l_1287 ^= (safe_lshift_func_int8_t_s_u(((*g_747) = ((0x7BA1L ^ ((((+((safe_add_func_uint64_t_u_u((((((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((((void*)0 == l_1313) && 0x14D9DBF136936DFALL) == 18446744073709551611UL), 0xF7DBL)), 8)) != (((l_1314 , g_168) , g_982) <= g_138.f0)) < g_170) >= p_32.f2) != 4L), l_1297.f2)) <= p_32.f2)) != 0UL) | l_1256.f0) & 0UL)) || 1UL)), l_1256.f0));
                    (*l_1317) = g_1315;
                }
                else
                { 
                    int32_t *l_1318 = (void*)0;
                    int32_t *l_1319 = &l_1287;
                    int32_t *l_1320 = &l_1264;
                    int32_t *l_1321 = &l_1288[2][5];
                    int32_t *l_1322 = &l_1112;
                    int32_t *l_1323[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t l_1324[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1324[i] = 0xF1CBB8ECL;
                    l_1324[0]++;
                    if (p_32.f0)
                        continue;
                    if (g_1327)
                        continue;
                }
                if (l_1256.f0)
                { 
                    int32_t *l_1333 = (void*)0;
                    int32_t *l_1334 = (void*)0;
                    int32_t *l_1335 = &l_1288[2][5];
                    int32_t *l_1336 = &l_1112;
                    int32_t *l_1337 = &g_82;
                    int32_t *l_1338 = &l_1264;
                    int32_t *l_1339 = (void*)0;
                    int32_t *l_1340[6][1];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1340[i][j] = (void*)0;
                    }
                    (*l_1114) = ((!((g_109.f2 | 9L) & (l_1329 < ((void*)0 != l_1330)))) , 1L);
                    l_1270 |= ((*l_1114) = l_1262);
                    l_1343++;
                }
                else
                { 
                    int32_t l_1352 = 0x175CD7B4L;
                    int32_t l_1353 = 0xBBCD09DDL;
                    const union U3 **l_1355 = &l_1203[0];
                    const union U3 ***l_1354 = &l_1355;
                    int32_t *l_1361 = (void*)0;
                    int32_t *l_1362 = &l_1270;
                    struct S0 l_1366 = {-0,352,-31,7};
                    int32_t *l_1371[3][1];
                    int16_t **l_1392[4] = {&g_92,&g_92,&g_92,&g_92};
                    uint8_t l_1396 = 6UL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1371[i][j] = &l_1342;
                    }
                    l_1342 = ((*l_1362) &= ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((l_1352 = ((****g_666) = 0x6655L)) & l_1353), ((l_1297.f3 = ((*g_1120) == ((*l_1354) = (void*)0))) & (*l_1114)))), 13)), (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((*l_1168), ((((((((l_1360 || l_1256.f0) && p_32.f2) && 0xBE2B1D02L) | l_1297.f2) <= p_32.f2) & p_32.f0) == p_32.f0) , p_32.f2))) || 0xFEC9BED8A8728E05LL), 2)))) != p_32.f0));
                    l_1297.f2 &= ((~((-6L) && (((1UL == (safe_div_func_uint16_t_u_u((((l_1366 , ((((((~((void*)0 != l_1368)) <= p_32.f1) && ((l_1264 = ((((safe_add_func_int64_t_s_s(((*g_1174) = (((*l_1114) = g_109.f1) < (*l_1362))), 0x2540C87572DC7585LL)) != 4294967295UL) == p_32.f0) <= p_32.f1)) >= (*l_1168))) & 0xCBL) <= (*g_747)) == g_1327)) >= p_32.f0) > g_287.f0), p_32.f1))) <= g_4[3][0]) & l_1314.f0))) | p_32.f0);
                    l_1385[0]++;
                    (*l_1114) |= ((l_1270 <= ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_1392[3] != l_1393), (*l_1362))), (safe_add_func_uint8_t_u_u(l_1297.f1, ((l_1360 || (l_1396 | 252UL)) , g_50.f2))))) || (*g_406))) | g_1253[3][2][4]);
                }
                for (g_216 = 0; (g_216 <= 0); g_216 += 1)
                { 
                    uint16_t l_1397 = 0xA5C7L;
                    const struct S0 *l_1404 = &g_1244;
                    const struct S0 **l_1403 = &l_1404;
                    int32_t l_1405 = 0x7037573DL;
                    uint32_t *l_1406[4][1] = {{&l_1265},{&l_1385[0]},{&l_1265},{&l_1385[0]}};
                    int32_t l_1408 = 0x0CD71D31L;
                    uint8_t *l_1415 = &g_171;
                    const int16_t *****l_1419 = &g_1416;
                    int i, j;
                    (*g_883) = (void*)0;
                    l_1397--;
                    (*l_1114) = (((safe_rshift_func_int16_t_s_s(((***g_90) = (+(((*l_1403) = &g_1056) != ((g_205++) , &g_109)))), 13)) >= (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((void*)0 != l_1415), (((*g_665) != ((*l_1419) = g_1416)) && 0x0DC6L))), 0x1019L))) ^ 0xFC7E5801L);
                    if (l_1408)
                        break;
                    (*g_981) = &l_1382;
                }
            }
            l_1420 = &l_1284;
        }
        for (g_1020 = 2; (g_1020 > 15); g_1020 = safe_add_func_uint8_t_u_u(g_1020, 1))
        { 
            int16_t l_1423[6][2] = {{0x3518L,0x3518L},{0xB33FL,0x3518L},{0x3518L,0xB33FL},{0x3518L,0x3518L},{0xB33FL,0x3518L},{0x3518L,0xB33FL}};
            int32_t *l_1425 = &l_1380;
            struct S0 l_1429 = {0,452,-31,1};
            int32_t l_1448 = 0L;
            int32_t l_1450[1];
            union U6 l_1461 = {0xB6372E4EE228B525LL};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1450[i] = (-8L);
            if (l_1423[1][1])
                break;
            l_1425 = l_1424;
            l_1426 = l_1426;
            (*l_1424) = (safe_rshift_func_int16_t_s_u((l_1429 , ((((g_205++) || ((safe_rshift_func_uint8_t_u_s(((!(l_1435 , (safe_mul_func_int8_t_s_s(p_32.f0, (l_1438 ^ (safe_sub_func_int16_t_s_s(((safe_add_func_int64_t_s_s((p_32.f1 <= (p_32.f1 != 1UL)), (*l_1425))) , 1L), p_32.f0))))))) <= 4L), (*g_747))) , (***g_479))) == p_32.f2) ^ p_32.f2)), g_150));
            for (g_604.f1 = 0; (g_604.f1 == 35); g_604.f1 = safe_add_func_uint8_t_u_u(g_604.f1, 3))
            { 
                int32_t *l_1445[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int16_t l_1447 = 1L;
                const union U2 **l_1455 = &l_1269[3][1][2];
                struct S1 l_1458 = {238};
                int i, j;
                ++l_1452;
                (*l_1455) = l_1269[4][4][4];
                for (l_1373 = 0; (l_1373 > 8); ++l_1373)
                { 
                    struct S1 *l_1460[3][4][7] = {{{&g_141[0][1][0],&l_1458,&l_1459[4][0][1],&l_1458,&g_141[0][1][0],&l_1459[4][0][1],&l_1459[4][0][1]},{&g_141[3][0][0],&l_1458,&l_1459[5][1][0],&g_141[5][1][0],&l_1458,&l_1458,&l_1458},{&l_1167,&l_1459[2][1][1],&l_1459[2][1][1],&l_1167,&l_1459[4][0][1],&l_1459[4][0][1],&g_141[0][1][0]},{&l_1459[4][0][1],&g_141[5][1][0],&g_138,&l_1459[5][1][0],&l_1459[6][1][0],&l_1459[6][1][0],&l_1459[5][1][0]}},{{&l_1459[2][1][0],&l_1459[5][0][1],&l_1459[2][1][0],&l_1459[4][0][1],&l_1458,&g_141[5][1][0],&g_141[0][1][0]},{&l_1458,&g_141[3][0][0],&l_1458,&g_138,&g_141[3][0][0],&g_138,&l_1458},{&l_1458,&l_1458,&l_1459[4][0][1],&l_1459[6][0][1],&l_1459[4][0][1],&g_141[5][1][0],&l_1459[5][0][1]},{(void*)0,(void*)0,&l_1459[6][1][0],&l_1459[2][0][1],&l_1459[2][0][1],&l_1459[6][1][0],(void*)0}},{{&l_1459[2][1][1],&l_1458,&l_1458,&l_1459[2][1][0],&l_1459[4][0][1],&l_1459[4][0][1],&l_1459[6][0][1]},{&l_1459[6][1][0],&l_1458,&g_141[3][0][0],(void*)0,&g_141[3][0][0],&l_1458,&l_1459[6][1][0]},{&l_1459[6][0][1],&l_1459[4][0][1],&l_1459[4][0][1],&l_1459[2][1][0],&l_1458,&l_1458,&l_1459[2][1][1]},{(void*)0,&l_1459[6][1][0],&l_1459[2][0][1],&l_1459[2][0][1],&l_1459[6][1][0],(void*)0,(void*)0}}};
                    int i, j, k;
                    l_1459[4][0][1] = l_1458;
                    if (p_32.f1)
                        break;
                    l_1167 = l_1459[4][0][1];
                }
                return l_1461;
            }
        }
        (*g_981) = (l_1462 = (void*)0);
    }
    return p_32;
}



static union U6  func_33(int16_t * const  p_34, int32_t * p_35, union U6  p_36, const struct S1  p_37)
{ 
    int8_t l_852[5][3][7] = {{{0L,(-1L),0x96L,1L,0xB4L,0xA6L,0xA6L},{(-1L),8L,0x41L,8L,(-1L),0xF1L,0x85L},{0x63L,(-1L),0xA6L,8L,0xA1L,0L,0xA1L}},{{0L,0x87L,0x87L,0L,8L,0x11L,0x46L},{0x63L,8L,0xB4L,0L,0x29L,0x29L,0L},{(-1L),0x85L,(-1L),0x11L,5L,(-2L),0x46L}},{{0L,0x98L,0xA1L,0xB4L,0x2BL,0xB4L,0xA1L},{5L,5L,8L,0x64L,(-3L),(-2L),0x85L},{1L,0xA6L,0x29L,(-1L),(-1L),0x29L,0xA6L}},{{0x87L,0xF1L,5L,(-1L),(-3L),0x11L,0x64L},{0x29L,0L,0x2BL,0xA6L,0x2BL,0L,0x29L},{0x64L,0x11L,(-3L),(-1L),5L,0xF1L,0x87L}},{{0xA6L,0x29L,(-1L),(-1L),0x29L,0xA6L,1L},{0x85L,(-2L),(-3L),0x64L,8L,5L,5L},{0xA1L,0xB4L,0x2BL,0xB4L,0xA1L,0x98L,0L}}};
    int32_t *l_853[3];
    int32_t l_854 = 0x1B542050L;
    int16_t *l_855 = &g_168;
    uint16_t l_856 = 0x41D5L;
    int16_t ****l_859 = &g_90;
    uint16_t l_863 = 7UL;
    union U2 l_881 = {4294967295UL};
    int16_t l_895[6][4][4] = {{{0x9F8CL,0x9BCEL,0xEF40L,0xD466L},{0x00A0L,0x9BCEL,0x88C3L,0x81ECL},{0x9BCEL,0x5ECEL,(-7L),0x00A0L},{9L,1L,0xB95BL,9L}},{{(-1L),0x71A3L,0x00A0L,0x5ECEL},{(-1L),9L,0xFD2DL,0xD466L},{0xCD68L,(-6L),0xCD68L,(-9L)},{(-7L),(-1L),0x5C9BL,0x5ECEL}},{{0xEF40L,0x6EFAL,9L,(-1L)},{0xB95BL,1L,9L,0xCD68L},{0xEF40L,0x9F8CL,0x5C9BL,0x71A3L},{(-7L),7L,0xCD68L,(-1L)}},{{0xCD68L,(-1L),0xFD2DL,0x6EFAL},{(-1L),0x9F8CL,0x00A0L,0x693EL},{(-1L),0xB95BL,0xB95BL,(-1L)},{9L,0x71A3L,(-6L),0L}},{{(-1L),(-1L),0xD7A6L,0xD466L},{0x693EL,0x960CL,0xCD68L,0xD466L},{0xFD2DL,(-1L),7L,0L},{0xEF40L,0x71A3L,0x0E41L,(-1L)}},{{1L,0xB95BL,9L,0x693EL},{(-6L),0x9F8CL,7L,0x6EFAL},{(-7L),(-1L),0x81ECL,(-1L)},{0x693EL,7L,0xFD2DL,0x71A3L}}};
    int64_t l_903 = 0xF20CD139C8C9B2D9LL;
    int32_t l_918[1];
    struct S1 l_969 = {64};
    int8_t l_991 = 0xC2L;
    int8_t l_1018 = 0x6DL;
    int32_t l_1022 = 1L;
    uint8_t l_1023[4];
    union U3 * const **l_1026[3];
    union U3 *l_1030 = &g_50;
    union U3 **l_1029 = &l_1030;
    union U3 ***l_1028 = &l_1029;
    const union U5 *l_1046[7] = {&g_287,&g_287,&g_287,&g_287,&g_287,&g_287,&g_287};
    int8_t **l_1049 = (void*)0;
    int16_t l_1051[4];
    uint16_t l_1058 = 0UL;
    const union U2 *l_1062 = &g_127;
    union U2 *l_1064 = &l_881;
    union U2 **l_1063 = &l_1064;
    const uint16_t *l_1094 = &g_1095[1][5];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_853[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_918[i] = 1L;
    for (i = 0; i < 4; i++)
        l_1023[i] = 249UL;
    for (i = 0; i < 3; i++)
        l_1026[i] = &g_502[4][0];
    for (i = 0; i < 4; i++)
        l_1051[i] = 0x4D0BL;
lbl_990:
    l_854 = l_852[3][1][5];
    if ((*p_35))
    { 
        struct S0 l_860 = {0,132,-33,13};
        union U2 l_864 = {0x5A753C2CL};
        uint64_t *l_869 = &g_604.f1;
        uint8_t *l_870 = &g_171;
        uint8_t *l_871 = (void*)0;
        int32_t l_886 = (-1L);
        int32_t l_888 = (-1L);
        int32_t l_889 = 0xFC5ED105L;
        int32_t l_891 = 4L;
        int32_t l_892 = 0x03F83102L;
        int32_t l_893 = 0xB71F6391L;
        int32_t l_894[6][5] = {{1L,1L,0x3C8189ADL,8L,0L},{0x55D74093L,0xBF300D17L,0xBF300D17L,0x55D74093L,1L},{0x55D74093L,8L,(-10L),(-10L),8L},{1L,0xBF300D17L,(-10L),0x3C8189ADL,0x3C8189ADL},{0xBF300D17L,1L,0xBF300D17L,(-10L),0x3C8189ADL},{8L,0x55D74093L,0x3C8189ADL,0x55D74093L,8L}};
        union U6 l_907[1][2] = {{{0xE9B490136A7C0925LL},{0xE9B490136A7C0925LL}}};
        uint8_t l_926 = 0x25L;
        int i, j;
        p_35 = p_35;
        if ((l_860.f3 = ((g_80[0][2][0] &= (p_37 , ((*l_870) = (((((((*l_869) = (safe_lshift_func_int8_t_s_s((g_141[5][0][0] , (safe_mod_func_uint8_t_u_u(((0xA00CA17F0322181BLL ^ (g_109.f2 > g_134)) , 255UL), p_37.f0))), 7))) & p_36.f0) >= l_864.f0) ^ 0x428CL) , p_36.f2) ^ 0x846DBA0BL)))) != 0xFBL)))
        { 
            const union U6 *l_873 = &g_144;
            const union U6 **l_872 = &l_873;
            uint16_t *l_874 = &g_287.f0;
            uint16_t *l_877 = (void*)0;
            uint16_t *l_878 = &g_135;
            int32_t l_882 = 0xC3019F74L;
            int32_t l_885 = 0x7659DD5BL;
            int32_t l_887 = 9L;
            int32_t l_890 = 0xC6F4D0C1L;
            int32_t l_896 = (-9L);
            int8_t l_897 = 2L;
            int32_t l_898 = 0x3D175198L;
            int32_t l_899 = 0xE3B526C2L;
            int32_t l_900 = (-9L);
            int32_t l_901 = 0L;
            int32_t l_902[2][1];
            uint32_t l_904 = 0x5731F30FL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_902[i][j] = 0L;
            }
            l_860.f3 |= (((*l_870) = (((9L && ((0xE3C472CFFA16A3CDLL != ((l_872 != (((g_287 , 3L) , ((--(*l_874)) ^ ((((((*l_878) = p_36.f2) ^ (safe_mod_func_uint32_t_u_u(((((**g_91) = (l_881 , (-1L))) == 0x4BABL) <= l_882), (***g_479)))) || g_171) || (*p_35)) | (-3L)))) , g_883)) , p_37.f0)) & 0xDD62E8EEAFCBC684LL)) , g_135) <= 18446744073709551607UL)) || g_144.f1);
            l_904++;
            return l_907[0][1];
        }
        else
        { 
            int16_t l_910[7] = {0x5ACCL,0xCC19L,0x5ACCL,0x5ACCL,0xCC19L,0x5ACCL,0x5ACCL};
            int32_t l_916 = 1L;
            int32_t l_919 = (-1L);
            int32_t l_920 = 0x332259C7L;
            int32_t l_921 = 0x90ED9952L;
            int32_t l_925 = 0x51E66443L;
            int i;
            for (g_144.f0 = 0; (g_144.f0 != 22); ++g_144.f0)
            { 
                struct S1 *l_915 = &g_141[5][0][0];
                int32_t l_917 = 0xD2111633L;
                int32_t l_922 = 0x46E79D12L;
                int32_t l_923 = 0xFFE36F9CL;
                int32_t l_924[5][4][2] = {{{(-6L),0x39D1187AL},{1L,1L},{1L,0x39D1187AL},{(-6L),0xBBA88A6DL}},{{0x39D1187AL,0xBBA88A6DL},{(-6L),0x39D1187AL},{1L,1L},{1L,0x39D1187AL}},{{(-6L),0xBBA88A6DL},{0x39D1187AL,0xBBA88A6DL},{(-6L),0x39D1187AL},{1L,1L}},{{1L,0x39D1187AL},{(-6L),0xBBA88A6DL},{0x39D1187AL,0xBBA88A6DL},{(-6L),0x39D1187AL}},{{1L,1L},{1L,0x39D1187AL},{(-6L),0xBBA88A6DL},{0x39D1187AL,0xBBA88A6DL}}};
                int i, j, k;
                p_35 = (((++g_287.f0) & (safe_sub_func_int64_t_s_s(0x5586D4C504175BBCLL, 0x2F3D98DDFEE02AD4LL))) , &l_894[5][3]);
                if (l_891)
                    continue;
                (*l_915) = p_37;
                ++l_926;
                if ((safe_add_func_uint8_t_u_u(((*l_870) = p_36.f0), p_36.f1)))
                { 
                    union U6 l_931 = {0xDE547CADA05D5D62LL};
                    return l_931;
                }
                else
                { 
                    (*p_35) &= 0L;
                }
            }
            l_860.f0 = (*p_35);
        }
        l_860.f3 = (safe_rshift_func_int8_t_s_u(g_934, 2));
    }
    else
    { 
        int64_t l_935 = 0x484F38DDAB7E4602LL;
        union U6 l_939 = {-3L};
        int32_t ****l_951[3][1][5] = {{{(void*)0,&g_512,&g_512,(void*)0,&g_512}},{{(void*)0,(void*)0,&g_512,(void*)0,(void*)0}},{{&g_512,(void*)0,&g_512,&g_512,(void*)0}}};
        int32_t *****l_950 = &l_951[0][0][0];
        int32_t *****l_952 = &l_951[0][0][0];
        int32_t l_1019 = 0xC8EC99A7L;
        int32_t l_1021 = 0x8411DCE4L;
        union U3 * const ***l_1027 = &l_1026[0];
        union U3 ****l_1031 = &l_1028;
        uint32_t l_1044 = 18446744073709551608UL;
        const union U5 *l_1045[2];
        int8_t ***l_1050 = &g_746[6][2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1045[i] = &g_287;
        if ((l_935 &= 0x1307368BL))
        { 
            union U3 l_936 = {0xF68E4BE1E70C581FLL};
            union U6 * const **l_947 = (void*)0;
            union U6 * const ***l_946 = &l_947;
            int32_t l_960 = 0L;
            int32_t l_961[4][6][4] = {{{(-1L),0xC45D35BCL,0xC45D35BCL,(-1L)},{0x58424D3EL,(-3L),0x39DE887CL,0x90E4AEEAL},{(-3L),0x58424D3EL,(-9L),0x5263020EL},{0xC45D35BCL,1L,0x90E4AEEAL,0x5263020EL},{5L,0x58424D3EL,5L,0x90E4AEEAL},{1L,(-3L),(-1L),1L}},{{0xC45D35BCL,0x90E4AEEAL,0x39DE887CL,(-3L)},{0x90E4AEEAL,0x58424D3EL,0x39DE887CL,0x39DE887CL},{0xC45D35BCL,0xC45D35BCL,(-1L),0x5263020EL},{1L,0xA14935CFL,5L,(-3L)},{5L,(-3L),0x90E4AEEAL,5L},{0xC45D35BCL,(-3L),(-9L),(-3L)}},{{(-3L),0xA14935CFL,0x39DE887CL,0x5263020EL},{1L,0xC45D35BCL,0x90E4AEEAL,0x39DE887CL},{1L,0x58424D3EL,0xC3908190L,(-3L)},{1L,0x90E4AEEAL,0x90E4AEEAL,1L},{1L,(-3L),0x39DE887CL,0x90E4AEEAL},{(-3L),0x58424D3EL,(-9L),0x5263020EL}},{{0xC45D35BCL,1L,0x90E4AEEAL,0x5263020EL},{5L,0x58424D3EL,5L,0x90E4AEEAL},{1L,(-3L),(-1L),1L},{0xC45D35BCL,0x90E4AEEAL,0x39DE887CL,(-3L)},{0x90E4AEEAL,0x58424D3EL,0x39DE887CL,0x39DE887CL},{0xC45D35BCL,0xC45D35BCL,(-1L),0x5263020EL}}};
            int i, j, k;
            for (g_372 = 0; (g_372 <= 0); g_372 += 1)
            { 
                uint16_t l_937 = 0xE507L;
                int32_t l_959 = 0x6AE05A72L;
                int32_t l_962[3][5] = {{8L,(-1L),(-1L),8L,(-1L)},{8L,8L,6L,8L,8L},{(-1L),8L,(-1L),(-1L),8L}};
                int i, j;
                for (l_854 = 0; (l_854 >= 0); l_854 -= 1)
                { 
                    int32_t l_938 = 0L;
                    int i, j;
                    l_937 = (g_216 < (((p_36 , (***g_90)) | (-4L)) < (p_36.f1 & (l_936 , (p_36.f0 | 1UL)))));
                    l_938 = (((void*)0 == &g_884[5]) == (*****g_665));
                    if (p_36.f1)
                        goto lbl_1061;
                    return l_939;
                }
                for (g_144.f1 = 0; (g_144.f1 <= 0); g_144.f1 += 1)
                { 
                    int32_t *****l_953 = &l_951[0][0][0];
                    int64_t *l_956 = (void*)0;
                    int64_t *l_957 = &l_936.f2;
                    int32_t l_958[5][5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_958[i][j] = (-1L);
                    }
                    if ((*p_35))
                        break;
                    l_959 &= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((g_134 != (g_287 , (safe_div_func_int64_t_s_s(((l_946 == &l_947) & ((*l_957) = (((((safe_mul_func_uint16_t_u_u(((((((l_952 = l_950) != (l_953 = l_953)) >= ((safe_div_func_int64_t_s_s(0x07CEEF675D15AA98LL, 0x4E8CCF401C63CAF1LL)) > g_604.f1)) >= p_36.f1) ^ (*p_35)) >= (*p_34)), 0L)) ^ 255UL) , p_37.f0) | p_36.f1) < p_37.f0))), l_958[4][2])))) && 0x3C36A143L) && 0x4E6C5745L), 1)), 1));
                }
                g_963++;
                return (**g_883);
            }
            return p_36;
        }
        else
        { 
            uint16_t l_971[3][6][4] = {{{0x1F50L,65535UL,1UL,1UL},{0x6AA6L,0x0358L,0UL,65535UL},{0x14E0L,0x1888L,0x1F50L,1UL},{0x5BB1L,0x2F8CL,65535UL,1UL},{0UL,0x3A68L,0x1888L,65535UL},{8UL,0x14E0L,8UL,3UL}},{{65528UL,0UL,0x14E0L,0x1F50L},{0UL,0x6C73L,1UL,0UL},{0xF47BL,1UL,1UL,0UL},{0UL,0xFD80L,0x14E0L,3UL},{65528UL,0x6AA6L,8UL,0x1B6CL},{8UL,0x1B6CL,0x1888L,0xFD80L}},{{0UL,0xF47BL,65535UL,65535UL},{0x5BB1L,0x5BB1L,0x1F50L,0x6AA6L},{0x14E0L,3UL,0UL,0x1888L},{0x6AA6L,3UL,1UL,0UL},{0x1F50L,3UL,1UL,0x1888L},{3UL,3UL,0xF47BL,0x6AA6L}}};
            int32_t l_986[6];
            union U6 *l_1000 = (void*)0;
            int8_t ** const l_1009 = (void*)0;
            int8_t l_1015 = 0x1DL;
            struct S1 l_1016[4][6][3] = {{{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}}},{{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}}},{{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}}},{{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}},{{272},{272},{272}}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_986[i] = 4L;
            for (g_144.f0 = (-16); (g_144.f0 <= 1); g_144.f0++)
            { 
                struct S1 *l_968[1];
                int32_t l_970[1][6][2] = {{{0L,0xAEF06EADL},{0L,0L},{0xAEF06EADL,0L},{0L,0xAEF06EADL},{0L,0L},{0xAEF06EADL,0L}}};
                uint32_t *l_980 = &g_205;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_968[i] = &g_141[5][0][0];
                p_35 = &l_854;
                l_969 = p_37;
                ++l_971[2][3][3];
                g_982 = (+((0x5BL | ((~((*g_512) != (((*l_980) = (safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u(p_36.f2, (g_108 , (p_36.f0 , (*p_35))))) && 4L) | p_37.f0), 2))) , g_981))) & 0x447AC3A4B83BDFD4LL)) | g_138.f0));
            }
            for (l_935 = 0; (l_935 > 16); l_935 = safe_add_func_uint8_t_u_u(l_935, 4))
            { 
                uint16_t l_987 = 0UL;
                int32_t l_1014[7] = {0x1C3A16C4L,0xC06B3535L,0xC06B3535L,0x1C3A16C4L,0xC06B3535L,0xC06B3535L,0x1C3A16C4L};
                int i;
                if ((*p_35))
                { 
                    int32_t *l_985 = (void*)0;
                    l_985 = l_985;
                    l_987++;
                    if (l_935)
                        goto lbl_990;
                    l_986[4] = (g_109.f3 , l_991);
                    if ((*p_35))
                        break;
                }
                else
                { 
                    uint32_t *l_992 = &g_205;
                    int64_t *l_1003 = &g_144.f2;
                    int64_t *l_1004 = &l_903;
                    int32_t l_1010 = 1L;
                    uint64_t *l_1011 = (void*)0;
                    uint64_t *l_1012[3];
                    uint8_t *l_1013 = &g_79;
                    struct S1 *l_1017 = &l_1016[2][5][0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1012[i] = &g_604.f1;
                    l_1010 = (((*l_992) &= (***g_479)) >= (safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((+(((l_1014[3] ^= (((((void*)0 == l_1000) != (-5L)) >= ((*l_1013) |= (safe_mul_func_uint16_t_u_u((((*l_855) &= (((g_604.f1 = (((*l_1004) = ((*l_1003) |= l_971[2][3][3])) | ((safe_sub_func_uint16_t_u_u((((((((((((safe_add_func_int32_t_s_s(((((****g_666) , &g_116) == l_1009) , (*p_35)), 0L)) == 0x17D7L) | 0x29L) & p_36.f1) < p_36.f2) < 4294967295UL) || l_1010) , 1L) > 0xE4F6L) != 0L) & 0xB4D14AAEL), g_372)) ^ l_987))) , (*p_34)) & p_37.f0)) && 0xB481L), 65535UL)))) == 8L)) | l_971[1][1][2]) & 7UL)), l_1015)) , (**g_91)), (**g_91))) < (*****g_665)), 0x68L)));
                    if (g_287.f0)
                        goto lbl_1052;
                    (*l_1017) = l_1016[2][5][0];
                }
            }
            l_1023[0]++;
        }
        l_1044 &= ((((*l_1027) = l_1026[0]) == (g_127 , ((*l_1031) = l_1028))) != (safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((*g_273) , ((safe_sub_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u(g_216, p_36.f0)), g_141[5][0][0].f0)), 0L)) == g_150) > p_37.f0), (*g_406))) ^ (*g_747))) ^ g_102), p_36.f0)), (*p_35))));
        l_1046[2] = l_1045[0];
lbl_1052:
        l_1051[2] = (p_35 != ((safe_mul_func_int16_t_s_s((&g_747 == ((*l_1050) = l_1049)), g_138.f0)) , ((*g_981) = p_35)));
        l_969 = g_141[5][0][0];
    }
lbl_1061:
    for (g_170 = 3; (g_170 >= 0); g_170 -= 1)
    { 
        uint32_t l_1053[7] = {0UL,6UL,0UL,0UL,6UL,0UL,0UL};
        int32_t l_1054[4] = {0xD532480BL,0xD532480BL,0xD532480BL,0xD532480BL};
        int i;
        l_1054[0] |= l_1053[1];
        for (g_127.f0 = 0; (g_127.f0 <= 3); g_127.f0 += 1)
        { 
            g_1055 = (void*)0;
            for (g_963 = 0; (g_963 <= 3); g_963 += 1)
            { 
                int32_t l_1057[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1057[i][j] = (-7L);
                }
                ++l_1058;
            }
        }
    }
    if ((l_1062 == ((*l_1063) = (((&l_1049 == (void*)0) < g_2) , &l_881))))
    { 
        return (**g_883);
    }
    else
    { 
        union U2 l_1081 = {0x95C8CE83L};
        int16_t **l_1086 = &g_92;
        int32_t l_1098 = (-4L);
        for (g_169 = 0; (g_169 == 9); g_169++)
        { 
            uint16_t l_1069 = 0xDA39L;
            uint64_t *l_1070 = &g_963;
            int32_t l_1087 = 0xBC7AACEBL;
            uint16_t *l_1093 = &l_863;
            uint16_t **l_1092 = &l_1093;
            union U2 l_1099 = {0x3DB1CAC5L};
            int32_t *l_1100 = &l_1022;
            l_1087 |= ((**g_666) == ((safe_add_func_uint64_t_u_u(p_36.f0, (((*l_1070) = l_1069) != ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((*l_855) = (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((p_36.f0 == (l_1081 , ((safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((l_1081.f0 || 0x84L), g_171)), 0x3F5A05D8L)) == g_127.f1))), g_168)), p_37.f0)), l_1069))) >= g_29), 0x5CL)), (*p_34))) ^ p_37.f0)))) , l_1086));
            l_1098 ^= (0xC0212C96D7CDD6C8LL && (safe_sub_func_int64_t_s_s(0xE9E70D388BADC567LL, ((p_36.f2 , 0x58A31D02L) >= (safe_mod_func_int16_t_s_s((((*l_1092) = &g_135) == (l_1094 = &g_135)), (safe_mod_func_int16_t_s_s(0xD358L, p_36.f1))))))));
            l_1100 = (l_1099 , (*g_981));
        }
        return (**g_883);
    }
}



static union U6  func_38(int16_t  p_39)
{ 
    int16_t *l_46 = &g_29;
    int32_t l_47 = 0x603FA8B7L;
    int16_t *l_49 = &g_29;
    int16_t **l_48 = &l_49;
    int16_t **l_52[5];
    int16_t ***l_51 = &l_52[4];
    int16_t **l_53 = &l_46;
    int64_t *l_56 = &g_50.f2;
    union U2 l_57 = {0x86B299B5L};
    int32_t *l_825 = (void*)0;
    struct S1 *l_826 = &g_138;
    uint16_t *l_835 = (void*)0;
    struct S0 l_836[5][6] = {{{-0,294,18,10},{0,430,56,-2},{0,430,56,-2},{-0,294,18,10},{-0,163,36,-12},{-0,294,18,10}},{{-0,294,18,10},{-0,163,36,-12},{-0,294,18,10},{0,430,56,-2},{0,430,56,-2},{-0,294,18,10}},{{0,240,32,-1},{0,240,32,-1},{0,430,56,-2},{0,175,-13,3},{0,430,56,-2},{0,240,32,-1}},{{0,430,56,-2},{-0,163,36,-12},{0,175,-13,3},{0,175,-13,3},{-0,163,36,-12},{0,430,56,-2}},{{0,240,32,-1},{0,430,56,-2},{0,175,-13,3},{0,430,56,-2},{0,240,32,-1},{0,240,32,-1}}};
    uint32_t *l_844 = &l_57.f0;
    uint64_t *l_845 = &g_144.f1;
    union U4 l_846 = {-6L};
    union U6 l_847 = {1L};
    int32_t *l_848 = &g_82;
    int i, j;
    for (i = 0; i < 5; i++)
        l_52[i] = &l_46;
    l_825 = func_40(l_46, l_47, ((*l_48) = &g_29), (g_50 , ((((*l_51) = &l_46) != l_53) & ((*l_56) = ((safe_rshift_func_int16_t_s_s((((l_47 < l_47) <= l_47) | 1UL), l_47)) < p_39)))), l_57);
    (*l_826) = g_141[2][0][0];
    (*l_848) = (+(safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((((g_287.f0 |= (+0UL)) | (l_836[1][4] , l_836[1][4].f2)) != (*g_273)), (~((l_49 != l_46) , (((((*l_845) ^= (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_844) = 0xA5C7FBBBL), l_47)), g_604.f2)), 1UL))) , l_846) , l_847) , (**g_480)))))), p_39)), g_138.f0)));
    return g_144;
}



static int32_t * func_40(int16_t * p_41, int64_t  p_42, int16_t * p_43, uint8_t  p_44, union U2  p_45)
{ 
    int64_t *l_58[6][6][1] = {{{&g_50.f0},{&g_50.f2},{&g_50.f2},{&g_50.f2},{&g_50.f0},{&g_50.f0}},{{&g_50.f2},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{&g_50.f2}},{{&g_50.f0},{&g_50.f0},{&g_50.f2},{&g_50.f2},{&g_50.f2},{&g_50.f0}},{{&g_50.f0},{&g_50.f2},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{&g_50.f2},{&g_50.f0},{&g_50.f0},{&g_50.f2},{&g_50.f2},{&g_50.f2}},{{&g_50.f0},{&g_50.f0},{&g_50.f2},{(void*)0},{(void*)0},{(void*)0}}};
    int64_t **l_59 = &l_58[2][0][0];
    int32_t *l_68 = (void*)0;
    int32_t **l_69 = &l_68;
    int16_t l_74 = 0x7223L;
    uint64_t l_75 = 0UL;
    int8_t *l_76 = (void*)0;
    uint8_t *l_78 = &g_79;
    union U2 *l_126 = &g_127;
    int32_t l_129[2];
    struct S1 l_142 = {266};
    int32_t l_148 = 0x8435EB15L;
    struct S1 l_176 = {90};
    uint64_t l_249 = 18446744073709551612UL;
    int16_t **l_253 = &g_92;
    const union U2 *l_257[3];
    union U4 l_260 = {0x69C1L};
    uint32_t l_284 = 1UL;
    int16_t l_300 = 0xAFEBL;
    const uint16_t l_310 = 65535UL;
    union U3 l_340[3][1] = {{{0L}},{{0L}},{{0L}}};
    union U5 l_439 = {0x7E64L};
    union U6 l_536 = {0xBBE2FEDE1CADA77CLL};
    uint64_t l_605 = 0x2A27EBD4C40589F3LL;
    int16_t ** const ** const l_639 = (void*)0;
    int32_t *l_654 = &g_4[3][0];
    int16_t ****l_664 = &g_90;
    int16_t *****l_663 = &l_664;
    int32_t *l_743 = &g_4[3][2];
    int32_t *****l_814 = (void*)0;
    int32_t ****l_816[2][5][5] = {{{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512}},{{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512},{&g_512,&g_512,&g_512,&g_512,&g_512}}};
    int32_t *****l_815 = &l_816[1][1][4];
    int64_t l_817 = 3L;
    uint32_t l_818 = 7UL;
    int64_t ***l_822[3];
    int64_t ****l_821 = &l_822[1];
    int64_t *****l_823 = &l_821;
    int32_t *l_824 = &g_4[1][0];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_129[i] = 3L;
    for (i = 0; i < 3; i++)
        l_257[i] = &g_127;
    for (i = 0; i < 3; i++)
        l_822[i] = &l_59;
    if ((((*l_78) = ((g_77 &= ((p_45.f1 || ((g_50.f2 ^ (((((*l_59) = l_58[2][0][0]) == &p_42) != ((0xD9L <= ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((*l_69) = l_68) != ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(249UL, p_45.f0)), l_74)) , (void*)0)), p_45.f1)) <= p_42) < g_50.f2), g_4[3][0])) , 0xFA01L), p_42)) || l_74), p_44)) || g_4[1][1])) > l_74)) , l_75)) < 18446744073709551608UL)) , g_29)) < 1UL)) , 0xBB921586L))
    { 
        int32_t *l_81 = &g_82;
        int32_t l_95[6] = {0x3DE95074L,0x3DE95074L,0x3DE95074L,0x3DE95074L,0x3DE95074L,0x3DE95074L};
        const uint32_t l_113 = 0x341C0C23L;
        int32_t l_130 = 0x60E8A931L;
        int32_t l_131 = 0L;
        struct S1 l_174 = {1};
        int64_t **l_179 = (void*)0;
        int64_t l_223 = 1L;
        union U3 l_224 = {0x08F384123AD31088LL};
        uint64_t l_262 = 0UL;
        int i;
        (*l_81) |= g_80[0][2][0];
        for (g_79 = 0; (g_79 <= 0); g_79 += 1)
        { 
            int32_t l_87 = 3L;
            int16_t ****l_93 = &g_90;
            int32_t l_96 = 0xFCF288C1L;
            union U3 l_110 = {0xEC16123697E171BALL};
            int32_t l_132 = 0xDA914897L;
            struct S1 l_145 = {294};
            int32_t l_166 = 0x61D406CBL;
            int32_t l_167 = 0x1D37E9AEL;
            if (((0x348F9E47L | (safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_87, 1L)) < p_44), (l_96 = (safe_mul_func_uint8_t_u_u((((*l_93) = g_90) == &g_91), (!(l_95[1] <= 0x697EL)))))))) >= p_45.f0))
            { 
                uint8_t l_97 = 247UL;
                --l_97;
                (*l_81) ^= g_27;
            }
            else
            { 
                int32_t *l_100 = &g_82;
                int32_t *l_101[5];
                struct S1 *l_146 = &l_145;
                struct S1 *l_147 = &g_141[3][0][0];
                int16_t l_149[2][3];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_101[i] = &l_96;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_149[i][j] = (-3L);
                }
                ++g_102;
                if (g_80[0][2][0])
                    break;
                if ((safe_unary_minus_func_uint8_t_u(((p_45 , ((safe_lshift_func_int16_t_s_u(0x3F73L, 5)) || ((g_108 , &p_41) == (g_109 , (l_110 , (*g_90)))))) < (*p_43)))))
                { 
                    uint64_t *l_122 = (void*)0;
                    uint64_t *l_123 = &g_77;
                    uint64_t *l_124 = (void*)0;
                    uint64_t *l_125 = &g_2;
                    union U2 **l_128 = &l_126;
                    int32_t l_133[2];
                    struct S1 *l_139 = &g_138;
                    struct S1 *l_140 = &g_141[5][0][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_133[i] = (-1L);
                    (*l_100) = (safe_mod_func_int8_t_s_s(((18446744073709551615UL < l_113) <= (safe_rshift_func_int8_t_s_u((g_116 == &g_117), g_109.f1))), (safe_add_func_uint64_t_u_u(((*l_125) = ((*l_123) &= ((safe_mod_func_uint64_t_u_u(l_96, p_42)) > 0x00E36C3AAFF43A56LL))), g_109.f0))));
                    (*l_128) = l_126;
                    g_135++;
                    if (p_45.f1)
                        continue;
                    (*l_140) = ((*l_139) = g_138);
                }
                else
                { 
                    struct S1 *l_143 = &l_142;
                    (*l_143) = l_142;
                }
                (*l_147) = ((*l_146) = (g_144 , l_145));
                for (g_2 = 0; (g_2 <= 0); g_2 += 1)
                { 
                    int32_t *l_153 = (void*)0;
                    --g_150;
                    g_154 = l_153;
                }
            }
            for (g_144.f0 = 0; (g_144.f0 <= 0); g_144.f0 += 1)
            { 
                int32_t *l_165[5][5][1] = {{{&l_129[0]},{(void*)0},{&l_129[0]},{(void*)0},{&l_129[0]}},{{(void*)0},{&l_129[0]},{(void*)0},{&l_129[0]},{(void*)0}},{{&l_129[0]},{(void*)0},{&l_129[0]},{(void*)0},{&l_129[0]}},{{(void*)0},{&l_129[0]},{(void*)0},{&l_129[0]},{(void*)0}},{{&l_129[0]},{(void*)0},{&l_129[0]},{(void*)0},{&l_129[0]}}};
                struct S1 *l_175 = &l_145;
                int i, j, k;
                for (l_110.f0 = 0; (l_110.f0 >= 0); l_110.f0 -= 1)
                { 
                    int16_t l_163[5];
                    int32_t l_164 = 0x76208AC8L;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_163[i] = 0xD359L;
                    (*l_69) = &g_4[3][0];
                    (*l_81) = 0xA3100108L;
                    l_164 ^= (safe_mod_func_int16_t_s_s(((****l_93) = (((*l_81) && p_42) > ((g_109.f0 >= (safe_mod_func_uint8_t_u_u(((*g_116) ^ (((*l_68) == (safe_mul_func_int16_t_s_s((g_109.f2 & (((g_80[(g_79 + 1)][l_110.f0][l_110.f0] = l_163[2]) & l_96) >= (*g_92))), l_132))) == 3UL)), p_45.f1))) ^ 0x39L))), 0xD07FL));
                    return &g_82;
                }
                ++g_171;
                l_176 = ((*l_175) = l_174);
            }
        }
        for (p_45.f0 = 0; (p_45.f0 <= 0); p_45.f0 += 1)
        { 
            int64_t ***l_180 = &l_179;
            int8_t l_183 = 0L;
            int32_t *l_184 = &l_131;
            int32_t l_198 = 0x77ABB6E0L;
            int16_t l_212 = (-2L);
            int64_t l_213[2][1][2];
            int32_t l_214 = 0x9D39CA9CL;
            int32_t l_215[4][3];
            struct S1 *l_239[7][3] = {{&l_142,(void*)0,(void*)0},{&l_174,&g_141[0][1][0],&l_142},{&l_142,&g_138,&l_142},{(void*)0,&l_174,&l_142},{(void*)0,(void*)0,(void*)0},{&g_138,&l_174,&l_174},{(void*)0,&g_138,&l_176}};
            union U2 * const *l_248[4];
            union U3 *l_254[1];
            int8_t *l_261[6];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_213[i][j][k] = (-8L);
                }
            }
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                    l_215[i][j] = (-4L);
            }
            for (i = 0; i < 4; i++)
                l_248[i] = &l_126;
            for (i = 0; i < 1; i++)
                l_254[i] = &g_50;
            for (i = 0; i < 6; i++)
                l_261[i] = &l_183;
            if (((*l_184) ^= ((*g_116) >= ((safe_rshift_func_int8_t_s_u(0x4BL, ((-7L) ^ (((*l_180) = l_179) != &l_58[2][0][0])))) | ((safe_mul_func_uint8_t_u_u((p_45 , (l_183 == g_141[5][0][0].f0)), (*g_116))) & (*l_81))))))
            { 
                union U3 l_191 = {-1L};
                int32_t l_202 = 0x437D32D8L;
                int32_t l_203 = 0xBA8DA92CL;
                int32_t l_204[6] = {0xCF41E0E3L,0L,0L,0xCF41E0E3L,0L,0L};
                int i;
                if (((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(((g_109.f3 && ((safe_add_func_int64_t_s_s((l_191 , g_80[0][2][0]), (g_144.f2 |= (g_50.f0 = p_44)))) && (safe_add_func_int32_t_s_s((0x8711E2EAL == ((((**g_91) ^ 0xF10AL) & (*l_184)) != p_45.f0)), g_127.f0)))) || 0x5AC2L), (*g_116))) , (*l_184)), 0)) ^ g_109.f1))
                { 
                    int32_t *l_194 = &l_129[0];
                    int32_t *l_195 = &l_130;
                    int32_t *l_196 = (void*)0;
                    int32_t *l_197 = &l_129[0];
                    int32_t *l_199 = &l_131;
                    int32_t *l_200 = &l_129[1];
                    int32_t *l_201[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_201[i] = &l_131;
                    g_205--;
                }
                else
                { 
                    int32_t *l_208 = &l_202;
                    int32_t l_209 = 0xDBEAE758L;
                    int32_t *l_210 = &l_198;
                    int32_t *l_211[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_211[i] = &l_203;
                    g_216--;
                }
            }
            else
            { 
                union U6 l_219 = {0x321409A7C3C3C14CLL};
                (*l_69) = &l_198;
                (*l_81) = (l_219 , (((safe_add_func_uint16_t_u_u((~(((l_223 == ((l_224 , (0xF9L <= ((*l_68) = ((safe_mod_func_int64_t_s_s(0xB299F902AB11CDFFLL, (safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(p_44, (p_44 <= p_45.f1))) & g_80[2][4][0]), 7UL)))) && (*l_81))))) <= (*g_92))) && g_4[3][0]) , 0xB2L)), (**g_91))) & 0xCBA6210C82DC3F19LL) | 0L));
                if (p_42)
                { 
                    union U3 l_231 = {-1L};
                    uint16_t *l_232 = &g_135;
                    uint64_t *l_236 = &g_77;
                    uint64_t *l_250 = &l_75;
                    (*l_68) = ((((((((l_231 , ((g_109 , (--(*l_232))) ^ (**g_91))) >= (*l_184)) != ((((safe_unary_minus_func_uint64_t_u((--(*l_236)))) & ((*l_250) = (l_239[0][2] == ((safe_div_func_int64_t_s_s((((((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((((*p_43) = (safe_mod_func_int16_t_s_s((l_248[3] == (void*)0), (*p_43)))) != (*g_92)) & p_44), (*l_81))), p_45.f0)) | g_50.f2) >= p_44) != l_219.f1) != l_249), g_144.f0)) , &l_174)))) ^ (*l_68)) < g_108.f0)) >= g_127.f0) <= p_44) < l_231.f2) <= 0x4B161C8CL) != (*g_116));
                }
                else
                { 
                    union U3 *l_252 = &l_224;
                    union U3 **l_251 = &l_252;
                    (*l_251) = &g_50;
                }
            }
            (*l_81) &= p_45.f0;
            (*l_81) &= ((*l_184) = (((((void*)0 != l_253) , l_254[0]) == &g_50) <= (safe_sub_func_int64_t_s_s((((l_257[2] == &p_45) , (safe_lshift_func_int8_t_s_s(((l_262 = ((l_260 , l_78) == (void*)0)) ^ 0x1EL), 2))) || p_42), p_45.f0))));
            for (g_169 = 0; (g_169 >= 0); g_169 -= 1)
            { 
                uint32_t l_268 = 0x20ECA3B4L;
                int32_t l_277 = 2L;
                l_174 = g_141[5][0][0];
                if ((*l_81))
                { 
                    int32_t *l_263 = &l_131;
                    int32_t *l_264 = &l_129[0];
                    int32_t *l_265 = &l_131;
                    int32_t *l_266 = &l_129[0];
                    int32_t *l_267 = (void*)0;
                    ++l_268;
                    return l_267;
                }
                else
                { 
                    int64_t l_271 = 0x84CE0FD16B3F67B5LL;
                    uint16_t *l_299 = &g_135;
                    int32_t *l_301 = &g_82;
                    l_271 = (-5L);
                    (*l_81) |= (((*g_92) &= (((*l_78) = ((3L >= ((((safe_unary_minus_func_uint64_t_u(0xB1FB3CEA2D98C830LL)) ^ ((void*)0 == g_273)) != (((*g_273) <= ((safe_add_func_int8_t_s_s(((l_277 &= (g_144.f0 ^= (~p_45.f0))) ^ (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((p_45.f1 || p_42), 0)), (*l_184))), g_135))), p_45.f1)) < g_171)) | l_284)) != p_45.f1)) ^ g_80[0][2][0])) | g_80[1][4][0])) > 0xB90DL);
                    (*l_69) = ((safe_mul_func_int8_t_s_s((((g_287 , g_141[1][0][0]) , (safe_div_func_int16_t_s_s(0xAD30L, (safe_add_func_uint32_t_u_u(((+(safe_add_func_int16_t_s_s(((p_42 , 0x3B47060A9B02A3C4LL) | ((((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_299) = g_109.f1), 6)), p_42)) > l_268) | 1UL) < 0xDEL)), 2L))) >= l_268), 0xE4668FE1L))))) < l_300), l_277)) , l_301);
                    if (p_45.f0)
                        break;
                }
                for (l_268 = 0; (l_268 <= 0); l_268 += 1)
                { 
                    return &g_82;
                }
            }
        }
    }
    else
    { 
        struct S0 l_315 = {0,36,36,-2};
        struct S1 *l_321 = &g_141[6][0][0];
lbl_322:
        (*g_154) = (safe_sub_func_uint32_t_u_u(1UL, ((+(+(((&p_42 != (*l_59)) < (safe_add_func_int8_t_s_s((p_45.f1 & (safe_add_func_int16_t_s_s(l_310, (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((***g_90) = ((*g_116) ^ ((l_315 , (-1L)) <= l_315.f3))), 4)), g_127.f1))))), (-1L)))) | p_42))) && 0x9EC09B07L)));
        (*g_154) ^= (((safe_sub_func_uint16_t_u_u((((*l_69) = (*l_69)) == &l_129[0]), (((safe_mul_func_uint8_t_u_u(1UL, 0x20L)) < (+((4294967293UL > (((*p_41) = (-7L)) , (((void*)0 != l_321) & g_50.f0))) || p_45.f1))) , l_176.f0))) == p_45.f0) <= l_315.f3);
        if (g_216)
            goto lbl_322;
        (*l_69) = (*l_69);
    }
    for (p_42 = 0; (p_42 <= 0); p_42 += 1)
    { 
        uint32_t l_332 = 1UL;
        int64_t ** const *l_351 = &l_59;
        struct S0 l_382 = {-0,497,37,-10};
        int16_t *** const *l_417 = &g_90;
        uint32_t *l_432 = &g_127.f0;
        int32_t **l_433 = &l_68;
        int32_t l_459 = 0x09D9579AL;
        int32_t l_460 = 0x5A2D3889L;
        int32_t l_461[7];
        int16_t l_462[6][6] = {{1L,0x0ED8L,0x0ED8L,1L,0x10DFL,0L},{0x21F2L,0x0ED8L,0x10DFL,0x21F2L,0x10DFL,0x0ED8L},{0L,0x0ED8L,0L,0L,0x10DFL,0x10DFL},{1L,0x0ED8L,0x0ED8L,1L,0x10DFL,0L},{0x21F2L,0x0ED8L,0x10DFL,0x21F2L,0x10DFL,0x0ED8L},{0L,0x0ED8L,0L,0L,0x10DFL,0x10DFL}};
        union U5 l_486 = {1UL};
        int32_t l_521 = 0xCC8058C4L;
        int32_t *l_522 = &g_4[2][2];
        int16_t ** const *l_533 = (void*)0;
        int16_t ** const **l_532 = &l_533;
        struct S1 l_550 = {299};
        int32_t *l_561 = &l_461[5];
        uint64_t l_597 = 18446744073709551611UL;
        const union U3 *l_621 = &l_340[2][0];
        const union U3 **l_620 = &l_621;
        const union U3 ***l_619 = &l_620;
        const union U6 *l_626[2][7][2] = {{{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144}},{{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144},{&g_144,&g_144}}};
        int16_t *****l_667 = &g_666;
        int8_t l_731 = 9L;
        struct S0 l_737[4][7][5] = {{{{0,414,-14,14},{-0,379,2,-0},{0,187,11,-11},{0,76,-55,14},{0,76,-55,14}},{{0,76,-55,14},{0,508,61,11},{0,76,-55,14},{0,290,51,-0},{-0,251,-24,-2}},{{0,187,11,-11},{-0,379,2,-0},{0,414,-14,14},{0,119,-6,-8},{-0,251,-24,-2}},{{-0,168,24,14},{-0,506,-39,12},{-0,506,-39,12},{-0,168,24,14},{0,76,-55,14}},{{-0,52,-19,-9},{-0,168,24,14},{0,414,-14,14},{-0,251,-24,-2},{-0,379,2,-0}},{{-0,52,-19,-9},{0,414,-14,14},{0,76,-55,14},{0,414,-14,14},{-0,52,-19,-9}},{{-0,168,24,14},{0,119,-6,-8},{0,187,11,-11},{-0,251,-24,-2},{-0,506,-39,12}}},{{{0,187,11,-11},{0,119,-6,-8},{-0,168,24,14},{-0,168,24,14},{0,119,-6,-8}},{{0,76,-55,14},{0,414,-14,14},{-0,52,-19,-9},{0,119,-6,-8},{-0,506,-39,12}},{{0,414,-14,14},{-0,168,24,14},{-0,52,-19,-9},{0,290,51,-0},{-0,52,-19,-9}},{{-0,506,-39,12},{0,290,51,-0},{-0,506,-39,12},{0,119,-6,-8},{-0,52,-19,-9}},{{0,508,61,11},{-0,52,-19,-9},{0,76,-55,14},{0,119,-6,-8},{0,119,-6,-8}},{{0,119,-6,-8},{-0,251,-24,-2},{0,119,-6,-8},{0,414,-14,14},{-0,379,2,-0}},{{0,76,-55,14},{-0,52,-19,-9},{0,508,61,11},{-0,168,24,14},{-0,379,2,-0}}},{{{-0,506,-39,12},{0,290,51,-0},{0,290,51,-0},{-0,506,-39,12},{0,119,-6,-8}},{{0,187,11,-11},{-0,506,-39,12},{0,508,61,11},{-0,379,2,-0},{-0,52,-19,-9}},{{0,187,11,-11},{0,508,61,11},{0,119,-6,-8},{0,508,61,11},{0,187,11,-11}},{{-0,506,-39,12},{-0,168,24,14},{0,76,-55,14},{-0,379,2,-0},{0,290,51,-0}},{{0,76,-55,14},{-0,168,24,14},{-0,506,-39,12},{-0,506,-39,12},{-0,168,24,14}},{{0,119,-6,-8},{0,508,61,11},{0,187,11,-11},{-0,168,24,14},{0,290,51,-0}},{{0,508,61,11},{-0,506,-39,12},{0,187,11,-11},{0,414,-14,14},{0,187,11,-11}}},{{{0,290,51,-0},{0,290,51,-0},{-0,506,-39,12},{0,119,-6,-8},{-0,52,-19,-9}},{{0,508,61,11},{-0,52,-19,-9},{0,76,-55,14},{0,119,-6,-8},{0,119,-6,-8}},{{0,119,-6,-8},{-0,251,-24,-2},{0,119,-6,-8},{0,414,-14,14},{-0,379,2,-0}},{{0,76,-55,14},{-0,52,-19,-9},{0,508,61,11},{-0,168,24,14},{-0,379,2,-0}},{{-0,506,-39,12},{0,290,51,-0},{0,290,51,-0},{-0,506,-39,12},{0,119,-6,-8}},{{0,187,11,-11},{-0,506,-39,12},{0,508,61,11},{-0,379,2,-0},{-0,52,-19,-9}},{{0,187,11,-11},{0,508,61,11},{0,119,-6,-8},{0,508,61,11},{0,187,11,-11}}}};
        int8_t l_766[3][1][7] = {{{3L,3L,3L,3L,3L,3L,3L}},{{0x3BL,0xC7L,0x3BL,0xC7L,0x3BL,0xC7L,0x3BL}},{{3L,3L,3L,3L,3L,3L,3L}}};
        int32_t *l_812 = (void*)0;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_461[i] = 0xE4678E7FL;
    }
    l_815 = (l_814 = l_814);
    ++l_818;
    (*l_823) = l_821;
    return l_824;
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_80[i][j][k], "g_80[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_141[i][j][k].f0, "g_141[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_144.f2, "g_144.f2", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_287.f0, "g_287.f0", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_604.f0, "g_604.f0", print_hash_value);
    transparent_crc(g_604.f1, "g_604.f1", print_hash_value);
    transparent_crc(g_604.f2, "g_604.f2", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_963, "g_963", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1056.f0, "g_1056.f0", print_hash_value);
    transparent_crc(g_1056.f1, "g_1056.f1", print_hash_value);
    transparent_crc(g_1056.f2, "g_1056.f2", print_hash_value);
    transparent_crc(g_1056.f3, "g_1056.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1095[i][j], "g_1095[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1244.f0, "g_1244.f0", print_hash_value);
    transparent_crc(g_1244.f1, "g_1244.f1", print_hash_value);
    transparent_crc(g_1244.f2, "g_1244.f2", print_hash_value);
    transparent_crc(g_1244.f3, "g_1244.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1253[i][j][k], "g_1253[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1327, "g_1327", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1372[i][j], "g_1372[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1466[i], "g_1466[i]", print_hash_value);

    }
    transparent_crc(g_1589, "g_1589", print_hash_value);
    transparent_crc(g_1615.f0, "g_1615.f0", print_hash_value);
    transparent_crc(g_1615.f1, "g_1615.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1649[i][j][k], "g_1649[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1789[i], "g_1789[i]", print_hash_value);

    }
    transparent_crc(g_1934.f0, "g_1934.f0", print_hash_value);
    transparent_crc(g_1934.f1, "g_1934.f1", print_hash_value);
    transparent_crc(g_1934.f2, "g_1934.f2", print_hash_value);
    transparent_crc(g_2129, "g_2129", print_hash_value);
    transparent_crc(g_2287.f0, "g_2287.f0", print_hash_value);
    transparent_crc(g_2287.f1, "g_2287.f1", print_hash_value);
    transparent_crc(g_2314, "g_2314", print_hash_value);
    transparent_crc(g_2486, "g_2486", print_hash_value);
    transparent_crc(g_2520, "g_2520", print_hash_value);
    transparent_crc(g_2527, "g_2527", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
