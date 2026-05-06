// SPDX-License-Identifier: MIT
// cctest_csmith_72116282.c --- cctest case csmith_72116282 (csmith seed 1913741954)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6131b946 */

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

// Options:   -s 1913741954 -o /tmp/csmith_gen_50qvth2q/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint8_t  f4;
   uint16_t  f5;
};

struct S1 {
   int8_t  f0;
};

union U2 {
   const int16_t  f0;
   unsigned f1 : 8;
};


static int32_t g_3 = 0x748AFA2FL;
static struct S0 g_33[4] = {{0L,0x16L,0xDF2DDFDAL,0x0B56FE18L,0xD2L,0x84CBL},{0L,0x16L,0xDF2DDFDAL,0x0B56FE18L,0xD2L,0x84CBL},{0L,0x16L,0xDF2DDFDAL,0x0B56FE18L,0xD2L,0x84CBL},{0L,0x16L,0xDF2DDFDAL,0x0B56FE18L,0xD2L,0x84CBL}};
static uint64_t g_54 = 0x49A2DD318431BB57LL;
static int32_t g_56 = 0L;
static struct S1 g_67 = {0x44L};
static int32_t g_82 = 0xE4505C26L;
static uint32_t g_87 = 0xEB77D2D8L;
static int32_t g_104 = (-1L);
static int64_t g_107 = (-1L);
static int32_t g_116 = (-4L);
static uint8_t g_117 = 1UL;
static int16_t g_123 = 8L;
static uint8_t g_136 = 1UL;
static union U2 g_137 = {0x2B7BL};



static union U2  func_1(void);
static uint16_t  func_8(uint16_t  p_9, int32_t  p_10, int32_t  p_11, int64_t  p_12);
static struct S1  func_13(int32_t  p_14, int64_t  p_15);
static const struct S0  func_16(int16_t  p_17, struct S0  p_18, uint32_t  p_19, struct S0  p_20);




static union U2  func_1(void)
{ 
    int16_t l_2[3];
    const uint16_t l_32 = 0UL;
    int32_t l_115 = 9L;
    union U2 l_138[1] = {{0x57D0L}};
    int i;
    for (i = 0; i < 3; i++)
        l_2[i] = 0x8FB7L;
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t l_4 = (-6L);
        struct S1 l_128 = {0x3FL};
        l_4 = g_3;
        for (l_4 = 2; (l_4 >= 0); l_4 -= 1)
        { 
            uint16_t l_7[1][1];
            int16_t l_31 = 0xAB8DL;
            uint32_t l_34 = 0xF2B5D06DL;
            int32_t l_135 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_7[i][j] = 1UL;
            }
            if ((safe_div_func_uint64_t_u_u(l_7[0][0], ((func_8((func_13((func_16((l_2[g_3] |= (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((((g_3 >= (safe_lshift_func_int16_t_s_u(l_31, l_31))) != 65535UL) , 65535UL) != g_3) < g_3), 1L)), g_3)), l_32)), l_4))), g_33[0], l_34, g_33[1]) , 0xCD07CA36L), l_7[0][0]) , l_7[0][0]), l_34, g_33[0].f5, g_33[0].f1) >= 8UL) || g_107))))
            { 
                uint32_t l_120 = 5UL;
                g_117--;
                ++l_120;
            }
            else
            { 
                const int32_t l_127 = 0x4BCBF565L;
                g_123 ^= g_3;
                l_128 = func_13(((!(2L & ((safe_lshift_func_uint16_t_u_u(0x5DD0L, 12)) > (g_82 == l_34)))) ^ l_127), l_2[g_3]);
                g_136 = (safe_add_func_int16_t_s_s(g_33[0].f2, ((safe_sub_func_uint16_t_u_u((~(~6L)), l_32)) & (l_135 |= l_32))));
            }
            return g_137;
        }
    }
    return l_138[0];
}



static uint16_t  func_8(uint16_t  p_9, int32_t  p_10, int32_t  p_11, int64_t  p_12)
{ 
    return p_9;
}



static struct S1  func_13(int32_t  p_14, int64_t  p_15)
{ 
    struct S1 l_112[1][5][4] = {{{{0x79L},{0x7CL},{0x79L},{0x7CL}},{{0x79L},{0x7CL},{0x79L},{0x7CL}},{{0x79L},{0x7CL},{0x79L},{0x7CL}},{{0x79L},{0x7CL},{0x79L},{0x7CL}},{{0x79L},{0x7CL},{0x79L},{0x7CL}}}};
    struct S1 l_113 = {0x13L};
    struct S1 l_114[4][5][3] = {{{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}}},{{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}}},{{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}}},{{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}},{{9L},{9L},{9L}}}};
    int i, j, k;
    l_113 = l_112[0][4][0];
    return l_114[2][3][0];
}



static const struct S0  func_16(int16_t  p_17, struct S0  p_18, uint32_t  p_19, struct S0  p_20)
{ 
    uint64_t l_59 = 18446744073709551610UL;
    struct S1 l_66 = {0L};
    int32_t l_72 = (-1L);
    int64_t l_76 = 0x73E42CDC5007C8A8LL;
    int32_t l_81 = (-9L);
    int32_t l_84 = 1L;
    const struct S0 l_111[3][5] = {{{1L,0x0DL,0x06F5C0CDL,0x3D7C5F07L,0UL,0xDB38L},{0xD0B78A11L,2UL,0xC282E8BCL,4294967295UL,255UL,0x20CDL},{0x9F9AD404L,0xE4L,0xCA980D52L,4294967293UL,4UL,65535UL},{0x9F9AD404L,0xE4L,0xCA980D52L,4294967293UL,4UL,65535UL},{0xD0B78A11L,2UL,0xC282E8BCL,4294967295UL,255UL,0x20CDL}},{{1L,0x0DL,0x06F5C0CDL,0x3D7C5F07L,0UL,0xDB38L},{0xD0B78A11L,2UL,0xC282E8BCL,4294967295UL,255UL,0x20CDL},{0x9F9AD404L,0xE4L,0xCA980D52L,4294967293UL,4UL,65535UL},{0x9F9AD404L,0xE4L,0xCA980D52L,4294967293UL,4UL,65535UL},{0xD0B78A11L,2UL,0xC282E8BCL,4294967295UL,255UL,0x20CDL}},{{1L,0x0DL,0x06F5C0CDL,0x3D7C5F07L,0UL,0xDB38L},{0xD0B78A11L,2UL,0xC282E8BCL,4294967295UL,255UL,0x20CDL},{0x9F9AD404L,0xE4L,0xCA980D52L,4294967293UL,4UL,65535UL},{0x9F9AD404L,0xE4L,0xCA980D52L,4294967293UL,4UL,65535UL},{0xD0B78A11L,2UL,0xC282E8BCL,4294967295UL,255UL,0x20CDL}}};
    int i, j;
lbl_80:
    for (p_18.f3 = 0; (p_18.f3 <= 15); p_18.f3 = safe_add_func_int8_t_s_s(p_18.f3, 6))
    { 
        int32_t l_53 = 1L;
        int32_t l_55 = 3L;
        for (p_18.f4 = 4; (p_18.f4 <= 57); p_18.f4++)
        { 
            g_56 = (l_55 &= ((safe_sub_func_uint16_t_u_u(5UL, (safe_sub_func_int32_t_s_s((((l_53 = (g_54 = (safe_add_func_int32_t_s_s(g_33[0].f5, (safe_div_func_uint16_t_u_u(p_18.f2, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_17 &= (safe_rshift_func_uint8_t_u_s(l_53, 2))), 13)), 5)))))))) || p_20.f5) ^ g_33[0].f2), p_18.f2)))) , g_33[0].f1));
        }
        return p_18;
    }
    if ((255UL < 247UL))
    { 
        int64_t l_57[4] = {2L,2L,2L,2L};
        int32_t l_58 = 0L;
        int i;
        ++l_59;
        l_58 ^= ((safe_div_func_int16_t_s_s(3L, (l_57[1] && ((-7L) == ((g_54 = l_57[0]) | l_59))))) , 0x3460EE42L);
        for (p_18.f5 = 0; (p_18.f5 >= 59); p_18.f5++)
        { 
            int8_t l_77 = 0xF2L;
            int32_t l_83 = 0xC803B8C7L;
            int32_t l_85 = 0L;
            int32_t l_86 = 0x927B9231L;
            if (l_57[2])
            { 
                g_67 = l_66;
                l_72 = (safe_rshift_func_uint8_t_u_s(l_58, (p_18.f2 || (safe_div_func_int16_t_s_s(((g_54 <= g_33[0].f2) && g_67.f0), p_18.f5)))));
            }
            else
            { 
                uint32_t l_75 = 1UL;
                int32_t l_78 = 1L;
                int32_t l_79 = 1L;
                l_79 = ((safe_rshift_func_uint8_t_u_s((g_33[0].f4 = (((((l_72 = (l_78 = (l_58 ^= (((l_75 , (g_33[0].f0 || (l_76 >= (0xDBC7L > g_54)))) & l_77) == 0x833481FFL)))) | 0L) && l_58) || g_33[0].f4) ^ l_76)), 0)) , l_72);
                if (l_77)
                    continue;
                if (p_18.f5)
                    goto lbl_80;
            }
            g_87--;
            if (((p_20.f3 = (safe_mod_func_int64_t_s_s((-5L), g_33[0].f2))) ^ (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0xB2EBL, 14)), (((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(255UL, 0x56L)), g_87)) < l_85) | p_18.f2))), l_59)), p_19))))
            { 
                return g_33[0];
            }
            else
            { 
                g_104 |= g_82;
                g_107 = (safe_div_func_uint8_t_u_u(g_33[0].f1, l_57[0]));
            }
        }
    }
    else
    { 
        uint64_t l_108 = 4UL;
        l_66 = g_67;
        l_108--;
    }
    return l_111[2][3];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_33[i].f0, "g_33[i].f0", print_hash_value);
        transparent_crc(g_33[i].f1, "g_33[i].f1", print_hash_value);
        transparent_crc(g_33[i].f2, "g_33[i].f2", print_hash_value);
        transparent_crc(g_33[i].f3, "g_33[i].f3", print_hash_value);
        transparent_crc(g_33[i].f4, "g_33[i].f4", print_hash_value);
        transparent_crc(g_33[i].f5, "g_33[i].f5", print_hash_value);

    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
