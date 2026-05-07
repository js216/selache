// SPDX-License-Identifier: MIT
// cctest_csmith_1ef1fc95.c --- cctest case csmith_1ef1fc95 (csmith seed 519175317)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf842f716 */

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

// Options:   -s 519175317 -o /tmp/csmith_gen_fm9ul67g/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   signed f1 : 30;
   int64_t  f2;
   uint32_t  f3;
   const int64_t  f4;
   int16_t  f5;
   int16_t  f6;
   int64_t  f7;
};
#pragma pack(pop)

union U1 {
   unsigned f0 : 3;
   int64_t  f1;
};


static int32_t g_6[1] = {1L};
static int32_t g_34[1][3][3] = {{{0xAFBCAE26L,0xAFBCAE26L,0xAFBCAE26L},{0x22CBD4DAL,0x22CBD4DAL,0x22CBD4DAL},{0xAFBCAE26L,0xAFBCAE26L,0xAFBCAE26L}}};
static uint16_t g_97[2][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
static union U1 g_129[4][3] = {{{0x62AC31A6L},{0x62AC31A6L},{0x62AC31A6L}},{{0UL},{4294967295UL},{0UL}},{{0x62AC31A6L},{0x62AC31A6L},{0x62AC31A6L}},{{0UL},{4294967295UL},{0UL}}};
static uint16_t **g_158 = (void*)0;
static uint8_t g_160 = 0x81L;
static int8_t g_168 = 0x0AL;
static uint8_t g_169 = 0xF2L;
static int32_t *g_171 = &g_34[0][2][1];
static int8_t g_194 = (-4L);
static int8_t *g_230 = &g_194;
static int8_t **g_229 = &g_230;
static int32_t *g_260 = &g_34[0][0][0];
static uint64_t g_280 = 0x23506E084898BB38LL;
static union U1 **g_296 = (void*)0;
static uint16_t * const ***g_317 = (void*)0;
static uint32_t g_318 = 0x9CD08036L;
static int64_t g_353[3] = {0x303EFB8D72C96BDBLL,0x303EFB8D72C96BDBLL,0x303EFB8D72C96BDBLL};
static int32_t g_355[3] = {1L,1L,1L};
static int64_t g_376 = 0x52823067E3487615LL;
static int32_t g_378 = 6L;
static int16_t g_449 = 0xC749L;
static union U1 g_532 = {0x06436492L};
static union U1 * const g_531 = &g_532;
static union U1 * const *g_530[1][5][5] = {{{&g_531,&g_531,&g_531,&g_531,&g_531},{(void*)0,(void*)0,&g_531,(void*)0,&g_531},{&g_531,&g_531,(void*)0,(void*)0,&g_531},{&g_531,&g_531,(void*)0,(void*)0,&g_531},{&g_531,&g_531,&g_531,&g_531,(void*)0}}};
static int32_t g_546[1][2][7] = {{{0x8216349CL,0x8216349CL,0x3844C962L,0x8216349CL,0x8216349CL,0x3844C962L,0x8216349CL},{0xF4BDF6D5L,0x4A476A29L,0x4A476A29L,0xF4BDF6D5L,0x4A476A29L,0x4A476A29L,0xF4BDF6D5L}}};
static int32_t *g_556 = &g_355[2];
static uint32_t g_565 = 0xBBAFC3D0L;
static uint64_t g_575 = 8UL;
static struct S0 g_611 = {0x526C2EF7L,6081,-1L,0x1133F69EL,0xDB6210E3A38EF0B0LL,-1L,0x29F8L,-1L};
static uint64_t g_613 = 0x50C9C48DB4E98A2ALL;
static uint8_t g_691[1] = {1UL};
static int64_t g_710 = (-1L);
static uint8_t g_715 = 0x8EL;
static uint8_t *g_907 = &g_691[0];
static union U1 ***g_956 = &g_296;
static union U1 *** const *g_955 = &g_956;
static uint16_t ***g_1064 = &g_158;
static struct S0 g_1073[4] = {{0x8860DD82L,-11835,0x46FF248444344B2DLL,0UL,0x1BF96937FF8D3913LL,-6L,0L,0x92567FB4548F5317LL},{0x8860DD82L,-11835,0x46FF248444344B2DLL,0UL,0x1BF96937FF8D3913LL,-6L,0L,0x92567FB4548F5317LL},{0x8860DD82L,-11835,0x46FF248444344B2DLL,0UL,0x1BF96937FF8D3913LL,-6L,0L,0x92567FB4548F5317LL},{0x8860DD82L,-11835,0x46FF248444344B2DLL,0UL,0x1BF96937FF8D3913LL,-6L,0L,0x92567FB4548F5317LL}};
static int8_t g_1161 = 0x1AL;
static struct S0 *g_1174 = &g_1073[2];
static struct S0 **g_1173 = &g_1174;
static int8_t g_1243 = 0x19L;
static int8_t ****g_1399 = (void*)0;
static int8_t *****g_1398 = &g_1399;
static int16_t g_1416[4][1] = {{(-3L)},{0x19C2L},{(-3L)},{0x19C2L}};
static int32_t g_1418 = 0L;
static const int32_t *g_1491[6][6] = {{(void*)0,&g_34[0][1][1],&g_355[2],&g_355[2],&g_378,(void*)0},{&g_355[2],&g_355[2],&g_355[2],&g_355[2],&g_355[2],&g_355[2]},{(void*)0,&g_378,&g_355[2],&g_355[2],&g_34[0][1][1],(void*)0},{&g_378,&g_378,&g_355[2],&g_378,&g_355[2],&g_378},{&g_378,&g_355[2],&g_378,&g_355[2],&g_378,&g_378},{(void*)0,&g_34[0][1][1],&g_355[2],&g_355[2],&g_378,(void*)0}};
static const int32_t * const *g_1490 = &g_1491[4][1];
static const int32_t * const **g_1489 = &g_1490;
static const union U1 g_1510 = {0xF3F184D2L};
static int16_t *g_1560 = &g_1416[0][0];
static int16_t **g_1559 = &g_1560;
static int16_t ** const *g_1558 = &g_1559;
static uint32_t g_1593[1][1] = {{0x8EF81E5DL}};
static int16_t * const *g_1700[1][6] = {{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560,&g_1560}};
static int16_t * const ** const g_1699[3][7] = {{&g_1700[0][2],&g_1700[0][5],&g_1700[0][2],&g_1700[0][5],&g_1700[0][5],&g_1700[0][5],&g_1700[0][5]},{&g_1700[0][2],&g_1700[0][5],&g_1700[0][2],&g_1700[0][5],&g_1700[0][5],&g_1700[0][5],&g_1700[0][5]},{&g_1700[0][2],&g_1700[0][5],&g_1700[0][2],&g_1700[0][5],&g_1700[0][5],&g_1700[0][5],&g_1700[0][5]}};
static int16_t * const ** const *g_1698 = &g_1699[0][0];
static int16_t g_1706[7][1] = {{8L},{0xDD4EL},{8L},{0xDD4EL},{8L},{0xDD4EL},{8L}};
static int16_t g_1707 = 0x739BL;
static int16_t g_1708[3] = {1L,1L,1L};
static int16_t g_1709 = (-9L);
static int16_t g_1710[1] = {0xB91AL};
static int16_t g_1711[3][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
static int16_t g_1712 = 0xCAADL;
static int16_t g_1713 = 1L;
static int16_t g_1714[6][6][6] = {{{1L,0x4464L,(-7L),9L,9L,(-7L)},{1L,3L,9L,1L,(-1L),1L},{0xD17EL,3L,0xD17EL,(-7L),9L,9L},{0xA962L,0x4464L,0xD17EL,0xA962L,3L,1L},{1L,3L,9L,0xA962L,0x4059L,(-7L)},{0xA962L,0x4059L,(-7L),(-7L),0x4059L,0xA962L}},{{0xD17EL,3L,1L,1L,3L,0xA962L},{1L,0x4464L,(-7L),9L,9L,(-7L)},{1L,3L,9L,1L,(-1L),1L},{0xD17EL,3L,0xD17EL,(-7L),9L,9L},{0xA962L,0x4464L,0xD17EL,0xA962L,3L,1L},{0L,0xD17EL,(-1L),1L,(-7L),5L}},{{1L,(-7L),5L,5L,(-7L),1L},{0xAA26L,0xD17EL,(-5L),0L,(-4L),1L},{(-5L),1L,5L,(-1L),1L,5L},{(-5L),(-4L),(-1L),0L,0xA962L,0L},{0xAA26L,(-4L),0xAA26L,5L,1L,(-1L)},{1L,1L,0xAA26L,1L,(-4L),0L}},{{0L,0xD17EL,(-1L),1L,(-7L),5L},{1L,(-7L),5L,5L,(-7L),1L},{0xAA26L,0xD17EL,(-5L),0L,(-4L),1L},{(-5L),1L,5L,(-1L),1L,5L},{(-5L),(-4L),(-1L),0L,0xA962L,0L},{0xAA26L,(-4L),0xAA26L,5L,1L,(-1L)}},{{1L,1L,0xAA26L,1L,(-4L),0L},{0L,0xD17EL,(-1L),1L,(-7L),5L},{1L,(-7L),5L,5L,(-7L),1L},{0xAA26L,0xD17EL,(-5L),0L,(-4L),1L},{(-5L),1L,5L,(-1L),1L,5L},{(-5L),(-4L),(-1L),0L,0xA962L,0L}},{{0xAA26L,(-4L),0xAA26L,5L,1L,(-1L)},{1L,1L,0xAA26L,1L,(-4L),0L},{0L,0xD17EL,(-1L),1L,(-7L),5L},{1L,(-7L),5L,5L,(-7L),1L},{0xAA26L,0xD17EL,(-5L),0L,(-4L),1L},{(-5L),1L,5L,(-1L),1L,5L}}};
static int16_t g_1715 = 0L;
static int16_t g_1716 = 0L;
static int16_t g_1717 = 0xDEC4L;
static int16_t g_1718 = 0x5356L;
static int16_t g_1719 = (-6L);
static int16_t g_1720 = (-3L);
static int16_t g_1721 = 0xA280L;
static int16_t g_1722 = (-8L);
static int32_t **g_1913 = &g_171;
static int32_t ***g_1912 = &g_1913;
static int32_t ****g_1911 = &g_1912;
static int32_t **g_1945 = &g_556;
static int64_t g_1954 = 0x68C7FA732EE3F60FLL;
static int8_t ** const g_1966 = (void*)0;
static int8_t ** const *g_1965 = &g_1966;
static int8_t ** const **g_1964[7] = {&g_1965,&g_1965,&g_1965,&g_1965,&g_1965,&g_1965,&g_1965};
static int64_t *g_1999[1][3][5] = {{{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_376,&g_376,&g_376,&g_376,&g_376},{&g_376,&g_376,&g_376,&g_376,&g_376}}};
static int32_t g_2037 = 0x9D524E65L;



static struct S0  func_1(void);
static uint16_t  func_8(union U1  p_9);
static struct S0  func_10(const uint8_t  p_11, uint8_t  p_12, const struct S0  p_13, uint32_t  p_14, int16_t  p_15);
static const uint16_t  func_22(uint16_t  p_23, uint16_t  p_24, uint8_t  p_25, uint32_t  p_26);
static int32_t  func_49(uint16_t  p_50, uint32_t  p_51, int32_t * p_52, int32_t * const  p_53);
static int32_t  func_57(int8_t  p_58);
static int32_t * func_59(int32_t * p_60, uint64_t  p_61, int32_t  p_62, int32_t * p_63, int32_t * p_64);
static int32_t * func_65(int8_t  p_66, int32_t * p_67, union U1  p_68, uint8_t  p_69, int32_t  p_70);




static struct S0  func_1(void)
{ 
    uint16_t l_7 = 0x47C2L;
    int64_t l_17 = 0L;
    const struct S0 l_1274[1][7] = {{{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L},{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L},{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L},{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L},{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L},{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L},{18446744073709551615UL,-19805,0x76C818A33E587166LL,1UL,1L,0x2347L,-6L,-1L}}};
    union U1 l_1401 = {4294967295UL};
    int32_t l_1562 = (-1L);
    const union U1 *l_1564[2];
    const union U1 **l_1563 = &l_1564[1];
    int8_t l_1587 = (-1L);
    int16_t * const l_1705[7][2][5] = {{{&g_1719,&g_1716,&g_1709,&g_1716,&g_1719},{(void*)0,&g_1720,&g_1722,&g_1720,(void*)0}},{{&g_1719,&g_1713,&g_1706[1][0],&g_1713,&g_1716},{&g_1712,&g_1717,&g_1718,&g_1717,&g_1712}},{{&g_1716,&g_1713,&g_1706[1][0],&g_1713,&g_1716},{&g_1712,&g_1717,&g_1718,&g_1717,&g_1712}},{{&g_1716,&g_1713,&g_1706[1][0],&g_1713,&g_1716},{&g_1712,&g_1717,&g_1718,&g_1717,&g_1712}},{{&g_1716,&g_1713,&g_1706[1][0],&g_1713,&g_1716},{&g_1712,&g_1717,&g_1718,&g_1717,&g_1712}},{{&g_1716,&g_1713,&g_1706[1][0],&g_1713,&g_1716},{&g_1712,&g_1717,&g_1718,&g_1717,&g_1712}},{{&g_1716,&g_1713,&g_1706[1][0],&g_1713,&g_1716},{&g_1712,&g_1717,&g_1718,&g_1717,&g_1712}}};
    int16_t * const *l_1704 = &l_1705[2][1][2];
    int16_t * const ** const l_1703 = &l_1704;
    int16_t * const ** const *l_1702 = &l_1703;
    const uint32_t l_1742 = 0UL;
    uint8_t *l_1759[3][7][7] = {{{(void*)0,&g_715,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_715,(void*)0,&g_691[0],&g_715,&g_715,&g_691[0],(void*)0},{&g_715,&g_691[0],(void*)0,&g_691[0],&g_691[0],(void*)0,(void*)0},{&g_691[0],&g_715,(void*)0,&g_691[0],(void*)0,&g_691[0],(void*)0},{(void*)0,(void*)0,&g_169,&g_691[0],&g_715,&g_169,(void*)0},{(void*)0,(void*)0,(void*)0,&g_715,(void*)0,(void*)0,&g_715},{&g_691[0],(void*)0,&g_691[0],(void*)0,&g_715,&g_691[0],&g_691[0]}},{{&g_715,(void*)0,&g_691[0],&g_691[0],(void*)0,&g_169,(void*)0},{&g_715,(void*)0,(void*)0,&g_715,&g_691[0],&g_691[0],&g_715},{(void*)0,(void*)0,(void*)0,(void*)0,&g_715,(void*)0,(void*)0},{(void*)0,&g_715,&g_691[0],&g_715,(void*)0,&g_169,&g_715},{&g_715,&g_691[0],&g_691[0],&g_715,(void*)0,&g_691[0],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_691[0]},{&g_715,&g_715,&g_169,&g_715,(void*)0,&g_691[0],&g_715}},{{(void*)0,(void*)0,(void*)0,&g_691[0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_715,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_715,(void*)0,&g_691[0],&g_715,&g_715,&g_691[0],(void*)0},{&g_715,&g_691[0],(void*)0,&g_691[0],&g_691[0],(void*)0,(void*)0},{&g_691[0],&g_715,(void*)0,&g_691[0],(void*)0,&g_691[0],&g_691[0]},{(void*)0,(void*)0,&g_715,&g_691[0],&g_691[0],&g_715,(void*)0},{(void*)0,&g_691[0],&g_715,&g_691[0],&g_169,&g_169,&g_691[0]}}};
    uint16_t l_1833 = 65530UL;
    const uint8_t l_1849[3] = {6UL,6UL,6UL};
    int8_t l_1898 = 0x31L;
    int32_t l_1899 = 0x3C7B6CBFL;
    union U1 ***l_1904 = &g_296;
    union U1 ***l_1906 = &g_296;
    uint8_t l_1918 = 1UL;
    const uint16_t l_1919[2][4][1] = {{{65533UL},{0x5F0CL},{65533UL},{0x5F0CL}},{{65533UL},{0x5F0CL},{65533UL},{0x5F0CL}}};
    int16_t l_1940 = 0x9DC4L;
    int32_t *l_1957 = (void*)0;
    uint32_t l_1980 = 4294967295UL;
    int32_t l_2022 = 0x6A8C369FL;
    uint32_t l_2038 = 0x83ABBD87L;
    uint64_t l_2041 = 0x823BA6D2283B5396LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1564[i] = &l_1401;
    return (**g_1173);
}



static uint16_t  func_8(union U1  p_9)
{ 
    int32_t *l_1402 = &g_34[0][0][0];
    struct S0 *l_1409 = &g_1073[2];
    struct S0 *l_1410[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t *l_1411 = (void*)0;
    int64_t *l_1412 = &g_376;
    uint32_t l_1413 = 0x5CCD4B7AL;
    int32_t l_1417 = (-1L);
    int32_t l_1419[5] = {1L,1L,1L,1L,1L};
    uint8_t **l_1435 = &g_907;
    uint16_t l_1444 = 65530UL;
    const union U1 *l_1509 = &g_1510;
    const union U1 **l_1508 = &l_1509;
    const union U1 ***l_1507[4][6][2] = {{{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508}},{{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508}},{{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508}},{{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508},{&l_1508,&l_1508}}};
    const union U1 ****l_1506 = &l_1507[3][0][1];
    int64_t l_1546 = (-1L);
    int32_t l_1550 = (-1L);
    uint16_t l_1551 = 0xC507L;
    int i, j, k;
lbl_1414:
    l_1402 = l_1402;
    if (((safe_sub_func_uint8_t_u_u((func_10((*l_1402), (((&g_317 != &g_317) ^ ((safe_sub_func_int64_t_s_s(((*l_1412) = ((p_9.f0 == ((safe_rshift_func_uint8_t_u_u(((l_1409 != (l_1410[0][3] = (*g_1173))) >= (((*l_1409) , g_611.f3) , g_34[0][2][2])), p_9.f0)) ^ (*g_907))) <= (*l_1402))), g_97[1][3])) < (*g_907))) <= 0xE6L), (**g_1173), g_1073[2].f6, (*l_1402)) , (*g_907)), l_1413)) <= 0x97ED96C4D873984DLL))
    { 
        int32_t *l_1415[5] = {&g_34[0][2][1],&g_34[0][2][1],&g_34[0][2][1],&g_34[0][2][1],&g_34[0][2][1]};
        uint16_t l_1420 = 0x703EL;
        int8_t *l_1481 = &g_1161;
        union U1 l_1519 = {4UL};
        int i;
        if (g_194)
            goto lbl_1414;
        l_1420--;
        for (g_575 = 0; (g_575 <= 0); g_575 += 1)
        { 
            uint16_t l_1436[4] = {0UL,0UL,0UL,0UL};
            uint8_t *l_1439 = &g_691[0];
            int32_t l_1476 = (-1L);
            struct S0 l_1484 = {18446744073709551615UL,5794,0xED7DF2DE68C82CEDLL,0x6ACD3BFAL,-4L,0x2BE9L,0xC950L,-1L};
            union U1 ****l_1505 = &g_956;
            int i;
            if ((((safe_mod_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((p_9.f0 <= (((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((l_1435 != &g_907), (l_1436[0] >= (!p_9.f0)))) & (~((*l_1435) != l_1439))), 4)), p_9.f0)) || p_9.f0) | l_1436[0])) <= g_34[0][2][1]) || g_611.f6), 7L)), g_1161)) < 0xADL) | p_9.f0) || 0xE3A7L), g_1073[2].f3)) >= p_9.f0) != 5L))
            { 
                if ((*g_260))
                    break;
                (*g_260) ^= 0x5C5C8F60L;
            }
            else
            { 
                int8_t l_1447 = (-1L);
                (*g_260) = (safe_div_func_int64_t_s_s(p_9.f0, ((&g_691[0] != ((*l_1435) = &g_715)) , (safe_mul_func_int16_t_s_s(((((l_1444 == ((((0UL | (((g_1243 || (l_1447 || l_1447)) , 0xC9C28211L) < g_1161)) < g_168) , 0L) | (*g_171))) | p_9.f0) , (void*)0) == &l_1415[2]), p_9.f0)))));
            }
            if ((*g_260))
                continue;
            for (g_318 = 0; (g_318 <= 0); g_318 += 1)
            { 
                uint16_t * const l_1469 = (void*)0;
                int32_t l_1474 = 0x09F9114AL;
                int64_t *l_1482 = &g_611.f7;
                const int8_t *l_1485[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1485[i] = &g_168;
                for (l_1417 = 0; (l_1417 <= 0); l_1417 += 1)
                { 
                    uint32_t *l_1455 = &g_1073[2].f3;
                    uint16_t *l_1467 = &g_97[1][3];
                    uint16_t **l_1468 = &l_1467;
                    uint32_t *l_1475 = &g_611.f3;
                    int32_t l_1477 = 0xB2D2B469L;
                    int i, j, k;
                    l_1477 &= (((p_9.f0 == ((safe_div_func_int64_t_s_s((!(safe_div_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((++(*l_1455)) <= (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(((safe_mul_func_int16_t_s_s(l_1436[0], (((*l_1475) |= ((safe_rshift_func_uint16_t_u_s(p_9.f0, 4)) == (((safe_rshift_func_uint16_t_u_u((((((*l_1468) = l_1467) == l_1469) || (*g_907)) < (((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(l_1474, p_9.f0)) == p_9.f0), 15)) & (*g_907)) ^ (*l_1402))), 1)) || l_1474) == 0x35ECL))) , p_9.f0))) != 0x25BCA2E8743D7AD6LL))), l_1476))), 7)) & l_1436[0]) < (*l_1402)), 1UL))), g_1416[2][0])) & l_1436[0])) ^ (-3L)) , 0xD659675EL);
                }
                g_378 = (p_9.f0 , ((*l_1402) &= (safe_unary_minus_func_int8_t_s((safe_sub_func_uint64_t_u_u(6UL, l_1436[0]))))));
                for (g_1418 = 0; (g_1418 <= 0); g_1418 += 1)
                { 
                    int64_t **l_1483 = &l_1482;
                    const int32_t * const ***l_1492 = &g_1489;
                    uint64_t *l_1499 = (void*)0;
                    uint64_t *l_1500 = &g_280;
                    int i, j, k;
                    g_34[g_1418][(g_318 + 2)][g_575] |= (((*g_229) = l_1481) != (((((*l_1483) = l_1482) == (l_1484 , &g_376)) , l_1474) , l_1485[0]));
                    l_1476 ^= (!(safe_add_func_int32_t_s_s((((*l_1492) = g_1489) == (void*)0), ((safe_rshift_func_int8_t_s_s(((0UL <= (((0xCC4AL & (safe_div_func_uint16_t_u_u((l_1474 &= (safe_add_func_uint64_t_u_u(((*l_1500) = ((void*)0 == &g_565)), (safe_mod_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s(p_9.f0, p_9.f0)) , p_9.f0) ^ 1UL) || 251UL), 0x0A8CL))))), 1UL))) >= p_9.f0) && g_1073[2].f5)) < 0xC9D8L), (*l_1402))) & p_9.f0))));
                    l_1476 = ((*l_1402) = (0x20B4731398A1A5E7LL | (((((((l_1505 == (l_1506 = (void*)0)) <= (safe_add_func_uint64_t_u_u(((void*)0 != l_1439), p_9.f0))) , l_1483) == &l_1412) , (*l_1402)) == g_1073[2].f7) & p_9.f0)));
                }
            }
        }
        for (l_1420 = 12; (l_1420 <= 8); l_1420 = safe_sub_func_int32_t_s_s(l_1420, 9))
        { 
            uint32_t *l_1526 = &g_1073[2].f3;
            int32_t l_1527 = (-9L);
            int32_t l_1528 = 0xA6416ECFL;
            uint32_t l_1529[2];
            uint16_t *l_1530 = &g_97[1][3];
            int32_t **l_1531 = &g_171;
            const int32_t * const ***l_1541[1][4][5] = {{{&g_1489,&g_1489,&g_1489,&g_1489,&g_1489},{&g_1489,&g_1489,&g_1489,&g_1489,&g_1489},{&g_1489,&g_1489,&g_1489,&g_1489,&g_1489},{&g_1489,&g_1489,&g_1489,&g_1489,&g_1489}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1529[i] = 0xA7D221C6L;
            (*l_1531) = func_65((**g_229), &g_34[0][1][1], (*g_531), ((*g_907) = ((((safe_div_func_uint8_t_u_u(((((safe_sub_func_int64_t_s_s((l_1519 , ((*l_1412) = (safe_rshift_func_uint8_t_u_u(((3UL || ((*l_1530) = (safe_add_func_uint16_t_u_u(((*l_1402) <= ((safe_div_func_uint32_t_u_u((g_565 = (l_1527 |= ((*l_1526) = ((((*l_1402) | p_9.f0) & 0x15L) <= p_9.f0)))), l_1528)) ^ (-1L))), l_1529[1])))) > g_1243), p_9.f0)))), 0x5055374E8DEB1832LL)) & 0x7EL) >= 0x94E45394F14D3DD1LL) , 0x23L), (*g_907))) == g_691[0]) | p_9.f0) != 65532UL)), g_280);
            for (g_194 = (-7); (g_194 < 5); g_194 = safe_add_func_uint64_t_u_u(g_194, 8))
            { 
                int32_t l_1540 = (-1L);
                int16_t *l_1542 = (void*)0;
                int16_t *l_1543 = &g_1073[2].f6;
                uint32_t *l_1544 = &l_1529[1];
                uint64_t *l_1545[7] = {&g_613,&g_613,&g_613,&g_613,&g_613,&g_613,&g_613};
                int i;
                l_1546 |= (((g_613 = ((((*l_1526) = ((*l_1544) &= (((*g_531) , func_59(func_65(p_9.f0, (((((*l_1543) |= ((((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((0x62L == (l_1540 == (*l_1402))), (((((*l_1526) &= 0UL) != (0x5437L ^ 0x321BL)) , (void*)0) != l_1541[0][2][3]))) | 0L) <= 4L), 6)) & g_97[1][1]) , 0x9EE5C84FL) | 4UL)) , p_9.f0) == 0xB345L) , &l_1540), (*g_531), (*g_907), (*l_1402)), g_613, p_9.f0, &l_1419[2], &g_378)) == &g_6[0]))) ^ 0x903FEA57L) && (*l_1402))) < 0x5500005C5ABCD5EELL) | 1UL);
                for (g_611.f2 = 0; (g_611.f2 == (-16)); g_611.f2 = safe_sub_func_int64_t_s_s(g_611.f2, 1))
                { 
                    (**l_1531) = 3L;
                    return p_9.f0;
                }
            }
        }
    }
    else
    { 
        int32_t *l_1549[2][2];
        const int32_t **l_1554 = &g_1491[2][3];
        int16_t **l_1557 = (void*)0;
        int16_t ***l_1556 = &l_1557;
        int16_t ****l_1555[3];
        uint16_t l_1561 = 0x09ADL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_1549[i][j] = &l_1419[0];
        }
        for (i = 0; i < 3; i++)
            l_1555[i] = &l_1556;
        ++l_1551;
        (*l_1554) = (*g_1490);
        g_1558 = (void*)0;
        return l_1561;
    }
    return p_9.f0;
}



static struct S0  func_10(const uint8_t  p_11, uint8_t  p_12, const struct S0  p_13, uint32_t  p_14, int16_t  p_15)
{ 
    int8_t ***l_1282 = &g_229;
    int8_t ****l_1281 = &l_1282;
    union U1 l_1283 = {5UL};
    int32_t l_1284 = 1L;
    int8_t ** const *l_1295 = (void*)0;
    int8_t ** const **l_1294 = &l_1295;
    int8_t ** const ***l_1293[4][5][7] = {{{(void*)0,(void*)0,(void*)0,&l_1294,&l_1294,&l_1294,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,&l_1294,&l_1294,(void*)0,&l_1294,&l_1294,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,(void*)0,&l_1294,&l_1294},{&l_1294,(void*)0,&l_1294,&l_1294,&l_1294,(void*)0,&l_1294}},{{&l_1294,&l_1294,(void*)0,&l_1294,&l_1294,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,(void*)0,(void*)0,&l_1294,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,(void*)0},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,(void*)0,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294}},{{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,(void*)0,(void*)0},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294},{&l_1294,&l_1294,&l_1294,(void*)0,&l_1294,(void*)0,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,(void*)0},{&l_1294,&l_1294,&l_1294,(void*)0,&l_1294,&l_1294,&l_1294}},{{&l_1294,(void*)0,&l_1294,&l_1294,&l_1294,(void*)0,&l_1294},{&l_1294,&l_1294,(void*)0,&l_1294,&l_1294,&l_1294,&l_1294},{&l_1294,&l_1294,&l_1294,(void*)0,&l_1294,&l_1294,(void*)0},{&l_1294,(void*)0,&l_1294,(void*)0,&l_1294,(void*)0,&l_1294},{&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,&l_1294,(void*)0}}};
    int16_t *l_1298 = (void*)0;
    int16_t **l_1297 = &l_1298;
    int16_t ** const *l_1296[5][3][5] = {{{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297},{(void*)0,(void*)0,&l_1297,&l_1297,(void*)0},{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297}},{{(void*)0,&l_1297,&l_1297,(void*)0,(void*)0},{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297},{(void*)0,(void*)0,&l_1297,&l_1297,(void*)0}},{{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297},{(void*)0,&l_1297,&l_1297,(void*)0,(void*)0},{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297}},{{(void*)0,(void*)0,&l_1297,&l_1297,(void*)0},{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297},{(void*)0,&l_1297,&l_1297,(void*)0,(void*)0}},{{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297},{(void*)0,(void*)0,&l_1297,&l_1297,(void*)0},{&l_1297,(void*)0,&l_1297,(void*)0,&l_1297}}};
    int32_t l_1336 = 0L;
    int32_t l_1337 = 1L;
    int32_t l_1338 = (-1L);
    int32_t l_1339 = (-9L);
    int32_t l_1341 = (-5L);
    int32_t l_1342[3][6] = {{0x35FC3D5AL,0x12F4EA51L,(-1L),0x35FC3D5AL,2L,2L},{0x1C6F4050L,0x12F4EA51L,0x12F4EA51L,0x1C6F4050L,2L,(-1L)},{0xA235AF31L,0x12F4EA51L,2L,0xA235AF31L,2L,0x12F4EA51L}};
    int32_t l_1355 = 0x9F24B9B1L;
    uint64_t *l_1385 = &g_613;
    union U1 l_1394 = {0x157873C3L};
    int i, j, k;
    if (((safe_sub_func_int64_t_s_s((g_611.f7 = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((void*)0 != l_1281), ((l_1283 , l_1284) | (p_13.f5 & ((l_1293[3][2][1] = ((((safe_add_func_int64_t_s_s((((safe_mod_func_int64_t_s_s((l_1284 || ((((*l_1281) == &g_229) != g_355[2]) >= 65535UL)), g_1073[2].f5)) , (**g_229)) > l_1284), l_1283.f0)) && (**g_229)) , 18446744073709551609UL) , (void*)0)) != (void*)0))))) < 0xC8L), l_1283.f0))), p_15)) , p_13.f5))
    { 
        int32_t *l_1300 = &g_355[1];
        union U1 l_1309 = {0x185A9DDCL};
        int32_t l_1335 = 0xD054A08FL;
        int32_t l_1340 = 0x30C0FFF4L;
        int32_t l_1343 = 3L;
        int32_t l_1344 = 1L;
        int32_t l_1345 = (-7L);
        int16_t l_1346[1][7][6] = {{{0x52B6L,0xA718L,0x5D3AL,0x52B6L,0x1F61L,0x1F61L},{0x4779L,0xA718L,0xA718L,0x4779L,0x1F61L,0x5D3AL},{0L,0xA718L,0x1F61L,0L,0x1F61L,0xA718L},{0x52B6L,0xA718L,0x5D3AL,0x52B6L,0x1F61L,0x1F61L},{0x4779L,0xA718L,0xBD20L,0xA718L,0xD5D0L,0xD849L},{0x5D3AL,0xBD20L,0xD5D0L,0x5D3AL,0xD5D0L,0xBD20L},{0x1F61L,0xBD20L,0xD849L,0x1F61L,0xD5D0L,0xD5D0L}}};
        int32_t l_1347[3][5][2] = {{{0x4730976FL,(-5L)},{0x4730976FL,0x4730976FL},{(-5L),0x4730976FL},{0x4730976FL,(-5L)},{0x4730976FL,0x4730976FL}},{{(-5L),0x4730976FL},{0x4730976FL,(-5L)},{0x4730976FL,0x4730976FL},{(-5L),0x4730976FL},{0x4730976FL,(-5L)}},{{0x4730976FL,0x4730976FL},{(-5L),0x4730976FL},{0x4730976FL,(-5L)},{0x4730976FL,0x4730976FL},{(-5L),0x4730976FL}}};
        int32_t *l_1351 = (void*)0;
        int32_t *l_1352 = &l_1336;
        int32_t *l_1353 = &l_1339;
        int32_t *l_1354[2][2][2] = {{{&l_1343,&l_1343},{&l_1343,&l_1343}},{{&l_1343,&l_1343},{&l_1343,&l_1343}}};
        uint8_t l_1356 = 0x01L;
        uint16_t *l_1367 = &g_97[1][3];
        int64_t *l_1376 = &l_1309.f1;
        int64_t *l_1377 = &g_376;
        uint64_t *l_1378 = (void*)0;
        uint64_t *l_1379 = (void*)0;
        uint64_t *l_1380[5][7] = {{&g_280,&g_280,&g_575,&g_280,&g_280,&g_575,&g_280},{&g_280,&g_613,&g_613,&g_280,&g_613,&g_613,&g_280},{&g_613,&g_280,&g_613,&g_613,&g_280,&g_613,&g_613},{&g_280,&g_280,&g_575,&g_280,&g_280,&g_575,&g_280},{&g_280,&g_613,&g_613,&g_280,&g_613,&g_613,&g_280}};
        int i, j, k;
        for (g_449 = 2; (g_449 >= 0); g_449 -= 1)
        { 
            int32_t *l_1328 = (void*)0;
            int32_t l_1330 = (-1L);
            int32_t *l_1331 = &g_34[0][2][1];
            int32_t *l_1332 = &g_34[0][2][1];
            int32_t l_1333[6] = {0xC542EB05L,0xC542EB05L,0xC542EB05L,0xC542EB05L,0xC542EB05L,0xC542EB05L};
            int32_t *l_1334[1];
            uint8_t l_1348 = 0x4DL;
            int i;
            for (i = 0; i < 1; i++)
                l_1334[i] = &l_1284;
            if ((l_1296[1][0][0] == (void*)0))
            { 
                int32_t **l_1299 = &g_556;
                (*l_1299) = (void*)0;
            }
            else
            { 
                int16_t l_1319[5][5][6] = {{{(-1L),0x365AL,(-8L),0xD6EDL,(-8L),0x365AL},{0x047EL,0x629AL,7L,(-4L),0xD6EDL,(-1L)},{(-4L),0x384FL,0L,0x5CFAL,0L,2L},{(-1L),0x384FL,0x77DAL,0x69B3L,0xD6EDL,0x2A55L},{2L,0x629AL,0x0A94L,0x6E67L,(-8L),8L}},{{0x479CL,0x365AL,0x8C1EL,(-6L),0x629AL,0x8414L},{8L,0x0A94L,0x86D4L,0x2A55L,0x7C81L,0x172DL},{(-6L),0x172DL,(-5L),0x8414L,0L,0xD6EDL},{0x5CFAL,0xEB35L,0x365AL,0x4366L,(-5L),0x3C64L},{0xD831L,8L,0x59B2L,0x59B2L,8L,0xD831L}},{{(-8L),7L,(-6L),(-1L),0x2A55L,0x8C1EL},{0x8414L,2L,(-1L),(-4L),(-1L),0xA79DL},{0x8414L,0x479CL,(-4L),(-1L),0L,0x384FL},{(-8L),0x2A55L,0x7A16L,0x59B2L,6L,(-3L)},{0xD831L,(-4L),0x2A55L,0x4366L,(-5L),0L}},{{0x5CFAL,(-8L),0L,0x8414L,7L,0x5CFAL},{0x86D4L,1L,0L,0xD6EDL,0x172DL,0x047EL},{(-6L),0x4366L,0x172DL,0x86D4L,(-1L),0L},{0L,0L,(-6L),0L,0L,8L},{0x4366L,(-8L),0x0A94L,(-1L),0x5CFAL,0L}},{{0x2A55L,(-5L),7L,(-8L),8L,0L},{0x455AL,(-1L),0x0A94L,0xA79DL,(-4L),8L},{8L,0x047EL,(-6L),0x479CL,0x0A94L,0L},{7L,(-3L),0x172DL,0x5CFAL,0x384FL,0x047EL},{1L,0x6E67L,0L,(-4L),0x69B3L,0x5CFAL}}};
                int64_t l_1320 = 1L;
                int32_t l_1321 = 0x7A7C3856L;
                union U1 l_1322[1] = {{1UL}};
                int i, j, k;
                l_1300 = func_59(l_1300, g_353[g_449], (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(0x348AL, g_353[g_449])), (safe_add_func_int8_t_s_s(g_353[g_449], (safe_sub_func_uint8_t_u_u((g_1073[2].f7 >= (l_1309 , 7L)), (*g_907))))))), &g_355[2], &g_378);
                l_1284 = (p_13.f5 > ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((+(g_1073[2].f5 = ((safe_div_func_uint8_t_u_u(1UL, p_13.f6)) == (0xCEF2L < (((safe_rshift_func_uint16_t_u_u(((-6L) > p_13.f6), 8)) && (p_13 , l_1319[0][0][5])) < g_353[g_449]))))), p_12)), p_13.f4)) , (*l_1300)));
                for (g_376 = 0; (g_376 <= 0); g_376 += 1)
                { 
                    union U1 l_1327[7] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
                    int32_t **l_1329[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1329[i] = &g_556;
                    l_1321 |= l_1320;
                    if ((*l_1300))
                        break;
                    if ((*g_260))
                        continue;
                    if (p_13.f4)
                        continue;
                    l_1328 = func_65((((void*)0 != &g_355[1]) || ((l_1322[0] , (safe_sub_func_uint32_t_u_u(1UL, (*l_1300)))) & (safe_lshift_func_uint16_t_u_u((l_1327[5] , p_13.f3), g_353[g_449])))), l_1328, l_1327[5], l_1319[0][2][2], l_1327[5].f0);
                }
                (*l_1300) &= l_1320;
            }
            if ((*g_171))
                continue;
            l_1348--;
        }
        l_1356++;
        for (g_168 = 2; (g_168 >= 0); g_168 -= 1)
        { 
            int32_t *l_1361 = &l_1342[1][2];
            if (p_13.f5)
                break;
            for (l_1336 = 1; (l_1336 >= 0); l_1336 -= 1)
            { 
                (*l_1353) = (safe_sub_func_uint16_t_u_u(65535UL, (-10L)));
                if ((*l_1300))
                    break;
                for (g_169 = 0; (g_169 <= 2); g_169 += 1)
                { 
                    int32_t **l_1362 = &l_1352;
                    int i, j, k;
                    if (l_1347[g_168][(l_1336 + 1)][l_1336])
                        break;
                    if ((*g_171))
                        continue;
                    (*l_1362) = l_1361;
                }
            }
        }
        for (g_169 = 0; (g_169 > 35); g_169 = safe_add_func_uint8_t_u_u(g_169, 1))
        { 
            return (**g_1173);
        }
        (*g_171) = ((((((((safe_add_func_uint64_t_u_u((g_280 |= (((*l_1367) = 65530UL) == (((*l_1352) , (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((*l_1377) &= (p_11 | g_1073[2].f3)) && ((*l_1353) |= 0x1DAB238E8DF17803LL)) >= (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(p_13.f2, 1UL)), p_14))) >= p_13.f1), 2UL)), p_13.f0)), l_1342[0][5])), (-6L))) == g_691[0]) , 65535UL)) || 0x3327L))), 0xE8A2F9908DAFCA7FLL)) | 0x2064L) , l_1385) != &g_613) & 0x8BBEF94CEC9661F0LL) , 5UL) && (-8L)) , 0L);
    }
    else
    { 
        uint32_t l_1388 = 18446744073709551609UL;
        uint32_t l_1395 = 18446744073709551611UL;
        int64_t *l_1400 = (void*)0;
        (*g_171) = ((safe_div_func_int32_t_s_s(l_1388, (+(safe_sub_func_uint64_t_u_u((((*l_1385) = ((g_691[0] < (l_1338 ^ (((safe_add_func_int64_t_s_s((l_1394 , l_1395), (safe_mul_func_uint16_t_u_u(((((g_611.f7 = (l_1355 < (g_1398 != (void*)0))) ^ l_1336) < 5L) <= 0x99FD663DL), g_6[0])))) > g_194) , p_13.f7))) != 0x4761F08EE6450EA5LL)) | g_355[2]), 0x74893528A9E360C1LL))))) , p_12);
    }
    return (**g_1173);
}



static const uint16_t  func_22(uint16_t  p_23, uint16_t  p_24, uint8_t  p_25, uint32_t  p_26)
{ 
    int32_t l_35 = (-1L);
    int32_t l_42 = (-9L);
    int32_t l_43[3];
    uint32_t l_46 = 0x1959CD49L;
    int32_t * const l_56 = &l_43[2];
    int64_t l_1164[1];
    union U1 ** const l_1189 = (void*)0;
    union U1 ***l_1191 = &g_296;
    const int8_t *l_1231 = (void*)0;
    const int8_t **l_1230[7] = {&l_1231,&l_1231,&l_1231,&l_1231,&l_1231,&l_1231,&l_1231};
    const int8_t ***l_1229 = &l_1230[0];
    const int8_t ****l_1228 = &l_1229;
    uint64_t l_1273 = 1UL;
    int i;
    for (i = 0; i < 3; i++)
        l_43[i] = 0xA037A762L;
    for (i = 0; i < 1; i++)
        l_1164[i] = 0xB6B9C577748F2470LL;
    for (p_26 = 0; (p_26 > 18); p_26++)
    { 
        int64_t l_44 = 0x381C4EDD679405A9LL;
        int32_t l_45[6][2] = {{1L,0xF207E879L},{0xF207E879L,1L},{0xF207E879L,0xF207E879L},{1L,0xF207E879L},{0xF207E879L,1L},{0xF207E879L,0xF207E879L}};
        uint16_t *** const l_1128 = (void*)0;
        uint16_t *** const *l_1127 = &l_1128;
        uint16_t *** const **l_1126 = &l_1127;
        union U1 l_1131 = {0x80763E40L};
        struct S0 l_1155[1][6][4] = {{{{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL}},{{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL}},{{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL}},{{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL}},{{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL}},{{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL},{0x131C1580L,16138,0x228A97D4D353DBD7LL,4294967293UL,-3L,-1L,0x5E3DL,0xA8FE4D93E7EE32B4LL}}}};
        int32_t l_1199 = 0xC5882EB8L;
        int8_t ***l_1234 = &g_229;
        int8_t *** const *l_1233 = &l_1234;
        int32_t l_1268 = (-3L);
        int i, j, k;
        for (p_25 = (-24); (p_25 >= 1); ++p_25)
        { 
            int32_t *l_31 = (void*)0;
            int32_t *l_32 = (void*)0;
            int32_t *l_33 = &g_34[0][2][1];
            int32_t *l_36 = &g_34[0][2][1];
            int32_t *l_37 = &g_34[0][2][1];
            int32_t *l_38 = &g_34[0][1][1];
            int32_t *l_39 = (void*)0;
            int32_t *l_40 = &g_34[0][2][1];
            int32_t *l_41[2][3] = {{&g_34[0][2][1],&g_34[0][2][1],&g_34[0][2][1]},{(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_46++;
            if (p_23)
                break;
        }
        if (func_49(g_34[0][2][1], (safe_rshift_func_int8_t_s_s((-1L), 0)), &l_43[0], l_56))
        { 
            struct S0 l_1122 = {0x55000FF1L,-5795,1L,0x06466EC3L,0xD261495E837F94A4LL,-1L,-1L,0xA4EF7DB5674DEFD2LL};
            union U1 l_1125 = {0xFA9EAD23L};
            int16_t *l_1134 = &g_1073[2].f5;
            int32_t l_1135[6][2] = {{0xFC412DE7L,(-10L)},{(-10L),0xFC412DE7L},{(-10L),(-10L)},{0xFC412DE7L,(-10L)},{(-10L),0xFC412DE7L},{(-10L),(-10L)}};
            int i, j;
            l_1135[2][1] &= ((l_1122 , (safe_mul_func_int8_t_s_s(((g_1073[2].f2 , (l_1126 = (((*g_531) = l_1125) , (void*)0))) != (void*)0), (safe_rshift_func_int16_t_s_u(((*l_1134) |= (((((*g_171) = ((l_1131 , ((((safe_sub_func_uint32_t_u_u(g_1073[2].f0, 4294967291UL)) , (void*)0) != (void*)0) != 0xF91AD2863F7D9957LL)) >= p_24)) < p_25) , p_24) >= l_1122.f4)), (*l_56)))))) | (*l_56));
        }
        else
        { 
            int64_t *l_1146 = &g_611.f7;
            int16_t l_1147[3][1];
            uint64_t *l_1148 = (void*)0;
            uint64_t *l_1149 = &g_613;
            int32_t *l_1166 = &g_355[2];
            struct S0 *l_1172 = (void*)0;
            struct S0 **l_1171 = &l_1172;
            union U1 l_1188 = {6UL};
            int32_t l_1193 = 0xAA80987FL;
            int32_t l_1216[2][1];
            int8_t l_1218[6] = {0xE5L,0x90L,0xE5L,0xE5L,0x90L,0xE5L};
            int8_t * const l_1242 = &g_1243;
            int8_t * const *l_1241 = &l_1242;
            int8_t * const **l_1240[2][1];
            int8_t * const ***l_1239 = &l_1240[0][0];
            uint64_t l_1251 = 0x5B7F5C17A4C3398ALL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1147[i][j] = 0x0F90L;
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1216[i][j] = (-10L);
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1240[i][j] = &l_1241;
            }
            (*g_171) &= ((*l_56) ^= (p_24 != p_25));
            if (((p_23 < (*l_56)) <= ((*l_1149) |= ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((-9L), (((safe_add_func_int32_t_s_s(l_44, (((*l_56) > (((*l_1146) = (safe_sub_func_uint16_t_u_u(65535UL, (safe_mul_func_int8_t_s_s(((*g_230) = (l_45[2][0] = 0xB2L)), (*g_907)))))) ^ p_23)) , 0x50A68EC6L))) & (*l_56)) , l_1147[2][0]))), l_1147[0][0])) == l_1131.f0))))
            { 
                int8_t *l_1160 = &g_1161;
                int16_t *l_1162[3][6][3] = {{{&g_1073[2].f6,(void*)0,&g_611.f6},{&g_1073[2].f5,(void*)0,(void*)0},{&g_611.f6,&l_1147[2][0],&g_611.f6},{&g_449,&g_611.f6,&g_611.f6},{&g_611.f6,&g_1073[2].f5,&l_1155[0][3][1].f6},{&g_1073[2].f5,(void*)0,&l_1155[0][3][1].f6}},{{&g_1073[2].f6,&l_1155[0][3][1].f6,&g_611.f6},{&g_1073[2].f6,(void*)0,&g_611.f6},{&l_1155[0][3][1].f6,&l_1155[0][3][1].f6,(void*)0},{&l_1147[2][0],(void*)0,&g_611.f6},{&l_1147[2][0],&g_1073[2].f5,&g_1073[2].f6},{&l_1155[0][3][1].f6,&g_611.f6,(void*)0}},{{&g_1073[2].f6,&l_1147[2][0],&g_1073[2].f6},{&g_1073[2].f6,(void*)0,&g_611.f6},{&g_1073[2].f5,(void*)0,(void*)0},{&g_611.f6,&l_1147[2][0],&g_611.f6},{&g_449,&g_611.f6,&g_611.f6},{&g_611.f6,&g_1073[2].f5,&l_1155[0][3][1].f6}}};
                int32_t *l_1175[1];
                int8_t ***l_1192 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1175[i] = (void*)0;
                if (((((**g_229) |= (safe_sub_func_uint64_t_u_u(l_45[0][0], 0x90D0DD17B48E0887LL))) && (+((((0x855816ACA7F838B3LL > (safe_mul_func_uint8_t_u_u(((0x2B3CA2D4L >= 0xD2C30C09L) , (l_1155[0][3][1] , (safe_rshift_func_uint16_t_u_s(((g_611.f6 = ((((*l_1160) &= (safe_lshift_func_int16_t_s_u((((((**g_229) <= l_1155[0][3][1].f2) , g_611.f2) | g_168) >= p_24), 15))) & 0x45L) | (*g_230))) <= (*l_56)), 0)))), 0x32L))) | (*g_907)) || 0x778B486D63850A33LL) > p_26))) && (*g_171)))
                { 
                    int32_t *l_1163 = &g_34[0][2][1];
                    int32_t **l_1165[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1165[i] = &g_171;
                    g_260 = func_59(l_1163, l_1164[0], (*l_56), &l_43[1], &l_45[2][0]);
                    if ((*g_260))
                        break;
                    l_1166 = &l_45[2][0];
                }
                else
                { 
                    return (*l_1166);
                }
                if ((*g_260))
                { 
                    l_45[5][0] = (*l_56);
                    (*l_56) |= (l_1131 , (p_23 == (l_45[1][0] , (&g_158 == (*l_1127)))));
                }
                else
                { 
                    struct S0 ***l_1169 = (void*)0;
                    struct S0 ***l_1170 = (void*)0;
                    int32_t **l_1176 = &l_1175[0];
                    int8_t ** const l_1185[1] = {(void*)0};
                    int8_t ** const *l_1184[5];
                    int8_t ** const **l_1183 = &l_1184[4];
                    union U1 ***l_1190 = &g_296;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1184[i] = &l_1185[0];
                    (*g_260) ^= ((l_1171 = (void*)0) == g_1173);
                    (*l_1176) = l_1175[0];
                    (*g_556) = ((safe_unary_minus_func_uint64_t_u((*l_56))) || (safe_lshift_func_int8_t_s_s((~((((-1L) != ((void*)0 != &g_565)) | (((safe_mod_func_int32_t_s_s(((((*l_1183) = &g_229) == ((((safe_mul_func_uint16_t_u_u(((l_1188 , (**g_955)) != l_1189), 65527UL)) , l_1190) != l_1191) , l_1192)) , 0x44EBB4BCL), (*l_56))) | 1L) == p_24)) && p_26)), 0)));
                    (*g_556) = 0x5D46160BL;
                    if ((*g_171))
                        continue;
                }
                if ((0xCFL | (p_26 < (*g_907))))
                { 
                    uint64_t l_1194 = 1UL;
                    l_1194++;
                }
                else
                { 
                    int32_t *l_1214 = &g_34[0][2][1];
                    int32_t **l_1215 = &l_1175[0];
                    int32_t l_1217 = 0x6CF31E67L;
                    int32_t l_1219 = 1L;
                    int32_t l_1220 = 0x44794F7AL;
                    int32_t l_1221 = (-1L);
                    int16_t l_1222 = 0x7E52L;
                    uint32_t l_1223 = 0UL;
                    (*l_1215) = func_59(((safe_sub_func_uint64_t_u_u((l_1199 || ((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((0L ^ p_23), (((g_611.f4 , (((safe_add_func_uint8_t_u_u((--(*g_907)), (*l_56))) < (safe_lshift_func_uint8_t_u_s((*l_56), 5))) >= p_25)) ^ p_23) & 0x22C6L))), (-1L))), p_26)), (*l_56))) && p_23)), l_1199)) , l_1214), l_1155[0][3][1].f6, (*g_171), &l_45[1][0], l_1175[0]);
                    l_1223++;
                    (*l_1215) = (*l_1215);
                }
                for (g_194 = 0; (g_194 > 6); g_194 = safe_add_func_int64_t_s_s(g_194, 8))
                { 
                    const int8_t *****l_1232 = &l_1228;
                    int8_t * const *l_1237 = &g_230;
                    int8_t * const **l_1236[4] = {&l_1237,&l_1237,&l_1237,&l_1237};
                    int8_t * const ***l_1235 = &l_1236[2];
                    int8_t * const ****l_1238 = &l_1235;
                    int32_t *l_1246 = &l_42;
                    int32_t l_1247 = (-5L);
                    int32_t l_1248 = 7L;
                    int32_t l_1249 = 0x5238D10DL;
                    int32_t l_1250 = 4L;
                    uint64_t *l_1262 = &l_1251;
                    int16_t l_1263[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1263[i] = 1L;
                    (*l_1166) &= ((((*l_1146) = ((l_1246 = (((*g_260) = ((0xD2L > ((((((*l_1232) = l_1228) != (void*)0) , ((((l_1233 != (l_1239 = ((*l_1238) = l_1235))) != (((8UL >= (safe_sub_func_uint64_t_u_u(0UL, 0xB4536A7E4772095ELL))) , p_25) > 0xA3L)) , p_23) >= p_26)) || (*g_260)) ^ 0xDAL)) >= (*l_56))) , &l_43[1])) != &g_378)) && g_546[0][0][3]) && 0L);
                    l_1251++;
                    (*l_56) |= ((*g_556) ^= p_25);
                    if (p_25)
                        break;
                    l_1263[0] ^= (safe_add_func_uint64_t_u_u((*l_56), (safe_rshift_func_int16_t_s_u(((*g_907) , ((*l_1166) < (safe_mod_func_uint8_t_u_u((*l_1166), (safe_mul_func_uint8_t_u_u((g_546[0][0][2] > (((*g_260) = ((l_1262 == (void*)0) && g_1073[2].f3)) <= (*l_1246))), (*l_1166))))))), 14))));
                }
            }
            else
            { 
                uint8_t l_1270[3][2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1270[i][j] = 0x5AL;
                }
                for (l_46 = (-16); (l_46 >= 8); ++l_46)
                { 
                    int32_t *l_1266 = &l_1199;
                    int32_t *l_1267 = &l_45[2][1];
                    int32_t *l_1269[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1269[i] = &l_1216[0][0];
                    l_1270[0][0]++;
                }
            }
        }
    }
    (*g_1173) = (((0x1646E2044F39AD86LL && l_1273) < 0UL) , (*g_1173));
    return p_25;
}



static int32_t  func_49(uint16_t  p_50, uint32_t  p_51, int32_t * p_52, int32_t * const  p_53)
{ 
    (*p_53) = (g_34[0][2][1] , func_57((g_6[0] || (p_51 && g_6[0]))));
    return (*p_52);
}



static int32_t  func_57(int8_t  p_58)
{ 
    uint64_t l_73 = 4UL;
    int32_t *l_78 = &g_34[0][2][1];
    int32_t *l_79[4][2] = {{&g_34[0][1][0],(void*)0},{&g_34[0][1][0],(void*)0},{&g_34[0][1][0],(void*)0},{&g_34[0][1][0],(void*)0}};
    union U1 l_80 = {0xA278FB87L};
    int32_t *l_354 = &g_355[2];
    int32_t **l_569 = &g_556;
    int32_t l_593[4][2][5] = {{{0x27A6DD19L,1L,0x13DA9F5AL,0x27A6DD19L,0xFB3AA35BL},{0xF21676DEL,1L,0x2EF11AB3L,0xF21676DEL,0xFB3AA35BL}},{{0x27A6DD19L,0x2EF11AB3L,0x2EF11AB3L,0x27A6DD19L,(-6L)},{0x27A6DD19L,1L,0x13DA9F5AL,0x27A6DD19L,0xFB3AA35BL}},{{0xF21676DEL,1L,0x2EF11AB3L,0xF21676DEL,0xFB3AA35BL},{0x27A6DD19L,0x2EF11AB3L,0x2EF11AB3L,0x27A6DD19L,(-6L)}},{{0x27A6DD19L,1L,0x13DA9F5AL,0x27A6DD19L,0xFB3AA35BL},{0xF21676DEL,1L,0x2EF11AB3L,0xF21676DEL,0xFB3AA35BL}}};
    const int16_t *l_603[7][5][3] = {{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{(void*)0,&g_449,&g_449},{(void*)0,(void*)0,&g_449}},{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,(void*)0,&g_449}},{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{(void*)0,&g_449,&g_449},{&g_449,(void*)0,&g_449}},{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{(void*)0,(void*)0,&g_449}},{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,(void*)0,&g_449}},{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{(void*)0,&g_449,&g_449},{(void*)0,(void*)0,&g_449}},{{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449},{&g_449,(void*)0,&g_449}}};
    uint16_t * const ****l_705[2];
    union U1 ***l_757 = &g_296;
    const uint32_t l_794 = 6UL;
    uint32_t l_818[4][5][2] = {{{4294967295UL,1UL},{4294967295UL,4294967295UL},{1UL,4294967295UL},{4294967295UL,1UL},{4294967295UL,4294967295UL}},{{1UL,4294967295UL},{4294967295UL,1UL},{4294967295UL,4294967295UL},{1UL,4294967295UL},{4294967295UL,1UL}},{{4294967295UL,4294967295UL},{1UL,4294967295UL},{4294967295UL,1UL},{4294967295UL,4294967295UL},{1UL,4294967295UL}},{{4294967295UL,1UL},{4294967295UL,4294967295UL},{1UL,4294967295UL},{4294967295UL,1UL},{4294967295UL,4294967295UL}}};
    int64_t l_833 = 0x9F26E562A704BAFFLL;
    union U1 l_867 = {0x1C4B338FL};
    uint16_t ***l_872 = &g_158;
    uint8_t *l_905 = &g_169;
    uint64_t l_915 = 0x60C3DCD7D9211C3DLL;
    const int16_t l_1028 = 0x65F8L;
    int8_t **l_1035 = &g_230;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_705[i] = &g_317;
    (*l_569) = func_59(func_65((((safe_rshift_func_int16_t_s_s(g_6[0], ((((((l_73 < 1L) != ((safe_add_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((&g_34[0][2][1] != (l_73 , l_78)), (g_34[0][2][1] && p_58))) && (*l_78)) || 4294967295UL), p_58)) == 0xA9L)) && 0x77465F9E9296D7DELL) & (*l_78)) & g_6[0]) && p_58))) , (*l_78)) , 2L), l_79[2][1], l_80, g_6[0], g_34[0][1][2]), g_97[0][1], p_58, l_78, l_354);
    for (l_73 = 0; (l_73 <= 0); l_73 += 1)
    { 
        int32_t l_599 = 0x05089759L;
        union U1 *l_606[7];
        union U1 **l_605 = &l_606[1];
        int32_t l_647 = 0xE0EF0BD5L;
        int64_t *l_650 = &g_611.f7;
        uint32_t *l_651 = &g_611.f3;
        int16_t *l_656 = &g_611.f5;
        int16_t *l_657 = &g_611.f6;
        uint8_t *l_661 = &g_160;
        int32_t l_671[6] = {0xC38026C9L,0x27B388ADL,0xC38026C9L,0xC38026C9L,0x27B388ADL,0xC38026C9L};
        int64_t l_709 = 1L;
        int32_t l_712[5][5] = {{1L,1L,1L,1L,1L},{0x09C88294L,3L,0x09C88294L,3L,0x09C88294L},{1L,1L,1L,1L,1L},{0x09C88294L,3L,0x09C88294L,3L,0x09C88294L},{1L,1L,1L,1L,1L}};
        uint8_t *l_747 = &g_691[0];
        uint16_t ***l_754 = &g_158;
        int32_t **l_851 = &g_260;
        int16_t l_873 = 0x0ECBL;
        uint64_t l_903[5] = {0xC04362C0D1ACC7F4LL,0xC04362C0D1ACC7F4LL,0xC04362C0D1ACC7F4LL,0xC04362C0D1ACC7F4LL,0xC04362C0D1ACC7F4LL};
        uint32_t l_908 = 0x5B043704L;
        uint8_t **l_919[6];
        int i, j;
        for (i = 0; i < 7; i++)
            l_606[i] = &g_532;
        for (i = 0; i < 6; i++)
            l_919[i] = (void*)0;
    }
    for (g_565 = 0; (g_565 >= 21); g_565 = safe_add_func_int32_t_s_s(g_565, 1))
    { 
        int8_t **l_1098[6] = {&g_230,&g_230,&g_230,&g_230,&g_230,&g_230};
        int32_t l_1099[6][7] = {{(-1L),0x686643F2L,(-1L),0x686643F2L,(-1L),0xD229CED9L,5L},{1L,3L,0xA97C51A2L,3L,(-1L),5L,(-1L)},{0x2AB424E1L,4L,4L,0x2AB424E1L,0x686643F2L,3L,1L},{1L,3L,0x686643F2L,0x2AB424E1L,4L,4L,0x2AB424E1L},{(-1L),5L,(-1L),3L,0xA97C51A2L,3L,1L},{5L,0xD229CED9L,(-1L),0x686643F2L,(-1L),0x686643F2L,(-1L)}};
        int32_t l_1119[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1119[i] = 1L;
        for (g_575 = (-1); (g_575 == 45); g_575++)
        { 
            uint8_t *l_1088[2];
            int8_t **l_1097 = &g_230;
            int32_t l_1100[2][3][4] = {{{0x846CD795L,0xB368C633L,0xF086201EL,0xB368C633L},{0xB368C633L,0x1E7B873AL,0xF086201EL,0xF086201EL},{0x846CD795L,0x846CD795L,0xB368C633L,0xF086201EL}},{{0L,0x1E7B873AL,0L,0xB368C633L},{0L,0xB368C633L,0xB368C633L,0L},{0x846CD795L,0xB368C633L,0xF086201EL,0xB368C633L}}};
            union U1 l_1101[7][2][2] = {{{{0x9CB3D2DCL},{3UL}},{{3UL},{0x9CB3D2DCL}}},{{{3UL},{3UL}},{{0x9CB3D2DCL},{3UL}}},{{{3UL},{0x9CB3D2DCL}},{{3UL},{3UL}}},{{{0x9CB3D2DCL},{3UL}},{{3UL},{0x9CB3D2DCL}}},{{{3UL},{3UL}},{{0x9CB3D2DCL},{3UL}}},{{{3UL},{0x9CB3D2DCL}},{{3UL},{3UL}}},{{{0x9CB3D2DCL},{3UL}},{{3UL},{0x9CB3D2DCL}}}};
            int32_t **l_1102 = (void*)0;
            int32_t **l_1103 = &l_354;
            int64_t *l_1114 = &g_611.f2;
            uint64_t *l_1115 = (void*)0;
            uint64_t *l_1116 = &g_280;
            int16_t *l_1117 = &g_1073[2].f5;
            int16_t *l_1118 = &g_449;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1088[i] = (void*)0;
            (*l_1103) = (g_556 = func_65(((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((*g_230) &= (((safe_sub_func_uint64_t_u_u(p_58, ((g_546[0][0][3] != (*l_78)) == (safe_unary_minus_func_uint64_t_u((((((l_1088[1] = l_1088[0]) == &g_169) >= p_58) <= ((safe_add_func_int16_t_s_s((l_1100[0][0][3] &= (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((l_1097 == l_1098[2]), 0xA5115EEBD62B0B16LL)), l_1099[1][5])), 0x28F7L)) , p_58) || p_58)), p_58)) == p_58)) || 0xA0L)))))) || l_1099[1][5]) && 0x44D7C21A9155FBC9LL)), 1)) < 0xE1L), (*g_907))) , (*g_230)), &l_1099[4][5], l_1101[4][0][0], p_58, g_546[0][1][1]));
            l_1119[0] ^= ((6UL == (4294967289UL != 0x487AFC98L)) , (((1L >= (8L ^ (safe_mul_func_int16_t_s_s(((*l_1118) |= ((*l_1117) ^= (safe_add_func_uint64_t_u_u(((*l_1116) = (safe_rshift_func_uint16_t_u_s(((+(~0xEF0B98515380D7F5LL)) > ((safe_mod_func_int64_t_s_s(((((*l_354) = ((*l_1114) = p_58)) < l_1099[1][5]) | 2L), l_1099[1][5])) , p_58)), 3))), 1L)))), p_58)))) && (*g_230)) , l_1099[1][5]));
        }
    }
    (*l_78) &= (g_613 == (--g_97[1][2]));
    return p_58;
}



static int32_t * func_59(int32_t * p_60, uint64_t  p_61, int32_t  p_62, int32_t * p_63, int32_t * p_64)
{ 
    int8_t **l_356[4];
    int32_t * const * const l_373 = (void*)0;
    uint16_t ***l_384 = &g_158;
    uint16_t *** const *l_383 = &l_384;
    int32_t l_411 = 1L;
    union U1 l_416 = {4294967295UL};
    int8_t * const *l_442 = (void*)0;
    int16_t *l_448 = &g_449;
    int16_t **l_447 = &l_448;
    int32_t l_519 = 3L;
    int16_t * const *l_537[7] = {(void*)0,(void*)0,&l_448,(void*)0,(void*)0,&l_448,(void*)0};
    int16_t * const **l_536[4][1][5] = {{{&l_537[2],(void*)0,&l_537[2],(void*)0,&l_537[2]}},{{(void*)0,&l_537[2],&l_537[2],(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_537[2],&l_537[2],(void*)0}}};
    int16_t * const ***l_535[4][1][4] = {{{&l_536[2][0][0],&l_536[2][0][0],(void*)0,&l_536[2][0][0]}},{{&l_536[2][0][0],&l_536[3][0][0],&l_536[3][0][0],&l_536[2][0][0]}},{{&l_536[3][0][0],&l_536[2][0][0],&l_536[3][0][0],&l_536[3][0][0]}},{{&l_536[2][0][0],&l_536[2][0][0],(void*)0,&l_536[2][0][0]}}};
    int32_t *l_557 = &g_355[2];
    int32_t *l_558 = &g_34[0][1][1];
    int32_t *l_559 = &g_355[1];
    int32_t *l_560 = &g_34[0][2][0];
    int32_t *l_561 = &l_411;
    int32_t *l_562 = &l_519;
    int32_t *l_563[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_564 = 0xA530440BL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_356[i] = &g_230;
    return &g_34[0][1][1];
}



static int32_t * func_65(int8_t  p_66, int32_t * p_67, union U1  p_68, uint8_t  p_69, int32_t  p_70)
{ 
    int64_t l_82 = 0xB1A5A204FE417BD4LL;
    uint16_t *l_96[2];
    int32_t l_98 = (-1L);
    int32_t l_101 = (-1L);
    int32_t l_102 = (-1L);
    int32_t l_103 = (-1L);
    int32_t l_104[6][1] = {{0xABD77ED6L},{0xE410D93EL},{0xABD77ED6L},{0xABD77ED6L},{0xE410D93EL},{0xE410D93EL}};
    uint32_t l_105 = 0x889EA80AL;
    union U1 * const l_128 = &g_129[0][1];
    uint16_t **l_145[1][7][5] = {{{&l_96[0],&l_96[1],&l_96[0],&l_96[1],&l_96[0]},{(void*)0,&l_96[1],&l_96[1],(void*)0,(void*)0},{&l_96[1],&l_96[1],&l_96[1],&l_96[1],&l_96[1]},{(void*)0,(void*)0,&l_96[1],&l_96[1],(void*)0},{&l_96[0],&l_96[1],&l_96[0],&l_96[1],&l_96[0]},{(void*)0,&l_96[1],&l_96[1],(void*)0,(void*)0},{&l_96[1],&l_96[1],&l_96[1],&l_96[1],&l_96[1]}}};
    const int32_t l_170[7] = {8L,8L,0x2C18F7AEL,8L,8L,0x2C18F7AEL,8L};
    uint32_t l_235 = 0xEF0C4D18L;
    int32_t **l_256[4][7][6] = {{{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0}},{{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171}},{{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171}},{{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0},{&g_171,&g_171,&g_171,(void*)0,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,(void*)0},{&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0}}};
    uint32_t l_348 = 0xA0469A33L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_96[i] = &g_97[1][3];
    if (((safe_unary_minus_func_uint32_t_u(l_82)) || (p_70 > (safe_rshift_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_34[0][0][0] != (safe_rshift_func_uint8_t_u_u(p_68.f0, 4))), 0x8BL)), (p_70 && ((safe_add_func_int8_t_s_s((((l_98 = (safe_unary_minus_func_uint64_t_u(18446744073709551606UL))) || p_70) || g_6[0]), 0UL)) , (-1L))))), 0x4022L)) <= l_82) > p_69), p_68.f0)))))
    { 
        int32_t *l_99 = &l_98;
        int32_t *l_100[2];
        int32_t *l_120 = &g_34[0][2][1];
        int64_t *l_125[2];
        int i;
        for (i = 0; i < 2; i++)
            l_100[i] = &g_34[0][0][2];
        for (i = 0; i < 2; i++)
            l_125[i] = &l_82;
        l_105++;
        (*l_99) = p_66;
        (*l_99) = (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((g_34[0][2][1] & (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(((void*)0 == l_120), (((safe_mod_func_int64_t_s_s((l_104[3][0] = (safe_rshift_func_int16_t_s_u(p_69, 6))), (*l_120))) , p_70) == (1UL ^ 0xBD0EL)))), l_101))), g_6[0])), 0x46FAD07BL)) , 0x2F1BL) , p_70), 0x26L)) , l_98), 0xFF881D67L));
        for (l_102 = (-23); (l_102 < (-6)); l_102 = safe_add_func_int64_t_s_s(l_102, 3))
        { 
            union U1 *l_131 = (void*)0;
            union U1 **l_130 = &l_131;
            uint16_t **l_143 = &l_96[1];
            int32_t l_146 = 9L;
            int32_t l_147[7];
            int i;
            for (i = 0; i < 7; i++)
                l_147[i] = (-7L);
            (*l_130) = l_128;
            g_34[0][1][0] &= (18446744073709551613UL > g_6[0]);
            if (((safe_mod_func_int64_t_s_s(g_97[0][1], g_129[0][1].f0)) == ((((*l_120) != (safe_mul_func_int8_t_s_s((g_97[0][3] != (l_125[0] != &l_82)), (+0x4CB2L)))) >= g_34[0][1][0]) >= g_6[0])))
            { 
                uint16_t l_142 = 0xA928L;
                (*l_120) &= 0x0103C393L;
                if (g_6[0])
                    break;
                for (l_103 = 16; (l_103 != 9); l_103 = safe_sub_func_int32_t_s_s(l_103, 1))
                { 
                    uint64_t l_141 = 18446744073709551615UL;
                    uint16_t ***l_144[7] = {&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143};
                    int i;
                    if (g_97[0][1])
                        break;
                    if (l_141)
                        continue;
                    (*l_99) |= 0xBED496A5L;
                    if (l_142)
                        break;
                    l_145[0][2][0] = l_143;
                }
            }
            else
            { 
                uint16_t l_148 = 0xCA01L;
                uint8_t *l_159 = &g_160;
                int8_t *l_163 = (void*)0;
                uint32_t l_166 = 0xB1EBA092L;
                int8_t *l_167[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_167[i] = &g_168;
                l_148++;
                g_34[0][0][0] ^= ((((((safe_mul_func_uint16_t_u_u(l_148, (safe_add_func_int8_t_s_s((g_168 ^= (safe_add_func_uint32_t_u_u((!(((((void*)0 != g_158) | ((*l_159) = g_6[0])) > (safe_lshift_func_int8_t_s_u((l_147[1] = p_69), 4))) && g_129[0][1].f0)), (safe_lshift_func_uint8_t_u_s((0xDAC16468L || g_97[0][1]), l_166))))), p_66)))) , 0x52E22B5A8EEEFA9ELL) <= g_169) , g_129[0][1].f0) <= l_170[0]) <= 1UL);
            }
        }
        g_171 = &g_34[0][2][1];
    }
    else
    { 
        p_67 = &g_34[0][2][1];
        p_67 = (g_6[0] , p_67);
    }
    for (g_168 = 18; (g_168 >= (-4)); g_168 = safe_sub_func_int8_t_s_s(g_168, 8))
    { 
        int32_t l_176[2];
        struct S0 l_188[1] = {{0x5E5AD212L,13308,-1L,9UL,0x120BB8A06608B690LL,-7L,0x6803L,1L}};
        uint16_t ***l_291[2];
        int32_t *l_295 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_176[i] = 0xEF612EB8L;
        for (i = 0; i < 2; i++)
            l_291[i] = &l_145[0][2][0];
        for (p_70 = 0; (p_70 != (-13)); p_70--)
        { 
            uint32_t l_195 = 0x7E68031BL;
            int32_t l_211 = 0L;
            int32_t l_212 = 0x80C69CC2L;
            uint8_t l_215[5] = {0x7CL,0x7CL,0x7CL,0x7CL,0x7CL};
            union U1 l_225 = {0xCC397EF0L};
            int8_t **l_231 = &g_230;
            int64_t l_234 = 0x88007250694299CBLL;
            int32_t l_246 = 1L;
            int32_t l_247[3][5][1] = {{{0xEED616F4L},{0x8D5280BDL},{0xC595CE7EL},{(-1L)},{0xC595CE7EL}},{{0x8D5280BDL},{0xEED616F4L},{0x8D5280BDL},{0xC595CE7EL},{(-1L)}},{{0xC595CE7EL},{0x8D5280BDL},{0xEED616F4L},{0x8D5280BDL},{0xC595CE7EL}}};
            int16_t l_264 = 0xEED9L;
            const uint16_t *l_294 = (void*)0;
            const uint16_t **l_293 = &l_294;
            const uint16_t ***l_292 = &l_293;
            int32_t *l_297 = &l_246;
            int16_t l_304 = 0xE518L;
            int i, j, k;
        }
    }
    ++l_348;
    g_353[1] &= ((&l_145[0][2][0] == &l_145[0][2][0]) || (safe_add_func_int32_t_s_s((((-10L) < p_66) >= (((((((p_68 , &g_260) == &p_67) != g_160) >= 0xA9F9L) <= 0x7960FBA0L) > g_34[0][2][1]) | p_69)), 1UL)));
    return &g_34[0][1][1];
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
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_97[i][j], "g_97[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_129[i][j].f0, "g_129[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_353[i], "g_353[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_355[i], "g_355[i]", print_hash_value);

    }
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_532.f0, "g_532.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_546[i][j][k], "g_546[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_611.f0, "g_611.f0", print_hash_value);
    transparent_crc(g_611.f1, "g_611.f1", print_hash_value);
    transparent_crc(g_611.f2, "g_611.f2", print_hash_value);
    transparent_crc(g_611.f3, "g_611.f3", print_hash_value);
    transparent_crc(g_611.f4, "g_611.f4", print_hash_value);
    transparent_crc(g_611.f5, "g_611.f5", print_hash_value);
    transparent_crc(g_611.f6, "g_611.f6", print_hash_value);
    transparent_crc(g_611.f7, "g_611.f7", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_691[i], "g_691[i]", print_hash_value);

    }
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1073[i].f0, "g_1073[i].f0", print_hash_value);
        transparent_crc(g_1073[i].f1, "g_1073[i].f1", print_hash_value);
        transparent_crc(g_1073[i].f2, "g_1073[i].f2", print_hash_value);
        transparent_crc(g_1073[i].f3, "g_1073[i].f3", print_hash_value);
        transparent_crc(g_1073[i].f4, "g_1073[i].f4", print_hash_value);
        transparent_crc(g_1073[i].f5, "g_1073[i].f5", print_hash_value);
        transparent_crc(g_1073[i].f6, "g_1073[i].f6", print_hash_value);
        transparent_crc(g_1073[i].f7, "g_1073[i].f7", print_hash_value);

    }
    transparent_crc(g_1161, "g_1161", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1416[i][j], "g_1416[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1418, "g_1418", print_hash_value);
    transparent_crc(g_1510.f0, "g_1510.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1593[i][j], "g_1593[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1706[i][j], "g_1706[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1707, "g_1707", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1708[i], "g_1708[i]", print_hash_value);

    }
    transparent_crc(g_1709, "g_1709", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1710[i], "g_1710[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1711[i][j], "g_1711[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1712, "g_1712", print_hash_value);
    transparent_crc(g_1713, "g_1713", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1714[i][j][k], "g_1714[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1715, "g_1715", print_hash_value);
    transparent_crc(g_1716, "g_1716", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1718, "g_1718", print_hash_value);
    transparent_crc(g_1719, "g_1719", print_hash_value);
    transparent_crc(g_1720, "g_1720", print_hash_value);
    transparent_crc(g_1721, "g_1721", print_hash_value);
    transparent_crc(g_1722, "g_1722", print_hash_value);
    transparent_crc(g_1954, "g_1954", print_hash_value);
    transparent_crc(g_2037, "g_2037", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
