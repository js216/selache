// SPDX-License-Identifier: MIT
// cctest_csmith_07baaacc.c --- cctest case csmith_07baaacc (csmith seed 129673932)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35b6b6f7 */

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

// Options:   -s 129673932 -o /tmp/csmith_gen_5nskm88r/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
   uint32_t  f3;
   const uint16_t  f4;
   uint32_t  f5;
   int64_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 10;
   signed : 0;
   const signed f1 : 25;
   unsigned f2 : 4;
   signed f3 : 17;
   const signed f4 : 24;
   const unsigned f5 : 4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 11;
};
#pragma pack(pop)

struct S3 {
   signed f0 : 11;
   signed f1 : 14;
   unsigned f2 : 5;
   signed f3 : 12;
   unsigned f4 : 13;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   const int32_t  f0;
   signed f1 : 1;
   int32_t  f2;
   const int32_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   const uint32_t  f0;
   int16_t  f1;
   signed f2 : 23;
   int16_t  f3;
   struct S2  f4;
   const uint32_t  f5;
   const unsigned f6 : 14;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S6 {
   unsigned f0 : 15;
   signed f1 : 9;
};
#pragma pack(pop)

union U7 {
   int8_t * f0;
   signed f1 : 8;
};

union U8 {
   int32_t  f0;
   signed f1 : 23;
   const int8_t * f2;
   int16_t  f3;
   const signed f4 : 24;
};


static int16_t g_2 = 0x0270L;
static int32_t g_4 = 7L;
static int8_t g_21 = 0x35L;
static int8_t * const g_20[6][3][7] = {{{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21}},{{&g_21,(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,(void*)0,&g_21,&g_21,(void*)0},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,(void*)0,&g_21,&g_21,(void*)0,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21}},{{(void*)0,(void*)0,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21}},{{&g_21,&g_21,(void*)0,&g_21,(void*)0,(void*)0,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21}},{{&g_21,(void*)0,(void*)0,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,&g_21,&g_21,&g_21,(void*)0}}};
static int8_t g_36 = 4L;
static int8_t *g_35 = &g_36;
static const struct S0 g_47[4] = {{0xAEE1L,1L,0xE8DA534CL,0xA1B6174EL,9UL,0x758AC421L,4L},{0xAEE1L,1L,0xE8DA534CL,0xA1B6174EL,9UL,0x758AC421L,4L},{0xAEE1L,1L,0xE8DA534CL,0xA1B6174EL,9UL,0x758AC421L,4L},{0xAEE1L,1L,0xE8DA534CL,0xA1B6174EL,9UL,0x758AC421L,4L}};
static struct S4 g_49 = {-10L,0,-9L,0xF974433FL,0UL};
static struct S5 g_57 = {0xC8A33170L,-9L,-500,-7L,{33},0x93AA688EL,76};
static int32_t g_61[2][6][7] = {{{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L}},{{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L},{1L,0L,6L,0x2B3C28C6L,6L,0L,1L}}};
static union U7 g_86[3][6][2] = {{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}}};
static union U7 g_88 = {0};
static int8_t g_107 = 1L;
static int32_t *g_109 = &g_4;
static int32_t **g_108 = &g_109;
static int16_t *g_130[7][5] = {{&g_57.f1,&g_57.f1,&g_57.f1,&g_57.f1,&g_57.f1},{&g_2,(void*)0,&g_2,&g_2,(void*)0},{&g_57.f1,&g_57.f3,&g_57.f3,&g_57.f1,&g_57.f3},{(void*)0,(void*)0,&g_57.f3,(void*)0,(void*)0},{&g_57.f3,&g_57.f1,&g_57.f3,&g_57.f3,&g_57.f1},{(void*)0,&g_2,&g_2,(void*)0,&g_2},{&g_57.f1,&g_57.f1,&g_57.f1,&g_57.f1,&g_57.f1}};
static int16_t g_157[2][7][4] = {{{0L,0xAD04L,(-3L),0xF09BL},{0xF2DCL,(-3L),(-4L),0xD744L},{0xF2DCL,(-1L),(-3L),3L},{0L,0xD744L,0xD744L,0L},{0x6006L,0x27D5L,0L,4L},{(-4L),3L,0x3046L,0x741BL},{8L,0xF09BL,(-1L),0x741BL}},{{0x27D5L,3L,(-1L),4L},{(-1L),0x27D5L,(-1L),0L},{(-1L),0xD744L,0xF2DCL,3L},{0x741BL,(-1L),4L,0xD744L},{0xDE32L,(-3L),4L,0xF09BL},{0x741BL,0xAD04L,0xF2DCL,0xF2DCL},{(-1L),(-1L),(-1L),0xDE32L}}};
static union U7 **g_174 = (void*)0;
static union U7 ***g_173 = &g_174;
static uint64_t g_186 = 18446744073709551612UL;
static uint64_t g_188[1] = {0UL};
static const int64_t **g_205[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static struct S1 g_214 = {-7,2839,2,-244,-2790,0};
static int32_t g_253[6] = {0x78EF0DAFL,0x78EF0DAFL,0x78EF0DAFL,0x78EF0DAFL,0x78EF0DAFL,0x78EF0DAFL};
static int16_t g_254 = 0xBF65L;
static struct S6 g_255 = {20,-1};
static uint16_t g_265 = 65535UL;
static union U8 g_316 = {1L};
static union U8 *g_315[1][7] = {{&g_316,&g_316,&g_316,&g_316,&g_316,&g_316,&g_316}};
static int8_t g_329 = 0x82L;
static struct S2 g_333 = {31};
static const struct S3 g_343 = {5,-49,3,39,57};
static struct S1 *g_369 = &g_214;
static uint8_t g_380 = 0x5DL;
static uint32_t g_382 = 4UL;
static uint32_t g_507 = 0UL;
static uint32_t g_513 = 4294967294UL;
static struct S3 g_573[6][6][3] = {{{{-5,-60,0,0,41},{-34,83,2,-60,44},{-29,50,0,-23,54}},{{-28,-30,4,-27,16},{-14,-56,4,-30,23},{-16,-77,4,-4,45}},{{-13,29,2,52,12},{21,9,1,13,12},{-36,113,3,-51,53}},{{4,-66,1,-12,26},{-17,-112,0,24,30},{19,97,0,-29,50}},{{-13,29,2,52,12},{35,-21,4,4,37},{35,-21,4,4,37}},{{-28,-30,4,-27,16},{-32,-25,1,48,81},{18,-89,3,-32,8}}},{{{-5,-60,0,0,41},{21,9,1,13,12},{35,-21,4,4,37}},{{19,97,0,-29,50},{29,-12,1,-57,70},{19,97,0,-29,50}},{{-21,35,3,-61,57},{-34,83,2,-60,44},{-36,113,3,-51,53}},{{-28,-30,4,-27,16},{29,-12,1,-57,70},{-16,-77,4,-4,45}},{{21,9,1,13,12},{21,9,1,13,12},{-29,50,0,-23,54}},{{4,-66,1,-12,26},{-32,-25,1,48,81},{19,97,0,-29,50}}},{{{21,9,1,13,12},{35,-21,4,4,37},{-34,83,2,-60,44}},{{-28,-30,4,-27,16},{-17,-112,0,24,30},{18,-89,3,-32,8}},{{-21,35,3,-61,57},{21,9,1,13,12},{-34,83,2,-60,44}},{{19,97,0,-29,50},{-14,-56,4,-30,23},{19,97,0,-29,50}},{{-5,-60,0,0,41},{-34,83,2,-60,44},{-29,50,0,-23,54}},{{-28,-30,4,-27,16},{-14,-56,4,-30,23},{-16,-77,4,-4,45}}},{{{-13,29,2,52,12},{21,9,1,13,12},{-36,113,3,-51,53}},{{4,-66,1,-12,26},{-17,-112,0,24,30},{19,97,0,-29,50}},{{-13,29,2,52,12},{35,-21,4,4,37},{35,-21,4,4,37}},{{-28,-30,4,-27,16},{-32,-25,1,48,81},{18,-89,3,-32,8}},{{-5,-60,0,0,41},{21,9,1,13,12},{35,-21,4,4,37}},{{19,97,0,-29,50},{29,-12,1,-57,70},{19,97,0,-29,50}}},{{{-21,35,3,-61,57},{-34,83,2,-60,44},{-36,113,3,-51,53}},{{-28,-30,4,-27,16},{29,-12,1,-57,70},{-16,-77,4,-4,45}},{{21,9,1,13,12},{21,9,1,13,12},{-29,50,0,-23,54}},{{4,-66,1,-12,26},{-32,-25,1,48,81},{19,97,0,-29,50}},{{21,9,1,13,12},{35,-21,4,4,37},{-34,83,2,-60,44}},{{-28,-30,4,-27,16},{-17,-112,0,24,30},{18,-89,3,-32,8}}},{{{-21,35,3,-61,57},{21,9,1,13,12},{-34,83,2,-60,44}},{{19,97,0,-29,50},{-14,-56,4,-30,23},{19,97,0,-29,50}},{{-5,-60,0,0,41},{-34,83,2,-60,44},{-29,50,0,-23,54}},{{-28,-30,4,-27,16},{-14,-56,4,-30,23},{-16,-77,4,-4,45}},{{-13,29,2,52,12},{21,9,1,13,12},{-36,113,3,-51,53}},{{4,-66,1,-12,26},{-17,-112,0,24,30},{19,97,0,-29,50}}}};
static union U8 **g_604[2] = {&g_315[0][3],&g_315[0][3]};
static union U8 ***g_603 = &g_604[0];
static union U8 ****g_602 = &g_603;
static union U8 **** const *g_601[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t **g_610 = &g_130[1][0];
static int16_t ***g_609 = &g_610;
static int16_t ***g_612 = &g_610;
static struct S3 g_620 = {-1,-50,3,31,51};
static int32_t g_625 = 0x4E33493AL;
static int32_t g_626 = 0L;
static uint8_t g_634 = 0x64L;
static int8_t * const *g_641 = &g_35;
static uint64_t *g_681 = &g_188[0];



static uint32_t  func_1(void);
static int32_t * func_5(int32_t * p_6, union U7  p_7, int32_t  p_8, union U7  p_9);
static int32_t * func_10(union U8  p_11);
static struct S2  func_13(struct S5  p_14);
static struct S5  func_15(int32_t  p_16, const int8_t  p_17, union U7  p_18, int32_t * p_19);
static int32_t * func_26(const int8_t  p_27, uint16_t  p_28, struct S4  p_29, int8_t * p_30, int32_t * p_31);
static int16_t  func_39(union U7  p_40, struct S5  p_41, union U7  p_42);
static union U7  func_43(const struct S0  p_44, int32_t * p_45, struct S4  p_46);




static uint32_t  func_1(void)
{ 
    uint16_t l_3[6] = {4UL,0x0CF5L,4UL,4UL,0x0CF5L,4UL};
    union U7 l_25 = {0};
    uint64_t l_658 = 0xC6BB37CA7F6FECE3LL;
    int i;
    g_2 = 0xC6578637L;
    for (g_2 = 5; (g_2 >= 1); g_2 -= 1)
    { 
        const struct S2 l_12 = {8};
        union U7 l_639 = {0};
        uint64_t l_663[5];
        union U7 ***l_696 = &g_174;
        int i;
        for (i = 0; i < 5; i++)
            l_663[i] = 0x63C6555B2405DBCELL;
        if (l_3[g_2])
            break;
        for (g_4 = 5; (g_4 >= 0); g_4 -= 1)
        { 
            int8_t *l_22[3][6][7] = {{{&g_21,(void*)0,&g_21,(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21},{&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,&g_21,&g_21,(void*)0,&g_21},{&g_21,(void*)0,&g_21,(void*)0,&g_21,&g_21,&g_21}},{{&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21},{&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,&g_21,&g_21,(void*)0,&g_21},{&g_21,(void*)0,&g_21,(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21}},{{&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,(void*)0,&g_21,&g_21,&g_21,(void*)0,&g_21},{&g_21,(void*)0,&g_21,(void*)0,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,(void*)0,&g_21},{&g_21,&g_21,&g_21,(void*)0,&g_21,&g_21,&g_21}}};
            int8_t *l_23[3];
            int8_t *l_24 = &g_21;
            struct S4 l_34[1] = {{0L,0,0xB2BD68E4L,9L,4294967292UL}};
            struct S6 *l_640 = &g_255;
            uint64_t *l_680[3];
            uint64_t **l_679[6] = {&l_680[1],&l_680[1],&l_680[1],&l_680[1],&l_680[1],&l_680[1]};
            uint8_t *l_691 = &g_380;
            int32_t *l_697 = (void*)0;
            int32_t *l_698 = &g_61[1][4][3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_23[i] = &g_21;
            for (i = 0; i < 3; i++)
                l_680[i] = &l_658;
            (*g_108) = func_5(func_10((((l_12 , (func_13(func_15(l_3[2], ((*l_24) &= (g_20[5][2][5] == &g_21)), l_25, func_26(l_3[3], (safe_mod_func_uint32_t_u_u(0UL, l_12.f0)), l_34[0], g_35, &g_4))) , (void*)0)) == (void*)0) , (***g_603))), l_639, l_12.f0, l_25);
            (*l_640) = g_255;
            for (g_625 = 1; (g_625 <= 4); g_625 += 1)
            { 
                uint16_t l_642 = 0xEE91L;
                int32_t l_675 = 0x6275963EL;
                for (g_57.f1 = 4; (g_57.f1 >= 0); g_57.f1 -= 1)
                { 
                    int32_t *l_643 = (void*)0;
                    int32_t *l_644 = (void*)0;
                    int32_t *l_645 = (void*)0;
                    int32_t *l_646 = &g_316.f0;
                    int32_t *l_647 = &g_316.f0;
                    int32_t l_648 = 0L;
                    int32_t *l_649 = &g_316.f0;
                    int32_t *l_650 = (void*)0;
                    int32_t *l_651 = &g_626;
                    int32_t *l_652 = &g_626;
                    int32_t *l_653 = &g_61[0][5][2];
                    int32_t *l_654 = &g_61[1][4][3];
                    int32_t l_655[2];
                    int32_t *l_656 = &g_61[1][4][3];
                    int32_t *l_657[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_655[i] = 0x2E9B1C8DL;
                    for (i = 0; i < 2; i++)
                        l_657[i] = &l_655[1];
                    g_641 = &g_20[5][2][5];
                    if (l_642)
                        continue;
                    --l_658;
                    (*l_647) = (l_675 = (safe_lshift_func_int8_t_s_u(((l_663[0] == ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((-2L) < 0x82BD3A5BDFE09B9ALL), (safe_div_func_int64_t_s_s(1L, (*l_652))))) | (l_663[0] == ((1UL & (*l_656)) && l_3[0]))), (*l_646))))), 13)) & 0x629A9BD6L), 1UL)) <= 0x17D980B936AA5351LL)) != l_3[2]), 5)));
                    if ((**g_108))
                        break;
                }
            }
            if ((&g_174 != (void*)0))
            { 
                return g_316.f1;
            }
            else
            { 
                int32_t *l_676 = &g_61[0][5][4];
                (*l_676) |= (*g_109);
            }
            (*l_698) &= (safe_sub_func_int32_t_s_s((l_34[0].f1 = (g_620.f3 &= ((((g_681 = &l_658) == ((safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((-1L), g_107)), (safe_div_func_uint32_t_u_u((((!(((safe_mul_func_uint16_t_u_u(((((((*l_691) = l_3[g_2]) ^ l_34[0].f1) != (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((l_696 != (void*)0) | 0x686EL), l_3[0])), l_658))) || g_157[0][5][3]) | 0x8B07L), 1UL)) || g_57.f2) > l_663[2])) <= l_3[0]) ^ g_573[4][5][2].f3), g_49.f0)))) , &l_663[1])) || l_658) <= l_12.f0))), l_34[0].f4));
        }
    }
    return g_57.f4.f0;
}



static int32_t * func_5(int32_t * p_6, union U7  p_7, int32_t  p_8, union U7  p_9)
{ 
    return (*g_108);
}



static int32_t * func_10(union U8  p_11)
{ 
    struct S6 l_635 = {28,-2};
    struct S6 *l_636 = (void*)0;
    struct S6 *l_637 = &l_635;
    int32_t *l_638 = (void*)0;
    (*l_637) = (g_255 = ((g_57.f6 < ((p_11.f3 < g_57.f4.f0) | g_634)) , l_635));
    return l_638;
}



static struct S2  func_13(struct S5  p_14)
{ 
    struct S1 *l_630[3][7];
    struct S1 **l_631 = (void*)0;
    struct S1 **l_632 = &l_630[0][5];
    struct S2 l_633 = {44};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_630[i][j] = &g_214;
    }
    (*l_632) = l_630[0][5];
    return l_633;
}



static struct S5  func_15(int32_t  p_16, const int8_t  p_17, union U7  p_18, int32_t * p_19)
{ 
    union U8 *l_614 = &g_316;
    int32_t l_617 = 0L;
    struct S5 l_619 = {0x4DB0F646L,0x408FL,-1605,0xFE00L,{20},1UL,46};
    int32_t *l_621 = &g_61[1][2][4];
    int32_t *l_622 = (void*)0;
    int32_t *l_623 = &l_617;
    int32_t *l_624[6][4] = {{&g_316.f0,&g_316.f0,&g_316.f0,&g_316.f0},{&g_316.f0,&g_316.f0,&g_316.f0,&g_316.f0},{&g_316.f0,&g_316.f0,&g_316.f0,&g_316.f0},{&g_316.f0,&g_316.f0,&g_316.f0,&g_316.f0},{&g_316.f0,&g_316.f0,&g_316.f0,&g_316.f0},{&g_316.f0,&g_316.f0,&g_316.f0,&g_316.f0}};
    uint8_t l_627 = 0x7BL;
    int i, j;
    (***g_602) = l_614;
    if ((safe_div_func_int64_t_s_s((-7L), l_617)))
    { 
        int32_t *l_618[5];
        int i;
        for (i = 0; i < 5; i++)
            l_618[i] = &g_316.f0;
        l_617 ^= 0x99EA393DL;
    }
    else
    { 
        return l_619;
    }
    l_617 |= (g_620 , 0x3AE44DF2L);
    l_627++;
    return l_619;
}



static int32_t * func_26(const int8_t  p_27, uint16_t  p_28, struct S4  p_29, int8_t * p_30, int32_t * p_31)
{ 
    int32_t *l_48 = &g_4;
    struct S5 l_89 = {4294967293UL,8L,1044,1L,{42},0xB47EBAEAL,21};
    union U7 l_90 = {0};
    l_89.f2 = (l_90.f1 = (safe_rshift_func_int16_t_s_s(func_39(func_43(g_47[0], l_48, g_49), l_89, l_90), 9)));
    return (*g_108);
}



static int16_t  func_39(union U7  p_40, struct S5  p_41, union U7  p_42)
{ 
    int32_t *l_91 = &g_61[1][4][3];
    int32_t **l_92 = &l_91;
    int32_t *l_94[1];
    int32_t **l_93 = &l_94[0];
    struct S4 l_99 = {0xE54454DEL,0,-4L,0xDCC771BEL,1UL};
    int8_t *l_106 = &g_107;
    int16_t *l_110 = &g_57.f1;
    int64_t l_140[3];
    const union U7 *l_177 = &g_86[2][4][1];
    const union U7 **l_176 = &l_177;
    const union U7 ***l_175 = &l_176;
    struct S1 l_201[2][5] = {{{12,1225,2,275,2947,0},{12,1225,2,275,2947,0},{12,1225,2,275,2947,0},{12,1225,2,275,2947,0},{12,1225,2,275,2947,0}},{{12,1225,2,275,2947,0},{12,1225,2,275,2947,0},{12,1225,2,275,2947,0},{12,1225,2,275,2947,0},{12,1225,2,275,2947,0}}};
    struct S2 l_224[4][7][4] = {{{{41},{44},{20},{39}},{{34},{16},{24},{5}},{{34},{36},{20},{1}},{{41},{5},{34},{44}},{{15},{10},{2},{36}},{{42},{10},{42},{44}},{{40},{5},{39},{1}}},{{{25},{36},{15},{5}},{{40},{16},{15},{39}},{{25},{44},{39},{16}},{{40},{32},{42},{43}},{{42},{43},{2},{43}},{{15},{32},{34},{16}},{{41},{44},{20},{39}}},{{{34},{16},{24},{5}},{{34},{36},{20},{1}},{{41},{5},{34},{44}},{{15},{10},{2},{36}},{{42},{10},{42},{44}},{{40},{5},{39},{1}},{{25},{36},{15},{5}}},{{{40},{16},{15},{39}},{{25},{44},{39},{16}},{{40},{32},{42},{43}},{{42},{43},{2},{43}},{{15},{32},{34},{16}},{{41},{44},{20},{39}},{{34},{16},{24},{5}}}};
    uint64_t l_239 = 2UL;
    struct S1 *l_261 = &l_201[0][4];
    uint16_t l_290 = 65526UL;
    struct S6 l_303 = {98,-4};
    uint8_t l_308 = 0x26L;
    int16_t l_328 = 0x1842L;
    uint64_t *l_450 = &g_186;
    uint64_t **l_449 = &l_450;
    int16_t * const *l_486 = &g_130[1][0];
    int16_t * const ** const l_485 = &l_486;
    int16_t * const ** const *l_484 = &l_485;
    int64_t l_533 = 0x77F377FF2E8658A5LL;
    const struct S0 l_570 = {0x3225L,0xC98CL,2L,0x0519C9EEL,1UL,0x5E66E7FBL,0xCF81BAA2C69B3CD6LL};
    struct S3 l_574 = {22,-124,0,44,15};
    uint64_t l_598 = 0x859D8C35BE258F22LL;
    struct S5 l_607 = {0x4FE9E673L,0L,-1143,0L,{29},18446744073709551615UL,26};
    const int16_t ***l_608[4];
    int16_t ****l_611 = &g_609;
    int16_t ***l_613 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_94[i] = &g_61[1][3][5];
    for (i = 0; i < 3; i++)
        l_140[i] = 0x656022EB11DCCF77LL;
    for (i = 0; i < 4; i++)
        l_608[i] = (void*)0;
    (*l_91) = 0L;
    for (g_49.f4 = 0; g_49.f4 < 2; g_49.f4 += 1)
    {
        for (g_57.f3 = 0; g_57.f3 < 6; g_57.f3 += 1)
        {
            for (p_41.f1 = 0; p_41.f1 < 7; p_41.f1 += 1)
            {
                g_61[g_49.f4][g_57.f3][p_41.f1] = 0x87BD1CFCL;
            }
        }
    }
    return (*l_91);
}



static union U7  func_43(const struct S0  p_44, int32_t * p_45, struct S4  p_46)
{ 
    int16_t l_69[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_71 = 0L;
    int32_t l_72[1][5][4] = {{{1L,1L,0x1AC48AE5L,0x285881B6L},{0x0138ADD5L,0x48933AC5L,0x0138ADD5L,0x1AC48AE5L},{0x0138ADD5L,0x1AC48AE5L,0x1AC48AE5L,0x0138ADD5L},{1L,0x1AC48AE5L,0x285881B6L,0x1AC48AE5L},{0x1AC48AE5L,0x48933AC5L,0x285881B6L,0x285881B6L}}};
    union U7 l_85 = {0};
    int i, j, k;
    for (p_46.f4 = 6; (p_46.f4 >= 4); --p_46.f4)
    { 
        int8_t *l_58 = (void*)0;
        int32_t *l_60 = &g_61[1][4][3];
        int32_t l_70 = 0x18CA4024L;
        int32_t l_73 = 0x49FC4A87L;
        int32_t l_74 = 0L;
        int32_t l_75 = (-3L);
        int32_t l_76 = 0x8447B4B0L;
        int32_t l_77 = 0xE0C38572L;
        int32_t l_79 = 0x19B67119L;
        int32_t l_80[4] = {0xCDAB5827L,0xCDAB5827L,0xCDAB5827L,0xCDAB5827L};
        int32_t **l_87 = &l_60;
        int i;
        (*l_60) = (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0x4211L, (+(&g_36 == (g_57 , l_58))))) & (!(&g_4 == p_45))), 1));
        for (g_57.f3 = 0; (g_57.f3 > 17); g_57.f3++)
        { 
            int32_t l_78 = 1L;
            int32_t l_81 = 0xC3469061L;
            for (g_57.f1 = 1; (g_57.f1 >= 0); g_57.f1 -= 1)
            { 
                int32_t *l_64 = &g_61[1][3][1];
                int32_t *l_65 = &g_61[1][4][3];
                int32_t *l_66 = &g_61[g_57.f1][(g_57.f1 + 4)][g_57.f1];
                int32_t *l_67 = &g_61[1][4][3];
                int32_t *l_68[4][1] = {{&g_61[1][1][6]},{&g_61[g_57.f1][(g_57.f1 + 4)][g_57.f1]},{&g_61[1][1][6]},{&g_61[g_57.f1][(g_57.f1 + 4)][g_57.f1]}};
                uint8_t l_82 = 0x6EL;
                int i, j, k;
                l_82--;
                return l_85;
            }
            return g_86[2][4][1];
        }
        if ((*p_45))
            continue;
        (*l_87) = &l_70;
        (*l_60) = 0L;
    }
    return g_88;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_47[i].f0, "g_47[i].f0", print_hash_value);
        transparent_crc(g_47[i].f1, "g_47[i].f1", print_hash_value);
        transparent_crc(g_47[i].f2, "g_47[i].f2", print_hash_value);
        transparent_crc(g_47[i].f3, "g_47[i].f3", print_hash_value);
        transparent_crc(g_47[i].f4, "g_47[i].f4", print_hash_value);
        transparent_crc(g_47[i].f5, "g_47[i].f5", print_hash_value);
        transparent_crc(g_47[i].f6, "g_47[i].f6", print_hash_value);

    }
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_49.f3, "g_49.f3", print_hash_value);
    transparent_crc(g_49.f4, "g_49.f4", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_57.f3, "g_57.f3", print_hash_value);
    transparent_crc(g_57.f4.f0, "g_57.f4.f0", print_hash_value);
    transparent_crc(g_57.f5, "g_57.f5", print_hash_value);
    transparent_crc(g_57.f6, "g_57.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_157[i][j][k], "g_157[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_186, "g_186", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);

    }
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_214.f2, "g_214.f2", print_hash_value);
    transparent_crc(g_214.f3, "g_214.f3", print_hash_value);
    transparent_crc(g_214.f4, "g_214.f4", print_hash_value);
    transparent_crc(g_214.f5, "g_214.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_253[i], "g_253[i]", print_hash_value);

    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f1, "g_255.f1", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_316.f0, "g_316.f0", print_hash_value);
    transparent_crc(g_316.f1, "g_316.f1", print_hash_value);
    transparent_crc(g_316.f3, "g_316.f3", print_hash_value);
    transparent_crc(g_316.f4, "g_316.f4", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_343.f1, "g_343.f1", print_hash_value);
    transparent_crc(g_343.f2, "g_343.f2", print_hash_value);
    transparent_crc(g_343.f3, "g_343.f3", print_hash_value);
    transparent_crc(g_343.f4, "g_343.f4", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_573[i][j][k].f0, "g_573[i][j][k].f0", print_hash_value);
                transparent_crc(g_573[i][j][k].f1, "g_573[i][j][k].f1", print_hash_value);
                transparent_crc(g_573[i][j][k].f2, "g_573[i][j][k].f2", print_hash_value);
                transparent_crc(g_573[i][j][k].f3, "g_573[i][j][k].f3", print_hash_value);
                transparent_crc(g_573[i][j][k].f4, "g_573[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_620.f0, "g_620.f0", print_hash_value);
    transparent_crc(g_620.f1, "g_620.f1", print_hash_value);
    transparent_crc(g_620.f2, "g_620.f2", print_hash_value);
    transparent_crc(g_620.f3, "g_620.f3", print_hash_value);
    transparent_crc(g_620.f4, "g_620.f4", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
