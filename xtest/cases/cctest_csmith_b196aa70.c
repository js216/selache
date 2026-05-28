// SPDX-License-Identifier: MIT
// cctest_csmith_b196aa70.c --- cctest case csmith_b196aa70 (csmith seed 2979441264)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe5eaeb4d */
/* @exp_ticks 0x91f2 */

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

// Options:   -s 2979441264 -o /tmp/csmith_gen_4b4x4liy/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   const int32_t  f3;
   int16_t  f4;
   uint8_t  f5;
   const int16_t  f6;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
   struct S0  f1;
   uint8_t  f2;
   int8_t * f3;
   int8_t * f4;
};

union U3 {
   struct S1  f0;
};


static int32_t g_2 = 1L;
static int8_t g_25 = 7L;
static int8_t *g_24 = &g_25;
static int8_t **g_23 = &g_24;
static const int8_t g_53 = 0x63L;
static int32_t g_58 = 0xCA727646L;
static int32_t g_61[2][7][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
static int8_t g_62 = 0x6DL;
static int32_t g_63[2] = {0x38CF49CFL,0x38CF49CFL};
static int16_t g_67 = 0xAA6BL;
static uint8_t g_68[4][4] = {{0UL,0x7DL,0x7DL,0UL},{0UL,0x7DL,0x7DL,0UL},{0UL,0x7DL,0x7DL,0UL},{0UL,0x7DL,0x7DL,0UL}};
static const struct S1 g_83[4][7][1] = {{{{1UL,0UL,4UL,-10L,0xC928L,249UL,0x596CL}},{{1UL,0UL,4UL,-10L,0xC928L,249UL,0x596CL}},{{4294967295UL,65535UL,6UL,8L,-6L,0x8AL,0xB653L}},{{4294967291UL,0x6A12L,18446744073709551615UL,0xB30262A8L,0x9E4EL,1UL,0xB9AAL}},{{0x63BB6FCEL,1UL,0x46A4E19C9FCC30D4LL,-1L,0xF57BL,0UL,1L}},{{0x90BC2142L,5UL,18446744073709551609UL,0xF357798EL,0x4FF9L,0xFDL,0L}},{{0xAADD0F33L,8UL,4UL,9L,0x3298L,1UL,0x577EL}}},{{{0x90BC2142L,5UL,18446744073709551609UL,0xF357798EL,0x4FF9L,0xFDL,0L}},{{0x63BB6FCEL,1UL,0x46A4E19C9FCC30D4LL,-1L,0xF57BL,0UL,1L}},{{4294967291UL,0x6A12L,18446744073709551615UL,0xB30262A8L,0x9E4EL,1UL,0xB9AAL}},{{4294967295UL,65535UL,6UL,8L,-6L,0x8AL,0xB653L}},{{1UL,0UL,4UL,-10L,0xC928L,249UL,0x596CL}},{{1UL,0UL,4UL,-10L,0xC928L,249UL,0x596CL}},{{4294967295UL,65535UL,6UL,8L,-6L,0x8AL,0xB653L}}},{{{4294967295UL,65535UL,6UL,8L,-6L,0x8AL,0xB653L}},{{0xAADD0F33L,8UL,4UL,9L,0x3298L,1UL,0x577EL}},{{0xD171CF63L,0x7CB6L,0x985BB29A1B0F83D5LL,-1L,0xC177L,252UL,4L}},{{4294967288UL,0x4DCBL,1UL,0x0A080980L,-1L,3UL,0L}},{{0xD171CF63L,0x7CB6L,0x985BB29A1B0F83D5LL,-1L,0xC177L,252UL,4L}},{{0xAADD0F33L,8UL,4UL,9L,0x3298L,1UL,0x577EL}},{{4294967295UL,65535UL,6UL,8L,-6L,0x8AL,0xB653L}}},{{{0x90BC2142L,5UL,18446744073709551609UL,0xF357798EL,0x4FF9L,0xFDL,0L}},{{0x56D1B7A1L,0x1313L,18446744073709551615UL,0xD896CD2AL,0x41E7L,0x1FL,0x1C73L}},{{0x56D1B7A1L,0x1313L,18446744073709551615UL,0xD896CD2AL,0x41E7L,0x1FL,0x1C73L}},{{0x90BC2142L,5UL,18446744073709551609UL,0xF357798EL,0x4FF9L,0xFDL,0L}},{{4294967295UL,65535UL,6UL,8L,-6L,0x8AL,0xB653L}},{{0xAADD0F33L,8UL,4UL,9L,0x3298L,1UL,0x577EL}},{{0xD171CF63L,0x7CB6L,0x985BB29A1B0F83D5LL,-1L,0xC177L,252UL,4L}}}};
static uint64_t g_89 = 18446744073709551612UL;
static int64_t g_92 = 0x74B559E040F3C649LL;
static union U2 g_100 = {{0x0D37L}};
static union U3 g_107 = {{0xB3E8CBBEL,65533UL,0xD09B3387B9920543LL,-7L,-1L,0xFAL,-4L}};
static const struct S0 g_116 = {0x1154L};
static const struct S0 g_118 = {0xD60BL};
static struct S0 *g_129 = &g_100.f0;
static const union U3 * const g_133 = (void*)0;
static const union U3 * const *g_132[4][2] = {{&g_133,&g_133},{&g_133,&g_133},{&g_133,&g_133},{&g_133,&g_133}};
static uint16_t g_188 = 0x2B96L;
static int32_t *g_191[5] = {&g_58,&g_58,&g_58,&g_58,&g_58};
static int8_t g_367 = (-1L);
static struct S1 g_385[5][1] = {{{4294967286UL,1UL,7UL,8L,0x54BDL,0UL,0xFF4FL}},{{0UL,65527UL,4UL,0x6D17797FL,1L,0xC9L,1L}},{{4294967286UL,1UL,7UL,8L,0x54BDL,0UL,0xFF4FL}},{{0UL,65527UL,4UL,0x6D17797FL,1L,0xC9L,1L}},{{4294967286UL,1UL,7UL,8L,0x54BDL,0UL,0xFF4FL}}};
static int8_t g_416 = (-2L);
static int32_t g_463[6] = {0x25A00A44L,0x25A00A44L,0x25A00A44L,0x25A00A44L,0x25A00A44L,0x25A00A44L};
static const union U3 *g_513 = &g_107;
static struct S1 *g_525 = (void*)0;
static int8_t g_542 = 0x3EL;
static struct S0 ***g_614 = (void*)0;
static uint16_t *g_628 = &g_100.f0.f0;
static uint32_t g_669 = 6UL;
static struct S1 g_703 = {0xC9B99492L,0x142BL,0UL,1L,-6L,0xB4L,1L};
static const struct S1 g_705 = {4294967295UL,6UL,18446744073709551615UL,0xEE812BBEL,0x7F88L,0x45L,0x4965L};
static const struct S1 *g_704 = &g_705;
static int16_t **g_721 = (void*)0;
static int64_t g_755 = (-1L);
static int8_t g_874 = 0x43L;
static int32_t g_915 = (-6L);
static int16_t g_935 = 0x8407L;
static union U2 *g_964 = &g_100;
static union U2 **g_963[3][6][2] = {{{&g_964,(void*)0},{(void*)0,&g_964},{&g_964,&g_964},{&g_964,&g_964},{&g_964,&g_964},{&g_964,&g_964}},{{&g_964,&g_964},{&g_964,&g_964},{(void*)0,(void*)0},{&g_964,(void*)0},{(void*)0,&g_964},{&g_964,&g_964}},{{&g_964,&g_964},{&g_964,&g_964},{&g_964,&g_964},{&g_964,&g_964},{&g_964,&g_964},{(void*)0,(void*)0}}};
static const uint32_t *g_1011 = &g_703.f0;
static const uint32_t **g_1010 = &g_1011;
static const uint32_t ***g_1009 = &g_1010;
static struct S1 g_1264 = {0x2B87898BL,65532UL,0x0D9E66E727EAB23ELL,0xD912B9D6L,0x045FL,0x89L,6L};
static int8_t **g_1279 = (void*)0;
static int8_t g_1318 = 0x31L;
static uint32_t ***g_1458[4] = {(void*)0,(void*)0,(void*)0,(void*)0};



static uint32_t  func_1(void);
static int8_t ** func_5(struct S1  p_6, int8_t * const * p_7, uint32_t  p_8, uint32_t  p_9);
static struct S1  func_10(uint8_t  p_11, int8_t ** p_12, int64_t  p_13, struct S0  p_14);
static const uint16_t  func_20(int8_t ** p_21, uint32_t  p_22);
static struct S0  func_29(struct S1  p_30, int8_t * p_31);
static struct S1  func_32(int8_t * const  p_33, int16_t  p_34, struct S0  p_35);
static int8_t * const  func_36(int8_t ** p_37, int8_t * p_38, int8_t ** p_39);
static int8_t * func_40(int64_t  p_41, int8_t ** p_42, int16_t  p_43);




static uint32_t  func_1(void)
{ 
    uint64_t l_1491[2];
    int32_t l_1533 = (-8L);
    int32_t l_1534[5][7] = {{(-6L),0xED9C8F9CL,1L,1L,0x55B32B06L,0xB4E9B6AAL,(-3L)},{0x3E1AEF3DL,0xB4E9B6AAL,(-1L),0x55B32B06L,(-5L),(-5L),0x55B32B06L},{1L,0xCF9582FDL,1L,9L,0x38915733L,0x3E1AEF3DL,0xB4E9B6AAL},{1L,1L,0x55B32B06L,0xB4E9B6AAL,(-3L),0xCF9582FDL,0x3E1AEF3DL},{0x3E1AEF3DL,(-6L),(-1L),(-1L),(-6L),0x3E1AEF3DL,0x328A18B6L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1491[i] = 7UL;
    for (g_2 = 0; (g_2 <= (-8)); g_2 = safe_sub_func_int8_t_s_s(g_2, 2))
    { 
        int32_t l_17 = 0xB89BDD77L;
        uint32_t l_26 = 0xD02268F6L;
        int8_t *l_1490 = &g_542;
        int32_t *l_1492 = (void*)0;
        int32_t *l_1493 = &g_463[2];
        struct S0 l_1494 = {2UL};
        uint32_t l_1496 = 0x3A0E1219L;
    }
    for (g_1264.f2 = 0; (g_1264.f2 <= 54); ++g_1264.f2)
    { 
        int16_t l_1531 = 0L;
        int32_t *l_1532[3];
        uint32_t l_1535 = 0x29EF5222L;
        struct S0 l_1542 = {0xB28CL};
        int8_t *l_1546[7][2][4] = {{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}},{{(void*)0,&g_874,(void*)0,&g_874},{(void*)0,&g_874,(void*)0,&g_874}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1532[i] = &g_58;
        l_1535++;
        for (g_67 = 0; (g_67 == (-5)); g_67 = safe_sub_func_int8_t_s_s(g_67, 1))
        { 
            int8_t **l_1545 = (void*)0;
            for (g_367 = (-3); (g_367 > (-28)); --g_367)
            { 
                const uint64_t l_1543 = 18446744073709551613UL;
                int32_t **l_1544 = &g_191[1];
                (*g_129) = l_1542;
                if (l_1543)
                    break;
                (*l_1544) = &l_1534[2][3];
                (**l_1544) = (func_29(func_10(g_703.f1, l_1545, g_61[0][5][0], ((*g_129) = func_29((*g_704), (*g_23)))), l_1546[0][1][0]) , 0L);
            }
            if (l_1491[1])
                break;
            if (l_1491[0])
                break;
        }
    }
    return (**g_1010);
}



static int8_t ** func_5(struct S1  p_6, int8_t * const * p_7, uint32_t  p_8, uint32_t  p_9)
{ 
    int16_t *l_1514 = &g_1264.f4;
    int32_t l_1515 = 1L;
    uint8_t *l_1516 = &g_1264.f5;
    int32_t *l_1519 = (void*)0;
    int32_t *l_1520[3];
    uint32_t l_1521 = 0x711CCE16L;
    union U3 *l_1524 = &g_107;
    int8_t **l_1528 = &g_24;
    int i;
    for (i = 0; i < 3; i++)
        l_1520[i] = (void*)0;
    l_1521 = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(0x29D7L, (l_1515 = ((safe_mul_func_uint32_t_u_u(p_6.f6, ((!0L) >= (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((*l_1516) = (((*l_1514) &= (p_6.f0 ^ ((safe_add_func_uint16_t_u_u(p_6.f5, (--(*g_628)))) && (++(*g_628))))) <= l_1515)), (safe_sub_func_uint16_t_u_u((p_6.f3 == 0x0D6DAF82L), p_6.f5)))) == 0xF0CDL), p_6.f4))))) > p_6.f3)))), 0x87AD92FA069AACAELL));
    for (g_703.f5 = 0; (g_703.f5 >= 32); g_703.f5 = safe_add_func_uint16_t_u_u(g_703.f5, 7))
    { 
        const int32_t *l_1526 = &g_385[2][0].f3;
        const int32_t **l_1527 = &l_1526;
        for (g_755 = 0; (g_755 <= 4); g_755 += 1)
        { 
            union U3 **l_1525[6][5][2] = {{{&l_1524,&l_1524},{&l_1524,&l_1524},{&l_1524,&l_1524},{&l_1524,&l_1524},{&l_1524,&l_1524}},{{&l_1524,&l_1524},{&l_1524,&l_1524},{&l_1524,&l_1524},{&l_1524,(void*)0},{&l_1524,&l_1524}},{{&l_1524,&l_1524},{&l_1524,&l_1524},{&l_1524,(void*)0},{&l_1524,&l_1524},{(void*)0,&l_1524}},{{&l_1524,&l_1524},{&l_1524,&l_1524},{(void*)0,&l_1524},{&l_1524,(void*)0},{&l_1524,&l_1524}},{{&l_1524,&l_1524},{&l_1524,(void*)0},{&l_1524,&l_1524},{(void*)0,&l_1524},{&l_1524,&l_1524}},{{&l_1524,&l_1524},{(void*)0,&l_1524},{&l_1524,(void*)0},{&l_1524,&l_1524},{&l_1524,&l_1524}}};
            int i, j, k;
            g_513 = l_1524;
        }
        (*l_1527) = l_1526;
    }
    return l_1528;
}



static struct S1  func_10(uint8_t  p_11, int8_t ** p_12, int64_t  p_13, struct S0  p_14)
{ 
    struct S1 l_1495 = {0UL,0x93B1L,0xD199BBDF5F373C07LL,-1L,0x1733L,1UL,0xFE35L};
    return l_1495;
}



static const uint16_t  func_20(int8_t ** p_21, uint32_t  p_22)
{ 
    struct S0 l_930 = {65535UL};
    int8_t ***l_934[2][7] = {{(void*)0,(void*)0,(void*)0,&g_23,&g_23,&g_23,(void*)0},{(void*)0,(void*)0,(void*)0,&g_23,&g_23,&g_23,(void*)0}};
    int8_t **l_938 = &g_24;
    int32_t l_941 = 0xEBA8AC34L;
    int32_t **l_950 = (void*)0;
    union U2 *l_962 = &g_100;
    union U2 * const *l_961[2];
    uint64_t *l_974 = &g_107.f0.f2;
    int16_t *l_1018 = (void*)0;
    int32_t l_1064[3];
    int64_t l_1143 = 4L;
    union U3 *l_1152 = &g_107;
    struct S1 l_1154 = {0xD0D411C9L,65535UL,0xD4988692CB25B1DBLL,0xDFC0C392L,0x38A8L,0x9EL,1L};
    int8_t *l_1259 = &g_416;
    struct S1 *l_1263 = &g_1264;
    uint32_t *l_1417 = (void*)0;
    uint32_t **l_1416[4];
    uint32_t *l_1424 = &g_669;
    uint32_t **l_1423[5] = {&l_1424,&l_1424,&l_1424,&l_1424,&l_1424};
    int32_t *l_1463 = (void*)0;
    int8_t *l_1467 = &g_62;
    int i, j;
    for (i = 0; i < 2; i++)
        l_961[i] = &l_962;
    for (i = 0; i < 3; i++)
        l_1064[i] = 1L;
    for (i = 0; i < 4; i++)
        l_1416[i] = &l_1417;
lbl_1226:
    for (g_25 = 0; (g_25 < (-19)); --g_25)
    { 
        int8_t **l_46 = &g_24;
        const int8_t **l_50 = (void*)0;
        const int8_t *l_52 = &g_53;
        const int8_t **l_51 = &l_52;
        const int32_t l_54 = 8L;
        struct S0 *l_925 = &g_100.f0;
    }
    if ((0xBF1F13D6L | (g_705.f1 & ((**g_23) <= (safe_sub_func_uint16_t_u_u((g_58 < p_22), (((safe_lshift_func_uint16_t_u_s((l_930 , ((((safe_unary_minus_func_int16_t_s(((((*g_628) = ((safe_rshift_func_uint16_t_u_s((((void*)0 != l_934[1][6]) | g_107.f0.f5), p_22)) < 0x08L)) , p_22) | p_22))) , g_935) , 0xFEL) & l_930.f0)), l_930.f0)) == l_930.f0) == l_930.f0)))))))
    { 
        int8_t l_948 = 0xE5L;
        int32_t **l_949 = &g_191[3];
        int32_t *l_971 = &g_915;
        (**l_949) &= (safe_rshift_func_uint8_t_u_u(((((*g_24) , (l_938 == &g_24)) >= ((**p_21) && l_930.f0)) > (safe_add_func_int64_t_s_s(l_941, (((safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((&g_100 != &g_100), l_948)) >= l_930.f0), l_941)), g_385[2][0].f1)) , l_949) == l_950)))), g_100.f0.f0));
        (*l_971) ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((**p_21), (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((g_62 = ((l_961[0] == g_963[2][2][0]) <= (safe_div_func_int16_t_s_s(((((safe_add_func_int64_t_s_s((((safe_div_func_uint8_t_u_u((**l_949), g_705.f4)) & 0UL) > p_22), g_385[2][0].f2)) ^ g_385[2][0].f2) , (void*)0) != (void*)0), 0x3801L)))), (**l_949))), p_22)), 65535UL)))), 7));
    }
    else
    { 
        int16_t *l_977[5][5][3] = {{{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0}},{{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67}},{{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0}},{{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67}},{{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0},{&g_67,&g_703.f4,&g_67},{(void*)0,&g_385[2][0].f4,(void*)0}}};
        int64_t *l_995 = &g_755;
        int32_t l_999 = 0x3A6DC5C4L;
        union U3 l_1007 = {{7UL,2UL,0x23AF4457DF4717C1LL,0x169F70A5L,0x3F29L,247UL,0x4AFCL}};
        const uint8_t *l_1056 = (void*)0;
        int32_t l_1088 = 0x31198650L;
        int32_t l_1090 = 1L;
        union U2 ** const l_1119 = &g_964;
        int32_t l_1145 = 0xA45DDB0EL;
        int32_t l_1146 = 0x092AF05BL;
        int32_t l_1147[4] = {1L,1L,1L,1L};
        int64_t l_1148 = 0L;
        struct S0 l_1194 = {0xF50FL};
        struct S1 *l_1196 = &g_703;
        int32_t *l_1214 = (void*)0;
        union U3 * const *l_1270 = (void*)0;
        union U3 * const **l_1269 = &l_1270;
        int16_t l_1322 = 0L;
        int64_t l_1333 = 0x9DA4D12B05C5EC4DLL;
        uint32_t l_1358[2];
        uint32_t l_1363 = 18446744073709551615UL;
        int64_t l_1444 = 0x10534E2BD0AD962BLL;
        uint16_t l_1445 = 65535UL;
        int8_t *l_1448 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1358[i] = 6UL;
        if (((safe_mul_func_uint16_t_u_u((((void*)0 != l_974) != ((*l_974) = ((safe_lshift_func_uint16_t_u_s((func_29(func_32((*p_21), ((p_22 ^ (&g_92 != (void*)0)) & (g_703.f4 = 0xF13DL)), (*g_129)), (*g_23)) , (*g_628)), p_22)) != g_703.f3))), 1L)) , 0x13724C1AL))
        { 
            int8_t l_982 = 0x90L;
            int16_t *l_998 = &g_385[2][0].f4;
            int32_t l_1048 = 0x1987EAC7L;
            int32_t l_1049 = 1L;
            const int32_t l_1050 = (-10L);
            struct S0 l_1051 = {65535UL};
            int32_t *l_1066 = (void*)0;
            struct S0 **l_1086 = &g_129;
            struct S0 ***l_1085 = &l_1086;
            struct S0 ****l_1084 = &l_1085;
            int32_t l_1139 = (-2L);
            int32_t l_1140 = 0x2CBE0368L;
            int32_t l_1141 = 0L;
            int32_t l_1142[3][4][5] = {{{1L,0xB970AEE5L,0xA6DB1E97L,0xB970AEE5L,1L},{0L,0x5932DD43L,0L,0L,0x5932DD43L},{0x46FC4006L,8L,8L,0xB970AEE5L,8L},{0x5932DD43L,0x276EA7F0L,0xCE3E7EB1L,0x5932DD43L,0x5932DD43L}},{{0L,0xB970AEE5L,0L,8L,1L},{0x5932DD43L,0L,0L,0x276EA7F0L,0L},{0x46FC4006L,0xB970AEE5L,0x57844920L,0xB970AEE5L,0x46FC4006L},{0L,0x276EA7F0L,0L,0L,0x5932DD43L}},{{1L,8L,0L,0xB970AEE5L,0L},{0x5932DD43L,0x5932DD43L,0xCE3E7EB1L,0x276EA7F0L,0x5932DD43L},{8L,0xB970AEE5L,8L,8L,8L},{0L,0xCE3E7EB1L,0xCE3E7EB1L,0L,0xE18CA318L}}};
            int32_t l_1144 = 1L;
            union U3 *l_1177 = &l_1007;
            struct S1 *l_1195 = (void*)0;
            const struct S1 l_1197 = {0UL,0x245DL,0UL,0L,-10L,3UL,1L};
            uint8_t *l_1205 = &g_385[2][0].f5;
            int32_t *l_1212 = &l_1142[1][2][3];
            int32_t *l_1213 = (void*)0;
            int i, j, k;
            if ((((*l_995) = ((g_703.f0 = (safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s(l_982, ((++(*l_974)) ^ (((*g_628) ^= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((~(safe_unary_minus_func_uint8_t_u(g_68[0][0]))) <= ((**g_23) &= ((((safe_mod_func_uint8_t_u_u((((void*)0 == l_995) < (p_22 | (safe_add_func_uint16_t_u_u(((void*)0 != l_998), 1UL)))), 1UL)) < p_22) <= l_999) > p_22))), 252UL)), l_982))) >= l_999)))) == l_982) <= l_999), p_22))) >= p_22)) , p_22))
            { 
                uint64_t l_1000[2][4][3] = {{{0UL,0UL,18446744073709551610UL},{0UL,0UL,18446744073709551610UL},{0UL,0UL,18446744073709551610UL},{0UL,0UL,18446744073709551610UL}},{{0UL,0UL,18446744073709551610UL},{0UL,0UL,18446744073709551610UL},{0UL,0UL,18446744073709551610UL},{0UL,0UL,18446744073709551610UL}}};
                const uint32_t ***l_1012 = &g_1010;
                int16_t *l_1057 = (void*)0;
                uint8_t *l_1060 = &l_1007.f0.f5;
                int32_t *l_1061 = &g_915;
                int32_t *l_1062 = (void*)0;
                int32_t *l_1063 = &g_58;
                int i, j, k;
                for (l_930.f0 = 0; (l_930.f0 <= 1); l_930.f0 += 1)
                { 
                    int32_t *l_1008 = &g_915;
                    uint32_t *l_1015 = &g_385[2][0].f0;
                    int8_t *** const l_1029 = &l_938;
                    (*l_1008) = (((l_1000[0][3][0] ^ (((*g_628) , p_22) <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((*g_628), 14)), ((**p_21) = (((-10L) == (safe_add_func_int8_t_s_s(0x47L, ((l_1007 , (void*)0) != (void*)0)))) <= p_22)))))) <= 1L) == g_703.f4);
                    if (p_22)
                        continue;
                    if (p_22)
                        break;
                    l_1012 = g_1009;
                    (*l_1008) ^= (((*l_974) = (((*l_995) = (safe_mul_func_uint32_t_u_u(((--(*l_1015)) || ((void*)0 != l_1018)), (l_999 != (((**p_21) , 0L) , (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(6L, (((safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_22 >= p_22), p_22)), (**p_21))), p_22)) , (void*)0) == l_1029))), (**g_23)))))))) ^ g_83[3][3][0].f6)) == p_22);
                }
                for (g_703.f0 = 0; (g_703.f0 <= 1); g_703.f0 += 1)
                { 
                    int32_t *l_1030 = &g_58;
                    (*l_1030) |= p_22;
                    if (p_22)
                        continue;
                    if (p_22)
                        break;
                    (*l_1030) = ((safe_add_func_uint32_t_u_u(p_22, ((safe_sub_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x5DA5854FE8C688B2LL, (!((safe_rshift_func_int16_t_s_s(((g_62 , ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*g_24), ((void*)0 == &g_24))), (l_1049 = l_1048))) , (*g_24))) | (**g_23)), 5)) ^ 0xDFL)))), l_1050)), (**g_23))) == (**g_23)) , g_705.f1), 0xB2L)) , p_22))) >= (*g_1011));
                    (*g_129) = l_1051;
                }
                l_1064[1] = ((*l_1063) = ((*l_1061) = (safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((void*)0 == l_1056), ((*l_998) |= 0xC1C5L))) , l_1018) == (l_1057 = l_1057)), ((((safe_add_func_uint8_t_u_u(((*l_1060) &= l_1048), (((l_999 && 4L) > l_1048) , 0x67L))) & 0x8AL) | l_999) && l_1000[0][3][0])))));
            }
            else
            { 
                int32_t *l_1065 = (void*)0;
                int32_t *l_1083 = &l_1064[1];
                uint32_t l_1091 = 8UL;
                const int8_t l_1122 = 0xA0L;
                int32_t l_1136 = (-1L);
                int32_t l_1137 = 1L;
                int32_t l_1138[1][4] = {{0xACD789FCL,0xACD789FCL,0xACD789FCL,0xACD789FCL}};
                int i, j;
                l_1066 = l_1065;
                for (l_1007.f0.f2 = (-25); (l_1007.f0.f2 < 53); l_1007.f0.f2 = safe_add_func_uint64_t_u_u(l_1007.f0.f2, 3))
                { 
                    int32_t *l_1069 = &l_1049;
                    int32_t **l_1070 = &g_191[1];
                    (*l_1070) = l_1069;
                }
                if (((func_32((*g_23), p_22, l_930) , (l_999 = l_1050)) != (((safe_sub_func_uint64_t_u_u(((*l_974)--), (safe_sub_func_int64_t_s_s(((*l_995) = (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((p_22 < (((safe_lshift_func_int8_t_s_s(((+(((*l_1083) = (((*g_129) , 0x627EL) , 0xFE2FC515L)) , 0x3235230328D577E0LL)) != g_703.f5), (**g_23))) , (void*)0) != l_1084)))), 4))), 0UL)))) != p_22) ^ g_705.f4)))
                { 
                    int32_t *l_1087 = &l_1049;
                    int32_t *l_1089[2][2];
                    uint32_t *l_1094 = (void*)0;
                    uint32_t *l_1095 = &l_1091;
                    uint32_t *l_1101 = &g_385[2][0].f0;
                    uint32_t *l_1104 = &g_107.f0.f0;
                    int32_t **l_1112 = &l_1066;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1089[i][j] = &l_1064[1];
                    }
                    --l_1091;
                    (*l_1087) = (((**g_23) ^= (((l_999 = ((*l_1095) = p_22)) , (safe_sub_func_int16_t_s_s(((g_68[3][0]++) , p_22), ((*l_962) , 1UL)))) < (safe_unary_minus_func_uint8_t_u(((--(*l_1101)) != (**g_1010)))))) != (((*l_995) |= ((g_915 <= (((*l_1104) |= 0xA042DC77L) >= 0x0157B65DL)) & p_22)) < g_463[2]));
                    (*l_1087) &= (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_995) = p_22) < (safe_rshift_func_uint16_t_u_u((*l_1083), (*g_628)))) , (+(((void*)0 == l_1101) && (***g_1009)))), 7)), (*l_1083)));
                    (*l_1112) = &g_2;
                    (*l_1083) = (safe_mul_func_int16_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s((0x4CL < (((*g_628) ^ (safe_mul_func_int16_t_s_s((l_1119 != ((p_22 == (safe_lshift_func_uint8_t_u_s((p_22 , g_703.f5), 1))) , (void*)0)), p_22))) , (*l_1066))), (**p_21)))));
                }
                else
                { 
                    return l_1122;
                }
                if ((*l_1066))
                { 
                    int32_t *l_1123 = &g_58;
                    int32_t *l_1124 = &l_1064[1];
                    int32_t *l_1125 = &g_58;
                    int32_t *l_1126 = &l_1088;
                    int32_t *l_1127 = &l_1064[2];
                    int32_t *l_1128 = &l_999;
                    int32_t *l_1129 = &l_1088;
                    int32_t *l_1130 = &l_1049;
                    int32_t *l_1131 = (void*)0;
                    int32_t *l_1132 = &l_1064[2];
                    int32_t *l_1133 = &g_58;
                    int32_t *l_1134 = (void*)0;
                    int32_t *l_1135[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t l_1149[3];
                    union U3 **l_1153 = &l_1152;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1149[i] = 0x9D5BEA23L;
                    ++l_1149[2];
                    (*l_1153) = l_1152;
                    (***l_1085) = func_29(l_1154, (*p_21));
                }
                else
                { 
                    int32_t **l_1155 = &g_191[4];
                    (*l_1155) = &l_1141;
                }
            }
            l_1090 |= (!(l_1007.f0.f4 == g_25));
            if ((safe_div_func_int64_t_s_s(p_22, (safe_rshift_func_uint8_t_u_u(((((+((l_1088 &= l_1007.f0.f4) != g_463[2])) < (((p_22 ^ (0x11F5C978L <= ((((p_22 ^ (~(((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_1147[3] = l_1148), 0UL)), 7L)) > 1UL), p_22)), 15)) > 0x3620DBD643B638C6LL) && 1L), (-9L))), (*g_24))), p_22)) , 18446744073709551615UL) , g_89))) , l_1152) == l_1177) > p_22))) > (**p_21)) < p_22)) ^ 0xF4L) & 1UL), 1)))))
            { 
                int32_t l_1193 = 1L;
                int32_t l_1198 = (-7L);
                int32_t *l_1199[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1199[i] = &l_1146;
                g_191[1] = &l_1064[2];
                l_1139 = (l_1147[0] &= (safe_add_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u((((*g_704) , (safe_mod_func_uint64_t_u_u(p_22, (((*l_995) = g_463[0]) , (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((**l_938) = ((**p_21) || ((((func_32((*g_23), (~(safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((l_1193 ^= (((***l_1085) , p_22) <= (*g_24))), 3)) && p_22), (-8L)))), l_1194) , l_1195) == l_1196) , l_1197) , 2UL))) ^ p_22), l_1154.f4)), 12)))))) != l_1198), g_61[1][4][0])) | p_22) >= 3UL), (-2L))));
            }
            else
            { 
                int32_t *l_1200 = &l_999;
                (*l_1200) = p_22;
            }
            l_1090 |= ((*l_1212) = ((safe_rshift_func_uint8_t_u_s(((*l_1205) = ((safe_rshift_func_int16_t_s_u((1L > 0xAF6A074EL), 1)) > ((*p_21) == (*g_23)))), 2)) , (((!((~((((safe_rshift_func_uint16_t_u_u(0xA407L, ((safe_mul_func_uint8_t_u_u(p_22, (g_463[4] , 9L))) || (*g_628)))) || 1L) <= g_703.f4) | p_22)) ^ l_1088)) , &l_938) == (void*)0)));
        }
        else
        { 
            int32_t l_1225 = (-8L);
            int32_t l_1247 = 0L;
            int32_t l_1248 = 0x52DA9198L;
            int32_t l_1249[2];
            uint32_t l_1256[2][4][5] = {{{1UL,0xAED88CF1L,1UL,0x4AFA8AA7L,0x4AFA8AA7L},{18446744073709551607UL,0UL,18446744073709551607UL,0xBBAC0769L,0UL},{1UL,0xAED88CF1L,1UL,0x4AFA8AA7L,0x4AFA8AA7L},{18446744073709551607UL,0UL,18446744073709551607UL,0xBBAC0769L,0UL}},{{1UL,0xAED88CF1L,1UL,0x4AFA8AA7L,0x4AFA8AA7L},{18446744073709551607UL,0UL,18446744073709551607UL,0xBBAC0769L,0UL},{1UL,0xAED88CF1L,1UL,0x4AFA8AA7L,0x4AFA8AA7L},{18446744073709551607UL,0UL,18446744073709551607UL,0xBBAC0769L,0UL}}};
            int32_t *l_1261 = &l_1247;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1249[i] = 0x0CB10FD9L;
            l_1214 = &g_2;
            for (g_62 = 0; (g_62 > 27); g_62 = safe_add_func_uint8_t_u_u(g_62, 1))
            { 
                int32_t ***l_1218 = &l_950;
                int32_t ****l_1217 = &l_1218;
                (*l_1217) = &l_950;
                for (l_999 = 0; (l_999 > 7); l_999++)
                { 
                    int32_t *l_1221[4] = {&l_1147[1],&l_1147[1],&l_1147[1],&l_1147[1]};
                    struct S1 **l_1222 = &g_525;
                    struct S1 *l_1224 = &g_703;
                    struct S1 **l_1223 = &l_1224;
                    int i;
                    l_1221[0] = &g_915;
                    l_1225 = (l_1196 == ((*l_1223) = ((*l_1222) = &l_1154)));
                    return p_22;
                }
            }
            if (l_1007.f0.f2)
                goto lbl_1226;
            if ((*l_1214))
            { 
                uint64_t l_1250 = 18446744073709551615UL;
                int32_t l_1254 = 0xF32967DFL;
                int32_t l_1255[6][6][6] = {{{0x1F26BFB0L,0x386CDCECL,0x386CDCECL,0x1F26BFB0L,(-1L),1L},{0x1F26BFB0L,(-1L),1L,0x386CDCECL,6L,0x1F26BFB0L},{0xEC8C6F55L,7L,0x386CDCECL,0xC8C4D6EAL,6L,7L},{6L,(-1L),0x996B1E71L,0x996B1E71L,(-1L),6L},{0xEC8C6F55L,0x386CDCECL,0x996B1E71L,6L,0xEC8C6F55L,7L},{0x1F26BFB0L,6L,0x386CDCECL,1L,(-1L),0x1F26BFB0L}},{{0x1F26BFB0L,2L,1L,6L,6L,1L},{0xEC8C6F55L,0xEC8C6F55L,0x386CDCECL,0x996B1E71L,6L,0xEC8C6F55L},{6L,2L,0x996B1E71L,0xC8C4D6EAL,(-1L),0x386CDCECL},{0xEC8C6F55L,6L,0x996B1E71L,0x386CDCECL,0xEC8C6F55L,0xEC8C6F55L},{0x1F26BFB0L,0x386CDCECL,0x386CDCECL,0x1F26BFB0L,(-1L),1L},{0x1F26BFB0L,(-1L),1L,0x386CDCECL,6L,0x1F26BFB0L}},{{0xEC8C6F55L,7L,0x386CDCECL,0xC8C4D6EAL,6L,7L},{6L,(-1L),0x996B1E71L,0x996B1E71L,(-1L),6L},{0xEC8C6F55L,0x386CDCECL,0x996B1E71L,6L,0xEC8C6F55L,7L},{0x1F26BFB0L,6L,0x386CDCECL,1L,(-1L),0x1F26BFB0L},{0x1F26BFB0L,2L,1L,6L,6L,1L},{0xEC8C6F55L,0xEC8C6F55L,0x386CDCECL,0x996B1E71L,0x1F26BFB0L,6L}},{{0x1F26BFB0L,7L,2L,(-1L),0xEC8C6F55L,1L},{6L,0x1F26BFB0L,2L,1L,6L,6L},{0xC8C4D6EAL,1L,1L,0xC8C4D6EAL,0xEC8C6F55L,0x996B1E71L},{0xC8C4D6EAL,0xEC8C6F55L,0x996B1E71L,1L,0x1F26BFB0L,0xC8C4D6EAL},{6L,0x386CDCECL,1L,(-1L),0x1F26BFB0L,0x386CDCECL},{0x1F26BFB0L,0xEC8C6F55L,2L,2L,0xEC8C6F55L,0x1F26BFB0L}},{{6L,1L,2L,0x1F26BFB0L,6L,0x386CDCECL},{0xC8C4D6EAL,0x1F26BFB0L,1L,0x996B1E71L,0xEC8C6F55L,0xC8C4D6EAL},{0xC8C4D6EAL,7L,0x996B1E71L,0x1F26BFB0L,0x1F26BFB0L,0x996B1E71L},{6L,6L,1L,2L,0x1F26BFB0L,6L},{0x1F26BFB0L,7L,2L,(-1L),0xEC8C6F55L,1L},{6L,0x1F26BFB0L,2L,1L,6L,6L}},{{0xC8C4D6EAL,1L,1L,0xC8C4D6EAL,0xEC8C6F55L,0x996B1E71L},{0xC8C4D6EAL,0xEC8C6F55L,0x996B1E71L,1L,0x1F26BFB0L,0xC8C4D6EAL},{6L,0x386CDCECL,1L,(-1L),0x1F26BFB0L,0x386CDCECL},{0x1F26BFB0L,0xEC8C6F55L,2L,2L,0xEC8C6F55L,0x1F26BFB0L},{6L,1L,2L,0x1F26BFB0L,6L,0x386CDCECL},{0xC8C4D6EAL,0x1F26BFB0L,1L,0x996B1E71L,0xEC8C6F55L,0xC8C4D6EAL}}};
                int i, j, k;
                if ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((**p_21) = (**p_21)), ((safe_mod_func_int16_t_s_s(((***g_1009) >= (l_1225 |= (safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(((p_22 == ((safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(0x8EAC6AEFL, ((!(-8L)) || 8UL))), ((*g_628) , g_61[0][6][0]))) != g_83[3][3][0].f0)) | 1UL), (*l_1214))), 1UL)))), p_22)) > 0x56L))), p_22)))
                { 
                    int32_t *l_1242 = &l_1147[0];
                    int32_t *l_1243 = &l_1090;
                    int32_t *l_1244 = &l_1088;
                    int32_t *l_1245 = &l_1064[1];
                    int32_t *l_1246[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1246[i] = &l_1146;
                    --l_1250;
                    if (l_1154.f4)
                        goto lbl_1226;
                }
                else
                { 
                    int32_t *l_1253[2];
                    int32_t **l_1260 = &l_1253[1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1253[i] = &g_58;
                    l_1090 ^= p_22;
                    l_1256[0][0][4]++;
                    (*g_129) = func_29(l_1154, l_1259);
                    l_1261 = ((*l_1260) = (void*)0);
                }
            }
            else
            { 
                struct S1 **l_1262 = (void*)0;
                for (l_1007.f0.f1 = 0; l_1007.f0.f1 < 2; l_1007.f0.f1 += 1)
                {
                    for (l_1194.f0 = 0; l_1194.f0 < 4; l_1194.f0 += 1)
                    {
                        for (g_67 = 0; g_67 < 5; g_67 += 1)
                        {
                            l_1256[l_1007.f0.f1][l_1194.f0][g_67] = 1UL;
                        }
                    }
                }
                l_1263 = &g_703;
            }
        }
        l_1194 = l_1194;
        for (l_1145 = 0; (l_1145 > (-17)); l_1145 = safe_sub_func_uint8_t_u_u(l_1145, 1))
        { 
            union U3 * const *l_1268 = &l_1152;
            union U3 * const **l_1267[2][4];
            int32_t l_1273[5][6][7] = {{{0L,0L,0x88FC1B45L,0xD5813A18L,0L,0x3A668EBCL,0xD323106FL},{0x88FC1B45L,(-8L),0xDBE391BCL,0xAA9ABFFFL,1L,0L,0xCA9F6193L},{0L,0xD5813A18L,1L,0xCA9F6193L,1L,0xD5813A18L,0L},{0L,0xD5813A18L,0L,0L,0x4FF61750L,0L,5L},{5L,(-8L),(-1L),0L,0xCA9F6193L,0xD323106FL,0L},{0xDBE391BCL,0L,0L,1L,0xD5813A18L,1L,0L}},{{0x4FF61750L,0x4FF61750L,1L,1L,0x8F724710L,0x88FC1B45L,1L},{0xD5813A18L,0x8F724710L,0xDBE391BCL,0L,5L,0L,(-8L)},{0xAA9ABFFFL,0x3A668EBCL,0x88FC1B45L,0L,0x8F724710L,0x2B091210L,0x8F724710L},{0xCA9F6193L,5L,5L,0xCA9F6193L,0xD5813A18L,0x2B091210L,(-1L)},{0L,0x88FC1B45L,0x3A668EBCL,0xAA9ABFFFL,0xCA9F6193L,0L,1L},{0L,0xDBE391BCL,0x8F724710L,0xD5813A18L,0xDD040440L,0L,0xAA9ABFFFL}},{{0x4FF61750L,(-1L),0xDD040440L,0xDD040440L,(-1L),0x4FF61750L,1L},{0x4FF61750L,0L,(-8L),0L,0xCA9F6193L,0x8F724710L,1L},{0L,0xAA9ABFFFL,1L,0xEE2A2570L,0L,0x3A668EBCL,0xCA9F6193L},{0L,0L,5L,0x88FC1B45L,0x88FC1B45L,5L,0L},{0xD323106FL,(-1L),5L,0x3A668EBCL,0x2B091210L,0x88FC1B45L,(-8L)},{1L,0L,1L,0L,0xD5813A18L,0xDBE391BCL,0xEE2A2570L}},{{5L,0L,(-8L),0x3A668EBCL,1L,1L,0x3A668EBCL},{0xDD040440L,0xEE2A2570L,0xDD040440L,0x88FC1B45L,1L,0L,0xD323106FL},{0L,0xDBE391BCL,1L,0xEE2A2570L,0xD5813A18L,(-1L),0x8F724710L},{0xEE2A2570L,1L,0xDBE391BCL,0L,0x2B091210L,0L,0L},{0x88FC1B45L,0xDD040440L,0xEE2A2570L,0xDD040440L,0x88FC1B45L,1L,0L},{0x3A668EBCL,(-8L),0L,5L,0L,0xDBE391BCL,0x8F724710L}},{{0L,1L,0L,1L,0xCA9F6193L,0x88FC1B45L,0xD323106FL},{0x3A668EBCL,5L,(-1L),0xD323106FL,(-1L),5L,0x3A668EBCL},{0x88FC1B45L,5L,0L,0L,0xDD040440L,0x3A668EBCL,0xEE2A2570L},{0xEE2A2570L,1L,0xAA9ABFFFL,0L,0xD323106FL,0x8F724710L,(-8L)},{0L,(-8L),0L,0x4FF61750L,5L,0x4FF61750L,0L},{0xDD040440L,0xDD040440L,(-1L),0x4FF61750L,1L,0L,0xCA9F6193L}}};
            int64_t **l_1293 = &l_995;
            int64_t *l_1295 = &l_1143;
            int64_t **l_1294 = &l_1295;
            uint32_t *l_1345 = &l_1007.f0.f0;
            int32_t *l_1346 = (void*)0;
            int32_t *l_1347[4][6][7] = {{{&l_1146,&l_1273[3][2][1],&l_1273[3][2][1],&l_1146,&g_915,&l_999,&l_1146},{&l_1273[3][2][1],&l_1146,&l_1146,&l_1273[3][2][1],&l_1090,(void*)0,&l_1146},{&l_1146,&l_1273[3][2][1],&g_2,&l_1146,&l_1146,&g_58,&l_1146},{&l_1064[1],&l_1146,&l_1146,&l_1064[1],&l_1146,(void*)0,&l_1090},{&l_1064[1],&l_1273[3][2][1],&l_1273[3][2][1],&l_1064[1],&l_1146,&l_999,&g_915},{&l_1064[1],&l_1146,&l_1273[2][4][5],&l_1064[1],&l_1090,&l_1145,&l_1090}},{{&l_1146,&l_1273[3][2][1],&l_1273[3][2][1],&l_1146,&g_915,&l_999,&l_1146},{&l_1273[3][2][1],&l_1146,&l_1146,&l_1273[3][2][1],&l_1090,(void*)0,&l_1146},{&l_1146,&l_1273[3][2][1],&g_2,&l_1146,&l_1146,&g_58,&l_1145},{&l_1146,&l_1145,&l_1145,&l_1146,(void*)0,&l_1146,&g_58},{&g_2,&l_999,&g_58,&g_2,&l_1145,(void*)0,&g_2},{&l_1146,(void*)0,&l_1147[1],&l_1146,&g_58,&l_1146,&g_58}},{{&l_1273[3][2][1],&g_58,&g_58,&l_1273[3][2][1],&g_2,(void*)0,&l_1145},{&l_1273[2][4][5],(void*)0,&l_1145,&l_1273[2][4][5],&g_58,&l_1146,(void*)0},{&l_1273[3][2][1],&l_999,&l_1064[1],&l_1273[3][2][1],&l_1145,&l_1273[4][2][1],&l_1145},{&l_1146,&l_1145,&l_1145,&l_1146,(void*)0,&l_1146,&g_58},{&g_2,&l_999,&g_58,&g_2,&l_1145,(void*)0,&g_2},{&l_1146,(void*)0,&l_1147[1],&l_1146,&g_58,&l_1146,&g_58}},{{&l_1273[3][2][1],&g_58,&g_58,&l_1273[3][2][1],&g_2,(void*)0,&l_1145},{&l_1273[2][4][5],(void*)0,&l_1145,&l_1273[2][4][5],&g_58,&l_1146,(void*)0},{&l_1273[3][2][1],&l_999,&l_1064[1],&l_1273[3][2][1],&l_1145,&l_1273[4][2][1],&l_1145},{&l_1146,&l_1145,&l_1145,&l_1146,(void*)0,&l_1146,&g_58},{&g_2,&l_999,&g_58,&g_2,&l_1145,(void*)0,&g_2},{&l_1146,(void*)0,&l_1147[1],&l_1146,&g_58,&l_1146,&g_58}}};
            uint8_t *l_1350 = (void*)0;
            uint8_t *l_1351 = (void*)0;
            uint8_t l_1434[5] = {246UL,246UL,246UL,246UL,246UL};
            union U2 *l_1446 = &g_100;
            struct S0 l_1451 = {1UL};
            struct S0 **l_1484 = &g_129;
            struct S0 ***l_1483 = &l_1484;
            uint32_t l_1485 = 1UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1267[i][j] = &l_1268;
            }
        }
    }
    return p_22;
}



static struct S0  func_29(struct S1  p_30, int8_t * p_31)
{ 
    struct S0 l_912[4] = {{0x18A7L},{0x18A7L},{0x18A7L},{0x18A7L}};
    uint16_t ** const l_913 = &g_628;
    int32_t *l_914 = &g_915;
    int32_t *l_916 = (void*)0;
    int32_t *l_917 = &g_58;
    int32_t *l_918[3][6] = {{&g_915,(void*)0,&g_915,(void*)0,&g_915,(void*)0},{&g_915,(void*)0,&g_915,(void*)0,&g_915,(void*)0},{&g_915,(void*)0,&g_915,(void*)0,&g_915,(void*)0}};
    uint32_t l_919 = 0x7AC1306DL;
    int16_t ***l_922 = &g_721;
    int16_t ****l_923 = (void*)0;
    int16_t ****l_924 = &l_922;
    int i, j;
    (*l_917) = ((*l_914) |= (g_58 >= ((l_912[3] , l_913) == l_913)));
    l_919++;
    (*l_924) = l_922;
    return l_912[2];
}



static struct S1  func_32(int8_t * const  p_33, int16_t  p_34, struct S0  p_35)
{ 
    struct S0 ****l_901 = &g_614;
    struct S0 **l_904 = &g_129;
    struct S0 ***l_903 = &l_904;
    struct S0 ****l_902 = &l_903;
    int32_t *l_905 = &g_58;
    int32_t *l_906 = &g_58;
    int32_t l_907 = (-1L);
    uint16_t l_908[1][3];
    struct S1 l_911 = {0x468C68CEL,1UL,4UL,0xEAC925D0L,-1L,0xF6L,-5L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_908[i][j] = 0x88D8L;
    }
    (*l_902) = ((*l_901) = g_614);
    ++l_908[0][0];
    return l_911;
}



static int8_t * const  func_36(int8_t ** p_37, int8_t * p_38, int8_t ** p_39)
{ 
    int32_t l_562 = (-3L);
    uint32_t *l_569 = &g_107.f0.f0;
    int32_t l_570 = 0x7867B544L;
    int32_t l_571[3];
    struct S0 **l_588 = &g_129;
    int32_t l_590[5];
    struct S0 ***l_615[6];
    uint16_t *l_626 = (void*)0;
    int8_t * const l_690 = &g_542;
    struct S1 l_724 = {4294967294UL,0xC67BL,0x528EB9E8552F8075LL,0x05071890L,0x4D1CL,255UL,-9L};
    uint8_t l_740[3][7][2] = {{{247UL,255UL},{255UL,255UL},{0UL,0x64L},{0UL,0UL},{0x32L,1UL},{0x64L,0x32L},{0x67L,0UL}},{{0x67L,0x32L},{0x64L,1UL},{0x32L,0UL},{0UL,0x64L},{0UL,255UL},{255UL,255UL},{247UL,0x08L}},{{0x37L,0UL},{0x5EL,7UL},{0UL,7UL},{0x5EL,0UL},{0x37L,0x08L},{247UL,255UL},{255UL,255UL}}};
    uint32_t *l_759[5];
    int64_t l_768 = 0xD107DC8F2338DA04LL;
    int64_t l_846 = 1L;
    uint8_t l_881 = 0x9EL;
    int32_t *l_896 = &l_590[4];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_571[i] = 0xE57B54B7L;
    for (i = 0; i < 5; i++)
        l_590[i] = 0x1CFF7239L;
    for (i = 0; i < 6; i++)
        l_615[i] = &l_588;
    for (i = 0; i < 5; i++)
        l_759[i] = &l_724.f0;
    if ((((l_571[1] = (l_562 || (safe_sub_func_int32_t_s_s(l_562, (g_188 , ((((*p_38) != (l_562 ^ (safe_div_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((0x44AD962EL ^ (l_570 = ((*l_569) = 0xEC829FC2L))) , 1UL), l_562)) == l_562) , l_570), l_562)))) <= l_562) && l_570)))))) ^ l_562) != g_53))
    { 
        int8_t *l_578 = &g_542;
        union U2 *l_581 = (void*)0;
        int32_t **l_585 = &g_191[1];
        int32_t l_586 = 0L;
        int8_t *l_587 = (void*)0;
        int32_t *l_589[7] = {&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58};
        struct S0 l_595 = {0xA47AL};
        union U3 l_606[4] = {{{8UL,65535UL,0x141344C3A915FCB6LL,-1L,0x9059L,0x6DL,0x381FL}},{{8UL,65535UL,0x141344C3A915FCB6LL,-1L,0x9059L,0x6DL,0x381FL}},{{8UL,65535UL,0x141344C3A915FCB6LL,-1L,0x9059L,0x6DL,0x381FL}},{{8UL,65535UL,0x141344C3A915FCB6LL,-1L,0x9059L,0x6DL,0x381FL}}};
        struct S0 ** const *l_684 = &l_588;
        struct S1 *l_702 = &g_703;
        uint32_t *l_757 = &g_703.f0;
        uint64_t l_760 = 0x6240A94C21D6A067LL;
        uint8_t l_784 = 8UL;
        int8_t l_808 = 0x10L;
        uint32_t l_820 = 4294967295UL;
        uint8_t l_824[6][7] = {{0x52L,251UL,251UL,251UL,251UL,251UL,0x09L},{1UL,0x1EL,1UL,0x04L,0x04L,1UL,0x1EL},{0x09L,0x52L,0x01L,0x01L,0x52L,0x09L,0x52L},{1UL,0x04L,0x04L,1UL,0x1EL,1UL,0x04L},{251UL,251UL,0x09L,0x01L,0x09L,251UL,251UL},{0UL,0x04L,6UL,0x04L,0UL,0UL,0x04L}};
        int i, j;
        l_590[4] ^= (((l_571[1] = (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((l_571[1] & (safe_sub_func_int8_t_s_s(((*l_578) = (**p_39)), (((((l_570 = (safe_div_func_uint64_t_u_u(((((g_100 , l_581) == (void*)0) ^ (g_68[0][2] != (safe_rshift_func_int16_t_s_u(((~((((((void*)0 != l_585) <= g_61[1][3][0]) & l_562) , &g_100) != l_581)) >= l_562), g_385[2][0].f4)))) , l_571[0]), 0x09225960EA358E14LL))) > g_463[2]) | l_586) == 7UL) ^ l_586)))), l_571[0])) < 1L), l_586))) , l_588) != (void*)0);
lbl_809:
        for (g_107.f0.f4 = 0; (g_107.f0.f4 < (-20)); g_107.f0.f4--)
        { 
            struct S0 *l_593 = &g_100.f1;
            struct S0 *l_594 = &g_100.f0;
            l_595 = (**l_588);
            (*l_588) = &l_595;
        }
lbl_673:
        g_191[3] = &l_590[4];
        if ((0x11100CBAL != (safe_rshift_func_uint8_t_u_u((l_570 & (-4L)), 0))))
        { 
            int8_t l_599 = 0x09L;
            int32_t l_603 = 0x74492BB6L;
            int16_t *l_613 = &g_107.f0.f4;
            int16_t * const *l_612[6][6] = {{&l_613,(void*)0,(void*)0,&l_613,(void*)0,&l_613},{(void*)0,&l_613,(void*)0,(void*)0,&l_613,(void*)0},{(void*)0,(void*)0,&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,(void*)0,(void*)0,(void*)0},{&l_613,(void*)0,(void*)0,&l_613,(void*)0,&l_613},{(void*)0,&l_613,(void*)0,(void*)0,&l_613,(void*)0}};
            int16_t * const **l_611 = &l_612[3][4];
            int32_t l_630 = 0L;
            const struct S0 *l_648 = (void*)0;
            struct S1 l_659[2][4][7] = {{{{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L}},{{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L}},{{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L}},{{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L}}},{{{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L}},{{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L}},{{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L},{0xF3A46659L,0xFA3EL,0x3D5828860A274076LL,-1L,1L,0x69L,-1L}},{{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L},{0UL,0x3C29L,18446744073709551611UL,0L,-4L,255UL,-1L}}}};
            union U3 l_753[2] = {{{0x23C6057DL,65535UL,0x094BC6557905D9EBLL,1L,0L,0xD4L,0x8FBFL}},{{0x23C6057DL,65535UL,0x094BC6557905D9EBLL,1L,0L,0xD4L,0x8FBFL}}};
            uint32_t *l_756 = &l_606[3].f0.f0;
            int i, j, k;
            for (g_107.f0.f5 = 0; (g_107.f0.f5 <= 0); g_107.f0.f5 += 1)
            { 
                int32_t l_598 = 4L;
                int32_t l_600 = 1L;
                int64_t l_629 = 0x6705466897A3F542LL;
                int32_t l_647[7][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                struct S1 l_662 = {0UL,0UL,0xC5F8FAD69C5491C6LL,9L,0x2DF4L,0UL,0x2AE2L};
                int i, j;
                l_603 = (((l_598 = (l_599 = l_598)) || 0x6681BB3CL) != (l_600 ^ (safe_mul_func_int16_t_s_s(l_603, l_571[2]))));
                g_191[1] = (void*)0;
                if ((safe_lshift_func_uint8_t_u_s((g_83[3][3][0].f3 <= (l_606[3] , (safe_rshift_func_int8_t_s_s(((*l_578) = (18446744073709551615UL && ((safe_rshift_func_uint16_t_u_u(((void*)0 != l_611), ((g_614 == ((((l_603 <= 0UL) < g_385[2][0].f0) , l_600) , l_615[3])) < 0UL))) , g_83[3][3][0].f4))), (**g_23))))), (**p_39))))
                { 
                    const union U3 **l_616[4][7][1] = {{{&g_513},{(void*)0},{&g_513},{&g_513},{&g_513},{&g_513},{&g_513}},{{&g_513},{&g_513},{&g_513},{&g_513},{(void*)0},{&g_513},{&g_513}},{{&g_513},{&g_513},{&g_513},{(void*)0},{&g_513},{&g_513},{&g_513}},{{&g_513},{&g_513},{&g_513},{&g_513},{(void*)0},{&g_513},{(void*)0}}};
                    const union U3 ***l_617 = &l_616[3][6][0];
                    uint16_t **l_627 = &l_626;
                    int i, j, k;
                    (*l_617) = l_616[3][0][0];
                    l_630 ^= (((l_571[1] = (l_595 , (+0x5685L))) && (l_599 & (safe_rshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s((~1L), ((safe_mul_func_uint16_t_u_u((((*l_627) = l_626) == (g_628 = &g_188)), 9L)) ^ (-4L)))) != l_629), l_603)))) < g_83[3][3][0].f3);
                    (*l_585) = &g_2;
                }
                else
                { 
                    return (*p_39);
                }
                for (g_367 = 0; (g_367 <= 0); g_367 += 1)
                { 
                    int64_t *l_645 = &g_92;
                    int32_t l_646 = (-10L);
                    uint8_t *l_651 = &g_100.f2;
                    uint8_t *l_652 = &g_68[0][0];
                    uint64_t *l_655 = (void*)0;
                    uint64_t *l_656 = &g_385[2][0].f2;
                    int32_t *l_665 = &g_463[1];
                    uint32_t *l_666 = (void*)0;
                    uint32_t *l_667 = (void*)0;
                    uint32_t *l_668 = &g_669;
                    struct S1 **l_670 = &g_525;
                    l_647[1][2] ^= (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(1UL, (((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_int64_t_s_s(l_598, ((*l_645) = l_590[0]))) | (l_646 && 0L)), (*g_628))), ((l_562 & 65535UL) || 0x46C1D31BECF26CE9LL))), l_646)) || g_107.f0.f3) || 0xFAA6EBB6L))), l_603)) < g_385[2][0].f2), 0x5AL));
                    l_570 |= (l_646 = (((*l_668) = ((l_648 == (((*l_665) = ((safe_sub_func_int32_t_s_s(((((*l_652) ^= l_647[0][4]) && (safe_rshift_func_uint16_t_u_s(((((*l_645) = (0xA19E479A8E7BE43ALL != (++(*l_656)))) , l_659[0][3][2]) , (safe_lshift_func_uint16_t_u_u(l_646, (l_662 , ((safe_sub_func_int64_t_s_s(((*l_645) = (l_659[0][3][2].f3 , 0xA3CD3F2B6883A3A3LL)), l_571[0])) > l_571[1]))))), 4))) >= (-6L)), 8L)) != l_646)) , &l_595)) , l_590[4])) , 0xF3F0B929L));
                    (*l_670) = &g_385[0][0];
                    (*l_585) = &l_646;
                }
            }
            for (g_89 = 9; (g_89 == 32); g_89 = safe_add_func_uint16_t_u_u(g_89, 1))
            { 
                uint64_t *l_674 = &g_385[2][0].f2;
                int32_t l_683 = (-5L);
                const struct S1 l_687 = {0x45E488CBL,0UL,0xEE397215692D5D47LL,-1L,0x0AE8L,0xEBL,0x1479L};
                int8_t * const l_689 = &l_599;
                if (l_586)
                    goto lbl_673;
                if (((1L == g_385[2][0].f1) >= ((*l_674)--)))
                { 
                    int64_t l_677 = 0x5DDBB9694E14ADE8LL;
                    if (l_677)
                        break;
                }
                else
                { 
                    union U2 **l_678 = &l_581;
                    uint8_t *l_679 = (void*)0;
                    uint8_t *l_680 = &g_100.f2;
                    uint8_t *l_681 = (void*)0;
                    uint8_t *l_682 = &l_606[3].f0.f5;
                    (*l_678) = &g_100;
                    l_571[1] ^= (((255UL ^ ((*l_682) ^= 0x96L)) && (l_683 <= (l_683 >= (l_684 == &l_588)))) <= (((safe_mod_func_int16_t_s_s(g_188, g_463[2])) < 0xAEA7BD217057A9E2LL) <= l_590[4]));
                }
                if (((l_687 , (~((*g_24) >= g_367))) ^ ((*l_578) = l_687.f6)))
                { 
                    return l_690;
                }
                else
                { 
                    struct S1 **l_701 = &g_525;
                    struct S1 l_706[2] = {{0x167BFDBCL,65531UL,0x2D0C4B9570E6C872LL,0x30F5106EL,5L,0x25L,-1L},{0x167BFDBCL,65531UL,0x2D0C4B9570E6C872LL,0x30F5106EL,5L,0x25L,-1L}};
                    int32_t l_707 = 0x0DD6F483L;
                    int i;
                    l_707 = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_58, (((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((*g_628) = (((safe_rshift_func_int8_t_s_s(0xFBL, 4)) ^ (((l_702 = &g_385[2][0]) == (g_704 = &l_659[1][3][5])) == (l_571[1] = l_687.f1))) ^ g_385[2][0].f5)), (l_706[0] , g_107.f0.f3))), l_659[0][3][2].f5)) ^ g_67) && 18446744073709551615UL))), l_687.f4)) & (*p_38));
                    return (*g_23);
                }
            }
            (*l_585) = &l_603;
            for (g_107.f0.f5 = 12; (g_107.f0.f5 != 31); ++g_107.f0.f5)
            { 
                int32_t l_722 = (-1L);
                int8_t l_723[7];
                struct S0 l_733 = {1UL};
                int64_t *l_750 = &g_92;
                int64_t *l_754 = &g_755;
                uint32_t **l_758[1][7][5] = {{{&l_756,&l_756,&l_756,&l_756,&l_756},{(void*)0,&l_569,&l_569,&l_569,(void*)0},{&l_756,&l_756,&l_756,&l_756,&l_756},{(void*)0,&l_569,&l_756,&l_569,&l_756},{&l_756,&l_756,&l_756,&l_756,&l_756},{&l_756,&l_569,&l_756,&l_569,(void*)0},{&l_756,&l_756,&l_756,&l_756,&l_756}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_723[i] = 0xEBL;
                for (l_586 = 0; (l_586 < (-15)); --l_586)
                { 
                    struct S0 *l_712 = &l_595;
                    int32_t l_730[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_730[i] = (-7L);
                    l_712 = (**l_684);
                    l_723[1] &= ((safe_add_func_uint8_t_u_u(0x72L, g_463[2])) && ((safe_lshift_func_int16_t_s_s((g_68[3][3] >= (safe_sub_func_uint32_t_u_u(((*p_38) > (safe_rshift_func_int16_t_s_s((g_721 == (void*)0), ((*g_628) , l_722)))), (-9L)))), g_107.f0.f6)) ^ 0L));
                    l_571[1] = ((l_724 , l_648) == l_712);
                    l_730[3] &= (l_722 = (safe_unary_minus_func_int16_t_s(((((safe_div_func_int32_t_s_s(0x038DAAFEL, (0xCB967934L ^ ((safe_add_func_int64_t_s_s(l_723[3], g_2)) > (**g_23))))) & l_724.f6) || l_724.f2) < (-1L)))));
                }
                if (l_723[1])
                    continue;
                for (l_562 = 25; (l_562 > 1); l_562 = safe_sub_func_int64_t_s_s(l_562, 4))
                { 
                    uint16_t l_741 = 0x3975L;
                }
                l_760 = (safe_sub_func_uint16_t_u_u((l_569 == (l_759[2] = (l_757 = (((safe_rshift_func_uint8_t_u_u(0x1FL, (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((0x224CBA14DFF13BA3LL != l_723[4]) >= (((*l_754) = (((((g_703.f2 <= ((*l_750) = (-1L))) , (((((safe_rshift_func_int8_t_s_s(1L, (*p_38))) > g_416) > g_68[0][0]) , 0xE1069405L) != l_723[1])) < g_385[2][0].f3) , l_753[0]) , g_107.f0.f2)) | l_571[2])), l_571[0])), (-1L))))) == 0L) , l_756)))), (*g_628)));
            }
            for (l_724.f5 = (-29); (l_724.f5 == 44); l_724.f5 = safe_add_func_int64_t_s_s(l_724.f5, 1))
            { 
                return (*g_23);
            }
        }
        else
        { 
            union U2 **l_763 = &l_581;
            int32_t l_777 = 1L;
            uint16_t **l_819 = &g_628;
            uint8_t *l_829[3];
            int64_t *l_830 = &g_755;
            int64_t *l_831 = &g_92;
            uint64_t *l_838 = &l_724.f2;
            int i;
            for (i = 0; i < 3; i++)
                l_829[i] = (void*)0;
            (*l_763) = &g_100;
            for (g_367 = 0; (g_367 >= 19); ++g_367)
            { 
                uint64_t l_769 = 18446744073709551611UL;
                uint16_t * const l_772[3][1][1] = {{{&g_385[2][0].f1}},{{&g_385[2][0].f1}},{{&g_385[2][0].f1}}};
                int32_t l_778 = 0x85B91450L;
                int32_t l_779 = 0x72C165C7L;
                int32_t l_782 = 1L;
                int i, j, k;
                l_590[2] = ((l_769 = ((**l_588) , l_768)) < ((((**g_23) || (**p_37)) ^ (safe_sub_func_uint16_t_u_u(((l_772[1][0][0] != l_772[1][0][0]) < (!((~((l_740[2][2][1] == 1L) != l_571[1])) < 0x157EL))), l_571[1]))) >= 65535UL));
                for (g_188 = 0; (g_188 > 44); g_188 = safe_add_func_int64_t_s_s(g_188, 4))
                { 
                    int64_t l_780 = 0L;
                    int32_t l_781 = 0L;
                    int32_t l_783[2];
                    int8_t *l_801 = &g_416;
                    int64_t l_806 = 0xB66D229F37D11F66LL;
                    uint8_t *l_807 = &g_703.f5;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_783[i] = 0x63487B61L;
                    --l_784;
                    l_781 = ((l_808 = ((safe_rshift_func_int8_t_s_u((*g_24), 5)) , (l_783[1] != ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((*l_690) = l_783[0]) >= ((*l_807) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(g_53, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_779, (((*l_801) = l_782) ^ (safe_mod_func_uint32_t_u_u((((safe_div_func_int64_t_s_s((l_768 , g_703.f2), l_778)) > l_806) != l_777), l_724.f1))))) <= l_781), (-1L))))), l_724.f1)))), l_777)), l_783[0])) , g_62)))) >= 0x23E26476L);
                    if (l_806)
                        goto lbl_809;
                }
                return (*p_37);
            }
            l_590[4] |= (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((!((safe_add_func_int32_t_s_s(l_777, ((((-5L) >= (safe_lshift_func_uint8_t_u_s(((0xA0916C9336752C19LL & l_768) == (l_777 > l_724.f3)), (l_819 != l_819)))) < g_463[4]) ^ 0x69FF3071L))) || l_820)), l_571[2])) == g_188), l_777));
            l_777 = ((***l_684) , (l_590[4] |= (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(l_824[0][6])), ((*l_838) = (safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((l_777 < ((((*l_831) = ((*l_830) &= ((g_703.f5 ^= g_705.f5) & (**p_39)))) & (((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((-3L) < ((safe_lshift_func_int8_t_s_u((2UL ^ l_724.f5), g_107.f0.f0)) | 1L)), g_669)), g_83[3][3][0].f0)) > g_61[0][5][0]) != g_116.f0)) > 1UL)), 7)) != 0L) , l_777), l_740[1][0][1])))))));
        }
    }
    else
    { 
        int32_t *l_839 = &l_570;
        uint8_t l_860 = 255UL;
        struct S0 **l_861 = &g_129;
        int32_t *l_862[5][1][7] = {{{&l_571[1],&g_58,(void*)0,&g_58,&l_571[1],&l_590[2],&l_570}},{{&l_571[0],&l_571[1],&g_58,&l_590[2],(void*)0,&l_590[2],&g_58}},{{&l_570,&l_570,(void*)0,(void*)0,&l_571[1],&l_571[2],&l_571[0]}},{{&l_571[0],&l_590[2],(void*)0,(void*)0,&l_590[2],&l_571[0],(void*)0}},{{&l_571[1],(void*)0,&g_58,(void*)0,&l_571[1],&l_571[1],(void*)0}}};
        int8_t * const l_875 = &g_367;
        int32_t l_880 = 0L;
        int i, j, k;
        (*l_839) = 0x73D2E230L;
        (*l_839) = (safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(0xB5181375L, (((*l_839) | (((0x701D2FCA56872B86LL == (safe_lshift_func_int16_t_s_u(((&g_58 == &g_2) > ((*g_24) <= (**p_37))), 0))) & 0x77L) && 0xB5D1L)) , l_846))) && l_724.f6), (*l_839)));
        l_590[4] ^= (((((+((~(((**g_23) , (safe_rshift_func_uint16_t_u_s(0x9F04L, ((safe_mul_func_int8_t_s_s((((((l_724 , ((safe_sub_func_uint64_t_u_u((*l_839), l_724.f4)) , ((+l_571[0]) >= (((((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((*l_839), (*l_839))), 0xF3643EA027ADD40BLL)) | (**p_39)) & (*l_839)) == 0x6DF6770B4B7D10B7LL) == l_740[1][0][1])))) ^ l_724.f3) || l_846) > 4294967295UL) || g_83[3][3][0].f6), l_846)) == l_860)))) && l_571[1])) >= 0x828BL)) < (*l_839)) > (*l_839)) , l_861) != (void*)0);
        for (g_188 = 0; (g_188 <= 1); g_188 += 1)
        { 
            uint16_t l_871 = 65527UL;
            int32_t l_876 = 0L;
            int32_t l_877 = 0xEDC9262FL;
            int32_t l_878 = 0x9970FFD2L;
            int32_t l_879[1][6][1];
            int32_t **l_890 = &g_191[0];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_879[i][j][k] = 1L;
                }
            }
            for (g_669 = 0; (g_669 <= 1); g_669 += 1)
            { 
                int64_t l_867 = 8L;
                for (l_562 = 0; (l_562 <= 1); l_562 += 1)
                { 
                    uint64_t l_868 = 0xD56260B169337381LL;
                    g_874 = ((l_724.f5 , (safe_mul_func_int8_t_s_s((((0x6B913DE5L <= ((l_724.f4 || (safe_rshift_func_int8_t_s_u(l_867, 2))) , l_868)) >= (safe_sub_func_int64_t_s_s(l_871, ((safe_lshift_func_int8_t_s_s((g_100 , (*g_24)), 3)) & l_868)))) != g_107.f0.f5), l_768))) & l_871);
                    return l_875;
                }
            }
            --l_881;
            for (g_703.f4 = 0; (g_703.f4 <= 1); g_703.f4 += 1)
            { 
                uint64_t l_887 = 0x23986ACE723E90A7LL;
                for (g_703.f1 = 0; (g_703.f1 <= 1); g_703.f1 += 1)
                { 
                    const int32_t **l_884 = (void*)0;
                    int32_t **l_885 = &l_862[1][0][1];
                    int32_t l_886 = 8L;
                    g_191[1] = l_839;
                    (*l_885) = (void*)0;
                    if (l_724.f6)
                        continue;
                    --l_887;
                }
                for (g_107.f0.f1 = 0; (g_107.f0.f1 <= 0); g_107.f0.f1 += 1)
                { 
                    return (*g_23);
                }
            }
            (*l_890) = &g_58;
            for (l_846 = 0; (l_846 <= 1); l_846 += 1)
            { 
                uint8_t l_891 = 249UL;
                for (g_703.f2 = 0; (g_703.f2 <= 1); g_703.f2 += 1)
                { 
                    l_862[1][0][1] = &g_58;
                    if ((*l_839))
                        continue;
                    ++l_891;
                    if (l_571[0])
                        break;
                }
                (*l_890) = ((*g_129) , &g_2);
                (*l_839) = (0L != ((safe_mod_func_int32_t_s_s((8UL | (*g_24)), l_891)) ^ l_724.f1));
                for (l_724.f0 = 0; (l_724.f0 <= 1); l_724.f0 += 1)
                { 
                    return (*p_39);
                }
                return (*g_23);
            }
        }
    }
    (*l_896) ^= l_724.f4;
    l_571[1] ^= ((*l_896) | (((safe_mod_func_uint16_t_u_u(1UL, (*l_896))) >= (((*l_896) > (*l_896)) < (safe_add_func_int64_t_s_s(((((((*l_896) , 18446744073709551606UL) , 0xEDL) < (*l_896)) || (*l_896)) ^ (*l_896)), (*l_896))))) < g_63[0]));
    return (*g_23);
}



static int8_t * func_40(int64_t  p_41, int8_t ** p_42, int16_t  p_43)
{ 
    int32_t l_59 = 0x9980A6F8L;
    int32_t l_66 = 0x03AC4640L;
    uint64_t l_94 = 1UL;
    struct S0 l_101 = {0UL};
    union U3 *l_103 = (void*)0;
    int32_t *l_275[3];
    int8_t *l_315 = &g_62;
    int32_t l_325 = (-5L);
    struct S0 **l_334 = &g_129;
    int32_t l_429 = 2L;
    int16_t l_430 = (-1L);
    int32_t **l_434 = (void*)0;
    int32_t **l_435[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S1 l_452 = {0x6A7CA8ECL,0x9B95L,1UL,-1L,8L,0x56L,-1L};
    uint8_t *l_453 = &g_68[0][0];
    uint8_t *l_454[4][2][6] = {{{&g_385[2][0].f5,&g_385[2][0].f5,&g_385[2][0].f5,&l_452.f5,&g_107.f0.f5,&l_452.f5},{(void*)0,&g_385[2][0].f5,(void*)0,&g_385[2][0].f5,&g_385[2][0].f5,&g_385[2][0].f5}},{{&g_385[2][0].f5,(void*)0,(void*)0,&g_385[2][0].f5,&g_385[2][0].f5,&l_452.f5},{&l_452.f5,&g_385[2][0].f5,&g_385[2][0].f5,&g_385[2][0].f5,&l_452.f5,&g_385[2][0].f5}},{{&g_385[2][0].f5,&l_452.f5,&g_385[2][0].f5,&g_385[2][0].f5,&l_452.f5,&g_385[2][0].f5},{(void*)0,&g_385[2][0].f5,&g_385[2][0].f5,&l_452.f5,&g_385[2][0].f5,&g_385[2][0].f5}},{{&g_385[2][0].f5,(void*)0,&g_385[2][0].f5,&g_385[2][0].f5,&g_385[2][0].f5,&g_385[2][0].f5},{&g_385[2][0].f5,&g_385[2][0].f5,&g_385[2][0].f5,&l_452.f5,&g_107.f0.f5,&l_452.f5}}};
    int16_t l_455 = 0xA02CL;
    int16_t ***l_456 = (void*)0;
    int16_t *l_458 = (void*)0;
    int16_t * const *l_457 = &l_458;
    uint64_t l_474[7] = {0x2945B6AD69DD57C6LL,0x2945B6AD69DD57C6LL,0x2945B6AD69DD57C6LL,0x2945B6AD69DD57C6LL,0x2945B6AD69DD57C6LL,0x2945B6AD69DD57C6LL,0x2945B6AD69DD57C6LL};
    int8_t *l_475 = (void*)0;
    int8_t *l_476 = &g_367;
    uint8_t l_477 = 1UL;
    int8_t *l_561[4] = {&g_25,&g_25,&g_25,&g_25};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_275[i] = &g_58;
    for (p_41 = 0; (p_41 > 15); p_41++)
    { 
        int32_t *l_57[4];
        uint8_t l_138 = 255UL;
        struct S1 l_165 = {0x49A46C97L,8UL,0x1976A6A2F9622FFCLL,0x4505FA69L,8L,0xB9L,-1L};
        uint32_t l_198 = 0x3934F947L;
        union U3 l_246 = {{1UL,0x2E72L,18446744073709551615UL,3L,5L,0x1FL,0x259FL}};
        struct S0 l_286 = {65535UL};
        uint32_t l_289 = 0x79CEF782L;
        uint32_t *l_308[1];
        uint32_t l_328 = 0xC29DD93EL;
        int32_t l_369 = 0xC0EF8D42L;
        struct S1 * const l_391 = &l_165;
        struct S1 * const *l_390[5][7] = {{&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391},{&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391},{&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391},{&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391},{&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391}};
        union U2 l_395 = {{1UL}};
        uint8_t l_419[5][6][6] = {{{0UL,1UL,0x0FL,1UL,0xBEL,255UL},{255UL,0xA8L,0x68L,1UL,254UL,0xC3L},{247UL,0xCAL,0x3EL,0xBEL,0x39L,7UL},{0x95L,0x16L,0xD1L,1UL,0x0FL,253UL},{248UL,0xBEL,253UL,253UL,0UL,0x31L},{254UL,0UL,1UL,249UL,253UL,0x47L}},{{0xE8L,0x39L,255UL,0xA7L,0x95L,0xBFL},{255UL,1UL,1UL,0x16L,1UL,0xDBL},{0x98L,0x6AL,247UL,0x31L,1UL,0xF2L},{255UL,255UL,253UL,0x98L,255UL,0xB9L},{0UL,255UL,254UL,0x73L,253UL,2UL},{255UL,0x10L,0x98L,0xC5L,1UL,0xC5L}},{{0x10L,0xC3L,0x10L,1UL,0x7CL,0UL},{0x47L,1UL,0x8DL,0UL,0xDCL,1UL},{0xDBL,0xA2L,0x97L,0UL,0x07L,1UL},{0x47L,255UL,255UL,1UL,254UL,0x58L},{0x10L,0x7EL,0x50L,0xC5L,0UL,0xCAL},{255UL,1UL,0x07L,0x73L,0xCAL,0xD1L}},{{0UL,0xBFL,0UL,0x98L,1UL,0x13L},{255UL,0UL,0x39L,0x31L,0xF2L,0xA2L},{0x98L,0UL,0x7CL,0x16L,0x47L,0xE8L},{255UL,0x66L,2UL,0xA7L,1UL,0x68L},{0xE8L,1UL,1UL,249UL,0x10L,0x07L},{254UL,5UL,0x56L,253UL,0xA8L,0x73L}},{{248UL,0xF2L,255UL,1UL,1UL,0x16L},{0x95L,253UL,0UL,0xBEL,0xBEL,0UL},{247UL,247UL,1UL,1UL,0UL,0UL},{255UL,0x73L,0x13L,0xD1L,249UL,1UL},{0x6AL,255UL,0x13L,255UL,247UL,0UL},{7UL,255UL,1UL,0xB9L,0x98L,0UL}}};
        uint16_t l_423 = 65529UL;
        uint64_t l_431 = 1UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_57[i] = &g_58;
        for (i = 0; i < 1; i++)
            l_308[i] = &l_198;
        l_59 |= ((*g_23) == (*p_42));
        if (p_43)
            continue;
    }
    g_191[0] = &l_59;
    l_457 = (((l_455 = (safe_rshift_func_int16_t_s_s((1UL ^ (safe_rshift_func_uint8_t_u_s((g_385[2][0].f5 ^= (((((g_385[2][0].f0 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_453) = (safe_mul_func_int16_t_s_s((((0x72E6F373L | ((((g_61[1][1][0] | p_41) < ((((safe_rshift_func_int16_t_s_u((((((g_63[1] == ((safe_mul_func_int8_t_s_s((-2L), (0xC63F308271C9458BLL && (-1L)))) || (-3L))) , l_452) , 18446744073709551615UL) ^ (-7L)) > p_41), 10)) && 0xA4L) >= p_41) <= 0L)) <= 255UL) & 4294967295UL)) && g_53) <= 0UL), g_92))), 4)), p_43))) >= p_41) <= p_41) & p_41) >= g_367)), 6))), 9))) < p_43) , (void*)0);
    l_477 ^= ((g_385[2][0].f0 || (safe_div_func_int8_t_s_s((p_43 ^ g_107.f0.f0), 0xFEL))) >= ((safe_rshift_func_uint16_t_u_s(g_463[2], p_43)) | ((*l_476) = (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((*l_315) = (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((l_474[3] = (g_463[2] <= g_92)) & p_43), g_83[3][3][0].f4)), (**p_42))), 4))), g_63[0])), p_43)))));
    for (l_94 = 0; (l_94 <= 0); l_94 += 1)
    { 
        int8_t *l_491 = &g_416;
        int32_t l_492[4] = {0x2849B1D1L,0x2849B1D1L,0x2849B1D1L,0x2849B1D1L};
        union U3 *l_504 = &g_107;
        int32_t l_514 = (-6L);
        int8_t l_520 = (-4L);
        union U2 l_528 = {{65528UL}};
        int i;
        for (l_452.f2 = 0; (l_452.f2 <= 1); l_452.f2 += 1)
        { 
            uint8_t l_478 = 0xFCL;
            int32_t l_481 = 0x040E5216L;
            const int16_t ***l_494 = (void*)0;
            int i;
            --l_478;
            l_481 &= ((&l_474[0] != (void*)0) <= g_63[l_94]);
            for (g_107.f0.f5 = 0; (g_107.f0.f5 <= 0); g_107.f0.f5 += 1)
            { 
                int16_t ***l_493 = (void*)0;
                const int32_t l_503 = 0L;
                int8_t *l_518 = &g_62;
                int32_t l_519[1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_519[i][j] = 0x33D8E06DL;
                }
                for (l_478 = 0; (l_478 <= 4); l_478 += 1)
                { 
                    int i, j, k;
                    l_481 &= (safe_sub_func_uint8_t_u_u((g_61[g_107.f0.f5][l_478][l_94] >= l_474[(l_94 + 3)]), (((((safe_mod_func_uint8_t_u_u(((l_492[0] = (!((((safe_add_func_uint8_t_u_u(p_41, (g_83[3][3][0].f5 && ((l_491 = ((safe_sub_func_int8_t_s_s((**g_23), (*g_24))) , (*p_42))) != (*p_42))))) & (**p_42)) , g_191[l_478]) == g_191[l_478]))) && (-1L)), p_41)) , p_41) , l_493) != l_494) ^ g_367)));
                    if (p_43)
                        continue;
                    l_492[0] = (l_514 ^= (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_385[2][0].f0, ((void*)0 != p_42))), (((safe_sub_func_int8_t_s_s(((((l_503 & ((g_61[g_107.f0.f5][l_94][g_107.f0.f5] = ((l_504 != (g_513 = ((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(g_107.f0.f5, ((safe_add_func_int64_t_s_s((g_89 , g_83[3][3][0].f3), 0x792B73B8B81520B0LL)) & 1UL))), g_92)), 65528UL)) , g_513))) >= g_83[3][3][0].f1)) , l_492[0])) >= p_43) ^ (**g_23)) <= p_41), (**p_42))) , g_89) || g_385[2][0].f2))), g_116.f0)));
                    if (l_503)
                        continue;
                }
                for (l_452.f5 = 0; (l_452.f5 <= 0); l_452.f5 += 1)
                { 
                    uint32_t l_515[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_515[i] = 18446744073709551608UL;
                    l_515[0]--;
                    return l_518;
                }
                l_519[0][0] |= g_61[(g_107.f0.f5 + 1)][(l_452.f2 + 1)][g_107.f0.f5];
            }
        }
        for (g_416 = 1; (g_416 >= 0); g_416 -= 1)
        { 
            int32_t l_521[4][7];
            uint32_t l_522[1][4] = {{0x90351AB4L,0x90351AB4L,0x90351AB4L,0x90351AB4L}};
            int64_t *l_543 = &g_92;
            uint16_t *l_554 = &l_528.f1.f0;
            int32_t l_556 = 0x815CE4E7L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 7; j++)
                    l_521[i][j] = (-10L);
            }
            l_522[0][1]++;
            for (g_107.f0.f2 = 0; (g_107.f0.f2 <= 4); g_107.f0.f2 += 1)
            { 
                int16_t *l_546 = (void*)0;
                int16_t *l_547 = &l_430;
                uint16_t *l_553 = (void*)0;
                uint16_t **l_552[7][7] = {{&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553},{&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553},{&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553},{(void*)0,&l_553,(void*)0,&l_553,&l_553,&l_553,&l_553},{&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553},{&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553},{&l_553,&l_553,&l_553,&l_553,(void*)0,&l_553,&l_553}};
                int32_t l_555 = 0x4F2B79D3L;
                int i, j;
                for (l_452.f5 = 0; (l_452.f5 <= 4); l_452.f5 += 1)
                { 
                    int i, j, k;
                    if (g_61[g_416][(g_416 + 1)][l_94])
                        break;
                }
                g_525 = &l_452;
                g_191[1] = ((safe_lshift_func_uint8_t_u_s(g_63[l_94], 7)) , (p_43 , (l_528 , &g_2)));
                l_556 = (((safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((~(safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xC9B4L, g_542)), (l_543 != (void*)0)))), (l_555 = (((g_92 &= (((*l_547) = (p_41 | 3L)) || ((l_554 = ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(65535UL, 4)) || p_43), l_520)) , l_458)) != &g_188))) & g_83[3][3][0].f0) ^ l_520)))), 5)), 0x59L)) ^ (**p_42)) >= g_63[l_94]) != l_520), 6)) , g_58) == g_385[2][0].f1);
                l_521[0][2] ^= (safe_sub_func_int32_t_s_s(g_63[l_94], (safe_sub_func_int8_t_s_s((**g_23), 0L))));
            }
        }
    }
    return l_561[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_83[i][j][k].f0, "g_83[i][j][k].f0", print_hash_value);
                transparent_crc(g_83[i][j][k].f1, "g_83[i][j][k].f1", print_hash_value);
                transparent_crc(g_83[i][j][k].f2, "g_83[i][j][k].f2", print_hash_value);
                transparent_crc(g_83[i][j][k].f3, "g_83[i][j][k].f3", print_hash_value);
                transparent_crc(g_83[i][j][k].f4, "g_83[i][j][k].f4", print_hash_value);
                transparent_crc(g_83[i][j][k].f5, "g_83[i][j][k].f5", print_hash_value);
                transparent_crc(g_83[i][j][k].f6, "g_83[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_100.f0.f0, "g_100.f0.f0", print_hash_value);
    transparent_crc(g_107.f0.f0, "g_107.f0.f0", print_hash_value);
    transparent_crc(g_107.f0.f1, "g_107.f0.f1", print_hash_value);
    transparent_crc(g_107.f0.f2, "g_107.f0.f2", print_hash_value);
    transparent_crc(g_107.f0.f3, "g_107.f0.f3", print_hash_value);
    transparent_crc(g_107.f0.f4, "g_107.f0.f4", print_hash_value);
    transparent_crc(g_107.f0.f5, "g_107.f0.f5", print_hash_value);
    transparent_crc(g_107.f0.f6, "g_107.f0.f6", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_385[i][j].f0, "g_385[i][j].f0", print_hash_value);
            transparent_crc(g_385[i][j].f1, "g_385[i][j].f1", print_hash_value);
            transparent_crc(g_385[i][j].f2, "g_385[i][j].f2", print_hash_value);
            transparent_crc(g_385[i][j].f3, "g_385[i][j].f3", print_hash_value);
            transparent_crc(g_385[i][j].f4, "g_385[i][j].f4", print_hash_value);
            transparent_crc(g_385[i][j].f5, "g_385[i][j].f5", print_hash_value);
            transparent_crc(g_385[i][j].f6, "g_385[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(g_416, "g_416", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_463[i], "g_463[i]", print_hash_value);

    }
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_703.f0, "g_703.f0", print_hash_value);
    transparent_crc(g_703.f1, "g_703.f1", print_hash_value);
    transparent_crc(g_703.f2, "g_703.f2", print_hash_value);
    transparent_crc(g_703.f3, "g_703.f3", print_hash_value);
    transparent_crc(g_703.f4, "g_703.f4", print_hash_value);
    transparent_crc(g_703.f5, "g_703.f5", print_hash_value);
    transparent_crc(g_703.f6, "g_703.f6", print_hash_value);
    transparent_crc(g_705.f0, "g_705.f0", print_hash_value);
    transparent_crc(g_705.f1, "g_705.f1", print_hash_value);
    transparent_crc(g_705.f2, "g_705.f2", print_hash_value);
    transparent_crc(g_705.f3, "g_705.f3", print_hash_value);
    transparent_crc(g_705.f4, "g_705.f4", print_hash_value);
    transparent_crc(g_705.f5, "g_705.f5", print_hash_value);
    transparent_crc(g_705.f6, "g_705.f6", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_935, "g_935", print_hash_value);
    transparent_crc(g_1264.f0, "g_1264.f0", print_hash_value);
    transparent_crc(g_1264.f1, "g_1264.f1", print_hash_value);
    transparent_crc(g_1264.f2, "g_1264.f2", print_hash_value);
    transparent_crc(g_1264.f3, "g_1264.f3", print_hash_value);
    transparent_crc(g_1264.f4, "g_1264.f4", print_hash_value);
    transparent_crc(g_1264.f5, "g_1264.f5", print_hash_value);
    transparent_crc(g_1264.f6, "g_1264.f6", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
