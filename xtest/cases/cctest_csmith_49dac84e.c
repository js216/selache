// SPDX-License-Identifier: MIT
// cctest_csmith_49dac84e.c --- cctest case csmith_49dac84e (csmith seed 1239074894)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa9cc32e5 */

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

// Options:   -s 1239074894 -o /tmp/csmith_gen__jawspcp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 21;
   unsigned f1 : 22;
   const unsigned : 0;
   unsigned f2 : 12;
   signed f3 : 11;
   const unsigned f4 : 22;
};

union U1 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
};


static uint8_t g_6[3] = {0xBAL,0xBAL,0xBAL};
static uint64_t g_22[3][1] = {{8UL},{8UL},{8UL}};
static uint64_t g_36 = 1UL;
static union U1 g_39 = {4294967295UL};
static int8_t g_75 = 0x55L;
static uint8_t g_79 = 3UL;
static int16_t g_80 = 0x3925L;
static struct S0 g_81[1][3] = {{{1415,171,39,21,543},{1415,171,39,21,543},{1415,171,39,21,543}}};
static uint16_t g_130 = 65534UL;
static uint64_t g_174 = 0x791CDE4361DA5A7FLL;
static uint64_t g_176 = 18446744073709551615UL;
static int32_t g_202[4] = {0x2C833108L,0x2C833108L,0x2C833108L,0x2C833108L};
static int32_t g_203 = 0x47FD144FL;
static uint64_t g_247 = 0x47AD6A6541942EB4LL;
static uint16_t g_295 = 1UL;
static uint8_t g_299 = 247UL;
static int32_t g_319[2] = {1L,1L};
static int32_t g_320 = 0xA228F55FL;
static uint64_t g_322 = 0UL;



static uint16_t  func_1(void);
static struct S0  func_2(uint32_t  p_3, int32_t  p_4, union U1  p_5);
static int32_t  func_11(union U1  p_12, struct S0  p_13);
static union U1  func_14(const uint64_t  p_15, int32_t  p_16);




static uint16_t  func_1(void)
{ 
    struct S0 l_30 = {1294,1962,41,-23,1059};
    int8_t l_241[2];
    int8_t l_257[4];
    int32_t l_280 = (-4L);
    int64_t l_294 = 0xD65A0D80B1D0131BLL;
    int32_t l_318 = (-1L);
    int32_t l_321 = 0x8882CB28L;
    int i;
    for (i = 0; i < 2; i++)
        l_241[i] = 0xF8L;
    for (i = 0; i < 4; i++)
        l_257[i] = 0x8BL;
    if ((func_2(g_6[1], ((safe_add_func_uint32_t_u_u((g_6[2] != (((safe_sub_func_int32_t_s_s(func_11(func_14(g_6[1], ((safe_rshift_func_uint8_t_u_s((g_22[0][0] |= (safe_rshift_func_int16_t_s_u(((!7L) < g_6[2]), 7))), 0)) == 1UL)), l_30), g_6[1])) , l_30.f2) , 0xE197B2C3CC8C9F13LL)), 0x1F059960L)) ^ g_6[1]), g_39) , 1L))
    { 
        int16_t l_215 = (-1L);
        int32_t l_237 = (-1L);
        uint16_t l_242 = 0xFC3AL;
        g_81[0][2].f3 = (safe_mul_func_int8_t_s_s((l_215 &= (safe_add_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(l_30.f2, (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0xF8L, 1)), l_30.f1)) ^ (g_81[0][2].f4 & l_30.f2)) <= 1UL))) < g_80) & 0xB4A309CDAB9F7BF7LL), 4L))), l_30.f3));
        for (g_203 = 3; (g_203 >= 0); g_203 -= 1)
        { 
            int32_t l_238 = (-5L);
            int32_t l_239[3][4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_239[i][j] = 0xE2F412CFL;
            }
            if (g_202[g_203])
            { 
                int16_t l_240[4][4][2] = {{{(-1L),0xE171L},{0x21F2L,(-1L)},{0xE060L,0xE060L},{(-1L),0xE060L}},{{0xE060L,(-1L)},{0x21F2L,0xE171L},{(-1L),0x21F2L},{0xE171L,(-1L)}},{{0xE171L,0x21F2L},{(-1L),0xE171L},{0x21F2L,(-1L)},{0xE060L,0xE060L}},{{(-1L),0xE060L},{0xE060L,(-1L)},{0x21F2L,0xE171L},{(-1L),(-1L)}}};
                int32_t l_248 = 0x4C83CD3FL;
                int32_t l_249[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_249[i] = 0L;
                l_249[1] |= ((safe_div_func_int8_t_s_s(l_215, (+(l_248 = (safe_sub_func_int8_t_s_s(((g_130 , (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((l_238 = ((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((((g_75 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u((l_242--), ((safe_div_func_uint16_t_u_u(l_239[1][2], ((g_75 > 0L) & 0xEDL))) < 0xEE761C6CL))) || 0xC500L) != 0x24B1L) > 0x9EEAFE74L) & 0xBF1EE3ACL), g_6[1])) , g_202[0]) >= 0x5CL), 7)), l_238))) || l_237) || g_79) | l_240[3][3][0]), 4)), g_130)) , l_240[3][3][0])) , l_30.f2) >= l_239[1][1]), l_30.f2)), 7))) & 0x817C74455C9E55F8LL), g_247)))))) || l_238);
            }
            else
            { 
                return g_22[2][0];
            }
            g_81[0][2].f3 = l_241[0];
        }
    }
    else
    { 
        int64_t l_256 = 3L;
        uint32_t l_258[1][3][4] = {{{0xEB55C6A8L,0x782676FAL,0xEB55C6A8L,0x782676FAL},{0xEB55C6A8L,0x782676FAL,0xEB55C6A8L,0x782676FAL},{0xEB55C6A8L,0x782676FAL,0xEB55C6A8L,0x782676FAL}}};
        const uint16_t l_279[5][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
        int32_t l_290 = 4L;
        int32_t l_307[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_307[i] = 0xA6420E7FL;
        l_30.f3 = (((l_30.f4 <= ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((0x4364D310L | (g_202[0] , (safe_div_func_int32_t_s_s((l_256 && g_80), 1UL)))), l_257[3])) != 252UL), g_75)) == l_258[0][1][3])) & 1UL) , g_81[0][2].f1);
        for (g_130 = 0; (g_130 > 1); g_130 = safe_add_func_int8_t_s_s(g_130, 7))
        { 
            uint8_t l_261 = 0xC2L;
            int32_t l_271 = 0x11036F43L;
            int32_t l_292[1];
            int i;
            for (i = 0; i < 1; i++)
                l_292[i] = 0x94085A30L;
            if (((l_261 >= (safe_rshift_func_int8_t_s_u(((l_30.f3 &= (g_75 = ((g_81[0][2].f1 = (l_271 = ((l_258[0][2][1] , g_176) > ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s(4L, g_203)))) <= 0x2894L), l_258[0][2][1])), 8)) && g_202[1])))) && l_261))) ^ g_174), l_241[0]))) != l_258[0][1][2]))
            { 
                uint32_t l_274[4] = {0x703BB86BL,0x703BB86BL,0x703BB86BL,0x703BB86BL};
                int32_t l_281 = 0x93766C54L;
                int i;
                l_281 |= (((3L | (safe_mod_func_int16_t_s_s(l_274[3], (l_280 ^= ((l_30.f3 = (g_80 = ((safe_add_func_int8_t_s_s((g_39.f1 == (l_279[4][1] >= 0x4E52L)), l_257[3])) < g_202[0]))) , 0x8410L))))) != 8UL) == g_39.f1);
                g_81[0][2].f3 = g_36;
                l_30.f3 &= ((g_81[0][2].f2 , ((l_258[0][1][3] ^ (safe_add_func_uint64_t_u_u((g_6[1] != (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x7AL, 0x75L)), 255UL)), g_80))), g_202[0]))) | g_203)) != 1UL);
            }
            else
            { 
                int8_t l_291 = 0x6EL;
                int32_t l_293 = 0x598B16B5L;
                int32_t l_298 = 0x1685AF8AL;
                l_293 ^= ((l_292[0] ^= ((l_290 &= ((g_79 ^ 0L) && (l_30.f4 <= (l_271 = l_258[0][0][3])))) | l_291)) , 0x058346CAL);
                --g_295;
                g_299++;
            }
            if (l_30.f1)
                continue;
        }
        l_307[1] = (~(safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(l_307[1], ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_176, ((((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((g_75 = g_81[0][2].f1), (((1UL < l_30.f3) != 0x2E61DC0CL) <= g_81[0][2].f0))) != 0x4AL), l_307[1])) , g_6[1]) & g_247) <= 0x477AL))), g_202[1])), 2)) == l_307[0]))), l_279[4][1])));
    }
    g_322--;
    return g_130;
}



static struct S0  func_2(uint32_t  p_3, int32_t  p_4, union U1  p_5)
{ 
    uint32_t l_47 = 0x892F88B3L;
    int32_t l_48 = 3L;
    uint8_t l_49 = 0UL;
    int32_t l_50 = 1L;
    uint8_t l_62 = 252UL;
    uint8_t l_97[5][2][1] = {{{0UL},{0x5FL}},{{0UL},{0x5FL}},{{0UL},{0x5FL}},{{0UL},{0x5FL}},{{0UL},{0x5FL}}};
    uint16_t l_110 = 5UL;
    uint32_t l_131[3];
    struct S0 l_204 = {310,19,48,-33,1613};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_131[i] = 0x1FA51574L;
lbl_90:
    l_50 = ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(p_3, (safe_div_func_int64_t_s_s((0L >= (l_48 &= ((+l_47) != g_22[1][0]))), p_5.f0)))) == l_49), g_39.f1)) >= 1UL);
    for (l_50 = 2; (l_50 >= 0); l_50 -= 1)
    { 
        int32_t l_74 = 1L;
        int8_t l_78 = 1L;
        if ((4UL < (safe_sub_func_int32_t_s_s((~p_5.f0), (-8L)))))
        { 
            uint16_t l_63 = 65535UL;
            l_63 |= (0xEE2BL || (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_4, (safe_lshift_func_int16_t_s_s(g_22[1][0], 9)))) || (safe_mod_func_int16_t_s_s(p_5.f0, p_3))), l_62)));
            l_48 = (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((p_5.f0 > (safe_rshift_func_int8_t_s_u((((251UL && (g_39.f0 >= p_4)) || p_3) , l_74), g_39.f0))), g_39.f0)) , 1UL) ^ l_47), p_4)) <= 0x2804L), (-2L)));
        }
        else
        { 
            g_75 |= g_39.f0;
        }
        l_78 = (safe_rshift_func_uint8_t_u_s(((l_48 != 0x11FE8BE9C2C51C80LL) , l_50), 7));
        for (p_4 = 2; (p_4 >= 0); p_4 -= 1)
        { 
            int32_t l_88 = 0xB1200BAFL;
            for (g_39.f2 = 0; (g_39.f2 <= 0); g_39.f2 += 1)
            { 
                g_80 |= (g_79 = 0L);
                return g_81[0][2];
            }
            for (p_5.f1 = 0; (p_5.f1 <= 0); p_5.f1 += 1)
            { 
                int32_t l_89[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_89[i] = 0L;
                if (g_22[l_50][p_5.f1])
                    break;
                l_89[2] = (((((safe_mul_func_int8_t_s_s(0x0AL, (safe_lshift_func_uint16_t_u_u(0UL, 4)))) <= ((safe_add_func_uint8_t_u_u(p_3, (p_5.f1 < g_81[0][2].f2))) ^ p_4)) && p_4) > g_22[l_50][p_5.f1]) != l_88);
                if (p_3)
                    goto lbl_90;
            }
        }
    }
    if ((safe_mod_func_uint32_t_u_u((l_62 <= (p_5.f0 & (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((l_97[4][0][0] || g_39.f0) && l_97[4][1][0]) == 0x225C50F4L), l_50)), g_6[0])))), g_6[2])))
    { 
        int32_t l_104[2][3] = {{0L,0x47C65310L,0x47C65310L},{0L,0x47C65310L,0x47C65310L}};
        uint32_t l_109[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_109[i] = 18446744073709551607UL;
        l_110 = ((l_109[0] = (safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((l_104[1][2] = p_5.f0) ^ 0xCB25L) >= (safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u(p_4, (p_4 | g_81[0][2].f4))) ^ 0L) & 4UL) , p_4), g_39.f1))), l_48)), 0)) & g_36), l_47))) , 1L);
    }
    else
    { 
        uint8_t l_128 = 0x0AL;
        int32_t l_129 = 0x16C98A27L;
        int32_t l_139 = 0x96261E54L;
        g_130 = (!(g_36 & (safe_mod_func_int32_t_s_s((g_81[0][2].f3 &= ((p_5.f0 == p_3) >= (safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((l_48 = (safe_mod_func_uint32_t_u_u(((l_128 = (0x67L > l_49)) & 0xD4L), l_129))) ^ g_75) > p_3), 3)) ^ p_4), l_50)), l_49)) , 1L) || 7L) , l_49), g_75)), 2UL)) <= 0x9C6DFE233B6E2EDBLL), p_5.f0)))), l_129))));
        if ((l_131[1] = 0x2021A1DBL))
        { 
            uint32_t l_134 = 18446744073709551615UL;
            int32_t l_164 = 0x539A05EBL;
            int32_t l_175 = 0xDCE665EBL;
            if (((safe_mul_func_int16_t_s_s(l_134, g_75)) <= ((safe_sub_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((((l_128 , l_139) == p_4) || l_134) != g_6[1]), 0xDED112D8L)) | (-6L)), g_39.f1)) == 0xAFD11974L)))
            { 
                uint32_t l_150 = 0UL;
                int32_t l_161 = 0x4F1BB376L;
                int32_t l_163 = (-1L);
                l_139 = (~(p_3 ^ ((!(p_4 ^= (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s((safe_div_func_int16_t_s_s((!((l_150 != ((safe_rshift_func_int8_t_s_s(p_3, 0)) ^ (safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((0xD6ACL == 0L) && 0xD2E6L), g_81[0][2].f0)), g_6[1])), g_130)))) != 0x54L)), 0xCF99L)))) , l_131[0]) & 0x3DE48FBBL), 2)), g_81[0][2].f0)))) ^ 0xE0C3L)));
                if (g_130)
                    goto lbl_179;
                l_50 = (p_4 = (l_164 ^= ((l_161 = p_4) <= (l_163 = (+g_130)))));
                p_4 = (~((((l_164 = ((((g_174 = (safe_div_func_int16_t_s_s((g_81[0][2].f3 > g_75), (g_80 = ((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_6[1] = (safe_mod_func_uint16_t_u_u(((p_5.f0 , 0x1ADE1D7CL) > l_150), l_110))), g_22[2][0])), 0x68L)) || l_131[1]))))) & l_62) , l_134) && l_150)) > 0x47L) >= p_4) , l_49));
            }
            else
            { 
                return g_81[0][2];
            }
lbl_179:
            g_176--;
            l_175 |= (g_81[0][2].f0 & ((safe_mod_func_uint16_t_u_u((l_47 && (safe_lshift_func_int16_t_s_s((((((8L ^ (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((!((p_4 > g_39.f1) <= 0x34L)) , g_39.f0), p_4)), 5))) | l_134) & 0UL) , p_5) , l_129), 12))), g_75)) && p_3));
        }
        else
        { 
            p_4 = ((safe_mod_func_int8_t_s_s(((g_39 , ((l_48 = (g_22[0][0]--)) & (g_203 = (((safe_sub_func_int64_t_s_s((((g_130 = (safe_mod_func_int8_t_s_s(0xDEL, 0xE1L))) < (safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(l_97[4][0][0], g_39.f1)), p_4))))) & 0L), 1L)) & l_97[4][0][0]) >= g_202[0])))) && 0x2FL), g_81[0][2].f1)) | g_81[0][2].f0);
        }
    }
    return l_204;
}



static int32_t  func_11(union U1  p_12, struct S0  p_13)
{ 
    int8_t l_37 = 0x13L;
    int32_t l_38[5][4][5] = {{{0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L,(-1L)},{(-1L),(-1L),1L,(-1L),(-1L)},{(-1L),0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L},{(-1L),1L,1L,(-1L),1L}},{{0xDEF05DE0L,0xDEF05DE0L,0x438361CDL,0xDEF05DE0L,0xDEF05DE0L},{1L,(-1L),1L,1L,(-1L)},{0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L,(-1L)},{(-1L),(-1L),1L,(-1L),(-1L)}},{{(-1L),0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L},{(-1L),1L,1L,(-1L),1L},{0xDEF05DE0L,0xDEF05DE0L,0x438361CDL,0xDEF05DE0L,0xDEF05DE0L},{1L,(-1L),1L,1L,(-1L)}},{{0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L,(-1L)},{(-1L),(-1L),1L,(-1L),(-1L)},{(-1L),0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L},{(-1L),1L,1L,(-1L),1L}},{{0xDEF05DE0L,0xDEF05DE0L,0x438361CDL,0xDEF05DE0L,0xDEF05DE0L},{1L,(-1L),1L,1L,(-1L)},{0xDEF05DE0L,(-1L),(-1L),0xDEF05DE0L,(-1L)},{(-1L),(-1L),1L,(-1L),(-1L)}}};
    int i, j, k;
    l_38[0][2][3] = (((safe_rshift_func_int16_t_s_u(0xCE22L, (safe_rshift_func_uint8_t_u_u(((~g_6[1]) <= (l_37 = (g_36 &= g_6[1]))), 4)))) != (l_38[0][2][3] && 0xB3BBL)) >= l_38[1][3][1]);
    return l_38[0][2][3];
}



static union U1  func_14(const uint64_t  p_15, int32_t  p_16)
{ 
    uint16_t l_24[3][2] = {{65528UL,65528UL},{65528UL,65528UL},{65528UL,65528UL}};
    int32_t l_27 = 0L;
    union U1 l_29 = {0x5A82A6F9L};
    int i, j;
    p_16 &= 0x2C39D5B6L;
    if (p_16)
        goto lbl_28;
lbl_28:
    l_27 ^= (g_22[0][0] != ((~(l_24[2][1] > (safe_mod_func_int64_t_s_s((p_16 , g_6[0]), (-5L))))) >= p_16));
    p_16 = 0x07E294B5L;
    return l_29;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_22[i][j], "g_22[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_81[i][j].f0, "g_81[i][j].f0", print_hash_value);
            transparent_crc(g_81[i][j].f1, "g_81[i][j].f1", print_hash_value);
            transparent_crc(g_81[i][j].f2, "g_81[i][j].f2", print_hash_value);
            transparent_crc(g_81[i][j].f3, "g_81[i][j].f3", print_hash_value);
            transparent_crc(g_81[i][j].f4, "g_81[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_202[i], "g_202[i]", print_hash_value);

    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_319[i], "g_319[i]", print_hash_value);

    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
