// SPDX-License-Identifier: MIT
// cctest_csmith_56f91ad9.c --- cctest case csmith_56f91ad9 (csmith seed 1459165913)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbbbec0f2 */

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

// Options:   -s 1459165913 -o /tmp/csmith_gen_nc3mckar/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int64_t  f1;
   int64_t  f2;
   int64_t  f3;
   uint64_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S2 {
   signed f0 : 29;
   signed f1 : 4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const signed f0 : 25;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const struct S1  f0;
   const struct S0  f1;
   uint16_t  f2;
   int8_t  f3;
   int16_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

struct S4 {
   uint64_t  f0;
   struct S0  f1;
   struct S3  f2;
   signed f3 : 5;
   const int32_t  f4;
};

struct S5 {
   unsigned f0 : 2;
   signed f1 : 19;
   const signed f2 : 7;
   const signed f3 : 4;
};

struct S6 {
   int16_t  f0;
   const struct S5  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S7 {
   unsigned f0 : 24;
   signed f1 : 17;
   signed f2 : 15;
   unsigned f3 : 29;
   unsigned f4 : 6;
};
#pragma pack(pop)

union U8 {
   int8_t  f0;
};

union U9 {
   struct S0  f0;
   struct S0  f1;
};


static int32_t g_2[5] = {0x43DDCA27L,0x43DDCA27L,0x43DDCA27L,0x43DDCA27L,0x43DDCA27L};
static int32_t g_3 = 0L;
static int32_t g_6 = (-3L);
static struct S2 g_14[5][2] = {{{-21334,1},{-17922,-0}},{{-21334,1},{-21334,1}},{{-17922,-0},{-21334,1}},{{-21334,1},{-17922,-0}},{{-21334,1},{-21334,1}}};
static int32_t g_30 = 0x6CE91E41L;
static struct S7 g_31 = {1512,170,-164,20377,6};
static int16_t g_47 = 0x1085L;
static int16_t g_51 = 0xCDB2L;
static struct S3 g_63 = {{-2930},{65535UL,0x429F1C2FFF440556LL,0xAC20F127D3B87503LL,9L,18446744073709551609UL,0UL},8UL,8L,0x95FEL,0x8F14D5734C63812DLL};
static int32_t g_101 = (-8L);
static uint16_t g_123 = 0xD1FDL;



static uint32_t  func_1(void);
static int64_t  func_10(struct S2  p_11, uint64_t  p_12, struct S0  p_13);
static struct S4  func_15(int64_t  p_16, union U8  p_17, struct S3  p_18);
static uint64_t  func_28(const int8_t  p_29);




static uint32_t  func_1(void)
{ 
    uint32_t l_4 = 0x3B4709BAL;
    int32_t l_5[4][5][2];
    int16_t l_9 = 0x3703L;
    int32_t l_151 = 0L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_5[i][j][k] = 5L;
        }
    }
    for (g_3 = 0; (g_3 <= 4); g_3 += 1)
    { 
        union U8 l_62 = {0xCAL};
        int i;
        if (g_2[g_3])
            break;
        l_5[3][0][0] ^= l_4;
        for (l_4 = 0; (l_4 <= 4); l_4 += 1)
        { 
            int16_t l_61[5][2];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_61[i][j] = 0xE68AL;
            }
            for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
            { 
                return g_2[2];
            }
            l_151 &= (safe_add_func_uint8_t_u_u(l_9, (func_10(g_14[3][1], ((((func_15((safe_rshift_func_uint16_t_u_u(9UL, ((((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((~((func_28(((-9L) && l_5[1][1][1])) > g_31.f3) > l_9)), l_61[1][1])), l_61[1][1])), l_4)) != l_61[0][1]) ^ g_14[3][1].f1) != 0x534BEE77D733C455LL))), l_62, g_63) , g_14[3][1].f0) <= g_31.f2) && l_61[1][1]) < l_61[1][1]), g_63.f1) >= g_14[3][1].f0)));
        }
    }
    return g_63.f1.f1;
}



static int64_t  func_10(struct S2  p_11, uint64_t  p_12, struct S0  p_13)
{ 
    uint32_t l_67[1];
    int32_t l_80 = 0x0842E3BEL;
    int32_t l_107 = 0x554994F7L;
    struct S7 l_150[5] = {{1302,-333,0,13062,2},{1302,-333,0,13062,2},{1302,-333,0,13062,2},{1302,-333,0,13062,2},{1302,-333,0,13062,2}};
    int i;
    for (i = 0; i < 1; i++)
        l_67[i] = 18446744073709551615UL;
    for (g_63.f2 = (-30); (g_63.f2 < 33); g_63.f2 = safe_add_func_uint8_t_u_u(g_63.f2, 7))
    { 
        struct S7 l_71 = {1319,304,43,22630,1};
        struct S6 l_83 = {-9L,{0,652,-6,0}};
        for (p_12 = 1; (p_12 <= 4); p_12 += 1)
        { 
            const uint32_t l_69[5] = {0xFC4D21CDL,0xFC4D21CDL,0xFC4D21CDL,0xFC4D21CDL,0xFC4D21CDL};
            int32_t l_70 = 0x7F434AC2L;
            struct S7 l_72[3][3] = {{{2337,250,-98,8589,3},{2337,250,-98,8589,3},{1926,12,172,1565,0}},{{2337,250,-98,8589,3},{2337,250,-98,8589,3},{1926,12,172,1565,0}},{{2337,250,-98,8589,3},{2337,250,-98,8589,3},{1926,12,172,1565,0}}};
            int i, j;
            if (((l_70 = (l_67[0] , (((~l_69[4]) && g_31.f4) || g_63.f1.f1))) & (-9L)))
            { 
                if (g_63.f1.f5)
                    break;
                l_72[1][1] = l_71;
                p_11.f1 = (((g_63.f3 | (safe_unary_minus_func_int8_t_s(0L))) <= (l_72[1][1].f1 |= ((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((l_80 = g_63.f1.f0) , (((g_63.f1.f4 > (-9L)) <= 255UL) & g_14[3][1].f1)), g_14[3][1].f1)), 0)) > 4294967295UL))) > 0L);
            }
            else
            { 
                p_11.f1 = l_80;
                return g_47;
            }
        }
        for (p_13.f5 = 0; (p_13.f5 == 48); p_13.f5++)
        { 
            uint32_t l_86 = 1UL;
            int32_t l_126 = (-1L);
            if (p_13.f0)
                break;
            l_86 = (l_67[0] != (((l_67[0] != (l_83 , ((safe_rshift_func_int16_t_s_u((g_63.f1.f1 | l_67[0]), p_13.f3)) , 0x0BDAL))) < g_63.f4) < 4294967295UL));
            if (g_6)
            { 
                int32_t l_102 = 1L;
                l_102 = (l_83.f1.f1 || (((safe_rshift_func_uint16_t_u_u(((p_13.f0 |= (((safe_add_func_uint8_t_u_u(((0xB64A9189L & (safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(((((((safe_lshift_func_uint16_t_u_u(l_71.f1, (g_101 = (safe_add_func_int8_t_s_s((g_63.f3 |= (((0xC6L < 1UL) != g_14[3][1].f1) , l_83.f1.f3)), 0UL))))) <= p_11.f1) ^ l_86) != 0xC0B734962E967B35LL) | p_12) & p_13.f3), 0x7EL)) & (-1L)) == 0x6AL) , g_63.f1.f4), g_31.f1)) && p_13.f5), g_31.f4))) >= p_13.f3), p_11.f1)) && g_14[3][1].f0) > p_12)) , p_13.f0), 1)) && g_51) > g_31.f0));
            }
            else
            { 
                union U9 l_111[1] = {{{1UL,0xE9901C464F727E75LL,0x563AE6E0BB03CE56LL,-1L,2UL,0xF47B0E09L}}};
                uint16_t l_116 = 1UL;
                int i;
                g_14[3][1].f1 = ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_107 = 0x706FL) > (safe_mul_func_int8_t_s_s(((!(g_123 = (l_111[0] , (safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(l_111[0].f0.f5, (++l_116))) , (((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((g_30 <= 1L) | g_63.f1.f5) & p_12), 6)), l_111[0].f0.f2)) < g_63.f0.f0) && g_51)), 3))))) ^ 246UL), p_13.f0))), 2)), g_3)) & g_31.f0);
                p_11.f0 = l_80;
                p_11.f0 = ((l_80 = (safe_div_func_int64_t_s_s(p_12, p_13.f3))) && l_126);
            }
        }
        for (p_12 = 0; (p_12 <= 51); p_12 = safe_add_func_int64_t_s_s(p_12, 7))
        { 
            uint32_t l_140[5];
            int32_t l_141[2];
            int i;
            for (i = 0; i < 5; i++)
                l_140[i] = 1UL;
            for (i = 0; i < 2; i++)
                l_141[i] = 8L;
            for (g_6 = (-26); (g_6 <= (-21)); g_6++)
            { 
                int32_t l_137[5][5] = {{(-1L),0x68687B3FL,0x68687B3FL,(-1L),0x7165E9A0L},{(-1L),0x7E2C62B3L,0xC788934BL,0xC788934BL,0x7E2C62B3L},{0x7165E9A0L,0x7E2C62B3L,0xDF94D2B4L,0x7165E9A0L,0x7165E9A0L},{0x7E2C62B3L,0xF9867036L,0x7E2C62B3L,0xDF94D2B4L,0x7165E9A0L},{0xC788934BL,0x68687B3FL,0x7165E9A0L,0x68687B3FL,0xC788934BL}};
                int i, j;
                g_31.f2 = (safe_mod_func_int64_t_s_s(((g_2[1] != 2L) >= (g_63.f3 = (((safe_mod_func_int16_t_s_s((((l_83.f1 , (++p_13.f4)) && g_63.f1.f2) && g_14[3][1].f0), g_123)) ^ l_137[0][2]) > p_13.f3))), 0x823450267AAC2503LL));
                l_141[1] |= (safe_lshift_func_uint16_t_u_s(l_140[4], p_13.f1));
                p_11 = (((+(safe_add_func_int32_t_s_s(g_31.f2, 0xD89AFE76L))) || ((g_51 || ((l_80 = p_13.f5) <= p_13.f5)) < p_13.f0)) , p_11);
            }
        }
    }
    for (g_51 = 0; (g_51 < 3); g_51 = safe_add_func_uint8_t_u_u(g_51, 5))
    { 
        struct S7 l_149 = {1890,54,147,11264,5};
        for (p_13.f2 = (-10); (p_13.f2 <= (-4)); p_13.f2++)
        { 
            if (p_13.f4)
                break;
        }
        l_150[4] = l_149;
        if (l_149.f1)
            break;
    }
    return l_150[4].f3;
}



static struct S4  func_15(int64_t  p_16, union U8  p_17, struct S3  p_18)
{ 
    struct S4 l_64[4][1][2] = {{{{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L},{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L}}},{{{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L},{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L}}},{{{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L},{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L}}},{{{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L},{5UL,{0x73DBL,0xA16214FB9B3D0AF1LL,0L,0x2F399B0BCF61366ELL,0xC43C23CF8C3DAD0BLL,0UL},{{5073},{0xA25DL,0x633836DABD80E459LL,0x6D150EB8E47B4319LL,0xF676F3906C131537LL,0x146A40847A0C8E20LL,0x3FD2CF14L},0x92DBL,0x71L,0xF4EEL,18446744073709551615UL},1,-8L}}}};
    int i, j, k;
    return l_64[0][0][0];
}



static uint64_t  func_28(const int8_t  p_29)
{ 
    uint32_t l_39 = 0xA47519ADL;
    for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
    { 
        int64_t l_40 = 5L;
        int32_t l_48 = (-1L);
        int32_t l_53 = 0x30E041B8L;
        for (g_30 = 0; (g_30 <= 4); g_30 += 1)
        { 
            int32_t l_52 = 0x13A89CE6L;
            int i;
            l_40 = (g_31 , (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((0xF50FADE0L <= (((1UL < (!g_2[g_6])) == (-1L)) == 0xEBEE99B4D8148585LL)), g_31.f3)), p_29)), l_39)) < g_2[g_6]) ^ 0UL));
            l_53 = (safe_sub_func_int16_t_s_s(1L, ((safe_sub_func_uint16_t_u_u((((l_52 &= ((safe_lshift_func_uint16_t_u_s(g_47, (l_48 = 0x072FL))) & (g_51 = (safe_mul_func_uint16_t_u_u(0xB69FL, 0UL))))) != l_40) & 8L), l_39)) ^ l_40)));
            l_52 = (safe_rshift_func_uint8_t_u_u(249UL, 7));
        }
        return g_6;
    }
    for (g_30 = (-22); (g_30 > (-9)); g_30++)
    { 
        for (g_6 = 0; (g_6 <= 4); g_6 += 1)
        { 
            uint8_t l_60 = 0xDCL;
            l_60 |= (safe_lshift_func_int16_t_s_s(0x399FL, 6));
        }
    }
    return l_39;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_14[i][j].f0, "g_14[i][j].f0", print_hash_value);
            transparent_crc(g_14[i][j].f1, "g_14[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4, "g_31.f4", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_63.f0.f0, "g_63.f0.f0", print_hash_value);
    transparent_crc(g_63.f1.f0, "g_63.f1.f0", print_hash_value);
    transparent_crc(g_63.f1.f1, "g_63.f1.f1", print_hash_value);
    transparent_crc(g_63.f1.f2, "g_63.f1.f2", print_hash_value);
    transparent_crc(g_63.f1.f3, "g_63.f1.f3", print_hash_value);
    transparent_crc(g_63.f1.f4, "g_63.f1.f4", print_hash_value);
    transparent_crc(g_63.f1.f5, "g_63.f1.f5", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    transparent_crc(g_63.f5, "g_63.f5", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
