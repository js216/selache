// SPDX-License-Identifier: MIT
// cctest_csmith_8a157e9d.c --- cctest case csmith_8a157e9d (csmith seed 2316664477)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x46959b50 */
/* @exp_ticks 0x5511 */

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

// Options:   -s 2316664477 -o /tmp/csmith_gen_wrv49qbo/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   int64_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   const int8_t  f1;
   struct S0  f2;
   uint16_t  f3;
};
#pragma pack(pop)

union U2 {
   uint8_t  f0;
   const uint64_t  f1;
   int16_t  f2;
};


static int16_t g_19[3] = {(-10L),(-10L),(-10L)};
static int16_t g_25 = 4L;
static int16_t *g_24 = &g_25;
static uint32_t g_57 = 4294967287UL;
static uint32_t g_60 = 0x41CE094BL;
static int32_t g_62 = 0x341F56A6L;
static uint8_t g_78 = 0xB6L;
static int16_t g_82 = (-1L);
static uint64_t g_83 = 18446744073709551608UL;
static int64_t g_97[3] = {0xD1E6FA5B36276A26LL,0xD1E6FA5B36276A26LL,0xD1E6FA5B36276A26LL};
static uint8_t g_112 = 0x9EL;
static struct S1 g_134 = {0x4E36C854L,1L,{0xE483D774F3CB375ALL,250UL,3L,18446744073709551607UL},0xF68FL};
static int32_t g_139 = 0xE3B14B25L;
static uint64_t g_141 = 0xC4F2CD8C2604F267LL;
static uint32_t g_163 = 1UL;
static int8_t g_178 = (-6L);
static int32_t *g_185 = &g_139;
static int32_t g_266 = 1L;
static int64_t *g_288 = &g_134.f2.f2;
static int64_t **g_287 = &g_288;
static int32_t g_296 = 9L;
static int16_t g_297 = 3L;
static int32_t g_298 = 0x64A4B153L;
static int8_t g_299 = 0xE1L;
static int32_t g_301 = 1L;
static uint8_t g_302 = 0x09L;
static union U2 g_318[7][4] = {{{0xE6L},{0UL},{0x28L},{0UL}},{{0UL},{0xEAL},{0x28L},{0x28L}},{{0xE6L},{0xE6L},{0UL},{0x28L}},{{0xDCL},{0xEAL},{0xDCL},{0UL}},{{0xDCL},{0UL},{0UL},{0xDCL}},{{0xE6L},{0UL},{0x28L},{0UL}},{{0UL},{0xEAL},{0x28L},{0x28L}}};
static uint16_t g_346 = 65526UL;
static uint32_t g_354 = 18446744073709551612UL;
static struct S0 *g_397 = (void*)0;
static uint64_t g_405[3] = {0xB10E3C8D558B9641LL,0xB10E3C8D558B9641LL,0xB10E3C8D558B9641LL};
static uint8_t g_416 = 0x25L;
static int32_t ***g_460 = (void*)0;
static struct S1 g_557 = {3L,-4L,{0x5597FE778CAB6361LL,255UL,-9L,0x6C35FD77L},0UL};
static int8_t *g_566 = (void*)0;
static int8_t **g_565 = &g_566;
static uint16_t g_578 = 5UL;
static uint8_t g_605 = 0UL;
static int32_t *g_606 = (void*)0;
static struct S1 *g_632[5][1] = {{&g_134},{&g_134},{&g_134},{&g_134},{&g_134}};
static struct S1 ** const g_631[3][6] = {{&g_632[2][0],&g_632[2][0],&g_632[2][0],&g_632[2][0],&g_632[2][0],&g_632[1][0]},{&g_632[1][0],&g_632[2][0],&g_632[1][0],&g_632[1][0],&g_632[2][0],&g_632[1][0]},{&g_632[1][0],&g_632[2][0],&g_632[1][0],&g_632[1][0],&g_632[2][0],&g_632[1][0]}};
static uint32_t g_656 = 1UL;
static int16_t **g_672 = &g_24;
static int16_t ***g_671 = &g_672;
static int16_t ****g_670[5] = {&g_671,&g_671,&g_671,&g_671,&g_671};
static union U2 g_683 = {0x0EL};
static union U2 *g_682 = &g_683;
static int32_t g_703 = (-1L);
static uint64_t g_704 = 0UL;
static int64_t * const g_752 = &g_97[1];
static struct S1 g_822 = {1L,-1L,{0xC9312331F592430ELL,0xB1L,0xFFDCCBAA0670E3DBLL,6UL},65534UL};
static uint8_t g_879[4][4] = {{0x1BL,0x1BL,0x1BL,0x1BL},{0x1BL,0x1BL,0x1BL,0x1BL},{0x1BL,0x1BL,0x1BL,0x1BL},{0x1BL,0x1BL,0x1BL,0x1BL}};
static int32_t g_912 = 0xA9EFE2B2L;
static int64_t g_913 = 4L;
static int32_t g_914 = (-1L);
static uint32_t g_915 = 0x722B5A68L;
static int32_t *g_963 = &g_134.f0;
static const int32_t g_980 = (-6L);
static const int32_t *g_981[2] = {(void*)0,(void*)0};
static const int32_t *g_982 = (void*)0;
static uint64_t g_1004 = 0x781D2D32C49350B3LL;
static const int16_t *g_1133 = (void*)0;
static const int16_t **g_1132[5][7][6] = {{{&g_1133,&g_1133,&g_1133,(void*)0,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,(void*)0},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,(void*)0},{&g_1133,(void*)0,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,(void*)0,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,(void*)0,&g_1133}},{{&g_1133,&g_1133,(void*)0,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,(void*)0,&g_1133,(void*)0},{&g_1133,&g_1133,(void*)0,&g_1133,&g_1133,(void*)0},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,(void*)0,&g_1133,&g_1133,(void*)0,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,(void*)0,&g_1133},{&g_1133,&g_1133,&g_1133,(void*)0,(void*)0,&g_1133}},{{&g_1133,&g_1133,&g_1133,(void*)0,&g_1133,&g_1133},{(void*)0,&g_1133,&g_1133,(void*)0,&g_1133,(void*)0},{&g_1133,(void*)0,(void*)0,&g_1133,(void*)0,(void*)0},{&g_1133,&g_1133,&g_1133,&g_1133,(void*)0,&g_1133},{&g_1133,(void*)0,(void*)0,&g_1133,&g_1133,&g_1133},{&g_1133,(void*)0,&g_1133,(void*)0,(void*)0,&g_1133},{(void*)0,&g_1133,&g_1133,(void*)0,(void*)0,&g_1133}},{{&g_1133,(void*)0,&g_1133,&g_1133,&g_1133,(void*)0},{(void*)0,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,(void*)0,(void*)0},{&g_1133,&g_1133,&g_1133,(void*)0,(void*)0,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,(void*)0,(void*)0,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,(void*)0}},{{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,(void*)0,&g_1133,(void*)0,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{(void*)0,(void*)0,&g_1133,&g_1133,(void*)0,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,(void*)0,(void*)0},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133}}};
static const int16_t ***g_1131 = &g_1132[3][0][5];
static struct S1 ***g_1255[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static struct S1 ****g_1254[5][6][4] = {{{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[2],&g_1255[1],&g_1255[0],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[0],&g_1255[0]},{&g_1255[2],&g_1255[2],&g_1255[1],&g_1255[0]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]}},{{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[2],&g_1255[1],&g_1255[0],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[0],&g_1255[0]},{&g_1255[2],&g_1255[2],&g_1255[1],&g_1255[0]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]}},{{&g_1255[2],&g_1255[1],&g_1255[0],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[0],&g_1255[0]},{&g_1255[2],&g_1255[2],&g_1255[1],&g_1255[0]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[2],&g_1255[1],&g_1255[0],&g_1255[1]}},{{&g_1255[1],&g_1255[1],&g_1255[0],&g_1255[0]},{&g_1255[2],&g_1255[2],&g_1255[1],&g_1255[0]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[2],&g_1255[1],&g_1255[0],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[0],&g_1255[0]}},{{&g_1255[2],&g_1255[2],&g_1255[1],&g_1255[0]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[1],&g_1255[1]},{&g_1255[2],&g_1255[1],&g_1255[0],&g_1255[1]},{&g_1255[1],&g_1255[1],&g_1255[0],&g_1255[0]},{&g_1255[2],&g_1255[2],&g_1255[1],&g_1255[0]}}};
static int64_t g_1288 = 0xAAA6C5BD5438BB51LL;
static const int32_t g_1302 = (-1L);
static const int32_t *g_1301 = &g_1302;



static uint8_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, int8_t  p_4, int16_t  p_5, int32_t  p_6);
static uint8_t  func_7(uint32_t  p_8, union U2  p_9, uint16_t  p_10);
static uint8_t  func_20(int16_t * p_21, int32_t  p_22, int32_t  p_23);
static int32_t  func_30(uint32_t  p_31, uint32_t  p_32, int16_t * p_33, union U2  p_34);
static struct S0  func_35(const int16_t * p_36);
static const int16_t * func_37(uint16_t  p_38);
static const int16_t  func_41(int32_t  p_42, union U2  p_43, int16_t  p_44);




static uint8_t  func_1(void)
{ 
    int32_t l_13 = 1L;
    int16_t *l_18 = &g_19[1];
    uint8_t *l_1011 = &g_557.f2.f1;
    int32_t l_1012[6][7] = {{0x76D69999L,0x95BB3E6FL,(-5L),3L,9L,7L,7L},{(-1L),0L,0xDAC40501L,3L,(-1L),4L,9L},{(-5L),0x3ABE33A5L,0xDAC40501L,0x76D69999L,3L,(-1L),0L},{0x76D69999L,0xC0CE26CBL,0x95BB3E6FL,(-1L),(-1L),0x95BB3E6FL,0xC0CE26CBL},{(-5L),0x76D69999L,0x3ABE33A5L,9L,0xFE9264BAL,0x95BB3E6FL,4L},{(-1L),7L,0x2D0B24F9L,0xDAC40501L,9L,(-1L),9L}};
    union U2 l_1013[2] = {{255UL},{255UL}};
    uint64_t l_1144 = 0xB1786752F82A3944LL;
    int32_t l_1145 = 0xFEB6A20BL;
    int64_t **l_1208[5];
    int64_t ***l_1209 = &l_1208[1];
    int32_t **l_1319 = (void*)0;
    int32_t ***l_1318 = &l_1319;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1208[i] = &g_288;
    l_1012[5][6] = func_2(func_7(((safe_sub_func_int64_t_s_s(0x95751CFD1F2E9667LL, (l_13 ^ (2L ^ ((l_1012[1][2] = ((*l_1011) = (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((*l_18) = l_13), 1L)), (func_20(g_24, ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(g_25, 0)) > 0x9796L), l_13)) , 1L), g_25) || g_605))))) <= g_879[1][2]))))) ^ l_13), l_1013[1], g_557.f2.f3), l_1013[1].f0, l_1144, l_1145);
    if ((((*l_1209) = l_1208[1]) != ((l_1145 , (*g_682)) , (void*)0)))
    { 
        uint64_t l_1213[3][2];
        uint64_t l_1223 = 0x5B4CD6E4C9676AF7LL;
        uint16_t l_1224 = 0UL;
        uint64_t l_1225[5];
        int16_t **l_1230 = &l_18;
        const struct S1 **l_1269 = (void*)0;
        const struct S1 ***l_1268[1][5][6] = {{{&l_1269,&l_1269,&l_1269,&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269,&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269,&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269,&l_1269,&l_1269,&l_1269},{&l_1269,&l_1269,&l_1269,&l_1269,&l_1269,&l_1269}}};
        const struct S1 ****l_1267 = &l_1268[0][1][1];
        const struct S1 *****l_1266 = &l_1267;
        struct S1 **l_1285 = (void*)0;
        struct S1 **l_1286 = &g_632[0][0];
        int32_t l_1291 = (-9L);
        int8_t l_1326 = (-10L);
        int32_t **l_1327 = &g_606;
        uint32_t *l_1330 = &g_163;
        uint32_t * const *l_1329 = &l_1330;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1213[i][j] = 0x6026DFDCE13121DELL;
        }
        for (i = 0; i < 5; i++)
            l_1225[i] = 0UL;
        if (((+(safe_mul_func_uint8_t_u_u(((((-10L) && 65530UL) != (l_1213[0][1] || (((void*)0 != g_397) && (((0xCC80471D9AEF7998LL <= ((safe_unary_minus_func_uint8_t_u(254UL)) < (**g_287))) >= 0L) & l_1144)))) , g_296), (-1L)))) <= (-5L)))
        { 
            return g_822.f2.f2;
        }
        else
        { 
            struct S0 l_1220 = {0xCD2318FA9DCD5E6CLL,0UL,-3L,0UL};
            int16_t **l_1231[4] = {&g_24,&g_24,&g_24,&g_24};
            struct S1 **l_1252 = &g_632[1][0];
            struct S1 ***l_1251 = &l_1252;
            struct S1 ****l_1250 = &l_1251;
            int32_t l_1290 = 0xA30B1D48L;
            int32_t ** const *l_1324 = &l_1319;
            int64_t l_1325 = 0x4867F8E9CE7AE955LL;
            int i;
        }
    }
    else
    { 
        uint64_t l_1334 = 0x1610FDFFF7B09A7ALL;
        uint8_t *l_1335 = (void*)0;
        uint8_t **l_1336 = &l_1011;
        int32_t l_1337[5] = {1L,1L,1L,1L,1L};
        int i;
        l_1337[1] |= ((safe_unary_minus_func_uint16_t_u(((((safe_rshift_func_uint16_t_u_s(l_1334, (((*l_1336) = l_1335) != &g_416))) | l_1334) < (l_1334 , 7UL)) <= (0xE0L == l_1334)))) , l_1334);
    }
    return g_683.f0;
}



static int32_t  func_2(uint8_t  p_3, int8_t  p_4, int16_t  p_5, int32_t  p_6)
{ 
    int64_t l_1162[3];
    int16_t l_1176 = 0xEBFFL;
    int32_t *l_1182 = (void*)0;
    const int32_t **l_1190 = &g_982;
    uint64_t *l_1191 = &g_557.f2.f0;
    uint8_t l_1205 = 1UL;
    int i;
    for (i = 0; i < 3; i++)
        l_1162[i] = 1L;
    for (g_822.f2.f1 = 0; (g_822.f2.f1 > 19); ++g_822.f2.f1)
    { 
        int32_t l_1150 = 0xEDD87F0DL;
        int8_t *l_1163 = &g_178;
        const struct S0 l_1169 = {18446744073709551615UL,1UL,4L,0x40BB93F6L};
        uint32_t *l_1172 = &g_60;
        uint8_t l_1175 = 3UL;
        (*g_963) |= ((g_822.f1 || p_3) >= ((safe_mod_func_uint32_t_u_u((&g_405[2] == (((l_1150 = p_4) < p_5) , &g_83)), 0x52DDAB05L)) ^ p_6));
        (*g_963) |= (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(((***g_671) &= (0xC6182B4CL == ((((((((((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((l_1150 = (((*l_1163) = l_1162[0]) > (+(safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((l_1169 , p_4) || (((safe_mod_func_uint64_t_u_u(l_1169.f1, g_134.f2.f3)) || ((*l_1172)--)) , l_1162[1])), p_4)), l_1162[0]))))), 2)), 8)) && g_557.f1), l_1175)))) & g_163) <= p_3) >= g_1004) & l_1169.f1) >= (-1L)) , p_5) <= 0L) < l_1176) < g_879[3][0]) || l_1175) , g_298))), p_6)), g_656));
        if (l_1162[0])
            break;
        for (g_298 = 2; (g_298 >= 0); g_298 -= 1)
        { 
            int32_t *l_1177 = &g_822.f0;
            int32_t **l_1178 = &g_606;
            int32_t **l_1179 = (void*)0;
            int32_t **l_1180 = (void*)0;
            int32_t **l_1181 = (void*)0;
            int i;
            l_1182 = ((*l_1178) = l_1177);
            if (l_1162[g_298])
                break;
            for (p_5 = 2; (p_5 >= 0); p_5 -= 1)
            { 
                int32_t *l_1183 = &g_296;
                int32_t *l_1184 = &g_822.f0;
                int32_t *l_1185 = &g_557.f0;
                int32_t *l_1186 = (void*)0;
                uint64_t l_1187[4][7] = {{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL,0xBEE4FAF52C244C9CLL}};
                int i, j;
                ++l_1187[2][1];
            }
        }
    }
    (*g_963) = l_1162[0];
    (*l_1190) = (void*)0;
    (*g_963) = (l_1191 == (void*)0);
    for (g_299 = 0; (g_299 == (-15)); g_299 = safe_sub_func_int8_t_s_s(g_299, 5))
    { 
        int32_t l_1194 = 0x36609D88L;
        int32_t *l_1195 = (void*)0;
        int32_t *l_1196 = &g_62;
        int32_t *l_1197 = &g_139;
        int32_t *l_1198 = &g_62;
        int32_t *l_1199 = &l_1194;
        int32_t *l_1200 = (void*)0;
        int32_t *l_1201 = &l_1194;
        int32_t *l_1202 = &g_296;
        int32_t *l_1203 = &g_557.f0;
        int32_t *l_1204[7] = {&g_822.f0,&g_822.f0,&g_822.f0,&g_822.f0,&g_822.f0,&g_822.f0,&g_822.f0};
        int i;
        (*l_1190) = &p_6;
        l_1205--;
    }
    return p_5;
}



static uint8_t  func_7(uint32_t  p_8, union U2  p_9, uint16_t  p_10)
{ 
    const int32_t **l_1029[7][6] = {{&g_981[0],&g_982,&g_981[1],&g_981[0],&g_981[1],&g_982},{&g_981[0],&g_982,&g_981[0],&g_981[0],&g_981[1],&g_981[1]},{&g_981[1],&g_982,&g_982,&g_981[1],&g_981[1],&g_981[0]},{&g_981[0],&g_982,&g_981[1],&g_981[0],&g_981[1],&g_982},{&g_981[0],&g_982,&g_981[0],&g_981[0],&g_981[1],&g_981[1]},{&g_981[1],&g_982,&g_982,&g_981[1],&g_981[1],&g_981[0]},{&g_981[0],&g_982,&g_981[1],&g_981[0],&g_981[1],&g_982}};
    int32_t *l_1033 = &g_703;
    int64_t * const *l_1052 = &g_752;
    uint8_t l_1055 = 250UL;
    int64_t l_1064 = 0x846A46215A62FC74LL;
    struct S0 l_1065 = {18446744073709551607UL,0xFAL,0x6BDA68DBA17D1411LL,0xF4F3B45AL};
    int32_t l_1078[2][1][2];
    int32_t l_1099 = 0L;
    uint16_t l_1109[5][3][5] = {{{65535UL,0UL,0xC327L,0xEA40L,0xC327L},{0x98A7L,0x455BL,0x360DL,65526UL,0x14D1L},{0UL,65535UL,65535UL,0UL,0xC327L}},{{0xE20CL,65526UL,1UL,1UL,0UL},{0xC327L,65535UL,0x7F43L,0x3549L,0x3549L},{0x09A3L,0x455BL,0x09A3L,1UL,0x360DL}},{{0xEA40L,0UL,0x3549L,0UL,0xEA40L},{0x09A3L,65529UL,0x98A7L,65526UL,0x98A7L},{0x90A3L,0x90A3L,0xC327L,0x7F43L,0UL}},{{0x09A3L,65526UL,0UL,65535UL,0x14D1L},{65535UL,0x7F43L,0x3549L,0x3549L,0x7F43L},{0x14D1L,65526UL,0x360DL,0x455BL,0x98A7L}},{{0xEA40L,0x90A3L,0xEA40L,0x3549L,0xC327L},{1UL,65535UL,0x98A7L,65535UL,1UL},{0xEA40L,65535UL,0x90A3L,0x7F43L,0x90A3L}}};
    union U2 **l_1110[4] = {&g_682,&g_682,&g_682,&g_682};
    int64_t l_1111[6][1] = {{0xFF243118DFFEB602LL},{9L},{9L},{0xFF243118DFFEB602LL},{9L},{9L}};
    struct S0 **l_1141 = &g_397;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_1078[i][j][k] = 0x0C25135FL;
        }
    }
    for (g_302 = 0; (g_302 <= 2); g_302 += 1)
    { 
        uint16_t *l_1024 = &g_557.f3;
        int64_t ***l_1027 = &g_287;
        uint32_t l_1028 = 4294967295UL;
        int32_t l_1030 = 0xBC8E31BCL;
        uint16_t l_1088 = 65535UL;
        uint8_t *l_1106 = (void*)0;
        int i;
        l_1030 &= (((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((0xE803AAF5L <= g_97[g_302]), (safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_1024) = g_97[g_302]), 7)), (safe_sub_func_int32_t_s_s((((((((void*)0 == l_1027) < g_405[0]) <= ((**g_672) ^ g_97[g_302])) < p_8) || 0UL) == 1L), p_10)))), l_1028)))), 0x8864BDEBL)) , l_1029[1][1]) == (void*)0);
        for (g_141 = 0; (g_141 <= 2); g_141 += 1)
        { 
            int32_t **l_1034 = &g_963;
            int32_t **l_1035 = &l_1033;
            int16_t *l_1042 = &g_82;
            uint64_t *l_1049 = &g_1004;
            uint64_t *l_1050 = &g_822.f2.f0;
            uint64_t *l_1051[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1051[i][j] = &g_405[2];
            }
            for (g_914 = 4; (g_914 >= 0); g_914 -= 1)
            { 
                for (g_296 = 0; (g_296 <= 4); g_296 += 1)
                { 
                    int i;
                    if (g_405[g_141])
                        break;
                }
            }
        }
        (*l_1033) = (safe_add_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((g_879[3][0] = (&l_1028 == &g_57)), 0x37L)) && (p_10 >= ((*l_1024) |= (&g_605 != &g_879[3][0])))), (((safe_add_func_uint8_t_u_u(((((g_97[g_302] , (*l_1033)) >= 0x72L) | p_8) | 0x32L), g_578)) || p_10) == l_1109[1][1][1]))) & 0xF2F21CBAL) <= 0xACL), 0L));
    }
    g_682 = &g_318[4][2];
    if (p_8)
    { 
        if (((*l_1033) |= p_10))
        { 
            return l_1111[4][0];
        }
        else
        { 
            return p_9.f0;
        }
    }
    else
    { 
        int16_t * const *l_1126 = &g_24;
        int16_t * const ** const l_1125 = &l_1126;
        int16_t * const ** const *l_1124 = &l_1125;
        const int16_t ***l_1134 = &g_1132[2][3][2];
        int32_t l_1135 = 8L;
        int32_t l_1136 = (-1L);
        const union U2 * const l_1137 = &g_318[2][2];
        uint8_t *l_1142 = &g_683.f0;
        int8_t *l_1143 = &g_299;
        (*g_963) |= ((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((g_416 = ((l_1135 = (safe_mod_func_uint16_t_u_u(g_57, (safe_add_func_uint16_t_u_u(((p_9.f0 ^ (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint64_t_u_u((l_1124 != &l_1125), (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(65528UL, ((((*l_1124) != (l_1134 = g_1131)) , g_405[0]) , l_1135))), 0x91L)))) || 0x39B6L) | g_178), p_10))) == (*g_752)), p_10))))) && 1UL)) || (-10L)), 0xA710A09DD874802FLL)), (*l_1033))) > l_1136);
        (*g_963) &= (l_1137 != (((*l_1143) |= (g_822.f2.f3 != (((*l_1142) = (!(((l_1135 , l_1136) , (((((252UL > (safe_lshift_func_int16_t_s_u((*l_1033), 7))) == (0x49548756AD57DFBDLL | (**g_287))) <= g_266) , p_8) , l_1141)) != l_1141))) < (*l_1033)))) , &p_9));
        return p_9.f0;
    }
}



static uint8_t  func_20(int16_t * p_21, int32_t  p_22, int32_t  p_23)
{ 
    const union U2 l_47[4] = {{0UL},{0UL},{0UL},{0UL}};
    uint32_t *l_56 = &g_57;
    uint32_t *l_59 = &g_60;
    uint32_t **l_58 = &l_59;
    int32_t *l_61 = &g_62;
    union U2 l_63 = {251UL};
    uint16_t *l_165[6][7][6] = {{{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,(void*)0},{(void*)0,&g_134.f3,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3}},{{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,(void*)0,&g_134.f3,&g_134.f3,(void*)0},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,(void*)0},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,(void*)0}},{{(void*)0,&g_134.f3,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3}},{{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,(void*)0,&g_134.f3},{(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{(void*)0,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3}},{{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,(void*)0,&g_134.f3},{(void*)0,&g_134.f3,(void*)0,&g_134.f3,(void*)0,&g_134.f3},{(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,(void*)0,&g_134.f3,&g_134.f3},{&g_134.f3,(void*)0,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3}},{{&g_134.f3,&g_134.f3,&g_134.f3,(void*)0,(void*)0,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,(void*)0,&g_134.f3},{(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{(void*)0,(void*)0,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3},{&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3,&g_134.f3}}};
    int32_t l_983 = 1L;
    struct S1 ** const *l_1010 = &g_631[1][3];
    struct S1 ** const ** const l_1009 = &l_1010;
    int i, j, k;
    (*g_963) = func_30((func_35(func_37(((*l_61) = (safe_sub_func_int16_t_s_s(func_41(((*l_61) = (p_22 ^ (l_47[2] , ((safe_div_func_uint8_t_u_u(l_47[2].f0, ((((((safe_rshift_func_uint16_t_u_s(g_25, 7)) , (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((*l_56) &= g_25), (((((*l_58) = l_56) != l_56) , g_60) , g_25))), g_60))) > 0UL) != p_22) != l_47[2].f0) || g_25))) < (*g_24))))), l_63, (*g_24)), p_23))))) , p_22), l_983, p_21, l_63);
    for (g_82 = 0; (g_82 != (-15)); g_82 = safe_sub_func_int64_t_s_s(g_82, 3))
    { 
        p_23 = (l_1009 != (void*)0);
    }
    return g_557.f0;
}



static int32_t  func_30(uint32_t  p_31, uint32_t  p_32, int16_t * p_33, union U2  p_34)
{ 
    struct S1 **l_991 = &g_632[4][0];
    struct S1 ***l_990 = &l_991;
    struct S1 **l_992 = (void*)0;
    struct S1 *l_994 = &g_557;
    struct S1 **l_993 = &l_994;
    struct S1 **l_995 = (void*)0;
    struct S1 **l_996 = (void*)0;
    struct S1 *l_998[5][3] = {{(void*)0,(void*)0,&g_557},{(void*)0,(void*)0,&g_557},{(void*)0,(void*)0,&g_557},{(void*)0,(void*)0,&g_557},{(void*)0,(void*)0,&g_557}};
    struct S1 **l_997 = &l_998[2][1];
    int32_t l_1000[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int32_t *l_1001 = &g_139;
    int32_t *l_1002 = &g_822.f0;
    int32_t *l_1003[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    l_1000[0] = (safe_sub_func_uint64_t_u_u(g_82, (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((void*)0 != l_990) < (((*g_682) , (*l_991)) != ((*l_997) = ((*l_993) = (**l_990))))), (!(p_31 & (-10L))))), (*p_33)))));
    l_1000[0] = (0x1540A11BL < p_34.f0);
    --g_1004;
    return (*l_1001);
}



static struct S0  func_35(const int16_t * p_36)
{ 
    int16_t l_169[1];
    uint16_t l_254 = 65526UL;
    int32_t l_295[7] = {0xAD36BB70L,0xAD36BB70L,0xC6AC34F8L,0xAD36BB70L,0xAD36BB70L,0xC6AC34F8L,0xAD36BB70L};
    int32_t *l_402 = &g_139;
    int64_t l_404[3];
    uint32_t *l_422 = (void*)0;
    uint32_t **l_421 = &l_422;
    int32_t l_427[2][1];
    uint8_t l_454[5];
    struct S1 *l_543 = (void*)0;
    union U2 l_588 = {0x11L};
    int32_t **l_599 = (void*)0;
    int32_t ***l_598 = &l_599;
    const uint32_t l_600 = 0xF0E37AB3L;
    int8_t **l_663 = &g_566;
    int64_t ***l_697 = &g_287;
    struct S0 l_719 = {1UL,0xF7L,0x2E5B2A7B6AE6AD7ELL,18446744073709551611UL};
    struct S1 * const *l_850 = &g_632[2][0];
    struct S1 * const **l_849 = &l_850;
    int64_t l_878 = 0xDCAE8D1AF7A0CB0ALL;
    int32_t ****l_925 = &g_460;
    uint32_t l_949 = 1UL;
    const int32_t *l_979 = &g_980;
    const int32_t **l_978[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_169[i] = 0L;
    for (i = 0; i < 3; i++)
        l_404[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_427[i][j] = (-5L);
    }
    for (i = 0; i < 5; i++)
        l_454[i] = 0x7EL;
    if ((g_139 != l_169[0]))
    { 
        int16_t l_174 = 0xF1E1L;
        int8_t *l_177 = &g_178;
        int32_t l_189 = 0xC4C324ABL;
        int32_t l_190 = 0x75EA3161L;
        int32_t l_214[2][2] = {{0x7CCD4E50L,0x7CCD4E50L},{0x7CCD4E50L,0x7CCD4E50L}};
        int16_t **l_264[5];
        int16_t ***l_359 = &l_264[2];
        int16_t ****l_358 = &l_359;
        uint64_t *l_381[5];
        struct S0 l_401 = {0xD2776EE0DA896E08LL,0x63L,0x82274A53ECC20415LL,18446744073709551607UL};
        int32_t **l_403[4][3][7] = {{{&l_402,&g_185,&l_402,(void*)0,&l_402,&l_402,(void*)0},{&l_402,&g_185,&g_185,&g_185,&l_402,&l_402,&l_402},{&l_402,(void*)0,&l_402,(void*)0,&l_402,&l_402,(void*)0}},{{&l_402,&g_185,&g_185,&g_185,&l_402,&l_402,&l_402},{&l_402,(void*)0,&l_402,&g_185,&l_402,&l_402,&l_402},{&l_402,&g_185,&l_402,&g_185,&l_402,&g_185,&g_185}},{{&l_402,(void*)0,&l_402,&l_402,&l_402,&l_402,&l_402},{(void*)0,&g_185,&l_402,&g_185,&l_402,(void*)0,(void*)0},{&l_402,&l_402,&g_185,&l_402,&l_402,&g_185,&l_402}},{{&l_402,&g_185,&l_402,&g_185,(void*)0,(void*)0,&g_185},{&l_402,&l_402,&l_402,(void*)0,&l_402,&l_402,&l_402},{&l_402,&g_185,&l_402,&g_185,&l_402,&g_185,&g_185}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_264[i] = &g_24;
        for (i = 0; i < 5; i++)
            l_381[i] = &g_141;
        if (((((*g_24) > (safe_add_func_int32_t_s_s(g_134.f1, 0xE2F923ADL))) && ((safe_mod_func_uint8_t_u_u(l_174, 0x77L)) >= (safe_div_func_int8_t_s_s((((*l_177) &= l_174) <= (((l_169[0] & l_169[0]) <= l_169[0]) >= 0L)), l_174)))) == (-1L)))
        { 
            uint8_t *l_199 = (void*)0;
            uint8_t *l_200 = &g_78;
            const uint32_t *l_213 = &g_163;
            const uint32_t ** const l_212 = &l_213;
            int32_t l_215 = 0xF879EAA1L;
            uint64_t l_216 = 5UL;
            int32_t l_217 = (-3L);
            int32_t *l_218 = (void*)0;
            int32_t *l_219 = (void*)0;
            int32_t *l_220 = &l_190;
            uint16_t l_221 = 0x0B3CL;
            uint16_t *l_225 = &g_134.f3;
            uint32_t *l_228[4] = {&g_57,&g_57,&g_57,&g_57};
            int64_t **l_290 = &g_288;
            int32_t l_300 = 1L;
            int i;
            for (g_82 = 0; (g_82 >= 0); g_82 -= 1)
            { 
                int i;
                if (g_97[(g_82 + 1)])
                    break;
            }
            for (g_134.f2.f2 = 17; (g_134.f2.f2 <= 18); g_134.f2.f2++)
            { 
                int32_t *l_183[6] = {&g_134.f0,&g_134.f0,&g_134.f0,&g_134.f0,&g_134.f0,&g_134.f0};
                int i;
                if (l_174)
                { 
                    int32_t **l_184[1][7] = {{&l_183[5],&l_183[5],&l_183[5],&l_183[5],&l_183[5],&l_183[5],&l_183[5]}};
                    int i, j;
                    g_185 = l_183[5];
                }
                else
                { 
                    struct S0 l_186 = {0x9B01DD78287FB009LL,250UL,0xE3EFB5F142755BC8LL,0x996A269FL};
                    return l_186;
                }
                for (g_112 = 0; (g_112 == 31); g_112++)
                { 
                    uint32_t l_191[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_191[i] = 0UL;
                    l_191[0]--;
                    l_183[1] = &l_190;
                }
            }
            (*l_220) |= (l_217 &= ((~(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_200) = g_112), g_141)), ((((safe_add_func_uint64_t_u_u((0x69C2L && (*g_24)), (~((((safe_div_func_int16_t_s_s(((((((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_189, g_60)), (safe_mul_func_uint8_t_u_u((((l_212 == (void*)0) , 0UL) == (*g_24)), 0x5CL)))) & l_169[0]) <= (*p_36)) == (*g_24)) | l_214[0][1]) ^ 0xC4L) , 18446744073709551607UL) , 0x44ECL), l_169[0])) || g_134.f2.f3) || l_169[0]) ^ l_174)))) , g_97[1]) != g_97[2]) && l_215)))) > l_216));
            ++l_221;
            if (((g_57 = (g_134 , (!((*l_225)--)))) ^ (safe_rshift_func_uint16_t_u_s(65535UL, 14))))
            { 
                int16_t *l_237[7] = {&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82};
                const int32_t l_246 = 0xAF589615L;
                struct S1 l_256 = {0x564FFCE4L,-10L,{1UL,251UL,0xF9AC471EECA51E73LL,4UL},0UL};
                uint16_t *l_263 = &l_221;
                int16_t ***l_265 = &l_264[2];
                int32_t *l_267 = &g_134.f0;
                int32_t *l_268 = &l_214[0][1];
                int i;
                for (g_25 = 2; (g_25 >= 0); g_25 -= 1)
                { 
                    uint8_t l_231 = 255UL;
                    int i;
                    l_231++;
                    if (g_97[g_25])
                        continue;
                    (*l_220) = l_231;
                }
                for (g_82 = 1; (g_82 >= 0); g_82 -= 1)
                { 
                    int64_t l_236 = 0x2FE4D6D4BB3A84E4LL;
                    int32_t **l_247 = &l_219;
                    int i;
                    (*l_220) = ((((safe_rshift_func_uint16_t_u_s(0x5A8AL, ((l_236 != ((((void*)0 != l_237[5]) , (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((-1L), (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((void*)0 == l_225), g_134.f2.f0)), 12)))) <= 4294967291UL), l_189))) || l_246)) <= 0x4EL))) , (*l_220)) != 1L) == (*g_24));
                    (*l_247) = (void*)0;
                    g_185 = &l_214[1][0];
                }
                (*l_268) |= ((*l_267) ^= (l_169[0] , (g_62 , (((((((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((*l_265) = ((safe_mul_func_int8_t_s_s(l_254, (safe_unary_minus_func_uint16_t_u(((*l_263) ^= ((((l_256 , (((((g_178 & (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((-1L) < (++(*l_225))) < (*l_220)), 0)) >= 0xEEL) && g_57), 0x7B2AL))) || l_256.f1) , (void*)0) == &l_218) , (void*)0)) != l_237[6]) & 9L) != l_256.f2.f0)))))) , l_264[2])) == &g_24), g_266)), l_169[0])) & (*p_36)) | l_169[0]) | l_190) < l_256.f3) ^ l_169[0]) < 0xACL))));
                l_214[0][1] &= (safe_rshift_func_int8_t_s_u(0xC2L, 3));
            }
            else
            { 
                uint8_t l_289 = 0xD8L;
                int32_t *l_291 = (void*)0;
                int32_t *l_292 = &g_134.f0;
                int32_t *l_293 = &l_189;
                int32_t *l_294[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_294[i] = (void*)0;
                for (g_60 = 0; (g_60 <= 3); g_60 += 1)
                { 
                    int32_t l_278[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_278[i] = 0x00573013L;
                    (*l_220) = (((safe_rshift_func_uint8_t_u_s(l_169[0], 3)) > (+(safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(l_278[1], (safe_add_func_uint32_t_u_u((((*l_225) = (safe_mul_func_uint16_t_u_u((l_278[1] != (safe_mod_func_int64_t_s_s(((((((l_169[0] && l_169[0]) , (safe_lshift_func_uint8_t_u_s(((((((((void*)0 != g_287) ^ g_97[1]) , 0xBBB4AD64L) , 0xBD8380ACD65F59F4LL) , (void*)0) == (void*)0) ^ (*l_220)), l_190))) == l_254) , (*g_288)) , (*l_220)) , l_289), (**g_287)))), g_134.f2.f3))) && l_174), l_278[0])))), 11)))) | 8L);
                    g_287 = l_290;
                }
                --g_302;
            }
        }
        else
        { 
            int32_t l_330 = 1L;
            int16_t **l_342 = &g_24;
            int32_t l_347 = 0L;
            int32_t l_351 = (-8L);
            int32_t l_352 = 1L;
            int32_t l_353 = (-1L);
            int16_t ****l_360 = &l_359;
            for (g_134.f3 = 0; (g_134.f3 > 55); g_134.f3 = safe_add_func_uint64_t_u_u(g_134.f3, 7))
            { 
                uint32_t *l_327[6] = {&g_60,&g_60,&g_60,&g_60,&g_60,&g_60};
                uint8_t *l_328 = (void*)0;
                uint8_t *l_329[1];
                uint16_t *l_345 = &g_346;
                int32_t l_357[7] = {0L,1L,1L,0L,1L,1L,0L};
                int i;
                for (i = 0; i < 1; i++)
                    l_329[i] = &g_134.f2.f1;
                for (g_60 = (-13); (g_60 < 46); ++g_60)
                { 
                    int32_t *l_309 = &l_189;
                    int32_t *l_310 = &l_190;
                    int32_t *l_311 = &g_62;
                    int32_t *l_312 = &g_296;
                    int32_t *l_313 = &g_296;
                    int32_t *l_314[7][6] = {{&g_134.f0,&g_296,(void*)0,&g_296,&g_134.f0,&g_134.f0},{&g_62,&g_296,&g_296,&g_62,&l_189,&g_62},{&g_62,&l_189,&g_62,&g_296,&g_296,&g_62},{&g_134.f0,&g_134.f0,&g_296,(void*)0,&g_296,&g_134.f0},{&g_296,&l_189,(void*)0,(void*)0,&l_189,&g_296},{&g_134.f0,&g_296,(void*)0,&g_296,&g_134.f0,&g_134.f0},{&g_62,&g_296,&g_296,&g_62,&l_189,&g_62}};
                    uint32_t l_315 = 0xC3171550L;
                    int i, j;
                    l_315--;
                    return g_134.f2;
                }
                for (g_112 = 0; (g_112 <= 2); g_112 += 1)
                { 
                    return g_134.f2;
                }
                if ((g_318[4][2] , (safe_rshift_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_134.f2.f1 = (safe_div_func_int8_t_s_s(l_174, (l_330 = (l_254 && (l_189 = ((void*)0 == &g_62))))))), (safe_mod_func_uint64_t_u_u((l_214[0][1] ^= (((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((((g_318[4][2].f0 = (((((*l_345) |= (safe_mod_func_uint8_t_u_u((!(l_342 == (((safe_mul_func_uint8_t_u_u((g_78 , 0xD6L), 251UL)) <= 0x6D9EL) , (void*)0))), g_57))) > l_347) < l_295[4]) <= (*g_185))) >= 247UL) , 255UL) , (*p_36)) < l_347), g_141)), 0xD734A936L)), l_347)) | 0xF158EB26F251CE81LL) , l_347)), g_134.f3)))), g_134.f2.f3)) <= g_163) > l_169[0]) && 0x65EFAE0AL), 0))))
                { 
                    int32_t *l_348 = &l_295[0];
                    int32_t *l_349 = &g_62;
                    int32_t *l_350[5] = {&l_347,&l_347,&l_347,&l_347,&l_347};
                    int i;
                    ++g_354;
                }
                else
                { 
                    if (l_357[4])
                        break;
                }
            }
            l_360 = l_358;
            for (g_266 = 2; (g_266 >= 0); g_266 -= 1)
            { 
                uint32_t l_370 = 0x42F89C2AL;
                int8_t *l_371 = &g_299;
                int8_t **l_372 = &l_371;
                int16_t **** const l_373 = (void*)0;
                uint32_t l_375 = 0x0F102A20L;
                int32_t **l_388 = (void*)0;
            }
            for (l_254 = (-26); (l_254 == 8); l_254 = safe_add_func_uint16_t_u_u(l_254, 1))
            { 
                struct S0 l_396 = {0xC5CBEB7BC3CB0859LL,0UL,1L,0xA5C85423L};
                for (g_82 = (-9); (g_82 >= (-13)); --g_82)
                { 
                    int32_t *l_395 = &g_62;
                    (*l_395) &= (*g_185);
                    return l_396;
                }
                for (g_354 = 0; (g_354 <= 6); g_354 += 1)
                { 
                    struct S0 **l_398 = &g_397;
                    (*g_185) &= (&g_78 != (void*)0);
                    (*l_398) = g_397;
                }
            }
        }
        for (g_134.f2.f2 = 0; (g_134.f2.f2 != 18); ++g_134.f2.f2)
        { 
            return l_401;
        }
        g_185 = l_402;
        g_405[0]++;
    }
    else
    { 
        int64_t l_408 = 0x1275BE45F63D8A5BLL;
        int32_t *l_409 = &g_134.f0;
        int32_t *l_410 = &l_295[1];
        int32_t *l_411 = (void*)0;
        int32_t *l_412 = &l_295[1];
        int32_t l_413 = 0x8766082EL;
        int32_t *l_414 = (void*)0;
        int32_t *l_415[3];
        uint16_t l_429 = 0x65FBL;
        struct S0 **l_443[3][7][7] = {{{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,(void*)0,&g_397,&g_397,&g_397,(void*)0,(void*)0},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,(void*)0,&g_397,&g_397,(void*)0},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,(void*)0,&g_397,&g_397,&g_397,(void*)0,(void*)0},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397}},{{&g_397,&g_397,&g_397,(void*)0,&g_397,&g_397,(void*)0},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,(void*)0,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397}},{{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,(void*)0,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,(void*)0,&g_397},{&g_397,&g_397,&g_397,&g_397,&g_397,&g_397,&g_397}}};
        union U2 l_512 = {255UL};
        const struct S1 *l_554[1];
        uint8_t l_572[3][2][7] = {{{0x50L,255UL,0x59L,250UL,255UL,250UL,0x59L},{255UL,255UL,0x7BL,250UL,0xB2L,250UL,8UL}},{{3UL,0x7BL,8UL,0x6FL,0x50L,0xB2L,0UL},{250UL,2UL,0xB2L,8UL,0xB2L,2UL,250UL}},{{1UL,250UL,0UL,8UL,255UL,0UL,0x6FL},{0UL,255UL,255UL,0x6FL,1UL,0x50L,0x50L}}};
        uint32_t ** const l_583 = &l_422;
        int64_t l_614[7] = {7L,7L,7L,7L,7L,7L,7L};
        struct S1 **l_630 = &l_543;
        struct S0 l_882 = {0UL,0xB8L,0L,18446744073709551610UL};
        uint32_t l_950 = 0x43DAE8B1L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_415[i] = &l_413;
        for (i = 0; i < 1; i++)
            l_554[i] = (void*)0;
        ++g_416;
    }
    g_982 = (g_981[0] = &g_703);
    return l_719;
}



static const int16_t * func_37(uint16_t  p_38)
{ 
    for (g_134.f3 = 0; (g_134.f3 >= 50); ++g_134.f3)
    { 
        uint32_t l_168[4];
        int i;
        for (i = 0; i < 4; i++)
            l_168[i] = 4UL;
        l_168[2] = 6L;
    }
    return &g_25;
}



static const int16_t  func_41(int32_t  p_42, union U2  p_43, int16_t  p_44)
{ 
    int16_t *l_94[4];
    int32_t l_111 = 3L;
    int32_t l_140 = 5L;
    int16_t *l_149[5][3][2] = {{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}},{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}},{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}},{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}},{{&g_82,&g_82},{&g_82,&g_82},{&g_82,&g_82}}};
    int16_t **l_164 = &l_149[3][0][0];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_94[i] = &g_25;
    if (((void*)0 == &g_62))
    { 
        int16_t *l_68 = (void*)0;
        int32_t l_79 = 0x4B2CBD72L;
        uint8_t l_80 = 1UL;
        int32_t l_90 = (-9L);
        int16_t l_95 = 1L;
        int32_t l_98 = 0x8A2FD92DL;
        int64_t *l_100[3];
        int64_t **l_99[2];
        int64_t ***l_101 = (void*)0;
        int64_t ***l_102 = &l_99[0];
        int32_t *l_103 = &l_90;
        int32_t *l_104 = &l_90;
        int32_t *l_105 = &l_79;
        int32_t *l_106 = &l_90;
        int32_t *l_107 = &g_62;
        int32_t *l_108 = (void*)0;
        int32_t *l_109 = &l_98;
        int32_t *l_110[2];
        int i;
        for (i = 0; i < 3; i++)
            l_100[i] = &g_97[2];
        for (i = 0; i < 2; i++)
            l_99[i] = &l_100[2];
        for (i = 0; i < 2; i++)
            l_110[i] = &l_79;
        for (g_57 = (-14); (g_57 <= 5); ++g_57)
        { 
            uint8_t *l_77 = &g_78;
            int32_t *l_81[6][7] = {{&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&g_62,&l_79,&g_62,&l_79,&g_62,&l_79,&g_62},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62},{&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79},{&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62}};
            int64_t *l_96 = &g_97[1];
            int i, j;
            g_62 = (((g_60 = (safe_rshift_func_uint8_t_u_u(((void*)0 == l_68), (safe_sub_func_int16_t_s_s(p_43.f0, (safe_div_func_uint8_t_u_u(((*l_77) = (safe_mod_func_int64_t_s_s(p_42, (safe_lshift_func_int16_t_s_u((0UL == ((p_43.f0 >= 0x849EDE15L) && 0x60L)), p_44))))), l_79))))))) >= 0xF0AC7725L) == l_80);
            g_83++;
            l_98 |= (p_44 && (l_79 &= (safe_div_func_uint16_t_u_u((((1L > (((safe_rshift_func_int8_t_s_u((l_90 = (-1L)), (((*l_96) &= (!(p_42 , ((((((safe_mul_func_int16_t_s_s((l_94[1] == ((l_95 || p_43.f0) , (void*)0)), 0x2C2FL)) & 0x8CD4L) < g_82) > p_43.f0) | g_25) , 248UL)))) | 18446744073709551614UL))) , (void*)0) == &l_80)) | l_80) == g_57), (-1L)))));
            p_42 |= g_83;
        }
        (*l_102) = l_99[1];
        g_112++;
    }
    else
    { 
        const int64_t l_116[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int16_t l_119 = (-7L);
        uint32_t l_135[1];
        uint64_t *l_136 = (void*)0;
        uint64_t *l_137 = &g_83;
        int32_t *l_138[2];
        struct S0 l_146 = {0xF8029A732090DF5CLL,0x33L,-6L,9UL};
        int16_t **l_147 = (void*)0;
        int16_t **l_148 = &l_94[1];
        int16_t **l_150 = (void*)0;
        int16_t **l_151 = &g_24;
        int i;
        for (i = 0; i < 1; i++)
            l_135[i] = 0x861DE5BBL;
        for (i = 0; i < 2; i++)
            l_138[i] = &g_139;
        p_42 &= (~(l_116[2] <= (safe_sub_func_uint64_t_u_u(l_119, ((!(safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(((g_60 && 4L) != (+(-1L))), (*g_24))) < ((*l_137) = (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((g_134 , l_135[0]), 0x86L)), 13)), g_112)))) | l_111), g_62)) >= l_111), g_134.f3))) | 254UL)))));
        g_141++;
        g_62 = (safe_add_func_uint64_t_u_u((((*l_148) = (l_146 , &g_82)) == ((*l_151) = l_149[0][0][1])), (safe_mul_func_int8_t_s_s(p_43.f0, ((safe_div_func_int16_t_s_s(g_134.f3, g_97[1])) || (!(safe_mul_func_int16_t_s_s(p_42, g_112))))))));
    }
    p_42 ^= (g_163 != (g_139 < g_139));
    l_164 = &l_149[3][2][1];
    return (*g_24);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_19[i], "g_19[i]", print_hash_value);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_134.f2.f0, "g_134.f2.f0", print_hash_value);
    transparent_crc(g_134.f2.f1, "g_134.f2.f1", print_hash_value);
    transparent_crc(g_134.f2.f2, "g_134.f2.f2", print_hash_value);
    transparent_crc(g_134.f2.f3, "g_134.f2.f3", print_hash_value);
    transparent_crc(g_134.f3, "g_134.f3", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_318[i][j].f0, "g_318[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_405[i], "g_405[i]", print_hash_value);

    }
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_557.f0, "g_557.f0", print_hash_value);
    transparent_crc(g_557.f1, "g_557.f1", print_hash_value);
    transparent_crc(g_557.f2.f0, "g_557.f2.f0", print_hash_value);
    transparent_crc(g_557.f2.f1, "g_557.f2.f1", print_hash_value);
    transparent_crc(g_557.f2.f2, "g_557.f2.f2", print_hash_value);
    transparent_crc(g_557.f2.f3, "g_557.f2.f3", print_hash_value);
    transparent_crc(g_557.f3, "g_557.f3", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_683.f0, "g_683.f0", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_822.f0, "g_822.f0", print_hash_value);
    transparent_crc(g_822.f1, "g_822.f1", print_hash_value);
    transparent_crc(g_822.f2.f0, "g_822.f2.f0", print_hash_value);
    transparent_crc(g_822.f2.f1, "g_822.f2.f1", print_hash_value);
    transparent_crc(g_822.f2.f2, "g_822.f2.f2", print_hash_value);
    transparent_crc(g_822.f2.f3, "g_822.f2.f3", print_hash_value);
    transparent_crc(g_822.f3, "g_822.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_879[i][j], "g_879[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
