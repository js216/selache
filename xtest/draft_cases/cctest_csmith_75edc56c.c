// SPDX-License-Identifier: MIT
// cctest_csmith_75edc56c.c --- cctest case csmith_75edc56c (csmith seed 1978516844)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc9452de2 */

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

// Options:   -s 1978516844 -o /tmp/csmith_gen_tchx96l_/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint64_t  f1;
   int32_t  f2;
   signed f3 : 16;
   unsigned f4 : 3;
   int16_t  f5;
   uint16_t  f6;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   uint32_t  f1;
   const int32_t  f2;
   uint64_t  f3;
   int32_t  f4;
};


static uint8_t g_5 = 1UL;
static int32_t g_33 = 0L;
static const struct S0 g_45 = {0UL,0x657A772BE76DCB0CLL,4L,-132,0,0xC8D3L,0UL};
static const struct S0 *g_44[6] = {&g_45,&g_45,&g_45,&g_45,&g_45,&g_45};
static int32_t *g_48 = &g_33;
static int32_t **g_47 = &g_48;
static int32_t g_54 = 0x7EE0456BL;
static int16_t g_75[7][4] = {{0xA9DAL,0xEE8DL,0x0B1CL,0xEE8DL},{0x1BFDL,0x3DEFL,0x2DB4L,0x0B1CL},{0xEE8DL,0x3DEFL,0x3DEFL,0xEE8DL},{0x3DEFL,0xEE8DL,0x1BFDL,0xA9DAL},{0x3DEFL,0x1BFDL,0x3DEFL,0x2DB4L},{0xEE8DL,0xA9DAL,0x2DB4L,0x2DB4L},{0x1BFDL,0x1BFDL,0x0B1CL,0xA9DAL}};
static uint64_t g_83 = 1UL;
static union U1 g_89[6][1][7] = {{{{-1L},{-1L},{-1L},{-1L},{-1L},{0xDE133A9BL},{0xDE133A9BL}}},{{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}},{{{0xDE133A9BL},{-5L},{0x3529C6F6L},{-5L},{0xDE133A9BL},{-1L},{-1L}}},{{{0xDE133A9BL},{-5L},{0x3529C6F6L},{-5L},{0xDE133A9BL},{-1L},{-1L}}},{{{0xDE133A9BL},{-5L},{0x3529C6F6L},{-5L},{0xDE133A9BL},{-1L},{-1L}}},{{{0xDE133A9BL},{-5L},{0x3529C6F6L},{-5L},{0xDE133A9BL},{-1L},{-1L}}}};
static uint8_t g_93 = 0x72L;
static struct S0 g_125 = {8UL,0x9F78EB292015BDF5LL,0x5002FA5DL,-23,1,0xF146L,0x44C2L};
static uint64_t g_146 = 0x73286A6E12AA013FLL;
static int64_t g_165[7][7] = {{0x123B5FEB66E786C8LL,0x123B5FEB66E786C8LL,0x05CCA37329A51642LL,0x123B5FEB66E786C8LL,0x123B5FEB66E786C8LL,0x05CCA37329A51642LL,0x123B5FEB66E786C8LL},{1L,0xE0D3EF5034E9F7E8LL,0xE0D3EF5034E9F7E8LL,1L,0xE0D3EF5034E9F7E8LL,0xE0D3EF5034E9F7E8LL,1L},{(-5L),0x123B5FEB66E786C8LL,(-5L),(-5L),0x123B5FEB66E786C8LL,(-5L),(-5L)},{1L,1L,0L,1L,1L,0L,1L},{0x123B5FEB66E786C8LL,(-5L),(-5L),0x123B5FEB66E786C8LL,(-5L),(-5L),0x123B5FEB66E786C8LL},{0xE0D3EF5034E9F7E8LL,1L,0xE0D3EF5034E9F7E8LL,0xE0D3EF5034E9F7E8LL,1L,0xE0D3EF5034E9F7E8LL,0xE0D3EF5034E9F7E8LL},{0x123B5FEB66E786C8LL,0x123B5FEB66E786C8LL,0x05CCA37329A51642LL,0x123B5FEB66E786C8LL,0x123B5FEB66E786C8LL,0x05CCA37329A51642LL,0x123B5FEB66E786C8LL}};
static int8_t g_234 = (-3L);
static uint32_t g_241[2] = {0x9A5ECE69L,0x9A5ECE69L};
static const int32_t *g_270 = (void*)0;
static const int32_t **g_269 = &g_270;
static const int32_t ***g_268 = &g_269;
static uint64_t g_276 = 0x7973EFB746B9F5D8LL;
static uint16_t g_294 = 65535UL;
static int64_t g_329 = 0xC08B3C05E57BF452LL;
static int32_t *g_391 = &g_89[2][0][2].f4;
static uint16_t *g_398 = &g_294;
static uint16_t **g_397 = &g_398;
static int32_t g_413 = 5L;
static int64_t g_414 = (-3L);
static int16_t **g_432 = (void*)0;
static int8_t g_439 = 0xD9L;
static int32_t g_442 = 9L;
static uint32_t g_463 = 0xE515C1BFL;
static uint32_t g_474 = 0xE446F691L;
static int8_t *g_485 = &g_439;
static int8_t **g_484 = &g_485;
static int16_t g_528 = 1L;
static int16_t g_529 = 0x2912L;
static int32_t g_531 = 0x011B5C61L;
static int16_t g_532[2] = {1L,1L};
static uint32_t g_583[6] = {0xDA595B1DL,0xDA595B1DL,0xDA595B1DL,0xDA595B1DL,0xDA595B1DL,0xDA595B1DL};
static union U1 *g_683 = (void*)0;
static int16_t g_685[1] = {0L};
static uint32_t g_686 = 4294967292UL;
static int8_t g_689[7][2][4] = {{{0x67L,0xF0L,(-9L),0x22L},{0x64L,0x08L,0x08L,0x64L}},{{0x08L,0x64L,0x5CL,0x67L},{0xF0L,0x67L,0L,7L}},{{0x64L,0x67L,0x9AL,7L},{0x5CL,0x67L,0L,0x67L}},{{(-2L),0x64L,0xCDL,0x64L},{0x67L,0x08L,0x9AL,0x22L}},{{0x2DL,0xF0L,0x08L,0x2DL},{0xF0L,0x64L,0x61L,(-2L)}},{{0xF0L,0x5CL,0x08L,7L},{0x2DL,(-2L),0x9AL,0x9AL}},{{0x67L,0x67L,0xCDL,(-2L)},{(-2L),0x2DL,0L,0x64L}}};
static int8_t g_713 = 0L;
static int64_t g_714 = 0L;
static int64_t g_715[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
static uint16_t g_716 = 0xA832L;
static uint8_t *g_732 = &g_5;
static uint8_t **g_731 = &g_732;
static int64_t *g_757 = (void*)0;
static int64_t * const *g_756 = &g_757;
static uint8_t g_787 = 0xA4L;
static uint8_t g_794[2][3][4] = {{{251UL,0xB8L,0xB8L,251UL},{0xB8L,251UL,0xB8L,0xB8L},{251UL,251UL,3UL,251UL}},{{251UL,0xB8L,0xB8L,251UL},{0xB8L,251UL,0xB8L,0xB8L},{251UL,251UL,3UL,251UL}}};
static struct S0 *g_887 = &g_125;
static struct S0 **g_886[5][2][4] = {{{&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887}},{{&g_887,&g_887,&g_887,&g_887},{&g_887,&g_887,&g_887,&g_887}}};
static uint32_t g_913 = 0xCA342E62L;
static struct S0 g_918 = {4294967293UL,18446744073709551613UL,0x084B0361L,106,1,0x91EBL,65533UL};
static int16_t g_1074 = 0xD866L;
static uint32_t g_1075 = 0x81CE4DE0L;
static int8_t g_1079 = 0x03L;
static uint64_t g_1080[5][1] = {{0xE4DDF77CA82AD38ELL},{0xD204B26A778AC527LL},{0xE4DDF77CA82AD38ELL},{0xD204B26A778AC527LL},{0xE4DDF77CA82AD38ELL}};
static int32_t g_1140 = (-1L);
static uint16_t g_1141[4][7][5] = {{{0x6116L,0xBCB4L,3UL,0xBCB4L,0x6116L},{1UL,0x9887L,0x3315L,8UL,0UL},{65535UL,0x9ED5L,0x3907L,0x3907L,0x9ED5L},{0xD793L,0x0CF3L,0x3B9FL,0x9887L,0UL},{0xBCB4L,0x3907L,0x6116L,5UL,0x6116L},{0UL,0xD08DL,1UL,7UL,65527UL},{0xBCB4L,0xC698L,65535UL,3UL,3UL}},{{0xD793L,5UL,0xD793L,1UL,65535UL},{65535UL,0xC698L,0xBCB4L,0x9ED5L,0x86B4L},{1UL,0xD08DL,0UL,1UL,0xD793L},{0x6116L,0x3907L,0xBCB4L,0x86B4L,0xC698L},{0x3B9FL,0x0CF3L,0xD793L,0x0CF3L,0x3B9FL},{0x3907L,0x9ED5L,65535UL,0x86B4L,65534UL},{0x3315L,0x9887L,1UL,1UL,0xFF1AL}},{{3UL,0xBCB4L,0x6116L,0x9ED5L,65534UL},{0x840CL,1UL,0x3B9FL,1UL,0x3B9FL},{65534UL,65534UL,0x3907L,3UL,0xC698L},{0x840CL,65535UL,0x3315L,7UL,0xD793L},{3UL,65530UL,3UL,5UL,0x86B4L},{0x3315L,65535UL,0x840CL,0x9887L,65535UL},{0x3907L,65534UL,65534UL,0x3907L,3UL}},{{0x3B9FL,1UL,0x840CL,8UL,65527UL},{0x6116L,0xBCB4L,3UL,0xBCB4L,0x6116L},{1UL,0x9887L,0x3315L,8UL,0UL},{65535UL,0x9ED5L,0x3907L,0x3907L,0x9ED5L},{0xD793L,0x0CF3L,0x3B9FL,0x9887L,0UL},{0xBCB4L,0x3907L,0x6116L,5UL,0x6116L},{0UL,0xD08DL,1UL,7UL,65527UL}}};
static struct S0 g_1149[1] = {{0x9A19097EL,0UL,0x5814768DL,54,1,0L,0x7576L}};
static uint32_t g_1189 = 4294967291UL;
static uint32_t g_1192 = 0x8D75EC37L;
static uint32_t * const g_1191 = &g_1192;
static uint32_t * const *g_1190 = &g_1191;
static int16_t ****g_1338 = (void*)0;
static uint16_t g_1409 = 0x1E1DL;
static int16_t ***g_1414[6][1][7] = {{{&g_432,(void*)0,&g_432,&g_432,&g_432,&g_432,&g_432}},{{&g_432,&g_432,&g_432,&g_432,&g_432,(void*)0,(void*)0}},{{&g_432,&g_432,&g_432,&g_432,&g_432,&g_432,&g_432}},{{&g_432,&g_432,&g_432,&g_432,&g_432,&g_432,&g_432}},{{&g_432,&g_432,&g_432,&g_432,&g_432,&g_432,&g_432}},{{&g_432,&g_432,&g_432,(void*)0,&g_432,&g_432,&g_432}}};
static const int64_t g_1432 = 0x02037EDC7498CE71LL;
static int8_t g_1438[5] = {0x07L,0x07L,0x07L,0x07L,0x07L};
static union U1 g_1526[5][5] = {{{0x36250FA0L},{1L},{1L},{0x36250FA0L},{0xD363C2A4L}},{{2L},{0x36250FA0L},{-1L},{4L},{0L}},{{2L},{-1L},{0xD363C2A4L},{-1L},{2L}},{{0x36250FA0L},{-4L},{0L},{4L},{1L}},{{0L},{-4L},{0x36250FA0L},{0x36250FA0L},{-4L}}};
static uint64_t g_1545[7][7] = {{0UL,0UL,18446744073709551611UL,18446744073709551610UL,0x41A2394A118A70C1LL,0x91B0572B1E9274C9LL,0x91B0572B1E9274C9LL},{18446744073709551611UL,0UL,0UL,0UL,18446744073709551611UL,18446744073709551610UL,0x41A2394A118A70C1LL},{18446744073709551606UL,18446744073709551613UL,0UL,18446744073709551610UL,0xAA217AA011947C73LL,18446744073709551610UL,0UL},{0x41A2394A118A70C1LL,0x41A2394A118A70C1LL,0UL,0UL,18446744073709551613UL,0x91B0572B1E9274C9LL,18446744073709551606UL},{18446744073709551606UL,18446744073709551610UL,0UL,0UL,18446744073709551610UL,18446744073709551606UL,0xAA217AA011947C73LL},{18446744073709551611UL,0UL,0UL,0xAA217AA011947C73LL,18446744073709551613UL,18446744073709551613UL,0xAA217AA011947C73LL},{0UL,1UL,0UL,0x91B0572B1E9274C9LL,0xAA217AA011947C73LL,18446744073709551611UL,18446744073709551606UL}};
static int32_t g_1553 = 0x1BFB7C75L;
static int8_t g_1554 = 0L;
static uint64_t g_1555 = 0xCFAACCD680428EF9LL;
static int64_t g_1599 = 1L;
static int32_t g_1600 = (-1L);
static int32_t g_1601 = 0x04D38222L;
static int32_t g_1602 = 1L;
static uint8_t g_1603 = 0x0BL;
static uint32_t **g_1641 = (void*)0;
static struct S0 *g_1652 = &g_1149[0];
static int64_t g_1662[5] = {0L,0L,0L,0L,0L};
static int8_t g_1663 = (-1L);
static uint32_t g_1664 = 6UL;
static int64_t **g_1684[3] = {&g_757,&g_757,&g_757};
static int64_t ***g_1683 = &g_1684[2];
static int64_t ****g_1682[7] = {&g_1683,&g_1683,&g_1683,&g_1683,&g_1683,&g_1683,&g_1683};
static int32_t g_1729 = (-2L);
static uint8_t g_1731 = 0UL;
static uint64_t g_1790 = 0x41A39FAFF83B9D5ALL;
static union U1 g_1822[7][1] = {{{1L}},{{1L}},{{1L}},{{1L}},{{1L}},{{1L}},{{1L}}};
static uint32_t *g_1840 = (void*)0;
static uint32_t **g_1839 = &g_1840;
static int16_t *****g_1865 = &g_1338;
static int16_t g_1874 = 1L;
static int8_t g_1875 = (-1L);
static uint64_t g_1876 = 18446744073709551613UL;
static int64_t g_1883 = 1L;
static int32_t g_1884 = 0x090BCD81L;
static int32_t g_1886 = 0xB389F490L;
static uint8_t g_1887 = 0UL;
static uint16_t *** const g_1948[1] = {&g_397};
static uint16_t *** const *g_1947 = &g_1948[0];
static int64_t g_2035 = 0x97FADCBB6413CA73LL;
static int8_t **g_2130[5][4] = {{&g_485,(void*)0,(void*)0,&g_485},{(void*)0,&g_485,(void*)0,(void*)0},{&g_485,&g_485,&g_485,&g_485},{&g_485,(void*)0,(void*)0,&g_485},{(void*)0,&g_485,(void*)0,(void*)0}};
static int8_t ***g_2129 = &g_2130[0][2];
static uint64_t g_2133 = 1UL;
static uint16_t g_2177 = 0UL;
static struct S0 g_2213 = {0UL,0xFBE6ACFC90FA0694LL,-1L,160,0,0x1999L,65535UL};
static uint32_t g_2248 = 0xED2A22F5L;
static uint32_t g_2256 = 0UL;
static int8_t ****g_2285 = &g_2129;
static int32_t g_2288 = 8L;
static int64_t g_2353 = 1L;
static const union U1 *g_2360 = &g_1526[2][0];
static const union U1 **g_2359 = &g_2360;
static const union U1 ***g_2358 = &g_2359;
static uint64_t g_2381 = 0x6A5A43E963B3BF4ELL;
static uint64_t g_2447 = 0UL;
static int64_t g_2504 = 0xEAD63A4713EB7013LL;
static uint32_t g_2646 = 4294967295UL;
static int16_t g_2650 = (-4L);
static uint32_t g_2651 = 18446744073709551612UL;



static uint16_t  func_1(void);
static int32_t  func_2(uint16_t  p_3, uint32_t  p_4);
static int16_t  func_7(uint64_t  p_8, int8_t  p_9, struct S0  p_10, int32_t  p_11, uint16_t  p_12);
static uint64_t  func_14(uint32_t  p_15, int16_t  p_16, int8_t  p_17);
static struct S0  func_18(struct S0  p_19, int8_t  p_20, int32_t  p_21, const uint32_t  p_22);
static struct S0  func_23(union U1  p_24);
static int32_t * func_26(uint32_t  p_27, int32_t * p_28, int32_t * p_29, int32_t * p_30);
static int32_t * func_34(uint64_t  p_35, int32_t * p_36);




static uint16_t  func_1(void)
{ 
    uint32_t l_13 = 3UL;
    union U1 l_25 = {0x14B81230L};
    struct S0 l_1198 = {0UL,0UL,-10L,169,0,-2L,1UL};
    int32_t l_2442 = 6L;
    int32_t l_2443 = 0L;
    int32_t l_2444 = 0x37B1C62BL;
    int32_t l_2445 = 0L;
    int16_t l_2446[5];
    struct S0 l_2458 = {4294967295UL,18446744073709551615UL,9L,204,1,3L,1UL};
    uint16_t ***l_2503 = (void*)0;
    uint16_t ****l_2502[3];
    union U1 l_2518[6] = {{0x5A21D047L},{0x5A21D047L},{7L},{0x5A21D047L},{0x5A21D047L},{7L}};
    int16_t l_2523 = 0x5975L;
    uint16_t l_2562[3];
    uint32_t *l_2571 = &g_2256;
    struct S0 *** const l_2597 = (void*)0;
    uint8_t * const *l_2631[1][1];
    int32_t *l_2637[7] = {&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602};
    int32_t **l_2654 = &l_2637[3];
    int32_t *l_2655 = (void*)0;
    int8_t l_2656 = 1L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_2446[i] = 1L;
    for (i = 0; i < 3; i++)
        l_2502[i] = &l_2503;
    for (i = 0; i < 3; i++)
        l_2562[i] = 0x9228L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2631[i][j] = &g_732;
    }
    if (func_2(((-7L) | (((g_5 < g_5) & g_5) >= ((+func_7((l_13 , func_14((func_18((func_23(l_25) , (*g_887)), l_25.f4, l_25.f2, g_234) , 5UL), l_25.f1, l_25.f4)), l_13, l_1198, l_1198.f2, l_1198.f3)) ^ l_1198.f2))), l_1198.f6))
    { 
        uint16_t l_2440[2][2];
        int32_t *l_2441[6][1][2] = {{{&g_531,&g_531}},{{&g_531,&g_33}},{{&g_89[2][0][2].f4,&g_54}},{{&g_33,&g_54}},{{&g_89[2][0][2].f4,&g_33}},{{&g_531,&g_531}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_2440[i][j] = 0xB96DL;
        }
        l_1198.f3 = l_2440[1][0];
        g_2447--;
    }
    else
    { 
        const int64_t l_2452 = 0x6E32FCC5A21972B8LL;
        int32_t l_2466 = 0x44F04EEAL;
        uint16_t l_2467 = 2UL;
        int32_t *l_2469 = &g_531;
        const uint32_t *l_2483 = (void*)0;
        const uint32_t * const * const l_2482 = &l_2483;
        int32_t *l_2505 = (void*)0;
        uint16_t l_2508 = 0UL;
        uint64_t *l_2548 = (void*)0;
        uint64_t *l_2549 = (void*)0;
        uint64_t *l_2550[3];
        int64_t l_2551 = (-5L);
        int16_t **l_2558 = (void*)0;
        int16_t ***l_2559 = &l_2558;
        const uint16_t l_2565 = 0UL;
        uint8_t ** const *l_2566 = (void*)0;
        int16_t *l_2568 = &g_1149[0].f5;
        int16_t **l_2567 = &l_2568;
        int16_t *l_2569 = (void*)0;
        int16_t *l_2570[1][5][3] = {{{&g_75[2][0],&g_75[2][0],&g_75[2][0]},{&g_532[0],&l_1198.f5,&g_532[0]},{&g_75[2][0],&g_75[2][0],&g_75[2][0]},{&g_532[0],&l_1198.f5,&g_532[0]},{&g_75[2][0],&g_75[2][0],&g_75[2][0]}}};
        uint32_t **l_2572 = &l_2571;
        uint8_t ***l_2611 = &g_731;
        uint8_t ****l_2610 = &l_2611;
        uint8_t *****l_2609 = &l_2610;
        uint32_t l_2619 = 4294967295UL;
        int32_t l_2640 = 0L;
        int32_t l_2641 = 0xA5162D90L;
        int32_t l_2643 = 0x3B28269CL;
        int32_t l_2645[6][4][2];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2550[i] = &g_1526[2][0].f3;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 2; k++)
                    l_2645[i][j][k] = 0xBD2BB863L;
            }
        }
        for (l_2443 = 0; (l_2443 < (-4)); l_2443 = safe_sub_func_uint8_t_u_u(l_2443, 3))
        { 
            int32_t l_2455 = 5L;
            int32_t l_2459 = (-1L);
            int64_t *l_2464 = &g_2353;
            int32_t *l_2465[6];
            int32_t *l_2468 = &g_1602;
            int i;
            for (i = 0; i < 6; i++)
                l_2465[i] = &g_1884;
            l_2467 = (((l_2452 & ((l_2455 > ((safe_div_func_uint32_t_u_u((l_1198.f3 = ((l_2466 &= ((((l_2458 , ((*l_2464) ^= ((((g_1876++) & l_2459) | (safe_div_func_int8_t_s_s(l_2452, ((((l_2458.f2 != l_25.f1) , (****g_1947)) >= l_2452) || g_2256)))) >= l_2459))) <= 18446744073709551613UL) | 0xC46120E2L) , g_1599)) , l_1198.f3)), l_2452)) >= g_2213.f2)) <= 4L)) & l_2458.f3) && 0xE6C6L);
            (*l_2468) ^= l_2459;
            if ((*l_2468))
                continue;
        }
        l_2469 = &l_2445;
        if (((safe_add_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((*l_2469) != 1L), (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((0x9A1AA71BL != ((void*)0 == l_2482)), ((*l_2469) || ((((((safe_div_func_uint32_t_u_u(l_2442, l_2458.f6)) != 0x2CC175484C9FF5F4LL) , l_1198.f6) , (*g_485)) & 0x6DL) <= (*l_2469))))), 0xACL)) , 0xF7L), 4L)), g_1545[5][1])))) , (void*)0) == (void*)0), (*l_2469))) < l_2443))
        { 
            int16_t *l_2488 = &l_2458.f5;
            int32_t l_2501 = 0xB3309276L;
            (*g_268) = (void*)0;
            l_2505 = ((l_2488 != ((((safe_lshift_func_uint8_t_u_s((((0x9277924CL != ((1L && 0x9184L) | ((safe_sub_func_int64_t_s_s((((((***g_2358) , ((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((l_2501 < ((l_2502[0] == &g_1948[0]) & 0xA799L)) == l_2501), l_25.f1)) != g_532[0]), l_2443)), l_2501)) >= g_2504)) , (void*)0) == (*g_1947)) & 0xF530L), g_1822[5][0].f0)) >= l_2501))) > (*l_2469)) ^ 0x91C1L), (*l_2469))) && (*l_2469)) >= (*g_485)) , &l_2446[3])) , &l_2501);
        }
        else
        { 
            int32_t *l_2506 = (void*)0;
            int32_t *l_2507[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2507[i] = &g_89[2][0][2].f4;
            ++l_2508;
            for (g_1409 = (-14); (g_1409 <= 14); g_1409 = safe_add_func_uint8_t_u_u(g_1409, 7))
            { 
                uint64_t l_2513 = 18446744073709551607UL;
                struct S0 l_2519 = {0xD6123396L,0UL,0x69FAFA52L,213,0,-6L,65535UL};
                int32_t l_2530 = 0x28012B28L;
                ++l_2513;
                if ((safe_mul_func_uint16_t_u_u((l_2519 , ((~((*l_2469) || (safe_div_func_uint32_t_u_u(l_2523, (safe_div_func_uint32_t_u_u(((*l_2469) , l_2519.f3), ((((safe_mod_func_int16_t_s_s(((((((safe_lshift_func_uint8_t_u_u((l_2530 |= (**g_731)), (*g_732))) & (*g_732)) , (**g_731)) || (*g_732)) , (*g_1947)) == (*g_1947)), (**g_397))) , l_2530) == 0x37L) || 0x06L))))))) < (-3L))), 0x8A77L)))
                { 
                    int32_t l_2531 = 0xC210DFEFL;
                    return l_2531;
                }
                else
                { 
                    g_89[2][0][2].f4 &= (*l_2469);
                    (*l_2469) &= (((((void*)0 != &g_44[4]) , ((*g_1191) < (*g_1191))) , &g_1948[0]) != &g_1948[0]);
                    return (****g_1947);
                }
            }
            return (*g_398);
        }
        g_1600 &= (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_2446[0] >= (*l_2469)) , ((*l_2469) == ((safe_mul_func_uint8_t_u_u(253UL, (*g_732))) <= ((*g_756) != (void*)0)))), (*l_2469))), (**g_484)));
        if ((safe_add_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_2458.f3 = (safe_mul_func_uint8_t_u_u((((*l_2572) = l_2571) != &g_583[4]), 252UL))), 0xA064F5774D2AD05BLL)), l_25.f2)))
        { 
            uint64_t l_2593[6][5] = {{18446744073709551615UL,0xDA9BE8BA66F8A59DLL,0x4C0F60069ABC45AFLL,0xDA9BE8BA66F8A59DLL,18446744073709551615UL},{0xC4114487F17E9BB1LL,0x06F84C1F29C70A11LL,0UL,0x760765A3FF566449LL,0x06F84C1F29C70A11LL},{0xDA9BE8BA66F8A59DLL,0x1CD9E91B61232C2FLL,0xD17753CA6AFE108DLL,0x1CD9E91B61232C2FLL,0xDA9BE8BA66F8A59DLL},{0x06F84C1F29C70A11LL,0x760765A3FF566449LL,0UL,0x760765A3FF566449LL,0x06F84C1F29C70A11LL},{0xDA9BE8BA66F8A59DLL,0x1CD9E91B61232C2FLL,0xD17753CA6AFE108DLL,0x1CD9E91B61232C2FLL,0xDA9BE8BA66F8A59DLL},{0x06F84C1F29C70A11LL,0x760765A3FF566449LL,0UL,0x760765A3FF566449LL,0x06F84C1F29C70A11LL}};
            int32_t l_2604 = 0L;
            int32_t *l_2638 = &l_2518[5].f4;
            int32_t l_2644 = (-1L);
            int i, j;
            for (l_25.f0 = 0; (l_25.f0 >= (-24)); l_25.f0 = safe_sub_func_int64_t_s_s(l_25.f0, 6))
            { 
                uint16_t **l_2586 = (void*)0;
                int64_t *l_2589 = &g_1599;
                int64_t ***l_2590 = &g_1684[2];
                int32_t l_2591 = 0x7B22F105L;
                int16_t l_2592 = 0x4693L;
                int32_t l_2642 = 1L;
                int32_t **l_2649 = &l_2637[2];
                (*l_2469) = (&g_1839 == (void*)0);
                if (((*l_2469) = (((0xF98E47BEL & (safe_mod_func_int16_t_s_s((+(((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_div_func_int32_t_s_s((((void*)0 == l_2586) == ((*l_2589) = (safe_rshift_func_int16_t_s_u(0xF85AL, 4)))), (((*g_1191) = ((l_1198.f3 | (l_2590 != (void*)0)) > l_2591)) ^ l_2592))) || 0xD22FL) , 0x3BF1L), l_2458.f6)), 0x32L)), l_2591)) ^ l_2593[4][3]) , (*l_2469))), l_2593[1][3]))) , (void*)0) == &g_2133)))
                { 
                    int16_t l_2594 = 0x2682L;
                    l_2604 &= (((*l_2589) = l_2594) != ((safe_lshift_func_uint16_t_u_s((((3L || (((-1L) && ((*g_1191) ^= (&g_886[2][1][0] != l_2597))) < l_2592)) < (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((0xE6ADL && (*l_2469)), (**g_484))), 1UL)), (**g_397)))) != 0x9CB1239EL), l_2443)) > g_75[2][0]));
                }
                else
                { 
                    int8_t l_2618[5] = {0x61L,0x61L,0x61L,0x61L,0x61L};
                    uint8_t l_2620 = 0UL;
                    int32_t *l_2621 = &g_89[2][0][2].f0;
                    struct S0 l_2630 = {4294967295UL,0x57157DACB8C3E15BLL,0x57241B9AL,-45,0,0x53B5L,0x5E98L};
                    int32_t *l_2632 = &g_89[2][0][2].f4;
                    int i;
                    (*l_2469) = ((&g_2447 == (void*)0) || ((((**l_2567) = (safe_rshift_func_int16_t_s_s((((*l_2621) = (((safe_add_func_int32_t_s_s((l_2592 , ((void*)0 != l_2609)), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((*g_1191) = ((safe_sub_func_uint16_t_u_u((l_2618[0] == l_2593[4][3]), l_2619)) != g_713)) , 1UL), 8UL)), 15)))) <= l_2620) | l_2618[4])) , l_1198.f2), 8))) >= (*g_398)) && (-5L)));
                    (*l_2632) = ((*l_2469) = (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*g_1191) ^ 0x01A4A5B4L) > (safe_rshift_func_int8_t_s_u((-1L), 4))), (safe_mul_func_uint64_t_u_u(0UL, (((l_2630 , (((*l_2568) ^= l_2630.f6) , l_2631[0][0])) != (void*)0) > (*g_485)))))), 6)));
                }
                if ((safe_rshift_func_int16_t_s_s(((*l_2469) ^ ((*l_2469) == 0x58E78D8CL)), 3)))
                { 
                    (*l_2469) = l_2592;
                }
                else
                { 
                    (**g_2358) = (**g_2358);
                    (*g_47) = &l_2591;
                    if (l_1198.f6)
                        break;
                }
            }
        }
        else
        { 
            return (****g_1947);
        }
    }
    g_2651++;
    (*g_47) = &l_2442;
    l_2655 = ((*l_2654) = func_34(((*g_887) , g_1886), &l_2445));
    return l_2656;
}



static int32_t  func_2(uint16_t  p_3, uint32_t  p_4)
{ 
    uint16_t l_2337 = 65535UL;
    const int64_t *l_2342 = &g_714;
    int32_t *l_2345 = &g_531;
    int32_t l_2366 = 0L;
    int32_t l_2367 = 1L;
    uint16_t l_2371 = 3UL;
    int32_t l_2377[2];
    int16_t l_2426[3][5] = {{0xC884L,0xC884L,0xC884L,0xC884L,0xC884L},{0x4810L,0L,0x4810L,0L,0x4810L},{0xC884L,0xC884L,0xC884L,0xC884L,0xC884L}};
    struct S0 *l_2432 = &g_1149[0];
    int32_t *l_2435 = &g_531;
    int i, j;
    for (i = 0; i < 2; i++)
        l_2377[i] = 0L;
lbl_2398:
    (*g_391) &= l_2337;
    if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_2342 == (void*)0), (**g_731))), l_2337)))
    { 
        union U1 **l_2357 = (void*)0;
        union U1 ***l_2356[5][5] = {{&l_2357,&l_2357,&l_2357,&l_2357,&l_2357},{&l_2357,&l_2357,&l_2357,&l_2357,&l_2357},{&l_2357,&l_2357,&l_2357,&l_2357,&l_2357},{&l_2357,&l_2357,&l_2357,&l_2357,&l_2357},{&l_2357,&l_2357,&l_2357,&l_2357,&l_2357}};
        int32_t l_2375 = (-1L);
        int32_t l_2376 = 9L;
        int32_t l_2380 = 0xF132222FL;
        int8_t ** const *l_2419 = &g_2130[0][1];
        int i, j;
        for (g_1729 = 9; (g_1729 != 24); ++g_1729)
        { 
            int8_t **l_2346 = &g_485;
            const int32_t *l_2349[1];
            struct S0 l_2350 = {4294967291UL,0UL,0x21B80FA8L,61,1,1L,8UL};
            int32_t l_2368 = 0xE2BD0FE5L;
            int32_t l_2369 = 0x5C6869C9L;
            int16_t l_2370[1];
            int64_t l_2374 = 3L;
            int32_t l_2378[3];
            uint32_t *l_2401 = (void*)0;
            uint32_t l_2427 = 0UL;
            struct S0 **l_2433[3][6][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2349[i] = &g_918.f2;
            for (i = 0; i < 1; i++)
                l_2370[i] = 0x37B0L;
            for (i = 0; i < 3; i++)
                l_2378[i] = 0L;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_2433[i][j][k] = &l_2432;
                }
            }
            (*g_269) = l_2345;
            if (((*g_2129) != (l_2346 = (*g_2129))))
            { 
                struct S0 *l_2361 = &g_1149[0];
                struct S0 **l_2362 = &g_887;
                (*l_2345) = (safe_sub_func_uint32_t_u_u(1UL, ((((l_2349[0] != (l_2350 , &g_1886)) <= ((safe_sub_func_int16_t_s_s(g_2353, (((*g_1191) = ((safe_lshift_func_int8_t_s_s((l_2356[3][0] != g_2358), 6)) , p_4)) == 0xD7AB2E6DL))) != 6UL)) == p_4) < (*l_2345))));
                (*l_2362) = l_2361;
                if (p_4)
                    break;
                return p_3;
            }
            else
            { 
                int32_t *l_2363 = &g_1822[5][0].f4;
                int32_t *l_2364 = &g_1526[2][0].f4;
                int32_t *l_2365[7][7][2] = {{{&g_531,&g_531},{&g_531,&g_1600},{(void*)0,&g_1526[2][0].f4},{&g_1600,(void*)0},{&g_89[2][0][2].f4,&g_1526[2][0].f4},{&g_1526[2][0].f4,&g_1600},{&g_1600,&g_1600}},{{&g_1526[2][0].f4,&g_1526[2][0].f4},{&g_89[2][0][2].f4,(void*)0},{&g_1600,&g_1526[2][0].f4},{(void*)0,&g_1600},{&g_531,&g_531},{&g_531,&g_1600},{(void*)0,&g_1526[2][0].f4}},{{&g_1600,(void*)0},{&g_89[2][0][2].f4,&g_1526[2][0].f4},{&g_1526[2][0].f4,&g_1600},{&g_1600,&g_1600},{&g_1526[2][0].f4,&g_1526[2][0].f4},{&g_89[2][0][2].f4,(void*)0},{&g_1600,&g_1526[2][0].f4}},{{(void*)0,&g_1600},{&g_531,&g_531},{&g_531,&g_1600},{(void*)0,&g_1526[2][0].f4},{&g_1600,(void*)0},{&g_89[2][0][2].f4,&g_1526[2][0].f4},{&g_1526[2][0].f4,&g_1600}},{{&g_1600,&g_1600},{&g_1526[2][0].f4,&g_1526[2][0].f4},{&g_89[2][0][2].f4,(void*)0},{&g_1600,&g_1526[2][0].f4},{(void*)0,&g_1600},{&g_531,&g_531},{&g_531,&g_1600}},{{(void*)0,&g_1526[2][0].f4},{&g_1600,(void*)0},{&g_89[2][0][2].f4,&g_1526[2][0].f4},{&g_1526[2][0].f4,&g_1600},{&g_1600,&g_1600},{&g_1526[2][0].f4,&g_1526[2][0].f4},{&g_89[2][0][2].f4,(void*)0}},{{&g_1600,&g_1526[2][0].f4},{(void*)0,&g_1600},{&g_531,&g_531},{&g_531,&g_1600},{(void*)0,&g_1526[2][0].f4},{&g_1600,(void*)0},{&g_89[2][0][2].f4,&g_1526[2][0].f4}}};
                int64_t l_2379 = 0x3C9129673981F3E4LL;
                int i, j, k;
                --l_2371;
                g_2381--;
            }
            for (g_2213.f6 = (-22); (g_2213.f6 > 19); g_2213.f6 = safe_add_func_uint8_t_u_u(g_2213.f6, 6))
            { 
                uint32_t l_2386[3];
                uint64_t *l_2391[6][2][5] = {{{&g_1545[5][1],&g_2133,&g_2133,&g_1545[5][1],&g_2133},{&g_1555,(void*)0,&g_1545[5][1],&g_276,&g_1545[3][4]}},{{(void*)0,&g_89[2][0][2].f3,&g_2133,&g_89[2][0][2].f3,(void*)0},{(void*)0,(void*)0,(void*)0,&g_276,&g_1555}},{{&g_83,&g_1545[6][3],&g_1545[5][1],&g_1545[5][1],&g_1545[6][3]},{(void*)0,&g_1545[5][1],(void*)0,(void*)0,(void*)0}},{{&g_1080[4][0],&g_2133,&g_83,&g_89[2][0][2].f3,&g_83},{(void*)0,(void*)0,&g_1555,(void*)0,&g_1555}},{{&g_1080[4][0],(void*)0,&g_2133,&g_1545[6][3],&g_1545[6][3]},{(void*)0,&g_276,(void*)0,&g_1545[5][1],&g_1545[3][4]}},{{&g_2133,(void*)0,&g_1080[4][0],&g_1545[5][1],&g_1080[1][0]},{&g_1555,(void*)0,(void*)0,&g_1555,(void*)0}}};
                int16_t *l_2393 = (void*)0;
                int16_t **l_2392[5];
                uint16_t *l_2397[3];
                int32_t l_2414[6][1][3] = {{{0x0C35032FL,0x0C35032FL,0x0C35032FL}},{{0x9F258C5CL,0x9F258C5CL,0x9F258C5CL}},{{0x0C35032FL,0x0C35032FL,0x0C35032FL}},{{0x9F258C5CL,0x9F258C5CL,0x9F258C5CL}},{{0x0C35032FL,0x0C35032FL,0x0C35032FL}},{{0x9F258C5CL,0x9F258C5CL,0x9F258C5CL}}};
                union U1 l_2420 = {0xFB37165BL};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_2386[i] = 18446744073709551608UL;
                for (i = 0; i < 5; i++)
                    l_2392[i] = &l_2393;
                for (i = 0; i < 3; i++)
                    l_2397[i] = &g_1141[3][0][1];
                (*g_2359) = (*g_2359);
                if (p_3)
                    continue;
                (*l_2345) = l_2386[1];
                if ((p_4 | ((safe_rshift_func_uint16_t_u_s((p_3 |= ((****g_1947) &= ((l_2376 != (safe_sub_func_uint64_t_u_u((l_2369 |= l_2386[1]), ((l_2392[4] == &l_2393) > (**g_269))))) , (safe_lshift_func_int16_t_s_u(((~p_4) && (**g_731)), l_2380))))), p_4)) > l_2375)))
                { 
                    uint8_t *l_2407 = (void*)0;
                    uint8_t *l_2408 = &g_1887;
                    uint32_t *l_2412[2][7][6] = {{{&g_918.f0,&g_1149[0].f0,&g_1192,&g_2213.f0,&l_2350.f0,&g_2213.f0},{&g_1149[0].f0,&g_2213.f0,&g_1149[0].f0,&g_1192,&g_125.f0,&g_918.f0},{&g_1192,&g_125.f0,&g_918.f0,&g_1822[5][0].f1,&g_1822[5][0].f1,&g_1189},{&g_2213.f0,&g_918.f0,(void*)0,&g_1822[5][0].f1,&g_1192,&g_1192},{&g_1192,(void*)0,(void*)0,&g_1192,&g_1149[0].f0,&g_89[2][0][2].f1},{&g_1149[0].f0,&g_2213.f0,&g_1189,&g_2213.f0,(void*)0,&g_1192},{&g_918.f0,&g_1822[5][0].f1,&l_2350.f0,(void*)0,(void*)0,&g_125.f0}},{{&g_1149[0].f0,&g_2213.f0,&g_1192,&g_2213.f0,&g_1149[0].f0,(void*)0},{&l_2350.f0,(void*)0,&g_918.f0,&g_89[2][0][2].f1,&g_1192,&g_918.f0},{&g_918.f0,&g_918.f0,&g_1149[0].f0,(void*)0,&g_1822[5][0].f1,&g_918.f0},{(void*)0,&g_125.f0,&g_918.f0,&g_918.f0,&g_125.f0,(void*)0},{&g_1822[5][0].f1,&g_2213.f0,&g_1192,(void*)0,&l_2350.f0,&g_125.f0},{&g_2213.f0,&g_1149[0].f0,&l_2350.f0,&g_1189,&g_1822[5][0].f1,&g_1192},{&g_2213.f0,&g_89[2][0][2].f1,&g_1189,(void*)0,&g_1189,&g_89[2][0][2].f1}}};
                    uint32_t **l_2411 = &l_2412[1][4][4];
                    int32_t l_2413 = 0x34DA50FEL;
                    int32_t *l_2421 = &l_2375;
                    int32_t *l_2422 = (void*)0;
                    int32_t *l_2423 = (void*)0;
                    int32_t *l_2424 = &g_1140;
                    int32_t *l_2425[7][2] = {{&l_2378[2],&l_2378[2]},{&l_2378[2],&l_2378[2]},{&l_2378[2],&l_2378[2]},{&l_2378[2],&l_2378[2]},{&l_2378[2],&l_2378[2]},{&l_2378[2],&l_2378[2]},{&l_2378[2],&l_2378[2]}};
                    int i, j, k;
                    if (l_2376)
                        goto lbl_2398;
                    l_2414[3][0][1] ^= (((((((*g_391) |= (p_3 || l_2375)) , (safe_add_func_uint16_t_u_u(1UL, (((((*g_1839) = l_2401) != ((*l_2411) = (p_4 , ((((*g_732) < (safe_lshift_func_int16_t_s_s((~(safe_lshift_func_uint8_t_u_s((--(*l_2408)), ((**g_397) ^ l_2380)))), 14))) < 0x089A970B3D0A1722LL) , &p_4)))) || l_2413) & 0L)))) || (*l_2345)) & l_2370[0]) != 65533UL) , 0xBC66F8ABL);
                    (*g_391) |= (1L >= (18446744073709551615UL >= (g_1545[5][1] = (l_2413 == (((safe_sub_func_int8_t_s_s(p_4, (((((((*g_398) = (((l_2413 != ((l_2414[4][0][2] &= (safe_div_func_int8_t_s_s((((*g_485) = ((void*)0 != l_2419)) || (**g_731)), p_3))) == 0xBD200BB6C52F18DCLL)) == p_4) > 0x477C1ABFL)) | 0xFA04L) && p_3) , l_2420) , (*l_2345)) , p_3))) | (-3L)) , 65535UL)))));
                    ++l_2427;
                    if (l_2386[1])
                        continue;
                }
                else
                { 
                    l_2380 = p_3;
                    return (**g_269);
                }
                for (g_1731 = (-2); (g_1731 == 35); g_1731 = safe_add_func_uint32_t_u_u(g_1731, 3))
                { 
                    if (l_2350.f5)
                        goto lbl_2398;
                }
            }
            l_2432 = l_2432;
            (*l_2345) = 0xDB7946BBL;
        }
        return (*l_2345);
    }
    else
    { 
        int32_t *l_2434[4] = {&g_1526[2][0].f4,&g_1526[2][0].f4,&g_1526[2][0].f4,&g_1526[2][0].f4};
        int32_t **l_2436 = &g_391;
        int32_t *l_2437 = &l_2377[1];
        int64_t ***l_2438 = &g_1684[2];
        int64_t ****l_2439 = &g_1683;
        int i;
        (*g_269) = func_26(p_3, &g_54, ((*l_2436) = (l_2435 = ((*g_47) = (l_2345 = l_2434[0])))), l_2437);
        (*l_2439) = l_2438;
    }
    (**g_47) = (0xE5L || p_4);
    return p_3;
}



static int16_t  func_7(uint64_t  p_8, int8_t  p_9, struct S0  p_10, int32_t  p_11, uint16_t  p_12)
{ 
    int16_t l_1201 = 0L;
    int32_t l_1202 = 0x94C1DC5CL;
    struct S0 *l_1213[6][1] = {{(void*)0},{&g_1149[0]},{(void*)0},{&g_1149[0]},{(void*)0},{&g_1149[0]}};
    uint16_t *** const *l_1234 = (void*)0;
    uint16_t l_1279 = 0x0DF6L;
    const uint32_t *l_1325 = &g_1075;
    int16_t ***l_1335 = &g_432;
    int16_t ****l_1334 = &l_1335;
    int32_t l_1401 = 0x356A774CL;
    int32_t l_1404 = 0x49CA88E0L;
    int32_t l_1405 = 0xDC54BFD2L;
    int32_t l_1437 = 0xC1EACB1FL;
    uint32_t l_1498 = 0UL;
    union U1 *l_1524 = &g_89[2][0][2];
    int32_t l_1533 = (-1L);
    int32_t l_1534 = 0x354B1196L;
    int32_t l_1535 = 7L;
    int32_t l_1536 = (-1L);
    int32_t l_1537 = 1L;
    int32_t l_1538 = 0x2A937599L;
    int32_t l_1539 = 0xBF29CD29L;
    int32_t l_1540 = 5L;
    int32_t l_1541[7][3];
    int16_t l_1544 = 3L;
    uint8_t l_1549 = 2UL;
    uint32_t *l_1639 = &g_583[2];
    uint32_t **l_1638 = &l_1639;
    int64_t l_1661[6] = {0L,0L,0L,0L,0L,0L};
    int32_t l_1715 = 0xDC8BDA28L;
    int8_t l_1722[2][7] = {{(-1L),0x83L,3L,0x83L,(-1L),(-1L),0x83L},{0x97L,0x28L,0x97L,0x83L,0x83L,0x97L,0x28L}};
    int64_t ****l_1741[3];
    struct S0 ***l_1747 = &g_886[2][1][0];
    uint64_t l_1773 = 18446744073709551609UL;
    int32_t l_1815 = 0x1EF076E1L;
    int32_t *l_1826 = &l_1539;
    int16_t ***l_1857[1][7][1] = {{{&g_432},{&g_432},{&g_432},{&g_432},{&g_432},{&g_432},{&g_432}}};
    const uint8_t *l_1988[6][3][6] = {{{&l_1549,&g_787,(void*)0,&g_787,&g_787,&g_93},{(void*)0,(void*)0,&l_1549,&g_1603,&g_1603,&g_1887},{(void*)0,(void*)0,&l_1549,&g_1603,&g_787,&l_1549}},{{&g_794[1][2][0],(void*)0,&l_1549,&g_794[1][2][0],(void*)0,&g_1887},{&g_1603,&g_794[1][2][0],&l_1549,&g_794[1][2][0],&g_1603,&g_93},{&g_794[1][2][0],&g_1603,&g_93,&g_1603,&g_1603,&g_787}},{{(void*)0,&g_794[1][2][0],(void*)0,&g_1603,(void*)0,&g_787},{(void*)0,(void*)0,&g_93,&g_787,&g_787,&g_93},{(void*)0,(void*)0,&l_1549,&g_1603,&g_1603,&g_1887}},{{(void*)0,(void*)0,&l_1549,&g_1603,&g_787,&l_1549},{&g_794[1][2][0],(void*)0,&l_1549,&g_794[1][2][0],(void*)0,&g_1887},{&g_1603,&g_794[1][2][0],&l_1549,&g_794[1][2][0],&g_1603,&g_93}},{{&g_794[1][2][0],&g_1603,&g_93,&g_1603,&g_1603,&g_787},{(void*)0,&g_794[1][2][0],(void*)0,&g_1603,(void*)0,&g_787},{(void*)0,(void*)0,&g_93,&g_787,&g_787,&g_93}},{{(void*)0,(void*)0,&l_1549,&g_1603,&g_1603,&g_1887},{(void*)0,(void*)0,&l_1549,&g_1603,&g_787,&l_1549},{&g_794[1][2][0],(void*)0,&l_1549,&g_794[1][2][0],(void*)0,&g_1887}}};
    uint16_t ***l_2111 = &g_397;
    uint16_t ****l_2110 = &l_2111;
    uint8_t ***l_2118 = (void*)0;
    uint8_t ****l_2117 = &l_2118;
    uint16_t ****l_2162 = &l_2111;
    uint16_t *****l_2188[2];
    int64_t l_2215 = (-1L);
    union U1 **l_2303 = &l_1524;
    union U1 *** const l_2302 = &l_2303;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_1541[i][j] = 0x6845D31BL;
    }
    for (i = 0; i < 3; i++)
        l_1741[i] = &g_1683;
    for (i = 0; i < 2; i++)
        l_2188[i] = &l_2110;
    l_1202 = (safe_rshift_func_uint16_t_u_u(l_1201, 2));
    for (g_439 = 5; (g_439 >= 0); g_439 -= 1)
    { 
        int i;
        return g_583[g_439];
    }
    if ((~1UL))
    { 
        int16_t *l_1210 = &g_528;
        int32_t l_1228 = 2L;
        int32_t l_1233 = 1L;
        int32_t l_1237 = 0xEB653AADL;
        struct S0 *l_1242[7][6][6] = {{{&g_918,(void*)0,&g_125,(void*)0,&g_1149[0],&g_1149[0]},{(void*)0,&g_1149[0],&g_125,&g_1149[0],(void*)0,&g_125},{&g_918,&g_918,(void*)0,&g_125,&g_1149[0],(void*)0},{&g_125,&g_1149[0],&g_1149[0],&g_918,&g_918,(void*)0},{&g_125,(void*)0,(void*)0,(void*)0,&g_1149[0],&g_125},{&g_918,&g_1149[0],&g_125,&g_1149[0],(void*)0,&g_1149[0]}},{{&g_1149[0],&g_1149[0],&g_125,&g_918,(void*)0,&g_918},{&g_918,&g_1149[0],&g_125,&g_125,&g_1149[0],&g_1149[0]},{&g_918,&g_918,&g_1149[0],&g_918,&g_125,(void*)0},{&g_1149[0],(void*)0,&g_918,&g_1149[0],&g_918,(void*)0},{&g_918,&g_125,&g_125,(void*)0,&g_1149[0],&g_1149[0]},{&g_125,&g_918,&g_918,&g_918,(void*)0,&g_125}},{{&g_125,&g_918,&g_1149[0],&g_125,&g_1149[0],&g_918},{&g_918,&g_125,&g_1149[0],&g_1149[0],&g_918,&g_125},{(void*)0,&g_1149[0],&g_125,&g_918,(void*)0,&g_1149[0]},{&g_125,&g_918,&g_1149[0],&g_125,&g_1149[0],&g_1149[0]},{(void*)0,&g_1149[0],&g_1149[0],(void*)0,&g_918,&g_1149[0]},{&g_1149[0],(void*)0,&g_125,(void*)0,(void*)0,(void*)0}},{{&g_918,(void*)0,&g_918,&g_1149[0],&g_918,&g_918},{&g_918,&g_1149[0],&g_918,(void*)0,&g_125,&g_918},{&g_125,&g_125,&g_1149[0],(void*)0,&g_125,&g_1149[0]},{&g_918,&g_918,&g_1149[0],&g_1149[0],&g_918,&g_1149[0]},{&g_918,&g_125,&g_1149[0],(void*)0,&g_1149[0],(void*)0},{&g_1149[0],&g_918,&g_918,(void*)0,&g_918,(void*)0}},{{(void*)0,&g_1149[0],(void*)0,&g_125,&g_918,&g_918},{&g_125,&g_918,&g_1149[0],&g_918,&g_1149[0],&g_1149[0]},{&g_918,&g_125,(void*)0,&g_125,&g_918,&g_1149[0]},{&g_125,&g_918,&g_918,(void*)0,&g_125,&g_1149[0]},{&g_125,&g_125,&g_918,&g_918,&g_125,&g_1149[0]},{&g_125,&g_1149[0],&g_918,&g_1149[0],&g_918,&g_1149[0]}},{{&g_125,(void*)0,(void*)0,&g_1149[0],(void*)0,&g_1149[0]},{&g_1149[0],(void*)0,&g_1149[0],(void*)0,&g_918,&g_918},{&g_125,&g_1149[0],(void*)0,(void*)0,&g_1149[0],(void*)0},{&g_125,&g_918,&g_918,(void*)0,(void*)0,(void*)0},{&g_1149[0],&g_1149[0],&g_1149[0],&g_1149[0],&g_1149[0],&g_1149[0]},{&g_125,&g_125,&g_1149[0],&g_1149[0],&g_1149[0],&g_1149[0]}},{{&g_125,(void*)0,&g_1149[0],&g_918,&g_918,&g_918},{&g_125,(void*)0,&g_918,(void*)0,&g_1149[0],&g_918},{&g_125,&g_125,&g_918,&g_125,&g_1149[0],(void*)0},{&g_918,&g_1149[0],&g_125,&g_918,(void*)0,&g_1149[0]},{&g_125,&g_918,&g_1149[0],&g_125,&g_1149[0],&g_1149[0]},{(void*)0,&g_1149[0],&g_1149[0],(void*)0,&g_918,&g_1149[0]}}};
        const int8_t **l_1247 = (void*)0;
        uint8_t l_1260 = 0x0FL;
        const uint64_t l_1261[2] = {0UL,0UL};
        uint16_t * const **l_1326 = (void*)0;
        int8_t l_1403[7];
        int32_t l_1407 = 0L;
        int32_t l_1408 = 0x37BF9B27L;
        int16_t ***l_1412[3][5][3] = {{{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432}},{{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432}},{{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432},{&g_432,&g_432,&g_432}}};
        union U1 l_1461 = {0L};
        int32_t l_1552[4] = {1L,1L,1L,1L};
        int64_t l_1582 = 0xDD2968E2B964143FLL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1403[i] = 0L;
    }
    else
    { 
        int64_t l_1718 = 1L;
        int32_t l_1720 = 0xF9ABADE6L;
        int32_t l_1721 = (-8L);
        int32_t l_1723 = 0x161166BCL;
        int32_t l_1725 = 1L;
        int32_t l_1726 = 0x02DEC979L;
        int32_t l_1727 = 0x2D26E03AL;
        int32_t l_1728 = 0x054FE9F1L;
        int32_t l_1730 = 0xB234239BL;
        union U1 *l_1821 = &g_1822[5][0];
        uint32_t l_1825 = 4294967287UL;
        struct S0 l_1846 = {0x707F86DFL,18446744073709551612UL,-1L,213,1,0xD120L,0x82BCL};
        int16_t *l_1910 = &g_529;
        int16_t **l_1909[6] = {&l_1910,&l_1910,&l_1910,&l_1910,&l_1910,&l_1910};
        uint16_t l_1911 = 0x0B26L;
        union U1 l_1922[4] = {{0xB37DEBCCL},{0xB37DEBCCL},{0xB37DEBCCL},{0xB37DEBCCL}};
        uint32_t ***l_1923 = &l_1638;
        int32_t l_1928 = (-6L);
        int8_t ***l_1959 = &g_484;
        uint32_t l_2042 = 0x8B5860C2L;
        uint8_t ***l_2115 = &g_731;
        uint8_t ****l_2114 = &l_2115;
        uint32_t l_2163 = 0x9847D6A0L;
        int32_t l_2176 = 0L;
        int32_t *l_2196 = (void*)0;
        int64_t *****l_2202[2][6] = {{&g_1682[3],&g_1682[3],&g_1682[3],&g_1682[3],&g_1682[3],&g_1682[3]},{&g_1682[3],&g_1682[3],&g_1682[3],&g_1682[3],&g_1682[3],&g_1682[3]}};
        union U1 **l_2204 = (void*)0;
        union U1 ***l_2203 = &l_2204;
        uint16_t l_2291 = 65535UL;
        int16_t l_2315 = 0x0584L;
        uint32_t l_2329 = 18446744073709551615UL;
        int32_t *l_2330 = (void*)0;
        int32_t *l_2331 = &l_2176;
        int32_t *l_2332[6][4] = {{&g_89[2][0][2].f4,(void*)0,&l_1928,&l_1928},{&g_89[2][0][2].f4,&g_89[2][0][2].f4,&g_89[2][0][2].f4,&l_1928},{&g_1600,(void*)0,&g_1600,&g_89[2][0][2].f4},{&g_1600,&g_89[2][0][2].f4,&g_89[2][0][2].f4,&g_1600},{&g_89[2][0][2].f4,&g_89[2][0][2].f4,&l_1928,&g_89[2][0][2].f4},{&g_89[2][0][2].f4,(void*)0,&l_1928,&l_1928}};
        int32_t l_2333 = 0x4BEFEED4L;
        uint16_t l_2334[4];
        int i, j;
        for (i = 0; i < 4; i++)
            l_2334[i] = 65535UL;
        for (g_787 = 14; (g_787 == 14); ++g_787)
        { 
            int32_t *l_1719[2];
            int8_t l_1724 = (-8L);
            union U1 l_1740[3][4] = {{{-1L},{0xD4D4215BL},{0xD4D4215BL},{-1L}},{{0xD4D4215BL},{-1L},{0xD4D4215BL},{0xD4D4215BL}},{{-1L},{-1L},{5L},{-1L}}};
            int64_t *****l_1742 = (void*)0;
            int64_t *****l_1743 = &g_1682[5];
            struct S0 ***l_1746 = &g_886[1][0][2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1719[i] = &g_531;
        }
        (*g_1683) = (*g_1683);
        for (g_1602 = 0; (g_1602 <= 1); g_1602 += 1)
        { 
            int32_t l_1871 = 8L;
            int32_t l_1872 = 0x9C273AAAL;
            int32_t l_1873 = 7L;
            int32_t l_1885 = 0xA003BB85L;
            uint16_t ***l_1946 = &g_397;
            uint16_t **** const l_1945 = &l_1946;
            int16_t *****l_1967[3];
            int16_t **** const l_1969 = (void*)0;
            int16_t **** const *l_1968 = &l_1969;
            int32_t l_1987 = 0x92930E7FL;
            int8_t **l_2001[2][5][6] = {{{(void*)0,&g_485,&g_485,(void*)0,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{(void*)0,&g_485,&g_485,(void*)0,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485}},{{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{(void*)0,&g_485,&g_485,(void*)0,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{&g_485,&g_485,&g_485,&g_485,&g_485,&g_485},{(void*)0,&g_485,&g_485,(void*)0,&g_485,&g_485}}};
            int64_t l_2011[1][3][4] = {{{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)}}};
            struct S0 **l_2104 = &g_1652;
            uint8_t ****l_2119 = &l_2115;
            int32_t ***l_2126 = &g_47;
            int64_t l_2237[6] = {0x9BA4FBF224555370LL,0x9BA4FBF224555370LL,0x9BA4FBF224555370LL,0x9BA4FBF224555370LL,0x9BA4FBF224555370LL,0x9BA4FBF224555370LL};
            int32_t l_2242 = 0x6A013983L;
            int32_t l_2243 = 0xF95B1B59L;
            int32_t l_2245 = 0x374D22C2L;
            int32_t l_2246 = (-1L);
            int32_t l_2247 = 0xA765FA63L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1967[i] = &l_1334;
        }
        if (g_2256)
        { 
            uint32_t *l_2267[1][4][3] = {{{&g_2213.f0,&g_2213.f0,&g_2213.f0},{(void*)0,(void*)0,(void*)0},{&g_2213.f0,&g_2213.f0,&g_2213.f0},{(void*)0,(void*)0,(void*)0}}};
            uint64_t l_2268 = 0x38B2F43220139CD6LL;
            int32_t l_2304 = 1L;
            int i, j, k;
            for (g_413 = 6; (g_413 >= 2); g_413 -= 1)
            { 
                uint32_t l_2269[6];
                uint16_t ***l_2271 = &g_397;
                int32_t l_2273 = 0L;
                int i;
                for (i = 0; i < 6; i++)
                    l_2269[i] = 4294967290UL;
                for (l_1846.f5 = 6; (l_1846.f5 >= 0); l_1846.f5 -= 1)
                { 
                    union U1 ** const *l_2270[7] = {&l_2204,(void*)0,(void*)0,&l_2204,(void*)0,(void*)0,&l_2204};
                    uint8_t l_2272 = 249UL;
                    int8_t **l_2283 = &g_485;
                    int8_t *** const l_2282 = &l_2283;
                    int8_t *** const *l_2281[2][2][7] = {{{&l_2282,(void*)0,&l_2282,(void*)0,(void*)0,&l_2282,(void*)0},{&l_2282,&l_2282,&l_2282,&l_2282,&l_2282,&l_2282,&l_2282}},{{&l_2282,&l_2282,&l_2282,&l_2282,&l_2282,&l_2282,&l_2282},{&l_2282,&l_2282,&l_2282,&l_2282,&l_2282,&l_2282,&l_2282}}};
                    int8_t *** const **l_2280 = &l_2281[0][1][0];
                    int8_t ****l_2284[6];
                    uint8_t l_2289 = 255UL;
                    int32_t l_2290 = 7L;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_2284[i] = &g_2129;
                    (*g_269) = func_34(((l_2273 = (((((**g_484) ^ (safe_div_func_int8_t_s_s((((((p_10.f5 = (((g_89[2][0][2] , (((&l_2204 != ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_2267[0][3][2] == ((*g_1839) = func_34(l_2268, ((l_2269[4] = 0xBBL) , ((*g_47) = (*g_47)))))) | (****g_1947)), (*l_1826))), 4L)), p_10.f6)), (*g_485))) , l_2270[4])) , (void*)0) == &g_1682[3])) != p_10.f4) ^ 0xFDA0L)) ^ 65529UL) , l_2271) == (*l_2110)) > 0xB4L), l_2272))) && p_12) == 0x4387L) | (**g_731))) || l_2268), &l_1726);
                    if (l_2272)
                        continue;
                    (*l_1826) = ((-1L) > 0x7772EB00E3E9F94DLL);
                    p_11 |= (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((p_10.f4 & (((*l_2280) = &g_2129) == (p_10.f5 , (g_2285 = l_2284[1])))) , p_10.f3), (p_10.f5 , (((((safe_lshift_func_uint16_t_u_s(((((g_1545[g_413][g_413] = (((g_2288 > p_10.f3) & 0UL) <= 0UL)) >= p_10.f3) || (*g_732)) || l_2289), 9)) < p_10.f5) != g_1526[2][0].f0) , (*l_1826)) != l_2290)))) <= l_2291), 5)), l_2268)) ^ p_9) != l_2289);
                    (*g_269) = &p_11;
                }
                if ((*g_391))
                    break;
            }
            (*g_48) = (p_10.f1 & ((((**g_47) || (p_10.f4 = (safe_add_func_int64_t_s_s((l_2304 |= (safe_sub_func_uint8_t_u_u(((*l_1826) = (*g_732)), (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-1L), ((safe_add_func_int16_t_s_s(((l_2268 != 1L) , ((l_2302 == (void*)0) && p_8)), (****g_1947))) | p_10.f3))), 0x6C7CL))))), l_2268)))) != 0xFBC12303804DACE5LL) && g_716));
            (*g_269) = ((*g_47) = &l_1541[6][1]);
        }
        else
        { 
            int8_t *l_2316 = &g_1079;
            uint32_t *l_2317[3];
            union U1 l_2326 = {1L};
            int i;
            for (i = 0; i < 3; i++)
                l_2317[i] = &g_2213.f0;
            (*g_48) &= ((void*)0 == (**l_2115));
            p_11 ^= ((safe_mul_func_int16_t_s_s((p_10.f5 = p_10.f5), ((safe_mod_func_uint32_t_u_u((p_10.f0 = (safe_mul_func_int16_t_s_s((0xF2L && (((safe_mul_func_uint16_t_u_u(p_10.f3, ((safe_rshift_func_int16_t_s_u((((*g_1191) = 0x709F98C6L) == ((p_10.f1 , (l_2315 != ((**g_484) = (&p_9 != l_2316)))) & p_10.f0)), p_10.f1)) , p_10.f4))) || p_12) & (*l_1826))), 0L))), 6UL)) <= 0x10L))) != 0xFFA4L);
            (*g_48) ^= ((((***l_1959) = ((*l_1826) &= (p_10.f6 <= (p_10.f2 > (safe_rshift_func_int8_t_s_s((((**g_397) , (safe_lshift_func_uint16_t_u_u(((**g_484) < (g_83 || ((((--(*g_1191)) , l_2326) , (safe_mul_func_uint8_t_u_u(((&p_8 == &g_1080[1][0]) >= l_2329), 0xEFL))) , 0xD17FB0D570E9CAC2LL))), p_12))) <= p_9), (*g_485))))))) , p_10.f2) == (*g_391));
        }
        --l_2334[3];
    }
    return p_9;
}



static uint64_t  func_14(uint32_t  p_15, int16_t  p_16, int8_t  p_17)
{ 
    (*g_391) &= p_15;
    return p_16;
}



static struct S0  func_18(struct S0  p_19, int8_t  p_20, int32_t  p_21, const uint32_t  p_22)
{ 
    uint8_t l_946 = 9UL;
    uint16_t ** const *l_958 = &g_397;
    uint8_t ** const *l_968 = &g_731;
    uint8_t *** const l_986 = &g_731;
    uint8_t *** const *l_985 = &l_986;
    int32_t l_1007[1][5][2] = {{{0xC090127DL,0xDAF9C42FL},{0L,0L},{0xDAF9C42FL,0L},{0L,0xDAF9C42FL},{0xC090127DL,0xC090127DL}}};
    struct S0 **l_1015 = (void*)0;
    struct S0 **l_1016 = (void*)0;
    int16_t l_1045 = (-1L);
    uint64_t *l_1046 = &g_83;
    uint32_t *l_1047[6] = {&g_686,&g_125.f0,&g_125.f0,&g_686,&g_125.f0,&g_125.f0};
    int64_t *l_1089 = (void*)0;
    int32_t l_1128 = 0x7D691563L;
    struct S0 *l_1148[1][6];
    int32_t l_1175 = 0xD8205BB4L;
    uint32_t * const l_1188 = &g_1189;
    uint32_t * const *l_1187 = &l_1188;
    uint32_t * const **l_1186[7][6][3] = {{{(void*)0,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{(void*)0,&l_1187,(void*)0},{&l_1187,(void*)0,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,(void*)0,(void*)0}},{{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,(void*)0},{(void*)0,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187}},{{(void*)0,&l_1187,(void*)0},{&l_1187,(void*)0,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,(void*)0,(void*)0},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187}},{{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,(void*)0},{(void*)0,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{(void*)0,&l_1187,(void*)0},{&l_1187,(void*)0,&l_1187}},{{&l_1187,&l_1187,&l_1187},{&l_1187,(void*)0,(void*)0},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,(void*)0}},{{(void*)0,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{(void*)0,&l_1187,(void*)0},{&l_1187,(void*)0,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,(void*)0,(void*)0}},{{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187},{&l_1187,&l_1187,(void*)0},{(void*)0,&l_1187,&l_1187},{&l_1187,&l_1187,&l_1187}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1148[i][j] = &g_1149[0];
    }
    for (g_913 = 0; (g_913 <= 6); g_913 += 1)
    { 
        int32_t *l_916 = &g_89[2][0][2].f4;
        struct S0 *l_917 = &g_918;
        const int64_t l_943[5] = {0L,0L,0L,0L,0L};
        const uint16_t *l_966 = (void*)0;
        const uint16_t **l_965[3];
        const uint16_t ***l_964[3][5][1] = {{{&l_965[0]},{&l_965[2]},{&l_965[0]},{&l_965[2]},{&l_965[0]}},{{&l_965[0]},{&l_965[0]},{&l_965[2]},{&l_965[0]},{&l_965[2]}},{{&l_965[0]},{&l_965[0]},{&l_965[0]},{&l_965[2]},{&l_965[0]}}};
        int64_t l_1005[1][3];
        int32_t l_1010[6];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_965[i] = &l_966;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1005[i][j] = 0x5FCBFB2CE9396083LL;
        }
        for (i = 0; i < 6; i++)
            l_1010[i] = 0x2AD77321L;
        l_916 = &p_21;
        l_917 = &p_19;
        for (p_19.f0 = 0; (p_19.f0 <= 0); p_19.f0 += 1)
        { 
            int16_t **l_944 = (void*)0;
            uint16_t *l_945[1];
            int8_t **l_947 = &g_485;
            int32_t ** const *l_953[5] = {&g_47,&g_47,&g_47,&g_47,&g_47};
            uint16_t ** const **l_959 = &l_958;
            uint16_t ** const **l_960 = (void*)0;
            uint16_t ** const l_963[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t ** const *l_962 = &l_963[0];
            uint16_t ** const **l_961 = &l_962;
            const uint16_t ****l_967 = &l_964[0][1][0];
            uint8_t ** const **l_969 = &l_968;
            uint8_t ***l_983 = &g_731;
            uint8_t ****l_982[3][2][7] = {{{&l_983,&l_983,&l_983,&l_983,&l_983,&l_983,&l_983},{&l_983,&l_983,&l_983,&l_983,&l_983,&l_983,&l_983}},{{&l_983,&l_983,&l_983,&l_983,&l_983,&l_983,&l_983},{(void*)0,&l_983,(void*)0,&l_983,&l_983,(void*)0,&l_983}},{{&l_983,&l_983,&l_983,&l_983,&l_983,&l_983,&l_983},{(void*)0,&l_983,&l_983,(void*)0,&l_983,(void*)0,&l_983}}};
            uint32_t *l_1003 = &g_241[1];
            uint32_t **l_1002 = &l_1003;
            uint32_t ***l_1001[1][4] = {{&l_1002,&l_1002,&l_1002,&l_1002}};
            uint32_t l_1012 = 7UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_945[i] = &g_918.f6;
            (**g_47) ^= (g_685[p_19.f0] , (((p_20 >= (p_19.f3 < (((((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_19.f6, g_89[2][0][2].f0)), ((safe_rshift_func_uint16_t_u_u(((g_165[g_913][(p_19.f0 + 3)] = (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((*l_916) && (safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((((*l_916) = ((**g_397) ^= (safe_add_func_uint8_t_u_u((((+(safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_uint64_t_u(l_943[4])) == (*l_916)) > g_918.f3), (*l_916)))) , l_944) != (void*)0), 0xCFL)))) > p_19.f0), g_125.f2)), l_946))), (-5L))), 0xD0L)), 0x55F6C32A3E55DC9BLL))) || 0UL), 4)) > (-1L)))) ^ p_20) , (*l_916)) , l_947) != &g_485))) < (**g_731)) ^ (*g_732)));
            for (g_329 = 1; (g_329 >= 0); g_329 -= 1)
            { 
                const struct S0 l_950 = {8UL,18446744073709551613UL,0x4BD1CB4AL,-121,0,0xDFA6L,9UL};
                int i;
                (*g_391) = (safe_mul_func_uint16_t_u_u((l_950 , ((g_532[p_19.f0] <= (&g_269 == l_953[0])) == (0x686FL >= ((1L | ((safe_rshift_func_int16_t_s_u(g_45.f5, l_950.f6)) >= (-5L))) ^ (*g_732))))), (*g_398)));
            }
            (*g_391) = ((((*l_961) = ((*l_959) = l_958)) == ((*l_967) = l_964[0][1][0])) <= p_22);
            (*l_969) = l_968;
            for (p_20 = 1; (p_20 >= 0); p_20 -= 1)
            { 
                uint8_t *****l_984 = &l_982[2][0][4];
                int32_t l_987 = 9L;
                uint32_t ***l_1004 = &l_1002;
                int32_t l_1011[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1011[i] = 0xC3EC9E3EL;
                if ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((((safe_add_func_int16_t_s_s(0xDE22L, (safe_sub_func_uint32_t_u_u((((p_19.f5 ^ (p_19.f1 && 1UL)) & (*g_485)) & (safe_mul_func_uint8_t_u_u((((***g_268) && (((((safe_div_func_uint64_t_u_u((((*l_984) = l_982[1][1][2]) == l_985), (*l_916))) , 255UL) <= l_987) >= 0xF4L) < l_987)) <= l_987), 0x71L))), l_987)))) ^ (-3L)) & 18446744073709551610UL) == 8L), 13)), g_276)))
                { 
                    return p_19;
                }
                else
                { 
                    uint32_t ** const l_988 = (void*)0;
                    uint32_t *l_991 = &g_241[1];
                    uint32_t **l_990 = &l_991;
                    uint32_t ***l_989 = &l_990;
                    uint32_t *l_994[4][1][5] = {{{&g_686,(void*)0,(void*)0,&g_686,(void*)0}},{{&g_686,&g_686,&g_125.f0,&g_686,&g_686}},{{(void*)0,&g_686,(void*)0,(void*)0,&g_686}},{{&g_686,(void*)0,(void*)0,&g_686,(void*)0}}};
                    int32_t l_1006[5] = {0xE3183910L,0xE3183910L,0xE3183910L,0xE3183910L,0xE3183910L};
                    int i, j, k;
                    (*l_989) = l_988;
                    p_19.f3 = ((*g_391) = (0xDE63L == (((*l_916) = ((g_918.f0--) || 0x69510AC7L)) == (safe_rshift_func_int8_t_s_u(((((**g_47) = ((safe_lshift_func_uint8_t_u_s((l_1001[0][0] != l_1004), l_987)) || (++g_93))) >= p_20) != (p_19.f5 || 0x67D9L)), p_19.f0)))));
                }
                ++l_1012;
            }
        }
    }
lbl_1197:
    (**g_268) = func_34(((((p_19.f4 == (l_1015 == l_1016)) > (safe_add_func_uint32_t_u_u(l_1007[0][0][0], ((((safe_rshift_func_uint16_t_u_u((*g_398), (safe_mod_func_int32_t_s_s((*g_48), (*g_48))))) >= p_19.f5) != 0x7FDD9482L) == p_19.f1)))) > 0x79E5B64DL) , 0x49D85E9E89DA8054LL), (*g_47));
    if ((4294967295UL ^ ((g_686 = (safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((l_1007[0][2][0] < ((((*l_1046) &= (safe_lshift_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_s((((1L ^ (safe_mod_func_int16_t_s_s(g_474, ((***l_958) = (~(safe_sub_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(((((((((safe_unary_minus_func_uint8_t_u((((((((((((**g_484) = (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((p_19 , ((((((**g_484) > 0x89L) <= (*g_732)) == 0x5AA67A1BL) <= (*g_485)) != (*g_485))) >= (-9L)), p_19.f5)), 0x88BBL))) <= l_1007[0][0][1]) == (*g_48)) | l_946) && p_19.f1) ^ p_19.f3) & (**g_397)) >= 1UL) | l_1045) , p_19.f4))) && p_19.f4) , l_1007[0][2][0]) ^ (***g_268)) & p_19.f1) & l_946) | 0x809F3D0BL) & p_21), (**g_397))) , (-8L)), 1)) != 4294967293UL) , 0xD88F698344BBA11DLL), 1L))))))) & (**g_731)) & p_22), 1))))) > l_946) , l_1007[0][1][1])), g_414)) == p_21) >= l_946), 0x48E0L))) | g_125.f0)))
    { 
        struct S0 l_1050 = {4294967290UL,0UL,0x0650E161L,-245,1,-1L,0xB91CL};
        int32_t l_1073[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1073[i] = 0x809051E0L;
        for (g_125.f6 = 3; (g_125.f6 < 23); ++g_125.f6)
        { 
            uint16_t l_1060 = 0x01A6L;
            for (p_19.f5 = 1; (p_19.f5 >= 0); p_19.f5 -= 1)
            { 
                return l_1050;
            }
            if (((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((~((safe_mul_func_int16_t_s_s(l_1007[0][0][1], 0x46F4L)) , 0x9C74F21FL)), (p_19.f3 > l_1060))) & ((safe_div_func_int16_t_s_s(p_19.f0, (((safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(0x1C4E5A2622F210BCLL, 0x4A939D176647C278LL)), p_21)) >= g_463), 0xD48C107FDA307701LL)) <= p_21), 0x9524EBB9L)) | (**g_397)) && 1UL))) == 0xF1L)), (***g_268))) == p_19.f5))
            { 
                struct S0 l_1071[3] = {{5UL,0xEB9C64C7B86122C3LL,0xC0C62851L,-201,1,0x8A8EL,0x1DAAL},{5UL,0xEB9C64C7B86122C3LL,0xC0C62851L,-201,1,0x8A8EL,0x1DAAL},{5UL,0xEB9C64C7B86122C3LL,0xC0C62851L,-201,1,0x8A8EL,0x1DAAL}};
                int i;
                return l_1071[2];
            }
            else
            { 
                int32_t *l_1072[3][5][6] = {{{&g_54,&g_54,&l_1007[0][0][1],&g_89[2][0][2].f4,&g_531,&g_89[2][0][2].f4},{&g_54,&g_54,&g_54,&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1]},{&l_1007[0][0][1],&g_54,&g_54,&l_1007[0][0][1],&g_54,&g_89[2][0][2].f4},{&g_89[2][0][2].f4,&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1],&g_89[2][0][2].f4,&l_1007[0][0][1]},{&l_1007[0][0][1],&g_89[2][0][2].f4,&l_1007[0][0][1],&l_1007[0][0][1],&g_89[2][0][2].f4,&l_1007[0][0][1]}},{{&g_54,&l_1007[0][0][1],&g_54,&g_89[2][0][2].f4,&g_54,&l_1007[0][0][1]},{&g_54,&g_54,&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1]},{&g_54,&g_54,&l_1007[0][0][1],&g_89[2][0][2].f4,&g_531,&g_89[2][0][2].f4},{&g_54,&g_54,&g_54,&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1]},{&l_1007[0][0][1],&g_54,&g_54,&l_1007[0][0][1],&g_54,&g_89[2][0][2].f4}},{{&g_89[2][0][2].f4,&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1],&g_89[2][0][2].f4,&l_1007[0][0][1]},{&l_1007[0][0][1],&g_89[2][0][2].f4,&l_1007[0][0][1],&l_1007[0][0][1],&g_89[2][0][2].f4,&l_1007[0][0][1]},{&g_54,&l_1007[0][0][1],&g_54,&g_89[2][0][2].f4,&g_54,&l_1007[0][0][1]},{&g_54,&g_54,&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1]},{&g_54,&g_54,&l_1007[0][0][1],&g_89[2][0][2].f4,&g_531,&g_89[2][0][2].f4}}};
                int32_t l_1078 = 0x8E883D35L;
                int i, j, k;
                --g_1075;
                g_1080[1][0]++;
                if (p_19.f1)
                    continue;
            }
            return l_1050;
        }
    }
    else
    { 
        const uint32_t * const *l_1083 = (void*)0;
        int64_t *l_1084[4][1] = {{&g_715[4]},{&g_414},{&g_715[4]},{&g_414}};
        int32_t l_1088 = 0xB2F99A27L;
        int64_t **l_1099 = &l_1089;
        uint32_t l_1107 = 1UL;
        int16_t *** const l_1126 = &g_432;
        int32_t l_1137[3][7] = {{0x144BC16BL,0x144BC16BL,1L,1L,0x144BC16BL,0x144BC16BL,1L},{0xC77AFD70L,8L,0xC77AFD70L,8L,0xC77AFD70L,8L,0xC77AFD70L},{0x144BC16BL,1L,1L,0x144BC16BL,0x144BC16BL,1L,1L}};
        struct S0 ***l_1163 = &g_886[3][1][2];
        uint32_t *l_1166 = &g_913;
        uint32_t *l_1169[4];
        int i, j;
        for (i = 0; i < 4; i++)
            l_1169[i] = &g_241[0];
        if (((((((l_1007[0][4][0] = (l_1083 != l_1083)) & l_1045) | ((*g_398) && ((safe_mul_func_uint16_t_u_u((**g_397), (((safe_unary_minus_func_int64_t_s(((0x3A40F12AL != g_583[0]) < 1L))) || 1L) && l_1088))) , 0x9119L))) , l_1007[0][4][1]) , l_1089) != (void*)0))
        { 
            uint8_t l_1104 = 0UL;
            int32_t l_1129 = 0xE9B09A70L;
            int32_t l_1138 = 0x3952808DL;
            int32_t l_1139 = 0x071AE137L;
            p_21 = ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_19.f0, (safe_sub_func_int8_t_s_s((func_23(g_89[2][0][2]) , (((~((safe_add_func_int64_t_s_s(0xE3594F070191041BLL, ((l_1099 == &g_757) < (((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_1088, p_19.f1)), 3)) , p_20) < l_1104) , p_19.f4) , p_19.f5)))) > g_83)) >= l_1104) == g_686)), l_1007[0][0][1])))), 0x645016C1L)) & 0x0C80L);
            (*g_391) &= (**g_269);
            (*g_48) ^= (safe_rshift_func_int16_t_s_u(l_1107, l_1107));
            for (g_414 = 0; g_414 < 7; g_414 += 1)
            {
                for (g_33 = 0; g_33 < 2; g_33 += 1)
                {
                    for (g_686 = 0; g_686 < 4; g_686 += 1)
                    {
                        g_689[g_414][g_33][g_686] = 0xD6L;
                    }
                }
            }
            if ((safe_div_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((p_19.f2 & ((((+(**g_731)) < (g_532[0] < l_1107)) || ((*l_1046) &= ((void*)0 == &g_474))) ^ (**g_484))), g_474)) != p_22), l_1088)))
            { 
                int8_t l_1127 = 6L;
                int32_t l_1130 = 0xA38FA88DL;
                int32_t *l_1131 = &l_1129;
                int32_t *l_1132 = &l_1007[0][4][1];
                int32_t *l_1133 = &g_33;
                int32_t *l_1134 = &l_1007[0][0][1];
                int32_t *l_1135 = &l_1088;
                int32_t *l_1136[7] = {&l_1007[0][0][1],&l_1007[0][0][1],&l_1007[0][0][1],&l_1130,&l_1130,&l_1007[0][0][1],&l_1130};
                int i;
                l_1128 ^= ((p_19.f2 , ((safe_sub_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((((((safe_rshift_func_uint16_t_u_s(((~(((safe_add_func_int32_t_s_s(0xC6685C22L, 0L)) , l_1126) == ((func_23(g_89[2][0][2]) , l_1088) , l_1126))) && g_463), g_532[0])) == l_1007[0][0][1]) , 0x7BBDCC289337960ALL) <= 0x6D6E852F3EEC5BFDLL) >= p_19.f0) , 0xCA82L), 0x4FB8L)) , p_19.f5), l_1127)), g_918.f0)) , l_1107), (**g_484))) < p_19.f2)) || l_1045);
                g_1141[3][4][3]++;
            }
            else
            { 
                for (g_463 = 0; (g_463 != 27); ++g_463)
                { 
                    uint32_t l_1146 = 1UL;
                    struct S0 **l_1147[5][2][1] = {{{&g_887},{&g_887}},{{&g_887},{&g_887}},{{&g_887},{&g_887}},{{&g_887},{&g_887}},{{&g_887},{&g_887}}};
                    int i, j, k;
                    (**g_47) ^= 0L;
                    if (l_1146)
                        continue;
                    l_1148[0][2] = &p_19;
                }
                (*g_391) |= l_1104;
            }
        }
        else
        { 
            struct S0 l_1152 = {1UL,0xBBD1326171B6D452LL,0xFC30266CL,250,1,0x47B2L,0x3B56L};
            for (g_1074 = 0; (g_1074 > (-17)); g_1074--)
            { 
                (*g_269) = (*g_47);
            }
            return l_1152;
        }
        (*g_391) |= ((**g_269) >= (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((0UL != ((((*l_1163) = &g_887) != &l_1148[0][2]) && (&l_1089 != ((safe_rshift_func_int16_t_s_u(((l_1007[0][0][1] = (--(*l_1166))) , (+(safe_lshift_func_uint16_t_u_s(((((((safe_add_func_int64_t_s_s(p_21, 0x32EE3E05D8E752F0LL)) > 0xBAD6L) >= 18446744073709551612UL) , g_329) | p_22) , l_1175), p_19.f1)))), l_1045)) , &l_1089)))) > 0xC113D2F0L), l_1128)), l_1128)), 0UL)) , 0xC8L), 4)));
    }
    (*g_391) = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((g_1190 = (l_1007[0][0][1] , &l_1047[4])) != ((safe_rshift_func_uint16_t_u_s((**g_397), g_93)) , &g_1191)) ^ (((((void*)0 == l_1148[0][2]) >= g_1075) > p_19.f4) > 0x30L)), l_1128)), 0L)), (**g_397))), 0x1C9B7B75L)), p_19.f0));
    for (g_83 = 0; (g_83 != 5); ++g_83)
    { 
        if (p_19.f6)
            goto lbl_1197;
    }
    return (*g_887);
}



static struct S0  func_23(union U1  p_24)
{ 
    uint16_t l_31[1];
    int32_t *l_32[7] = {&g_33,&g_33,&g_33,&g_33,&g_33,&g_33,&g_33};
    int32_t *l_41 = &g_33;
    uint8_t *l_770 = &g_93;
    uint64_t *l_778 = &g_83;
    int16_t *l_780 = &g_75[2][0];
    int16_t **l_779 = &l_780;
    union U1 * const *l_816[4] = {&g_683,&g_683,&g_683,&g_683};
    struct S0 l_850 = {0x29EF448DL,0UL,-10L,27,1,0xF5BDL,6UL};
    uint64_t l_899[6] = {0x7A44E6C980254E12LL,0x7A44E6C980254E12LL,0x7A44E6C980254E12LL,0x7A44E6C980254E12LL,0x7A44E6C980254E12LL,0x7A44E6C980254E12LL};
    int i;
    for (i = 0; i < 1; i++)
        l_31[i] = 0x0580L;
    (*g_269) = func_26(l_31[0], l_32[1], &g_33, func_34((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((p_24.f2 , ((l_41 = &g_33) == (void*)0)), (safe_lshift_func_uint16_t_u_u(65527UL, 2)))), 4UL)), l_32[1]));
    for (g_83 = 0; (g_83 < 57); g_83 = safe_add_func_int64_t_s_s(g_83, 5))
    { 
        int32_t l_775 = (-8L);
        l_775 = (((*g_731) == l_770) < (p_24.f4 = (((safe_add_func_uint32_t_u_u((p_24.f0 || (safe_lshift_func_uint16_t_u_s(((g_89[2][0][2].f0 | l_775) , ((l_775 <= ((*g_391) ^= ((*g_48) &= (safe_mul_func_uint8_t_u_u(((g_529 , l_775) < (**g_484)), 0xF7L))))) ^ 0x204FL)), 9))), p_24.f2)) , &l_770) != (void*)0)));
    }
    for (g_329 = 0; (g_329 <= 6); g_329 += 1)
    { 
        uint8_t l_788 = 0x07L;
        int16_t ***l_789 = &l_779;
        union U1 **l_791[5];
        struct S0 l_805 = {0UL,18446744073709551606UL,0L,-218,1,0x1D05L,0xAC51L};
        int32_t *l_825 = &g_89[2][0][2].f4;
        uint32_t l_853 = 6UL;
        int64_t **l_862 = &g_757;
        int32_t l_880 = 7L;
        struct S0 *l_885 = &g_125;
        struct S0 **l_884[2];
        uint32_t l_910 = 0UL;
        int32_t l_911 = 0L;
        int i;
        for (i = 0; i < 5; i++)
            l_791[i] = &g_683;
        for (i = 0; i < 2; i++)
            l_884[i] = &l_885;
        for (g_463 = 0; (g_463 <= 6); g_463 += 1)
        { 
            int16_t ***l_781 = (void*)0;
            uint64_t *l_782 = &g_146;
            int32_t l_785 = 8L;
            uint8_t *l_786[4][1][3] = {{{&g_787,&g_787,&g_787}},{{(void*)0,&g_787,&g_787}},{{&g_787,&g_787,&g_787}},{{(void*)0,&g_787,&g_787}}};
            union U1 l_821 = {0xB575247BL};
            const uint8_t l_855 = 255UL;
            uint16_t l_881 = 0x7F6DL;
            struct S0 l_909[2] = {{0xF6D3CEA4L,0xC1761EE132435348LL,5L,-91,0,0xE05DL,0x337AL},{0xF6D3CEA4L,0xC1761EE132435348LL,5L,-91,0,0xE05DL,0x337AL}};
            int i, j, k;
            (*l_41) &= ((6UL >= ((**g_397) = ((((g_165[g_329][g_329] & (&g_47 == &g_47)) , l_778) != ((g_45.f3 != ((g_432 = l_779) == (void*)0)) , l_782)) < (**g_397)))) || (*g_398));
        }
    }
    return l_850;
}



static int32_t * func_26(uint32_t  p_27, int32_t * p_28, int32_t * p_29, int32_t * p_30)
{ 
    uint16_t l_73 = 6UL;
    int32_t l_86 = 0xD4BAF720L;
    int32_t l_138 = 0x2C83D21EL;
    struct S0 *l_180 = &g_125;
    int32_t **l_300 = &g_48;
    int32_t l_309 = 3L;
    int32_t l_310 = 0xBBF6FE1FL;
    int32_t l_350 = 0x9F0E9028L;
    int16_t **l_404 = (void*)0;
    int32_t l_438 = 0x8925916DL;
    int32_t l_441[2][7][7] = {{{0x4EF3FC44L,0xF6A44C2CL,0L,0x95E7EA1DL,0xAD938A76L,(-1L),0x95E7EA1DL},{(-7L),(-1L),0x39E3DA63L,0xF6A44C2CL,0x5FA6749FL,(-1L),0x4EF3FC44L},{(-1L),0xDE974F8DL,0x39E3DA63L,0x8FF8B27DL,6L,0x8FF8B27DL,0x39E3DA63L},{0x34D981D1L,0x34D981D1L,0L,(-1L),(-2L),(-1L),0x29DAE9C1L},{(-1L),0x5FA6749FL,(-1L),(-3L),(-1L),(-1L),0x34D981D1L},{(-1L),0xDE974F8DL,0x5FA6749FL,0x39E3DA63L,(-2L),0xE85FD5CDL,0xC07CC9AFL},{0xAD938A76L,0x29DAE9C1L,0x32574745L,0x34D981D1L,6L,0xEEEFE5E0L,0xAD938A76L}},{{(-1L),0xE85FD5CDL,0x6602CED3L,(-7L),0x5FA6749FL,(-1L),0xAD938A76L},{0x5FA6749FL,0xAD938A76L,(-1L),(-1L),0xAD938A76L,0x5FA6749FL,0xC07CC9AFL},{0x29DAE9C1L,(-3L),0x62D4CC2BL,(-1L),0x2EC69356L,(-2L),0x34D981D1L},{(-7L),0x8FF8B27DL,(-1L),0x2EC69356L,0x39E3DA63L,(-1L),0x29DAE9C1L},{(-9L),(-3L),0x5FA6749FL,0xE85FD5CDL,(-7L),(-1L),0x39E3DA63L},{0x95E7EA1DL,0xAD938A76L,(-1L),0x95E7EA1DL,0x2EC69356L,(-2L),0x4EF3FC44L},{0x4EF3FC44L,0xE85FD5CDL,0x8FF8B27DL,0x95E7EA1DL,(-1L),(-1L),0x95E7EA1DL}}};
    uint32_t l_443 = 4294967295UL;
    union U1 l_493 = {1L};
    int32_t l_502 = 0x8F8947E9L;
    uint16_t ***l_508 = (void*)0;
    int64_t l_530 = 0x1FEB4B3A25EF68E0LL;
    uint16_t l_551 = 8UL;
    int32_t l_758 = (-1L);
    uint8_t l_765 = 0x42L;
    int i, j, k;
    for (g_33 = 18; (g_33 <= 4); g_33--)
    { 
        uint32_t l_85[7];
        int32_t l_145 = (-1L);
        int32_t l_239[6][5] = {{9L,(-1L),9L,0xBF4834D8L,0xC330AEBBL},{0x2EF62936L,0L,0xC330AEBBL,0xBF4834D8L,9L},{0xC330AEBBL,(-10L),0L,0L,(-10L)},{(-10L),(-5L),0xC330AEBBL,9L,0L},{(-1L),(-5L),9L,0x50CD27CEL,0x2073866EL},{0x71CC039EL,(-10L),(-10L),0x71CC039EL,0x50CD27CEL}};
        int8_t *l_256 = (void*)0;
        uint64_t *l_279[4];
        uint8_t *l_282[1];
        uint64_t l_288 = 0UL;
        int32_t l_306[1][2];
        union U1 l_319 = {-1L};
        uint16_t l_352 = 65528UL;
        uint16_t l_415 = 0x8DE3L;
        int16_t l_440 = 0x9EF4L;
        uint64_t l_533 = 0xFC4E595396143396LL;
        struct S0 **l_547 = &l_180;
        uint16_t *l_552 = &g_125.f6;
        struct S0 l_582 = {0xBC3AD132L,1UL,0xA82DE674L,230,1,0xB256L,0xC547L};
        int16_t *l_601 = &l_440;
        int16_t **l_600 = &l_601;
        int32_t *l_603 = &g_89[2][0][2].f4;
        int32_t ***l_726 = &l_300;
        int32_t *l_761 = (void*)0;
        int32_t *l_762 = &l_138;
        int32_t *l_763 = &l_441[1][4][0];
        int32_t *l_764[5] = {&g_531,&g_531,&g_531,&g_531,&g_531};
        int i, j;
        for (i = 0; i < 7; i++)
            l_85[i] = 0x88E6FCACL;
        for (i = 0; i < 4; i++)
            l_279[i] = &g_146;
        for (i = 0; i < 1; i++)
            l_282[i] = &g_93;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_306[i][j] = (-1L);
        }
    }
    return p_29;
}



static int32_t * func_34(uint64_t  p_35, int32_t * p_36)
{ 
    if ((*p_36))
    { 
        const struct S0 **l_46 = &g_44[3];
        (*l_46) = g_44[4];
    }
    else
    { 
        int32_t ***l_49 = (void*)0;
        int32_t ***l_50 = (void*)0;
        int32_t ***l_51 = &g_47;
        (*l_51) = g_47;
    }
    return (*g_47);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_45.f4, "g_45.f4", print_hash_value);
    transparent_crc(g_45.f5, "g_45.f5", print_hash_value);
    transparent_crc(g_45.f6, "g_45.f6", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_89[i][j][k].f0, "g_89[i][j][k].f0", print_hash_value);
                transparent_crc(g_89[i][j][k].f1, "g_89[i][j][k].f1", print_hash_value);
                transparent_crc(g_89[i][j][k].f2, "g_89[i][j][k].f2", print_hash_value);
                transparent_crc(g_89[i][j][k].f4, "g_89[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f1, "g_125.f1", print_hash_value);
    transparent_crc(g_125.f2, "g_125.f2", print_hash_value);
    transparent_crc(g_125.f3, "g_125.f3", print_hash_value);
    transparent_crc(g_125.f4, "g_125.f4", print_hash_value);
    transparent_crc(g_125.f5, "g_125.f5", print_hash_value);
    transparent_crc(g_125.f6, "g_125.f6", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_165[i][j], "g_165[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_241[i], "g_241[i]", print_hash_value);

    }
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_532[i], "g_532[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_583[i], "g_583[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_685[i], "g_685[i]", print_hash_value);

    }
    transparent_crc(g_686, "g_686", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_689[i][j][k], "g_689[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_715[i], "g_715[i]", print_hash_value);

    }
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_794[i][j][k], "g_794[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_918.f0, "g_918.f0", print_hash_value);
    transparent_crc(g_918.f1, "g_918.f1", print_hash_value);
    transparent_crc(g_918.f2, "g_918.f2", print_hash_value);
    transparent_crc(g_918.f3, "g_918.f3", print_hash_value);
    transparent_crc(g_918.f4, "g_918.f4", print_hash_value);
    transparent_crc(g_918.f5, "g_918.f5", print_hash_value);
    transparent_crc(g_918.f6, "g_918.f6", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1080[i][j], "g_1080[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1140, "g_1140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1141[i][j][k], "g_1141[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1149[i].f0, "g_1149[i].f0", print_hash_value);
        transparent_crc(g_1149[i].f1, "g_1149[i].f1", print_hash_value);
        transparent_crc(g_1149[i].f2, "g_1149[i].f2", print_hash_value);
        transparent_crc(g_1149[i].f3, "g_1149[i].f3", print_hash_value);
        transparent_crc(g_1149[i].f4, "g_1149[i].f4", print_hash_value);
        transparent_crc(g_1149[i].f5, "g_1149[i].f5", print_hash_value);
        transparent_crc(g_1149[i].f6, "g_1149[i].f6", print_hash_value);

    }
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1409, "g_1409", print_hash_value);
    transparent_crc(g_1432, "g_1432", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1438[i], "g_1438[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1545[i][j], "g_1545[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1553, "g_1553", print_hash_value);
    transparent_crc(g_1554, "g_1554", print_hash_value);
    transparent_crc(g_1555, "g_1555", print_hash_value);
    transparent_crc(g_1599, "g_1599", print_hash_value);
    transparent_crc(g_1600, "g_1600", print_hash_value);
    transparent_crc(g_1601, "g_1601", print_hash_value);
    transparent_crc(g_1602, "g_1602", print_hash_value);
    transparent_crc(g_1603, "g_1603", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1662[i], "g_1662[i]", print_hash_value);

    }
    transparent_crc(g_1663, "g_1663", print_hash_value);
    transparent_crc(g_1664, "g_1664", print_hash_value);
    transparent_crc(g_1729, "g_1729", print_hash_value);
    transparent_crc(g_1731, "g_1731", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1822[i][j].f0, "g_1822[i][j].f0", print_hash_value);
            transparent_crc(g_1822[i][j].f1, "g_1822[i][j].f1", print_hash_value);
            transparent_crc(g_1822[i][j].f2, "g_1822[i][j].f2", print_hash_value);
            transparent_crc(g_1822[i][j].f4, "g_1822[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_1874, "g_1874", print_hash_value);
    transparent_crc(g_1875, "g_1875", print_hash_value);
    transparent_crc(g_1876, "g_1876", print_hash_value);
    transparent_crc(g_1883, "g_1883", print_hash_value);
    transparent_crc(g_1884, "g_1884", print_hash_value);
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1887, "g_1887", print_hash_value);
    transparent_crc(g_2035, "g_2035", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    transparent_crc(g_2177, "g_2177", print_hash_value);
    transparent_crc(g_2213.f0, "g_2213.f0", print_hash_value);
    transparent_crc(g_2213.f1, "g_2213.f1", print_hash_value);
    transparent_crc(g_2213.f2, "g_2213.f2", print_hash_value);
    transparent_crc(g_2213.f3, "g_2213.f3", print_hash_value);
    transparent_crc(g_2213.f4, "g_2213.f4", print_hash_value);
    transparent_crc(g_2213.f5, "g_2213.f5", print_hash_value);
    transparent_crc(g_2213.f6, "g_2213.f6", print_hash_value);
    transparent_crc(g_2248, "g_2248", print_hash_value);
    transparent_crc(g_2256, "g_2256", print_hash_value);
    transparent_crc(g_2288, "g_2288", print_hash_value);
    transparent_crc(g_2353, "g_2353", print_hash_value);
    transparent_crc(g_2381, "g_2381", print_hash_value);
    transparent_crc(g_2447, "g_2447", print_hash_value);
    transparent_crc(g_2504, "g_2504", print_hash_value);
    transparent_crc(g_2646, "g_2646", print_hash_value);
    transparent_crc(g_2650, "g_2650", print_hash_value);
    transparent_crc(g_2651, "g_2651", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
