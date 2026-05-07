// SPDX-License-Identifier: MIT
// cctest_csmith_4f71e6ee.c --- cctest case csmith_4f71e6ee (csmith seed 1332864750)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfb5641c8 */

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

// Options:   -s 1332864750 -o /tmp/csmith_gen_oxoc1gzn/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   signed f1 : 2;
   signed f2 : 14;
   unsigned f3 : 24;
   unsigned f4 : 29;
   const signed f5 : 21;
   signed f6 : 2;
   unsigned f7 : 19;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
   int32_t  f1;
};

union U2 {
   uint32_t  f0;
   const int8_t * const  f1;
   int64_t  f2;
   const int64_t  f3;
   int8_t * f4;
};

union U3 {
   uint64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int32_t  f3;
   uint16_t  f4;
};

union U4 {
   unsigned f0 : 15;
   int8_t  f1;
   int8_t  f2;
};


static int32_t g_3 = 8L;
static int8_t g_7 = 0L;
static int8_t *g_6 = &g_7;
static int32_t g_9 = 0x4A8FE243L;
static uint64_t g_10 = 18446744073709551614UL;
static uint64_t g_16 = 1UL;
static const union U1 g_41 = {0};
static const union U3 g_51 = {0UL};
static int32_t g_67 = (-1L);
static uint8_t g_90[2][2] = {{0xE4L,0xE4L},{0xE4L,0xE4L}};
static uint64_t g_92 = 18446744073709551615UL;
static uint32_t g_104[6][7] = {{0x2579B7B7L,0x2579B7B7L,0x137C5FD5L,0x2579B7B7L,0x2579B7B7L,0x137C5FD5L,0x2579B7B7L},{0x691A67D5L,4294967286UL,0x84D564CEL,1UL,0x84D564CEL,4294967286UL,0x691A67D5L},{0x28B7FD9BL,0x2579B7B7L,0x28B7FD9BL,0x28B7FD9BL,0x2579B7B7L,0x28B7FD9BL,0x28B7FD9BL},{0x691A67D5L,1UL,0x069C78C3L,1UL,0x691A67D5L,0x4EA093EAL,0x691A67D5L},{0x2579B7B7L,0x28B7FD9BL,0x28B7FD9BL,0x2579B7B7L,0x28B7FD9BL,0x28B7FD9BL,0x2579B7B7L},{0x84D564CEL,1UL,0x84D564CEL,4294967286UL,0x691A67D5L,4294967286UL,0x84D564CEL}};
static int16_t g_121 = (-1L);
static uint32_t g_124 = 18446744073709551613UL;
static int8_t g_131 = 0x79L;
static int64_t g_135 = 0x76BB48C356ED06C0LL;
static int8_t g_136 = 9L;
static int32_t g_138 = 0L;
static uint64_t g_141[7] = {0x7F04C0B57B2B2917LL,0x7F04C0B57B2B2917LL,0x7F04C0B57B2B2917LL,0x7F04C0B57B2B2917LL,0x7F04C0B57B2B2917LL,0x7F04C0B57B2B2917LL,0x7F04C0B57B2B2917LL};
static int64_t g_171 = 0xC0090DE99574A338LL;
static uint64_t g_174 = 0xE7C8CA683B8F37F1LL;
static union U2 g_182[7] = {{0x5C213928L},{0x5C213928L},{0x5C213928L},{0x5C213928L},{0x5C213928L},{0x5C213928L},{0x5C213928L}};
static uint16_t g_213[4] = {0xB8BFL,0xB8BFL,0xB8BFL,0xB8BFL};
static union U4 g_246 = {0UL};
static const uint32_t g_288 = 4294967288UL;
static const uint32_t g_290 = 0x30D747A7L;
static const int8_t *g_294 = &g_131;
static const int8_t * const *g_293 = &g_294;
static struct S0 g_302 = {0x9FC42630L,0,119,176,17370,-578,-0,565};
static int8_t g_365 = 2L;
static int16_t g_366 = 0x43E4L;
static uint16_t g_367[7][1][6] = {{{5UL,0x4E4AL,1UL,6UL,0x0903L,6UL}},{{0UL,65535UL,0UL,0x20B8L,0UL,0x4E4AL}},{{0xEA7FL,65535UL,65527UL,0x1C68L,0xA4F5L,0UL}},{{1UL,6UL,0x20B8L,0x1C68L,0x1C68L,0x20B8L}},{{0xEA7FL,0xEA7FL,65535UL,0x20B8L,65527UL,0UL}},{{0UL,0x0903L,0xEA7FL,6UL,65535UL,65535UL}},{{5UL,0UL,0xEA7FL,1UL,0xEA7FL,0UL}}};
static uint64_t *g_402 = &g_10;
static uint64_t **g_401 = &g_402;
static uint64_t ***g_400 = &g_401;
static uint32_t *g_412 = (void*)0;
static int16_t g_418[5] = {0x5082L,0x5082L,0x5082L,0x5082L,0x5082L};
static uint16_t g_419 = 1UL;
static int16_t g_429[1][4] = {{0x84A0L,0x84A0L,0x84A0L,0x84A0L}};
static int16_t g_430 = 7L;
static int16_t g_431 = 4L;
static uint64_t g_432 = 1UL;
static int32_t *g_462[1][5][7] = {{{(void*)0,(void*)0,&g_9,&g_9,&g_9,&g_9,(void*)0},{&g_67,&g_9,&g_3,&g_3,&g_3,&g_3,&g_9},{(void*)0,(void*)0,&g_9,&g_9,&g_9,&g_9,(void*)0},{&g_67,&g_9,&g_3,&g_3,&g_3,&g_3,&g_9},{(void*)0,(void*)0,&g_9,&g_9,&g_9,&g_9,(void*)0}}};
static int32_t **g_461[5][1] = {{&g_462[0][1][2]},{&g_462[0][1][2]},{&g_462[0][1][2]},{&g_462[0][1][2]},{&g_462[0][1][2]}};
static int16_t *g_489 = &g_429[0][0];
static int16_t ** const g_488[5][7][7] = {{{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489}},{{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489}},{{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489}},{{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489}},{{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489},{&g_489,&g_489,&g_489,&g_489,&g_489,&g_489,&g_489}}};
static int8_t g_532 = 0x2EL;
static int32_t g_567 = (-1L);
static uint8_t g_677 = 0x23L;
static const uint8_t g_844 = 0UL;
static const uint64_t *g_850 = &g_432;
static const uint64_t **g_849[2][2] = {{&g_850,&g_850},{&g_850,&g_850}};
static const union U4 *g_894 = &g_246;
static uint8_t *g_954 = &g_90[0][1];
static uint8_t **g_953[6] = {&g_954,&g_954,&g_954,&g_954,&g_954,&g_954};
static uint16_t *g_980[4] = {&g_213[0],&g_213[0],&g_213[0],&g_213[0]};
static uint16_t **g_979 = &g_980[0];
static int16_t *g_1004 = &g_429[0][2];
static union U1 g_1006 = {0};
static union U3 g_1007 = {0x0C8797FAEB404B02LL};
static uint16_t g_1008 = 0x44BBL;
static uint16_t g_1009 = 0x3B5EL;
static int8_t g_1079 = (-1L);
static int16_t **g_1095 = (void*)0;
static uint32_t * const *g_1106 = &g_412;
static uint32_t * const **g_1105 = &g_1106;
static uint32_t * const ***g_1104 = &g_1105;



static uint16_t  func_1(void);
static int32_t  func_4(int8_t * p_5);
static int8_t ** func_20(union U2  p_21, int32_t * p_22, int8_t ** const  p_23, int8_t ** p_24, const uint8_t  p_25);
static int8_t ** const  func_27(int8_t * const  p_28, int64_t  p_29);
static int8_t * func_30(union U3  p_31, struct S0  p_32, int8_t ** p_33, int8_t ** const  p_34);
static union U3  func_35(const union U1  p_36, union U1  p_37, union U4  p_38, int32_t * p_39, const union U3  p_40);
static union U4  func_42(int8_t * p_43, union U3  p_44, uint32_t  p_45);
static int32_t * func_56(union U2  p_57, const int8_t * const * p_58, int8_t * const * p_59, union U2  p_60, int8_t ** p_61);




static uint16_t  func_1(void)
{ 
    int8_t l_2[2][3] = {{0x3CL,(-1L),0x3CL},{0x3CL,(-1L),0x3CL}};
    int32_t l_1010 = 5L;
    int16_t l_1016 = 0xCD08L;
    uint16_t l_1051 = 65535UL;
    int16_t l_1078 = 0L;
    int8_t *** const l_1082 = (void*)0;
    int8_t **l_1089[7][7] = {{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{(void*)0,&g_6,(void*)0,&g_6,(void*)0,&g_6,(void*)0},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{(void*)0,&g_6,(void*)0,&g_6,(void*)0,&g_6,(void*)0},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6},{(void*)0,&g_6,(void*)0,&g_6,(void*)0,&g_6,(void*)0},{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}};
    int i, j;
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        int32_t l_1014 = 0x8E9F7540L;
        int32_t **l_1022 = &g_462[0][1][2];
        uint32_t *l_1029[6][7] = {{&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]},{(void*)0,&g_104[5][0],&g_104[1][0],&g_104[5][0],(void*)0,(void*)0,&g_104[5][0]},{&g_104[2][1],&g_104[1][0],&g_104[2][1],&g_104[1][0],&g_104[1][0],&g_104[2][1],&g_104[1][0]},{&g_104[5][0],(void*)0,&g_104[1][0],&g_104[1][0],(void*)0,&g_104[5][0],(void*)0},{&g_104[2][1],&g_104[1][0],&g_104[1][0],&g_104[2][1],&g_104[1][0],&g_104[2][1],&g_104[1][0]},{(void*)0,(void*)0,&g_104[5][0],&g_104[1][0],&g_104[5][0],(void*)0,(void*)0}};
        int32_t *l_1047 = &g_567;
        int32_t **l_1046 = &l_1047;
        uint16_t l_1050 = 4UL;
        int32_t *l_1052 = &g_67;
        union U1 l_1053 = {0};
        union U1 *l_1054 = &l_1053;
        uint8_t l_1057 = 0x16L;
        int64_t *l_1068 = &g_135;
        const union U4 **l_1071 = &g_894;
        int i, j;
        if ((l_1010 = func_4(g_6)))
        { 
            int32_t *l_1011 = &g_1006.f1;
            int32_t ***l_1013[1][3];
            int32_t ****l_1012 = &l_1013[0][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1013[i][j] = &g_461[4][0];
            }
            (*l_1011) = l_2[0][2];
            (*l_1011) = 0x3AE9F860L;
            (*l_1012) = &g_461[1][0];
            return l_1014;
        }
        else
        { 
            uint16_t l_1019 = 0x0661L;
            for (g_9 = 0; (g_9 <= 0); g_9 += 1)
            { 
                int32_t l_1015 = 0x2FABE782L;
                int i, j;
                for (g_532 = 0; (g_532 <= 5); g_532 += 1)
                { 
                    int32_t *l_1017 = &g_67;
                    int32_t *l_1018[6] = {&g_1006.f1,&g_1006.f1,&l_1010,&g_1006.f1,&g_1006.f1,&l_1010};
                    int i;
                    l_1019++;
                }
                return l_2[g_3][(g_3 + 1)];
            }
        }
        (*l_1022) = &l_1010;
        if (l_1016)
            break;
        (*l_1052) |= (((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((g_302.f7 ^= l_1016) ^ ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((*g_6), (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x96L, (safe_mul_func_uint8_t_u_u((l_1046 == &l_1047), (((safe_unary_minus_func_uint32_t_u((~(*g_294)))) ^ l_1014) ^ l_1050))))), 10)), (*g_294))) | (*g_489)))), 0x85B96A72L)))), (**g_293))) , l_1050)), l_1051)), 0x68L)), 4)) == 9L) | l_1016);
        (*l_1052) = ((((*l_1054) = l_1053) , ((safe_sub_func_uint16_t_u_u(l_1057, (safe_rshift_func_int8_t_s_u((((((safe_add_func_int8_t_s_s((g_302 , ((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((*g_402), (((*l_1068) = (((*g_850) & g_844) , (((safe_add_func_int64_t_s_s(g_67, 0xF6494C6F8503B830LL)) <= g_121) >= (*l_1052)))) > (**g_401)))), l_1016)) | (*l_1052))), l_2[0][2])) > 0x376C5D23L) > l_1010) , 0x329C5EF0D0EFCC73LL) && (*l_1052)), l_1051)))) < l_1016)) != (*l_1052));
        for (g_10 = 0; (g_10 <= 1); g_10 += 1)
        { 
            int64_t l_1073 = 0x1531AB99F77A192DLL;
            union U2 l_1085 = {0UL};
            const int8_t * const *l_1086 = &g_294;
            int32_t *l_1087[4][5][4] = {{{&l_1014,&g_9,&l_1014,&l_1010},{(void*)0,&l_1014,(void*)0,&g_9},{(void*)0,(void*)0,(void*)0,&g_1007.f3},{(void*)0,(void*)0,&l_1014,&l_1010},{&l_1014,&g_1007.f3,&l_1010,(void*)0}},{{&l_1010,(void*)0,(void*)0,&l_1010},{&g_1007.f3,&l_1014,&l_1010,&l_1014},{(void*)0,&l_1014,&g_1007.f3,(void*)0},{&g_1007.f3,(void*)0,&g_9,(void*)0},{&g_1007.f3,&l_1014,&l_1010,&l_1014}},{{&l_1014,&l_1014,(void*)0,&l_1010},{(void*)0,(void*)0,&g_3,(void*)0},{(void*)0,&g_1007.f3,&g_9,&l_1010},{&g_9,(void*)0,&l_1014,&g_1007.f3},{&g_9,(void*)0,&l_1010,&g_9}},{{&g_9,&l_1014,&l_1014,&l_1010},{&g_9,&g_9,&g_9,(void*)0},{(void*)0,(void*)0,&g_3,&g_3},{(void*)0,(void*)0,(void*)0,&g_9},{&l_1014,&g_1007.f3,&l_1010,&l_1014}}};
            int16_t **l_1093 = &g_489;
            int i, j, k;
            for (g_567 = 1; (g_567 >= 0); g_567 -= 1)
            { 
                int32_t l_1090 = (-2L);
                int16_t ***l_1094[1][7] = {{&l_1093,&l_1093,&l_1093,&l_1093,&l_1093,&l_1093,&l_1093}};
                int i, j;
                (*l_1052) = (((((safe_lshift_func_uint8_t_u_u(((void*)0 == l_1071), 0)) , (l_2[g_10][g_3] >= l_2[g_10][g_3])) < (~(l_1073 <= (0x02L && (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((**g_293), l_1078)), 8)))))) | g_1079) <= (*l_1052));
                for (g_124 = 0; (g_124 <= 1); g_124 += 1)
                { 
                    union U2 l_1088 = {0xA69B0AEFL};
                    l_1090 |= (safe_sub_func_uint32_t_u_u(((void*)0 != l_1082), ((&g_290 == (((*g_954)--) , func_56(l_1085, l_1086, func_20(l_1085, l_1087[1][1][3], &g_6, &g_6, l_2[g_10][g_3]), l_1088, l_1089[1][6]))) , l_2[0][1])));
                }
                (*l_1052) ^= (0UL | (safe_mod_func_int8_t_s_s((&g_489 == (g_1095 = l_1093)), (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(65535UL, (-7L))) | ((((((l_2[g_3][(g_10 + 1)] = 0x88L) || (l_1010 = ((l_1090 , (void*)0) != g_1104))) && 0x95L) >= 0L) == 0x79L) , 0xB6B9L)), l_1090)))));
            }
            if ((*l_1052))
            { 
                if (l_2[1][1])
                    break;
            }
            else
            { 
                return l_1010;
            }
            l_1010 ^= (safe_div_func_int16_t_s_s(((*g_1004) |= (((((g_1006 , g_51) , ((6L == (g_135 |= (g_302 , ((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u((-1L), ((-7L) == (((safe_lshift_func_uint8_t_u_u((*l_1052), l_1078)) , 0xDB22L) || 1UL)))) != l_2[1][1]) != 18446744073709551612UL), 15)) & (*l_1052))))) == 0x5985DA1FL)) , (void*)0) == &g_488[1][6][3]) < 0x77283AE6L)), (*l_1052)));
        }
    }
    return (**g_979);
}



static int32_t  func_4(int8_t * p_5)
{ 
    int32_t *l_8[3];
    union U3 l_47 = {0x40DE197B2C3CC8C9LL};
    int8_t **l_372 = &g_6;
    int8_t **l_733[1][1][7] = {{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}}};
    union U4 **l_924[4];
    union U4 *l_925 = &g_246;
    uint64_t *l_960 = (void*)0;
    union U2 l_966 = {0x3FCFED56L};
    union U1 l_978 = {0};
    uint8_t l_1002 = 0xD5L;
    int16_t *l_1003 = (void*)0;
    union U1 *l_1005 = &l_978;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_8[i] = &g_9;
    for (i = 0; i < 4; i++)
        l_924[i] = (void*)0;
    ++g_10;
    return g_1009;
}



static int8_t ** func_20(union U2  p_21, int32_t * p_22, int8_t ** const  p_23, int8_t ** p_24, const uint8_t  p_25)
{ 
    const uint32_t l_758 = 18446744073709551615UL;
    int8_t * const *l_769 = (void*)0;
    union U4 *l_779 = &g_246;
    uint16_t l_780 = 1UL;
    int32_t *l_785 = &g_3;
    int32_t l_794 = (-1L);
    union U3 l_827 = {9UL};
    uint64_t **l_848 = &g_402;
    uint64_t l_860[6][7][6] = {{{18446744073709551615UL,0x07E74559E12A3135LL,0x4BE006DB83436DB2LL,0x9DB4D38A561A65DELL,0x4BE006DB83436DB2LL,0x07E74559E12A3135LL},{18446744073709551615UL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL}},{{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL}},{{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL}},{{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL}},{{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x4BE006DB83436DB2LL,0UL,0x58E7985AD84CAC18LL,0x07E74559E12A3135LL,0x58E7985AD84CAC18LL,0UL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL}},{{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL},{0x58E7985AD84CAC18LL,0x9DB4D38A561A65DELL,18446744073709551615UL,0UL,18446744073709551615UL,0x9DB4D38A561A65DELL}}};
    union U1 l_887 = {0};
    uint32_t *l_896[7] = {&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]};
    int i, j, k;
    for (g_432 = 0; (g_432 != 35); g_432 = safe_add_func_int8_t_s_s(g_432, 7))
    { 
        union U3 l_745 = {0x78A0C35F48A2AD2CLL};
        uint32_t *l_757 = &g_104[1][0];
        int32_t l_759 = 4L;
        union U4 l_762 = {0xC3B21B82L};
        int8_t **l_770 = &g_6;
        uint8_t l_799[1];
        union U1 l_817 = {0};
        uint16_t *l_818 = &g_213[0];
        const uint64_t **l_829 = (void*)0;
        uint8_t * const l_847[3][2][1] = {{{(void*)0},{&g_90[0][0]}},{{&g_90[0][0]},{(void*)0}},{{&g_90[0][0]},{&g_90[0][0]}}};
        int32_t *l_921 = (void*)0;
        int32_t *l_922 = (void*)0;
        int32_t *l_923 = &l_817.f1;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_799[i] = 0xF5L;
    }
    return &g_6;
}



static int8_t ** const  func_27(int8_t * const  p_28, int64_t  p_29)
{ 
    uint64_t l_571 = 0UL;
    int32_t *l_572 = &g_9;
    int32_t l_605 = 0L;
    int32_t l_608 = 0xA35AA076L;
    int32_t l_609 = 7L;
    int32_t l_611 = 0xB8B53462L;
    int32_t l_613 = (-1L);
    int16_t l_616[7];
    int32_t l_619 = (-1L);
    int32_t l_620 = 0xBE8D3308L;
    int32_t l_621 = 0x27E5F1A6L;
    int32_t l_622[1][1];
    int32_t l_645 = (-3L);
    int8_t ** const l_653 = &g_6;
    uint32_t l_680 = 0x7DB40ABEL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_616[i] = 0xA222L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_622[i][j] = 1L;
    }
    (*l_572) = l_571;
lbl_672:
    for (g_131 = 9; (g_131 != (-21)); g_131 = safe_sub_func_int8_t_s_s(g_131, 5))
    { 
        int32_t l_589 = (-6L);
        int32_t l_614 = 0x33C2CC47L;
        int32_t l_617[1];
        uint32_t l_650 = 0UL;
        int i;
        for (i = 0; i < 1; i++)
            l_617[i] = 0x4D8FCD97L;
        for (g_124 = (-23); (g_124 >= 29); g_124 = safe_add_func_int16_t_s_s(g_124, 9))
        { 
            int32_t l_584 = 0x69F3E77BL;
            int32_t l_610 = (-1L);
            int32_t l_618[2];
            const int8_t * const *l_626 = (void*)0;
            int8_t l_646 = 0xF3L;
            int i;
            for (i = 0; i < 2; i++)
                l_618[i] = 0L;
            if ((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)), l_584)), 65535UL)) >= (((safe_sub_func_uint16_t_u_u(65526UL, (safe_div_func_int32_t_s_s(((void*)0 != &l_571), l_584)))) > l_589) ^ p_29)) || (*l_572)), 0)))
            { 
                int32_t l_594 = 6L;
                int16_t l_612[2][5][4] = {{{(-10L),0x4AECL,1L,1L},{0x4AECL,0xC728L,(-1L),0L},{1L,(-10L),1L,0L},{0xDE79L,0xC728L,0xDE79L,1L},{0L,0x4AECL,0xB63EL,0L}},{{1L,1L,1L,0x4AECL},{1L,0xC728L,1L,1L},{1L,1L,0xB63EL,0L},{0L,(-2L),0xDE79L,0x4AECL},{0xDE79L,0x4AECL,1L,0xDE79L}}};
                int32_t l_615[6][3][4] = {{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}},{{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}}};
                uint32_t l_623[6][4] = {{4294967292UL,4294967292UL,0xEB60026FL,4294967292UL},{4294967292UL,0x240BB241L,0x240BB241L,4294967292UL},{0x240BB241L,4294967292UL,0x240BB241L,0x240BB241L},{0x240BB241L,0x240BB241L,4294967292UL,0x240BB241L},{0x240BB241L,0xEB60026FL,0xEB60026FL,0x240BB241L},{0xEB60026FL,0x240BB241L,0xEB60026FL,0xEB60026FL}};
                int32_t *l_630 = &l_609;
                int i, j, k;
                for (g_365 = (-16); (g_365 > 18); g_365++)
                { 
                    int32_t *l_592 = &g_67;
                    int32_t *l_593 = (void*)0;
                    int32_t *l_595 = (void*)0;
                    int32_t l_596 = 0L;
                    int32_t *l_597 = &g_67;
                    int32_t *l_598 = (void*)0;
                    int32_t *l_599 = &g_67;
                    int32_t *l_600 = &g_9;
                    int32_t *l_601 = &g_67;
                    int32_t *l_602 = &g_9;
                    int32_t *l_603 = (void*)0;
                    int32_t *l_604 = (void*)0;
                    int32_t *l_606 = (void*)0;
                    int32_t *l_607[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    union U2 l_627 = {0x22A243F6L};
                    int8_t **l_628 = &g_6;
                    int32_t **l_629[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_629[i] = &l_593;
                    ++l_623[1][2];
                    l_630 = func_56(g_182[0], l_626, &g_6, l_627, l_628);
                    if ((*l_572))
                        continue;
                }
            }
            else
            { 
                int32_t l_634 = (-1L);
                int32_t l_635 = 0xBAE886F8L;
                int32_t l_636 = (-5L);
                int32_t l_637 = 0x008FD666L;
                int32_t l_638 = 0xDC86955EL;
                int32_t l_639 = 0L;
                int32_t l_640 = (-3L);
                int32_t l_641 = 0L;
                uint64_t l_642[1][5][6] = {{{0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL,0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL},{0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL,0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL},{0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL,0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL},{0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL,0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL},{0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL,0xCD6A3BBE9B1B0B05LL,0xCD6A3BBE9B1B0B05LL,0x7CE4A2A134EA43C5LL}}};
                int16_t l_647 = 0xDCF9L;
                int32_t l_649[1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_649[i][j] = 0x43C12EC5L;
                }
                for (l_571 = (-25); (l_571 < 5); l_571 = safe_add_func_int32_t_s_s(l_571, 5))
                { 
                    int32_t *l_633[1];
                    int64_t l_648[6][6][3] = {{{0L,0x98642E3398CCDBF0LL,(-1L)},{1L,1L,0xC3E9E2C7C4BA1C05LL},{1L,1L,(-1L)},{0L,1L,(-1L)},{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL},{0L,0x98642E3398CCDBF0LL,(-1L)}},{{1L,1L,0xC3E9E2C7C4BA1C05LL},{1L,1L,(-1L)},{0L,1L,(-1L)},{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL},{0L,0x98642E3398CCDBF0LL,(-1L)},{1L,1L,0xC3E9E2C7C4BA1C05LL}},{{1L,1L,(-1L)},{0L,1L,(-1L)},{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL},{0L,0x98642E3398CCDBF0LL,(-1L)},{1L,1L,0xC3E9E2C7C4BA1C05LL},{1L,1L,(-1L)}},{{0L,1L,(-1L)},{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL},{0L,0x98642E3398CCDBF0LL,(-1L)},{1L,1L,0xC3E9E2C7C4BA1C05LL},{1L,1L,(-1L)},{0L,1L,(-1L)}},{{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL},{0L,0x98642E3398CCDBF0LL,(-1L)},{1L,1L,0xC3E9E2C7C4BA1C05LL},{1L,1L,(-1L)},{0L,1L,(-1L)},{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL}},{{0L,0x98642E3398CCDBF0LL,(-1L)},{1L,1L,0xC3E9E2C7C4BA1C05LL},{1L,1L,(-1L)},{0L,1L,(-1L)},{1L,0x98642E3398CCDBF0LL,0xC3E9E2C7C4BA1C05LL},{0L,0x98642E3398CCDBF0LL,(-1L)}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_633[i] = (void*)0;
                    l_642[0][1][2]--;
                    --l_650;
                    return &g_6;
                }
            }
        }
        return l_653;
    }
    for (g_365 = 0; (g_365 != 9); g_365 = safe_add_func_int32_t_s_s(g_365, 9))
    { 
        uint64_t l_656 = 0xDE0B2B764FD860DDLL;
        const int64_t l_669 = 7L;
        int32_t l_676 = 0L;
        struct S0 *l_702 = (void*)0;
        struct S0 ** const l_701[6][2][5] = {{{&l_702,&l_702,&l_702,&l_702,&l_702},{&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702},{(void*)0,(void*)0,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702},{&l_702,&l_702,&l_702,&l_702,&l_702}},{{&l_702,&l_702,&l_702,&l_702,&l_702},{&l_702,&l_702,&l_702,&l_702,(void*)0}},{{&l_702,&l_702,&l_702,&l_702,&l_702},{&l_702,&l_702,&l_702,&l_702,&l_702}},{{(void*)0,(void*)0,&l_702,&l_702,&l_702},{&l_702,&l_702,&l_702,&l_702,&l_702}}};
        int32_t l_704 = 0x2030CB06L;
        int16_t l_705 = 0x78C9L;
        int16_t **l_723[4];
        uint32_t *l_724 = &g_104[1][0];
        uint32_t **l_725 = &l_724;
        uint32_t *l_727[6];
        uint32_t **l_726 = &l_727[4];
        uint32_t *l_729[7] = {&g_104[1][0],&g_104[1][0],&g_104[3][6],&g_104[1][0],&g_104[1][0],&g_104[3][6],&g_104[1][0]};
        uint32_t **l_728 = &l_729[5];
        int32_t *l_730 = &l_608;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_723[i] = &g_489;
        for (i = 0; i < 6; i++)
            l_727[i] = (void*)0;
        l_656 = (*l_572);
        for (g_432 = 7; (g_432 >= 27); g_432++)
        { 
            struct S0 l_665 = {18446744073709551614UL,-1,-97,2979,7368,400,-0,536};
            uint16_t l_668[6][6] = {{0x054CL,0x3147L,0x054CL,0x3147L,0x054CL,0x3147L},{0x054CL,0x3147L,0x054CL,0x3147L,0x054CL,0x3147L},{0x054CL,0x3147L,0x054CL,0x3147L,0x054CL,0x3147L},{0x054CL,0x3147L,0x054CL,0x3147L,0x054CL,0x3147L},{0x054CL,0x3147L,0x054CL,0x3147L,0x054CL,0x3147L},{0x054CL,0x3147L,0x054CL,0x3147L,0x054CL,0x3147L}};
            int32_t *l_696[2];
            int8_t **l_703[6] = {&g_6,&g_6,&g_6,&g_6,&g_6,&g_6};
            uint8_t *l_718 = &g_90[0][0];
            int i, j;
            for (i = 0; i < 2; i++)
                l_696[i] = &l_605;
            if ((((safe_mul_func_uint8_t_u_u(p_29, (safe_sub_func_uint8_t_u_u(g_51.f1, ((((*g_489) ^= (*l_572)) , ((safe_lshift_func_int16_t_s_u((l_665 , p_29), 12)) , (((((safe_sub_func_uint8_t_u_u((g_131 && (((0xD7A3D4A4083A771ALL != g_429[0][0]) <= 2UL) , p_29)), 0x8EL)) != 5UL) & l_668[5][5]) ^ g_429[0][0]) != 0x8E58L))) < l_669))))) == 9UL) ^ 0x37L))
            { 
                int8_t l_693 = 6L;
                for (g_171 = 23; (g_171 != (-9)); g_171 = safe_sub_func_int8_t_s_s(g_171, 4))
                { 
                    union U4 *l_673 = &g_246;
                    uint16_t *l_674 = (void*)0;
                    uint16_t *l_675 = &g_213[1];
                    uint32_t *l_685 = &g_104[1][0];
                    uint64_t l_692 = 0UL;
                    if (g_51.f1)
                        goto lbl_672;
                    (*l_572) ^= ((g_182[6].f0 ^ 4UL) & (g_302.f7 < (((*l_673) = g_246) , (l_676 = ((*l_675) = p_29)))));
                    l_676 ^= (g_677 || ((safe_rshift_func_uint16_t_u_u((l_680 == p_29), (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((0x602991CAL || ((*l_685) = 0xD0F8CBD6L)), (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s(p_29, (safe_mul_func_int8_t_s_s((**g_293), l_692)))) , 0xA348FC22L) || 9L), l_668[3][5])))) < 0xCC53D16DL), l_693)) != (*l_572)) >= p_29))) & 9L));
                    if (p_29)
                        break;
                }
            }
            else
            { 
                l_704 = ((p_29 <= (((((*l_572) > (2UL >= (((safe_add_func_uint32_t_u_u(0UL, (((&l_676 != l_696[1]) != (safe_rshift_func_int8_t_s_s(((l_676 |= ((safe_rshift_func_int16_t_s_s((g_365 || (*g_294)), 14)) && 0L)) >= p_29), l_669))) | 0xD3A3D3B7L))) , (void*)0) == l_701[4][1][4]))) || (*l_572)) , l_703[3]) == (void*)0)) <= p_29);
            }
            (*l_572) = (l_705 & (safe_mod_func_int64_t_s_s(((((safe_add_func_int8_t_s_s(3L, p_29)) || (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_29 & (safe_rshift_func_uint8_t_u_u((0xD6B6FA91L | (g_104[1][0]++)), 5))), ((*l_718) = p_29))), ((0x5C36L < 0x4CEAL) | 0xA0D02928L)))) , p_29) ^ 4294967286UL), p_29)));
        }
        (*l_730) ^= (safe_sub_func_uint32_t_u_u(6UL, (((*l_572) = (p_29 & ((void*)0 != l_723[3]))) ^ (((*l_725) = (g_412 = l_724)) == ((*l_728) = ((*l_726) = l_572))))));
    }
    l_620 |= (*l_572);
    (*l_572) = p_29;
    return l_653;
}



static int8_t * func_30(union U3  p_31, struct S0  p_32, int8_t ** p_33, int8_t ** const  p_34)
{ 
    uint64_t l_382[7][1];
    struct S0 * const l_393 = &g_302;
    struct S0 l_394[6] = {{0xDCD98A26L,-1,-27,3175,18573,-981,-1,71},{0xDCD98A26L,-1,-27,3175,18573,-981,-1,71},{0xDCD98A26L,-1,-27,3175,18573,-981,-1,71},{0xDCD98A26L,-1,-27,3175,18573,-981,-1,71},{0xDCD98A26L,-1,-27,3175,18573,-981,-1,71},{0xDCD98A26L,-1,-27,3175,18573,-981,-1,71}};
    int8_t *l_399 = (void*)0;
    union U1 l_405 = {0};
    int32_t l_481 = 0xE2AF379AL;
    int16_t * const *l_497 = &g_489;
    int32_t l_513 = 1L;
    int32_t l_514 = (-4L);
    int32_t l_515 = 9L;
    int32_t l_516 = 0xACF18A7EL;
    int32_t l_517 = (-3L);
    int32_t l_518 = (-9L);
    int32_t l_519 = 0xE98B0A65L;
    int32_t l_520 = (-10L);
    int32_t l_521 = 0x8B2BC726L;
    int32_t l_522 = 0x6027D64CL;
    int32_t l_523 = (-1L);
    int32_t l_525 = 0xB451EF16L;
    const int8_t * const *l_529 = &g_294;
    int32_t *l_551 = &l_520;
    uint64_t ** const *l_566[5][4][4] = {{{&g_401,(void*)0,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,(void*)0,&g_401},{&g_401,&g_401,&g_401,&g_401}},{{&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,&g_401,(void*)0},{&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401}},{{&g_401,&g_401,&g_401,(void*)0},{&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,(void*)0,&g_401},{&g_401,&g_401,&g_401,&g_401}},{{&g_401,&g_401,&g_401,&g_401},{(void*)0,&g_401,&g_401,&g_401},{(void*)0,(void*)0,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401}},{{&g_401,&g_401,(void*)0,(void*)0},{&g_401,&g_401,&g_401,&g_401},{&g_401,(void*)0,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401}}};
    uint32_t l_568 = 0xB73495B2L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_382[i][j] = 0x6704019F7FF7380DLL;
    }
    if ((safe_lshift_func_int16_t_s_s(g_141[4], ((+(((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_382[1][0], (g_90[1][0] >= (((safe_rshift_func_uint16_t_u_u(l_382[1][0], (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((((((((safe_mod_func_uint16_t_u_u(0xB4A8L, (safe_mod_func_int8_t_s_s(0x66L, (((((((l_393 != l_393) && g_302.f0) & g_104[1][0]) > 0xC30F5127003CCA9ALL) <= p_32.f2) , g_3) && g_67))))) , g_182[6].f0) <= 0x79L) <= l_382[3][0]) , l_394[4]) , g_90[0][1]) > p_32.f0), l_394[4].f6)), l_394[4].f2)))) <= p_31.f1) && p_32.f3)))), l_394[4].f2)), 4)) && 0UL) <= 1UL)) < (-10L)))))
    { 
        const union U3 l_407 = {0xF48EEB5581C0DE0BLL};
        int32_t l_417[5] = {0x8FFF755FL,0x8FFF755FL,0x8FFF755FL,0x8FFF755FL,0x8FFF755FL};
        int8_t l_437 = 0xD6L;
        int32_t **l_459 = (void*)0;
        int16_t **l_498 = &g_489;
        union U2 l_504 = {0x7F14C93EL};
        int32_t * const l_507 = &g_138;
        uint32_t l_526 = 0UL;
        uint16_t *l_530 = &g_367[6][0][0];
        int8_t * const *l_533 = &l_399;
        int32_t *l_534[4] = {&l_523,&l_523,&l_523,&l_523};
        uint32_t l_563 = 4294967295UL;
        int i;
        if (g_302.f2)
        { 
            uint32_t *l_398 = &g_104[1][0];
            union U4 l_406 = {0xE2560BBAL};
            int32_t l_416 = (-2L);
            int32_t l_427 = 0x10B8C550L;
            int32_t l_428[1][3][6] = {{{0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL},{0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL},{0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL,0xEF52D37FL}}};
            int32_t *l_463 = &l_416;
            uint32_t l_482 = 0UL;
            int32_t *l_509 = &l_417[2];
            int32_t *l_510 = &l_481;
            int32_t *l_511 = (void*)0;
            int32_t *l_512[1][7][5] = {{{&l_481,&l_428[0][1][2],&g_3,&l_416,&l_417[3]},{&g_67,&l_416,&l_428[0][1][4],&l_427,&l_428[0][1][4]},{&l_416,&l_416,&l_417[0],&l_417[3],&l_428[0][1][2]},{&l_416,&g_67,&g_67,&l_416,&l_428[0][1][4]},{&l_416,&l_417[3],&g_3,&g_3,&l_417[3]},{&l_428[0][1][4],&g_67,&l_417[0],&l_417[0],&l_417[0]},{&l_481,&l_416,&l_481,&g_3,&l_417[0]}}};
            int16_t l_524 = 0x99ABL;
            int i, j, k;
            if ((~(safe_lshift_func_int16_t_s_u(g_121, 6))))
            { 
                uint64_t ****l_403 = &g_400;
                const union U1 l_404 = {0};
                union U2 l_408 = {0x9A869F11L};
                const int8_t * const *l_409 = &g_294;
                uint32_t *l_411[5][6] = {{&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]},{&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]},{&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]},{&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]},{&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0],&g_104[1][0]}};
                uint32_t **l_410[7] = {&l_411[3][0],&l_411[3][0],&l_411[3][0],&l_411[3][0],&l_411[3][0],&l_411[3][0],&l_411[3][0]};
                int32_t *l_413 = &g_9;
                int32_t *l_414 = (void*)0;
                int32_t *l_415[6][3][4] = {{{&g_3,&g_9,&g_9,(void*)0},{&g_3,&g_3,&g_3,(void*)0},{&g_67,&g_9,&g_67,&g_9}},{{&g_67,&g_67,&g_3,&g_67},{&g_67,&g_3,(void*)0,&g_3},{&g_67,&g_3,&g_9,(void*)0}},{{&g_3,&g_3,&g_9,&g_3},{(void*)0,&g_9,(void*)0,&g_3},{&g_67,&g_9,&g_3,&g_67}},{{&g_67,&g_9,&g_9,&g_9},{&g_9,&g_3,&g_9,(void*)0},{&g_67,&g_3,&g_3,&g_9}},{{&g_67,&g_3,(void*)0,&g_67},{(void*)0,&g_67,&g_9,&g_67},{&g_3,&g_9,&g_9,&g_3}},{{&g_67,&g_9,(void*)0,(void*)0},{&g_67,&g_67,&g_3,&g_3},{&g_67,&g_3,&g_67,&g_67}}};
                int i, j, k;
                p_31.f3 = p_32.f4;
                (*l_413) = (l_398 == (g_412 = func_56((func_42(l_399, ((((*l_403) = g_400) != &g_401) , func_35(l_404, l_405, l_406, &g_9, l_407)), l_407.f3) , l_408), l_409, &g_6, g_182[5], p_33)));
                --g_419;
            }
            else
            { 
                int32_t *l_422 = &g_9;
                int32_t *l_423 = &l_416;
                int32_t *l_424 = &g_67;
                int32_t *l_425 = &l_416;
                int32_t *l_426[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_426[i] = (void*)0;
                ++g_432;
            }
            if ((p_32.f2 <= 0x7CCD04C9L))
            { 
                int32_t *l_435 = (void*)0;
                uint16_t *l_436[2][2];
                struct S0 l_460[6] = {{0x3A0199F9L,-0,32,1408,5308,159,-1,77},{0x3A0199F9L,-0,32,1408,5308,159,-1,77},{0x3A0199F9L,-0,32,1408,5308,159,-1,77},{0x3A0199F9L,-0,32,1408,5308,159,-1,77},{0x3A0199F9L,-0,32,1408,5308,159,-1,77},{0x3A0199F9L,-0,32,1408,5308,159,-1,77}};
                union U2 l_486 = {0x1CB35956L};
                int8_t *l_505 = &g_246.f1;
                int32_t *l_506 = &g_67;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_436[i][j] = &g_213[0];
                }
                g_302.f1 ^= l_428[0][1][4];
                if (((l_437 = p_32.f5) & ((safe_mul_func_int8_t_s_s((0x2B3C5BA2L != (p_31.f3 , g_367[6][0][0])), (p_32.f3 != ((safe_add_func_uint32_t_u_u(((*l_398) = 0x66F19421L), ((safe_mod_func_int16_t_s_s(l_407.f0, g_213[3])) , l_407.f2))) ^ 0x62FCL)))) || (**p_33))))
                { 
                    uint64_t *l_450[6];
                    int32_t *l_464 = &l_428[0][1][5];
                    int32_t *l_465 = &l_417[0];
                    int32_t *l_466 = &l_417[0];
                    int32_t *l_467 = &l_428[0][0][3];
                    int32_t *l_468 = &l_417[0];
                    int32_t *l_469 = (void*)0;
                    int32_t *l_470 = &l_428[0][1][4];
                    int32_t *l_471 = &g_9;
                    int32_t *l_472 = &l_417[0];
                    int32_t *l_473 = &g_9;
                    int32_t *l_474 = &l_428[0][1][4];
                    int32_t *l_475 = &l_416;
                    int32_t *l_476 = &l_417[0];
                    int32_t *l_477 = &l_427;
                    int32_t *l_478 = &l_417[0];
                    int32_t *l_479 = &g_67;
                    int32_t *l_480[2][2];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_450[i] = &l_382[2][0];
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_480[i][j] = &l_428[0][1][4];
                    }
                    p_32.f1 &= (safe_mod_func_uint64_t_u_u((g_16 &= (safe_sub_func_uint8_t_u_u(p_32.f7, (safe_add_func_int8_t_s_s(l_428[0][1][4], g_141[1]))))), (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((p_31.f4 = (0xFA93F4D8DB946A18LL != (safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((l_459 == (l_460[0] , g_461[4][0])), 0x5F3F90E0BB2F9CEBLL)), p_32.f2)))) != (-10L)), 0x0705C01A75E9C9ACLL)), (**p_34)))));
                    l_428[0][1][4] = p_32.f3;
                    l_463 = l_435;
                    l_482++;
                }
                else
                { 
                    const int8_t * const *l_485 = &g_294;
                    int32_t **l_487 = &l_435;
                    int16_t ***l_490 = (void*)0;
                    int16_t **l_492 = (void*)0;
                    int16_t ***l_491 = &l_492;
                    (*l_487) = func_56(g_182[6], l_485, &g_6, l_486, p_33);
                    (*l_491) = g_488[1][6][3];
                }
                (*l_506) = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((l_497 == l_498) | ((safe_mul_func_int8_t_s_s((0xBE39B7CD2B709324LL || (((!(safe_mod_func_uint16_t_u_u((g_367[5][0][0] = ((l_504 , ((*l_505) = ((*g_6) = (p_32.f6 == p_32.f3)))) >= ((func_42(&g_136, g_51, g_9) , (void*)0) != &g_104[1][0]))), p_32.f2))) == 248UL) || p_32.f5)), l_394[4].f7)) || p_32.f0)) , (*g_489)), 9)), l_394[4].f2));
            }
            else
            { 
                int16_t l_508 = 0x0581L;
                l_508 &= (l_507 == (void*)0);
            }
            l_526++;
        }
        else
        { 
            uint32_t l_531 = 0x4F6D5F6AL;
            int32_t *l_550[7][3] = {{&l_515,&l_515,&l_518},{&g_67,&g_67,&l_518},{&l_515,&l_515,&l_518},{&l_515,&l_515,&l_518},{&g_67,&g_67,&l_518},{&l_515,&l_515,&l_518},{&l_515,&l_515,&l_518}};
            int i, j;
            l_534[0] = func_56(g_182[0], l_529, ((((&g_419 == l_530) && (0xD1F59B6CD46E54F2LL ^ (l_531 >= g_532))) , l_531) , l_533), g_182[1], &g_6);
            for (l_437 = (-14); (l_437 >= (-26)); l_437--)
            { 
                uint8_t *l_549[5][6] = {{&g_90[0][0],&g_90[0][0],&g_90[1][0],(void*)0,&g_90[1][0],&g_90[0][0]},{&g_90[1][0],(void*)0,(void*)0,(void*)0,(void*)0,&g_90[1][0]},{&g_90[0][0],&g_90[1][0],(void*)0,&g_90[1][0],&g_90[0][0],&g_90[0][0]},{&g_90[1][1],&g_90[1][0],&g_90[1][0],&g_90[1][1],(void*)0,(void*)0},{(void*)0,&g_90[0][0],(void*)0,&g_90[1][1],&g_90[1][1],(void*)0}};
                int32_t **l_552 = &g_462[0][1][2];
                int32_t l_555 = 6L;
                int32_t l_556 = 0xE8267D7CL;
                int32_t l_557 = 0x334D19B8L;
                int32_t l_560[7] = {0xD4F3FD1EL,0xD4F3FD1EL,0xD9FB5B13L,0xD4F3FD1EL,0xD4F3FD1EL,0xD9FB5B13L,0xD4F3FD1EL};
                int i, j;
                p_31.f3 ^= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(l_531, (safe_rshift_func_int16_t_s_u((p_32.f2 & ((&g_461[4][0] != (void*)0) != l_394[4].f0)), 3)))) | (safe_sub_func_int8_t_s_s((((((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((g_90[0][1] = (0xD313L | (*g_489))), g_92)), (-1L))) && 0xBFB572EDL) , 0xF231405779FDB2B9LL) >= p_32.f0) & g_51.f1), (**p_33)))), 0x6CL));
                (*l_552) = (l_551 = l_550[3][2]);
                for (g_67 = 0; (g_67 <= 0); g_67 += 1)
                { 
                    return &g_532;
                }
                for (g_124 = (-2); (g_124 < 38); g_124 = safe_add_func_int32_t_s_s(g_124, 5))
                { 
                    int8_t l_558 = 0L;
                    int32_t l_559 = 0xD0F2D0ABL;
                    int32_t l_561 = 5L;
                    int32_t l_562[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_562[i] = 0x39D6A1B4L;
                    l_563++;
                    p_32.f6 = (g_429[0][3] >= ((void*)0 != l_566[2][3][2]));
                }
                return &g_532;
            }
        }
        (*l_551) = ((((*l_551) || p_32.f6) | g_567) || l_568);
    }
    else
    { 
        uint32_t l_569[2];
        int i;
        for (i = 0; i < 2; i++)
            l_569[i] = 0x346A6E80L;
        l_569[0] = 0x53D48BE7L;
        return l_399;
    }
    (*l_551) ^= (+0xD2L);
    (*l_551) &= ((void*)0 == &g_90[1][1]);
    return (*p_33);
}



static union U3  func_35(const union U1  p_36, union U1  p_37, union U4  p_38, int32_t * p_39, const union U3  p_40)
{ 
    union U2 l_62[2] = {{0x36BB3585L},{0x36BB3585L}};
    const int8_t * const l_64 = (void*)0;
    const int8_t * const *l_63 = &l_64;
    int32_t l_133 = 0x7F7C8792L;
    int32_t l_134 = 5L;
    int32_t l_137 = 0xCD93D51DL;
    int32_t l_140 = (-4L);
    int32_t *l_234 = &g_9;
    int32_t **l_233 = &l_234;
    int32_t ***l_232 = &l_233;
    int32_t ***l_274 = (void*)0;
    union U3 l_291 = {0x69CC8024315AF73ALL};
    uint64_t **l_298 = (void*)0;
    const uint64_t *l_346 = (void*)0;
    const uint64_t **l_345 = &l_346;
    int32_t *l_371 = &l_140;
    int32_t **l_370 = &l_371;
    int i;
    for (g_16 = 0; (g_16 == 23); g_16++)
    { 
        int8_t l_95 = 0xE9L;
        int32_t l_119[6];
        struct S0 l_122 = {0UL,1,82,2037,1281,-1429,-1,636};
        int32_t *l_160 = &l_119[0];
        int64_t *l_228 = &g_135;
        int8_t * const *l_295 = &g_6;
        union U2 l_296 = {0x7D04D9EFL};
        int32_t *l_353 = &g_67;
        int32_t *l_354 = &l_119[5];
        int32_t *l_355 = &g_67;
        int32_t *l_356 = &l_119[0];
        int32_t *l_357 = &l_291.f3;
        int32_t *l_358 = &g_9;
        int32_t *l_359 = &l_140;
        int32_t *l_360 = &l_291.f3;
        int32_t *l_361 = &g_9;
        int32_t *l_362 = &l_291.f3;
        int32_t *l_363 = &l_119[1];
        int32_t *l_364[3];
        int i;
        for (i = 0; i < 6; i++)
            l_119[i] = 0x167AD250L;
        for (i = 0; i < 3; i++)
            l_364[i] = (void*)0;
        for (g_9 = (-8); (g_9 == 4); g_9++)
        { 
            union U2 l_65 = {18446744073709551615UL};
            int32_t **l_69 = (void*)0;
            int32_t *l_71[2][2];
            int32_t **l_70 = &l_71[0][1];
            uint8_t *l_89 = &g_90[0][0];
            uint64_t *l_91 = &g_92;
            uint8_t l_107 = 1UL;
            struct S0 l_125[6][4][4] = {{{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{1UL,1,-58,3872,6260,1190,1,380},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35}},{{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{1UL,1,-58,3872,6260,1190,1,380},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}}},{{{6UL,1,-79,926,12001,-537,0,710},{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{1UL,1,-58,3872,6260,1190,1,380},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35}},{{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}}},{{{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{1UL,1,-58,3872,6260,1190,1,380},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}},{{6UL,1,-79,926,12001,-537,0,710},{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{1UL,1,-58,3872,6260,1190,1,380},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35}}},{{{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{1UL,1,-58,3872,6260,1190,1,380},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}},{{6UL,1,-79,926,12001,-537,0,710},{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{1UL,1,-58,3872,6260,1190,1,380},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}}},{{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35}},{{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{1UL,1,-58,3872,6260,1190,1,380},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}},{{6UL,1,-79,926,12001,-537,0,710},{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}}},{{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{1UL,1,-58,3872,6260,1190,1,380},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0x3996C8B9L,-0,95,2274,10040,1307,-1,35},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0x3996C8B9L,-0,95,2274,10040,1307,-1,35}},{{6UL,1,-79,926,12001,-537,0,710},{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xD15494F3L,-1,111,1988,18603,-618,-1,401}},{{0xD15494F3L,-1,111,1988,18603,-618,-1,401},{1UL,1,-58,3872,6260,1190,1,380},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410},{0xDA86A191L,-1,-88,1091,8131,-276,-0,410}}}};
            int8_t **l_147 = &g_6;
            uint32_t *l_187 = &g_104[1][0];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_71[i][j] = &g_9;
            }
            (*l_70) = func_56(l_62[1], l_63, &g_6, l_65, &g_6);
        }
        for (l_137 = 7; (l_137 >= 19); l_137 = safe_add_func_uint16_t_u_u(l_137, 1))
        { 
            uint32_t l_208 = 4294967289UL;
            uint16_t *l_212[7][6][2] = {{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]}},{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]}},{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]}},{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]}},{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]}},{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]}},{{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{&g_213[0],&g_213[0]},{(void*)0,&g_213[0]},{&g_213[0],&g_213[0]}}};
            uint8_t *l_214[7][4][1] = {{{&g_90[0][0]},{&g_90[1][0]},{&g_90[0][0]},{&g_90[0][0]}},{{&g_90[0][0]},{&g_90[0][0]},{&g_90[1][0]},{&g_90[0][0]}},{{&g_90[0][0]},{&g_90[0][0]},{&g_90[1][0]},{&g_90[0][0]}},{{&g_90[0][0]},{&g_90[0][0]},{&g_90[0][0]},{&g_90[1][0]}},{{&g_90[0][0]},{&g_90[0][0]},{&g_90[0][0]},{&g_90[1][0]}},{{&g_90[0][0]},{&g_90[0][0]},{&g_90[0][0]},{&g_90[0][0]}},{{&g_90[1][0]},{&g_90[0][0]},{&g_90[0][0]},{&g_90[0][0]}}};
            int32_t ***l_275 = &l_233;
            uint64_t *l_281[6];
            int64_t **l_285 = &l_228;
            struct S0 *l_301 = &g_302;
            uint64_t **l_344 = &l_281[0];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_281[i] = (void*)0;
            if (((safe_mul_func_uint16_t_u_u(((0xA35CBEA9L | ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((*l_160), 6)), ((safe_lshift_func_int16_t_s_s(g_7, (((*p_39) |= (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((g_90[1][0] = ((g_213[0] = ((p_40.f3 , (safe_unary_minus_func_int64_t_s(l_208))) ^ ((~((safe_mod_func_int64_t_s_s(p_40.f0, 0x5FC2F5E6F3355245LL)) , 1L)) , (*g_6)))) , g_135)), 7)), 0xE3700449F6A1B494LL))) <= 4294967295UL))) , p_40.f2))), g_16)) >= g_104[0][2])) && g_16), l_208)) && g_171))
            { 
                uint8_t l_224 = 0x50L;
                int8_t l_235 = (-3L);
                for (l_95 = 6; (l_95 == 11); l_95 = safe_add_func_uint8_t_u_u(l_95, 6))
                { 
                    if ((*p_39))
                        break;
                    g_67 ^= (*p_39);
                }
                for (g_92 = 0; (g_92 <= 1); g_92 += 1)
                { 
                    uint32_t *l_219 = &l_208;
                    int16_t *l_223 = &g_121;
                    int16_t **l_222 = &l_223;
                    int32_t l_227 = 0xC4575043L;
                    uint8_t l_236 = 0xE3L;
                    int64_t *l_238 = (void*)0;
                    int64_t **l_237 = &l_238;
                    int i, j, k;
                    (*p_39) = ((g_51 , p_38) , ((safe_sub_func_int32_t_s_s(0xC6053745L, (((*l_219) = g_141[4]) , (safe_mod_func_int32_t_s_s(((((*l_222) = l_212[(g_92 + 5)][g_92][g_92]) != l_212[(g_92 + 3)][(g_92 + 2)][g_92]) <= ((((l_224 | 0xDFL) > (-1L)) > p_38.f0) > 0x9EEAFE74C3FBF1EELL)), 0x004CCE65L))))) , g_136));
                    (***l_232) = (safe_mul_func_int8_t_s_s(((p_40 , l_227) == (l_228 != ((*l_237) = (((((0x4CD73731L | (((*g_6) = 0x81L) > (+(safe_sub_func_uint64_t_u_u((l_232 == (l_235 , &l_233)), g_10))))) == l_236) <= p_40.f2) < p_40.f1) , &g_135)))), g_9));
                }
                g_67 ^= ((((((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(g_51.f2, 7)) ^ (+(((**l_233) &= ((l_160 != (g_246 , &g_104[1][0])) & (*l_160))) >= (p_40.f0 > (0xE6F036B34544C11FLL != (-1L)))))), (*g_6))), g_104[1][0])) != (-1L)) == g_104[0][2]) && p_40.f1) == p_40.f3) == (*l_160)) > g_7) || p_40.f3);
            }
            else
            { 
                return g_51;
            }
            for (g_171 = 26; (g_171 > (-24)); --g_171)
            { 
                uint64_t *l_257 = &g_141[0];
                int32_t l_276 = 0L;
                const uint32_t *l_289 = &g_290;
                int8_t **l_297 = &g_6;
                int32_t **l_328 = &l_160;
            }
        }
        (*p_39) |= (safe_lshift_func_uint16_t_u_u(g_51.f3, 13));
        ++g_367[6][0][0];
    }
    (*l_370) = ((**l_232) = &g_3);
    return l_291;
}



static union U4  func_42(int8_t * p_43, union U3  p_44, uint32_t  p_45)
{ 
    union U4 l_49 = {0xCBDED69BL};
    return l_49;
}



static int32_t * func_56(union U2  p_57, const int8_t * const * p_58, int8_t * const * p_59, union U2  p_60, int8_t ** p_61)
{ 
    int32_t *l_66 = &g_67;
    int8_t *l_68 = &g_7;
    (*l_66) = g_16;
    (*l_66) |= ((void*)0 != l_68);
    return l_66;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_51.f1, "g_51.f1", print_hash_value);
    transparent_crc(g_51.f2, "g_51.f2", print_hash_value);
    transparent_crc(g_51.f3, "g_51.f3", print_hash_value);
    transparent_crc(g_51.f4, "g_51.f4", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_90[i][j], "g_90[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_182[i].f0, "g_182[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_213[i], "g_213[i]", print_hash_value);

    }
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_302.f1, "g_302.f1", print_hash_value);
    transparent_crc(g_302.f2, "g_302.f2", print_hash_value);
    transparent_crc(g_302.f3, "g_302.f3", print_hash_value);
    transparent_crc(g_302.f4, "g_302.f4", print_hash_value);
    transparent_crc(g_302.f5, "g_302.f5", print_hash_value);
    transparent_crc(g_302.f6, "g_302.f6", print_hash_value);
    transparent_crc(g_302.f7, "g_302.f7", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_367[i][j][k], "g_367[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_418[i], "g_418[i]", print_hash_value);

    }
    transparent_crc(g_419, "g_419", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_429[i][j], "g_429[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_1007.f0, "g_1007.f0", print_hash_value);
    transparent_crc(g_1007.f1, "g_1007.f1", print_hash_value);
    transparent_crc(g_1007.f2, "g_1007.f2", print_hash_value);
    transparent_crc(g_1007.f3, "g_1007.f3", print_hash_value);
    transparent_crc(g_1007.f4, "g_1007.f4", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
