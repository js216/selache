// SPDX-License-Identifier: MIT
// cctest_csmith_c19baf86.c --- cctest case csmith_c19baf86 (csmith seed 3248205702)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x83abec32 */

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

// Options:   -s 3248205702 -o /tmp/csmith_gen_rkjhsjg6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const unsigned f0 : 17;
   int32_t  f1;
   unsigned f2 : 10;
   unsigned f3 : 4;
};
#pragma pack(pop)

struct S1 {
   unsigned f0 : 26;
   unsigned f1 : 23;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const signed f0 : 9;
   unsigned f1 : 30;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int32_t  f0;
   unsigned f1 : 9;
   unsigned f2 : 28;
   unsigned f3 : 1;
};
#pragma pack(pop)

union U4 {
   int32_t  f0;
   uint32_t  f1;
};


static int32_t g_9 = 0x1E12AA53L;
static struct S0 g_31 = {256,0x27F44FB6L,22,0};
static struct S2 g_33[4][2] = {{{-16,21190},{-12,22336}},{{-12,22336},{-16,21190}},{{-12,22336},{-12,22336}},{{-16,21190},{-12,22336}}};
static struct S3 g_48[5] = {{0xB60A95A2L,14,14706,0},{0xB60A95A2L,14,14706,0},{0xB60A95A2L,14,14706,0},{0xB60A95A2L,14,14706,0},{0xB60A95A2L,14,14706,0}};
static uint32_t g_86[3] = {0x8475ADB6L,0x8475ADB6L,0x8475ADB6L};
static uint32_t g_87 = 0xC76A600EL;
static int32_t g_106[5] = {0x61D1304DL,0x61D1304DL,0x61D1304DL,0x61D1304DL,0x61D1304DL};
static uint32_t g_112 = 4294967295UL;
static uint32_t g_124 = 0UL;
static int16_t g_143 = 0x7DD6L;
static int64_t g_149[4][3][1] = {{{0L},{0xE24373CAA1AAD416LL},{0L}},{{0xE24373CAA1AAD416LL},{0L},{0xE24373CAA1AAD416LL}},{{0L},{0xE24373CAA1AAD416LL},{0L}},{{0xE24373CAA1AAD416LL},{0L},{0xE24373CAA1AAD416LL}}};
static uint8_t g_168 = 0x86L;



static int32_t  func_1(void);
static int32_t  func_15(struct S0  p_16, uint32_t  p_17, struct S3  p_18, struct S2  p_19, const struct S2  p_20);
static struct S0  func_21(uint16_t  p_22, uint64_t  p_23, int32_t  p_24);
static struct S1  func_34(const uint16_t  p_35, uint32_t  p_36, const int16_t  p_37, struct S3  p_38, struct S3  p_39);




static int32_t  func_1(void)
{ 
    uint8_t l_8 = 0xA7L;
    int32_t l_10[2];
    struct S3 l_129 = {0L,19,13818,0};
    int16_t l_130 = 9L;
    int i;
    for (i = 0; i < 2; i++)
        l_10[i] = 0xC36FE5ABL;
    if ((l_10[0] = ((safe_mul_func_int8_t_s_s(0x69L, (g_9 = (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(l_8, (1L || (0x0BL <= l_8)))), l_8))))) , 0xCF04B064L)))
    { 
        for (l_8 = 0; l_8 < 2; l_8 += 1)
        {
            l_10[l_8] = 0x5B641B44L;
        }
    }
    else
    { 
        const int32_t l_27 = (-6L);
        struct S3 l_32 = {6L,12,8107,0};
        int32_t l_133 = 0xBBE5BF61L;
        uint64_t l_146 = 18446744073709551615UL;
        int32_t l_147[2];
        uint32_t l_148 = 0xC0AA097DL;
        int i;
        for (i = 0; i < 2; i++)
            l_147[i] = 0x7B9BCB20L;
        for (l_8 = 0; (l_8 <= 1); l_8 += 1)
        { 
            int i;
            if ((((g_124 ^= (safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(1UL, func_15(func_21(l_10[l_8], (safe_sub_func_int8_t_s_s((l_27 <= ((g_9 ^ l_10[0]) != 65528UL)), 0L)), g_9), g_9, l_32, g_33[2][1], g_33[2][1]))), g_33[2][1].f0))) && 18446744073709551611UL) && l_8))
            { 
                return l_10[0];
            }
            else
            { 
                return g_48[0].f3;
            }
        }
        l_133 = (g_106[3] &= (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_32.f3 < (l_129 , l_130)), (safe_div_func_uint32_t_u_u(l_129.f0, l_32.f2)))), l_32.f1)));
        if ((((g_149[1][0][0] = ((safe_div_func_int16_t_s_s(((l_148 ^= (((+l_129.f2) & ((l_133 = 4294967295UL) == ((safe_lshift_func_int16_t_s_u((((safe_add_func_int64_t_s_s(((l_10[0] = (safe_mul_func_int16_t_s_s((((((g_143 = 0UL) <= (((safe_rshift_func_uint16_t_u_u(l_32.f2, l_146)) & 1UL) >= g_31.f3)) == l_32.f1) || l_146) , g_9), l_32.f2))) && 7UL), l_147[1])) & 1UL) >= 0x551306FFL), l_32.f0)) , g_33[2][1].f1))) == g_48[0].f1)) || 0L), 0x24F7L)) & 5UL)) && l_129.f1) , (-1L)))
        { 
            uint32_t l_150 = 18446744073709551606UL;
            l_150--;
        }
        else
        { 
            int64_t l_155 = 0xFDC46FE8B5CC303BLL;
            uint8_t l_169 = 253UL;
            g_106[2] |= ((safe_mul_func_uint8_t_u_u(l_155, (+(!(safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((g_168 = ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((((-10L) < ((safe_sub_func_uint8_t_u_u((((0xC8L || (g_33[2][1].f1 & l_129.f3)) <= l_32.f3) != l_129.f1), 0x65L)) & g_48[0].f3)) || (-7L)), 0x425CBB4FL)), g_149[1][0][0])) || g_31.f3)) > g_31.f2), 8UL)), 1UL)))))) | l_169);
        }
    }
    return g_31.f2;
}



static int32_t  func_15(struct S0  p_16, uint32_t  p_17, struct S3  p_18, struct S2  p_19, const struct S2  p_20)
{ 
    uint32_t l_42[2][1];
    int32_t l_47 = 0x85AA7F79L;
    struct S3 l_49 = {0xCCBD95D6L,8,16246,0};
    struct S1 l_63 = {4034,1366};
    int32_t l_88 = 0L;
    uint64_t l_89 = 0xE721E4501C69F0B4LL;
    int32_t l_116 = 8L;
    int32_t l_117[5] = {0xAABC806BL,0xAABC806BL,0xAABC806BL,0xAABC806BL,0xAABC806BL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_42[i][j] = 0xDF961DFAL;
    }
    l_63 = func_34(p_19.f0, (safe_mul_func_uint8_t_u_u(((l_42[0][0] |= 0x47FDL) == (safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(g_31.f0, l_47)) & g_31.f2) == p_17), p_18.f1))), g_33[2][1].f0)), l_47, g_48[0], l_49);
    if (g_33[2][1].f1)
    { 
        int32_t l_64 = 0L;
        int32_t l_65 = 1L;
        for (p_18.f0 = 0; (p_18.f0 <= 0); p_18.f0 += 1)
        { 
            uint16_t l_72 = 5UL;
            for (g_31.f1 = 0; (g_31.f1 >= 0); g_31.f1 -= 1)
            { 
                uint16_t l_66 = 0x5FA6L;
                l_66++;
            }
            for (g_9 = 0; (g_9 <= 0); g_9 += 1)
            { 
                int32_t l_69 = 0xC15C2583L;
                l_69 |= g_31.f0;
                l_65 = (6L ^ (safe_div_func_int64_t_s_s((l_72 , ((p_17 | (((l_49.f1 || 0xC6AAL) <= p_18.f3) != g_48[0].f1)) ^ p_16.f0)), g_48[0].f0)));
            }
        }
        if (p_16.f2)
        { 
            struct S3 l_73[1][1] = {{{0x7EF0591FL,20,9775,0}}};
            int i, j;
            l_73[0][0] = p_18;
        }
        else
        { 
            int8_t l_74[3];
            int32_t l_75 = 0x52146605L;
            int i;
            for (i = 0; i < 3; i++)
                l_74[i] = 1L;
            l_75 = (g_31.f0 , (((g_9 = (g_9 > (l_64 | 0UL))) && g_31.f0) , l_74[1]));
        }
        g_87 |= ((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((l_49 = p_18) , ((g_86[1] = (0xFAL || ((g_31.f3 || (((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_17, g_9)), l_64)) , (-3L)) ^ 0xC0C2345427DA8976LL) && l_49.f2) < l_65)) & l_49.f3))) && g_48[0].f3)), 4)), l_64)), 2)) || 0L);
    }
    else
    { 
        int8_t l_90 = 0x26L;
        struct S1 l_110[3][2][3] = {{{{7899,2425},{3965,2061},{1123,2234}},{{3965,2061},{7899,2425},{7899,2425}}},{{{1123,2234},{450,2022},{6356,1213}},{{7206,1952},{7899,2425},{1123,2234}}},{{{6069,707},{6069,707},{1123,2234}},{{7899,2425},{7206,1952},{6356,1213}}}};
        int32_t l_115 = 0xE70AEA97L;
        int32_t l_118 = 0x0BD77F32L;
        int32_t l_119 = 1L;
        int32_t l_120[3];
        uint32_t l_121[1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_120[i] = 0L;
        for (i = 0; i < 1; i++)
            l_121[i] = 0UL;
        for (l_47 = 4; (l_47 >= 0); l_47 -= 1)
        { 
            union U4 l_91 = {0x9312FBD8L};
            uint8_t l_105 = 1UL;
            int32_t l_111 = (-4L);
            l_88 = (-9L);
            if ((l_89 | p_16.f3))
            { 
                return l_90;
            }
            else
            { 
                int16_t l_104 = 0x1954L;
                int32_t l_107 = 0xB4210920L;
                l_107 = (l_91 , (((((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(p_19.f1, (p_20.f0 < ((g_106[2] = (((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((((g_9 = (((safe_mod_func_int64_t_s_s((((safe_div_func_int8_t_s_s(l_104, p_16.f3)) , g_31.f0) != p_16.f1), l_104)) > g_31.f3) , p_19.f0)) <= 1UL) >= g_48[0].f0) & l_104) , (-1L)), l_104)), l_105)) != p_20.f0) == p_20.f1)) , 0x22312402L)))) , g_86[1]), p_19.f1)) ^ (-5L)) <= g_33[2][1].f1) > p_20.f1) , p_20.f0));
            }
            for (l_91.f0 = 0; (l_91.f0 <= 0); l_91.f0 += 1)
            { 
                int i, j;
                g_106[3] = (safe_mod_func_uint16_t_u_u((0xAE99D52E2DA10ACFLL ^ (l_110[1][0][0] , (((--g_112) , (l_88 = ((0x59253971L <= (l_42[(l_91.f0 + 1)][l_91.f0] | l_110[1][0][0].f1)) ^ l_42[(l_91.f0 + 1)][l_91.f0]))) , g_33[2][1].f0))), p_16.f2));
                l_115 = 0xDBDE630CL;
                g_48[(l_91.f0 + 3)] = g_48[l_47];
            }
        }
        ++l_121[0];
        for (l_90 = 0; l_90 < 2; l_90 += 1)
        {
            for (p_17 = 0; p_17 < 1; p_17 += 1)
            {
                l_42[l_90][p_17] = 0UL;
            }
        }
    }
    return l_63.f1;
}



static struct S0  func_21(uint16_t  p_22, uint64_t  p_23, int32_t  p_24)
{ 
    uint16_t l_28 = 3UL;
    l_28--;
    return g_31;
}



static struct S1  func_34(const uint16_t  p_35, uint32_t  p_36, const int16_t  p_37, struct S3  p_38, struct S3  p_39)
{ 
    int32_t l_54 = (-2L);
    struct S1 l_62[3][5] = {{{5783,1815},{6909,1444},{5783,1815},{6909,1444},{5783,1815}},{{2254,1986},{2254,1986},{2254,1986},{2254,1986},{2254,1986}},{{5783,1815},{6909,1444},{5783,1815},{6909,1444},{5783,1815}}};
    int i, j;
    l_54 = (safe_add_func_uint8_t_u_u(1UL, (safe_rshift_func_uint8_t_u_u(l_54, 4))));
    if ((0UL ^ l_54))
    { 
        uint16_t l_57 = 0UL;
        for (p_38.f0 = 0; (p_38.f0 > 8); p_38.f0 = safe_add_func_int8_t_s_s(p_38.f0, 1))
        { 
            if (l_57)
                break;
            for (p_39.f0 = 1; (p_39.f0 > 13); p_39.f0++)
            { 
                g_9 = (-1L);
            }
        }
    }
    else
    { 
        uint16_t l_60[3];
        int32_t l_61 = 0x1105CA7CL;
        int i;
        for (i = 0; i < 3; i++)
            l_60[i] = 0x8709L;
        l_61 |= (0x0DAEE1FA0179E4C0LL ^ l_60[0]);
    }
    return l_62[2][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_33[i][j].f0, "g_33[i][j].f0", print_hash_value);
            transparent_crc(g_33[i][j].f1, "g_33[i][j].f1", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_48[i].f0, "g_48[i].f0", print_hash_value);
        transparent_crc(g_48[i].f1, "g_48[i].f1", print_hash_value);
        transparent_crc(g_48[i].f2, "g_48[i].f2", print_hash_value);
        transparent_crc(g_48[i].f3, "g_48[i].f3", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_149[i][j][k], "g_149[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_168, "g_168", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
