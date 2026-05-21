// SPDX-License-Identifier: MIT
// cctest_csmith_485084c6.c --- cctest case csmith_485084c6 (csmith seed 1213236422)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe1a64383 */

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

// Options:   -s 1213236422 -o /tmp/csmith_gen_gnspe0wj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   const int32_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

struct S2 {
   const int32_t  f0;
   int8_t  f1;
   int64_t  f2;
   int16_t  f3;
   int32_t  f4;
};

union U3 {
   int32_t  f0;
   int32_t  f1;
};

union U4 {
   struct S2  f0;
   const struct S2  f1;
   const int32_t  f2;
   uint64_t  f3;
};


static uint8_t g_10 = 0xA7L;
static struct S1 g_18 = {0xC5B641B44ADCA1A1LL,0L,18446744073709551615UL};
static union U4 g_47[2] = {{{0xDBFD33F1L,4L,0xCFB996340C09C4F4LL,0xCF42L,1L}},{{0xDBFD33F1L,4L,0xCFB996340C09C4F4LL,0xCF42L,1L}}};
static uint8_t g_78 = 255UL;
static union U3 g_85 = {0x95055D0CL};
static int32_t g_86 = (-1L);
static int32_t g_105[5] = {0xEDB61D13L,0xEDB61D13L,0xEDB61D13L,0xEDB61D13L,0xEDB61D13L};
static int32_t g_125 = 0x84B88B55L;



static struct S1  func_1(void);
static union U3  func_11(struct S1  p_12, struct S0  p_13);
static struct S1  func_14(int8_t  p_15, struct S1  p_16);
static union U4  func_20(int32_t  p_21, struct S2  p_22, union U3  p_23, int64_t  p_24);




static struct S1  func_1(void)
{ 
    struct S0 l_81 = {0L,6UL,-4L,0x82068EE1L};
    int32_t l_91[1][3];
    struct S1 l_104 = {0L,1L,0x449CDFC8L};
    union U3 l_108[3] = {{5L},{5L},{5L}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_91[i][j] = 0xA3D1CE2EL;
    }
    if ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(g_10, (func_11(func_14((+g_10), g_18), l_81) , g_18.f0))), g_86)), 8UL)) || 1UL), g_47[0].f0.f4)))
    { 
        int32_t l_89 = 1L;
        const struct S1 l_90 = {0x563CFC5172592CB3LL,0x56864248L,1UL};
        l_91[0][2] = (((((g_47[0] , (safe_div_func_int32_t_s_s(((((l_89 && (l_90 , 0x100029D1050BF12BLL)) & l_90.f1) || 18446744073709551610UL) , l_89), l_89))) && l_81.f2) >= 0xD5E43F78L) , 1UL) & 0xFBD8D123FB1128C1LL);
        g_85.f0 = g_47[0].f0.f4;
        for (g_18.f1 = 28; (g_18.f1 > 27); g_18.f1--)
        { 
            g_105[3] |= (safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(g_47[0].f0.f2, l_81.f1)), 2)) != ((g_78 = (safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((l_104 , g_78) && g_85.f0), g_47[0].f0.f3)) <= g_47[0].f0.f0), 0UL))) , g_85.f0)) , 8L), g_47[0].f0.f0));
        }
    }
    else
    { 
        struct S1 l_109[1] = {{1L,0xB1DC0440L,0xCF588459L}};
        int i;
        for (l_81.f0 = 5; (l_81.f0 == 3); l_81.f0 = safe_sub_func_uint64_t_u_u(l_81.f0, 4))
        { 
            return g_18;
        }
        if ((l_108[0] , 0xED343B42L))
        { 
            uint32_t l_110 = 0xEA432D78L;
            l_109[0] = l_109[0];
            for (g_86 = 0; (g_86 >= 0); g_86 -= 1)
            { 
                l_110++;
                return l_104;
            }
        }
        else
        { 
            uint32_t l_122 = 0x70AEA978L;
            l_91[0][2] = (safe_div_func_uint64_t_u_u(l_109[0].f2, (1UL || (l_109[0].f1 = 0x7775BE2AL))));
            g_47[0].f0.f4 ^= ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s(l_122, 5L)))) <= (l_109[0].f1 = g_18.f1)), ((safe_lshift_func_uint16_t_u_s((((g_125 = g_105[3]) >= l_108[0].f0) , l_122), 8)) < g_85.f1))), 5)) >= 249UL);
        }
        for (g_18.f2 = 0; (g_18.f2 <= 56); g_18.f2 = safe_add_func_int32_t_s_s(g_18.f2, 1))
        { 
            int32_t l_146 = 4L;
            uint64_t l_149 = 0xE6A1E35D45CBCC74LL;
            for (g_10 = 0; (g_10 < 33); ++g_10)
            { 
                int8_t l_141 = 0x02L;
                l_141 ^= ((((l_91[0][2] = l_109[0].f0) ^ (safe_sub_func_int8_t_s_s((g_47[0].f0.f1 = (safe_sub_func_uint32_t_u_u((g_47[0].f0 , ((safe_mod_func_uint16_t_u_u(g_105[3], ((--g_78) | (!(((0x08AC86F730CBF746LL & g_47[0].f0.f2) ^ g_47[0].f0.f1) == g_125))))) || g_47[0].f0.f0)), g_125))), l_104.f1))) < 0L) , 0L);
                g_47[0].f0.f4 = 0L;
            }
            l_104.f1 = ((safe_mul_func_int16_t_s_s((g_47[0].f0.f3 = ((safe_sub_func_uint32_t_u_u(7UL, (l_149 = (l_146 <= ((safe_rshift_func_int8_t_s_u(((((g_125 && (((((65529UL && g_85.f1) & 0x985D356EL) ^ g_10) >= l_109[0].f0) <= g_47[0].f0.f1)) & 0x00C4D80BL) == g_78) , (-1L)), 0)) || g_85.f0))))) | g_47[0].f0.f0)), 0xC48BL)) < 0xDC3CL);
        }
    }
    return l_104;
}



static union U3  func_11(struct S1  p_12, struct S0  p_13)
{ 
    uint8_t l_84[4] = {0UL,0UL,0UL,0UL};
    int i;
    p_12.f1 = ((safe_div_func_int64_t_s_s(p_13.f3, g_10)) <= (p_12.f1 | l_84[1]));
    return g_85;
}



static struct S1  func_14(int8_t  p_15, struct S1  p_16)
{ 
    uint16_t l_19 = 0x6E74L;
    int32_t l_43[5] = {0x2600BF09L,0x2600BF09L,0x2600BF09L,0x2600BF09L,0x2600BF09L};
    int8_t l_44 = 0xABL;
    struct S2 l_45 = {0x5F7F7777L,0xFDL,4L,0x3FA8L,0x742D63D2L};
    union U3 l_46[5][3] = {{{0L},{1L},{1L}},{{0x57DE97EEL},{0x232038BEL},{0x232038BEL}},{{0L},{1L},{1L}},{{0x57DE97EEL},{0x232038BEL},{0x232038BEL}},{{0L},{1L},{1L}}};
    struct S1 l_50 = {0x068D11A6C9C6C2CFLL,1L,0UL};
    int32_t l_77 = (-1L);
    int i, j;
    if (((l_19 , func_20((p_16.f1 = (safe_div_func_int32_t_s_s(((p_16.f2 , 65535UL) >= (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((l_43[3] = (((((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(1L, l_19)), g_18.f1)), g_18.f2)), 0x748AL)), p_16.f0)), 0x0EL)) , 0x83CAL) != p_15) >= 0x9B8AL) | 0x6CL)) && g_18.f1), g_10)), l_44))), g_10))), l_45, l_46[0][0], g_18.f0)) , 0L))
    { 
        int32_t l_48 = 0x23986B29L;
        g_18.f1 &= (l_48 <= (((p_15 && 0UL) , (l_45.f0 > 0x85AA7F79L)) && p_16.f2));
    }
    else
    { 
        struct S1 l_49 = {0x45AB60A95A2E206CLL,-5L,0xAE70C30FL};
        g_18 = p_16;
        return l_49;
    }
    if (((g_18 = l_50) , ((safe_add_func_int16_t_s_s(0x3020L, (safe_add_func_uint16_t_u_u((((-4L) ^ (4294967287UL && p_16.f1)) < 0L), l_43[3])))) != 0xAFL)))
    { 
        struct S1 l_55 = {5L,0x4807DA0BL,1UL};
        return l_55;
    }
    else
    { 
        int32_t l_63 = 0xB921586CL;
        union U4 l_72 = {{0xF4F6E089L,6L,0xECB2DECA365B034ELL,0xD8D8L,0xF2FEC8B6L}};
        uint32_t l_76 = 4294967291UL;
        l_46[0][0].f0 = ((+((l_19 , (safe_add_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_10, (((((p_16.f0 || (safe_mod_func_int64_t_s_s(5L, p_16.f2))) > l_63) == p_16.f1) && 0x6A4AL) ^ l_63))) == g_47[0].f0.f3), p_16.f2))) > 0x360B9F0A6C5FA607LL)) != 65535UL);
        l_50.f1 = ((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((l_72 , l_72.f0.f3) , (l_46[0][0].f0 = (!((((safe_mod_func_uint16_t_u_u((l_45.f4 = (l_72.f0.f4 & l_43[3])), g_18.f1)) == g_47[0].f0.f2) ^ p_16.f1) >= 1L)))) != p_15), g_47[0].f0.f0)) , l_72.f0.f2), l_76)), p_15)) | 2L), 4)) > p_16.f0);
    }
    ++g_78;
    return p_16;
}



static union U4  func_20(int32_t  p_21, struct S2  p_22, union U3  p_23, int64_t  p_24)
{ 
    return g_47[0];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_47[i].f0.f0, "g_47[i].f0.f0", print_hash_value);
        transparent_crc(g_47[i].f0.f1, "g_47[i].f0.f1", print_hash_value);
        transparent_crc(g_47[i].f0.f2, "g_47[i].f0.f2", print_hash_value);
        transparent_crc(g_47[i].f0.f3, "g_47[i].f0.f3", print_hash_value);
        transparent_crc(g_47[i].f0.f4, "g_47[i].f0.f4", print_hash_value);

    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
