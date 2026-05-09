// SPDX-License-Identifier: MIT
// cctest_csmith_7fe992f1.c --- cctest case csmith_7fe992f1 (csmith seed 2146013937)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6cb1d379 */

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

// Options:   -s 2146013937 -o /tmp/csmith_gen_122vj4tz/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const unsigned f0 : 23;
   unsigned f1 : 18;
   signed f2 : 13;
   signed f3 : 4;
   signed f4 : 5;
   signed f5 : 10;
};

union U1 {
   uint32_t  f0;
   unsigned f1 : 15;
   uint32_t  f2;
   uint16_t  f3;
   uint64_t  f4;
};


static uint16_t g_24 = 0x022AL;
static const struct S0 g_35 = {1018,159,51,-2,1,6};
static uint8_t g_58 = 255UL;
static uint16_t g_72 = 1UL;
static int64_t g_77 = (-6L);
static int16_t g_80[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint64_t g_83[6] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
static int32_t g_89 = 0x88CDAF70L;
static uint64_t g_108 = 0UL;
static uint64_t g_115[1] = {18446744073709551615UL};
static int64_t g_118 = 3L;
static int32_t g_120 = 1L;
static int32_t g_132 = (-1L);
static uint64_t *g_141[3] = {&g_83[5],&g_83[5],&g_83[5]};
static uint64_t **g_140 = &g_141[0];
static int16_t g_143 = (-1L);
static union U1 g_144 = {0x379CB2EEL};
static int8_t g_155 = 7L;
static const uint64_t g_223 = 0x7820DD73F1AFC666LL;
static const uint64_t *g_222 = &g_223;
static const uint64_t **g_221 = &g_222;
static int32_t g_226 = 0xD9D43D6FL;
static union U1 g_232 = {18446744073709551615UL};
static int32_t *g_270[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static struct S0 g_283 = {7,443,52,0,-2,16};
static struct S0 g_287 = {2374,495,47,-2,-0,21};
static int32_t g_337 = 3L;
static int16_t g_396 = 0L;
static uint16_t g_401 = 0x7381L;
static uint32_t g_408 = 0UL;
static int32_t *g_421 = &g_89;
static int32_t g_428 = 0x9FDC5CA6L;
static int32_t g_429 = (-8L);
static uint64_t g_430 = 1UL;
static struct S0 g_445 = {2604,232,-1,-1,-0,2};
static uint32_t g_455 = 0x23FE4509L;



static uint8_t  func_1(void);
static int32_t  func_2(uint16_t  p_3, uint8_t  p_4, uint16_t  p_5, union U1  p_6, int8_t  p_7);
static uint16_t  func_8(uint64_t  p_9, int16_t  p_10, union U1  p_11, uint8_t  p_12);
static uint64_t  func_19(const int64_t  p_20, int32_t  p_21, uint8_t  p_22);
static int8_t  func_29(const struct S0  p_30, int16_t  p_31, int32_t  p_32, int64_t  p_33, union U1  p_34);
static uint64_t  func_41(union U1  p_42);
static int16_t  func_44(uint64_t  p_45, uint64_t  p_46, int32_t  p_47);
static uint64_t  func_61(uint32_t  p_62, uint8_t * p_63, struct S0  p_64, uint8_t * p_65, uint32_t  p_66);




static uint8_t  func_1(void)
{ 
    int64_t l_23[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    union U1 l_43 = {0xCDEE94CCL};
    int16_t *l_142 = &g_143;
    int8_t *l_154 = &g_155;
    int32_t l_424 = 0x9FF676ECL;
    int32_t l_425 = (-1L);
    int32_t l_426[6] = {4L,4L,4L,4L,4L,4L};
    int32_t l_465 = 0x50B050C4L;
    int32_t **l_471 = &g_421;
    int32_t *l_472[7][4];
    uint32_t l_473 = 0x41C2A41CL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_472[i][j] = &g_132;
    }
    if ((func_2(func_8((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((*l_154) = (safe_mod_func_uint64_t_u_u(func_19((l_23[3] ^ 65535UL), g_24, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((*l_154) = func_29(g_35, g_24, (safe_mul_func_uint16_t_u_u((~(safe_rshift_func_int16_t_s_u(((*l_142) |= (0UL <= func_41(l_43))), l_43.f0))), g_35.f5)), l_23[0], g_144)), 5)), g_144.f1))), l_43.f2))) == g_35.f1), g_35.f4)), g_77)), g_80[2], g_232, l_43.f2), g_35.f5, g_232.f0, g_232, g_35.f1) ^ g_283.f1))
    { 
        int32_t *l_422[1];
        int32_t **l_423 = &g_421;
        int16_t l_427 = 0xFEEFL;
        uint16_t l_433 = 0xF5DEL;
        int i;
        for (i = 0; i < 1; i++)
            l_422[i] = &g_132;
        (*l_423) = l_422[0];
        ++g_430;
        --l_433;
        for (g_408 = (-26); (g_408 < 21); g_408 = safe_add_func_uint8_t_u_u(g_408, 4))
        { 
            uint16_t *l_438 = &l_433;
            uint16_t *l_439 = (void*)0;
            uint16_t *l_440[7] = {&g_401,&g_401,&g_401,&g_401,&g_401,&g_401,&g_401};
            int i;
            (**l_423) = (l_43.f3 > (g_232.f3 = ((*l_438) = g_35.f3)));
        }
    }
    else
    { 
        uint8_t l_452 = 0xDFL;
        int8_t l_466 = 0x22L;
        union U1 l_467 = {5UL};
        union U1 *l_468 = &g_144;
        for (g_144.f3 = 0; (g_144.f3 <= 0); g_144.f3 += 1)
        { 
            uint32_t l_453 = 3UL;
            for (g_428 = 0; (g_428 >= 0); g_428 -= 1)
            { 
                struct S0 *l_442[7][3] = {{&g_287,&g_287,&g_287},{&g_287,&g_283,(void*)0},{&g_287,&g_287,&g_287},{&g_283,(void*)0,(void*)0},{&g_287,&g_287,&g_287},{&g_283,(void*)0,(void*)0},{&g_287,&g_287,&g_287}};
                struct S0 **l_441 = &l_442[0][0];
                int32_t *l_454[6];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_454[i] = &g_337;
                l_426[(g_144.f3 + 2)] ^= ((g_115[g_144.f3] != (0xFFCCEA60AA52B89BLL && g_115[g_428])) && (l_23[3] , (((*l_441) = &g_283) == &g_287)));
                (*g_421) = ((safe_add_func_int64_t_s_s((g_445 , (safe_sub_func_uint64_t_u_u((((safe_add_func_int8_t_s_s(g_89, (((void*)0 == &g_144) & (0x36L <= (((safe_rshift_func_int16_t_s_s((g_226 != l_452), g_35.f1)) | 254UL) > (-3L)))))) && g_287.f2) ^ (-8L)), 0x6C5ED48029C2B25CLL))), l_426[(g_144.f3 + 2)])) && l_453);
                (*g_421) = (*g_421);
                --g_455;
            }
            if ((*g_421))
                continue;
            return g_72;
        }
        for (l_452 = (-3); (l_452 <= 12); l_452 = safe_add_func_int16_t_s_s(l_452, 1))
        { 
            int64_t l_460 = 0x2840A634C69E78C4LL;
            return l_460;
        }
        (*g_421) ^= ((((safe_mul_func_int8_t_s_s(g_80[3], ((*l_154) = (safe_mul_func_uint16_t_u_u(l_465, (g_232 , ((l_466 , (l_467 = (g_232 , ((*l_468) = l_467)))) , (safe_lshift_func_uint8_t_u_s((g_144.f2 || l_425), l_23[0]))))))))) != g_283.f2) ^ (*g_222)) >= 0UL);
    }
    (*l_471) = &g_337;
    g_287.f3 |= (*g_421);
    return l_473;
}



static int32_t  func_2(uint16_t  p_3, uint8_t  p_4, uint16_t  p_5, union U1  p_6, int8_t  p_7)
{ 
    uint16_t *l_245 = (void*)0;
    uint16_t *l_246 = &g_232.f3;
    int32_t l_271 = 1L;
    struct S0 *l_282 = &g_283;
    struct S0 *l_286 = &g_287;
    uint8_t l_354 = 0x86L;
    int32_t l_360 = (-7L);
    int32_t l_361[1];
    int32_t **l_391 = (void*)0;
    int32_t *** const l_390 = &l_391;
    int64_t *l_409 = &g_77;
    const uint8_t *l_411 = &l_354;
    const uint8_t **l_410 = &l_411;
    uint8_t *l_413 = &g_58;
    uint8_t **l_412 = &l_413;
    uint8_t ***l_414 = &l_412;
    int16_t *l_417 = &g_143;
    uint32_t l_418 = 0x65F17910L;
    uint32_t *l_419 = &g_144.f2;
    int32_t *l_420 = &g_89;
    int i;
    for (i = 0; i < 1; i++)
        l_361[i] = 0xA7E5B790L;
    for (p_6.f3 = 27; (p_6.f3 >= 17); p_6.f3 = safe_sub_func_int8_t_s_s(p_6.f3, 3))
    { 
        union U1 l_235 = {0x5313487DL};
        int32_t *l_256 = &g_120;
        int32_t *l_257[7][4] = {{&g_89,(void*)0,(void*)0,&g_89},{(void*)0,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89},{&g_89,(void*)0,(void*)0,&g_89},{(void*)0,&g_89,&g_89,&g_89},{&g_89,&g_89,&g_89,&g_89},{&g_89,(void*)0,&g_89,&g_89}};
        int32_t *l_269 = &g_226;
        int32_t **l_268 = &l_269;
        int8_t *l_272 = &g_155;
        struct S0 *l_285 = &g_283;
        int16_t l_323 = 0xF39EL;
        union U1 *l_371 = &g_232;
        uint64_t **l_375 = &g_141[0];
        uint32_t l_385[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_385[i] = 0xB69E625CL;
        g_132 ^= (l_235 , (safe_lshift_func_int8_t_s_u(((((((*l_256) |= (safe_unary_minus_func_uint32_t_u(((safe_add_func_int32_t_s_s(0x387034F7L, ((safe_lshift_func_uint8_t_u_s(0x58L, (((p_6 , l_245) != (l_246 = &g_24)) | ((safe_sub_func_uint16_t_u_u(((((safe_div_func_int64_t_s_s(((!(safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(0x2FCEL, p_6.f3)), p_6.f3))) <= g_226), 0x4FAFFE66ED0BEC7ALL)) < 0xFCB4D802L) < g_232.f2) , 1UL), g_35.f3)) || (-3L))))) , l_235.f0))) && l_235.f3)))) & 0x6A276C94L) && 0UL) ^ p_6.f3) , p_4), 7)));
        if ((((((*l_272) ^= ((0x1D9242497500012FLL && ((safe_lshift_func_int8_t_s_u(0x88L, (safe_sub_func_uint8_t_u_u(7UL, (safe_rshift_func_uint16_t_u_u(0x2EEBL, p_6.f3)))))) != ((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((*l_268) = &g_226) == g_270[5]), 0xAA73L)) >= 4294967286UL), l_271)) | (-5L)))) , p_7)) == g_35.f0) <= g_144.f1) == g_80[5]))
        { 
            uint32_t l_273 = 0xE1413FFBL;
            struct S0 **l_284 = &l_282;
            uint32_t *l_288 = &g_144.f2;
            uint32_t *l_289 = (void*)0;
            uint32_t *l_290 = &g_232.f2;
            uint16_t *l_294 = &g_72;
            int32_t **l_295 = &l_256;
            l_273 = g_232.f1;
            (*l_256) = ((((safe_mod_func_uint16_t_u_u(((*l_294) = ((*l_246) = ((l_273 <= ((safe_rshift_func_int8_t_s_s(((l_271 > (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((*l_290) = ((*l_288) |= (((*l_284) = l_282) == (l_286 = l_285)))), p_4)), g_35.f4))) ^ (!((((safe_add_func_int8_t_s_s(l_273, p_4)) < l_273) != (-1L)) & p_6.f3))), 1)) < p_5)) , (*l_256)))), 65529UL)) || g_24) , l_273) < g_283.f4);
            (*l_295) = &g_132;
            (*l_256) &= g_144.f2;
            l_271 = 0x94450F6BL;
        }
        else
        { 
            uint8_t l_296 = 0x9AL;
            int8_t l_300[6];
            int32_t **l_312 = &l_257[3][0];
            int32_t ***l_311 = &l_312;
            int32_t ****l_313 = &l_311;
            int32_t ***l_314 = &l_312;
            uint64_t *l_321[3];
            int32_t l_322 = 0xA77C499EL;
            int32_t l_362 = 0L;
            int32_t *l_395 = &g_226;
            int i;
            for (i = 0; i < 6; i++)
                l_300[i] = 0x58L;
            for (i = 0; i < 3; i++)
                l_321[i] = &g_232.f4;
            l_296++;
            if (((l_271 & (((*l_272) ^= (+((0L > l_300[2]) , ((~(-9L)) , (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((l_322 = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((((l_314 = ((*l_313) = l_311)) != ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(((1L == (safe_add_func_uint8_t_u_u(1UL, 0x3CL))) || 0L), 0)) , 247UL), 2)) , (void*)0)) , (*l_282)) , g_72))), 0L)), 1UL))) || 0x709BB61F359F1E09LL), 6)), 4)))))) | p_6.f3)) & l_323))
            { 
                int8_t l_328 = (-1L);
                int32_t l_352 = 0x476AF6C5L;
                int32_t l_355 = (-6L);
                uint16_t l_357 = 0xC81EL;
                uint32_t l_363 = 1UL;
                int32_t l_367 = 1L;
                uint32_t l_368[2][3] = {{0UL,0x1EAFA40FL,0UL},{0UL,0x1EAFA40FL,0UL}};
                int i, j;
                if (p_3)
                { 
                    uint16_t l_327[3];
                    const int32_t *l_349 = &g_120;
                    const int32_t **l_350 = &l_349;
                    int64_t *l_351 = &g_77;
                    int8_t *l_353 = &l_300[4];
                    int32_t l_356 = 1L;
                    int32_t l_366 = 0x459D8328L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_327[i] = 0x9F2FL;
                    l_355 = (safe_unary_minus_func_uint64_t_u((safe_mod_func_uint32_t_u_u(g_287.f4, (((l_327[1] > l_328) | ((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_283.f0, ((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_337 < (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((~((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((*l_353) ^= (safe_sub_func_int32_t_s_s(((((l_352 = ((*l_351) = (((*l_350) = l_349) != (((((6UL && 18446744073709551610UL) | p_7) , 0x5687L) ^ g_337) , &g_132)))) | 0x491CE318A9A59BACLL) > g_155) , g_72), 0x08B34C29L))), 0x9CL)), l_354)) , 0x02L)), 0x242A6FD3L)), p_4))), (*l_256))), g_232.f0)) == (*l_256)))), p_4)) > (*l_256))) , g_24)))));
                    l_357++;
                    l_363--;
                    l_368[0][0]--;
                }
                else
                { 
                    uint32_t l_372 = 0x012D40EAL;
                    l_371 = &p_6;
                    --l_372;
                    (*l_256) |= (l_375 == (void*)0);
                }
                if (g_283.f5)
                    continue;
                if (g_287.f0)
                    break;
                if (((((&g_140 != (void*)0) == (g_287.f4 || (safe_sub_func_uint16_t_u_u((((0x7CL != ((((*g_222) || ((p_3 , (safe_add_func_uint16_t_u_u(((((((safe_add_func_int64_t_s_s((-7L), p_3)) , p_3) < 1L) > l_357) , p_3) < 0xC8L), l_361[0]))) , p_5)) != p_6.f3) >= g_287.f1)) & g_144.f1) >= 6UL), p_5)))) | l_367) >= 0UL))
                { 
                    return g_337;
                }
                else
                { 
                    uint16_t l_382 = 8UL;
                    uint32_t *l_394 = &l_368[1][2];
                    l_382++;
                    (*l_256) = (p_3 != (((*l_268) == (((*l_394) |= (l_385[0] >= (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((l_354 >= (l_390 != &l_391)) <= (((((safe_sub_func_int16_t_s_s(g_283.f1, p_6.f3)) != p_5) , 18446744073709551615UL) == 18446744073709551614UL) ^ l_382)), p_4)), l_382)))) , l_395)) , g_108));
                    return g_396;
                }
            }
            else
            { 
                int64_t l_397 = 7L;
                int16_t *l_400[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_400[i] = &g_143;
                (*l_312) = l_256;
                l_397 = g_144.f1;
                (*l_256) ^= ((safe_mul_func_uint16_t_u_u(p_7, (g_80[5] = 4L))) , 0x6CEE686AL);
                return g_35.f5;
            }
        }
        g_401++;
        (*l_390) = (*l_390);
    }
    (*l_420) = ((g_287.f1 &= ((safe_rshift_func_uint16_t_u_s(g_287.f0, 11)) <= (((*l_409) ^= g_408) < ((l_410 == ((*l_414) = l_412)) > ((*l_413) = (g_287.f0 | ((*l_419) = (((((0UL >= ((p_6.f4 = (((((((((safe_lshift_func_int16_t_s_s(((*l_417) ^= (g_115[0] & p_3)), 13)) >= 65535UL) & g_83[1]) <= 0xF5L) & g_155) | 5UL) != 0x776785EDL) | g_108) , l_418)) ^ 18446744073709551615UL)) , (-7L)) < g_283.f4) && l_418) <= (*g_222))))))))) ^ (-1L));
    (*l_420) &= p_6.f0;
    g_421 = &g_132;
    return p_6.f3;
}



static uint16_t  func_8(uint64_t  p_9, int16_t  p_10, union U1  p_11, uint8_t  p_12)
{ 
    return p_10;
}



static uint64_t  func_19(const int64_t  p_20, int32_t  p_21, uint8_t  p_22)
{ 
    int64_t l_157 = 0x9EA3BD3CCC173D2BLL;
    int32_t l_173 = (-8L);
    int32_t *l_176 = &g_132;
    int32_t l_191 = 1L;
    int32_t l_193[5][5][1];
    const uint64_t *l_220[1];
    const uint64_t **l_219[5][3][2] = {{{&l_220[0],&l_220[0]},{(void*)0,&l_220[0]},{&l_220[0],&l_220[0]}},{{&l_220[0],&l_220[0]},{&l_220[0],&l_220[0]},{&l_220[0],&l_220[0]}},{{&l_220[0],&l_220[0]},{(void*)0,&l_220[0]},{&l_220[0],(void*)0}},{{&l_220[0],&l_220[0]},{&l_220[0],(void*)0},{&l_220[0],&l_220[0]}},{{(void*)0,&l_220[0]},{&l_220[0],&l_220[0]},{&l_220[0],&l_220[0]}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_193[i][j][k] = 0xB4286F75L;
        }
    }
    for (i = 0; i < 1; i++)
        l_220[i] = &g_115[0];
    for (g_144.f2 = 0; (g_144.f2 <= 2); g_144.f2 += 1)
    { 
        struct S0 l_170 = {1226,319,-34,-2,0,-17};
        int32_t l_198 = 0xEDBDCEA1L;
        int32_t l_199 = 0x0EE9E068L;
        int32_t l_201 = (-1L);
        int32_t l_203 = 0x759B4EE9L;
        int32_t l_205 = 0L;
        int32_t **l_230[7][6][2] = {{{(void*)0,&l_176},{&l_176,&l_176},{&l_176,(void*)0},{&l_176,(void*)0},{&l_176,&l_176},{&l_176,&l_176}},{{(void*)0,(void*)0},{(void*)0,&l_176},{&l_176,&l_176},{&l_176,(void*)0},{(void*)0,(void*)0},{&l_176,&l_176}},{{&l_176,&l_176},{(void*)0,&l_176},{(void*)0,&l_176},{&l_176,&l_176},{&l_176,(void*)0},{(void*)0,(void*)0}},{{&l_176,&l_176},{&l_176,&l_176},{(void*)0,(void*)0},{(void*)0,&l_176},{&l_176,&l_176},{&l_176,(void*)0}},{{&l_176,(void*)0},{&l_176,&l_176},{&l_176,&l_176},{(void*)0,(void*)0},{(void*)0,&l_176},{&l_176,&l_176}},{{&l_176,(void*)0},{(void*)0,(void*)0},{&l_176,&l_176},{&l_176,&l_176},{(void*)0,&l_176},{(void*)0,&l_176}},{{&l_176,&l_176},{&l_176,(void*)0},{(void*)0,(void*)0},{&l_176,&l_176},{&l_176,&l_176},{(void*)0,(void*)0}}};
        int32_t ** const *l_229 = &l_230[2][4][1];
        int i, j, k;
        for (g_24 = 0; (g_24 <= 2); g_24 += 1)
        { 
            int32_t *l_156[1];
            struct S0 l_165 = {930,256,29,-0,1,-3};
            uint16_t l_172 = 65528UL;
            int16_t l_202 = 7L;
            uint32_t l_206 = 0UL;
            const uint64_t *l_218[1][1];
            const uint64_t **l_217[6][5][5] = {{{(void*)0,&l_218[0][0],(void*)0,&l_218[0][0],(void*)0},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],(void*)0},{&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0],(void*)0},{&l_218[0][0],&l_218[0][0],(void*)0,(void*)0,&l_218[0][0]},{(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]}},{{(void*)0,(void*)0,&l_218[0][0],&l_218[0][0],(void*)0},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],(void*)0,&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],(void*)0}},{{(void*)0,&l_218[0][0],&l_218[0][0],(void*)0,&l_218[0][0]},{(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{(void*)0,&l_218[0][0],&l_218[0][0],(void*)0,&l_218[0][0]}},{{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],(void*)0,&l_218[0][0]},{&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]}},{{&l_218[0][0],(void*)0,&l_218[0][0],(void*)0,(void*)0},{&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0]},{(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],(void*)0,&l_218[0][0],&l_218[0][0],(void*)0}},{{(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{(void*)0,&l_218[0][0],&l_218[0][0],&l_218[0][0],(void*)0},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]},{&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0],&l_218[0][0]}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_156[i] = &g_132;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_218[i][j] = &g_115[0];
            }
            if ((g_120 = (l_157 = g_80[g_24])))
            { 
                int32_t *l_158 = &g_89;
                struct S0 l_174 = {1680,489,-70,1,4,9};
                int32_t **l_175 = &l_156[0];
                uint16_t *l_177 = &g_72;
                uint8_t *l_179 = (void*)0;
                uint8_t **l_178 = &l_179;
                int16_t l_189 = 1L;
                int32_t l_192 = 0x68E686C5L;
                int32_t l_195 = 0xBA2D269CL;
                int32_t l_196 = 0xA55CD802L;
                int32_t l_197 = 0xF6A2AC77L;
                int32_t l_200 = (-1L);
                int32_t l_204[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_204[i] = 0x5795B121L;
                if ((((*l_177) = ((l_158 != (l_176 = ((*l_175) = (((((safe_mod_func_int32_t_s_s(g_80[(g_144.f2 + 3)], (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((-4L), ((l_165 , (((safe_mod_func_int64_t_s_s((((safe_mod_func_int8_t_s_s((l_173 = ((l_170 , (((((safe_unary_minus_func_uint64_t_u((((((&g_35 == &g_35) > g_80[g_24]) >= (-1L)) , (void*)0) == (void*)0))) != p_20) && g_24) < p_21) ^ p_21)) , l_172)), g_72)) , l_174) , p_21), p_20)) | 0xD89A7534L) == p_22)) , g_35.f5))), 14)))) , g_144.f3) & 0x203B90B5L) < 2L) , l_156[0])))) || p_22)) | p_22))
                { 
                    uint8_t ***l_180 = &l_178;
                    uint64_t *l_188[4];
                    int32_t l_190 = 0x6BFB3F18L;
                    int32_t l_194[3][2][1] = {{{(-1L)},{0x8FF1DE66L}},{{(-1L)},{0x8FF1DE66L}},{{(-1L)},{0x8FF1DE66L}}};
                    uint8_t *l_210 = &g_58;
                    int8_t *l_224 = &g_155;
                    int32_t *l_225 = &g_226;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_188[i] = &g_115[0];
                    (*l_180) = l_178;
                    l_194[2][1][0] |= (l_193[2][4][0] = ((*l_176) = ((((safe_div_func_int16_t_s_s(((((((*l_225) = (((((*l_176) & ((*l_224) = ((safe_rshift_func_uint8_t_u_u((((~((*l_158) = (l_206++))) , (((*l_210) = (+p_22)) | (((*l_177) = (((g_115[0] > ((g_72 >= g_77) > ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((l_217[2][4][3] == (g_221 = l_219[2][0][0])), p_22)), p_21)), g_132)) ^ (-1L)))) >= p_21) == (*l_176))) ^ 0xB589L))) | p_21), 4)) <= 7UL))) != 1L) == p_20) , p_22)) , 0xCFL) & 3UL) || 4294967295UL) && 0xC0L), p_20)) , g_108) , l_201) | 1L)));
                    return l_199;
                }
                else
                { 
                    if (p_21)
                        break;
                    (**l_175) = (safe_mul_func_int16_t_s_s(g_226, (*l_176)));
                    return p_20;
                }
            }
            else
            { 
                int32_t ** const **l_231 = &l_229;
                for (g_58 = 0; g_58 < 1; g_58 += 1)
                {
                    l_156[g_58] = &g_89;
                }
                (*l_231) = l_229;
            }
        }
    }
    return p_20;
}



static int8_t  func_29(const struct S0  p_30, int16_t  p_31, int32_t  p_32, int64_t  p_33, union U1  p_34)
{ 
    int32_t *l_145 = &g_89;
    int32_t *l_146 = &g_132;
    int32_t *l_147 = &g_120;
    int32_t *l_148 = (void*)0;
    int32_t l_149 = 0x40892DF0L;
    int32_t *l_150 = &g_132;
    uint32_t l_151[2][3] = {{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{0xD513ACB9L,0xD513ACB9L,0xD513ACB9L}};
    int i, j;
    ++l_151[0][1];
    return p_31;
}



static uint64_t  func_41(union U1  p_42)
{ 
    int32_t l_48 = (-1L);
    uint8_t *l_57 = &g_58;
    int32_t *l_131 = &g_132;
    int32_t *l_133 = &l_48;
    (*l_131) |= ((func_44(p_42.f1, l_48, ((((*l_57) = ((((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(0x4B6D700DL, l_48)), (((p_42.f2 && (((safe_rshift_func_int8_t_s_s(g_35.f1, 3)) ^ 0L) >= p_42.f2)) != g_35.f4) && 18446744073709551614UL))) & l_48) && 0xBB218AD385E3970CLL) ^ p_42.f1)) | g_35.f1) , g_35.f5)) != 0UL) ^ l_48);
    if (l_48)
        goto lbl_134;
lbl_134:
    (*l_133) ^= (0x7E3DL >= (*l_131));
    for (g_132 = 17; (g_132 == (-8)); --g_132)
    { 
        int32_t *l_137 = &g_120;
        uint64_t **l_138 = (void*)0;
        uint64_t ***l_139[4][5][2] = {{{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138}},{{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138}},{{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138}},{{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138},{&l_138,&l_138}}};
        int i, j, k;
        (*l_137) ^= (((*l_133) &= p_42.f2) <= 0xD8DB6A50L);
        (*l_137) = p_42.f0;
        g_140 = l_138;
        return (*l_137);
    }
    return (*l_131);
}



static int16_t  func_44(uint64_t  p_45, uint64_t  p_46, int32_t  p_47)
{ 
    uint8_t *l_67 = &g_58;
    struct S0 l_68[7] = {{2862,75,72,0,-4,26},{2862,75,72,0,-4,26},{1962,225,25,0,1,21},{2862,75,72,0,-4,26},{2862,75,72,0,-4,26},{1962,225,25,0,1,21},{2862,75,72,0,-4,26}};
    uint16_t *l_71[6] = {&g_72,&g_72,&g_72,&g_72,&g_72,&g_72};
    int32_t l_73 = (-10L);
    int64_t *l_76[3][5] = {{&g_77,(void*)0,(void*)0,(void*)0,(void*)0},{&g_77,(void*)0,(void*)0,(void*)0,(void*)0},{&g_77,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_78 = (-2L);
    int16_t *l_79[7][1] = {{(void*)0},{&g_80[5]},{(void*)0},{&g_80[5]},{(void*)0},{&g_80[5]},{(void*)0}};
    int32_t l_81 = (-3L);
    uint64_t *l_82[2][6] = {{&g_83[5],&g_83[5],&g_83[5],&g_83[5],&g_83[5],&g_83[5]},{&g_83[5],&g_83[5],&g_83[5],&g_83[5],&g_83[5],&g_83[5]}};
    int32_t *l_123 = &g_120;
    const struct S0 *l_127 = &g_35;
    const struct S0 **l_126 = &l_127;
    int32_t *l_129 = (void*)0;
    uint32_t l_130 = 0xC28DFD1FL;
    int i, j;
    (*l_123) = (safe_mod_func_uint64_t_u_u(func_61(p_47, l_67, l_68[3], l_67, ((g_83[5] = ((safe_lshift_func_uint16_t_u_s((l_73 &= 0x8CC3L), (l_81 = (safe_lshift_func_int8_t_s_s(((l_78 = p_47) , g_35.f2), 2))))) == l_68[3].f4)) , 0xEB766298L)), 0x73EBF557C78B2DF2LL));
    if (g_35.f5)
        goto lbl_128;
    for (g_72 = (-11); (g_72 != 33); g_72 = safe_add_func_uint32_t_u_u(g_72, 1))
    { 
        return g_35.f4;
    }
lbl_128:
    (*l_126) = &g_35;
    l_130 &= (g_118 | (*l_123));
    return p_45;
}



static uint64_t  func_61(uint32_t  p_62, uint8_t * p_63, struct S0  p_64, uint8_t * p_65, uint32_t  p_66)
{ 
    int32_t *l_92 = &g_89;
    const int16_t * const l_112 = &g_80[5];
    int8_t l_117 = 0x82L;
    uint64_t l_122[2][4] = {{0x6EF039836713F97CLL,0x6EF039836713F97CLL,0x6EF039836713F97CLL,0x6EF039836713F97CLL},{0x6EF039836713F97CLL,0x6EF039836713F97CLL,0x6EF039836713F97CLL,0x6EF039836713F97CLL}};
    int i, j;
    p_64.f2 ^= (-1L);
    for (g_58 = 25; (g_58 == 9); g_58--)
    { 
        int32_t *l_86 = (void*)0;
        int32_t *l_87 = (void*)0;
        int32_t *l_88 = &g_89;
        int32_t **l_93 = &l_87;
        uint64_t *l_113 = (void*)0;
        uint64_t *l_114[7][3];
        uint32_t l_116 = 0xF52F5978L;
        int32_t *l_119 = &g_120;
        struct S0 l_121 = {2590,393,-71,3,0,11};
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
                l_114[i][j] = &g_115[0];
        }
        (*l_88) |= 0xACB3B36FL;
        (*l_88) = ((safe_mul_func_uint8_t_u_u((((*l_93) = l_92) != ((safe_lshift_func_int8_t_s_u((p_63 != &g_58), (g_35.f5 != 0xD4500743L))) , (void*)0)), 0xF3L)) & g_80[5]);
        (*l_119) &= (((g_118 &= (safe_mul_func_int16_t_s_s(p_64.f4, (safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((g_115[0] &= (((((**l_93) = (safe_div_func_uint32_t_u_u((((((((safe_mod_func_int8_t_s_s(0x1BL, (safe_add_func_uint8_t_u_u(g_108, ((0x6C577B3FL < (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int16_t_s((g_35.f4 > ((safe_unary_minus_func_uint64_t_u(0x3A2E2E988A7CC15BLL)) >= 0x93L))))))) <= 0x797ADA24L))))) || g_83[5]) , &g_80[2]) == l_112) , g_35.f0) != (*p_63)) , p_64.f4), (**l_93)))) < g_35.f0) | 1L) < 0UL)) ^ l_116) > g_35.f0), l_117)) & p_64.f4), 1L))))) , l_92) != (*l_93));
        (*l_119) = (l_121 , ((*l_88) = l_122[0][1]));
    }
    return (*l_92);
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_35.f4, "g_35.f4", print_hash_value);
    transparent_crc(g_35.f5, "g_35.f5", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144.f3, "g_144.f3", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_283.f0, "g_283.f0", print_hash_value);
    transparent_crc(g_283.f1, "g_283.f1", print_hash_value);
    transparent_crc(g_283.f2, "g_283.f2", print_hash_value);
    transparent_crc(g_283.f3, "g_283.f3", print_hash_value);
    transparent_crc(g_283.f4, "g_283.f4", print_hash_value);
    transparent_crc(g_283.f5, "g_283.f5", print_hash_value);
    transparent_crc(g_287.f0, "g_287.f0", print_hash_value);
    transparent_crc(g_287.f1, "g_287.f1", print_hash_value);
    transparent_crc(g_287.f2, "g_287.f2", print_hash_value);
    transparent_crc(g_287.f3, "g_287.f3", print_hash_value);
    transparent_crc(g_287.f4, "g_287.f4", print_hash_value);
    transparent_crc(g_287.f5, "g_287.f5", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_445.f0, "g_445.f0", print_hash_value);
    transparent_crc(g_445.f1, "g_445.f1", print_hash_value);
    transparent_crc(g_445.f2, "g_445.f2", print_hash_value);
    transparent_crc(g_445.f3, "g_445.f3", print_hash_value);
    transparent_crc(g_445.f4, "g_445.f4", print_hash_value);
    transparent_crc(g_445.f5, "g_445.f5", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
