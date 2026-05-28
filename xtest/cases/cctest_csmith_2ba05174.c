// SPDX-License-Identifier: MIT
// cctest_csmith_2ba05174.c --- cctest case csmith_2ba05174 (csmith seed 731926900)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x119a2be5 */
/* @exp_ticks 0xd94f */

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

// Options:   -s 731926900 -o /tmp/csmith_gen_f37ujxwb/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   struct S0  f1;
   int8_t  f2;
   int32_t  f3;
   int8_t  f4;
   int32_t  f5;
   uint32_t  f6;
};

struct S2 {
   const int8_t  f0;
   struct S1  f1;
   int32_t  f2;
   struct S0  f3;
   int32_t  f4;
   uint32_t  f5;
   struct S0  f6;
};

union U3 {
   const int8_t  f0;
};


static int32_t g_3 = 0xE6F7FBF2L;
static uint16_t g_4 = 5UL;
static struct S1 g_28[7][3] = {{{0x8C4F412FL,{0xA682L,0xD8284A89L,0x8ED9E8BDL},0x1CL,0x64292628L,0x0FL,0L,0x1F3E63D4L},{18446744073709551609UL,{0x74D3L,4294967291UL,0xCE68266CL},0x95L,0xB22489AFL,0xF7L,0xB76FEF6FL,0UL},{18446744073709551609UL,{0x74D3L,4294967291UL,0xCE68266CL},0x95L,0xB22489AFL,0xF7L,0xB76FEF6FL,0UL}},{{18446744073709551615UL,{0UL,0x8D535DD2L,0x3D975123L},0x20L,0x620A3418L,0L,-1L,1UL},{18446744073709551609UL,{0x74D3L,4294967291UL,0xCE68266CL},0x95L,0xB22489AFL,0xF7L,0xB76FEF6FL,0UL},{0x8564DBB9L,{0x2F72L,0xDC8FF05CL,0L},0xB6L,0x77F0A061L,-1L,-10L,0x01F903A7L}},{{18446744073709551609UL,{7UL,2UL,0L},0x61L,0x3B72B46FL,-9L,0L,0UL},{0x8C4F412FL,{0xA682L,0xD8284A89L,0x8ED9E8BDL},0x1CL,0x64292628L,0x0FL,0L,0x1F3E63D4L},{0x9BEBB6F2L,{3UL,0xF40BF68DL,0x70C1731DL},5L,0x242EA6AEL,0x02L,-1L,0x7EEDF667L}},{{18446744073709551615UL,{0UL,0x8D535DD2L,0x3D975123L},0x20L,0x620A3418L,0L,-1L,1UL},{18446744073709551615UL,{0UL,0x8D535DD2L,0x3D975123L},0x20L,0x620A3418L,0L,-1L,1UL},{0x9BEBB6F2L,{3UL,0xF40BF68DL,0x70C1731DL},5L,0x242EA6AEL,0x02L,-1L,0x7EEDF667L}},{{0x8C4F412FL,{0xA682L,0xD8284A89L,0x8ED9E8BDL},0x1CL,0x64292628L,0x0FL,0L,0x1F3E63D4L},{18446744073709551609UL,{7UL,2UL,0L},0x61L,0x3B72B46FL,-9L,0L,0UL},{0x8564DBB9L,{0x2F72L,0xDC8FF05CL,0L},0xB6L,0x77F0A061L,-1L,-10L,0x01F903A7L}},{{18446744073709551609UL,{0x74D3L,4294967291UL,0xCE68266CL},0x95L,0xB22489AFL,0xF7L,0xB76FEF6FL,0UL},{18446744073709551615UL,{0UL,0x8D535DD2L,0x3D975123L},0x20L,0x620A3418L,0L,-1L,1UL},{18446744073709551609UL,{0x74D3L,4294967291UL,0xCE68266CL},0x95L,0xB22489AFL,0xF7L,0xB76FEF6FL,0UL}},{{18446744073709551609UL,{0x74D3L,4294967291UL,0xCE68266CL},0x95L,0xB22489AFL,0xF7L,0xB76FEF6FL,0UL},{0x8C4F412FL,{0xA682L,0xD8284A89L,0x8ED9E8BDL},0x1CL,0x64292628L,0x0FL,0L,0x1F3E63D4L},{18446744073709551615UL,{0UL,0x8D535DD2L,0x3D975123L},0x20L,0x620A3418L,0L,-1L,1UL}}};
static int32_t g_51 = 1L;
static int32_t **g_57 = (void*)0;
static int32_t * const *g_58 = (void*)0;
static int32_t g_77 = (-10L);
static uint8_t g_82 = 254UL;
static uint64_t g_88 = 1UL;
static int8_t *g_101[1] = {&g_28[6][2].f2};
static uint64_t g_108 = 0xC066171E037CFBB6LL;
static uint32_t g_115 = 0UL;
static int16_t g_137 = 0L;
static int16_t *g_136 = &g_137;
static int64_t g_140 = 0xA75BC96B2B8A50C0LL;
static uint64_t g_142[7][3] = {{0x5652836DD0C68C70LL,0x5652836DD0C68C70LL,0x5652836DD0C68C70LL},{0x90952C5253E1635CLL,1UL,0x90952C5253E1635CLL},{0x5652836DD0C68C70LL,0x5652836DD0C68C70LL,0x5652836DD0C68C70LL},{0x90952C5253E1635CLL,1UL,0x90952C5253E1635CLL},{0x5652836DD0C68C70LL,0x5652836DD0C68C70LL,0x5652836DD0C68C70LL},{0x90952C5253E1635CLL,1UL,0x90952C5253E1635CLL},{0x5652836DD0C68C70LL,0x5652836DD0C68C70LL,0x5652836DD0C68C70LL}};
static int32_t *g_171 = (void*)0;
static union U3 g_219 = {-7L};
static int64_t g_221 = 0xBE081A6616ECF5EDLL;
static int64_t *g_220 = &g_221;
static uint32_t g_232 = 0x98DA6132L;
static int16_t g_282[7] = {0xA480L,0xA480L,0xA480L,0xA480L,0xA480L,0xA480L,0xA480L};
static int32_t g_283 = 1L;
static int32_t g_284 = 0xF1100C42L;
static int64_t g_285 = 0xAB46CC7DBC72E0A3LL;
static int16_t g_290[1] = {0x6D1EL};
static struct S1 *g_296 = (void*)0;
static uint32_t g_298[5] = {0xD6CCC472L,0xD6CCC472L,0xD6CCC472L,0xD6CCC472L,0xD6CCC472L};
static int8_t g_301[4] = {(-2L),(-2L),(-2L),(-2L)};
static uint64_t g_302 = 18446744073709551613UL;
static uint32_t g_331 = 1UL;
static struct S0 *g_344 = &g_28[6][2].f1;
static uint8_t g_371[4][3][5] = {{{0x93L,0xC5L,0xE7L,0xE7L,0xC5L},{0x7BL,0UL,0xC8L,0x52L,0x54L},{0x93L,0xC5L,0xE7L,0xE7L,0xC5L}},{{0x7BL,0UL,0xC8L,0x52L,0x54L},{0x93L,0xC5L,0xE7L,0xE7L,0xC5L},{0x7BL,0UL,0xC8L,0x52L,0x54L}},{{0x93L,0xC5L,0xE7L,0xE7L,0xC5L},{0x7BL,0UL,0xC8L,0x52L,0x54L},{0x93L,0xC5L,0xE7L,0xE7L,0xC5L}},{{0x7BL,0UL,0xC8L,0x52L,0x54L},{0x93L,0xC5L,0xE7L,0xE7L,0xC5L},{0x7BL,0UL,0xC8L,0x52L,0x54L}}};
static union U3 *g_405 = &g_219;
static union U3 **g_404 = &g_405;
static uint64_t g_460 = 0x0E8BE36C76A17E3FLL;
static uint32_t g_552 = 0x9BD94AD6L;
static int32_t ***g_597 = (void*)0;
static int32_t ****g_596 = &g_597;
static int32_t g_615 = 0x12E4645FL;
static uint32_t g_616 = 4294967295UL;
static union U3 g_627 = {-1L};
static const struct S0 g_647 = {0xC399L,0x8F3B4AE8L,0xD8B42703L};
static uint64_t *g_649[1][2][7] = {{{&g_142[0][0],&g_88,&g_142[0][0],(void*)0,&g_88,&g_88,(void*)0},{&g_142[0][0],&g_88,&g_142[0][0],(void*)0,&g_88,&g_88,(void*)0}}};
static int16_t **g_669[2][6] = {{(void*)0,(void*)0,&g_136,&g_136,&g_136,(void*)0},{&g_136,&g_136,&g_136,&g_136,&g_136,&g_136}};
static int8_t g_714 = 0L;
static int8_t g_716 = 0xC4L;
static uint64_t g_717[5][3][1] = {{{1UL},{18446744073709551615UL},{1UL}},{{1UL},{18446744073709551615UL},{1UL}},{{1UL},{18446744073709551615UL},{1UL}},{{1UL},{18446744073709551615UL},{1UL}},{{1UL},{18446744073709551615UL},{1UL}}};
static int64_t g_720 = 2L;
static struct S2 g_736 = {6L,{18446744073709551615UL,{0x79A9L,0UL,1L},0x33L,0x85D55CF9L,0xEDL,-10L,1UL},6L,{0x6482L,1UL,0x57470991L},9L,0x2E57AD7FL,{0xFEB9L,1UL,-1L}};
static int32_t g_778 = 0x69430951L;
static int64_t g_785 = (-5L);
static int8_t g_786 = 0L;
static uint16_t g_787 = 0x4644L;
static int64_t **g_822 = &g_220;
static int64_t ***g_821 = &g_822;
static int8_t g_847 = (-1L);
static int64_t g_848 = (-1L);
static uint64_t g_849 = 0x39679DF99AD08040LL;
static uint8_t g_852 = 0x77L;
static int64_t g_860 = 1L;
static int32_t g_861 = 0x180E73ACL;
static uint16_t g_862 = 8UL;
static int64_t g_883 = 0xF6F5C623B242D7B9LL;
static int64_t g_886 = 0L;
static int32_t g_887 = 1L;
static int32_t g_888 = 8L;
static uint8_t g_929 = 0x3CL;
static int32_t *g_934 = &g_736.f1.f1.f2;
static int32_t **g_933 = &g_934;
static int32_t ***g_932 = &g_933;
static struct S0 **g_945 = &g_344;
static struct S0 ***g_944 = &g_945;
static const union U3 g_953 = {0xFEL};
static struct S0 ****g_994[3] = {&g_944,&g_944,&g_944};
static int64_t g_1008 = 0L;
static uint8_t g_1009 = 0UL;
static int32_t g_1022 = (-2L);
static uint8_t g_1023[6][6][5] = {{{0x3EL,8UL,8UL,0x3EL,0x06L},{0x8EL,9UL,6UL,248UL,6UL},{0x3EL,0xA1L,0xACL,8UL,1UL},{0xBDL,248UL,255UL,248UL,0xBDL},{0x06L,5UL,246UL,0x3EL,0xA1L},{6UL,248UL,6UL,9UL,0x8EL}},{{1UL,0xA1L,5UL,5UL,0xA1L},{0xBDL,9UL,249UL,2UL,0xBDL},{0xA1L,8UL,5UL,0x3EL,1UL},{0x8EL,2UL,6UL,255UL,6UL},{0xA1L,0xA1L,246UL,8UL,0x06L},{0xBDL,255UL,255UL,255UL,0xBDL}},{{1UL,5UL,0xACL,0x3EL,0x3EL},{6UL,255UL,6UL,2UL,0x8EL},{0x06L,0xA1L,8UL,5UL,0x3EL},{0xBDL,2UL,249UL,9UL,0xBDL},{0x3EL,8UL,8UL,0x3EL,0x06L},{0x8EL,9UL,6UL,248UL,6UL}},{{0x3EL,0xA1L,0xACL,8UL,1UL},{0xBDL,248UL,255UL,248UL,0xBDL},{0x06L,5UL,246UL,0x3EL,0xA1L},{6UL,248UL,6UL,9UL,0x8EL},{1UL,0xA1L,5UL,5UL,0xA1L},{0xBDL,9UL,249UL,2UL,0xBDL}},{{0xA1L,8UL,5UL,0x3EL,1UL},{0x8EL,2UL,6UL,255UL,6UL},{0xA1L,0xA1L,246UL,8UL,0x06L},{0xBDL,255UL,255UL,255UL,0xBDL},{1UL,5UL,0xACL,0x3EL,0x3EL},{6UL,255UL,6UL,2UL,0x8EL}},{{0x06L,0xA1L,8UL,5UL,0x3EL},{0xBDL,2UL,249UL,9UL,0xBDL},{0x3EL,8UL,8UL,0x3EL,0x06L},{0x8EL,9UL,6UL,248UL,6UL},{0x3EL,0xA1L,0xACL,8UL,1UL},{0xBDL,248UL,255UL,248UL,0xBDL}}};
static uint8_t g_1050 = 0x9FL;
static int64_t g_1084 = (-1L);
static uint32_t g_1085 = 0xC75FBD47L;
static struct S0 ** const **g_1149 = (void*)0;
static const uint32_t *g_1204 = &g_736.f1.f6;
static const uint32_t **g_1203 = &g_1204;
static uint8_t g_1206 = 6UL;
static int64_t g_1225 = 0x5B5585F295404BDCLL;
static int32_t g_1226 = 0x68409218L;
static uint8_t g_1228 = 0xA4L;
static uint64_t g_1261 = 0xA6A6E2A45233C3ADLL;
static const struct S0 g_1312 = {65530UL,0xD2C6A2CEL,-10L};
static uint32_t g_1357 = 0x86469CBFL;
static union U3 **g_1430 = &g_405;
static struct S1 **g_1445 = &g_296;
static uint32_t g_1494[4][3] = {{0xE9AA7EBFL,0xE9AA7EBFL,0xE9AA7EBFL},{0xE9AA7EBFL,0xE9AA7EBFL,0xE9AA7EBFL},{0xE9AA7EBFL,0xE9AA7EBFL,0xE9AA7EBFL},{0xE9AA7EBFL,0xE9AA7EBFL,0xE9AA7EBFL}};
static uint32_t g_1559 = 0x099D218DL;
static int8_t g_1567 = 0xDAL;
static int8_t g_1575 = 0x5BL;
static int32_t g_1577 = 0L;
static uint16_t g_1579 = 0x2E44L;
static int16_t g_1675 = 1L;
static int64_t g_1676 = 0xB3ACAF7CEA292483LL;
static int64_t g_1677[3] = {0xADC0A3E817E11D2BLL,0xADC0A3E817E11D2BLL,0xADC0A3E817E11D2BLL};
static int16_t g_1678 = (-1L);
static int32_t g_1679 = 0x0F0E1327L;
static uint32_t g_1681 = 0x03FBBD09L;
static const uint64_t ***g_1684 = (void*)0;



static int16_t  func_1(void);
static struct S1  func_7(uint16_t  p_8);
static const struct S0  func_29(int16_t  p_30, const int32_t * p_31, const int32_t * p_32);
static int32_t * func_33(uint16_t  p_34, uint64_t  p_35, uint64_t  p_36, uint64_t  p_37, int32_t * const  p_38);
static uint16_t  func_39(int32_t * p_40, int32_t * p_41, int32_t * const  p_42, int32_t * p_43);
static int32_t * func_45(int32_t * p_46, int16_t  p_47, union U3  p_48);
static int32_t ** func_52(int64_t  p_53, int32_t ** p_54);
static uint8_t  func_59(const struct S2  p_60, int32_t * p_61);




static int16_t  func_1(void)
{ 
    int32_t *l_2[6];
    uint16_t l_1372 = 3UL;
    uint16_t l_1435[2][7][4] = {{{65527UL,0xDB3DL,0xFB8DL,0x5990L},{0xB5E1L,0UL,0x5990L,0xDB3DL},{4UL,0x6A6AL,0x5990L,65529UL},{0xB5E1L,4UL,0xFB8DL,65535UL},{65527UL,0UL,0x0900L,0x0900L},{0x0900L,0x0900L,0UL,65527UL},{65535UL,0xFB8DL,4UL,0xB5E1L}},{{65529UL,0x5990L,0x6A6AL,4UL},{0xDB3DL,0x5990L,0UL,0xB5E1L},{0x5990L,0xFB8DL,0xDB3DL,65527UL},{0UL,0x0900L,0xFF4CL,0x0900L},{0x86E3L,0UL,0xB5E1L,65535UL},{65535UL,4UL,0xE197L,65529UL},{0xFF4CL,0x6A6AL,0x09EEL,0xDB3DL}}};
    struct S0 l_1438 = {0xD2C0L,0xFC17155EL,-1L};
    struct S0 l_1439 = {0UL,4294967287UL,0xAF0137A0L};
    struct S2 l_1444 = {0x12L,{0UL,{0xB5FBL,0UL,-1L},0x06L,0L,0x47L,0xADD64263L,0xAC731EF7L},0x940C3749L,{65535UL,0UL,1L},-8L,0x91C66C51L,{0UL,0xE36D5676L,0xAEAD6624L}};
    int32_t l_1448 = (-8L);
    uint32_t l_1490 = 4294967293UL;
    int64_t l_1492 = 0xF9167F3393A18A4FLL;
    uint16_t l_1493 = 3UL;
    uint32_t l_1510 = 0x3BA4A41BL;
    uint32_t l_1512 = 1UL;
    uint32_t l_1530 = 9UL;
    int8_t l_1533 = 0x09L;
    union U3 l_1557[4][1][4] = {{{{0xF0L},{0xF0L},{0x59L},{0xF0L}}},{{{0xF0L},{3L},{3L},{0xF0L}}},{{{3L},{0xF0L},{3L},{3L}}},{{{3L},{3L},{0xF0L},{3L}}}};
    int16_t *l_1589 = &g_290[0];
    const int32_t *l_1620 = &l_1448;
    const int32_t **l_1619 = &l_1620;
    int16_t l_1655 = 0xFA02L;
    const uint64_t *l_1687[1][4];
    const uint64_t **l_1686 = &l_1687[0][3];
    const uint64_t ***l_1685 = &l_1686;
    int32_t l_1691 = 0xCEA224C5L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2[i] = &g_3;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1687[i][j] = &g_108;
    }
    g_4--;
    return (*g_136);
}



static struct S1  func_7(uint16_t  p_8)
{ 
    int32_t *l_9 = &g_3;
    int32_t *l_10 = &g_3;
    int32_t *l_11 = &g_3;
    int32_t *l_12 = &g_3;
    int32_t *l_13 = &g_3;
    int32_t *l_14 = (void*)0;
    int32_t *l_15 = &g_3;
    int16_t l_16 = 0xFA4CL;
    int32_t *l_17 = &g_3;
    int32_t *l_18 = &g_3;
    int32_t *l_19 = &g_3;
    int32_t *l_20 = &g_3;
    int32_t *l_21 = &g_3;
    int32_t *l_22[5];
    uint32_t l_23[5] = {0xFA72D50FL,0xFA72D50FL,0xFA72D50FL,0xFA72D50FL,0xFA72D50FL};
    const struct S2 l_62 = {0xCBL,{0x7721BC9AL,{65535UL,0xFC62902DL,6L},-1L,-5L,0x3BL,-6L,0x223AA5B3L},1L,{0x057BL,0xD64B6C7FL,0x499195F9L},4L,0x7691369FL,{0xC36BL,0xADBCF703L,2L}};
    struct S0 l_1343[4] = {{0x8E72L,0x71D28ACAL,0x2D386479L},{0x8E72L,0x71D28ACAL,0x2D386479L},{0x8E72L,0x71D28ACAL,0x2D386479L},{0x8E72L,0x71D28ACAL,0x2D386479L}};
    int64_t l_1347 = 0x56441890744CE6C2LL;
    int8_t * const l_1354 = &g_847;
    uint8_t *l_1368 = &g_1009;
    struct S0 ***l_1371 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_22[i] = (void*)0;
    --l_23[0];
    for (l_16 = 3; (l_16 <= 2); --l_16)
    { 
        int32_t *l_50 = &g_51;
        int32_t **l_55[3][1][7];
        union U3 l_1325 = {0x9CL};
        struct S1 l_1340 = {0x49FD7AA2L,{0UL,4294967289UL,0xA59DEA0FL},0xBEL,0x2DEEEBA3L,0x2EL,0x7B93D5D3L,0xF5D706E6L};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_55[i][j][k] = &l_14;
            }
        }
        for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
        { 
            int32_t **l_335 = &l_20;
            int32_t l_1313 = 0xC954CEB0L;
            uint64_t l_1338[2];
            struct S0 l_1341 = {0UL,0x482382EEL,7L};
            const uint64_t *l_1345 = &g_717[4][0][0];
            const uint64_t **l_1344[6] = {&l_1345,&l_1345,&l_1345,&l_1345,&l_1345,&l_1345};
            const int32_t *l_1352 = &l_62.f4;
            const int32_t *l_1353 = &l_62.f2;
            uint64_t *l_1355 = &g_1261;
            int32_t l_1356 = 5L;
            uint8_t *l_1366 = (void*)0;
            uint8_t *l_1367 = &g_371[0][1][0];
            int i;
            for (i = 0; i < 2; i++)
                l_1338[i] = 18446744073709551615UL;
        }
        return l_62.f1;
    }
    (*l_21) = ((*l_21) & (((((l_62.f1 , &g_1023[0][0][3]) != (l_1368 = l_1368)) , (l_62.f1 , ((***g_944) = l_1343[3]))) , (safe_lshift_func_uint8_t_u_s((((*l_17) || (*l_12)) < (*l_18)), 6))) , 0x71FC22364CA2FAA3LL));
    l_1371 = l_1371;
    return l_62.f1;
}



static const struct S0  func_29(int16_t  p_30, const int32_t * p_31, const int32_t * p_32)
{ 
    uint64_t ** const l_1030 = &g_649[0][0][6];
    uint64_t **l_1032 = &g_649[0][0][6];
    uint64_t ***l_1031 = &l_1032;
    int32_t l_1033 = 0xCA3DE547L;
    int32_t l_1048[7][3] = {{0L,(-1L),0x07CDF68CL},{0x18A911CEL,(-1L),(-1L)},{(-9L),(-1L),(-7L)},{0L,(-1L),0x07CDF68CL},{0x18A911CEL,(-1L),(-1L)},{(-9L),(-1L),(-7L)},{0L,(-1L),0x07CDF68CL}};
    int8_t l_1072 = 1L;
    struct S0 l_1102 = {7UL,0UL,0xBB255634L};
    const int64_t l_1107 = 3L;
    const struct S1 *l_1117[6][2] = {{&g_736.f1,&g_28[6][2]},{&g_736.f1,&g_28[6][2]},{&g_736.f1,&g_28[6][2]},{&g_736.f1,&g_28[6][2]},{&g_736.f1,&g_28[6][2]},{&g_736.f1,&g_28[6][2]}};
    const int32_t *l_1121 = (void*)0;
    struct S0 *****l_1215 = &g_994[2];
    struct S2 l_1241[3][1][3] = {{{{0x6BL,{18446744073709551615UL,{0x146BL,7UL,-10L},0xA0L,0x7E8E38EDL,5L,0xD361D821L,4294967288UL},7L,{0x7CB6L,0xC71FB11EL,0x99116A45L},0x783447C4L,0x128C5447L,{1UL,8UL,0x6A66788CL}},{0x6BL,{18446744073709551615UL,{0x146BL,7UL,-10L},0xA0L,0x7E8E38EDL,5L,0xD361D821L,4294967288UL},7L,{0x7CB6L,0xC71FB11EL,0x99116A45L},0x783447C4L,0x128C5447L,{1UL,8UL,0x6A66788CL}},{0x6BL,{18446744073709551615UL,{0x146BL,7UL,-10L},0xA0L,0x7E8E38EDL,5L,0xD361D821L,4294967288UL},7L,{0x7CB6L,0xC71FB11EL,0x99116A45L},0x783447C4L,0x128C5447L,{1UL,8UL,0x6A66788CL}}}},{{{1L,{18446744073709551615UL,{0UL,0x9163DC51L,0L},0L,0x1636BD25L,0x80L,0x7CF4BBB2L,4294967286UL},0x39CF78CAL,{0x417FL,1UL,-3L},0xBBAAAAE5L,1UL,{0xBC82L,1UL,0x8899AACDL}},{1L,{18446744073709551615UL,{0UL,0x9163DC51L,0L},0L,0x1636BD25L,0x80L,0x7CF4BBB2L,4294967286UL},0x39CF78CAL,{0x417FL,1UL,-3L},0xBBAAAAE5L,1UL,{0xBC82L,1UL,0x8899AACDL}},{1L,{18446744073709551615UL,{0UL,0x9163DC51L,0L},0L,0x1636BD25L,0x80L,0x7CF4BBB2L,4294967286UL},0x39CF78CAL,{0x417FL,1UL,-3L},0xBBAAAAE5L,1UL,{0xBC82L,1UL,0x8899AACDL}}}},{{{0x6BL,{18446744073709551615UL,{0x146BL,7UL,-10L},0xA0L,0x7E8E38EDL,5L,0xD361D821L,4294967288UL},7L,{0x7CB6L,0xC71FB11EL,0x99116A45L},0x783447C4L,0x128C5447L,{1UL,8UL,0x6A66788CL}},{0x6BL,{18446744073709551615UL,{0x146BL,7UL,-10L},0xA0L,0x7E8E38EDL,5L,0xD361D821L,4294967288UL},7L,{0x7CB6L,0xC71FB11EL,0x99116A45L},0x783447C4L,0x128C5447L,{1UL,8UL,0x6A66788CL}},{0x6BL,{18446744073709551615UL,{0x146BL,7UL,-10L},0xA0L,0x7E8E38EDL,5L,0xD361D821L,4294967288UL},7L,{0x7CB6L,0xC71FB11EL,0x99116A45L},0x783447C4L,0x128C5447L,{1UL,8UL,0x6A66788CL}}}}};
    const uint16_t l_1280 = 1UL;
    int16_t *l_1301 = &g_290[0];
    uint32_t l_1304 = 1UL;
    int32_t *l_1306 = (void*)0;
    int32_t *l_1307 = &l_1048[4][0];
    int32_t *l_1308[1][3];
    uint32_t l_1309[4][2][7] = {{{0UL,0xF307B4E6L,0UL,0xD8DF2B8AL,0xD8DF2B8AL,0UL,0xF307B4E6L},{18446744073709551609UL,1UL,0xA105A1F2L,0xA105A1F2L,1UL,18446744073709551609UL,1UL}},{{0UL,0xD8DF2B8AL,0xD8DF2B8AL,0UL,0xF307B4E6L,0UL,0xD8DF2B8AL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,0xA105A1F2L,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL}},{{0x66335B3AL,0xD8DF2B8AL,0xE20646B9L,0xD8DF2B8AL,0x66335B3AL,0x66335B3AL,0xD8DF2B8AL},{0UL,1UL,0UL,18446744073709551609UL,18446744073709551609UL,0UL,1UL}},{{0xD8DF2B8AL,0xF307B4E6L,0xE20646B9L,0xE20646B9L,0xF307B4E6L,0xD8DF2B8AL,0xF307B4E6L},{0UL,18446744073709551609UL,18446744073709551609UL,0UL,1UL,0UL,18446744073709551609UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1308[i][j] = &l_1048[4][0];
    }
    (*l_1031) = l_1030;
    for (g_736.f2 = 0; (g_736.f2 >= 0); g_736.f2 -= 1)
    { 
        int32_t *l_1034 = &g_1022;
        int32_t *l_1035 = &g_51;
        int32_t *l_1036 = &g_861;
        int32_t *l_1037 = &g_1022;
        int32_t *l_1038 = &g_51;
        int32_t *l_1039 = &g_1022;
        int32_t l_1040 = 0x334E5AC6L;
        int32_t *l_1041 = &g_736.f4;
        int32_t *l_1042 = &l_1033;
        int32_t *l_1043 = &g_283;
        int32_t *l_1044 = &g_736.f4;
        int32_t l_1045[6] = {(-1L),(-1L),0x9139A9F9L,(-1L),(-1L),0x9139A9F9L};
        int32_t *l_1046 = &g_283;
        int32_t *l_1047 = &g_1022;
        int32_t *l_1049[7][7][5] = {{{&g_3,&g_1022,&g_736.f4,&l_1045[2],&l_1040},{&g_3,&l_1040,&l_1045[2],(void*)0,&l_1048[4][0]},{&g_51,&l_1033,&l_1048[2][1],&g_283,&l_1048[4][0]},{&g_51,&l_1048[4][0],&l_1048[4][0],&g_1022,&l_1048[4][0]},{&g_3,(void*)0,&g_1022,&l_1045[2],&g_1022},{&g_3,&l_1048[4][0],&l_1048[2][1],&g_1022,&l_1048[4][0]},{(void*)0,&g_1022,&g_283,&g_283,&l_1048[4][0]}},{{&g_778,&g_1022,(void*)0,(void*)0,&l_1040},{&g_861,&l_1048[4][0],&l_1045[2],&l_1045[2],&g_51},{&g_51,(void*)0,&l_1048[4][1],&g_283,&l_1040},{&l_1045[2],&l_1048[4][0],&g_1022,&g_1022,&l_1048[4][0]},{&g_861,&l_1033,&g_1022,&l_1045[2],&l_1048[4][0]},{&g_3,&l_1040,&l_1048[4][1],&g_1022,&g_1022},{&l_1045[2],&g_1022,&l_1045[2],&l_1048[4][0],&g_736.f4}},{{&g_778,&g_3,&g_3,&l_1033,&l_1048[2][1]},{&g_861,(void*)0,&l_1040,&l_1033,&l_1033},{&g_3,(void*)0,&g_51,&l_1048[4][0],(void*)0},{&g_736.f2,&g_3,&l_1045[2],&l_1048[4][0],&g_3},{&g_861,(void*)0,&g_1022,&l_1048[4][0],&g_736.f2},{&l_1045[2],(void*)0,&g_51,&l_1045[2],&g_736.f2},{&g_778,&g_3,&g_736.f4,&l_1033,&g_3}},{{&g_778,&g_778,&l_1048[4][0],&l_1033,(void*)0},{&l_1045[2],(void*)0,&g_736.f4,(void*)0,&l_1033},{&g_736.f2,&l_1045[2],&g_51,&l_1033,&l_1048[2][1]},{&g_736.f2,&g_736.f4,&g_1022,&l_1048[4][0],&g_736.f4},{&l_1045[2],(void*)0,&l_1045[2],&g_736.f4,&g_736.f2},{&g_778,&l_1048[2][1],&g_51,&l_1048[4][0],&l_1048[4][0]},{&g_778,&g_778,&l_1040,&l_1033,&g_736.f4}},{{&l_1045[2],&g_778,&g_3,(void*)0,(void*)0},{&g_861,&l_1048[2][1],&g_736.f4,&l_1033,&g_736.f2},{&g_736.f2,(void*)0,&l_1048[4][0],&l_1033,(void*)0},{&g_3,&g_736.f4,&l_1045[2],&l_1045[2],&g_736.f4},{&g_861,&l_1045[2],&l_1045[2],&l_1048[4][0],&l_1048[4][0]},{&g_778,(void*)0,&l_1048[4][0],&l_1048[4][0],&g_736.f2},{&g_778,&g_778,&g_736.f4,&l_1048[4][0],&g_736.f4}},{{&g_778,&g_3,&g_3,&l_1033,&l_1048[2][1]},{&g_861,(void*)0,&l_1040,&l_1033,&l_1033},{&g_3,(void*)0,&g_51,&l_1048[4][0],(void*)0},{&g_736.f2,&g_3,&l_1045[2],&l_1048[4][0],&g_3},{&g_861,(void*)0,&g_1022,&l_1048[4][0],&g_736.f2},{&l_1045[2],(void*)0,&g_51,&l_1045[2],&g_736.f2},{&g_778,&g_3,&g_736.f4,&l_1033,&g_3}},{{&g_778,&g_778,&l_1048[4][0],&l_1033,(void*)0},{&l_1045[2],(void*)0,&g_736.f4,(void*)0,&l_1033},{&g_736.f2,&l_1045[2],&g_51,&l_1033,&l_1048[2][1]},{&g_736.f2,&g_736.f4,&g_1022,&l_1048[4][0],&g_736.f4},{&l_1045[2],(void*)0,&l_1045[2],&g_736.f4,&g_736.f2},{&g_778,&l_1048[2][1],&g_51,&l_1048[4][0],&l_1048[4][0]},{&g_778,&g_778,&l_1040,&l_1033,&g_736.f4}}};
        const struct S2 **l_1053 = (void*)0;
        struct S0 l_1060[7] = {{0x42FFL,4294967295UL,4L},{0x5D24L,0xA03A007DL,0x25250884L},{0x42FFL,4294967295UL,4L},{0x42FFL,4294967295UL,4L},{0x5D24L,0xA03A007DL,0x25250884L},{0x42FFL,4294967295UL,4L},{0x42FFL,4294967295UL,4L}};
        struct S1 **l_1106 = &g_296;
        uint64_t l_1171 = 18446744073709551613UL;
        struct S1 *l_1193 = &g_28[6][2];
        struct S0 *****l_1217 = &g_994[2];
        int i, j, k;
        ++g_1050;
        for (g_736.f6.f0 = 0; (g_736.f6.f0 <= 0); g_736.f6.f0 += 1)
        { 
            uint64_t l_1071 = 0UL;
            int64_t l_1081 = 0xC8E52DBA1265301BLL;
            struct S0 l_1088 = {65527UL,0xDA60166AL,0x0560D010L};
            int32_t *l_1109 = &g_1022;
            uint32_t l_1118 = 0x026597DCL;
            int32_t l_1169 = 1L;
            int32_t l_1170 = 0x7DEDBC3BL;
            const uint32_t **l_1205 = &g_1204;
            int16_t l_1218 = 0L;
            l_1048[4][0] &= (*p_32);
            (*l_1041) ^= (l_1053 != (((l_1033 || (safe_div_func_uint32_t_u_u(g_787, (safe_sub_func_int16_t_s_s((((((safe_sub_func_int32_t_s_s((((l_1060[6] , (l_1048[6][1] = ((*g_220) = ((((*g_136) = (safe_sub_func_uint64_t_u_u(((((g_627.f0 || ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_unary_minus_func_int16_t_s(((safe_add_func_int16_t_s_s(l_1048[0][0], ((((*l_1035) = ((!p_30) == 0x6AB410C5L)) , p_30) >= (*g_136)))) < 0xECL))) != p_30) || (*l_1047)) < p_30), g_616)), (**g_822))) >= (*p_32))) | g_647.f1) < 0x11L) , 0x0F56F160E489B46DLL), p_30))) != l_1071) | 18446744073709551606UL)))) | 1L) != p_30), 0xCA6CF691L)) , l_1071) == 4294967288UL) ^ l_1072) < 0xB95ACFEF4F98455DLL), p_30))))) <= p_30) , (void*)0));
            if ((*l_1037))
                break;
            for (g_887 = 0; (g_887 <= 0); g_887 += 1)
            { 
                const struct S0 l_1073 = {65535UL,0xF6B468EEL,-3L};
                return l_1073;
            }
            for (g_77 = 0; (g_77 <= 0); g_77 += 1)
            { 
                uint8_t l_1077 = 0xC6L;
                int32_t l_1082 = (-1L);
                int32_t l_1083 = 0x77DDF8F1L;
                uint32_t *l_1092 = &l_1060[6].f1;
                struct S0 l_1101 = {65529UL,4UL,-1L};
                uint8_t *l_1103 = &g_371[0][1][0];
                uint32_t l_1108 = 8UL;
                int8_t *l_1119 = &g_736.f1.f4;
                union U3 l_1120 = {0L};
                uint16_t *l_1144 = &g_736.f3.f0;
                int32_t l_1167 = 0x93F1722CL;
                int32_t l_1168 = (-1L);
                for (g_860 = 0; (g_860 <= 0); g_860 += 1)
                { 
                    uint16_t l_1074 = 0x674AL;
                    int32_t l_1080 = (-9L);
                    int i, j, k;
                    ++l_1074;
                    --l_1077;
                    (*l_1047) ^= g_717[(g_736.f2 + 2)][(g_736.f2 + 2)][g_860];
                    if ((*p_32))
                        continue;
                    ++g_1085;
                }
                (*l_1047) = (l_1088 , (((((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int16_t_s_u((((*l_1092)--) > (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((g_552 && 5L), 7)), (l_1082 &= (((l_1102 = ((l_1048[4][0] ^ 0UL) , l_1101)) , ((((--(*l_1103)) , l_1106) != (void*)0) , 0xF0L)) >= 0x3CL))))), 8)) | (*g_220)))) > l_1107) & l_1108) && (-7L)) , l_1081));
                l_1121 = p_31;
                if ((*p_31))
                { 
                    uint16_t *l_1134 = &g_4;
                    struct S0 l_1139 = {0x9B77L,4UL,0xD8681532L};
                    struct S0 ** const ***l_1150 = &g_1149;
                    int16_t *l_1162 = (void*)0;
                    int16_t *l_1163 = (void*)0;
                    int16_t *l_1164 = &g_282[0];
                    int32_t l_1165[4][6][2] = {{{(-5L),0x4FB5B393L},{0L,0L},{0L,0x4FB5B393L},{(-5L),0L},{(-5L),0L},{0L,(-5L)}},{{0x4FB5B393L,0x4FB5B393L},{0x4FB5B393L,(-5L)},{0L,0L},{(-5L),0L},{0L,(-5L)},{0x4FB5B393L,0x4FB5B393L}},{{0x4FB5B393L,(-5L)},{0L,0L},{(-5L),0L},{0L,(-5L)},{0x4FB5B393L,0x4FB5B393L},{0x4FB5B393L,(-5L)}},{{0L,0L},{(-5L),0L},{0L,(-5L)},{0x4FB5B393L,0x4FB5B393L},{0x4FB5B393L,(-5L)},{0L,0L}}};
                    int i, j, k;
                    (*l_1037) = (((g_736.f6.f2 ^ 0x36L) , (safe_sub_func_uint16_t_u_u(1UL, p_30))) | (*l_1109));
                    (*l_1044) &= (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x56L, 7)), ((*p_32) >= (((safe_rshift_func_int16_t_s_u((*g_136), p_30)) || (safe_mul_func_uint16_t_u_u((++(*l_1134)), ((((((((*l_1046) = (safe_sub_func_uint8_t_u_u(p_30, ((*g_405) , (l_1139 , 0UL))))) | g_736.f2) , (void*)0) == &g_28[3][2]) <= 4294967286UL) & p_30) && l_1139.f1)))) >= (*l_1109)))));
                    l_1165[1][2][0] ^= ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(((((l_1144 == &g_4) | (safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s(((((&g_944 == ((*l_1150) = g_1149)) != (((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((*l_1164) &= ((*g_136) |= (+((void*)0 == &g_849)))), (*l_1121))) | l_1139.f2), (*p_32))), l_1120.f0)), g_736.f3.f1)), 3UL)) && p_30) | p_30)) == p_30) < l_1108), 5)) > g_647.f2), p_30))) != p_30) & l_1139.f0), (*p_31))) | (*l_1121)), 4)) || g_785);
                    (*g_57) = &l_1045[2];
                }
                else
                { 
                    int64_t l_1166 = 0x5B10B3DED55DDA9ELL;
                    if ((*p_32))
                        break;
                    --l_1171;
                    if ((*l_1121))
                        break;
                    if ((*p_32))
                        break;
                }
            }
            for (g_736.f4 = 0; (g_736.f4 >= 0); g_736.f4 -= 1)
            { 
                struct S1 **l_1194 = &l_1193;
                union U3 l_1201 = {1L};
                uint8_t *l_1202 = &g_929;
                struct S0 *****l_1216 = &g_994[2];
                int32_t l_1219 = 0xB180C3B6L;
                int i, j, k;
                (*l_1034) &= (safe_lshift_func_int16_t_s_s(0xF4B1L, 0));
                l_1048[5][1] = (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(g_717[(g_736.f2 + 3)][(g_736.f2 + 1)][g_736.f2], (safe_mod_func_uint8_t_u_u((p_30 ^ (p_30 || ((((((*l_1038) <= (*l_1039)) > (safe_unary_minus_func_uint32_t_u((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((p_30 < (safe_sub_func_int32_t_s_s((((*l_1194) = l_1193) == l_1117[1][1]), (*p_31)))), (*l_1109))), 9)) , g_717[(g_736.f2 + 3)][(g_736.f2 + 1)][g_736.f2]) || p_30), g_787))))) ^ 0x9AADL) != g_717[(g_736.f2 + 3)][(g_736.f2 + 1)][g_736.f2]) || g_736.f1.f5))), g_862)))), 0x9BBA1F29526E86FDLL)), (*l_1047)));
                if ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_30, (safe_div_func_uint32_t_u_u((l_1201 , (((*l_1202) = (*l_1109)) != ((l_1205 = g_1203) == (void*)0))), g_717[(g_736.f2 + 3)][(g_736.f2 + 1)][g_736.f2])))), ((((-1L) <= g_1206) , p_30) , 1UL))))
                { 
                    const struct S0 l_1207 = {0x5274L,0xA24DBDEBL,-4L};
                    return l_1207;
                }
                else
                { 
                    struct S0 *l_1208 = &g_28[6][2].f1;
                    const int32_t l_1209 = (-1L);
                    int8_t l_1214 = 0x6BL;
                    (*l_1208) = l_1060[6];
                    l_1219 = (l_1209 , (safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((*l_1202) = (l_1214 != ((l_1216 = l_1215) != l_1217))), 0)) & (l_1214 ^ (((l_1201.f0 , l_1201) , l_1060[3]) , 1UL))) , p_30), l_1218)));
                    return l_1060[0];
                }
            }
        }
    }
    for (g_720 = 27; (g_720 > (-11)); --g_720)
    { 
        int32_t *l_1222 = (void*)0;
        int32_t *l_1223 = (void*)0;
        int32_t *l_1224[2];
        int64_t l_1227 = 9L;
        int8_t *l_1233 = &g_716;
        int16_t l_1242 = (-1L);
        int32_t ****l_1253[2];
        int64_t l_1277 = 0L;
        struct S0 l_1285 = {0UL,0x44122795L,-6L};
        int i;
        for (i = 0; i < 2; i++)
            l_1224[i] = &l_1033;
        for (i = 0; i < 2; i++)
            l_1253[i] = &g_597;
        g_1228++;
        l_1033 = ((l_1242 &= (safe_lshift_func_int8_t_s_s((p_30 && (((*l_1233) = p_30) && 2L)), (safe_add_func_int32_t_s_s((((*p_32) && (safe_div_func_int8_t_s_s(p_30, (safe_div_func_uint64_t_u_u(((safe_unary_minus_func_int8_t_s((l_1241[2][0][2] , ((p_30 > g_1009) , l_1102.f2)))) | g_736.f6.f0), 18446744073709551615UL))))) , (-5L)), (*g_1204)))))) && p_30);
        for (g_137 = 0; (g_137 < (-18)); g_137 = safe_sub_func_int8_t_s_s(g_137, 3))
        { 
            uint32_t l_1245 = 18446744073709551609UL;
            int32_t *** const *l_1252 = &g_597;
            const struct S0 l_1260 = {0x175FL,0x28CCB682L,0xF42672B8L};
            uint16_t *l_1294 = &l_1241[2][0][2].f6.f0;
            int32_t l_1305 = 0x6C2F9729L;
            --l_1245;
        }
    }
    l_1309[1][1][2]++;
    (****l_1215) = &l_1102;
    return g_1312;
}



static int32_t * func_33(uint16_t  p_34, uint64_t  p_35, uint64_t  p_36, uint64_t  p_37, int32_t * const  p_38)
{ 
    uint64_t l_1026 = 0x7B2B1ADBE13DBDEFLL;
    int32_t *l_1029 = &g_736.f4;
    --l_1026;
    return l_1029;
}



static uint16_t  func_39(int32_t * p_40, int32_t * p_41, int32_t * const  p_42, int32_t * p_43)
{ 
    int64_t l_358 = (-3L);
    uint32_t *l_362 = &g_28[6][2].f6;
    int8_t l_365 = 0x1DL;
    uint8_t *l_376 = (void*)0;
    struct S2 l_377 = {0L,{0x65FC6D5EL,{0x3C0EL,0x96D27C4BL,0x7A6C449CL},0x03L,0x92EB2810L,0xB2L,0x758C79FCL,0x35F0D1B4L},-1L,{65535UL,0x2E2015F3L,1L},0x7FC40CA8L,0UL,{0x3BAEL,4294967295UL,0L}};
    const uint32_t l_387 = 0x66C97C41L;
    struct S0 **l_393 = (void*)0;
    struct S2 l_398 = {0x27L,{18446744073709551615UL,{0xBE5FL,0x2F48DA1BL,9L},0xE0L,3L,0x69L,-2L,4294967295UL},0x26FD9D8AL,{1UL,0x130DE452L,-1L},0x2F5D25ACL,4294967286UL,{8UL,0x97C8DE38L,0x32F8F7E6L}};
    int32_t l_414[2][5] = {{0x78A02249L,0x78A02249L,0x78A02249L,0x78A02249L,0x78A02249L},{0L,0L,0L,0L,0L}};
    uint64_t l_535 = 0xEEFCCB8EF837C0F9LL;
    union U3 l_595 = {8L};
    const int64_t *l_655 = &g_140;
    const int64_t **l_654[2][3][2];
    const union U3 l_656 = {0xE3L};
    struct S2 *l_735 = &g_736;
    uint16_t *l_762 = &g_736.f1.f1.f0;
    uint16_t *l_765 = &l_377.f1.f1.f0;
    int32_t l_776 = (-4L);
    int32_t l_777 = 0L;
    int32_t l_779 = 3L;
    int32_t l_780 = 0xC7798A39L;
    int32_t l_781 = (-1L);
    uint8_t l_782[5][5] = {{0xA2L,255UL,0xA5L,0xA5L,255UL},{0xA2L,255UL,0xA5L,0xA5L,255UL},{0xA2L,255UL,0xA5L,0xA5L,255UL},{0xA2L,255UL,0xA5L,0xA5L,255UL},{0xA2L,255UL,0xA5L,0xA5L,255UL}};
    const uint32_t l_825 = 0x58B7A997L;
    int16_t ***l_829 = (void*)0;
    int32_t *l_854 = &l_776;
    struct S0 ***l_947 = &l_393;
    int64_t l_966 = (-3L);
    int64_t l_1014[3];
    uint16_t l_1017[3];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_654[i][j][k] = &l_655;
        }
    }
    for (i = 0; i < 3; i++)
        l_1014[i] = (-8L);
    for (i = 0; i < 3; i++)
        l_1017[i] = 0x18F9L;
    if ((safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(g_4)), (g_51 = l_358))), (g_221 ^ ((((~((safe_sub_func_uint16_t_u_u(((l_362 == (void*)0) >= (0x9FL != (safe_mul_func_int8_t_s_s((l_365 >= l_365), 0xE2L)))), 0x6C88L)) , 0xCCL)) && (*g_136)) <= (*g_136)) , l_365)))) || l_365), 0x86BAL)))
    { 
        int64_t l_368 = (-1L);
        uint8_t *l_369 = &g_82;
        uint8_t *l_370 = &g_371[0][1][0];
        struct S2 l_375 = {0x35L,{0x02B384DCL,{2UL,0x3BA1AB98L,-1L},0x68L,0x9622E40DL,0x03L,0L,4294967291UL},0xC76CDACCL,{0xE49EL,0xBCC51002L,-1L},1L,0x7DC849F4L,{65535UL,0x02B15B34L,0x6860C1E1L}};
        int32_t *l_379[3];
        union U3 **l_403 = (void*)0;
        union U3 **l_406 = &g_405;
        int8_t *l_427 = &g_301[3];
        struct S0 *l_455 = &l_377.f1.f1;
        uint32_t l_508 = 18446744073709551608UL;
        uint16_t l_536[5][1][7] = {{{0xCCCAL,0x5020L,0UL,0UL,0x5020L,0xCCCAL,0x5020L}},{{65528UL,0xCCCAL,0xCCCAL,65528UL,0x5020L,65528UL,0xCCCAL}},{{0xD78AL,0xD78AL,0xCCCAL,0UL,0xCCCAL,0xD78AL,0xD78AL}},{{0xD78AL,0xCCCAL,0UL,0xCCCAL,0xD78AL,0xD78AL,0xCCCAL}},{{65528UL,0x5020L,65528UL,0xCCCAL,0xCCCAL,65528UL,0x5020L}}};
        int32_t l_539 = 0x4128163CL;
        const int64_t l_543 = (-1L);
        uint64_t l_569[3];
        int64_t l_573[2];
        int32_t *l_612[7] = {(void*)0,&l_377.f2,&l_377.f2,(void*)0,&l_377.f2,&l_377.f2,(void*)0};
        struct S1 *l_650 = &g_28[5][2];
        uint32_t l_651 = 0xA8A184C3L;
        int16_t **l_668[5][4] = {{(void*)0,&g_136,(void*)0,(void*)0},{&g_136,&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0,&g_136},{(void*)0,&g_136,(void*)0,(void*)0},{&g_136,&g_136,&g_136,&g_136}};
        int16_t ***l_667[6][4];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_379[i] = &l_375.f4;
        for (i = 0; i < 3; i++)
            l_569[i] = 0xE37AF0BAD7DBDCE8LL;
        for (i = 0; i < 2; i++)
            l_573[i] = 0xD52D4DDC6E041264LL;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 4; j++)
                l_667[i][j] = &l_668[4][3];
        }
        if (((safe_add_func_int64_t_s_s((*g_220), 0x50FDF09AB0105279LL)) | ((*l_370) = ((*l_369) = l_368))))
        { 
lbl_540:
            (*g_57) = p_40;
        }
        else
        { 
            uint64_t l_372 = 0x8870B58B7DE9521ALL;
            l_372 = (*p_40);
            (*g_57) = l_362;
            (*g_57) = func_45(((((*l_369) = (safe_lshift_func_uint16_t_u_s((((l_375 , l_376) == (void*)0) > ((-1L) | ((l_377 , (~g_137)) , l_377.f6.f0))), 8))) | l_375.f3.f0) , (*g_57)), l_372, g_219);
        }
lbl_413:
        (*g_57) = l_379[2];
        for (l_377.f2 = 0; (l_377.f2 != (-1)); --l_377.f2)
        { 
            int16_t l_386 = 8L;
            const struct S0 *l_392 = &l_375.f1.f1;
            const struct S0 **l_391 = &l_392;
            const struct S0 ***l_390[3];
            int i;
            for (i = 0; i < 3; i++)
                l_390[i] = &l_391;
            l_393 = (((((1L || (safe_rshift_func_uint16_t_u_u((0xE760F33FL || ((safe_mul_func_int8_t_s_s(l_386, ((l_387 | ((*p_40) > (safe_div_func_uint64_t_u_u(g_140, 1L)))) > l_386))) ^ 0L)), 15))) && (-1L)) || (-6L)) >= 0xF0A4E525L) , (void*)0);
            return l_387;
        }
        for (g_140 = 13; (g_140 > 4); g_140 = safe_sub_func_int8_t_s_s(g_140, 4))
        { 
            int64_t l_409 = 0xD94ACE549A20B9E2LL;
            int32_t l_412 = (-1L);
            int8_t *l_426 = &g_301[1];
            uint16_t l_429[4][7] = {{0x2A8BL,0x8B1FL,0x8868L,1UL,0x8868L,0x8B1FL,0x2A8BL},{0xFB11L,65535UL,0xFB11L,0xFB11L,65535UL,0xFB11L,0xFB11L},{0x2A8BL,1UL,0x044FL,1UL,0x2A8BL,0x0D18L,0x2A8BL},{65535UL,0xFB11L,0xFB11L,65535UL,0xFB11L,0xFB11L,65535UL}};
            int i, j;
            (*g_57) = (((safe_lshift_func_uint8_t_u_s((l_398 , ((((safe_div_func_uint16_t_u_u((l_377 , (safe_mod_func_uint32_t_u_u((l_403 != (l_406 = g_404)), 0xEEC62A99L))), l_398.f6.f1)) == (safe_div_func_uint32_t_u_u(0x19FB8A14L, l_409))) , l_409) | 1L)), l_377.f1.f5)) == (*p_40)) , (*g_57));
            for (l_377.f6.f1 = 0; (l_377.f6.f1 > 55); l_377.f6.f1 = safe_add_func_int8_t_s_s(l_377.f6.f1, 4))
            { 
                uint16_t l_415[7][4][6] = {{{6UL,0x03A9L,6UL,65535UL,0x225AL,65535UL},{0xEA38L,0x03A9L,0xEA38L,65535UL,0x8EBEL,65535UL},{6UL,0x03A9L,6UL,65535UL,0x225AL,65535UL},{0xEA38L,0x03A9L,0xEA38L,65535UL,0x8EBEL,65535UL}},{{6UL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L},{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L}},{{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L},{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L}},{{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L},{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L}},{{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L},{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L}},{{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L},{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L}},{{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L},{0xF40DL,65535UL,0xF40DL,0xDFE9L,6UL,0xDFE9L},{6UL,65535UL,6UL,0xDFE9L,0xEA38L,0xDFE9L}}};
                int i, j, k;
                for (g_284 = 0; (g_284 <= 6); g_284 += 1)
                { 
                    l_412 |= l_409;
                }
                for (l_398.f1.f6 = 0; (l_398.f1.f6 <= 2); l_398.f1.f6 += 1)
                { 
                    int i;
                    if (g_284)
                        goto lbl_413;
                    return g_301[l_398.f1.f6];
                }
                l_415[6][0][3]--;
                for (l_375.f1.f1.f2 = 15; (l_375.f1.f1.f2 < (-12)); l_375.f1.f1.f2 = safe_sub_func_int32_t_s_s(l_375.f1.f1.f2, 2))
                { 
                    if ((**g_57))
                        break;
                    if ((**g_57))
                        break;
                }
            }
            (**g_57) = (1UL & (safe_add_func_uint64_t_u_u(((0x392BL != (safe_lshift_func_uint16_t_u_s(((g_3 && (safe_div_func_int64_t_s_s((*g_220), ((g_4 |= (((((&l_365 != (l_427 = (l_426 = &g_301[3]))) != (safe_unary_minus_func_uint64_t_u(g_290[0]))) ^ 0L) != l_412) >= l_414[1][0])) ^ l_429[2][3])))) >= 1L), 13))) , g_298[1]), (*g_220))));
        }
        if ((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((l_414[1][0] || g_221), (*g_136))) != ((safe_add_func_uint64_t_u_u(((((l_398.f2 = l_414[1][0]) < (g_282[0] = 0x16ABL)) == ((safe_mul_func_int16_t_s_s(l_377.f1.f6, ((((l_377.f4 ^= (safe_add_func_int64_t_s_s((*g_220), l_398.f6.f2))) <= 255UL) || (*g_220)) , 0xCEE9L))) <= l_377.f6.f0)) <= g_28[6][2].f4), 0xA178049E541D10A7LL)) >= l_398.f1.f2)), g_28[6][2].f4)), l_398.f0)))
        { 
            int32_t *l_451[4][6][1] = {{{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2}},{{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2}},{{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2}},{{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2},{&l_377.f2}}};
            uint8_t l_466 = 0xF4L;
            struct S1 *l_488 = &g_28[5][0];
            const uint32_t l_505[4] = {1UL,1UL,1UL,1UL};
            uint64_t *l_506[1][1][2];
            int32_t l_549 = (-1L);
            int8_t *l_567[1][3][3] = {{{&l_377.f1.f2,&l_377.f1.f2,&l_375.f1.f2},{&l_377.f1.f2,&l_377.f1.f2,&l_375.f1.f2},{&l_377.f1.f2,&l_377.f1.f2,&l_375.f1.f2}}};
            union U3 *l_576[5][6][1];
            int64_t l_591 = 0L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_506[i][j][k] = &g_302;
                }
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_576[i][j][k] = (void*)0;
                }
            }
lbl_555:
            for (g_140 = 0; (g_140 != (-28)); g_140 = safe_sub_func_int16_t_s_s(g_140, 7))
            { 
                int32_t *l_447 = &l_377.f1.f1.f2;
                uint64_t *l_465 = &g_88;
                int32_t l_482[7] = {0xD9FE3869L,0xD9FE3869L,0xD9FE3869L,0xD9FE3869L,0xD9FE3869L,0xD9FE3869L,0xD9FE3869L};
                union U3 l_487 = {0x99L};
                struct S1 **l_489 = (void*)0;
                struct S1 **l_490 = &l_488;
                int64_t *l_507[4][5][3] = {{{(void*)0,&l_368,&g_140},{&g_140,&l_368,&l_368},{&l_368,&l_368,(void*)0},{&g_140,(void*)0,&l_368},{&l_368,(void*)0,&g_140}},{{(void*)0,&l_368,&l_368},{&l_368,&l_368,&g_140},{&l_358,&l_368,&l_368},{&l_358,&g_140,(void*)0},{&l_368,&g_285,&l_368}},{{(void*)0,&g_140,&l_358},{&l_368,&l_368,&l_358},{&g_140,&l_368,&l_368},{&l_368,&l_368,(void*)0},{&g_140,(void*)0,&l_368}},{{&l_368,(void*)0,&g_140},{(void*)0,&l_368,&l_368},{&l_368,&l_368,&g_140},{&l_358,&l_368,&l_368},{&l_358,&g_140,(void*)0}}};
                int i, j, k;
                if (((safe_mul_func_int16_t_s_s((!g_51), (p_40 == l_447))) || (((18446744073709551615UL || (safe_mul_func_int8_t_s_s(((*l_427) |= 5L), (~(0xAD29L < ((*g_136) = (*g_136))))))) == 65533UL) & g_28[6][2].f3)))
                { 
                    uint16_t l_452 = 65535UL;
                    (*g_57) = l_447;
                    l_451[1][3][0] = l_379[2];
                    l_452++;
                    if (l_452)
                        break;
                }
                else
                { 
                    struct S0 **l_456 = &g_344;
                    int32_t l_457 = 1L;
                    (*l_456) = l_455;
                    if (l_457)
                        continue;
                }
                if ((safe_mod_func_uint64_t_u_u((((l_377.f6.f0 & ((0xEA2F4BB1L < g_460) != (*p_40))) || (*g_136)) , ((safe_lshift_func_int16_t_s_u(((-2L) <= ((*l_427) = (safe_div_func_uint64_t_u_u((((*l_465) = g_301[1]) == (-1L)), (*g_220))))), l_466)) != l_377.f3.f0)), 1L)))
                { 
                    const uint64_t l_467 = 18446744073709551615UL;
                    int32_t l_468 = (-5L);
                    l_468 = l_467;
                    (**g_57) = (l_414[0][3] >= (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((l_377.f6.f0 ^ ((safe_mul_func_int16_t_s_s((l_377.f6.f2 != l_468), (safe_mul_func_uint16_t_u_u((((*l_406) = (*g_404)) != (g_28[6][2].f1.f0 , ((safe_lshift_func_uint16_t_u_s(((!l_482[5]) > l_482[2]), l_398.f1.f1.f1)) , (void*)0))), 1UL)))) ^ 1L)), 0xBB06L)), l_468)), (*g_136))));
                }
                else
                { 
                    uint32_t l_483 = 1UL;
                    (*l_455) = (*l_455);
                    return l_483;
                }
                for (l_377.f1.f2 = 0; (l_377.f1.f2 > 1); l_377.f1.f2++)
                { 
                    uint32_t l_486 = 0x4D6B1386L;
                    (*g_57) = func_45(p_41, l_486, l_487);
                    return g_28[6][2].f1.f1;
                }
                if ((((*g_220) = ((((*l_490) = l_488) == (void*)0) , (+(*g_136)))) <= ((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((g_285 = (safe_lshift_func_uint8_t_u_s((((((!(safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0x7BL, l_377.f6.f2)), 1L))) ^ ((l_505[1] ^ (*p_40)) > (*p_40))) > 3UL) , &g_302) == l_506[0][0][1]), 3))), g_282[3])) > 4294967295UL), 7)), l_508)) > 0xB3L)))
                { 
                    int16_t l_510 = 0L;
                    uint16_t l_531[3][3][7] = {{{1UL,0x778CL,0x11CCL,1UL,0UL,65535UL,1UL},{65535UL,1UL,0x778CL,0UL,0xB836L,0UL,0x778CL},{1UL,1UL,1UL,0x225FL,65535UL,65528UL,1UL}},{{0xA3E5L,0x778CL,9UL,0xA3E5L,0xAF82L,0xB024L,0x225FL},{7UL,65535UL,0xAF82L,0UL,65535UL,65535UL,9UL},{1UL,1UL,65528UL,0xB836L,0xB836L,65528UL,1UL}},{{1UL,9UL,65535UL,65535UL,0UL,0xAF82L,65535UL},{7UL,0x225FL,0xB024L,0xAF82L,0xA3E5L,9UL,0x778CL},{0xA3E5L,1UL,65528UL,65535UL,0x225FL,1UL,1UL}}};
                    int16_t *l_537 = &g_282[0];
                    int i, j, k;
                    l_510 = (~0x8381D5C723E837ECLL);
                    (**g_57) |= l_510;
                    (**g_57) |= (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(g_28[6][2].f1.f2, l_510)) , (*g_136)), 10));
                    (**g_57) = ((l_510 <= ((safe_lshift_func_int16_t_s_s(((*l_537) = (((l_482[5] ^ ((0x5DB249513B74C9B0LL || ((safe_mul_func_int16_t_s_s(((*g_136) = (((*l_465) ^= (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x94L, l_531[1][1][0])), (l_487.f0 || (((((+(safe_mul_func_int8_t_s_s(((*l_427) = (g_142[2][0] && (*p_40))), l_535))) & l_531[1][2][0]) & g_460) & l_536[4][0][1]) , l_531[1][1][4])))), g_28[6][2].f1.f1)), (-2L))), l_510))) ^ l_510)), g_290[0])) <= 255UL)) == g_28[6][2].f2)) != g_284) , 0x5E37L)), l_531[1][1][0])) || 0x1A90566D61AAB334LL)) & 0x692AB73AL);
                }
                else
                { 
                    uint64_t l_538 = 0UL;
                    if (l_538)
                        break;
                    return l_398.f1.f3;
                }
                if (l_539)
                    continue;
            }
            p_41 = (*g_57);
            if (l_375.f1.f1.f1)
                goto lbl_540;
            for (l_398.f1.f2 = 15; (l_398.f1.f2 > (-19)); l_398.f1.f2 = safe_sub_func_uint16_t_u_u(l_398.f1.f2, 8))
            { 
                uint16_t *l_546 = &l_377.f1.f1.f0;
                int32_t l_561 = (-1L);
                uint64_t l_572 = 1UL;
                (*p_41) = (**g_57);
                for (g_140 = 2; (g_140 >= 0); g_140 -= 1)
                { 
                    if (l_377.f1.f3)
                        break;
                    if (l_543)
                        continue;
                    (**g_57) = (**g_57);
                }
                (**g_57) ^= (((l_377.f1.f1.f1 == ((l_398.f5 ^ (((safe_lshift_func_uint8_t_u_s(g_142[0][0], ((++(*l_546)) == (1UL & l_549)))) != (&p_41 != (void*)0)) < l_377.f3.f0)) & g_28[6][2].f0)) , 0x42L) && l_398.f1.f1.f2);
                for (l_358 = 0; (l_358 == 9); l_358 = safe_add_func_int16_t_s_s(l_358, 1))
                { 
                    --g_552;
                    (*p_41) ^= 0L;
                }
                for (l_377.f3.f0 = 0; (l_377.f3.f0 <= 0); l_377.f3.f0 += 1)
                { 
                    struct S1 **l_556 = &l_488;
                    int64_t *l_562 = &l_368;
                    int64_t *l_568 = (void*)0;
                    int64_t **l_571 = &l_568;
                    int64_t ***l_570 = &l_571;
                    int i;
                    if (l_375.f1.f4)
                        goto lbl_555;
                    (*l_556) = &g_28[1][2];
                    (*l_570) = (((safe_add_func_uint64_t_u_u(((0xB86A964A5E9E9514LL ^ ((*l_562) &= ((*g_344) , ((*g_220) = (safe_mod_func_uint64_t_u_u(l_561, l_561)))))) ^ (0xECL && 0x9DL)), (l_569[2] = (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_101[l_377.f3.f0] == l_567[0][1][0]), g_115)), l_561))))) ^ l_561) , &l_562);
                    if (l_572)
                        continue;
                }
            }
            if (((l_573[1] & (((safe_add_func_int16_t_s_s((*g_136), ((((l_576[0][3][0] == ((safe_mod_func_uint32_t_u_u(4294967295UL, ((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_377.f1.f5, 1)), (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((*g_136), g_298[3])), 2)) < g_282[4]) ^ (-1L)), 11)))), 0xDABE4646L)) & g_285))) , (void*)0)) < (*g_136)) && l_377.f4) && 0x7EA1L))) <= l_377.f1.f1.f0) & l_591)) != 0x17L))
            { 
                int16_t *l_594 = &g_290[0];
                (*g_57) = func_45(p_40, ((1L > 0x4C21C976A806F8F1LL) != ((*l_594) ^= (safe_lshift_func_int16_t_s_u((*g_136), 10)))), l_595);
                g_596 = g_596;
            }
            else
            { 
                for (l_398.f1.f0 = 0; l_398.f1.f0 < 5; l_398.f1.f0 += 1)
                {
                    for (l_377.f1.f0 = 0; l_377.f1.f0 < 1; l_377.f1.f0 += 1)
                    {
                        for (l_375.f6.f0 = 0; l_375.f6.f0 < 7; l_375.f6.f0 += 1)
                        {
                            l_536[l_398.f1.f0][l_377.f1.f0][l_375.f6.f0] = 0x6DB4L;
                        }
                    }
                }
                return g_552;
            }
        }
        else
        { 
            uint64_t l_606 = 0x960DC08007495D0DLL;
            int32_t *l_613 = (void*)0;
            int32_t l_621[4][6] = {{0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL},{0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL},{0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL},{0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL,0xD8BCCDFEL}};
            int64_t **l_657 = &g_220;
            uint16_t *l_658 = &l_377.f6.f0;
            int i, j;
            for (l_375.f3.f0 = 0; (l_375.f3.f0 <= 4); l_375.f3.f0 += 1)
            { 
                uint16_t *l_607 = &g_28[6][2].f1.f0;
                int8_t *l_610 = (void*)0;
                int8_t *l_611 = &l_375.f1.f4;
                int32_t l_614 = 0xC388A77AL;
                int32_t l_620 = (-5L);
                uint32_t l_623 = 0x0054AD97L;
                int i;
                if (((safe_add_func_int64_t_s_s(g_298[l_375.f3.f0], (((((*g_220) = g_298[l_375.f3.f0]) , func_45((l_612[6] = (p_40 = func_45(p_43, (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_298[l_375.f3.f0], ((*l_611) = ((*l_427) = (l_595 , (safe_lshift_func_uint16_t_u_u(((*l_607) = l_606), (safe_rshift_func_int16_t_s_u((1L && 0x01A50E41L), 14))))))))), g_298[l_375.f3.f0])), (*g_405)))), (*g_136), (**g_404))) != l_613) | 0UL))) || 7UL))
                { 
                    int16_t l_619 = 0xAB65L;
                    int32_t l_622[1][7] = {{0x26C40267L,0x1FE8829AL,0x1FE8829AL,0x26C40267L,0x1FE8829AL,0x1FE8829AL,0x26C40267L}};
                    union U3 *l_626 = &g_627;
                    int16_t **l_628 = &g_136;
                    int16_t ***l_629 = &l_628;
                    int i, j;
                    g_616++;
                    if ((**g_57))
                        break;
                    ++l_623;
                    l_626 = ((*l_406) = (*g_404));
                    (*l_629) = l_628;
                }
                else
                { 
                    int8_t l_632 = 0x22L;
                    const struct S0 *l_646 = &g_647;
                    const struct S0 **l_645 = &l_646;
                    uint64_t **l_648 = (void*)0;
                    (*p_40) = (1L & (safe_sub_func_int32_t_s_s((((l_621[3][4] == l_632) , (safe_sub_func_uint32_t_u_u((+(safe_div_func_int16_t_s_s(((*g_136) >= g_298[l_375.f3.f0]), (safe_mod_func_int8_t_s_s((((g_28[6][2].f6 != (safe_div_func_uint64_t_u_u((&l_365 != (void*)0), 0xEDE8DD4FD84C86D8LL))) ^ 0L) < l_632), l_377.f4))))), (**g_57)))) ^ g_552), g_219.f0)));
                    (**g_57) = (g_298[4] , (safe_add_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s((l_375.f1 , (((*l_645) = g_344) == (((((**g_57) | ((((l_398.f1 , ((g_649[0][0][6] = &l_569[2]) == (void*)0)) <= 0x5509C6C62DB9F4E6LL) | 0x760E01730047A4CCLL) != g_298[l_375.f3.f0])) | 0x95DABFF320E4D9DELL) , 0L) , &g_647))))) || 5L), l_606)));
                    g_296 = l_650;
                }
                for (l_377.f1.f2 = 4; (l_377.f1.f2 >= 1); l_377.f1.f2 -= 1)
                { 
                    l_651--;
                }
            }
            (*g_57) = func_45(p_43, (((*l_658) = (l_654[1][2][0] != (l_656 , l_657))) , (safe_add_func_int64_t_s_s((*g_220), (((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(((l_398.f1.f5 > ((((0xD424D7B7L <= l_377.f0) >= (*g_136)) , p_40) == (void*)0)) ^ l_606), 0xBC7FL)), l_414[1][0])), g_283)) | l_621[1][2]) , 0x78L) , l_667[4][2]) != (void*)0)))), (*g_405));
            g_669[1][4] = &g_136;
        }
    }
    else
    { 
        int32_t l_670 = 0xB2564EF7L;
        uint16_t l_673 = 0x671FL;
        int32_t l_713[4] = {0x6300791EL,0x6300791EL,0x6300791EL,0x6300791EL};
        union U3 l_729 = {1L};
        int32_t ***l_731 = &g_57;
        struct S2 *l_733 = &l_398;
        uint32_t l_741[7] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL};
        int i;
        if ((((0xB6L & 0xDFL) == l_670) > (safe_add_func_uint32_t_u_u(0x6E3B461CL, (l_673 , (safe_div_func_uint32_t_u_u(((*l_362) = 0x981D2018L), l_673)))))))
        { 
            int32_t l_689 = (-1L);
            uint8_t l_690 = 0x70L;
            int32_t l_693 = 0x9B881E11L;
            int32_t l_695 = 0xDD97F8BDL;
            int32_t l_711 = 2L;
            int32_t l_715[7];
            uint8_t l_721 = 255UL;
            uint64_t **l_730 = &g_649[0][1][5];
            union U3 l_732 = {-6L};
            int i;
            for (i = 0; i < 7; i++)
                l_715[i] = 0xC5FB1D5AL;
lbl_728:
            (*g_57) = (*g_57);
            for (l_398.f1.f6 = 0; (l_398.f1.f6 != 36); l_398.f1.f6 = safe_add_func_uint8_t_u_u(l_398.f1.f6, 6))
            { 
                uint16_t l_681 = 0x23D2L;
                uint64_t *l_691[3][1];
                int32_t l_692 = 0x0DAB1B10L;
                int32_t *l_694 = &g_51;
                int32_t l_710 = 0xF02EB8E8L;
                const struct S1 *l_726[2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_691[i][j] = &g_142[0][0];
                }
                for (i = 0; i < 2; i++)
                    l_726[i] = (void*)0;
                l_695 &= ((*l_694) = (((l_692 ^= (!(((((*l_362) = ((safe_rshift_func_int8_t_s_s(l_377.f1.f1.f1, l_673)) >= ((((l_681 == ((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((l_681 | (((safe_unary_minus_func_uint16_t_u(0UL)) > (safe_mod_func_uint8_t_u_u(g_77, g_371[0][1][0]))) <= g_647.f0)) > l_689), l_689)) , l_689), l_689)) && 0UL)) >= l_689) && l_414[0][3]) != l_689))) >= l_690) , l_690) | l_398.f6.f0))) || (-7L)) != l_693));
                if ((safe_mul_func_int8_t_s_s((*l_694), (((l_398.f4 = (safe_add_func_int16_t_s_s((!6L), l_689))) != (safe_add_func_int16_t_s_s(((*g_136) = (safe_rshift_func_int16_t_s_u(1L, 15))), l_690))) >= ((*l_362) = (4294967295UL >= ((*g_344) , 0L)))))))
                { 
                    (*l_694) = l_398.f1.f0;
                    if (l_690)
                        continue;
                }
                else
                { 
                    int32_t *l_705 = &l_398.f2;
                    int32_t *l_706 = &l_695;
                    int32_t *l_707 = &l_692;
                    int32_t *l_708 = &l_695;
                    int32_t *l_709[4] = {&l_398.f4,&l_398.f4,&l_398.f4,&l_398.f4};
                    int64_t l_712 = 0xEE64D32BBDD19668LL;
                    int i;
                    p_41 = p_43;
                    g_717[4][2][0]++;
                    ++l_721;
                    (*g_57) = &l_710;
                    return l_377.f1.f1.f0;
                }
                for (g_88 = 0; (g_88 <= 27); g_88 = safe_add_func_int16_t_s_s(g_88, 7))
                { 
                    return l_673;
                }
                for (l_398.f3.f0 = 0; (l_398.f3.f0 <= 1); l_398.f3.f0 += 1)
                { 
                    const struct S1 **l_727 = &l_726[1];
                    (*l_727) = l_726[1];
                    if (g_552)
                        goto lbl_728;
                }
            }
            (*g_57) = func_45(p_40, l_398.f3.f1, l_729);
            p_43 = func_45(func_45(p_43, (l_377.f1 , ((l_730 == &g_649[0][1][2]) > ((*g_596) != l_731))), l_732), l_689, l_732);
        }
        else
        { 
            struct S2 **l_734[1];
            int32_t l_740 = 0xF8A49ED3L;
            uint32_t l_746 = 0x81BDB505L;
            int32_t l_751 = (-2L);
            int i;
            for (i = 0; i < 1; i++)
                l_734[i] = (void*)0;
            l_735 = l_733;
            l_751 = ((safe_mod_func_int32_t_s_s((((safe_unary_minus_func_int8_t_s(l_740)) | l_741[5]) && (safe_mod_func_uint8_t_u_u(l_740, ((safe_sub_func_int64_t_s_s(l_746, (4294967295UL >= (((safe_mod_func_int64_t_s_s(((*g_220) = (l_729 , ((safe_rshift_func_uint16_t_u_u(0xC93BL, 8)) || g_736.f2))), l_751)) , l_740) & l_751)))) & 4L)))), 1L)) ^ l_740);
        }
        (*g_344) = (*g_344);
    }
    if (((safe_lshift_func_int16_t_s_u((l_398.f2 & (safe_mul_func_uint16_t_u_u(0x0580L, (safe_rshift_func_uint8_t_u_s(((((0xD1L > (0x01B26C83L <= (safe_div_func_int16_t_s_s(0x9705L, (l_398.f4 = (safe_sub_func_uint16_t_u_u(((*l_765) = ((*l_762)--)), l_398.f1.f3))))))) == (safe_unary_minus_func_uint16_t_u(((+(safe_rshift_func_uint16_t_u_u(0x3820L, 15))) && l_377.f3.f2)))) < 0x4EL) ^ l_535), 4))))), g_736.f3.f1)) || l_377.f5))
    { 
        return g_736.f6.f0;
    }
    else
    { 
        int32_t *l_770 = &g_736.f4;
        int32_t *l_771 = &g_736.f2;
        int32_t *l_772 = (void*)0;
        int32_t *l_773 = &g_736.f4;
        int32_t *l_774 = &g_736.f2;
        int32_t *l_775[7][6];
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 6; j++)
                l_775[i][j] = (void*)0;
        }
        l_782[0][2]++;
        ++g_787;
        (*g_57) = l_774;
    }
    for (l_398.f6.f1 = 0; (l_398.f6.f1 <= 2); l_398.f6.f1 += 1)
    { 
        int32_t l_799[2][1][1];
        struct S1 l_800 = {4UL,{1UL,7UL,0x5EAD85B2L},0x3DL,0xEBE58A67L,-2L,-8L,0x7EE3B43DL};
        uint64_t *l_801 = &g_142[0][0];
        uint32_t l_802[4] = {1UL,1UL,1UL,1UL};
        uint64_t l_823 = 1UL;
        int8_t *l_824[3][6] = {{&l_377.f1.f4,&l_377.f1.f4,&l_800.f2,(void*)0,(void*)0,&l_800.f2},{(void*)0,(void*)0,&l_800.f2,(void*)0,(void*)0,&l_800.f2},{(void*)0,(void*)0,&l_800.f2,&l_377.f1.f4,&l_377.f1.f4,&l_800.f2}};
        int32_t l_826[5];
        uint32_t *l_828 = &g_736.f5;
        union U3 l_853 = {0x08L};
        int32_t *l_866 = &l_377.f4;
        const int32_t *l_937 = &l_377.f1.f1.f2;
        const int32_t **l_936 = &l_937;
        const int32_t ***l_935 = &l_936;
        const union U3 *l_952[1][1][3];
        struct S2 l_967 = {1L,{0x373D2CE5L,{0xFE1AL,0UL,0L},-2L,2L,0xD5L,0x53174EE8L,0xF381C649L},0xF8AE7222L,{0xF76DL,1UL,0xB5168055L},0x163402A7L,4294967295UL,{0x6B48L,0x603CE82EL,0L}};
        int64_t l_1012 = 0x08F855335A1ED3C7LL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_799[i][j][k] = 7L;
            }
        }
        for (i = 0; i < 5; i++)
            l_826[i] = 0x490720D2L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_952[i][j][k] = &g_953;
            }
        }
    }
    return g_1023[5][1][3];
}



static int32_t * func_45(int32_t * p_46, int16_t  p_47, union U3  p_48)
{ 
    int8_t l_336 = 0xC5L;
    const struct S1 *l_339 = &g_28[6][2];
    struct S1 *l_340 = (void*)0;
    const int16_t *l_341 = &g_137;
    int32_t *l_342 = (void*)0;
    int32_t *l_343[7] = {&g_51,&g_51,&g_283,&g_3,&g_3,&g_51,&g_3};
    union U3 l_345[6][1] = {{{6L}},{{6L}},{{6L}},{{6L}},{{6L}},{{6L}}};
    const struct S0 *l_346[6] = {&g_28[6][2].f1,&g_28[6][2].f1,&g_28[6][2].f1,&g_28[6][2].f1,&g_28[6][2].f1,&g_28[6][2].f1};
    uint64_t l_349 = 4UL;
    uint32_t l_350 = 4294967295UL;
    int i, j;
    g_283 |= (((((void*)0 != &g_284) <= (g_142[0][0]++)) , p_48.f0) || (p_47 | (((l_339 != (l_340 = (void*)0)) == (((((&g_290[0] == l_341) >= 0x3AE880600A618006LL) <= l_336) <= p_48.f0) , p_48.f0)) < p_47)));
    l_350 = (p_48.f0 ^ (((g_344 == (l_345[5][0] , l_346[5])) || ((((((g_28[6][2].f0 , ((safe_lshift_func_uint8_t_u_s(((0x57L == (7L != 1L)) , 0x6EL), p_48.f0)) || p_47)) ^ g_28[6][2].f3) ^ l_349) && p_47) || p_48.f0) ^ p_47)) > p_47));
    return (*g_57);
}



static int32_t ** func_52(int64_t  p_53, int32_t ** p_54)
{ 
    uint16_t l_105 = 0x81B6L;
    int32_t l_106 = (-2L);
    int32_t l_121 = 0xEE94D8E9L;
    int32_t l_122 = 0x51945E40L;
    int32_t l_123[1][7][7] = {{{(-4L),(-1L),(-4L),8L,(-4L),(-1L),(-4L)},{0x3EB460E3L,0x6F6173B2L,0x6F6173B2L,0x3EB460E3L,0x06BE9B9EL,(-1L),(-1L)},{6L,(-1L),1L,(-1L),6L,(-1L),1L},{0x06BE9B9EL,0x3EB460E3L,0x6F6173B2L,0x6F6173B2L,0x3EB460E3L,0x06BE9B9EL,(-1L)},{(-4L),8L,(-4L),(-1L),(-4L),8L,(-4L)},{0x06BE9B9EL,0x6F6173B2L,(-1L),0x3EB460E3L,0x3EB460E3L,(-1L),0x6F6173B2L},{6L,8L,1L,8L,6L,8L,1L}}};
    union U3 l_126 = {0x6AL};
    struct S1 l_143 = {0x7CD24EA2L,{0UL,0x9ED92AE5L,0xED9F9372L},-1L,0xE4CAB560L,0x96L,-1L,0xD386D91EL};
    uint64_t *l_168 = (void*)0;
    int8_t * const l_183 = &l_143.f2;
    uint32_t *l_214[2];
    uint8_t l_315 = 0xD8L;
    int32_t **l_334 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_214[i] = &l_143.f6;
    if ((g_28[6][2].f1 , l_105))
    { 
        int32_t *l_107[5][4] = {{&l_106,(void*)0,&l_106,&l_106},{(void*)0,(void*)0,&g_3,(void*)0},{(void*)0,&l_106,&l_106,(void*)0},{&l_106,(void*)0,&l_106,&l_106},{(void*)0,(void*)0,&g_3,(void*)0}};
        struct S1 *l_111 = &g_28[4][1];
        int i, j;
        g_108--;
        (*l_111) = g_28[4][2];
    }
    else
    { 
        int32_t *l_112 = &g_51;
        int32_t l_113 = 0x2A52D84EL;
        int32_t *l_114[7][6] = {{&l_106,(void*)0,&g_51,&g_51,(void*)0,&l_106},{&l_106,&g_51,&g_51,(void*)0,(void*)0,&g_51},{(void*)0,(void*)0,&g_51,&g_51,&l_106,&l_106},{(void*)0,&g_51,&g_51,(void*)0,&l_106,&g_51},{&l_106,(void*)0,&g_51,&g_51,(void*)0,&l_106},{&l_106,&g_51,&g_51,(void*)0,(void*)0,&g_51},{(void*)0,(void*)0,&g_51,&g_51,&l_106,&l_106}};
        uint32_t *l_120[5][2][1] = {{{&g_28[6][2].f6},{&g_28[6][2].f6}},{{&g_28[6][2].f6},{&g_28[6][2].f6}},{{&g_28[6][2].f6},{&g_28[6][2].f6}},{{&g_28[6][2].f6},{&g_28[6][2].f6}},{{&g_28[6][2].f6},{&g_28[6][2].f6}}};
        uint64_t *l_138 = &g_88;
        int64_t *l_139 = &g_140;
        uint64_t *l_141 = &g_142[0][0];
        const union U3 l_149[6] = {{9L},{9L},{9L},{9L},{9L},{9L}};
        int16_t l_256 = 8L;
        struct S1 *l_294 = &l_143;
        struct S2 l_307 = {0xEFL,{0xFC4F5A4CL,{65535UL,1UL,7L},0x84L,0xD54A6237L,0xB2L,0x8D42A04AL,0x1537B444L},1L,{0xCFD7L,1UL,0xB1A45528L},0xACBFA641L,0xE15099D9L,{0xCA63L,0x39A4F896L,0x2C3C9639L}};
        struct S0 *l_328 = &l_143.f1;
        int i, j, k;
        --g_115;
        if ((safe_rshift_func_int16_t_s_s(((((++g_28[6][2].f6) , l_126) , (safe_mul_func_uint8_t_u_u(p_53, p_53))) > ((*l_141) ^= (((l_121 | (safe_div_func_uint64_t_u_u((p_53 | (0x4197L ^ (safe_div_func_int64_t_s_s(((*l_139) |= ((((g_108 = ((*l_138) &= (((safe_lshift_func_int8_t_s_s(((*l_112) = (!((void*)0 != g_136))), p_53)) , 0xAA9AA2B5C891F83FLL) , p_53))) < g_82) & 0x044C0279L) || (*l_112))), g_82)))), l_106))) & l_121) | g_28[6][2].f1.f1))), (*g_136))))
        { 
            int8_t l_148 = 3L;
            struct S0 l_159 = {0x29CEL,0x5DAC31F8L,1L};
            int32_t l_173 = 0x202AD850L;
            uint64_t l_174 = 18446744073709551615UL;
            uint8_t *l_179 = (void*)0;
            uint8_t *l_180[2][4] = {{&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82,&g_82}};
            int32_t l_181 = 0x75DFA5EDL;
            int32_t l_182[2][1][7] = {{{0xCEB8E079L,0xCEB8E079L,0xCEB8E079L,0xCEB8E079L,0xCEB8E079L,0xCEB8E079L,0xCEB8E079L}},{{0x54CF3BF9L,0x54CF3BF9L,0x54CF3BF9L,0x54CF3BF9L,0x54CF3BF9L,0x54CF3BF9L,0x54CF3BF9L}}};
            int i, j, k;
            if (((*l_112) = (((((p_53 , l_143) , 1L) , (safe_mod_func_uint32_t_u_u((g_137 , (safe_add_func_int64_t_s_s(g_51, 0x1EF9817D95232D53LL))), l_148))) | p_53) <= l_126.f0)))
            { 
                uint16_t l_166 = 0UL;
                int8_t *l_167 = &l_143.f2;
                if (((l_149[4] , ((+(0xAF5FF99356403DF3LL | (((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((l_159 , ((*l_167) = ((g_28[6][2].f1.f1 = 4294967295UL) <= (safe_mul_func_uint8_t_u_u((l_159.f2 ^ (safe_div_func_uint64_t_u_u((l_143.f1 , (safe_mul_func_int16_t_s_s(((0x5FCBL ^ l_166) < 0xB666E4592D3BF737LL), l_143.f5))), g_28[6][2].f1.f2))), (*l_112)))))) ^ 0x02L), 7)), g_142[0][0])) || 0xA6L), 0xAE1DL)), p_53)) , (void*)0) != l_168))) != 0x1D84L)) , l_166))
                { 
                    union U3 *l_170 = &l_126;
                    union U3 **l_169 = &l_170;
                    (*l_169) = &l_126;
                    (*g_57) = g_171;
                }
                else
                { 
                    uint32_t l_172 = 0x75EE9091L;
                    l_122 = (l_173 = (l_172 = ((*l_112) ^= 0x85DD0340L)));
                }
            }
            else
            { 
                for (l_121 = 0; (l_121 <= 0); l_121 += 1)
                { 
                    --l_174;
                    return p_54;
                }
            }
            (*g_57) = (*p_54);
            l_182[1][0][6] = (safe_lshift_func_uint8_t_u_s((l_181 = (l_173 = p_53)), 7));
            l_181 = (l_183 == (void*)0);
            for (l_121 = (-11); (l_121 > 20); l_121 = safe_add_func_uint8_t_u_u(l_121, 6))
            { 
                for (l_159.f2 = 0; (l_159.f2 > (-7)); l_159.f2 = safe_sub_func_uint64_t_u_u(l_159.f2, 1))
                { 
                    return &g_171;
                }
            }
        }
        else
        { 
            uint32_t l_218[4][4] = {{5UL,5UL,1UL,1UL},{5UL,5UL,1UL,1UL},{5UL,5UL,1UL,1UL},{5UL,5UL,1UL,1UL}};
            int32_t l_225 = (-1L);
            int32_t l_226 = (-4L);
            struct S1 *l_253 = &g_28[6][2];
            uint32_t l_325 = 1UL;
            struct S0 **l_329 = &l_328;
            struct S0 ***l_330 = &l_329;
            int i, j;
            if ((safe_unary_minus_func_uint16_t_u(g_28[6][2].f3)))
            { 
                union U3 *l_208[7][3];
                union U3 **l_207 = &l_208[3][2];
                int32_t l_209[6] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                uint32_t *l_212 = &g_28[6][2].f6;
                const int32_t l_216 = 0x84B929F2L;
                int32_t l_217 = 0x8F840392L;
                int32_t l_222 = 0x607FCC5AL;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_208[i][j] = &l_126;
                }
                for (l_143.f3 = 6; (l_143.f3 != (-4)); --l_143.f3)
                { 
                    union U3 *l_206[1];
                    union U3 **l_205[6];
                    uint32_t **l_213 = &l_120[4][1][0];
                    int32_t l_215 = 6L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_206[i] = &l_126;
                    for (i = 0; i < 6; i++)
                        l_205[i] = &l_206[0];
                    l_222 ^= ((((((*l_212) = (((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*l_112), (((*l_139) &= (safe_div_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((0x48263A6AL > (((((((safe_lshift_func_int8_t_s_u((l_209[1] = (l_205[3] == l_207)), 2)) > (((((safe_rshift_func_uint8_t_u_s(p_53, (g_4 > (((((*l_213) = l_212) == l_214[0]) ^ p_53) >= 0x07442C56231903B4LL)))) & p_53) > 0x2A8A3FE75ABED47CLL) , 0x67F2L) & 0xF2D6L)) && l_215) ^ l_216) && p_53) == l_217) & 65528UL)) || 0UL), g_115)) != l_218[0][2]), 2)) == p_53) != p_53), l_143.f1.f2))) > 1UL))), g_108)), 0x3EL)) == l_218[2][0]) >= 0xE4L)) , g_219) , &p_53) == g_220) | p_53);
                }
lbl_230:
                for (l_121 = (-21); (l_121 > 29); ++l_121)
                { 
                    return p_54;
                }
                for (l_121 = 0; (l_121 >= 0); l_121 -= 1)
                { 
                    return &g_171;
                }
                for (g_137 = 2; (g_137 >= 0); g_137 -= 1)
                { 
                    uint32_t l_227 = 4294967288UL;
                    int32_t l_231[4] = {1L,1L,1L,1L};
                    int i;
                    --l_227;
                    if (l_143.f5)
                        goto lbl_230;
                    --g_232;
                }
            }
            else
            { 
                uint32_t l_245 = 8UL;
                struct S1 *l_252 = &g_28[6][2];
                uint32_t **l_254 = &l_120[4][1][0];
                uint8_t *l_255 = &g_82;
                struct S0 *l_257 = &l_143.f1;
                l_256 |= (g_232 && (safe_mul_func_uint16_t_u_u((((*l_255) ^= (safe_rshift_func_uint16_t_u_s(l_218[3][3], (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((((*l_138) = p_53) ^ (safe_lshift_func_uint8_t_u_s((g_221 >= ((*l_183) ^= (255UL || ((((((l_245 <= (~(!(safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_53, 7)), p_53))))) , l_252) == l_253) | g_142[0][0]) > 1L) & 0xAEEBL)))), 5))) ^ (*g_136)), 3)), g_219.f0)) , l_254) == (void*)0)))) & p_53), p_53)));
                (*l_257) = g_28[6][2].f1;
                (*l_112) = (0x5BL >= (((*l_183) = l_218[1][3]) > 0x55L));
            }
            for (l_143.f2 = 3; (l_143.f2 >= 0); l_143.f2 -= 1)
            { 
                int64_t l_267[6][5] = {{0x1DECECB74F96347ALL,0L,0L,0x1DECECB74F96347ALL,1L},{0x1DECECB74F96347ALL,0L,0L,0x1DECECB74F96347ALL,1L},{0x1DECECB74F96347ALL,0L,0L,0x1DECECB74F96347ALL,1L},{0x1DECECB74F96347ALL,0L,0L,0x1DECECB74F96347ALL,1L},{0x1DECECB74F96347ALL,0L,0L,0x1DECECB74F96347ALL,1L},{0x1DECECB74F96347ALL,0L,0L,0x1DECECB74F96347ALL,1L}};
                uint64_t l_272 = 0x952B119D4D782895LL;
                const int8_t l_280 = 0xD8L;
                int32_t l_287[5][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}}};
                union U3 *l_306 = (void*)0;
                union U3 **l_305 = &l_306;
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_s(l_143.f5, (safe_mul_func_int16_t_s_s(((((((l_122 = (l_121 & p_53)) & (((*l_112) = (((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_53, (safe_unary_minus_func_uint16_t_u((l_267[1][3] || ((g_219 , (safe_lshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((g_28[6][2].f4 != (-7L)) || 1L), l_272)) , (*g_220)) == 0L), 1))) ^ g_28[6][2].f6)))))), 0x03BB1635L)) , g_28[6][2].f2) != l_143.f5)) == l_143.f1.f2)) | g_77) != 0x6EL) != p_53) >= g_108), (*g_136))))))
                { 
                    const int32_t *l_277[6][3];
                    const int32_t **l_276 = &l_277[2][1];
                    const int32_t ***l_275 = &l_276;
                    int32_t l_281 = 1L;
                    int32_t l_286 = 0xDE7B98AAL;
                    int32_t l_288 = (-1L);
                    int32_t l_289 = 1L;
                    uint64_t l_291 = 18446744073709551615UL;
                    struct S1 **l_295 = (void*)0;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_277[i][j] = &g_3;
                    }
                    l_106 |= ((safe_add_func_uint32_t_u_u((&g_58 == l_275), (((safe_mul_func_int8_t_s_s(((0x3F394957B352411BLL <= ((&g_142[0][0] != (p_53 , &l_272)) != l_280)) == p_53), p_53)) , (void*)0) == (void*)0))) & g_28[6][2].f5);
                    --l_291;
                    g_296 = l_294;
                }
                else
                { 
                    int32_t l_297 = 0x43F7BD03L;
                    g_298[0]++;
                    (*p_54) = (*g_57);
                }
                g_302--;
                for (g_285 = 1; (g_285 >= 0); g_285 -= 1)
                { 
                    int32_t *l_314[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_314[i] = &l_307.f1.f3;
                    (*l_112) = (((((l_305 == ((l_225 = (l_307 , (g_28[6][2].f3 = (safe_mod_func_uint32_t_u_u(l_218[g_285][(g_285 + 1)], (safe_div_func_int8_t_s_s(0xFBL, (safe_lshift_func_uint8_t_u_u(255UL, (g_142[(g_285 + 1)][(g_285 + 1)] < ((*g_136) = l_105))))))))))) , (void*)0)) , 0x0755153CL) , l_225) , l_218[1][2]) == (*l_112));
                }
                if (l_315)
                    break;
                for (g_88 = 0; g_88 < 7; g_88 += 1)
                {
                    g_282[g_88] = 0x41BEL;
                }
                for (g_108 = 0; (g_108 <= 1); g_108 += 1)
                { 
                    uint32_t l_316 = 18446744073709551607UL;
                    (*p_54) = (*g_57);
                    if (l_106)
                        continue;
                    if (l_316)
                        continue;
                    if (l_316)
                        continue;
                }
            }
            g_283 |= ((safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((((0x1E1A1A6C9B00F3D2LL > ((*g_136) || (safe_div_func_uint16_t_u_u((((*l_112) = (-5L)) < (l_325 <= (((p_53 ^ ((safe_rshift_func_uint16_t_u_u(((void*)0 != &l_315), p_53)) <= 9UL)) , (void*)0) == l_328))), p_53)))) & 0x16010A2E0E3DBFDFLL) & p_53) != 0x925FEAA6L) > l_143.f6), g_284)) > g_28[6][2].f3), 7)) ^ 0xE0697DE586B9E0CDLL);
            (*l_330) = l_329;
        }
        ++g_331;
    }
    return l_334;
}



static uint8_t  func_59(const struct S2  p_60, int32_t * p_61)
{ 
    const int32_t *l_63 = &g_3;
    union U3 l_73 = {0x94L};
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = (void*)0;
    int32_t *l_76 = (void*)0;
    int32_t *l_78 = &g_51;
    int32_t *l_79 = &g_51;
    int32_t *l_80 = &g_51;
    int32_t *l_81[7];
    uint64_t *l_87 = &g_88;
    int8_t *l_92 = &g_28[6][2].f4;
    uint16_t l_102 = 65531UL;
    int16_t l_103 = 0x3F60L;
    int16_t *l_104 = &l_103;
    int i;
    for (i = 0; i < 7; i++)
        l_81[i] = &g_51;
    g_77 |= (((((void*)0 != l_63) < ((p_60.f4 || ((*p_61) && (!g_28[6][2].f1.f1))) ^ (((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_4 >= ((safe_mod_func_uint8_t_u_u(g_28[6][2].f2, g_28[6][2].f2)) > (*l_63))), (*l_63))), 0xDA3FL)) , l_73) , p_60.f1.f2))) , g_28[6][2].f4) && g_28[6][2].f2);
    --g_82;
    (*l_79) = (g_28[6][2].f5 == ((((*l_87) ^= p_60.f1.f2) < ((safe_sub_func_int32_t_s_s((!((*l_92) = (l_79 == l_76))), (safe_div_func_uint64_t_u_u((((((safe_mul_func_uint16_t_u_u(65534UL, ((((((*l_104) = (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((((g_101[0] != l_92) && l_102) == g_3), p_60.f3.f1)) >= l_103), p_60.f6.f0))) | p_60.f6.f1) >= g_28[6][2].f3) || p_60.f1.f6) == 0x7E30L))) & g_82) && 4294967295UL) | g_28[6][2].f5) , p_60.f2), g_3)))) == g_28[6][2].f1.f0)) >= p_60.f2));
    return g_77;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_28[i][j].f0, "g_28[i][j].f0", print_hash_value);
            transparent_crc(g_28[i][j].f1.f0, "g_28[i][j].f1.f0", print_hash_value);
            transparent_crc(g_28[i][j].f1.f1, "g_28[i][j].f1.f1", print_hash_value);
            transparent_crc(g_28[i][j].f1.f2, "g_28[i][j].f1.f2", print_hash_value);
            transparent_crc(g_28[i][j].f2, "g_28[i][j].f2", print_hash_value);
            transparent_crc(g_28[i][j].f3, "g_28[i][j].f3", print_hash_value);
            transparent_crc(g_28[i][j].f4, "g_28[i][j].f4", print_hash_value);
            transparent_crc(g_28[i][j].f5, "g_28[i][j].f5", print_hash_value);
            transparent_crc(g_28[i][j].f6, "g_28[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_142[i][j], "g_142[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_219.f0, "g_219.f0", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);

    }
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_290[i], "g_290[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_298[i], "g_298[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_301[i], "g_301[i]", print_hash_value);

    }
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_371[i][j][k], "g_371[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_627.f0, "g_627.f0", print_hash_value);
    transparent_crc(g_647.f0, "g_647.f0", print_hash_value);
    transparent_crc(g_647.f1, "g_647.f1", print_hash_value);
    transparent_crc(g_647.f2, "g_647.f2", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_717[i][j][k], "g_717[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_736.f0, "g_736.f0", print_hash_value);
    transparent_crc(g_736.f1.f0, "g_736.f1.f0", print_hash_value);
    transparent_crc(g_736.f1.f1.f0, "g_736.f1.f1.f0", print_hash_value);
    transparent_crc(g_736.f1.f1.f1, "g_736.f1.f1.f1", print_hash_value);
    transparent_crc(g_736.f1.f1.f2, "g_736.f1.f1.f2", print_hash_value);
    transparent_crc(g_736.f1.f2, "g_736.f1.f2", print_hash_value);
    transparent_crc(g_736.f1.f3, "g_736.f1.f3", print_hash_value);
    transparent_crc(g_736.f1.f4, "g_736.f1.f4", print_hash_value);
    transparent_crc(g_736.f1.f5, "g_736.f1.f5", print_hash_value);
    transparent_crc(g_736.f1.f6, "g_736.f1.f6", print_hash_value);
    transparent_crc(g_736.f2, "g_736.f2", print_hash_value);
    transparent_crc(g_736.f3.f0, "g_736.f3.f0", print_hash_value);
    transparent_crc(g_736.f3.f1, "g_736.f3.f1", print_hash_value);
    transparent_crc(g_736.f3.f2, "g_736.f3.f2", print_hash_value);
    transparent_crc(g_736.f4, "g_736.f4", print_hash_value);
    transparent_crc(g_736.f5, "g_736.f5", print_hash_value);
    transparent_crc(g_736.f6.f0, "g_736.f6.f0", print_hash_value);
    transparent_crc(g_736.f6.f1, "g_736.f6.f1", print_hash_value);
    transparent_crc(g_736.f6.f2, "g_736.f6.f2", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_860, "g_860", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_929, "g_929", print_hash_value);
    transparent_crc(g_953.f0, "g_953.f0", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1022, "g_1022", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1023[i][j][k], "g_1023[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1084, "g_1084", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1225, "g_1225", print_hash_value);
    transparent_crc(g_1226, "g_1226", print_hash_value);
    transparent_crc(g_1228, "g_1228", print_hash_value);
    transparent_crc(g_1261, "g_1261", print_hash_value);
    transparent_crc(g_1312.f0, "g_1312.f0", print_hash_value);
    transparent_crc(g_1312.f1, "g_1312.f1", print_hash_value);
    transparent_crc(g_1312.f2, "g_1312.f2", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1494[i][j], "g_1494[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1567, "g_1567", print_hash_value);
    transparent_crc(g_1575, "g_1575", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1579, "g_1579", print_hash_value);
    transparent_crc(g_1675, "g_1675", print_hash_value);
    transparent_crc(g_1676, "g_1676", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1677[i], "g_1677[i]", print_hash_value);

    }
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1679, "g_1679", print_hash_value);
    transparent_crc(g_1681, "g_1681", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
