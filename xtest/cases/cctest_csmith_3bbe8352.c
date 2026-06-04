// SPDX-License-Identifier: MIT
// cctest_csmith_3bbe8352.c --- cctest case csmith_3bbe8352 (csmith seed 1002341202)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2b90d6ca */
/* @exp_ticks 0x67b5 */

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

// Options:   -s 1002341202 -o /home/agent1/fast_data/tmp/csmith_gen_96ma8dmj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint8_t  f1;
   int8_t  f2;
   int64_t  f3;
   uint16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   uint16_t  f1;
   int16_t  f2;
   const struct S0  f3;
};


static int32_t g_2 = (-8L);
static struct S0 g_27 = {0x7E784B52DD8607F4LL,0x07L,0xE7L,0xD28E48792891F433LL,1UL,0xC0902002L};
static uint8_t g_62 = 0xA0L;
static const union U1 g_63[1][4][2] = {{{{0L},{0L}},{{0L},{0L}},{{0L},{0L}},{{0L},{0L}}}};
static uint64_t g_68 = 0x660D0C570B93D6BDLL;
static uint64_t g_77 = 0x15597B072C46366CLL;
static uint16_t g_83[4][4][3] = {{{0UL,8UL,8UL},{0x5F89L,1UL,0x7477L},{0UL,0x75E1L,8UL},{0xE4A0L,1UL,3UL}},{{0UL,8UL,8UL},{0x5F89L,1UL,0x7477L},{0UL,0x75E1L,8UL},{0xE4A0L,1UL,3UL}},{{0UL,8UL,8UL},{0x5F89L,1UL,0x7477L},{0UL,0x75E1L,8UL},{0xE4A0L,1UL,3UL}},{{0UL,8UL,5UL},{0x7477L,3UL,65535UL},{0x75E1L,1UL,5UL},{3UL,3UL,1UL}}};
static struct S0 g_92[4] = {{9L,0x04L,0x30L,0x3A4418BAE6B99266LL,0x0828L,18446744073709551608UL},{9L,0x04L,0x30L,0x3A4418BAE6B99266LL,0x0828L,18446744073709551608UL},{9L,0x04L,0x30L,0x3A4418BAE6B99266LL,0x0828L,18446744073709551608UL},{9L,0x04L,0x30L,0x3A4418BAE6B99266LL,0x0828L,18446744073709551608UL}};
static uint64_t g_125[5][5][2] = {{{0UL,0x29DDE60598F6BB93LL},{0x7BAECA1BBDA2652ALL,0x86D8BF474991CB95LL},{0xCABF06CFF212B29ALL,0xCABF06CFF212B29ALL},{1UL,0UL},{18446744073709551608UL,18446744073709551615UL}},{{0UL,18446744073709551613UL},{0x8078DF31DCF84246LL,0UL},{0x707FB85FA97D6553LL,0xCABF06CFF212B29ALL},{0x707FB85FA97D6553LL,0UL},{0x8078DF31DCF84246LL,18446744073709551613UL}},{{0UL,18446744073709551615UL},{18446744073709551608UL,0UL},{1UL,0xCABF06CFF212B29ALL},{0xCABF06CFF212B29ALL,0x86D8BF474991CB95LL},{0x7BAECA1BBDA2652ALL,0x29DDE60598F6BB93LL}},{{0UL,1UL},{0x4CAB455570B09ED6LL,0x87E310A61F905A64LL},{4UL,0xCABF06CFF212B29ALL},{0xE66949881355238CLL,8UL},{0xACE6E223669DCB87LL,0x3F7B260C6B045E17LL}},{{0UL,0x3F7B260C6B045E17LL},{0xACE6E223669DCB87LL,8UL},{0xE66949881355238CLL,0xCABF06CFF212B29ALL},{4UL,0x87E310A61F905A64LL},{0x4CAB455570B09ED6LL,1UL}}};
static int32_t g_132 = (-1L);
static uint16_t g_159[4] = {1UL,1UL,1UL,1UL};
static int8_t g_174 = 0x46L;
static uint16_t g_179[3][2] = {{0x4845L,0UL},{0UL,0x4845L},{0UL,0UL}};
static int32_t g_180 = 0x5E5E2D9EL;
static uint8_t g_204 = 6UL;
static uint64_t g_223 = 1UL;



static const int8_t  func_1(void);
static int8_t  func_9(uint64_t  p_10, int32_t  p_11, int32_t  p_12, struct S0  p_13, const int64_t  p_14);
static int16_t  func_15(uint32_t  p_16, int8_t  p_17, int64_t  p_18, int16_t  p_19, const union U1  p_20);
static int64_t  func_21(struct S0  p_22, struct S0  p_23, uint16_t  p_24, uint8_t  p_25);




static const int8_t  func_1(void)
{ 
    int16_t l_91[3][3][1] = {{{0x023CL},{6L},{0x023CL}},{{6L},{0x023CL},{6L}},{{0x023CL},{6L},{0x023CL}}};
    int32_t l_222 = 0x768CD56CL;
    int i, j, k;
    for (g_2 = 0; (g_2 >= (-19)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 5))
    { 
        struct S0 l_26 = {0x86695CD1D2A6F9A4LL,0x91L,0L,0x85FCB4448110CBBBLL,0x254EL,0UL};
        int32_t l_207 = 0L;
        uint32_t l_221 = 0x16CB2FF3L;
        uint64_t l_247 = 0xF20B0982D639CECDLL;
        l_207 = (+(safe_mul_func_uint16_t_u_u((((!((g_2 && (func_9((((func_15(g_2, g_2, func_21(l_26, g_27, g_2, g_27.f5), g_63[0][3][0].f0, g_63[0][2][1]) & l_91[0][2][0]) < l_26.f3) , 18446744073709551615UL), g_27.f0, g_27.f1, g_92[2], g_27.f2) || l_91[0][2][0])) > 4294967295UL)) <= l_26.f2) != 3UL), g_63[0][3][0].f0)));
        g_223 = (safe_mul_func_int16_t_s_s(l_91[0][2][0], (safe_add_func_int16_t_s_s(l_26.f5, (((l_222 = (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_s((g_27.f2 = (((l_207 = ((!((safe_sub_func_uint64_t_u_u(l_221, g_180)) == g_174)) & l_26.f0)) >= l_91[2][2][0]) , l_91[0][2][0])), g_174)) | l_91[0][0][0]) , g_92[2].f1) , 0x8B7EL) , l_91[2][1][0]), g_27.f3)) >= g_27.f3), g_159[1]))) < g_63[0][3][0].f0) > l_91[1][1][0])))));
        for (g_27.f3 = 0; (g_27.f3 != (-15)); --g_27.f3)
        { 
            uint8_t l_246 = 0xEBL;
            l_222 = (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s((l_222 < ((safe_mod_func_uint16_t_u_u(((l_207 &= 1L) & (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((safe_mul_func_uint64_t_u_u((g_77 = l_246), (l_26.f0 == l_91[0][2][0]))), g_92[2].f5)) < 0x37826DAE4665AAABLL) <= g_27.f0), l_247)), g_179[2][1]))), l_26.f0)) < l_246)), g_92[2].f4)), 0xD5D16FAE3A3262FALL)) & l_246), l_26.f0)) >= l_91[0][2][0]) || 1L), g_27.f2)) , l_246), g_159[2]));
        }
    }
    return l_91[2][2][0];
}



static int8_t  func_9(uint64_t  p_10, int32_t  p_11, int32_t  p_12, struct S0  p_13, const int64_t  p_14)
{ 
    struct S0 l_93 = {1L,0x8CL,0L,0L,0x9A50L,0xF4C6C2C3L};
    int32_t l_151 = (-1L);
    int32_t l_156 = 7L;
    int32_t l_158[3][5] = {{3L,3L,(-3L),0x1776ED3AL,(-3L)},{3L,3L,(-3L),0x1776ED3AL,(-3L)},{3L,3L,(-3L),0x1776ED3AL,(-3L)}};
    int i, j;
lbl_150:
    g_27 = l_93;
    if (((p_10 || g_92[2].f0) <= (safe_unary_minus_func_int8_t_s(((~(safe_sub_func_int32_t_s_s(((g_92[2].f2 ^ (safe_div_func_uint32_t_u_u(((~0xFBL) > 0x7EL), 4L))) , p_13.f2), 0x4F8FB3CFL))) >= g_62)))))
    { 
        uint32_t l_123 = 1UL;
        for (l_93.f4 = 29; (l_93.f4 < 49); l_93.f4 = safe_add_func_uint32_t_u_u(l_93.f4, 2))
        { 
            uint16_t l_124[3];
            int i;
            for (i = 0; i < 3; i++)
                l_124[i] = 8UL;
            p_12 |= ((g_125[2][4][1] |= (((((safe_unary_minus_func_int16_t_s((l_124[2] &= (safe_mul_func_int8_t_s_s(g_2, (0x6DBD5D31C8896062LL && ((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_13.f1 = (((safe_sub_func_int32_t_s_s((((~((g_27.f3 |= ((p_13.f0 &= (l_93 , ((((safe_mul_func_int8_t_s_s((p_13.f4 <= l_123), 0x64L)) , l_123) >= 0UL) != p_14))) || 0x90515F4AA8B2A03DLL)) > p_13.f2)) >= g_68) != p_14), p_14)) == p_13.f2) & 0xD8531B7EL)), g_77)), g_2)), p_11)), 0x992EEADF95454331LL)), l_123)), (-1L))) == 0x29L))))))) > g_27.f2) != g_92[2].f0) , 2L) < 4294967286UL)) ^ g_83[0][2][1]);
            g_132 ^= ((g_27.f2 = ((safe_unary_minus_func_uint32_t_u(g_83[0][2][1])) & (l_93.f4 , (safe_div_func_uint64_t_u_u(((g_27.f5 == ((safe_div_func_uint32_t_u_u(((~((0L != p_13.f5) ^ l_123)) ^ 0UL), 0x3BF9ECD5L)) , l_93.f1)) && p_13.f5), 0xFA74B5D444B5CFA6LL))))) && p_12);
            p_12 = 0xC40A1D12L;
        }
    }
    else
    { 
        const int16_t l_149 = 0x3317L;
        int32_t l_155 = 0x09CC95D8L;
        int32_t l_157 = 0x78895D7FL;
        int64_t l_200 = 0L;
        if (p_13.f3)
        { 
            uint32_t l_133 = 0xBAC05BC8L;
            int32_t l_154 = (-9L);
            if ((l_133 , (p_11 = ((7L > (((p_12 = (safe_lshift_func_int8_t_s_s(((g_92[2].f5 || l_93.f4) , 0L), 6))) >= g_27.f4) || 8UL)) != p_13.f4))))
            { 
                uint16_t l_136[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_136[i] = 65535UL;
                l_136[0] = (-5L);
                p_12 = (((l_136[0] && ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_10, (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((0L || (p_13.f3 && g_92[2].f2)), l_149)), 1L)), l_136[0])), p_13.f4)))), l_136[0])) , g_62)) > p_13.f2) ^ (-1L));
            }
            else
            { 
                if (g_27.f4)
                    goto lbl_150;
                l_151 = 3L;
            }
            for (p_13.f1 = 23; (p_13.f1 == 51); p_13.f1++)
            { 
                ++g_159[1];
            }
            g_174 = ((((safe_mul_func_int16_t_s_s(((p_13.f4 , (g_125[2][0][1] , ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(18446744073709551613UL, (p_10 = (--g_125[2][4][1])))) , (safe_sub_func_int32_t_s_s((-1L), g_27.f3))), 253UL)), 4)) || l_133))) , g_92[2].f0), 1UL)) , l_93.f4) | 5L) | p_13.f5);
        }
        else
        { 
            for (l_93.f0 = 0; (l_93.f0 <= 18); ++l_93.f0)
            { 
                g_179[2][1] &= (safe_rshift_func_uint16_t_u_u(g_92[2].f5, 11));
                p_13 = p_13;
            }
            g_92[2] = l_93;
            for (l_157 = 0; (l_157 <= 1); l_157 += 1)
            { 
                g_180 |= (-4L);
            }
        }
        for (g_27.f1 = (-2); (g_27.f1 >= 10); g_27.f1 = safe_add_func_int8_t_s_s(g_27.f1, 7))
        { 
            int16_t l_193 = 0x0EADL;
            int32_t l_203 = 0L;
            if ((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((~((safe_sub_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((!l_193), (safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(((0xD3C7F17199E99429LL & (+0x1ECBF7E8150FF4D6LL)) > ((-1L) || 0x13L)), p_13.f1)), 1)))) && p_13.f4), 6UL)) <= l_193)) >= 0L), p_13.f1)) < g_63[0][3][0].f2), p_13.f5)))
            { 
                if (l_93.f2)
                    break;
            }
            else
            { 
                int8_t l_199 = 1L;
                return l_199;
            }
            if (l_200)
                continue;
            for (p_12 = 5; (p_12 >= (-19)); p_12 = safe_sub_func_int16_t_s_s(p_12, 1))
            { 
                g_204++;
            }
        }
    }
    return g_174;
}



static int16_t  func_15(uint32_t  p_16, int8_t  p_17, int64_t  p_18, int16_t  p_19, const union U1  p_20)
{ 
    uint32_t l_88 = 0UL;
    l_88--;
    return p_17;
}



static int64_t  func_21(struct S0  p_22, struct S0  p_23, uint16_t  p_24, uint8_t  p_25)
{ 
    int16_t l_44 = 1L;
    int32_t l_45 = 0x83A56CF6L;
    uint8_t l_46 = 0x20L;
    union U1 l_80 = {1L};
    if ((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint8_t_u_u((p_23.f1 , (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_45 = ((safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((4294967287UL < ((safe_mul_func_uint16_t_u_u((l_44 = (safe_mul_func_uint16_t_u_u((0x5C8BL || (p_23.f3 , 0x5465L)), p_22.f2))), l_45)) == g_27.f1)) || 0xC4L), 0x1EB1L)) == p_22.f5), p_23.f4)) == l_46)) , 1L), l_46)), p_23.f4))), p_22.f2)) < l_46) < 0L), 5)))
    { 
        int32_t l_61 = (-1L);
        struct S0 l_71 = {0x412408B304F1BCD9LL,255UL,-7L,0xB47BED26586BC1AFLL,65532UL,0UL};
        uint64_t l_81 = 0x2E2092B28538E7D4LL;
        int32_t l_82 = 3L;
        for (p_23.f1 = (-17); (p_23.f1 != 48); p_23.f1 = safe_add_func_uint16_t_u_u(p_23.f1, 1))
        { 
            uint16_t l_72[4];
            int i;
            for (i = 0; i < 4; i++)
                l_72[i] = 5UL;
            if ((((p_23.f1 & (g_62 = (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((((((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_27.f3 || (0x9364560F9103153DLL == (p_22.f0 = ((((safe_rshift_func_int8_t_s_s(((((((l_61 < 4UL) , 0x4363L) || g_27.f4) , l_45) && g_27.f2) >= g_27.f4), p_23.f1)) <= 0x653869515B8451CFLL) || l_45) >= p_23.f4)))) | p_22.f2), l_61)), 0xA596L)) != 0x4E4CABBE7F6328DALL) != l_61) > p_22.f2) <= p_23.f0) & 65530UL), 1UL)), 0L)))) , p_22.f3) , g_27.f5))
            { 
                int64_t l_67[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_67[i][j] = (-4L);
                }
                g_68 = (((l_67[0][0] ^= (g_63[0][3][0] , (+((0x1CE1L == (g_27.f4 != (safe_add_func_int64_t_s_s(l_44, g_63[0][3][0].f2)))) >= 0x3DL)))) > g_27.f0) ^ 0x117B57B06E2AFE58LL);
            }
            else
            { 
                l_45 &= ((g_27.f4--) < p_22.f2);
                l_71 = g_27;
                l_72[0] = g_27.f1;
            }
        }
        for (p_22.f0 = (-19); (p_22.f0 <= (-4)); ++p_22.f0)
        { 
            if ((((l_45 &= ((g_77 = (safe_mul_func_uint8_t_u_u(g_27.f0, (0x403F479FL >= g_27.f1)))) > ((((((safe_lshift_func_uint8_t_u_s(((((p_23.f2 = (l_80 , 0L)) ^ p_22.f0) || (-1L)) && g_2), 0)) != p_23.f4) < 0x6AL) < 4UL) <= p_23.f1) & l_81))) != g_27.f0) && 0UL))
            { 
                l_82 ^= (l_80.f0 ^ (-4L));
                if (g_2)
                    continue;
                return l_80.f1;
            }
            else
            { 
                if (l_46)
                    break;
                return p_22.f3;
            }
        }
        --g_83[0][2][1];
    }
    else
    { 
        for (l_46 = (-12); (l_46 <= 22); l_46 = safe_add_func_uint64_t_u_u(l_46, 6))
        { 
            return p_23.f5;
        }
    }
    l_45 = g_27.f2;
    return g_27.f5;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    transparent_crc(g_27.f5, "g_27.f5", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_63[i][j][k].f0, "g_63[i][j][k].f0", print_hash_value);
                transparent_crc(g_63[i][j][k].f1, "g_63[i][j][k].f1", print_hash_value);
                transparent_crc(g_63[i][j][k].f2, "g_63[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_92[i].f0, "g_92[i].f0", print_hash_value);
        transparent_crc(g_92[i].f1, "g_92[i].f1", print_hash_value);
        transparent_crc(g_92[i].f2, "g_92[i].f2", print_hash_value);
        transparent_crc(g_92[i].f3, "g_92[i].f3", print_hash_value);
        transparent_crc(g_92[i].f4, "g_92[i].f4", print_hash_value);
        transparent_crc(g_92[i].f5, "g_92[i].f5", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_125[i][j][k], "g_125[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);

    }
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_179[i][j], "g_179[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
