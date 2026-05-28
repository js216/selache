// SPDX-License-Identifier: MIT
// cctest_csmith_e5b9f842.c --- cctest case csmith_e5b9f842 (csmith seed 3854170178)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xedcda3b8 */
/* @exp_ticks 0x7a88 */

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

// Options:   -s 3854170178 -o /tmp/csmith_gen_i5y7gj6b/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int16_t  f1;
};
#pragma pack(pop)

union U1 {
   int8_t * const  f0;
   int8_t * f1;
};

union U2 {
   struct S0  f0;
};


static int32_t g_2[6] = {0x32FFAB8CL,0x32FFAB8CL,0x32FFAB8CL,0x32FFAB8CL,0x32FFAB8CL,0x32FFAB8CL};
static uint64_t g_6 = 0x2EE6D058A835A23ELL;
static struct S0 g_41 = {8UL,0x0EF8L};
static int8_t g_43 = 0L;
static int8_t *g_42[4][4][5] = {{{(void*)0,&g_43,(void*)0,&g_43,&g_43},{&g_43,&g_43,(void*)0,&g_43,(void*)0},{&g_43,&g_43,&g_43,&g_43,&g_43},{(void*)0,&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_43,(void*)0,&g_43,(void*)0},{&g_43,&g_43,&g_43,&g_43,&g_43},{(void*)0,&g_43,(void*)0,&g_43,&g_43},{&g_43,&g_43,(void*)0,&g_43,(void*)0}},{{&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43}},{{&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43,&g_43}}};
static uint64_t g_51 = 0UL;
static int32_t g_54 = 0xE525036FL;
static uint64_t g_55[7][1] = {{0x74E6A83B1D319D7FLL},{0x3965B818E961CAE4LL},{0x74E6A83B1D319D7FLL},{0x74E6A83B1D319D7FLL},{0x3965B818E961CAE4LL},{0x74E6A83B1D319D7FLL},{0x74E6A83B1D319D7FLL}};
static union U1 g_58 = {0};
static uint8_t g_82 = 7UL;
static uint64_t *g_89 = (void*)0;
static uint16_t g_145 = 0x843FL;
static uint16_t g_147 = 0x9F82L;
static uint32_t *g_157 = &g_41.f0;
static int64_t g_175 = 0x2AEDA2CA1CAAA0BFLL;
static uint16_t g_176 = 65535UL;
static uint32_t g_210 = 4294967288UL;
static int32_t *g_218 = &g_2[1];
static int32_t g_251 = (-1L);
static int32_t g_252[6] = {0x4A9BD93BL,0x4A9BD93BL,0x4A9BD93BL,0x4A9BD93BL,0x4A9BD93BL,0x4A9BD93BL};
static uint64_t g_253 = 0x526CEED2223924E8LL;
static int16_t g_261 = 0xADE1L;
static uint16_t g_262 = 9UL;
static int8_t g_270[3] = {0L,0L,0L};
static int32_t g_316 = 0L;
static uint32_t g_320 = 0UL;
static uint8_t g_344 = 251UL;
static union U2 g_367 = {{4294967295UL,0x8DB1L}};
static uint64_t g_393 = 18446744073709551615UL;
static uint16_t g_404 = 65535UL;
static int8_t g_419 = 0L;
static uint16_t *g_453[3][6] = {{&g_404,&g_404,&g_404,&g_404,&g_404,&g_404},{&g_404,&g_404,&g_404,&g_404,&g_404,&g_404},{&g_404,&g_404,&g_404,&g_404,&g_404,&g_404}};
static uint16_t **g_452 = &g_453[1][3];
static uint16_t ***g_451[3] = {&g_452,&g_452,&g_452};
static const uint32_t *g_488[4][4] = {{(void*)0,&g_210,(void*)0,&g_210},{(void*)0,&g_210,(void*)0,&g_210},{(void*)0,&g_210,(void*)0,&g_210},{(void*)0,&g_210,(void*)0,&g_210}};
static const uint32_t **g_487 = &g_488[2][3];
static const uint32_t ***g_486 = &g_487;
static struct S0 *g_495 = (void*)0;
static struct S0 ** const g_494 = &g_495;
static uint32_t g_537 = 0xF2A60F1CL;
static uint64_t g_579 = 0x7C4BEDB2D02CD699LL;
static const union U2 *g_616 = &g_367;
static const union U2 **g_615 = &g_616;
static uint32_t g_637[7][1] = {{4294967295UL},{4294967295UL},{0x92716D89L},{4294967295UL},{4294967295UL},{0x92716D89L},{4294967295UL}};
static int8_t g_645 = 0xC0L;
static int64_t g_646 = 0x66C02960442D2853LL;
static int16_t g_647 = 1L;
static int64_t g_648 = 6L;
static uint64_t g_649[6][1][6] = {{{0x036F44380F617D35LL,0xBADD51F31FDDB663LL,0x5BB0D3B04F824CFFLL,0x036F44380F617D35LL,0UL,0UL}},{{0x78331DD33D9A83BELL,0xBADD51F31FDDB663LL,0xBADD51F31FDDB663LL,0x78331DD33D9A83BELL,0UL,0x5BB0D3B04F824CFFLL}},{{0xB71B0163384EF867LL,0xBADD51F31FDDB663LL,0UL,0xB71B0163384EF867LL,0UL,0xBADD51F31FDDB663LL}},{{0x036F44380F617D35LL,0xBADD51F31FDDB663LL,0x5BB0D3B04F824CFFLL,0x036F44380F617D35LL,0UL,0UL}},{{0x78331DD33D9A83BELL,0xBADD51F31FDDB663LL,0xBADD51F31FDDB663LL,0x78331DD33D9A83BELL,0UL,0x5BB0D3B04F824CFFLL}},{{0xB71B0163384EF867LL,0xBADD51F31FDDB663LL,0UL,0xB71B0163384EF867LL,0UL,0xBADD51F31FDDB663LL}}};
static int8_t g_660 = 5L;
static int8_t *g_677 = &g_660;
static int32_t g_700 = 8L;
static int32_t g_702 = 0x5A2944CEL;
static int64_t g_704 = 3L;
static uint16_t g_705 = 0x6414L;
static int32_t g_783 = (-1L);
static uint32_t g_785 = 1UL;
static uint32_t **g_795 = (void*)0;
static uint64_t g_809 = 18446744073709551611UL;
static uint8_t g_823 = 0UL;
static uint16_t g_836 = 0x31F3L;
static uint32_t g_925 = 7UL;
static uint64_t g_956 = 0x4D492CAED7962CCCLL;
static uint16_t g_966 = 0xB788L;
static uint64_t **g_980 = &g_89;
static uint64_t ***g_979 = &g_980;
static uint32_t g_1008 = 0x1D76474AL;
static int16_t g_1014 = 0x93C5L;
static int64_t g_1016 = (-5L);
static int8_t g_1017 = 0x6BL;
static int32_t g_1018 = 0x6C7B269CL;
static int16_t g_1019 = (-7L);
static uint8_t g_1020 = 1UL;
static uint16_t g_1047 = 65531UL;
static uint8_t *g_1054 = &g_823;
static uint8_t **g_1053[2][6] = {{(void*)0,&g_1054,&g_1054,(void*)0,&g_1054,&g_1054},{(void*)0,&g_1054,&g_1054,(void*)0,&g_1054,&g_1054}};
static uint8_t ***g_1052 = &g_1053[1][3];
static int16_t g_1073 = (-8L);
static uint32_t g_1127[2][3][4] = {{{0x738EDEE9L,1UL,1UL,0x738EDEE9L},{1UL,0x738EDEE9L,1UL,1UL},{0x738EDEE9L,0x738EDEE9L,4294967295UL,0x738EDEE9L}},{{0x738EDEE9L,1UL,1UL,0x738EDEE9L},{1UL,0x738EDEE9L,1UL,1UL},{0x738EDEE9L,0x738EDEE9L,4294967295UL,0x738EDEE9L}}};
static int32_t g_1143 = 0xEF3BC829L;
static int16_t *g_1147 = &g_261;
static int16_t **g_1146 = &g_1147;
static uint32_t g_1168[2] = {4294967286UL,4294967286UL};
static int16_t g_1199 = 0x9CE2L;
static uint8_t ***g_1222 = &g_1053[1][0];
static int32_t g_1262 = (-1L);
static int64_t g_1264[1][7][4] = {{{0xBB6B103BE9E153CALL,0x25C67802EC5FBC89LL,1L,1L},{3L,3L,0xBB6B103BE9E153CALL,1L},{0L,0x25C67802EC5FBC89LL,0L,0xBB6B103BE9E153CALL},{0L,0xBB6B103BE9E153CALL,0xBB6B103BE9E153CALL,0L},{3L,0L,0x25C67802EC5FBC89LL,0L},{0L,3L,0x25C67802EC5FBC89LL,0x25C67802EC5FBC89LL},{0xBB6B103BE9E153CALL,0xBB6B103BE9E153CALL,0L,0x25C67802EC5FBC89LL}}};
static int64_t g_1265 = (-1L);
static int64_t g_1267 = 0x0966B6D2B5558B94LL;
static int64_t g_1268 = (-9L);
static uint64_t g_1273 = 0xCD92A909EA5DAABFLL;
static int16_t g_1348 = 0x01B5L;
static uint64_t g_1349 = 9UL;
static struct S0 g_1362[6] = {{0x20E40CC9L,0x1921L},{0x152B6019L,0x1358L},{0x152B6019L,0x1358L},{0x20E40CC9L,0x1921L},{0x152B6019L,0x1358L},{0x152B6019L,0x1358L}};
static int32_t g_1413 = 0xF931DD33L;
static uint8_t g_1421[4] = {0UL,0UL,0UL,0UL};
static int32_t *g_1433 = &g_316;
static int32_t **g_1432 = &g_1433;
static union U2 ***g_1512 = (void*)0;
static union U2 ****g_1511 = &g_1512;
static int64_t **g_1540 = (void*)0;
static const int32_t g_1564 = 0xF503B757L;
static int32_t *g_1587 = &g_700;
static const struct S0 *g_1606 = &g_1362[4];
static const struct S0 **g_1605 = &g_1606;
static int8_t g_1635 = 3L;
static uint16_t g_1636 = 0x8E0EL;
static uint32_t *g_1649 = (void*)0;
static uint8_t g_1686[3][7][1] = {{{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL}},{{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL}},{{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL},{0xDEL}}};
static int8_t g_1689 = (-1L);
static int32_t g_1690 = 1L;
static int64_t g_1691[6][1] = {{0xB14A11CD9C359DF1LL},{1L},{0xB14A11CD9C359DF1LL},{1L},{0xB14A11CD9C359DF1LL},{1L}};
static int32_t g_1692 = 0xE4941B99L;
static uint32_t g_1693[5] = {0x9A599990L,0x9A599990L,0x9A599990L,0x9A599990L,0x9A599990L};
static union U1 g_1700 = {0};
static union U1 *g_1699[4][3][3] = {{{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700}},{{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700}},{{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700}},{{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700},{&g_58,&g_1700,&g_1700}}};
static int64_t g_1738 = 0x54DA28C6D474F643LL;
static uint64_t g_1740 = 0x87166709BFC8A81CLL;
static uint32_t g_1855 = 18446744073709551615UL;
static int8_t g_1879[4] = {1L,1L,1L,1L};
static uint16_t g_1880[3][6] = {{4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL,4UL,4UL}};
static uint32_t ***g_1967[1] = {&g_795};
static uint32_t ****g_1966 = &g_1967[0];
static uint32_t *****g_1965 = &g_1966;
static int32_t g_2013 = (-1L);
static uint16_t g_2034 = 0xD4A8L;



static int32_t  func_1(void);
static const uint16_t  func_11(uint64_t * p_12, uint64_t * p_13, uint32_t  p_14, int8_t  p_15);
static uint64_t * func_16(uint64_t * p_17, union U1  p_18, uint8_t  p_19, uint16_t  p_20);
static uint64_t * func_21(const int8_t * p_22, uint64_t * const  p_23, int8_t  p_24);
static const int8_t * func_25(uint32_t  p_26, uint64_t * p_27, int32_t  p_28, struct S0  p_29, uint32_t  p_30);
static int16_t  func_34(int8_t * p_35, struct S0  p_36, struct S0  p_37, int8_t * p_38, struct S0  p_39);
static union U1  func_46(uint64_t * p_47, uint64_t * p_48, int8_t * p_49);
static int32_t * func_70(uint32_t  p_71, struct S0 * const  p_72);




static int32_t  func_1(void)
{ 
    int8_t l_10[2][2] = {{0x95L,0x95L},{0x95L,0x95L}};
    uint64_t l_31 = 0xD21462CCD2044653LL;
    struct S0 l_44 = {7UL,-2L};
    int32_t l_2051 = 0x01C0E5F5L;
    int i, j;
    for (g_2[5] = 0; (g_2[5] <= (-23)); --g_2[5])
    { 
        uint64_t *l_5 = &g_6;
        int32_t l_9 = 0x369BD697L;
        int8_t *l_40 = &l_10[1][0];
        int16_t *l_1091 = (void*)0;
        int16_t *l_1092[6][1];
        int32_t l_1093 = 0x98FF6D6CL;
        union U1 l_1890[5][2] = {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}};
        uint64_t *l_1938 = (void*)0;
        int32_t l_2049[2][4] = {{0xC68E1A81L,0x4C7E1948L,0xC68E1A81L,0x4C7E1948L},{0xC68E1A81L,0x4C7E1948L,0xC68E1A81L,0x4C7E1948L}};
        int32_t *l_2050[1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1092[i][j] = &l_44.f1;
        }
        for (i = 0; i < 1; i++)
            l_2050[i] = &g_2013;
    }
    return (*g_1587);
}



static const uint16_t  func_11(uint64_t * p_12, uint64_t * p_13, uint32_t  p_14, int8_t  p_15)
{ 
    uint16_t l_1948 = 0x7813L;
    uint64_t l_1959 = 0xC78497896862D2C4LL;
    int32_t l_1977[3][3];
    union U1 **l_2012[1];
    int32_t *l_2037 = (void*)0;
    int32_t *l_2038 = &g_1690;
    int32_t *l_2039 = &g_1690;
    int32_t *l_2040 = &l_1977[0][0];
    int32_t *l_2041 = &g_1018;
    int32_t *l_2042 = &g_54;
    int32_t *l_2043 = &g_1413;
    int32_t *l_2044 = &g_2013;
    int32_t *l_2045[1];
    uint32_t l_2046[6][5] = {{0xD2AA6E93L,0x3485A1C2L,0x5A151DA6L,0x0D22710FL,4294967295UL},{0xD2AA6E93L,4294967295UL,0UL,0UL,0UL},{0x0D22710FL,1UL,0x0D22710FL,0x3485A1C2L,4294967295UL},{0x7A28F9B5L,0UL,4294967295UL,0x3485A1C2L,0x0D22710FL},{4294967295UL,0UL,0UL,0UL,0UL},{0UL,0UL,4294967295UL,0x0D22710FL,0x5A151DA6L}};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_1977[i][j] = 7L;
    }
    for (i = 0; i < 1; i++)
        l_2012[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_2045[i] = (void*)0;
    for (g_1348 = 0; (g_1348 == (-28)); g_1348 = safe_sub_func_int64_t_s_s(g_1348, 4))
    { 
        union U1 l_1945 = {0};
        int32_t l_1957 = 0x00920831L;
        uint8_t *l_1958 = &g_1686[2][3][0];
        int32_t *l_1999 = &l_1977[2][2];
        int64_t l_2020 = 0xAFD37D7F01920B3ALL;
        int32_t l_2026 = 1L;
        int32_t l_2027 = 1L;
        int32_t l_2028 = (-3L);
        int32_t l_2029 = 0x40BB600BL;
        int32_t l_2032 = 0x34B8A8D0L;
        int16_t l_2033 = (-7L);
        (*g_1587) &= (safe_add_func_int64_t_s_s((((((safe_rshift_func_uint8_t_u_s((p_15 == ((l_1945 , (safe_sub_func_uint16_t_u_u(l_1948, (((p_15 < (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((l_1957 , p_14), (l_1958 == (void*)0))), 0)) != l_1957), 0xC5L)), p_15))) , l_1948) > 0x7FC0L)))) , l_1957)), 6)) ^ 6L) ^ l_1948) , l_1959) , 9L), (*p_12)));
        for (g_251 = 1; (g_251 >= 0); g_251 -= 1)
        { 
            int32_t l_1962 = 0x21A3BDB1L;
            uint16_t l_1976[1][4][5] = {{{0xB65DL,2UL,2UL,2UL,0xB65DL},{0xC8F3L,0UL,1UL,0UL,0xC8F3L},{0xB65DL,2UL,2UL,2UL,0xB65DL},{0xC8F3L,0UL,1UL,0UL,0xC8F3L}}};
            uint64_t l_1987[3];
            int32_t l_2031 = 1L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1987[i] = 9UL;
            for (g_41.f0 = 0; (g_41.f0 <= 0); g_41.f0 += 1)
            { 
                for (g_537 = 0; g_537 < 3; g_537 += 1)
                {
                    g_270[g_537] = (-4L);
                }
                for (g_145 = 0; (g_145 <= 0); g_145 += 1)
                { 
                    (*g_1587) ^= (safe_sub_func_int16_t_s_s(l_1962, (safe_mod_func_int8_t_s_s(((void*)0 == g_1965), (safe_mul_func_int8_t_s_s((-1L), (((*g_1147) = (safe_sub_func_uint64_t_u_u(l_1959, (safe_rshift_func_int16_t_s_s(l_1962, (((safe_lshift_func_int8_t_s_u(0x71L, 3)) != l_1976[0][0][1]) > l_1959)))))) == 1L)))))));
                }
                (*g_1587) |= (-4L);
            }
            (*g_1587) |= ((void*)0 != &g_1690);
            for (g_51 = 0; (g_51 <= 1); g_51 += 1)
            { 
                int32_t *l_1978 = (void*)0;
                int32_t *l_1979 = &g_700;
                int32_t *l_1980 = (void*)0;
                int32_t *l_1981 = &g_1018;
                int32_t *l_1982 = &l_1977[0][0];
                int32_t *l_1983 = (void*)0;
                int32_t *l_1984 = (void*)0;
                int32_t *l_1985 = (void*)0;
                int32_t *l_1986[1][6][1] = {{{&g_700},{&g_700},{&g_700},{&g_700},{&g_700},{&g_700}}};
                uint8_t * const *l_1990 = (void*)0;
                uint16_t l_2000 = 0x4282L;
                struct S0 l_2021[4][7][1] = {{{{0xD02A3274L,9L}},{{0xEA141D96L,-1L}},{{0xFECE7FF9L,-1L}},{{0xB0626579L,1L}},{{0xB0626579L,1L}},{{0xFECE7FF9L,-1L}},{{0xEA141D96L,-1L}}},{{{0xD02A3274L,9L}},{{0xFECE7FF9L,-1L}},{{0xD02A3274L,9L}},{{0xEA141D96L,-1L}},{{0xFECE7FF9L,-1L}},{{0xB0626579L,1L}},{{0xB0626579L,1L}}},{{{0xFECE7FF9L,-1L}},{{0xEA141D96L,-1L}},{{0xD02A3274L,9L}},{{0xFECE7FF9L,-1L}},{{0xD02A3274L,9L}},{{0xEA141D96L,-1L}},{{0xFECE7FF9L,-1L}}},{{{0xB0626579L,1L}},{{0xB0626579L,1L}},{{0xFECE7FF9L,-1L}},{{0xEA141D96L,-1L}},{{0xD02A3274L,9L}},{{0xFECE7FF9L,-1L}},{{0xD02A3274L,9L}}}};
                int i, j, k;
                --l_1987[1];
                for (g_1018 = 0; (g_1018 <= 1); g_1018 += 1)
                { 
                    if (p_14)
                        break;
                }
            }
        }
    }
    --l_2046[3][0];
    return p_15;
}



static uint64_t * func_16(uint64_t * p_17, union U1  p_18, uint8_t  p_19, uint16_t  p_20)
{ 
    int16_t l_1915 = 0x6CFAL;
    int32_t l_1916 = (-1L);
    int32_t l_1917 = 6L;
    int32_t *l_1918 = &g_783;
    int32_t *l_1919 = &g_783;
    int32_t *l_1920 = &g_1690;
    int32_t *l_1921 = &l_1916;
    int32_t *l_1922[4][7] = {{&g_1690,(void*)0,&g_1690,(void*)0,&g_1690,(void*)0,&g_1690},{&g_54,&g_54,&l_1917,&l_1917,&g_54,&g_54,&l_1917},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_54,&l_1917,&l_1917,&g_54,&g_54,&l_1917,&l_1917}};
    uint32_t l_1923 = 0xA5B0CE2CL;
    int16_t l_1928 = 0x3848L;
    uint8_t ** const l_1933 = &g_1054;
    int i, j;
    for (g_1020 = 0; (g_1020 <= 2); g_1020 += 1)
    { 
        int8_t l_1891 = 1L;
        int32_t l_1892 = 0xB880108DL;
        uint64_t l_1909 = 0x7A0E843547932FAELL;
        g_54 = ((*g_1587) = l_1891);
        l_1892 |= 0x0F9E2FA6L;
        for (g_660 = 2; (g_660 >= 0); g_660 -= 1)
        { 
            int8_t l_1906 = 0xF6L;
            const union U2 l_1914[2] = {{{0x4D7A0131L,0x40D1L}},{{0x4D7A0131L,0x40D1L}}};
            int i;
            l_1917 &= (p_20 ^ (safe_rshift_func_int8_t_s_s((!(safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_20, (((*g_1054) && l_1906) >= (safe_rshift_func_int16_t_s_s(l_1909, (safe_mod_func_uint16_t_u_u(((**g_452) = p_19), ((safe_add_func_uint32_t_u_u((l_1915 = ((*g_157) = ((l_1914[1] , l_1906) <= (*p_17)))), l_1916)) , l_1909)))))))) <= 0x02C4L), 4)), 0x26L)), 3)) <= 0L) < l_1914[1].f0.f1), p_20))), 5)));
            (*g_615) = &l_1914[1];
        }
    }
    l_1918 = &g_2[5];
    l_1916 = (*g_1587);
    l_1923++;
    (*l_1921) = (((*l_1918) != (l_1928 == (1UL <= (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((l_1933 == (void*)0) > ((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((p_20 && 0L) <= (*g_677)), (*l_1920))), 5)) & 0UL) > (*l_1920)) & (*p_17))), 7)), (*l_1921)))))) ^ 0xB96F441EL);
    return p_17;
}



static uint64_t * func_21(const int8_t * p_22, uint64_t * const  p_23, int8_t  p_24)
{ 
    int8_t l_1212 = 0x5FL;
    uint64_t *l_1223 = &g_393;
    struct S0 **l_1225[2];
    struct S0 ***l_1224 = &l_1225[1];
    int32_t l_1247 = 0x14EBA4ACL;
    int32_t l_1258 = (-1L);
    int32_t l_1259 = 0xA7812061L;
    int32_t l_1260 = 0x300538CBL;
    int32_t l_1263 = (-1L);
    int32_t l_1266[4];
    int32_t **l_1434 = &g_1433;
    struct S0 l_1507 = {5UL,0x7165L};
    int16_t *l_1510[4][2] = {{&g_1019,&g_1348},{&g_1019,&g_1348},{&g_1019,&g_1348},{&g_1019,&g_1348}};
    uint16_t l_1518 = 0xE36FL;
    union U2 l_1659 = {{1UL,0L}};
    uint16_t **l_1683 = &g_453[1][3];
    union U1 l_1746[1][6] = {{{0},{0},{0},{0},{0},{0}}};
    uint16_t l_1765 = 0x5E9EL;
    uint32_t l_1780 = 18446744073709551612UL;
    uint16_t ****l_1810 = &g_451[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1225[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_1266[i] = 0L;
    for (g_700 = 14; (g_700 == (-28)); g_700--)
    { 
        uint8_t ***l_1208[2][3] = {{&g_1053[1][3],&g_1053[1][3],&g_1053[1][3]},{(void*)0,(void*)0,(void*)0}};
        uint8_t ****l_1209 = &l_1208[0][0];
        int32_t l_1221 = (-1L);
        int i, j;
        if (((((*l_1209) = l_1208[0][0]) != (((((0xFFEBL && (((((safe_rshift_func_uint16_t_u_u(((**g_452) = (l_1212 = p_24)), 0)) , l_1212) || (*p_22)) , (safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((((((safe_lshift_func_int8_t_s_s(l_1212, (((safe_lshift_func_int16_t_s_u((l_1221 == 0x44D0F8756B925658LL), 5)) | l_1221) != 0x5627L))) == p_24) & 0x6CEE591EAC2BB357LL) == l_1221) , 0x73L) ^ (*g_677)), 1UL)), l_1212))) < (-4L))) ^ g_393) != 0x64EFC56437A5CFE6LL) & (*p_22)) , g_1222)) & 2UL))
        { 
            if (p_24)
                break;
            if (p_24)
                continue;
            if (p_24)
                break;
        }
        else
        { 
            return l_1223;
        }
        if (p_24)
            continue;
    }
    (*l_1224) = &g_495;
    for (g_646 = 0; (g_646 <= 0); g_646 += 1)
    { 
        int32_t l_1240 = 0x2CAD1817L;
        int32_t l_1249 = (-1L);
        int32_t l_1257 = 0L;
        int32_t l_1261 = (-6L);
        int32_t l_1269 = 0x73AFF439L;
        int32_t l_1270 = 1L;
        int32_t l_1271 = (-1L);
        int32_t l_1272 = 0xF5002BA8L;
        uint16_t ****l_1278 = &g_451[0];
        struct S0 l_1291 = {0x1EC1CF6AL,0xC9F1L};
        const uint64_t ***l_1303 = (void*)0;
        uint32_t **l_1309 = (void*)0;
        int32_t **l_1338 = &g_218;
        uint64_t *l_1358 = &g_393;
        union U2 *l_1425 = &g_367;
        union U2 **l_1424 = &l_1425;
        int32_t ** const l_1443 = &g_1433;
        struct S0 l_1460 = {1UL,1L};
        int64_t *l_1547[6];
        int64_t **l_1546 = &l_1547[4];
        uint16_t l_1567 = 0x1C83L;
        int16_t l_1578 = (-1L);
        int32_t l_1585 = 0xF079AA01L;
        int32_t l_1704[4] = {7L,7L,7L,7L};
        uint8_t ***l_1757[5];
        uint64_t l_1781 = 1UL;
        int16_t l_1878 = (-6L);
        int i;
        for (i = 0; i < 6; i++)
            l_1547[i] = &g_1264[0][3][3];
        for (i = 0; i < 5; i++)
            l_1757[i] = (void*)0;
        if ((safe_mul_func_int16_t_s_s((((*g_218) ^ (*g_218)) >= (l_1212 >= ((safe_div_func_uint64_t_u_u(3UL, (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_1240 <= ((g_252[(g_646 + 3)] ^= (1UL ^ (((safe_div_func_uint8_t_u_u(((g_637[2][0] , 0xC136C0F8L) > p_24), l_1212)) == l_1212) , l_1212))) , g_252[(g_646 + 3)])) , 8L), 6L)), p_24)), 0)) && (*p_22)) >= p_24), p_24)))) < 0xBAD0L))), 1L)))
        { 
            int32_t *l_1248 = &g_54;
            int32_t *l_1250 = (void*)0;
            int32_t *l_1251 = &l_1247;
            int32_t *l_1252 = &g_700;
            int32_t *l_1253 = &l_1247;
            int32_t *l_1254 = &g_54;
            int32_t *l_1255 = &g_700;
            int32_t *l_1256[7][1] = {{&g_54},{&g_1018},{&g_54},{&g_1018},{&g_54},{&g_1018},{&g_54}};
            int i, j;
            l_1247 = (safe_mod_func_uint32_t_u_u(l_1212, ((*g_157)++)));
            g_1273++;
        }
        else
        { 
            return l_1223;
        }
    }
    return l_1223;
}



static const int8_t * func_25(uint32_t  p_26, uint64_t * p_27, int32_t  p_28, struct S0  p_29, uint32_t  p_30)
{ 
    union U1 l_1098 = {0};
    int32_t l_1107 = 0x431793F8L;
    int32_t l_1116 = 1L;
    int32_t l_1121 = 0x2A08DA3EL;
    int32_t l_1122 = 0L;
    int32_t l_1123 = 0x39BC9F81L;
    int32_t l_1124 = 0x5A90509EL;
    int32_t l_1125 = 0L;
    int32_t l_1126 = 0x0DA5A841L;
    const union U2 *** const l_1202 = &g_615;
    const union U2 ***l_1204 = (void*)0;
    const union U2 ****l_1203 = &l_1204;
    const int8_t *l_1205 = &g_419;
    for (g_261 = 0; (g_261 <= 5); g_261 += 1)
    { 
        int16_t *l_1108 = &g_41.f1;
        uint8_t *l_1109 = &g_82;
        int32_t *l_1110 = &l_1107;
        int32_t *l_1111 = (void*)0;
        int32_t *l_1112 = &g_700;
        int32_t *l_1113 = &l_1107;
        int32_t *l_1114 = &l_1107;
        int32_t *l_1115 = &g_783;
        int32_t *l_1117 = &g_54;
        int32_t *l_1118 = &g_700;
        int32_t l_1119 = 0x6CAD3372L;
        int32_t *l_1120[5][3] = {{&l_1119,(void*)0,&l_1119},{&g_783,&g_700,&g_783},{&l_1119,(void*)0,&l_1119},{&g_783,&g_700,&g_783},{&l_1119,(void*)0,&l_1119}};
        int16_t *l_1142[4][3][5] = {{{&g_1019,&g_261,&g_1014,(void*)0,&g_1019},{&g_1019,(void*)0,&g_1014,&g_261,&g_1019},{&g_1019,&g_261,&g_1014,&g_261,&g_1019}},{{&g_1019,&g_261,&g_1014,(void*)0,&g_1019},{&g_1019,(void*)0,&g_1014,&g_261,&g_1019},{&g_1019,&g_261,&g_1014,&g_261,&g_1019}},{{&g_1019,&g_261,&g_1014,(void*)0,&g_1019},{&g_1019,(void*)0,&g_1014,&g_261,&g_1019},{&g_1019,&g_261,&g_1014,&g_261,&g_1019}},{{&g_1019,&g_261,&g_1014,(void*)0,&g_1019},{&g_1019,(void*)0,&g_1014,&g_261,&g_1019},{&g_1019,&g_261,&g_1014,&g_261,&g_1019}}};
        struct S0 * const l_1144 = &g_367.f0;
        int32_t **l_1145 = &l_1117;
        uint64_t *l_1153 = &g_55[6][0];
        uint32_t ***l_1164 = (void*)0;
        uint64_t ***l_1198 = &g_980;
        int i, j, k;
        (*l_1110) = (safe_sub_func_uint32_t_u_u((((*l_1109) = (((safe_lshift_func_uint16_t_u_u(g_252[g_261], 10)) || 0x828115E9C2C5656ALL) < (l_1098 , ((safe_rshift_func_uint16_t_u_s(g_252[g_261], ((safe_mul_func_uint8_t_u_u(((*g_677) , ((*g_1054) ^= ((safe_mul_func_int16_t_s_s(0x761DL, ((safe_rshift_func_int16_t_s_u(((*l_1108) = (((g_175 = ((l_1107 != 0x9EL) > 0x9C30FD045FF7ECA3LL)) != g_51) , g_1016)), p_29.f1)) && (**g_452)))) > p_30))), 248UL)) < p_29.f1))) != g_252[g_261])))) == 1L), p_28));
        if ((*g_218))
            break;
        g_1127[0][1][1]--;
        (*l_1145) = func_70((((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((**g_452) &= (safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s(0L, (((*l_1108) = 0xFAFFL) < p_28))), (((*l_1110) = ((*l_1112) = 0x96D1L)) || p_29.f1)))) & (g_647 = ((*l_1117) > (l_1116 ^= ((l_1125 = (p_29.f1 < p_26)) || (*g_677)))))), 2)), g_1143)), 0L)), p_26)) <= p_28) < (*l_1117)), l_1144);
        for (g_1019 = 0; (g_1019 <= 2); g_1019 += 1)
        { 
            int32_t l_1150[3][2][1];
            struct S0 l_1154 = {0xD5F6F9EDL,0xC615L};
            uint64_t *l_1155 = &g_649[0][0][5];
            uint16_t l_1201 = 0x57A3L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1150[i][j][k] = 0x46886871L;
                }
            }
            if ((((void*)0 != g_1146) , ((*l_1115) &= l_1116)))
            { 
                const uint32_t l_1162 = 0UL;
                const uint32_t l_1163[6][4][5] = {{{0xAD3DE258L,0x4E8FF38CL,0x71045BBEL,18446744073709551607UL,18446744073709551615UL},{1UL,0x38A6858BL,0x3826C4ADL,1UL,0x555CF284L},{0x0ABAC35CL,0x4E8FF38CL,1UL,0x4E8FF38CL,0x0ABAC35CL},{0x3826C4ADL,0xB0A07A32L,0x38A6858BL,0x555CF284L,0xB0A07A32L}},{{0x0ABAC35CL,7UL,0x67D5935FL,0UL,0x71045BBEL},{1UL,1UL,0xB0A07A32L,0x3826C4ADL,0x3826C4ADL},{0x83721944L,7UL,0x83721944L,18446744073709551615UL,0x67D5935FL},{0x3826C4ADL,0x341FC63CL,0x16C43A90L,0x3826C4ADL,0x16C43A90L}},{{0xAD3DE258L,1UL,0xCBED822EL,7UL,0x71045BBEL},{4UL,0x555CF284L,0x16C43A90L,0x16C43A90L,0x555CF284L},{0x71045BBEL,0x5CD7FF5BL,0x83721944L,18446744073709551607UL,8UL},{0x38A6858BL,0x555CF284L,0xB0A07A32L,0x555CF284L,0x38A6858BL}},{{0x83721944L,1UL,1UL,18446744073709551615UL,0xAD3DE258L},{0x38A6858BL,0x341FC63CL,0x341FC63CL,0x38A6858BL,0x16C43A90L},{0x71045BBEL,7UL,0xCBED822EL,1UL,0xAD3DE258L},{4UL,0x38A6858BL,4UL,0x16C43A90L,0x38A6858BL}},{{0xAD3DE258L,0x5CD7FF5BL,8UL,1UL,8UL},{0x3826C4ADL,0x3826C4ADL,0xB0A07A32L,0x38A6858BL,0x555CF284L},{0x83721944L,18446744073709551607UL,8UL,18446744073709551615UL,0x71045BBEL},{0x555CF284L,0x341FC63CL,4UL,0x555CF284L,0x16C43A90L}},{{0x67D5935FL,18446744073709551607UL,0xCBED822EL,18446744073709551607UL,0x67D5935FL},{4UL,0x3826C4ADL,0x341FC63CL,0x16C43A90L,0x3826C4ADL},{0x67D5935FL,0x5CD7FF5BL,1UL,7UL,8UL},{0x555CF284L,0x38A6858BL,0xB0A07A32L,0x3826C4ADL,0x3826C4ADL}}};
                int i, j, k;
                (*l_1112) ^= ((safe_div_func_int8_t_s_s(l_1150[0][1][0], (++(*l_1109)))) < ((func_46(l_1153, ((*g_980) = ((p_29 = l_1154) , l_1155)), ((safe_mod_func_uint8_t_u_u(0xC8L, (safe_div_func_int8_t_s_s((((l_1122 ^ (safe_div_func_uint64_t_u_u((((((*g_218) | 0x09DCA460L) <= l_1162) & 0L) == 1L), 0x2F242363C41A159DLL))) | p_30) , l_1163[0][2][2]), 1L)))) , (void*)0)) , p_28) > 0x48FB2D1BL));
                if (p_26)
                    break;
            }
            else
            { 
                int64_t l_1165 = 0xA3E1A6CFC4AE6DF3LL;
                int32_t l_1166 = 0x9689AF0CL;
                int32_t l_1167 = 0xAFD032EDL;
                (*l_1145) = func_70((l_1164 != (void*)0), (*g_494));
                g_1168[1]--;
            }
            for (g_253 = 0; (g_253 <= 2); g_253 += 1)
            { 
                uint64_t *l_1195 = &g_809;
                int8_t *l_1196 = &g_270[2];
                int32_t l_1197 = (-3L);
                int8_t *l_1200 = &g_43;
                int i;
                for (g_54 = 0; (g_54 <= 5); g_54 += 1)
                { 
                    return &g_419;
                }
                (*l_1110) = ((l_1126 && ((((safe_mod_func_int64_t_s_s((((safe_sub_func_int8_t_s_s((!247UL), (safe_rshift_func_int8_t_s_u(((*l_1200) ^= (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(0L)), ((((((((safe_sub_func_uint8_t_u_u(((*l_1118) = (((safe_add_func_uint64_t_u_u((((l_1116 = l_1154.f0) > (((++(*l_1153)) || (safe_lshift_func_uint16_t_u_u((((g_270[g_1019] = ((++(*g_1054)) , ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((func_46((*g_980), l_1195, (l_1196 = &g_645)) , p_26) < l_1122), (*g_677))), l_1197)) || (*g_218)))) , l_1198) == (void*)0), p_28))) , g_809)) , l_1197), l_1122)) ^ 4L) || p_28)), 7L)) >= p_29.f1) || 18446744073709551615UL) & (*g_218)) || g_1199) & g_252[2]) == l_1122) != p_30)))), p_28)))) ^ 18446744073709551615UL) <= g_1127[0][1][1]), p_29.f0)) <= 18446744073709551615UL) <= l_1201) , p_30)) & l_1125);
            }
        }
    }
    (*l_1203) = l_1202;
    return l_1205;
}



static int16_t  func_34(int8_t * p_35, struct S0  p_36, struct S0  p_37, int8_t * p_38, struct S0  p_39)
{ 
    struct S0 *l_45 = &g_41;
    int8_t *l_59 = &g_43;
    int32_t l_64 = 0xFBD42F90L;
    int32_t l_65 = 0x642FC308L;
    int32_t l_66[2];
    uint8_t l_67[3];
    uint8_t ***l_1056 = &g_1053[1][5];
    union U2 l_1077 = {{0x019E063AL,1L}};
    uint32_t l_1078 = 1UL;
    int16_t *l_1087 = &g_1019;
    uint32_t l_1088 = 4294967295UL;
    int32_t *l_1089[6][2][2];
    struct S0 l_1090 = {1UL,0xFA7CL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_66[i] = 0x8B9DB5DFL;
    for (i = 0; i < 3; i++)
        l_67[i] = 0UL;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_1089[i][j][k] = &g_54;
        }
    }
lbl_1071:
    (*l_45) = p_39;
    for (p_39.f1 = 0; (p_39.f1 <= 3); p_39.f1 += 1)
    { 
        uint64_t *l_50 = &g_51;
        int8_t *l_52 = &g_43;
        int32_t l_60[4][5];
        int32_t *l_61 = &g_54;
        int32_t *l_62 = &l_60[3][0];
        int32_t *l_63[4];
        int32_t **l_1050 = &l_61;
        uint8_t ****l_1055[6][6][1] = {{{(void*)0},{&g_1052},{&g_1052},{(void*)0},{&g_1052},{&g_1052}},{{(void*)0},{&g_1052},{&g_1052},{(void*)0},{&g_1052},{&g_1052}},{{(void*)0},{&g_1052},{&g_1052},{(void*)0},{&g_1052},{&g_1052}},{{(void*)0},{&g_1052},{&g_1052},{(void*)0},{&g_1052},{&g_1052}},{{(void*)0},{&g_1052},{&g_1052},{(void*)0},{&g_1052},{&g_1052}},{{(void*)0},{&g_1052},{&g_1052},{(void*)0},{&g_1052},{&g_1052}}};
        int32_t l_1069 = 0x79DB0CF9L;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_60[i][j] = 0x431BB57CL;
        }
        for (i = 0; i < 4; i++)
            l_63[i] = &g_54;
        l_60[0][1] |= ((func_46(l_50, l_50, (g_41.f0 , l_52)) , (p_37 , l_59)) != p_35);
        l_67[0]++;
        g_218 = ((*l_1050) = func_70(p_39.f0, &g_41));
        for (g_537 = 0; (g_537 <= 3); g_537 += 1)
        { 
            int32_t l_1051 = 5L;
            (*l_62) = (*g_218);
            return l_1051;
        }
        l_1056 = g_1052;
        for (g_700 = 3; (g_700 >= 0); g_700 -= 1)
        { 
            int32_t *l_1057 = &l_66[1];
            int64_t * const l_1058 = &g_646;
            int32_t l_1072[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1072[i] = 0xB6A89F8EL;
            if (((l_1057 != &g_2[3]) <= (**g_452)))
            { 
                int16_t l_1066 = (-8L);
                int32_t **l_1070[3][3] = {{&l_61,&l_61,&l_61},{&l_1057,&l_1057,&l_1057},{&l_61,&l_61,&l_61}};
                int i, j;
                for (g_809 = 0; (g_809 <= 3); g_809 += 1)
                { 
                    (*l_1057) = ((void*)0 == l_1058);
                    return g_2[5];
                }
                (*l_62) = ((*g_616) , (safe_mul_func_int8_t_s_s((l_64 , (*p_35)), (~((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((--(**g_452)) == l_1069), ((l_1070[1][1] == l_1070[1][0]) | ((void*)0 == &g_495)))) > 0UL), 0x2FL)) > 0UL)))));
            }
            else
            { 
                for (g_261 = 0; (g_261 <= 3); g_261 += 1)
                { 
                    return g_251;
                }
                for (g_925 = 0; (g_925 <= 3); g_925 += 1)
                { 
                    return g_1020;
                }
                return g_261;
            }
            for (g_1014 = 3; (g_1014 >= 0); g_1014 -= 1)
            { 
                uint32_t l_1074[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1074[i][j] = 0x9AE39FCDL;
                }
                if (g_367.f0.f0)
                    goto lbl_1071;
                l_1074[0][2]++;
                for (g_175 = 3; (g_175 >= 0); g_175 -= 1)
                { 
                    return l_66[1];
                }
                if ((*g_218))
                    continue;
            }
        }
    }
    g_54 |= (((l_1077 , (l_1078 <= ((*g_218) && ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u((((*l_1087) = (safe_rshift_func_int8_t_s_u(l_66[1], 2))) ^ (((0x37L == (l_64 ^= (*p_35))) || 0xABL) , g_175)), l_1088)) ^ 6UL), (*p_35))), 0x13L)) && (*g_1054))))) >= l_67[0]) , (*g_218));
    (*l_45) = l_1090;
    return g_1020;
}



static union U1  func_46(uint64_t * p_47, uint64_t * p_48, int8_t * p_49)
{ 
    int32_t *l_53[2][3] = {{&g_2[1],(void*)0,&g_2[1]},{&g_2[1],(void*)0,&g_2[1]}};
    int i, j;
    --g_55[6][0];
    return g_58;
}



static int32_t * func_70(uint32_t  p_71, struct S0 * const  p_72)
{ 
    int16_t l_78[7][3][7] = {{{(-7L),0x052CL,0x056BL,(-7L),0x947EL,(-7L),0x056BL},{0xF36AL,0xF36AL,0x2D1EL,0xC6C4L,(-5L),0xE582L,0xF36AL},{0x233AL,0x056BL,(-1L),0x052CL,9L,9L,0x052CL}},{{0x409DL,0x6938L,0x409DL,0x20CDL,(-5L),0x409DL,(-1L)},{0x052CL,0x947EL,0x6FD7L,5L,0x947EL,0L,0x947EL},{0xC4F5L,0x20CDL,0x20CDL,0xC4F5L,(-1L),0x409DL,(-5L)}},{{9L,0x233AL,0x056BL,(-1L),0x052CL,0L,0L},{0x20CDL,0x409DL,0x6938L,0x409DL,0x20CDL,(-5L),0x409DL},{(-1L),7L,0x6FD7L,(-7L),0xEDB0L,0x6FD7L,9L}},{{6L,5L,0x3186L,0x3186L,5L,6L,0xE582L},{(-1L),(-7L),(-3L),(-1L),9L,5L,(-7L)},{0x20CDL,0x2D1EL,6L,(-1L),6L,0x2D1EL,0x20CDL}},{{0L,(-7L),0x336FL,0xEDB0L,0x056BL,0L,0xEDB0L},{1L,5L,0xC6C4L,0x409DL,0x409DL,0xC6C4L,5L},{(-7L),7L,0x336FL,0x03ECL,7L,0xEDB0L,9L}},{{(-8L),0x409DL,6L,(-8L),5L,(-8L),6L},{0x056BL,0x056BL,(-3L),0x03ECL,(-7L),0x052CL,0x056BL},{0x20CDL,6L,0x3186L,0x409DL,0x2D1EL,0x2D1EL,0x409DL}},{{0x6FD7L,9L,0x6FD7L,0xEDB0L,(-7L),0x6FD7L,7L},{0x409DL,5L,0x6938L,(-1L),5L,0xC4F5L,5L},{(-1L),0xEDB0L,0xEDB0L,(-1L),7L,0x6FD7L,(-7L)}}};
    int32_t l_80[4] = {0x785D54DBL,0x785D54DBL,0x785D54DBL,0x785D54DBL};
    uint8_t *l_81[1][4][1] = {{{&g_82},{&g_82},{&g_82},{&g_82}}};
    int32_t l_83 = 0xFF2F0833L;
    uint64_t *l_88 = &g_55[6][0];
    uint64_t **l_87[4];
    int32_t *l_113 = &l_83;
    struct S0 l_116 = {0xA0DB06F5L,-2L};
    uint16_t l_141 = 0x71B6L;
    int32_t l_144 = 0xBC216531L;
    uint8_t l_179 = 246UL;
    uint32_t ***l_205 = (void*)0;
    uint32_t ****l_227[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 *l_258 = &l_116;
    uint32_t ****l_281 = &l_205;
    int16_t l_318 = 0xDC7DL;
    union U1 l_324 = {0};
    int8_t l_345 = 8L;
    uint32_t l_363[4][1][7] = {{{0xDB20FBAEL,4294967295UL,4294967291UL,4294967295UL,0xDB20FBAEL,0xDB20FBAEL,4294967295UL}},{{0UL,0x151ED1F5L,0UL,4294967295UL,4294967295UL,0UL,0x151ED1F5L}},{{4294967295UL,0x151ED1F5L,4294967291UL,4294967291UL,0x151ED1F5L,4294967295UL,0x151ED1F5L}},{{0UL,4294967295UL,4294967295UL,0UL,0x151ED1F5L,0UL,4294967295UL}}};
    uint32_t l_432 = 2UL;
    union U2 *l_438 = &g_367;
    union U2 **l_437 = &l_438;
    uint32_t l_625 = 0UL;
    int8_t l_758 = 0L;
    uint16_t * const *l_801[4][3][2] = {{{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]}},{{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]}},{{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]}},{{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]},{&g_453[2][4],&g_453[1][3]}}};
    int32_t l_896 = 0xAC3AF257L;
    uint32_t l_930[5] = {0x3000A414L,0x3000A414L,0x3000A414L,0x3000A414L,0x3000A414L};
    int32_t *l_946 = &g_252[4];
    int64_t *l_1039 = &g_1016;
    int64_t *l_1040 = &g_175;
    int32_t *l_1041 = (void*)0;
    int32_t *l_1042 = (void*)0;
    int32_t *l_1043 = (void*)0;
    int32_t *l_1044 = &l_80[0];
    int32_t *l_1045 = &g_700;
    int32_t *l_1046[5][3];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_87[i] = &l_88;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_1046[i][j] = &g_783;
    }
    return &g_2[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_55[i][j], "g_55[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_252[i], "g_252[i]", print_hash_value);

    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);

    }
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_367.f0.f0, "g_367.f0.f0", print_hash_value);
    transparent_crc(g_367.f0.f1, "g_367.f0.f1", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_637[i][j], "g_637[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_649[i][j][k], "g_649[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_966, "g_966", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1073, "g_1073", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1127[i][j][k], "g_1127[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1143, "g_1143", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1168[i], "g_1168[i]", print_hash_value);

    }
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1264[i][j][k], "g_1264[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1267, "g_1267", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1362[i].f0, "g_1362[i].f0", print_hash_value);
        transparent_crc(g_1362[i].f1, "g_1362[i].f1", print_hash_value);

    }
    transparent_crc(g_1413, "g_1413", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1421[i], "g_1421[i]", print_hash_value);

    }
    transparent_crc(g_1564, "g_1564", print_hash_value);
    transparent_crc(g_1635, "g_1635", print_hash_value);
    transparent_crc(g_1636, "g_1636", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1686[i][j][k], "g_1686[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1689, "g_1689", print_hash_value);
    transparent_crc(g_1690, "g_1690", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1691[i][j], "g_1691[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1692, "g_1692", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1693[i], "g_1693[i]", print_hash_value);

    }
    transparent_crc(g_1738, "g_1738", print_hash_value);
    transparent_crc(g_1740, "g_1740", print_hash_value);
    transparent_crc(g_1855, "g_1855", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1879[i], "g_1879[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1880[i][j], "g_1880[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2013, "g_2013", print_hash_value);
    transparent_crc(g_2034, "g_2034", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
