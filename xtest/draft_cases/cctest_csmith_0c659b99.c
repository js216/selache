// SPDX-License-Identifier: MIT
// cctest_csmith_0c659b99.c --- cctest case csmith_0c659b99 (csmith seed 207985561)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5884825b */
/* @exp_ticks 0x1123 */

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

// Options:   -s 207985561 -o /home/agent1/fast_data/tmp/csmith_gen_w81f345c/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint64_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   int16_t  f1;
   struct S0  f2;
};
#pragma pack(pop)

union U2 {
   const uint8_t  f0;
   uint16_t  f1;
};


static int8_t g_2[1] = {(-2L)};
static int32_t g_6[5] = {8L,8L,8L,8L,8L};
static int32_t g_15 = 0L;
static union U2 g_18 = {0UL};
static uint16_t g_34[2][3][4] = {{{65534UL,0x69B4L,2UL,2UL},{0xFA1BL,0xFA1BL,3UL,5UL},{0xFA1BL,0xE40CL,2UL,0xFA1BL}},{{65534UL,5UL,65534UL,2UL},{0x69B4L,5UL,3UL,0xFA1BL},{5UL,0xE40CL,0xE40CL,5UL}}};
static uint32_t g_46[3][3][5] = {{{1UL,1UL,0x8F7F2F1EL,0xE3164C11L,0x376A9523L},{0xBE2FC3C7L,0x3E4F9F01L,0x2D949044L,0x3E4F9F01L,0xBE2FC3C7L},{0x376A9523L,0xE3164C11L,0x8F7F2F1EL,1UL,1UL}},{{18446744073709551614UL,0x3E4F9F01L,18446744073709551614UL,0UL,18446744073709551614UL},{0x376A9523L,1UL,0xE3164C11L,0xE3164C11L,1UL},{0xBE2FC3C7L,0UL,0x2D949044L,0UL,0xBE2FC3C7L}},{{1UL,0xE3164C11L,0xE3164C11L,1UL,0x376A9523L},{18446744073709551614UL,0UL,18446744073709551614UL,0x3E4F9F01L,18446744073709551614UL},{1UL,1UL,0x8F7F2F1EL,0xE3164C11L,0x376A9523L}}};
static struct S1 g_62 = {1L,0xAD2CL,{18446744073709551615UL,1L}};
static int16_t g_96 = 0x4272L;
static int16_t g_98 = 0x426BL;
static uint32_t g_100 = 1UL;
static uint8_t g_122 = 246UL;
static int64_t g_139 = (-8L);
static int32_t g_140 = 0xF0C8DF09L;
static int16_t g_142 = 0x9F7CL;
static int32_t g_147 = 0L;
static int32_t g_148 = 0L;
static uint32_t g_149[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int8_t g_159 = (-9L);
static uint32_t g_164 = 18446744073709551613UL;
static int32_t g_281 = 2L;
static int8_t g_309 = 0xD0L;
static uint16_t g_318 = 1UL;
static uint32_t g_336[2][3][3] = {{{4294967295UL,0x939B4C0EL,0x939B4C0EL},{6UL,0xE8E0C833L,6UL},{4294967295UL,4294967295UL,0x939B4C0EL}},{{0xA7703A36L,0xE8E0C833L,0xA7703A36L},{4294967295UL,0x939B4C0EL,0x939B4C0EL},{6UL,0xE8E0C833L,6UL}}};
static int32_t g_352 = (-1L);
static uint32_t g_355 = 5UL;
static uint16_t g_362[3] = {0x99F4L,0x99F4L,0x99F4L};
static uint32_t g_385 = 0UL;
static uint64_t g_388 = 0x85176C9A6560489ELL;



static union U2  func_1(void);
static uint8_t  func_19(int32_t  p_20, uint8_t  p_21, int32_t  p_22);
static uint8_t  func_39(const int16_t  p_40);
static union U2  func_47(uint32_t  p_48, const int16_t  p_49, int32_t  p_50, struct S1  p_51);




static union U2  func_1(void)
{ 
    uint32_t l_3[1];
    uint16_t l_26 = 0x6CC7L;
    const int32_t l_412 = 0L;
    int32_t l_427 = 1L;
    union U2 l_434 = {0x32L};
    int i;
    for (i = 0; i < 1; i++)
        l_3[i] = 0x887CF2E5L;
    l_3[0]++;
    for (g_6[2] = (-2); (g_6[2] > (-16)); --g_6[2])
    { 
        uint64_t l_13 = 0UL;
        int32_t l_14 = 0xB9725245L;
        uint32_t l_390 = 2UL;
        int32_t l_413 = 0x2F06FB0AL;
        if ((g_15 ^= ((((0L && g_2[0]) , (safe_sub_func_uint32_t_u_u((0x93L <= ((safe_rshift_func_uint8_t_u_s((l_14 = l_13), 5)) > 0L)), 1L))) == g_6[2]) , 0xCD2466E9L)))
        { 
            const uint32_t l_25[4] = {0UL,0UL,0UL,0UL};
            int32_t l_391[1][1];
            uint16_t l_399 = 1UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_391[i][j] = 0L;
            }
            for (g_15 = (-2); (g_15 >= (-29)); --g_15)
            { 
                return g_18;
            }
            l_14 = l_14;
            if (((g_15 < (func_19((g_2[0] < (safe_sub_func_uint64_t_u_u((l_25[3] , ((g_15 , g_15) > l_14)), l_26))), g_2[0], l_14) > g_6[3])) , g_6[0]))
            { 
                int32_t l_43 = 0xEB999C82L;
                uint32_t l_389[4] = {0x94A9F235L,0x94A9F235L,0x94A9F235L,0x94A9F235L};
                int i;
                l_391[0][0] = (l_390 = (((safe_mul_func_int16_t_s_s((~(g_34[1][0][3] , g_2[0])), func_19((g_140 = (g_15 | (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((g_388 = func_39((safe_sub_func_int8_t_s_s(((func_19(((g_2[0] | 0xDB40L) , g_2[0]), l_25[1], l_43) , g_34[1][0][3]) | 0L), l_25[3])))), 0xE6L)), g_2[0])))), g_34[1][0][0], g_6[0]))) != l_389[0]) ^ 0xD2CDL));
                g_148 = (safe_add_func_uint64_t_u_u((~(((safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(l_389[0], (((0x6513368BAE3A090FLL >= ((0x8E61A973819C18BALL <= (g_6[2] & g_62.f2.f0)) <= g_149[2])) || 0L) != l_14))) != l_25[2]), 2)) < g_385) || l_390)), 0x5D44C6B06F44EE2CLL));
            }
            else
            { 
                --l_399;
                l_413 = ((l_26 <= ((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_14 = g_62.f1), (safe_mod_func_int64_t_s_s(((g_122 = ((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_26, 0)), 7UL)) & g_15) != g_318) >= g_164)) , (-1L)), g_336[0][2][2])))) , g_62.f1), g_2[0])) | l_3[0])) < l_412);
                if (g_62.f0)
                    continue;
            }
        }
        else
        { 
            uint32_t l_433[2][1][5] = {{{0x7D05B849L,0x7D05B849L,0x7D05B849L,0x7D05B849L,0x7D05B849L}},{{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL}}};
            int i, j, k;
            for (g_355 = 0; (g_355 != 30); g_355 = safe_add_func_int32_t_s_s(g_355, 6))
            { 
                if (l_26)
                    break;
            }
            for (g_352 = 0; (g_352 <= 0); g_352 += 1)
            { 
                int8_t l_432 = 0x2AL;
                l_427 = ((safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((~((++g_122) , (((l_3[0] , (l_413 &= ((safe_add_func_uint16_t_u_u(1UL, l_432)) , (0xD1684ECFL == g_164)))) > g_34[1][2][0]) < 0xBBL))) == 0x15L), 5)), g_100)) > g_149[3]), 4)), l_13)) < l_433[0][0][3]), g_46[0][2][4])) || 255UL);
            }
        }
        l_14 = (1L & l_390);
        for (g_147 = 1; (g_147 <= 4); g_147 += 1)
        { 
            l_413 |= 0x2F68B99EL;
        }
    }
    g_6[2] = 0x6C7C8E04L;
    return l_434;
}



static uint8_t  func_19(int32_t  p_20, uint8_t  p_21, int32_t  p_22)
{ 
    uint8_t l_29 = 0xC1L;
    int32_t l_30 = 9L;
    for (p_20 = 13; (p_20 <= (-15)); p_20 = safe_sub_func_uint8_t_u_u(p_20, 7))
    { 
        l_30 = (g_2[0] > l_29);
    }
    return p_22;
}



static uint8_t  func_39(const int16_t  p_40)
{ 
    int64_t l_60[5] = {0xA1FBCDA4F1DFBA30LL,0xA1FBCDA4F1DFBA30LL,0xA1FBCDA4F1DFBA30LL,0xA1FBCDA4F1DFBA30LL,0xA1FBCDA4F1DFBA30LL};
    int16_t l_61 = 3L;
    int32_t l_361 = 0L;
    int32_t l_379 = 4L;
    int i;
    g_46[2][0][0] = (safe_mul_func_uint16_t_u_u(g_6[4], 5UL));
    g_362[0] ^= (l_361 = (((func_19((func_47(((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((0L <= 0x5720603003393D3BLL) == (safe_sub_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((l_60[0] , ((((((g_34[1][2][1] | 0x91E412D46FEDEA8FLL) ^ p_40) < l_60[1]) < l_60[2]) & 0UL) | (-3L))), 0xE3L)) & g_2[0]) <= l_60[0]), g_46[1][2][4]))), p_40)), 0x6DCE64F8L)) ^ 0x0D26BC8B8ECDE22FLL), l_60[0], l_61, g_62) , g_140), p_40, g_15) || 1L) && p_40) == l_61));
    if ((l_361 , (safe_sub_func_uint32_t_u_u((+(l_379 = (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((l_361 = ((((((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((p_40 == 247UL), (!((safe_div_func_uint64_t_u_u(((-8L) ^ l_60[4]), g_18.f0)) >= g_149[1])))), l_361)) | p_40), g_281)) <= 1UL) , p_40) && p_40) || l_361) ^ 0x55L)) > g_62.f2.f0), p_40)) < g_62.f2.f1), 0xD68D8517L)))), g_148))))
    { 
        return p_40;
    }
    else
    { 
        uint32_t l_380 = 18446744073709551610UL;
        int32_t l_383 = (-1L);
        int32_t l_384 = 0x68C1B913L;
        --l_380;
        g_385++;
        l_384 = l_383;
    }
    return g_15;
}



static union U2  func_47(uint32_t  p_48, const int16_t  p_49, int32_t  p_50, struct S1  p_51)
{ 
    int32_t l_73 = 0x378B361FL;
    int8_t l_74 = 0L;
    const uint64_t l_75 = 0x18CD0E530E041B8CLL;
    uint16_t l_97 = 0x992DL;
    uint32_t l_102 = 0x7F146A40L;
    union U2 l_125 = {1UL};
    int32_t l_138 = 1L;
    int32_t l_143 = 0x5D631B42L;
    int32_t l_144 = 0xC6DB221BL;
    int32_t l_145 = 0xABCEE763L;
    uint8_t l_172 = 247UL;
    uint32_t l_276 = 0x22A38F90L;
    if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_2[0], 4)), (((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((l_73 |= (g_2[0] ^ (p_49 == (p_51.f1 ^ 0x082010857B263307LL)))) ^ g_2[0]))), 0x4373L)) , g_34[0][1][3]))) && l_74), 8)) ^ p_48) , l_75))))
    { 
        int8_t l_78 = 0xEEL;
        int32_t l_133[2][5][5] = {{{4L,4L,(-8L),4L,4L},{(-2L),0xF044E681L,(-2L),1L,0L},{4L,1L,1L,4L,1L},{0L,0xF044E681L,0x2D929A3FL,0xF044E681L,0L},{1L,4L,1L,1L,4L}},{{0L,1L,(-2L),0xF044E681L,(-2L)},{4L,4L,(-8L),4L,4L},{(-2L),0xF044E681L,(-2L),1L,0L},{4L,1L,1L,4L,1L},{0L,0xF044E681L,0x2D929A3FL,0xF044E681L,0L}}};
        union U2 l_152[2][2] = {{{0x6EL},{0x6EL}},{{0x6EL},{0x6EL}}};
        int i, j, k;
        for (g_62.f2.f1 = (-17); (g_62.f2.f1 > (-3)); ++g_62.f2.f1)
        { 
            int64_t l_99 = 0x95B858EE3BABBD54LL;
            uint16_t l_101 = 0UL;
            int32_t l_117 = 0xBAC1F965L;
            int32_t l_141 = 0x0D9EFBC4L;
            if ((g_62.f2.f1 < (((l_78 & (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((p_51.f1 = (g_62.f0 &= p_51.f2.f1)), (safe_mod_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u(((((((g_100 = (l_99 = ((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((((~(((g_96 = ((safe_div_func_int32_t_s_s((-2L), l_73)) ^ g_15)) == 0x44B22B5D766400F4LL) < l_78)) > g_62.f2.f0) == l_97), g_2[0])) >= g_62.f1) & g_98), g_15)) & p_49))) && 0xC7L) & g_34[1][2][1]) == g_62.f2.f1) && l_97) , g_2[0]), g_15)) && l_101) > l_101) | l_101) >= p_51.f2.f1), p_51.f2.f0)))), 2L)) , p_48) >= l_102), 0x7A0CL))) && l_97) & l_78)))
            { 
                int32_t l_120 = 1L;
                union U2 l_121 = {0x6CL};
                l_120 = (safe_div_func_uint16_t_u_u((g_6[2] ^ (safe_add_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((((g_62.f2.f0 , (safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((l_117 = p_51.f2.f0) <= (((((safe_div_func_uint8_t_u_u(((p_49 > l_99) >= l_120), 0x0EL)) | l_101) >= 0UL) , (-1L)) ^ g_96)), g_18.f0)) , l_102), (-8L))) != g_62.f1), 0x341DL)) < 0x0C6DFD39L), 0x748BFE3BB384EBA5LL))) != g_98) && 0xF864L), p_51.f2.f1)) , l_121) , l_121) , g_15), 0x05L))), l_101));
            }
            else
            { 
                ++g_122;
                return l_125;
            }
            l_133[0][4][3] = (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((!0L), l_101)), ((safe_lshift_func_int8_t_s_u(0x6FL, (l_125 , p_49))) & 0x28L)));
            if ((((!(g_98 && 0xE32AL)) == (safe_mul_func_uint16_t_u_u((l_101 > (g_18.f1 = p_51.f2.f0)), l_117))) > l_78))
            { 
                int16_t l_137 = 0xA1B7L;
                int32_t l_146[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_146[i] = 1L;
                ++g_149[0];
                return l_152[1][0];
            }
            else
            { 
                g_148 ^= ((((((((safe_sub_func_int16_t_s_s(g_18.f0, l_99)) ^ 0x47L) != (safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u((g_159 &= p_50), 65528UL)), p_50))) ^ l_144) | 7UL) < p_51.f1) == l_133[1][3][0]) && 0UL);
            }
        }
    }
    else
    { 
        int8_t l_171 = (-1L);
        int32_t l_173 = 0x65356F8BL;
        int32_t l_174 = 0x7DCF5926L;
        uint8_t l_224 = 0x2CL;
        uint16_t l_308 = 5UL;
        l_174 |= (l_173 = (safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((g_34[1][0][3] <= (((g_164 = 0UL) , ((safe_div_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_u((g_62.f2 , ((safe_rshift_func_uint16_t_u_s((l_171 ^= (0x2723438AL >= l_125.f0)), 12)) && p_51.f0)), 2)) < l_125.f0) | p_51.f1) <= g_46[2][0][0]) && p_48), 0x56L)) >= l_172)) && 0L)), p_50)), l_74)));
        l_174 = (((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((!(safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((l_143 = l_97), l_125.f0)), 0x3AF3L))), ((safe_mod_func_uint64_t_u_u((l_138 = (safe_lshift_func_int16_t_s_s(0x87CAL, 14))), 0x3CD5DE68A025993BLL)) > p_49))) != p_51.f1), p_51.f0)) & 0x80L) ^ 0xAFL);
        if ((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((!(safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0x06L, 7)), (p_48 > (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_97, (safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((g_62.f2 , g_34[0][0][2]), l_173)) < l_174) , 1L), g_34[1][2][3])))), 1L)))))) ^ l_73), l_125.f0)), p_51.f0)) <= g_2[0]) <= g_100))
        { 
            struct S0 l_207 = {3UL,1L};
            union U2 l_221[3][3] = {{{0x4FL},{0x4FL},{0x4FL}},{{0x4DL},{0x4DL},{0x4DL}},{{0x4FL},{0x4FL},{0x4FL}}};
            int i, j;
            g_148 |= (safe_div_func_int8_t_s_s(((l_207 , ((safe_mul_func_int8_t_s_s((p_51.f2.f1 & (((l_174 &= ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_173, ((safe_mul_func_int8_t_s_s(((!p_51.f2.f1) ^ g_140), l_207.f1)) || g_147))), l_102)) > 2UL)) >= 8L) >= 4UL)), g_149[0])) & l_73)) , 0xB2L), 1L));
            l_144 = (l_173 = (((g_96 < (l_221[0][2] , (l_143 = ((p_51.f0 < ((safe_lshift_func_int16_t_s_u(g_142, l_224)) || 0xF47B0E098B48D21FLL)) >= 0x2E53A4A4L)))) > p_48) <= 0UL));
            if (g_96)
            { 
                uint64_t l_239 = 0x5D2CA8022D0BAB9DLL;
                int32_t l_254 = (-9L);
                l_254 = (+((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((l_239 ^= 3UL) || (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0x586A3694L, (safe_lshift_func_int16_t_s_u(p_51.f0, (g_62.f2 , l_239))))) <= l_239), 1UL)) > l_207.f0), 252UL)) | g_148), 4)) != g_122), p_49)), p_51.f1))) & p_50), p_51.f2.f0)), p_50)), g_164)), g_62.f0)) <= p_51.f1))) == l_171), 1UL)), 0L)) > g_96));
                return l_221[0][2];
            }
            else
            { 
                uint64_t l_257 = 1UL;
                int32_t l_258[5][1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_258[i][j] = 0x670366A3L;
                }
                l_258[4][0] = (l_257 = (g_149[3] && (safe_mul_func_int8_t_s_s(g_96, l_207.f1))));
            }
        }
        else
        { 
            int64_t l_268 = 0xA08C533A9D292424LL;
            const uint32_t l_282[3] = {0xF67E56BBL,0xF67E56BBL,0xF67E56BBL};
            int32_t l_301 = 0x744F4758L;
            int32_t l_303[1];
            int i;
            for (i = 0; i < 1; i++)
                l_303[i] = 0x16BB9490L;
            l_173 ^= (((safe_unary_minus_func_int16_t_s((((-10L) < ((g_148 != ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((l_174 ^= p_49), l_97)), 7)), 7)), 7UL)) , l_268)) , 246UL)) > g_139))) <= p_49) ^ l_268);
            if ((l_145 = (l_143 &= p_51.f1)))
            { 
                int32_t l_271 = 0L;
                g_148 = ((safe_mul_func_uint8_t_u_u((l_271 ^= (g_122 = 255UL)), ((safe_mul_func_uint16_t_u_u(((g_62.f2 , (safe_add_func_int64_t_s_s(p_50, (p_50 , g_96)))) & g_100), 0x5E30L)) <= p_51.f2.f1))) != l_276);
                g_148 = ((safe_mul_func_int16_t_s_s(g_100, (p_51.f0 && (0x2CL != (((g_281 = ((safe_add_func_int32_t_s_s(1L, 0xACF56564L)) && (-6L))) ^ l_75) > l_282[0]))))) , p_51.f2.f0);
            }
            else
            { 
                int32_t l_302 = 0x9675CE39L;
                int32_t l_304 = 0x578CB152L;
                int32_t l_305[3][4][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_305[i][j][k] = 0xAD5FBB03L;
                    }
                }
                l_144 = (safe_mul_func_uint16_t_u_u(((g_309 = (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(l_282[0], (safe_div_func_int16_t_s_s((l_174 ^= (((safe_add_func_uint8_t_u_u(g_98, ((g_100++) , g_6[0]))) < ((g_15 == 1UL) ^ g_46[2][0][0])) <= (-7L))), l_308)))) >= l_308) > l_224), l_301)) <= 0x40BCFF1FC72A1215LL), 5)) == g_2[0]), l_172)) & 0xEEL) & 0x8BL) != g_2[0]), 3)) , 0x5B4EL), 0x76E8L))) > 0L), l_173));
            }
            if ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_173, (l_174 = p_50))), 0)))
            { 
                int16_t l_314[4][1][5] = {{{(-4L),(-4L),0x032AL,0x032AL,(-4L)}},{{0x25A2L,0x881AL,0x25A2L,0x881AL,0x25A2L}},{{(-4L),0x032AL,0x032AL,(-4L),(-4L)}},{{0L,0x881AL,0L,0x881AL,0L}}};
                int32_t l_315 = (-2L);
                int i, j, k;
                l_315 &= (p_48 & ((l_314[0][0][0] = l_173) , p_51.f2.f1));
                return l_125;
            }
            else
            { 
                struct S0 l_335 = {0xF0389D981C66F583LL,0x237CA5B1L};
                int32_t l_337 = 0x89841C21L;
                int32_t l_353 = 0x0610EA44L;
                int32_t l_354 = 0x007EA7F4L;
                l_337 &= ((safe_add_func_int16_t_s_s((((++g_318) | (safe_mul_func_uint16_t_u_u(p_51.f2.f1, ((g_62.f1 = (!(((safe_rshift_func_int16_t_s_s(((g_336[1][1][2] = ((((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((+(safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((g_139 = l_171) < ((l_335 , ((l_171 != 18446744073709551615UL) & 18446744073709551608UL)) < p_48)) > 0x2F2D2754F78D936CLL), 2)), 2))), l_171)), (-6L))) || g_164) >= p_49) && 0xF6825857L)) <= 0x6B8A6985C524AB9FLL), g_142)) != p_49) ^ 250UL))) == 0xB896L)))) >= g_281), 0x4225L)) <= g_34[1][0][1]);
                g_352 = ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((g_98 &= 0xA3D8L) & ((0xE5D73EC1L || ((g_62.f2.f1 > (l_303[0] = (safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((((g_148 = (safe_mul_func_uint8_t_u_u(((g_18 , p_51.f2.f1) & 0x0F0DL), 0x5DL))) >= l_276) ^ g_62.f0) & 1UL), p_51.f0)) < g_62.f0), 0xFC3AD434L)), g_164)), g_139)))) != p_51.f2.f1)) <= p_50)), l_143)), (-1L))) || l_174);
                g_355++;
            }
        }
    }
    g_148 = l_143;
    for (g_62.f2.f1 = (-5); (g_62.f2.f1 > 2); ++g_62.f2.f1)
    { 
        union U2 l_360 = {0xDCL};
        return l_360;
    }
    return l_125;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_46[i][j][k], "g_46[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2.f0, "g_62.f2.f0", print_hash_value);
    transparent_crc(g_62.f2.f1, "g_62.f2.f1", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_336[i][j][k], "g_336[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_362[i], "g_362[i]", print_hash_value);

    }
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
