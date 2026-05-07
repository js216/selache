// SPDX-License-Identifier: MIT
// cctest_csmith_6204bfc6.c --- cctest case csmith_6204bfc6 (csmith seed 1644478406)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd34ac599 */

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

// Options:   -s 1644478406 -o /tmp/csmith_gen_zi5kir2y/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const signed f1 : 14;
   uint64_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
};

struct S2 {
   const int64_t  f0;
   const uint8_t  f1;
   int32_t  f2;
};

union U3 {
   uint16_t  f0;
   const uint16_t  f1;
   const int32_t  f2;
   int16_t  f3;
   struct S1  f4;
};

union U4 {
   uint16_t  f0;
   uint64_t  f1;
   uint16_t  f2;
};


static int32_t g_3 = 0xE34B64B5L;
static int16_t g_20[4] = {0x6E74L,0x6E74L,0x6E74L,0x6E74L};
static struct S2 g_66 = {0L,255UL,0L};
static int32_t *g_105[7] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
static int32_t * const *g_104 = &g_105[1];
static int32_t **g_123 = &g_105[1];
static int32_t ***g_122 = &g_123;
static int8_t g_129 = 1L;
static union U3 g_130[5] = {{7UL},{7UL},{7UL},{7UL},{7UL}};
static uint8_t g_153 = 0UL;
static int8_t g_155 = 2L;
static struct S1 g_184 = {0x6FC58967L};
static struct S1 *g_183 = &g_184;
static union U4 g_190 = {65535UL};
static const union U3 **g_199 = (void*)0;
static struct S0 g_211 = {4294967295UL,12,18446744073709551615UL,0x1F489C56L};
static const int32_t g_219 = 0L;
static const int32_t *g_218[3] = {&g_219,&g_219,&g_219};
static int8_t g_220 = 0xF8L;
static uint16_t *g_290[5] = {&g_190.f0,&g_190.f0,&g_190.f0,&g_190.f0,&g_190.f0};
static int8_t *g_307[5] = {&g_220,&g_220,&g_220,&g_220,&g_220};
static int8_t **g_306 = &g_307[4];
static int8_t g_371 = (-1L);
static int64_t g_465 = 0xFFEF3958F571CFC4LL;
static int16_t g_488 = 0xC692L;
static uint64_t *g_509 = &g_211.f2;
static uint16_t g_521 = 0UL;
static uint32_t g_549 = 0xA7B17574L;
static int16_t g_563 = 0x37BAL;
static int8_t ***g_582 = (void*)0;
static struct S0 g_606 = {0xCEEAAF5AL,-42,0UL,0x3A2154D8L};
static struct S0 *g_605 = &g_606;
static struct S1 g_644[3] = {{5UL},{5UL},{5UL}};
static union U3 g_697 = {0xDABDL};
static union U3 *g_696 = &g_697;
static int16_t *g_713 = (void*)0;
static int32_t ****g_732 = (void*)0;
static const struct S1 g_917[2][7] = {{{2UL},{0x35E6D084L},{0x35E6D084L},{2UL},{0xFE7C4D24L},{2UL},{0x35E6D084L}},{{0UL},{0UL},{0x35E6D084L},{0x9A7A9DE8L},{0x35E6D084L},{0UL},{0UL}}};
static uint8_t g_923 = 0x42L;
static int64_t g_1035 = (-1L);
static const union U3 ***g_1076 = &g_199;
static const union U3 ****g_1075 = &g_1076;
static int32_t g_1155 = (-1L);
static struct S0 **g_1306 = &g_605;
static struct S0 ***g_1305 = &g_1306;
static uint16_t g_1391 = 0xB2ECL;
static uint64_t *g_1405[2] = {&g_211.f2,&g_211.f2};
static int8_t g_1572 = (-1L);
static struct S2 *g_1581 = &g_66;
static struct S2 **g_1580[1] = {&g_1581};
static union U3 **g_1587 = &g_696;
static union U3 ***g_1586 = &g_1587;
static int16_t g_1592[4][4][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
static union U4 *g_1595 = &g_190;
static const uint32_t g_1665 = 0xBDBC5B8BL;
static union U4 **g_1681[7] = {&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595};
static uint32_t *g_1692 = &g_549;
static uint32_t **g_1691 = &g_1692;
static uint32_t ***g_1690 = &g_1691;
static uint32_t g_1739 = 0x31E62564L;
static int8_t **g_1768 = (void*)0;
static uint32_t **g_1778 = &g_1692;
static uint16_t g_1883 = 0x5214L;
static int32_t g_1917 = 0x29A2A8DAL;
static union U3 ** const g_1928[3] = {&g_696,&g_696,&g_696};
static const uint16_t g_2028 = 0xF8CCL;
static int64_t g_2043 = 0xC2510FBBE25DC716LL;
static struct S0 g_2099 = {4294967294UL,53,0x8470ED99EA7EB8E1LL,3UL};
static uint32_t *g_2180 = (void*)0;
static uint32_t **g_2179 = &g_2180;
static uint32_t ***g_2178 = &g_2179;
static union U3 ****g_2296 = &g_1586;
static union U3 *****g_2295 = &g_2296;
static int32_t g_2331 = 0xA61C5B92L;
static int32_t *g_2330 = &g_2331;
static int32_t **g_2329[7][1][2] = {{{&g_2330,&g_2330}},{{&g_2330,&g_2330}},{{&g_2330,&g_2330}},{{&g_2330,&g_2330}},{{&g_2330,&g_2330}},{{&g_2330,&g_2330}},{{&g_2330,&g_2330}}};
static uint32_t g_2399 = 0UL;
static uint32_t g_2435 = 0x6F0153EAL;
static struct S1 **g_2488 = &g_183;
static int16_t g_2602 = 0x743CL;
static uint64_t ** const *g_2605 = (void*)0;
static uint64_t ** const **g_2604[2] = {&g_2605,&g_2605};
static uint64_t ** const ***g_2603[6][3] = {{(void*)0,&g_2604[1],&g_2604[1]},{&g_2604[1],&g_2604[1],(void*)0},{(void*)0,&g_2604[1],(void*)0},{&g_2604[1],&g_2604[1],(void*)0},{&g_2604[1],&g_2604[1],&g_2604[1]},{(void*)0,&g_2604[1],&g_2604[1]}};
static uint8_t g_2614[6] = {246UL,246UL,246UL,246UL,246UL,246UL};
static struct S2 ***g_2694 = &g_1580[0];
static struct S0 ****g_2714[1] = {(void*)0};
static struct S0 *****g_2713 = &g_2714[0];
static const int8_t *g_2892 = &g_1572;
static const int8_t **g_2891 = &g_2892;
static const int8_t ***g_2890 = &g_2891;
static const int8_t ****g_2889 = &g_2890;
static uint64_t **g_2906 = &g_509;
static const uint64_t *g_2908 = &g_606.f2;
static const uint64_t **g_2907[2] = {&g_2908,&g_2908};
static int32_t *g_2961[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static struct S0 g_3019 = {0x6BE1008AL,31,0x97A25E10F07BF3ECLL,2UL};
static int32_t g_3080 = 0x6C354F2CL;



static struct S2  func_1(void);
static int32_t  func_31(int32_t * p_32, uint32_t  p_33, int32_t * p_34, int8_t  p_35, union U3  p_36);
static union U3  func_42(int8_t  p_43, int32_t * p_44, int32_t  p_45);
static union U4  func_48(struct S0  p_49, uint64_t  p_50);
static uint8_t  func_54(int32_t * p_55);
static int32_t * func_56(int32_t * p_57, uint16_t  p_58, int32_t * p_59, uint16_t  p_60, int32_t * p_61);
static int32_t * func_62(struct S2  p_63, uint64_t  p_64, union U4  p_65);
static union U4  func_68(int64_t  p_69, const int32_t * p_70);




static struct S2  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t l_4 = 0L;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = (void*)0;
    uint8_t l_8 = 0x59L;
    int16_t l_11 = 0x04B0L;
    int32_t *l_12 = &l_4;
    int32_t *l_13 = &g_3;
    int32_t *l_14 = &g_3;
    int32_t *l_15 = &l_4;
    int32_t *l_16 = &g_3;
    int32_t *l_17 = &g_3;
    int32_t *l_18 = &l_4;
    int32_t *l_19[7][2] = {{&l_4,&g_3},{&l_4,&g_3},{&l_4,&g_3},{&l_4,&g_3},{&l_4,&g_3},{&l_4,&g_3},{&l_4,&g_3}};
    uint32_t l_21 = 3UL;
    int32_t l_28 = 1L;
    uint8_t l_2665 = 0xC6L;
    uint64_t l_2666 = 0x9414B95FDA5666F7LL;
    uint16_t l_2671 = 0xA8A0L;
    struct S1 l_2700 = {18446744073709551615UL};
    uint32_t l_2735 = 4294967295UL;
    int8_t l_2752 = 0x85L;
    struct S2 ****l_2777[3];
    int64_t l_2787 = 0xF2D374DCD0BBD49DLL;
    uint32_t **l_2832 = &g_2180;
    union U4 ***l_2859 = &g_1681[5];
    uint32_t l_2937 = 0xF4B41AF1L;
    int32_t l_2939 = 0x5C7E70C7L;
    int64_t l_2952 = 0xACA5808949F96CC0LL;
    int32_t l_2970 = 0L;
    uint8_t l_3006 = 0xADL;
    int32_t l_3084 = (-8L);
    int32_t l_3105 = 0xCE4134B6L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2777[i] = (void*)0;
    --l_8;
    l_21++;
    return (***g_2694);
}



static int32_t  func_31(int32_t * p_32, uint32_t  p_33, int32_t * p_34, int8_t  p_35, union U3  p_36)
{ 
    union U4 * const *l_2514 = &g_1595;
    union U4 **l_2515[5][6] = {{(void*)0,&g_1595,&g_1595,&g_1595,(void*)0,&g_1595},{&g_1595,(void*)0,&g_1595,&g_1595,(void*)0,&g_1595},{&g_1595,&g_1595,(void*)0,(void*)0,(void*)0,&g_1595},{(void*)0,&g_1595,&g_1595,&g_1595,&g_1595,&g_1595},{(void*)0,(void*)0,&g_1595,(void*)0,&g_1595,(void*)0}};
    int32_t l_2557 = (-6L);
    int32_t l_2558 = (-1L);
    int32_t l_2561 = 0xD3106C53L;
    int32_t l_2562[7][6] = {{0L,0xB4680648L,0x0F0792C5L,0x9DEE3ED9L,(-4L),0x9DEE3ED9L},{(-5L),0L,(-5L),0xBC9244F3L,0x894112B4L,0xB4680648L},{0xDB2F4A0AL,(-6L),0xB9B62E4EL,0xC526AD30L,0xF1C4A0FAL,0x894112B4L},{1L,0x9DEE3ED9L,0xBC9244F3L,0xC526AD30L,0xC526AD30L,0xBC9244F3L},{0xDB2F4A0AL,0xDB2F4A0AL,0L,0xBC9244F3L,0xB9B62E4EL,(-5L)},{(-5L),(-4L),0xDB2F4A0AL,0x9DEE3ED9L,(-6L),0L},{0L,(-5L),0xDB2F4A0AL,1L,0xDB2F4A0AL,(-5L)}};
    uint64_t ** const ***l_2606 = (void*)0;
    uint32_t ***l_2663 = &g_2179;
    uint32_t ****l_2664 = &l_2663;
    int i, j;
    if (((l_2514 = l_2514) != l_2515[1][2]))
    { 
        const int8_t l_2516[1] = {(-1L)};
        union U3 ***l_2523 = &g_1587;
        uint8_t l_2527 = 9UL;
        const int8_t *** const l_2542 = (void*)0;
        int32_t l_2547 = (-1L);
        int32_t l_2553[2][6][4] = {{{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL}},{{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL},{0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL,0xB0C91BBBL}}};
        struct S2 *l_2566[4][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_66,&g_66,&g_66,&g_66,&g_66}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_66,&g_66,&g_66,&g_66,&g_66}}};
        int i, j, k;
        for (g_2435 = 0; (g_2435 <= 3); g_2435 += 1)
        { 
            struct S0 l_2532 = {0xABA57A7EL,13,18446744073709551612UL,0x43566630L};
            uint16_t **l_2548 = &g_290[2];
            int32_t l_2552 = 0xE46E8BF0L;
            int32_t l_2554[2][4];
            int32_t l_2555[4][3][1] = {{{(-10L)},{0xC2A938EAL},{(-10L)}},{{0L},{0L},{(-10L)}},{{0xC2A938EAL},{(-10L)},{0L}},{{0L},{(-10L)},{0xC2A938EAL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_2554[i][j] = 0L;
            }
            for (g_606.f2 = 0; (g_606.f2 <= 1); g_606.f2 += 1)
            { 
                int32_t l_2556 = (-9L);
                int32_t l_2559 = 7L;
                int32_t l_2560 = 0xFCE1620AL;
                uint16_t l_2563 = 1UL;
                int i;
                for (g_1572 = 1; (g_1572 >= 0); g_1572 -= 1)
                { 
                    union U3 ***l_2531 = &g_1587;
                    union U3 ****l_2530 = &l_2531;
                    int i;
                    if (g_20[g_1572])
                        break;
                    if (l_2516[0])
                        continue;
                    g_644[g_606.f2] = g_644[(g_1572 + 1)];
                    (*p_34) ^= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((**g_306) = ((((0x8AB9211BL | ((safe_rshift_func_int16_t_s_u(p_36.f3, 5)) >= (((l_2523 = (**g_2295)) == ((*l_2530) = ((p_36.f3 != (safe_add_func_uint16_t_u_u(2UL, ((~l_2527) , ((safe_mod_func_uint8_t_u_u(((((((*g_509) = 18446744073709551615UL) & 1UL) && l_2516[0]) > 0x0F4C300DL) <= (-1L)), 5UL)) , 0x828CL))))) , (void*)0))) , g_563))) != 0xAE9A9C80L) || 65535UL) && (*p_32))), 3)), 3));
                    (*g_123) = (**g_122);
                }
                if (((l_2532 , g_20[(g_606.f2 + 1)]) >= (safe_div_func_uint64_t_u_u(((*g_509) |= (safe_unary_minus_func_int32_t_s(0xCDCC8699L))), (safe_sub_func_uint16_t_u_u(p_36.f0, 9UL))))))
                { 
                    int32_t *l_2549 = &g_66.f2;
                    int32_t *l_2550 = &g_66.f2;
                    int32_t *l_2551[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2551[i] = &g_3;
                    (***g_122) = (((((**g_306) = ((safe_rshift_func_uint8_t_u_u((((((-2L) & (((safe_mul_func_int8_t_s_s((l_2542 == &g_306), (((**g_1691) |= l_2516[0]) < (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_2547 = 1UL), 0x359DC185L)), 6L))))) , (void*)0) != l_2548)) , (***g_1690)) < g_20[(g_606.f2 + 1)]) < 0x5AL), p_36.f0)) | (**g_306))) && 0L) | p_33) == 9L);
                    --l_2563;
                    if ((**g_104))
                        break;
                    return g_20[(g_606.f2 + 1)];
                }
                else
                { 
                    return (***g_122);
                }
            }
            for (g_184.f0 = 0; (g_184.f0 <= 6); g_184.f0 += 1)
            { 
                uint64_t *l_2591 = &l_2532.f2;
                int i;
                if (g_20[g_2435])
                { 
                    struct S2 **l_2567 = &l_2566[2][0][4];
                    (*l_2567) = (p_36 , l_2566[2][0][4]);
                    (*g_2488) = (void*)0;
                    (**g_1305) = (**g_1305);
                    return l_2557;
                }
                else
                { 
                    uint64_t *l_2590 = &g_211.f2;
                    uint64_t **l_2592 = (void*)0;
                    int8_t ****l_2599 = &g_582;
                    int8_t *****l_2600 = &l_2599;
                    int32_t l_2601 = 0L;
                    (**g_123) = (safe_mod_func_int32_t_s_s(((1UL || ((((((safe_div_func_uint64_t_u_u((((safe_div_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((l_2555[0][2][0] , 0xD2F5L), (+(safe_sub_func_int32_t_s_s(((((safe_mod_func_uint64_t_u_u((((~((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_1405[0] = (l_2591 = l_2590)) == (void*)0), (safe_mod_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((((&g_582 != ((*l_2600) = l_2599)) & l_2547) | 0UL), 0x90DF656C0A4B4C90LL)) , l_2601), 0x06272A32L)))), l_2532.f1)) <= 4294967290UL)) | 3UL) < 5L), 1L)) < 0x88L) || l_2532.f2) > 0L), p_36.f0))))), g_371)) >= 0x13AD9F3FL), 0xEEL)) ^ (*g_509)) >= p_36.f1), p_33)) > 250UL) | 0xC1E1EDD02A2AD9D1LL) ^ l_2516[0]) && 255UL) > g_2602)) , (*p_34)), (*g_1692)));
                    return (*p_32);
                }
            }
            l_2606 = g_2603[1][1];
            if (l_2532.f1)
                continue;
        }
        return l_2562[2][4];
    }
    else
    { 
        union U4 ***l_2617 = &g_1681[3];
        int32_t l_2618[1][3];
        uint8_t *l_2639[1][5][6] = {{{&g_2614[1],&g_153,&g_2614[1],&g_153,(void*)0,&g_153},{&g_2614[1],&g_153,&g_2614[1],&g_923,(void*)0,(void*)0},{&g_2614[1],&g_153,&g_2614[1],&g_2614[1],&g_2614[1],&g_2614[1]},{&g_2614[1],&g_2614[1],&g_923,&g_2614[1],&g_153,&g_923},{&g_2614[1],&g_923,(void*)0,&g_923,(void*)0,&g_923}}};
        int16_t l_2650 = 0x2FA4L;
        int32_t l_2659 = 0xE4B74593L;
        uint32_t l_2660[3];
        int32_t l_2661 = 0x8624740AL;
        int32_t *l_2662[6][7] = {{(void*)0,&g_1917,&l_2557,&l_2557,&g_1917,&l_2557,&l_2557},{(void*)0,(void*)0,&g_1917,&l_2561,&l_2561,&g_1917,&l_2561},{(void*)0,&l_2557,&l_2557,(void*)0,&l_2557,(void*)0,(void*)0},{&l_2562[4][0],&l_2561,(void*)0,(void*)0,&l_2561,&l_2562[4][0],(void*)0},{&g_1917,(void*)0,&g_66.f2,&g_1917,&g_1917,&g_66.f2,(void*)0},{&l_2561,(void*)0,&l_2562[4][0],&l_2561,(void*)0,(void*)0,&l_2561}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2618[i][j] = (-1L);
        }
        for (i = 0; i < 3; i++)
            l_2660[i] = 4294967295UL;
        for (g_220 = 0; (g_220 == 12); g_220 = safe_add_func_int64_t_s_s(g_220, 4))
        { 
            uint32_t l_2613[3];
            int64_t *l_2619[5][1][4] = {{{&g_1035,&g_1035,&g_1035,&g_1035}},{{&g_1035,&g_1035,&g_1035,&g_1035}},{{&g_465,&g_1035,&g_2043,&g_1035}},{{&g_1035,&g_1035,&g_2043,&g_2043}},{{&g_465,&g_465,&g_1035,&g_2043}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2613[i] = 4294967295UL;
            l_2561 ^= ((*p_34) = (safe_lshift_func_int16_t_s_s((g_1592[2][0][1] = ((((**g_1691) ^= (((*g_509)++) ^ ((g_465 = (l_2613[0] , ((((g_2614[1] | p_35) && ((safe_sub_func_int16_t_s_s((p_36.f3 ^ g_2331), (l_2558 <= ((l_2617 == &g_1681[0]) && 0xA39201A879F88768LL)))) & 0x3B60L)) && l_2618[0][2]) == g_1592[2][0][1]))) ^ l_2562[2][4]))) != p_33) ^ p_35)), l_2562[2][4])));
            return l_2613[2];
        }
        if ((safe_rshift_func_int8_t_s_s(l_2561, ((l_2618[0][2] = (!(((safe_mod_func_int64_t_s_s((((safe_div_func_int8_t_s_s(0xA0L, ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(0x8675L, l_2618[0][2])), (!((((*g_1581) , l_2618[0][2]) <= (~(safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((((++(**g_1778)) , l_2557) , l_2562[4][3]) ^ 4UL), 0xE4L)), 1UL)))) < 0x080BE076L)))) | 0x8CECC0A7L))) || 3UL) , g_1391), 0x017AC22A4986D508LL)) || p_36.f1) & l_2618[0][2]))) != p_36.f3))))
        { 
            p_32 = (void*)0;
            return (*p_34);
        }
        else
        { 
            for (g_66.f2 = 20; (g_66.f2 <= 27); g_66.f2++)
            { 
                int32_t *****l_2642 = &g_732;
                (*l_2642) = &g_122;
            }
        }
        l_2561 |= (safe_rshift_func_int16_t_s_s(((l_2661 = ((((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((((l_2558 = (g_190.f2 && (((+(*p_34)) < ((l_2618[0][0] = (l_2618[0][0] ^ (((l_2650 || ((safe_lshift_func_int8_t_s_u(((&g_465 == ((safe_rshift_func_uint8_t_u_u(((l_2659 = (safe_div_func_int16_t_s_s(p_36.f1, (safe_lshift_func_int16_t_s_s((((*p_32) = 0xB43ED3F1L) & 0x68CB8E34L), p_36.f3))))) , 251UL), g_923)) , (void*)0)) & 0xD1D0FA7B70260D5BLL), g_917[1][5].f0)) < l_2660[0])) , (*g_509)) ^ l_2562[5][2]))) , g_219)) ^ l_2557))) & 0xBE6C9516L) && (-4L)), (**g_306))) && l_2659) <= (*g_1692)), l_2650)) < l_2650) , (void*)0) != &p_32)) , p_36.f3), l_2660[0]));
        l_2606 = &g_2604[1];
    }
    (***g_122) = (*p_32);
    (*l_2664) = l_2663;
    return l_2562[2][2];
}



static union U3  func_42(int8_t  p_43, int32_t * p_44, int32_t  p_45)
{ 
    union U4 l_2429 = {0x199AL};
    int32_t l_2433[6][4] = {{0x195351EAL,0xCF4C9D51L,0xB8926852L,0x195351EAL},{0xB8926852L,0x195351EAL,0L,0L},{0x208A4D0BL,0x208A4D0BL,1L,0x96F2B2D5L},{0x208A4D0BL,0xCF4C9D51L,0L,0x208A4D0BL},{0xB8926852L,0x96F2B2D5L,0xB8926852L,0L},{0x195351EAL,0x96F2B2D5L,1L,0x208A4D0BL}};
    struct S0 **l_2442 = &g_605;
    union U4 ***l_2444[1][1][3];
    int32_t *l_2453 = &l_2433[2][0];
    struct S2 **l_2476 = &g_1581;
    union U3 ***l_2494 = &g_1587;
    uint64_t **l_2509 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_2444[i][j][k] = &g_1681[6];
        }
    }
    if ((l_2429 , 8L))
    { 
        int32_t *l_2430 = &g_66.f2;
        int32_t *l_2431[2][5] = {{&g_1155,&g_1917,&g_1917,&g_1155,&g_1155},{&g_66.f2,&g_1155,&g_1155,&g_66.f2,&g_66.f2}};
        int16_t l_2432 = 0x1502L;
        int8_t l_2434 = 0x98L;
        int i, j;
        --g_2435;
    }
    else
    { 
        struct S1 l_2438 = {18446744073709551615UL};
        uint32_t **l_2441 = (void*)0;
        union U4 l_2443 = {65535UL};
        union U4 * const *l_2446 = &g_1595;
        union U4 * const **l_2445 = &l_2446;
        int64_t *l_2447 = &g_465;
        union U4 l_2464[1] = {{1UL}};
        uint8_t *l_2467 = &g_923;
        uint32_t l_2481 = 18446744073709551609UL;
        int32_t l_2500 = (-1L);
        int32_t l_2503[1];
        int64_t l_2504 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_2503[i] = 0x053C8659L;
lbl_2477:
        (*g_183) = l_2438;
        (**g_104) = (safe_add_func_uint64_t_u_u((l_2438.f0 , (((void*)0 != l_2441) >= ((7L != ((*g_1305) == l_2442)) , ((*l_2447) &= ((((((l_2443 , l_2444[0][0][2]) != l_2445) >= l_2443.f2) == 0xFBE8L) <= p_43) , 0x6482322006632790LL))))), g_130[2].f1));
        if (((void*)0 == &g_1580[0]))
        { 
            for (g_190.f0 = 0; (g_190.f0 == 4); g_190.f0 = safe_add_func_int64_t_s_s(g_190.f0, 1))
            { 
                for (p_45 = 0; (p_45 == 23); p_45 = safe_add_func_uint8_t_u_u(p_45, 7))
                { 
                    int32_t **l_2452[2];
                    struct S1 **l_2454[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2452[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_2454[i] = &g_183;
                    (*g_183) = (*g_183);
                    l_2453 = (*g_104);
                    g_183 = &l_2438;
                }
                if (l_2438.f0)
                    continue;
            }
        }
        else
        { 
            uint64_t *l_2459 = (void*)0;
            uint64_t *l_2460 = &l_2429.f1;
            uint64_t *l_2461 = &g_606.f2;
            uint8_t *l_2468 = &g_153;
            int32_t l_2475 = 9L;
            int16_t l_2478 = 0L;
            int32_t *l_2479 = &g_66.f2;
            int32_t *l_2480 = (void*)0;
            (*p_44) = ((safe_add_func_int64_t_s_s(((*l_2447) |= g_190.f2), ((((((*l_2461) |= (++(*g_509))) <= (safe_mul_func_int16_t_s_s(((((((((l_2464[0] = l_2464[0]) , g_697.f3) >= (safe_rshift_func_uint8_t_u_s(((l_2467 != l_2468) <= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x115CL, 15)), (safe_add_func_uint16_t_u_u(((((*l_2453) , 0x59CBL) > 0L) > p_45), l_2475))))), p_45))) , l_2475) | 0x18L) || 18446744073709551610UL) <= p_45) || p_43), l_2443.f0))) ^ 1UL) , l_2476) != l_2476))) != 0UL);
            if (g_606.f2)
                goto lbl_2477;
            ++l_2481;
        }
        for (g_606.f0 = 0; (g_606.f0 <= 0); g_606.f0 += 1)
        { 
            struct S1 **l_2486 = &g_183;
            struct S1 ***l_2487[6] = {&l_2486,&l_2486,&l_2486,&l_2486,&l_2486,&l_2486};
            int32_t l_2493[7][3] = {{(-10L),1L,0xDB7DDD75L},{(-5L),0xF1C9D5C3L,(-5L)},{(-5L),(-10L),0xF1C9D5C3L},{(-10L),(-5L),(-5L)},{0xF1C9D5C3L,(-5L),0xDB7DDD75L},{1L,(-10L),(-3L)},{0xF1C9D5C3L,0xF1C9D5C3L,(-3L)}};
            int32_t l_2495[1][3];
            uint16_t l_2506 = 65535UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2495[i][j] = 6L;
            }
            l_2495[0][1] |= (safe_add_func_uint64_t_u_u(((g_2488 = l_2486) != &g_183), ((safe_div_func_int16_t_s_s((l_2493[2][1] = (safe_mod_func_int32_t_s_s((*p_44), 0x74CD76DDL))), (p_43 || ((65531UL > (l_2494 == (void*)0)) , p_45)))) ^ (*p_44))));
            (***g_122) = (0xBFCDL <= 1UL);
            for (g_190.f0 = 0; (g_190.f0 <= 0); g_190.f0 += 1)
            { 
                union U3 *l_2496 = &g_130[2];
                int32_t l_2502 = 0xB316B24AL;
                int32_t l_2505 = 0xF43E6F80L;
                for (g_1035 = 0; (g_1035 <= 0); g_1035 += 1)
                { 
                    int32_t *l_2497 = (void*)0;
                    int32_t *l_2498 = &g_66.f2;
                    int32_t *l_2499 = &l_2493[2][1];
                    int32_t *l_2501[2][3] = {{&g_1917,&g_1917,&g_1917},{&l_2493[2][1],&l_2493[2][1],&l_2493[2][1]}};
                    int i, j;
                    (*g_1587) = l_2496;
                    --l_2506;
                    (**g_104) = ((void*)0 == l_2509);
                    (*l_2499) |= ((*p_44) = l_2505);
                }
                for (g_2099.f0 = 0; (g_2099.f0 <= 0); g_2099.f0 += 1)
                { 
                    (***g_122) = (p_45 == 0L);
                }
            }
        }
        p_44 = &l_2503[0];
    }
    l_2433[2][0] &= (safe_unary_minus_func_int8_t_s(((**g_306) = (((**g_123) = 0xBF9F2782L) != p_43))));
    return (***l_2494);
}



static union U4  func_48(struct S0  p_49, uint64_t  p_50)
{ 
    int16_t l_67 = 0x7E7FL;
    int32_t *l_1118 = &g_66.f2;
    uint16_t l_2282 = 65533UL;
    union U4 **l_2340[3][5] = {{&g_1595,(void*)0,&g_1595,&g_1595,&g_1595},{&g_1595,&g_1595,&g_1595,&g_1595,&g_1595},{(void*)0,&g_1595,&g_1595,(void*)0,&g_1595}};
    int8_t l_2375[1][6][1];
    struct S2 *l_2393[5][7] = {{&g_66,&g_66,&g_66,(void*)0,&g_66,&g_66,&g_66},{&g_66,(void*)0,&g_66,&g_66,&g_66,&g_66,(void*)0},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,(void*)0,&g_66,&g_66,(void*)0},{&g_66,(void*)0,&g_66,&g_66,&g_66,(void*)0,&g_66}};
    int32_t l_2408 = (-5L);
    int32_t l_2411 = 0x45482C23L;
    int32_t l_2413 = 0xC337B8D0L;
    int32_t l_2416[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
                l_2375[i][j][k] = 0x7AL;
        }
    }
    for (i = 0; i < 2; i++)
        l_2416[i] = 3L;
    return (*g_1595);
}



static uint8_t  func_54(int32_t * p_55)
{ 
    uint64_t l_1128 = 1UL;
    uint16_t *l_1130 = &g_521;
    uint8_t *l_1139 = &g_923;
    int32_t l_1140 = 0L;
    struct S2 l_1146 = {0L,0x3BL,1L};
    const int32_t **l_1170 = (void*)0;
    const int32_t ***l_1169[3];
    int64_t l_1200 = 8L;
    int32_t l_1202 = 0x3AB7CF7CL;
    int32_t l_1203 = 9L;
    struct S1 l_1212[3][1][1] = {{{{0UL}}},{{{0UL}}},{{{0UL}}}};
    union U3 *l_1234 = (void*)0;
    const union U3 *l_1236 = (void*)0;
    const union U3 **l_1235 = &l_1236;
    const union U3 *l_1237 = (void*)0;
    uint16_t l_1240 = 1UL;
    union U3 l_1245 = {0x6473L};
    union U4 l_1248 = {1UL};
    int8_t l_1253 = 0x58L;
    uint64_t l_1336 = 4UL;
    int8_t l_1413 = 0x53L;
    int16_t l_1426 = (-1L);
    int32_t l_1431[6] = {(-8L),1L,(-8L),(-8L),1L,(-8L)};
    uint64_t **l_1432 = &g_1405[0];
    uint64_t **l_1434 = &g_1405[0];
    int8_t l_1472 = 8L;
    int32_t l_1492 = 5L;
    int32_t l_1493 = 0x7C6BC5CAL;
    int32_t l_1495 = 0L;
    int32_t l_1497[4][3][2] = {{{0x82C849AEL,(-1L)},{(-1L),0x82C849AEL},{4L,4L}},{{4L,0x82C849AEL},{(-1L),(-1L)},{0x82C849AEL,(-1L)}},{{(-1L),0x82C849AEL},{4L,4L},{4L,0x82C849AEL}},{{(-1L),(-1L)},{0x82C849AEL,(-1L)},{(-1L),0x82C849AEL}}};
    int32_t l_1505[5] = {0x5DE482EAL,0x5DE482EAL,0x5DE482EAL,0x5DE482EAL,0x5DE482EAL};
    int64_t l_1514 = (-1L);
    uint64_t l_1562[6];
    int64_t l_1570[4][4] = {{0x9C342850B728FED3LL,1L,1L,0x9C342850B728FED3LL},{1L,0x9C342850B728FED3LL,1L,1L},{0x9C342850B728FED3LL,0x9C342850B728FED3LL,0x59BE452090F707F5LL,0x9C342850B728FED3LL},{0x9C342850B728FED3LL,1L,1L,0x9C342850B728FED3LL}};
    struct S2 **l_1583 = (void*)0;
    int64_t l_1624 = 0x22C4209C103443EFLL;
    int32_t l_1648 = 0xB6980842L;
    uint8_t l_1651 = 0x69L;
    uint32_t *l_1661 = &g_211.f3;
    int8_t **l_1763 = &g_307[1];
    int8_t **l_1767 = &g_307[2];
    int32_t **l_1782 = &g_105[2];
    struct S1 **l_1788 = &g_183;
    struct S1 ***l_1787 = &l_1788;
    struct S1 ****l_1786[4] = {&l_1787,&l_1787,&l_1787,&l_1787};
    struct S2 *l_1801 = (void*)0;
    int8_t l_1892 = 0x88L;
    union U4 *l_1926 = (void*)0;
    int32_t l_1930 = 0x520C9E7EL;
    int8_t l_1947 = (-1L);
    uint32_t ***l_1963 = &g_1778;
    uint16_t l_2003 = 0UL;
    uint8_t l_2051 = 3UL;
    int32_t ***l_2080 = &l_1782;
    uint64_t l_2083 = 0xEC364F94A26A6DA0LL;
    struct S0 *l_2098 = &g_2099;
    uint32_t l_2111 = 0x3C095B67L;
    uint32_t l_2127 = 2UL;
    int16_t l_2128 = 9L;
    uint32_t l_2167 = 4UL;
    uint32_t l_2183 = 18446744073709551615UL;
    uint32_t *l_2192 = (void*)0;
    uint64_t l_2198 = 0x9DA2498811EA0A7BLL;
    uint8_t l_2199 = 0x03L;
    int32_t l_2201 = 0x77971598L;
    const uint64_t *l_2206[2];
    const uint64_t **l_2205 = &l_2206[0];
    const uint64_t ***l_2204[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_2217 = 0xBD967F9DL;
    int16_t l_2231 = 5L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1169[i] = &l_1170;
    for (i = 0; i < 6; i++)
        l_1562[i] = 0x4DBD36BCAC8115C2LL;
    for (i = 0; i < 2; i++)
        l_2206[i] = &l_2198;
lbl_1231:
    if (((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u((l_1128 , l_1128), ((safe_unary_minus_func_uint16_t_u(((*l_1130) = l_1128))) , ((&g_153 != &g_923) && ((safe_rshift_func_uint16_t_u_s(((*l_1130) = (safe_sub_func_uint8_t_u_u(((*l_1139) |= ((((safe_add_func_uint32_t_u_u((0xD3BA7D74L & (safe_mod_func_uint8_t_u_u(((void*)0 == l_1130), 0xE2L))), l_1128)) != 0UL) || l_1128) , g_606.f2)), 0x32L))), 12)) == l_1128))))), l_1140)), g_371)), g_211.f2)) > l_1140))
    { 
        uint32_t l_1145[3];
        int32_t l_1151 = 1L;
        int64_t *l_1152 = &g_465;
        int32_t *l_1153 = (void*)0;
        int32_t *l_1154 = &g_1155;
        int8_t ***l_1186 = (void*)0;
        int32_t l_1199[4] = {(-4L),(-4L),(-4L),(-4L)};
        int i;
        for (i = 0; i < 3; i++)
            l_1145[i] = 0xC5260046L;
        (*l_1154) |= ((***g_122) = (((safe_mul_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((l_1145[2] &= (*g_509)), (-10L))), ((l_1146 , ((l_1128 , (*p_55)) != (safe_lshift_func_int8_t_s_u(0xE6L, 0)))) == ((*l_1152) |= (safe_sub_func_int16_t_s_s(((((l_1146.f1 < l_1140) || 1UL) > 7L) || 0x1D15L), l_1151)))))) , (void*)0) != &g_582));
        for (g_1035 = (-7); (g_1035 == 9); g_1035 = safe_add_func_uint64_t_u_u(g_1035, 8))
        { 
            const uint32_t l_1160 = 0xDF6EA927L;
            int32_t * const **l_1187 = (void*)0;
            int32_t l_1195 = (-1L);
            int32_t l_1196 = 0x98C992C9L;
            int32_t l_1197 = (-1L);
            int32_t l_1198 = 0x37BB2DB0L;
            int32_t l_1201 = 0L;
            struct S1 *l_1213 = &g_644[1];
            if ((**g_123))
            { 
                uint32_t *l_1161[7] = {&g_606.f3,&g_211.f0,&g_606.f3,&g_606.f3,&g_211.f0,&g_606.f3,&g_606.f3};
                int32_t l_1162[1];
                int32_t l_1165 = 0xF2EC0B4FL;
                int8_t * const *l_1184 = (void*)0;
                int8_t * const **l_1183 = &l_1184;
                int8_t * const ***l_1185 = &l_1183;
                uint16_t l_1204[2];
                int i;
                for (i = 0; i < 1; i++)
                    l_1162[i] = 0x86540B9EL;
                for (i = 0; i < 2; i++)
                    l_1204[i] = 5UL;
                (**g_123) = (((((safe_mod_func_uint16_t_u_u(((l_1160 | ((l_1162[0] = 0xE51A93C4L) < ((++(*l_1139)) <= l_1165))) & ((+(safe_add_func_int64_t_s_s((g_465 = (l_1169[0] != ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((+(+(((void*)0 == (*g_1076)) , (safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((l_1140 = ((((*l_1185) = l_1183) != l_1186) & (*l_1154))) > (-1L)) >= 0xF0E6ADDCL), (*l_1154))), 12)) , g_371) ^ 0x615E069225E25D5FLL), g_219))))), l_1165)), (*l_1154))) , l_1187))), 0x0847F02D052779E9LL))) <= l_1165)), (*l_1154))) , g_211.f1) != l_1165) == (**g_104)) > 0xB8B2EAD000690B2ALL);
                for (l_1128 = (-29); (l_1128 >= 5); l_1128 = safe_add_func_uint16_t_u_u(l_1128, 5))
                { 
                    if ((*p_55))
                        break;
                }
                for (g_606.f0 = 18; (g_606.f0 > 30); ++g_606.f0)
                { 
                    int32_t **l_1192[7] = {&l_1153,&l_1153,&l_1153,&l_1153,&l_1153,&l_1153,&l_1153};
                    int32_t **l_1193 = (void*)0;
                    int32_t **l_1194 = &l_1154;
                    int i;
                    (*l_1194) = (*g_104);
                    (**l_1194) ^= 0x72BD3639L;
                    l_1204[1]--;
                    if ((**l_1194))
                        continue;
                }
            }
            else
            { 
                union U3 l_1209 = {0UL};
                for (l_1198 = 0; (l_1198 != (-8)); l_1198 = safe_sub_func_int8_t_s_s(l_1198, 4))
                { 
                    if ((*p_55))
                        break;
                    if ((**g_123))
                        break;
                    (**g_122) = (*g_123);
                    (**g_104) = ((l_1209 , (safe_mod_func_int32_t_s_s(0x9D20A015L, (***g_122)))) == (*g_509));
                }
                (***g_122) ^= ((g_1155 ^ g_219) , ((void*)0 != l_1152));
            }
            (**g_104) = (*p_55);
            (*l_1213) = ((*g_183) = l_1212[2][0][0]);
        }
    }
    else
    { 
        int32_t l_1221 = 5L;
        uint8_t l_1228 = 5UL;
        int32_t *l_1230 = &g_1155;
        for (l_1140 = 0; (l_1140 <= 4); l_1140 += 1)
        { 
            struct S2 l_1216 = {-6L,0xECL,-8L};
            uint16_t **l_1224 = &g_290[l_1140];
            int32_t l_1229 = 0x95801AA7L;
            int i;
            (*g_123) = func_56(((safe_add_func_uint8_t_u_u(((l_1216 , ((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_1221, (safe_add_func_uint8_t_u_u((((**g_104) = ((((*l_1224) = (void*)0) == &g_521) , (!(safe_add_func_uint8_t_u_u((l_1228 && l_1216.f2), l_1216.f2))))) | 0x4A0CEC3BL), l_1216.f2)))) ^ l_1216.f0), l_1221)) , l_1216.f0)) <= l_1221), l_1229)) , l_1230), g_20[3], p_55, l_1216.f2, (*g_123));
            (*p_55) &= 0x46450FBFL;
            if (g_66.f2)
                goto lbl_1231;
            if ((**g_123))
                break;
        }
        l_1230 = ((*g_123) = &l_1140);
        (**g_122) = (void*)0;
    }
lbl_1256:
    (**g_122) = func_62(l_1146, ((*g_509) = (safe_add_func_int32_t_s_s((l_1234 == (l_1237 = ((*l_1235) = (void*)0))), (((safe_sub_func_uint64_t_u_u((*g_509), ((l_1240 , g_509) != (void*)0))) && g_3) > g_153)))), g_190);
    if ((safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((l_1245 , ((*g_509) = (safe_div_func_int32_t_s_s((l_1248 , (*p_55)), g_220)))), ((safe_mul_func_int16_t_s_s(g_66.f0, (safe_mod_func_int16_t_s_s(((void*)0 != &g_1075), l_1253)))) , g_20[0]))), g_563)))
    { 
        uint8_t l_1258 = 0x2FL;
        int32_t l_1266 = 0L;
        int32_t l_1267 = 0x3050F30DL;
        uint8_t l_1290 = 0UL;
        struct S0 ***l_1307 = &g_1306;
        int32_t l_1327 = 1L;
        int32_t l_1328 = 0x39C09398L;
        int32_t l_1333[7][5] = {{0L,0L,0L,0L,0L},{(-1L),1L,(-1L),1L,(-1L)},{0L,0L,0L,0L,0L},{(-1L),1L,(-1L),1L,(-1L)},{0L,0L,0L,0L,0L},{(-1L),1L,(-1L),1L,(-1L)},{0L,0L,0L,0L,0L}};
        struct S2 l_1362 = {0xCDD37D5C254323FBLL,4UL,5L};
        union U3 l_1378 = {0x7CB0L};
        uint8_t l_1390 = 0xA4L;
        int16_t *l_1427[3];
        uint16_t *l_1430[4] = {&g_1391,&g_1391,&g_1391,&g_1391};
        uint64_t ***l_1433[3];
        union U4 l_1654 = {0x98E1L};
        uint32_t **l_1662 = &l_1661;
        const uint32_t *l_1664 = &g_1665;
        const uint32_t **l_1663 = &l_1664;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1427[i] = &g_130[2].f3;
        for (i = 0; i < 3; i++)
            l_1433[i] = (void*)0;
        for (l_1248.f1 = 0; (l_1248.f1 <= 11); ++l_1248.f1)
        { 
            int32_t l_1262 = 0L;
            int32_t l_1264 = 5L;
            int32_t l_1265[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1265[i] = 0x51693AD4L;
            for (g_606.f2 = 0; (g_606.f2 <= 0); g_606.f2 += 1)
            { 
                uint32_t l_1257 = 3UL;
                int32_t l_1263 = 0x1D2D284BL;
                uint16_t l_1286[5][3][1] = {{{0x9B4DL},{0xDF8EL},{0x9B4DL}},{{4UL},{0x59F9L},{4UL}},{{0x9B4DL},{0xDF8EL},{0x9B4DL}},{{4UL},{0x59F9L},{4UL}},{{0x9B4DL},{0xDF8EL},{0x9B4DL}}};
                int16_t *l_1291 = (void*)0;
                struct S2 l_1298 = {1L,0xE0L,-1L};
                int i, j, k;
                if (g_606.f2)
                    goto lbl_1256;
                if (l_1257)
                    break;
                (*p_55) = l_1258;
                for (g_371 = 0; (g_371 <= 4); g_371 += 1)
                { 
                    int32_t *l_1259 = &l_1140;
                    int32_t *l_1260 = (void*)0;
                    int32_t *l_1261[2];
                    uint8_t l_1268 = 0UL;
                    int16_t *l_1289 = &g_563;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1261[i] = (void*)0;
                    l_1268--;
                    if ((*p_55))
                        continue;
                    l_1264 = ((((!(safe_add_func_int16_t_s_s((g_211.f1 , ((0x5145L & (((*g_509) = (0x63B4L && (safe_rshift_func_int8_t_s_s(l_1267, 5)))) > g_211.f3)) | (p_55 == ((*g_123) = (void*)0)))), l_1265[2]))) , (*l_1259)) > g_371) >= g_129);
                    (*l_1259) = ((7UL < ((safe_div_func_int16_t_s_s((((*l_1289) = ((l_1263 <= (l_1265[2] &= ((safe_mul_func_uint16_t_u_u((((l_1146 , (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_1286[3][1][0], ((-5L) ^ (safe_lshift_func_int16_t_s_s((((void*)0 != &l_1258) & 0xF54C77F0L), l_1257))))), l_1266))) , l_1286[3][0][0]) , l_1266), 0xBE68L)) && 0x8808L))) | 0x80D3L)) != l_1286[3][1][0]), l_1290)) > 0xAD362287C09F8AE0LL)) || l_1266);
                    if (l_1263)
                        break;
                }
                for (g_184.f0 = 0; (g_184.f0 <= 0); g_184.f0 += 1)
                { 
                    int16_t **l_1299[7][4] = {{&l_1291,&l_1291,&l_1291,&l_1291},{&l_1291,&l_1291,&l_1291,&l_1291},{&l_1291,&l_1291,&g_713,&l_1291},{&l_1291,&l_1291,&l_1291,&l_1291},{&l_1291,&l_1291,&l_1291,&l_1291},{&l_1291,&l_1291,&g_713,&l_1291},{&l_1291,&l_1291,&l_1291,&l_1291}};
                    int32_t *l_1300 = &g_3;
                    union U4 *l_1302 = &l_1248;
                    union U4 **l_1301 = &l_1302;
                    int i, j, k;
                    if ((*p_55))
                        break;
                    (*l_1300) = (l_1291 != (g_713 = ((safe_rshift_func_int8_t_s_u((l_1262 = (safe_mod_func_int16_t_s_s(l_1290, ((l_1212[(g_606.f2 + 2)][g_606.f2][g_184.f0] , (safe_add_func_uint16_t_u_u((l_1262 , (l_1298 , ((0xB98CCB6AL > ((*p_55) &= (g_66.f0 , l_1298.f2))) || (-2L)))), 1UL))) , 2L)))), l_1265[0])) , (void*)0)));
                    (*l_1301) = &l_1248;
                    if ((*p_55))
                        break;
                }
            }
        }
    }
    else
    { 
        union U4 **l_1678 = (void*)0;
        int32_t l_1686 = (-1L);
        int32_t l_1709 = 0xD404DACAL;
        int32_t l_1722 = 0x606A28FCL;
        int32_t l_1723 = 0x78DE135DL;
        int32_t l_1724 = 0x2F86A44DL;
        int32_t l_1725 = 0L;
        int32_t l_1726[5][3][3] = {{{3L,0x0AA4231EL,0x9C7821CCL},{0xBDD6D9C6L,0x045C2CD0L,0xFBF210A4L},{3L,0xF77D134EL,3L}},{{0xBDD6D9C6L,0x0C80A4F2L,0x20C2AF26L},{3L,0x7DEA995EL,0x800DA117L},{0xBDD6D9C6L,(-6L),0xBDD6D9C6L}},{{3L,0x0AA4231EL,0x9C7821CCL},{0xBDD6D9C6L,0x045C2CD0L,0xFBF210A4L},{3L,0xF77D134EL,3L}},{{0xBDD6D9C6L,0x0C80A4F2L,0x20C2AF26L},{3L,0x7DEA995EL,0x800DA117L},{0xBDD6D9C6L,(-6L),0xBDD6D9C6L}},{{3L,0x0AA4231EL,0x9C7821CCL},{0xBDD6D9C6L,0x045C2CD0L,0xFBF210A4L},{3L,0xF77D134EL,3L}}};
        uint32_t l_1727[2][7][6] = {{{18446744073709551615UL,0x4899E1D5L,0xBF0DFEECL,1UL,0UL,1UL},{0xAE66FA86L,0x4899E1D5L,0xAE66FA86L,1UL,0UL,0xBF0DFEECL},{0xBFE6DE2EL,0UL,0xAE66FA86L,0xBFE6DE2EL,0x4899E1D5L,1UL},{1UL,18446744073709551615UL,0xBF0DFEECL,0xBFE6DE2EL,0x81970837L,1UL},{0xBFE6DE2EL,0x81970837L,1UL,1UL,0x81970837L,0xBFE6DE2EL},{0xAE66FA86L,18446744073709551615UL,18446744073709551615UL,1UL,0x4899E1D5L,0xBFE6DE2EL},{18446744073709551615UL,0UL,1UL,0xBF0DFEECL,0UL,1UL}},{{18446744073709551615UL,0x4899E1D5L,0xBF0DFEECL,1UL,0UL,1UL},{0xAE66FA86L,0x4899E1D5L,0xAE66FA86L,1UL,0UL,0xBF0DFEECL},{0xBFE6DE2EL,0UL,0xAE66FA86L,0xBFE6DE2EL,0x4899E1D5L,1UL},{1UL,18446744073709551615UL,0xBF0DFEECL,0xBFE6DE2EL,0x81970837L,1UL},{0xBFE6DE2EL,0x81970837L,1UL,1UL,0x81970837L,0xBFE6DE2EL},{0xAE66FA86L,18446744073709551615UL,18446744073709551615UL,1UL,0x4899E1D5L,0xBFE6DE2EL},{18446744073709551615UL,0UL,1UL,0xBF0DFEECL,0UL,1UL}}};
        struct S1 l_1742 = {0x98142753L};
        struct S0 l_1748 = {4294967288UL,-55,0UL,0x183DAE63L};
        struct S1 **l_1750 = &g_183;
        struct S1 ***l_1785[4] = {&l_1750,&l_1750,&l_1750,&l_1750};
        struct S1 ****l_1784 = &l_1785[1];
        struct S1 l_1792 = {0x03799E94L};
        struct S2 **l_1809 = &l_1801;
        uint32_t *l_1822 = &g_606.f0;
        uint32_t *l_1828[5];
        uint32_t **l_1827[4][6][3] = {{{(void*)0,&l_1828[4],&l_1828[3]},{&l_1828[1],(void*)0,&l_1828[1]},{&l_1828[4],&l_1828[4],&l_1828[4]},{&l_1828[4],&l_1828[1],&l_1828[1]},{&l_1828[1],&l_1828[4],&l_1828[3]},{&l_1828[3],&l_1828[3],(void*)0}},{{(void*)0,&l_1828[4],(void*)0},{(void*)0,&l_1828[3],&l_1828[3]},{&l_1828[3],&l_1828[4],&l_1828[1]},{&l_1828[1],&l_1828[1],&l_1828[4]},{&l_1828[4],&l_1828[4],&l_1828[4]},{&l_1828[1],(void*)0,&l_1828[1]}},{{&l_1828[3],&l_1828[4],(void*)0},{(void*)0,&l_1828[4],&l_1828[4]},{(void*)0,&l_1828[3],(void*)0},{&l_1828[3],(void*)0,&l_1828[1]},{&l_1828[1],&l_1828[4],&l_1828[4]},{&l_1828[4],&l_1828[0],&l_1828[4]}},{{&l_1828[4],&l_1828[4],&l_1828[1]},{&l_1828[1],(void*)0,&l_1828[3]},{(void*)0,&l_1828[3],(void*)0},{&l_1828[4],&l_1828[4],(void*)0},{(void*)0,&l_1828[4],&l_1828[3]},{&l_1828[1],(void*)0,&l_1828[1]}}};
        uint64_t l_1845 = 0xC044E3AB744C0C12LL;
        uint16_t l_1918 = 0xC8A7L;
        uint32_t ***l_1962 = &g_1778;
        int16_t l_1974 = 0x51FFL;
        const int32_t ****l_2001 = &l_1169[0];
        const int32_t ***** const l_2000 = &l_2001;
        const uint64_t l_2025 = 18446744073709551610UL;
        int32_t ***l_2079 = &l_1782;
        union U3 l_2106[4][1] = {{{65535UL}},{{65535UL}},{{65535UL}},{{65535UL}}};
        int8_t *l_2116 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1828[i] = &g_1739;
        for (l_1245.f4.f0 = (-26); (l_1245.f4.f0 == 55); l_1245.f4.f0++)
        { 
            union U4 **l_1680 = (void*)0;
            union U4 ***l_1679[3];
            int32_t l_1682[3][6] = {{(-7L),9L,(-7L),9L,(-7L),9L},{0x17AE2CDCL,9L,0x17AE2CDCL,9L,0x17AE2CDCL,9L},{(-7L),9L,(-7L),9L,(-7L),9L}};
            int32_t l_1689[6];
            uint32_t *l_1696 = &g_606.f3;
            uint32_t ** const l_1695 = &l_1696;
            uint32_t ** const *l_1694 = &l_1695;
            uint32_t ** const **l_1693 = &l_1694;
            uint32_t ** const *l_1698[4][3];
            uint32_t ** const **l_1697 = &l_1698[2][0];
            int16_t l_1707 = 0x1233L;
            struct S1 **l_1740 = (void*)0;
            int16_t l_1743 = 0L;
            struct S2 l_1781 = {0x9D08E98D8D39069ELL,255UL,0x97D58037L};
            uint32_t *l_1819 = &g_644[0].f0;
            uint32_t **l_1818 = &l_1819;
            uint8_t l_1824 = 0x60L;
            int64_t *l_1875[5];
            int i, j;
            for (i = 0; i < 3; i++)
                l_1679[i] = &l_1680;
            for (i = 0; i < 6; i++)
                l_1689[i] = (-1L);
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1698[i][j] = &l_1695;
            }
            for (i = 0; i < 5; i++)
                l_1875[i] = &l_1570[3][3];
            (*p_55) = (((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((l_1212[2][0][0] , l_1678) == (g_1681[0] = &g_1595)), (l_1682[2][2] = 0xA2DFL))), ((((safe_unary_minus_func_int8_t_s((((safe_add_func_int16_t_s_s(l_1686, 0x7835L)) <= (safe_rshift_func_uint8_t_u_u(g_153, l_1686))) <= 4294967295UL))) , (*p_55)) , &l_1678) == &l_1680))) > l_1686), l_1686)) ^ l_1689[4]), l_1686)) & g_917[1][5].f0) >= l_1689[4]);
            if ((l_1689[4] != ((g_1665 >= (l_1682[2][2] && (g_488 == ((g_606.f2 , g_1690) == ((*l_1697) = ((*l_1693) = (void*)0)))))) && g_66.f1)))
            { 
                int32_t *l_1699 = &g_66.f2;
                int32_t *l_1700 = &l_1686;
                int32_t *l_1701 = &l_1492;
                int32_t *l_1702 = &l_1492;
                int32_t *l_1703 = (void*)0;
                int32_t *l_1704 = &l_1505[0];
                int32_t *l_1705 = &l_1686;
                int32_t *l_1706 = &g_1155;
                int32_t *l_1708 = &l_1495;
                int32_t *l_1710 = &g_3;
                int32_t *l_1711 = &g_66.f2;
                int32_t *l_1712 = (void*)0;
                int32_t *l_1713 = &l_1505[3];
                int32_t *l_1714 = &g_66.f2;
                int32_t *l_1715 = (void*)0;
                int32_t *l_1716 = (void*)0;
                int32_t *l_1717 = &l_1497[2][0][1];
                int32_t *l_1718 = &l_1505[0];
                int32_t *l_1719 = &l_1493;
                int32_t *l_1720 = &l_1709;
                int32_t *l_1721[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1721[i] = (void*)0;
                ++l_1727[1][6][2];
                if ((*p_55))
                    break;
                if ((*l_1705))
                { 
                    struct S1 l_1730 = {0x9C87A678L};
                    struct S1 ***l_1741 = &l_1740;
                    (*g_183) = l_1730;
                    (*l_1718) |= ((*l_1705) = (((*l_1130) = ((safe_mod_func_int32_t_s_s(((**g_1691) ^ (((safe_mul_func_int8_t_s_s((((((*l_1717) = (l_1724 | (-1L))) < (safe_lshift_func_int16_t_s_u(((**g_1306) , g_606.f2), l_1724))) ^ (safe_div_func_int8_t_s_s((l_1212[0][0][0] , 5L), l_1686))) || l_1723), l_1727[1][4][1])) >= (*l_1720)) , (*l_1702))), l_1722)) , 0UL)) > g_1739));
                    (*l_1741) = l_1740;
                    (*g_183) = l_1742;
                    (*l_1711) = 0x57E34C31L;
                }
                else
                { 
                    return l_1743;
                }
            }
            else
            { 
                struct S2 l_1749 = {0x3BCAF5BC635FC36DLL,1UL,0L};
                int8_t **l_1765[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1765[i] = &g_307[2];
                l_1726[4][2][0] &= ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((l_1748 , (l_1749 , ((((*g_183) , (&g_183 != ((((void*)0 == (*g_1306)) , 0xB4L) , l_1750))) , 0xD8BE96A5L) | 1UL))), 10)) < l_1723), 1UL)) <= l_1743);
                for (l_1413 = (-7); (l_1413 >= 8); l_1413 = safe_add_func_uint32_t_u_u(l_1413, 8))
                { 
                    int8_t ***l_1764 = (void*)0;
                    int8_t ***l_1766[4];
                    uint8_t *l_1769 = &g_153;
                    int32_t l_1772[5];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1766[i] = (void*)0;
                    for (i = 0; i < 5; i++)
                        l_1772[i] = (-1L);
                    l_1749.f2 = ((*p_55) = (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(1UL, (((*g_1581) , (safe_mul_func_uint8_t_u_u(((g_306 = l_1763) != (g_1768 = (l_1767 = l_1765[0]))), ((*l_1769) = ((*l_1139) = g_371))))) < (safe_rshift_func_uint8_t_u_u((((l_1726[4][2][0] != g_130[2].f3) > l_1727[1][6][2]) <= l_1749.f2), l_1749.f1))))) != (*p_55)), l_1772[4])) > (*g_509)), 5UL)), 0x53L)));
                    if ((*p_55))
                        break;
                }
            }
            for (g_697.f3 = 7; (g_697.f3 < 17); g_697.f3++)
            { 
                uint32_t ***l_1777 = (void*)0;
                uint32_t **l_1780[3];
                uint32_t ***l_1779 = &l_1780[0];
                int32_t *l_1783 = &l_1431[2];
                int32_t l_1789 = 0xD288E0DBL;
                struct S1 l_1791 = {0x25BEB639L};
                int32_t l_1795 = 0x555F27B0L;
                int32_t l_1796 = 0xF3266792L;
                struct S2 *l_1800 = &g_66;
                union U3 l_1802 = {1UL};
                union U4 ***l_1839 = &l_1680;
                int32_t l_1843[4];
                struct S0 l_1856 = {4294967286UL,-18,18446744073709551610UL,0x6EFD37DBL};
                int i;
                for (i = 0; i < 3; i++)
                    l_1780[i] = &g_1692;
                for (i = 0; i < 4; i++)
                    l_1843[i] = 0xC4C62A67L;
                if ((safe_div_func_int64_t_s_s(((((((*l_1779) = (g_1778 = ((*g_1690) = (*g_1690)))) != ((((*l_1696) = 0x6C821848L) < (l_1781 , (((*g_122) = l_1782) == ((((*l_1783) = 0x29704E1DL) , ((l_1784 = l_1784) != l_1786[1])) , (void*)0)))) , &g_1692)) && (-3L)) & (*p_55)) , 1L), l_1789)))
                { 
                    uint16_t l_1790 = 0x260DL;
                    l_1792 = ((**l_1750) = (l_1790 , l_1791));
                }
                else
                { 
                    int32_t *l_1793 = (void*)0;
                    int32_t *l_1794[2];
                    uint32_t l_1797 = 0x6D5305ECL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1794[i] = &l_1146.f2;
                    l_1797++;
                    l_1801 = l_1800;
                    p_55 = ((*l_1782) = l_1794[1]);
                }
                (**g_122) = ((((l_1689[0] = (l_1781.f2 && (((l_1802 , ((+l_1781.f2) == 0x8E16L)) > 0L) && (safe_mul_func_int8_t_s_s(l_1802.f0, (l_1781 , l_1802.f3)))))) < 0L) != 0xF2F4B3E1L) , (**g_122));
                for (l_1802.f0 = 0; (l_1802.f0 <= 1); l_1802.f0 += 1)
                { 
                    struct S2 **l_1808 = &l_1800;
                    uint32_t ***l_1820 = (void*)0;
                    uint32_t ***l_1821 = &l_1818;
                    int32_t l_1823 = (-6L);
                    int32_t *l_1838 = &l_1724;
                    if (l_1724)
                        break;
                    (*p_55) = (((safe_div_func_uint64_t_u_u((l_1808 == (l_1809 = l_1809)), (*g_509))) || (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((void*)0 != &g_307[4]) != (((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((*l_1821) = l_1818) != (((((**g_1690) = p_55) != l_1822) < (*g_509)) , &l_1819)), l_1781.f1)), l_1823)) & l_1823) != 5UL)), l_1726[4][2][2])), l_1823))) & l_1824);
                    if ((*p_55))
                        break;
                    (*l_1838) |= ((((*p_55) = ((l_1248 = l_1248) , (safe_mod_func_int64_t_s_s((((void*)0 == l_1827[2][2][1]) > (((safe_div_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s(((*g_696) , (((safe_rshift_func_int8_t_s_s((-1L), 7)) || (func_68((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((l_1781.f1 , l_1823) && 1UL))), 3)), p_55) , g_697.f0)) >= (-1L))), l_1748.f0)) >= g_606.f3), g_697.f0)) < l_1748.f3) != l_1723)), 0x2E62CC5AB7DF8CA8LL)))) < l_1726[1][1][2]) , 1L);
                }
                if (l_1686)
                { 
                    int32_t *l_1840 = &l_1497[3][2][1];
                    int32_t *l_1841 = &l_1726[2][2][0];
                    int32_t *l_1842[2][6][4] = {{{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709}},{{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709},{&l_1709,&l_1709,&l_1709,&l_1709}}};
                    int32_t l_1844 = 0x787623C2L;
                    struct S2 **l_1848[4] = {&l_1800,&l_1800,&l_1800,&l_1800};
                    struct S2 **l_1849 = &g_1581;
                    union U4 *l_1855 = (void*)0;
                    int i, j, k;
                    (*p_55) = ((void*)0 == l_1839);
                    --l_1845;
                    if ((*p_55))
                        break;
                    l_1202 |= (((*l_1130) = (l_1843[3] = (l_1848[1] == (l_1849 = l_1848[1])))) , (+(((((((1L == 0UL) , (((l_1791 , ((safe_mul_func_int8_t_s_s((0x9313L & (safe_lshift_func_int16_t_s_s(l_1726[4][2][0], l_1707))), 0L)) & (*l_1840))) , (**g_1778)) != (***g_1690))) <= 0UL) >= l_1725) , l_1855) != l_1855) > (*p_55))));
                    if ((*p_55))
                        break;
                }
                else
                { 
                    uint8_t l_1860 = 0x4AL;
                    struct S1 l_1861 = {7UL};
                    (**l_1750) = (*g_183);
                    (*p_55) &= (((l_1856 , (((safe_mul_func_uint16_t_u_u(((*l_1130) &= (!(l_1860 != l_1725))), l_1781.f1)) , l_1743) == 0x1F58AD49L)) & l_1682[0][5]) ^ 1UL);
                    (**l_1750) = l_1861;
                }
            }
            if (((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((g_153 = (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_1139) |= (0x4CE786EFD5C2219FLL < g_1155)), (safe_rshift_func_int16_t_s_u((l_1686 < (g_465 &= (l_1724 = g_549))), ((0xAFL <= ((l_1682[2][1] | (safe_unary_minus_func_uint16_t_u((safe_add_func_int64_t_s_s((((*p_55) = (g_190.f0 == 4UL)) , 0x8CCE8C155DDC35C2LL), g_184.f0))))) <= g_1739)) && l_1726[3][0][1]))))), l_1709)), 2))), l_1709)) & 18446744073709551615UL) , l_1707), l_1707)))) | l_1824))
            { 
                (*g_183) = (*g_183);
            }
            else
            { 
                int32_t *l_1879 = &l_1203;
                int32_t *l_1880 = &l_1709;
                int32_t *l_1881 = (void*)0;
                int32_t *l_1882[2][7] = {{&l_1493,&l_1493,&l_1493,&l_1493,&l_1493,&l_1493,&l_1493},{&l_1493,&l_1493,&l_1493,&l_1493,&l_1493,&l_1493,&l_1493}};
                int i, j;
                --g_1883;
            }
        }
        if ((((*g_509) , (**g_1305)) == &l_1748))
        { 
            return l_1748.f0;
        }
        else
        { 
            int32_t l_1901 = (-6L);
            int64_t *l_1902 = &l_1514;
            int64_t *l_1903 = &l_1570[3][1];
            union U3 l_1904[2] = {{0x59E3L},{0x59E3L}};
            int32_t l_1910 = 1L;
            int8_t l_1911 = 0xE4L;
            int32_t l_1912 = (-1L);
            int32_t l_1913 = (-6L);
            int32_t l_1914 = 8L;
            int32_t l_1915 = 0x9CA5D692L;
            int32_t l_1916[5] = {1L,1L,1L,1L,1L};
            struct S1 l_1921 = {0x1B2FF167L};
            union U4 *l_1924 = &g_190;
            const union U3 **l_1929[5] = {&l_1236,&l_1236,&l_1236,&l_1236,&l_1236};
            struct S0 ***l_1950[3][2][5] = {{{&g_1306,&g_1306,&g_1306,&g_1306,&g_1306},{&g_1306,&g_1306,&g_1306,(void*)0,(void*)0}},{{&g_1306,&g_1306,&g_1306,&g_1306,&g_1306},{&g_1306,&g_1306,&g_1306,&g_1306,&g_1306}},{{&g_1306,&g_1306,&g_1306,&g_1306,&g_1306},{&g_1306,(void*)0,&g_1306,&g_1306,&g_1306}}};
            uint16_t *l_1988[6][5][2] = {{{&g_1883,&g_521},{(void*)0,(void*)0},{&g_190.f2,(void*)0},{&g_190.f2,&g_190.f2},{&g_190.f2,(void*)0}},{{&g_190.f2,(void*)0},{(void*)0,&g_521},{&g_1883,(void*)0},{&g_190.f2,&g_190.f2},{&g_190.f2,&g_190.f0}},{{&g_1883,(void*)0},{&g_190.f0,(void*)0},{&g_1883,&g_190.f0},{&g_190.f2,&g_190.f2},{&g_190.f2,(void*)0}},{{&g_1883,&g_521},{(void*)0,(void*)0},{&g_190.f2,(void*)0},{&g_190.f2,&g_190.f2},{&g_190.f2,(void*)0}},{{&g_190.f2,(void*)0},{(void*)0,&g_521},{&g_1883,(void*)0},{&g_190.f2,&g_190.f2},{&g_190.f2,&g_190.f0}},{{&g_1883,(void*)0},{&g_190.f0,(void*)0},{&g_1883,&g_190.f0},{&g_190.f2,&g_190.f2},{&g_190.f2,(void*)0}}};
            uint16_t **l_2006 = (void*)0;
            int32_t *l_2052 = &l_1140;
            uint16_t l_2055 = 0xB623L;
            int32_t ***l_2078[3];
            uint8_t l_2129 = 250UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2078[i] = &g_123;
            if (((*p_55) = ((((((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_1892 , (-1L)), (((0x33L | (((((*g_509) = (((*l_1903) |= ((*l_1902) ^= ((safe_rshift_func_uint8_t_u_s((((0xAEA151C241C00EE5LL == ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_1739, (safe_lshift_func_uint16_t_u_u(65534UL, 11)))), (l_1901 & l_1901))) || l_1726[4][2][0])) ^ 0x894E4F8B16DCAE11LL) || g_20[3]), l_1748.f0)) , l_1742.f0))) || 0x55B231B9D4FB1B7CLL)) && g_66.f1) >= l_1901) && g_66.f2)) | l_1901) && l_1901))), 253UL)) ^ (**g_306)), 7)) ^ g_220) || 0L) , l_1904[0]) , (-9L)) > (-3L))))
            { 
                int32_t *l_1905 = &l_1497[2][0][1];
                int32_t *l_1906 = &l_1724;
                int32_t *l_1907 = &l_1495;
                int32_t *l_1908 = &l_1505[4];
                int32_t *l_1909[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1909[i] = (void*)0;
                l_1901 &= (*p_55);
                ++l_1918;
                (**l_1750) = l_1921;
lbl_1927:
                for (g_606.f2 = (-13); (g_606.f2 >= 16); ++g_606.f2)
                { 
                    union U4 **l_1925[7][6] = {{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924},{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924},{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924},{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924},{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924},{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924},{&l_1924,&l_1924,&l_1924,&l_1924,&l_1924,&l_1924}};
                    int i, j;
                    if ((*p_55))
                        break;
                    l_1926 = l_1924;
                    l_1686 &= (((***g_1586) , (l_1726[4][2][0] > (l_1727[1][6][2] >= ((((0xDC6DL | (l_1726[3][0][0] <= 0x3A58L)) & 9L) , &g_1681[0]) == (void*)0)))) , 0x90B754F7L);
                    if ((*p_55))
                        break;
                    if (g_66.f0)
                        goto lbl_1927;
                }
                return l_1916[1];
            }
            else
            { 
                struct S0 l_1942 = {6UL,92,0x60A04A6E773C6D03LL,4294967295UL};
                struct S0 ****l_1951 = &l_1950[2][1][3];
                struct S0 ***l_1952 = (void*)0;
                int32_t l_1961 = 0x6ACBAAF9L;
                union U4 l_1964 = {65527UL};
                const uint16_t l_1969 = 0x2196L;
                uint16_t l_1972[5] = {1UL,1UL,1UL,1UL,1UL};
                int16_t *l_1973[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                struct S1 l_1985 = {0x5F3DBFB0L};
                int32_t l_1991[7];
                uint16_t l_1992 = 0UL;
                int32_t *l_1996 = (void*)0;
                int64_t l_1997[6][4][4] = {{{(-9L),0x782D89162F72AB72LL,0x5D4E862FC6797EB7LL,(-1L)},{(-9L),0x5D4E862FC6797EB7LL,(-9L),1L},{0x782D89162F72AB72LL,(-1L),1L,1L},{0x5D4E862FC6797EB7LL,0x5D4E862FC6797EB7LL,0x3D9CBD564D65BDDFLL,(-1L)}},{{(-1L),0x782D89162F72AB72LL,0x3D9CBD564D65BDDFLL,0x782D89162F72AB72LL},{0x5D4E862FC6797EB7LL,(-9L),1L,0x3D9CBD564D65BDDFLL},{0x782D89162F72AB72LL,(-9L),(-9L),0x782D89162F72AB72LL},{(-9L),0x782D89162F72AB72LL,0x5D4E862FC6797EB7LL,(-1L)}},{{(-9L),0x5D4E862FC6797EB7LL,(-9L),1L},{0x782D89162F72AB72LL,(-1L),1L,1L},{0x5D4E862FC6797EB7LL,0x5D4E862FC6797EB7LL,0x3D9CBD564D65BDDFLL,(-1L)},{(-1L),0x782D89162F72AB72LL,0x3D9CBD564D65BDDFLL,0x782D89162F72AB72LL}},{{0x5D4E862FC6797EB7LL,(-9L),1L,0x3D9CBD564D65BDDFLL},{0x782D89162F72AB72LL,(-9L),(-9L),0x782D89162F72AB72LL},{(-9L),0x782D89162F72AB72LL,0x5D4E862FC6797EB7LL,(-1L)},{(-9L),0x5D4E862FC6797EB7LL,(-9L),1L}},{{0x782D89162F72AB72LL,(-1L),0x3D9CBD564D65BDDFLL,0x3D9CBD564D65BDDFLL},{0x3DC94C7A7A5B0685LL,0x3DC94C7A7A5B0685LL,0x5D4E862FC6797EB7LL,1L},{1L,(-9L),0x5D4E862FC6797EB7LL,(-9L)},{0x3DC94C7A7A5B0685LL,(-1L),0x3D9CBD564D65BDDFLL,0x5D4E862FC6797EB7LL}},{{(-9L),(-1L),(-1L),(-9L)},{(-1L),(-9L),0x3DC94C7A7A5B0685LL,1L},{(-1L),0x3DC94C7A7A5B0685LL,(-1L),0x3D9CBD564D65BDDFLL},{(-9L),1L,0x3D9CBD564D65BDDFLL,0x3D9CBD564D65BDDFLL}}};
                uint16_t l_1998 = 0x0ED5L;
                int8_t l_1999[6][1][3] = {{{1L,1L,(-5L)}},{{(-8L),(-4L),(-4L)}},{{0L,1L,0L}},{{0L,(-8L),1L}},{{(-8L),0L,0L}},{{1L,0L,(-4L)}}};
                union U3 l_2002[3][2] = {{{0x8166L},{0x8166L}},{{0x8166L},{0x8166L}},{{0x8166L},{0x8166L}}};
                uint16_t **l_2005 = &l_1988[1][3][0];
                uint16_t ***l_2004[1];
                int64_t l_2007[1];
                int16_t l_2008[5][5][3] = {{{0x833BL,6L,(-1L)},{8L,(-1L),0x7431L},{0xB264L,2L,0xF547L},{(-1L),(-1L),2L},{0x6D90L,6L,0x9817L}},{{0x6D90L,1L,0xB264L},{(-1L),0x7431L,6L},{0xB264L,0x6D90L,0xB264L},{8L,(-1L),0x9817L},{0x833BL,(-1L),2L}},{{0x7431L,0x6D90L,0xF547L},{1L,0x7431L,0x7431L},{0x7431L,1L,(-1L)},{0x833BL,6L,(-1L)},{8L,(-1L),0x7431L}},{{0xB264L,2L,0xF547L},{(-1L),(-1L),2L},{0x6D90L,6L,0x9817L},{0x6D90L,1L,0xB264L},{(-1L),0x7431L,6L}},{{0xB264L,0x6D90L,0xB264L},{8L,(-1L),0x9817L},{0x833BL,(-1L),2L},{0x7431L,0x6D90L,0xF547L},{1L,0x7431L,0x7431L}}};
                int32_t l_2082 = 0x138ACEBEL;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1991[i] = 0L;
                for (i = 0; i < 1; i++)
                    l_2004[i] = &l_2005;
                for (i = 0; i < 1; i++)
                    l_2007[i] = 0x04A053C6B8B75535LL;
                l_1930 = ((g_1928[2] != ((**g_1075) = l_1929[2])) != 0xE1D7B171L);
                if (g_211.f1)
                    goto lbl_1948;
                if ((((**l_1788) , (((((**l_1767) = 0x64L) , ((*g_509) , (safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((l_1916[1] = (**g_1691)) , (+(safe_mul_func_int16_t_s_s((l_1725 |= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_1942 , (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(((**l_1432) = 18446744073709551609UL), (func_68(g_211.f3, p_55) , 18446744073709551606UL))) ^ g_697.f1), l_1942.f0))) <= 65535UL) < l_1947), 0)) < l_1742.f0), 0L))), 0UL)))), 1UL)) || l_1921.f0), l_1942.f1)))) ^ 7L) == l_1904[0].f1)) ^ l_1914))
                { 
lbl_1948:
                    (*p_55) |= l_1942.f2;
                    l_1961 |= (((safe_unary_minus_func_int64_t_s((((*g_1581) , ((((*l_1951) = l_1950[2][1][1]) != (g_1305 = l_1952)) && ((*l_1139) = l_1727[1][6][2]))) <= (*g_509)))) >= (safe_lshift_func_int16_t_s_u((!g_488), ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((~l_1942.f3), l_1942.f1)), 0x7D47L)) || l_1942.f3)))) < 4UL);
                    l_1963 = l_1962;
                    (*p_55) = (l_1964 , (((safe_sub_func_int64_t_s_s((-1L), l_1748.f1)) , (l_1974 &= ((*g_509) && (safe_mod_func_int64_t_s_s(l_1969, ((*p_55) | (((safe_div_func_int8_t_s_s(((l_1972[4] && (-1L)) == l_1969), l_1942.f3)) && l_1904[0].f3) , 1UL))))))) || 0x690FL));
                    (*p_55) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((((l_2006 = ((g_1739 = ((safe_add_func_uint32_t_u_u(l_1910, (safe_sub_func_int32_t_s_s(((l_1985 , ((safe_mod_func_int32_t_s_s(((l_1130 = l_1988[1][3][0]) == ((((l_1992 |= (safe_sub_func_uint16_t_u_u(l_1991[1], 0xE52AL))) == (((~(((safe_sub_func_uint32_t_u_u(((((((g_1592[2][1][0] ^= (((l_1996 == (void*)0) != l_1997[0][0][1]) && l_1725)) ^ l_1998) || l_1999[2][0][2]) <= (*g_1692)) || (-1L)) && 0x74L), l_1709)) , 0x590FL) != l_1921.f0)) , l_2000) == (void*)0)) , l_2002[0][0]) , &g_1391)), (*p_55))) && (*g_509))) < 18446744073709551613UL), l_2003)))) ^ 0L)) , &g_290[3])) != (void*)0) != 1UL), l_2007[0])) < l_1942.f1), 5)), l_2008[0][1][0]));
                }
                else
                { 
                    int32_t *l_2009[1][1];
                    uint32_t l_2010 = 5UL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2009[i][j] = &l_1203;
                    }
                    --l_2010;
                }
                l_1961 |= (((*l_1903) = (((safe_add_func_uint32_t_u_u(0x85F0DF50L, (safe_sub_func_uint64_t_u_u(((**l_1432) = (safe_lshift_func_int8_t_s_s(0x18L, (((safe_sub_func_int8_t_s_s(((*g_1692) < (l_1904[0].f3 , ((l_1722 |= (l_1921.f0 & (safe_mod_func_uint32_t_u_u((**g_1778), (safe_div_func_int32_t_s_s(((1UL == l_1916[1]) && (-3L)), (**g_1778))))))) | l_1911))), g_697.f1)) != l_1913) > g_130[2].f0)))), l_1912)))) > l_2008[0][1][0]) < l_2025)) , 0xF11C792CL);
                if (((safe_mul_func_uint16_t_u_u((((l_1964 , (g_2028 , (safe_sub_func_int32_t_s_s((*p_55), 0x0C76EBB8L)))) | l_1916[1]) && g_371), ((safe_mul_func_uint8_t_u_u((((g_1592[2][0][1] = l_1916[3]) ^ l_2007[0]) < l_1904[0].f0), (**g_306))) , 0x21F1L))) , (*p_55)))
                { 
                    struct S1 ** const *l_2036[7] = {&l_1750,&l_1788,&l_1788,&l_1750,&l_1788,&l_1788,&l_1750};
                    struct S1 ** const **l_2037 = (void*)0;
                    struct S1 ** const **l_2038 = (void*)0;
                    struct S1 ** const **l_2039 = &l_2036[4];
                    int32_t l_2040 = 0x1A388042L;
                    int32_t l_2049 = (-10L);
                    int8_t *l_2050 = &g_371;
                    int32_t *l_2053 = (void*)0;
                    int32_t *l_2054[6][3][7] = {{{&l_1505[0],(void*)0,&l_1991[3],(void*)0,(void*)0,(void*)0,&l_1991[3]},{(void*)0,(void*)0,&l_1722,&l_1724,&l_1493,&l_1722,&l_1493},{&g_66.f2,&l_1991[3],&l_1991[3],&g_66.f2,(void*)0,&l_1505[0],&g_66.f2}},{{&l_1686,&l_1493,&g_1917,&g_1917,&l_1493,&l_1686,&l_1146.f2},{&g_1155,&g_66.f2,&l_1910,(void*)0,(void*)0,&l_1910,&g_66.f2},{&l_1493,&l_1146.f2,&l_1686,&l_1493,&g_1917,&g_1917,&l_1493}},{{&l_1505[0],&g_66.f2,&l_1505[0],(void*)0,&g_66.f2,&l_1991[3],&l_1991[3]},{&l_1724,&l_1493,&l_1722,&l_1493,&l_1724,&l_1722,&l_1686},{&l_1505[0],&l_1910,(void*)0,&l_1505[0],(void*)0,&l_1910,&l_1505[0]}},{{&g_66.f2,&l_1686,&l_1722,&l_1686,&l_1686,&l_1686,&l_1722},{&l_1505[0],&l_1505[0],(void*)0,&l_1991[3],(void*)0,(void*)0,(void*)0},{&l_1146.f2,&l_1722,&l_1722,&l_1146.f2,&l_1686,&g_66.f2,&l_1146.f2}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1910},{&g_1917,&l_1146.f2,(void*)0,&l_1686,&l_1686,(void*)0,&l_1146.f2},{(void*)0,&l_1910,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_66.f2,&l_1146.f2,&g_66.f2,&l_1686,&l_1146.f2,&l_1722,&l_1722},{&l_1991[3],(void*)0,(void*)0,(void*)0,&l_1991[3],(void*)0,&l_1505[0]},{&l_1686,&l_1722,&l_1686,&l_1686,&l_1686,&l_1722,&l_1686}}};
                    union U3 *l_2060 = &l_2002[1][1];
                    int32_t **l_2064 = &g_105[1];
                    int i, j, k;
                    l_1203 = ((safe_lshift_func_uint16_t_u_u((((***g_1690) = ((((safe_unary_minus_func_int8_t_s(((*l_2050) &= (((((l_2040 |= (((*l_2039) = l_2036[3]) != ((*l_1784) = (*l_1784)))) & ((safe_add_func_uint16_t_u_u(g_2043, 7UL)) == (++(*l_1661)))) == (l_1724 = l_1999[4][0][0])) < (!((((*l_1139)++) || (((g_563 , (l_2049 , 8L)) || l_1901) | 0xDAAB3A7AA134858CLL)) > l_1972[4]))) , (**g_306))))) ^ 4294967286UL) < l_2051) <= l_1916[0])) & l_1914), l_1904[0].f0)) , (*p_55));
                    (*g_123) = p_55;
                    l_2052 = (*g_123);
                    --l_2055;
                    (*l_2064) = ((safe_rshift_func_uint16_t_u_u((l_1911 || ((l_2060 != (*l_1235)) > (!(safe_lshift_func_int16_t_s_s((&g_582 != &g_582), g_190.f2))))), ((0L ^ 1UL) || (**g_306)))) , (*g_104));
                }
                else
                { 
                    uint32_t l_2071 = 0x937CCA1FL;
                    int16_t l_2081 = 7L;
                    int32_t l_2092 = 0x792342C4L;
                    union U4 l_2093 = {0xCBCEL};
                    (*g_123) = (p_55 = &l_1915);
                    l_2082 ^= ((*p_55) = (0x1CFFL == (((*l_2052) = (*p_55)) > ((((*l_1902) ^= (l_2071 ^= (safe_lshift_func_int16_t_s_u((g_488 = 0x2706L), 9)))) == ((safe_add_func_int32_t_s_s((g_130[2].f0 < ((safe_sub_func_uint8_t_u_u((((l_2079 = l_2078[0]) != (l_2080 = &g_123)) >= (l_2081 < (***g_1690))), l_2081)) >= 0L)), (*g_1692))) > 255UL)) != (*p_55)))));
                    (*l_1782) = func_62((*g_1581), (l_2083 , ((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((((safe_div_func_uint32_t_u_u(3UL, ((++(*l_1139)) ^ ((l_2092 = ((**l_1767) &= ((void*)0 == &l_1974))) & ((&g_1739 != &g_1739) > g_130[2].f3))))) != (*l_2052)) > g_130[2].f0), l_2071)), 5)) & l_2008[0][1][0])), l_2093);
                    (*l_2052) ^= (*p_55);
                }
            }
            for (l_1253 = (-22); (l_1253 > (-28)); l_1253 = safe_sub_func_uint8_t_u_u(l_1253, 5))
            { 
                for (l_1725 = 17; (l_1725 == 14); l_1725--)
                { 
                    (*p_55) |= (-5L);
                }
                if ((*p_55))
                    continue;
                l_2098 = (void*)0;
            }
            for (l_1921.f0 = 26; (l_1921.f0 == 35); l_1921.f0++)
            { 
                (*l_1782) = p_55;
                if ((*p_55))
                    continue;
                (*p_55) |= 1L;
            }
            (*p_55) = (safe_rshift_func_uint16_t_u_s(((((**g_306) |= (safe_mod_func_int16_t_s_s((l_2106[2][0] , (((((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(l_2111, (safe_mul_func_uint16_t_u_u((((((*g_1581) , (void*)0) != (l_2116 = (void*)0)) || (((*g_509)--) , 0UL)) < (safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((*g_1692), (*p_55))), g_2099.f3)), l_2106[2][0].f3)) && 0xAFL), (**g_1778)))), g_20[0])))), l_2127)) != 0xAE11L) , (**g_1778)) , (*g_1692)) < (*g_1692))), g_2043))) >= l_2128) ^ 0xB62EL), g_1592[2][0][1]));
            return l_2129;
        }
    }
    for (l_1336 = 0; (l_1336 >= 46); ++l_1336)
    { 
        int64_t l_2140 = 0x084DAEA480D8AAF4LL;
        int32_t *l_2169 = &l_1495;
        int32_t l_2187 = 0x90955184L;
        uint64_t ***l_2203 = (void*)0;
        struct S2 *l_2247 = &l_1146;
        const struct S1 *l_2278 = &g_917[1][5];
        const struct S1 **l_2277 = &l_2278;
        const struct S1 ***l_2276 = &l_2277;
        const struct S1 ****l_2275 = &l_2276;
        const struct S1 *****l_2274 = &l_2275;
    }
    return g_211.f1;
}



static int32_t * func_56(int32_t * p_57, uint16_t  p_58, int32_t * p_59, uint16_t  p_60, int32_t * p_61)
{ 
    int32_t *l_1119 = &g_66.f2;
    (*g_183) = (*g_183);
    return l_1119;
}



static int32_t * func_62(struct S2  p_63, uint64_t  p_64, union U4  p_65)
{ 
    uint32_t l_592 = 4294967288UL;
    union U4 *l_599 = &g_190;
    union U3 l_634 = {0UL};
    int32_t l_683 = 0xF53AB00DL;
    uint64_t l_686 = 0UL;
    struct S1 l_689[5] = {{3UL},{3UL},{3UL},{3UL},{3UL}};
    int8_t *** const *l_733 = (void*)0;
    uint32_t *l_750 = &l_689[4].f0;
    int32_t l_765 = 0x16514123L;
    int32_t l_770 = 0xDF104A81L;
    int32_t l_771 = (-6L);
    int32_t l_772 = (-1L);
    int32_t l_773[2];
    const struct S0 *l_795 = &g_606;
    int8_t l_803 = 0xD8L;
    int8_t l_828 = 0xA6L;
    int16_t *l_829 = &g_563;
    int16_t l_830 = (-3L);
    struct S1 l_833 = {0xB50C1980L};
    union U3 *l_936 = (void*)0;
    uint8_t l_942 = 0UL;
    int32_t l_957 = 0L;
    int64_t l_977[7] = {0xD2996405C7A24D0BLL,0xD2996405C7A24D0BLL,0xD2996405C7A24D0BLL,0xD2996405C7A24D0BLL,0xD2996405C7A24D0BLL,0xD2996405C7A24D0BLL,0xD2996405C7A24D0BLL};
    uint8_t l_989 = 0x91L;
    int32_t *l_1001 = &l_771;
    struct S1 **l_1026 = &g_183;
    struct S1 **l_1027 = &g_183;
    int32_t *****l_1080 = &g_732;
    int i;
    for (i = 0; i < 2; i++)
        l_773[i] = 2L;
    return (**g_122);
}



static union U4  func_68(int64_t  p_69, const int32_t * p_70)
{ 
    int32_t * const l_87[4] = {&g_3,&g_3,&g_3,&g_3};
    const int32_t *l_95 = &g_3;
    const int32_t **l_94 = &l_95;
    int32_t **l_98 = (void*)0;
    uint32_t l_113 = 4294967295UL;
    struct S1 l_131[5] = {{0x4501C69FL},{0x4501C69FL},{0x4501C69FL},{0x4501C69FL},{0x4501C69FL}};
    union U4 l_156 = {0xE77BL};
    const struct S0 l_180[3][7][2] = {{{{4294967295UL,-48,0xD185158CC5C9A551LL,0x06FF4735L},{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL}},{{4294967295UL,97,1UL,0UL},{0x624F74BFL,115,18446744073709551615UL,4294967292UL}},{{4294967295UL,97,1UL,0UL},{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL}},{{4294967295UL,-48,0xD185158CC5C9A551LL,0x06FF4735L},{0x6A68AF11L,110,18446744073709551609UL,6UL}},{{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL},{1UL,120,18446744073709551608UL,0xEA09826EL}},{{0UL,25,0xBCA4C7201BE58EEBLL,0xF8241A34L},{4294967295UL,97,1UL,0UL}},{{0xAC48BB85L,45,0xBF38B4BADC3C1F5FLL,0x232DB0CEL},{0x6A68AF11L,110,18446744073709551609UL,6UL}}},{{{0x6A68AF11L,110,18446744073709551609UL,6UL},{0xAC48BB85L,45,0xBF38B4BADC3C1F5FLL,0x232DB0CEL}},{{4294967295UL,97,1UL,0UL},{0UL,25,0xBCA4C7201BE58EEBLL,0xF8241A34L}},{{1UL,120,18446744073709551608UL,0xEA09826EL},{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL}},{{0x6A68AF11L,110,18446744073709551609UL,6UL},{4294967295UL,-48,0xD185158CC5C9A551LL,0x06FF4735L}},{{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL},{4294967295UL,97,1UL,0UL}},{{0x624F74BFL,115,18446744073709551615UL,4294967292UL},{4294967295UL,97,1UL,0UL}},{{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL},{4294967295UL,-48,0xD185158CC5C9A551LL,0x06FF4735L}}},{{{0x6A68AF11L,110,18446744073709551609UL,6UL},{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL}},{{1UL,120,18446744073709551608UL,0xEA09826EL},{0UL,25,0xBCA4C7201BE58EEBLL,0xF8241A34L}},{{4294967295UL,97,1UL,0UL},{0xAC48BB85L,45,0xBF38B4BADC3C1F5FLL,0x232DB0CEL}},{{0x6A68AF11L,110,18446744073709551609UL,6UL},{0x6A68AF11L,110,18446744073709551609UL,6UL}},{{0xAC48BB85L,45,0xBF38B4BADC3C1F5FLL,0x232DB0CEL},{4294967295UL,97,1UL,0UL}},{{0UL,25,0xBCA4C7201BE58EEBLL,0xF8241A34L},{1UL,120,18446744073709551608UL,0xEA09826EL}},{{0x373CAA1AL,90,0x1626AC7A9A96AD4ELL,0x75E2C04EL},{0x6A68AF11L,110,18446744073709551609UL,6UL}}}};
    uint32_t *l_194 = &l_113;
    uint32_t **l_193 = &l_194;
    int16_t *l_272 = &g_130[2].f3;
    const union U3 *l_289 = (void*)0;
    int32_t l_317[7] = {1L,(-1L),1L,1L,(-1L),1L,1L};
    int16_t l_343 = 0L;
    int8_t l_356 = 0L;
    uint64_t l_399 = 0x80341F62EF876177LL;
    const int8_t l_439 = 0x7EL;
    int8_t **l_489 = (void*)0;
    struct S2 l_497 = {0xC384EF6FB81D8130LL,2UL,-6L};
    int32_t *l_505 = &g_3;
    union U3 **l_515 = (void*)0;
    union U3 ***l_514 = &l_515;
    uint32_t l_568 = 0xEF529F53L;
    int i, j, k;
    for (g_3 = 0; (g_3 > (-7)); g_3--)
    { 
        uint8_t l_86 = 0x7AL;
        const int32_t *l_91 = &g_3;
        const int32_t **l_90[6] = {&l_91,&l_91,&l_91,&l_91,&l_91,&l_91};
        int32_t l_107 = (-1L);
        int32_t l_110 = (-1L);
        int32_t l_112 = 0x06EC1612L;
        struct S1 *l_137 = &l_131[0];
        union U4 l_157 = {0x5925L};
        union U3 *l_202 = &g_130[2];
        union U3 **l_201 = &l_202;
        int32_t l_224 = 0x298D2E86L;
        int32_t l_226[4][5] = {{0x185641E5L,0x185641E5L,0x185641E5L,0x185641E5L,0x185641E5L},{1L,1L,1L,1L,1L},{0x185641E5L,0x185641E5L,0x185641E5L,0x185641E5L,0x185641E5L},{1L,1L,1L,1L,1L}};
        struct S2 l_262 = {0L,4UL,1L};
        int16_t *l_268[4][7] = {{(void*)0,(void*)0,(void*)0,&g_20[0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_20[0],&g_20[1],&g_20[0],(void*)0,&g_20[1],&g_20[1]},{&g_20[1],(void*)0,&g_20[0],&g_20[1],&g_20[0],(void*)0,&g_20[1]},{(void*)0,&g_20[1],(void*)0,&g_130[2].f3,(void*)0,&g_130[2].f3,&g_20[1]}};
        union U3 l_312 = {65534UL};
        const uint8_t l_313 = 0x79L;
        struct S0 l_318 = {0x03F03C69L,-46,0xA8D5574EA3051C18LL,6UL};
        uint8_t l_430[7];
        uint8_t l_451 = 1UL;
        int i, j;
        for (i = 0; i < 7; i++)
            l_430[i] = 251UL;
    }
    ++l_568;
    (*l_94) = (*l_94);
    return g_190;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_130[i].f0, "g_130[i].f0", print_hash_value);
        transparent_crc(g_130[i].f1, "g_130[i].f1", print_hash_value);
        transparent_crc(g_130[i].f3, "g_130[i].f3", print_hash_value);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_606.f0, "g_606.f0", print_hash_value);
    transparent_crc(g_606.f1, "g_606.f1", print_hash_value);
    transparent_crc(g_606.f2, "g_606.f2", print_hash_value);
    transparent_crc(g_606.f3, "g_606.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_644[i].f0, "g_644[i].f0", print_hash_value);

    }
    transparent_crc(g_697.f0, "g_697.f0", print_hash_value);
    transparent_crc(g_697.f1, "g_697.f1", print_hash_value);
    transparent_crc(g_697.f3, "g_697.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_917[i][j].f0, "g_917[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_923, "g_923", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1391, "g_1391", print_hash_value);
    transparent_crc(g_1572, "g_1572", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1592[i][j][k], "g_1592[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1665, "g_1665", print_hash_value);
    transparent_crc(g_1739, "g_1739", print_hash_value);
    transparent_crc(g_1883, "g_1883", print_hash_value);
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_2028, "g_2028", print_hash_value);
    transparent_crc(g_2043, "g_2043", print_hash_value);
    transparent_crc(g_2099.f0, "g_2099.f0", print_hash_value);
    transparent_crc(g_2099.f1, "g_2099.f1", print_hash_value);
    transparent_crc(g_2099.f2, "g_2099.f2", print_hash_value);
    transparent_crc(g_2099.f3, "g_2099.f3", print_hash_value);
    transparent_crc(g_2331, "g_2331", print_hash_value);
    transparent_crc(g_2399, "g_2399", print_hash_value);
    transparent_crc(g_2435, "g_2435", print_hash_value);
    transparent_crc(g_2602, "g_2602", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2614[i], "g_2614[i]", print_hash_value);

    }
    transparent_crc(g_3019.f0, "g_3019.f0", print_hash_value);
    transparent_crc(g_3019.f1, "g_3019.f1", print_hash_value);
    transparent_crc(g_3019.f2, "g_3019.f2", print_hash_value);
    transparent_crc(g_3019.f3, "g_3019.f3", print_hash_value);
    transparent_crc(g_3080, "g_3080", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
