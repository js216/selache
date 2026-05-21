// SPDX-License-Identifier: MIT
// cctest_csmith_335c9806.c --- cctest case csmith_335c9806 (csmith seed 861706246)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb57e4d02 */

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

// Options:   -s 861706246 -o /tmp/csmith_gen_vht_hr6z/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   uint64_t  f3;
};

struct S1 {
   int64_t  f0;
   uint8_t  f1;
   int64_t  f2;
   const uint16_t  f3;
   const uint64_t  f4;
};

struct S2 {
   int16_t  f0;
   int16_t  f1;
   int8_t  f2;
   uint8_t  f3;
   uint16_t  f4;
   int64_t  f5;
};

struct S3 {
   uint32_t  f0;
   int64_t  f1;
};

union U5 {
   int8_t  f0;
   const int32_t  f1;
};


static int32_t g_2 = 6L;
static int32_t g_5 = (-1L);
static int32_t g_9 = 0xB8AE505BL;
static int32_t g_25 = 0L;
static const struct S3 g_40[2] = {{0x25470E98L,0L},{0x25470E98L,0L}};
static struct S1 g_41 = {0x232038BE40E81688LL,255UL,0xBFD33F116E8CFB99LL,65526UL,0UL};
static uint16_t g_44 = 0xD85AL;
static uint32_t g_45 = 0xC7BC07E7L;
static int32_t g_90 = 0x0866D820L;
static int8_t g_91 = 0x89L;
static int64_t g_92 = 0x975C8F0ABFABC748LL;
static uint8_t g_93 = 0x61L;
static struct S0 g_96 = {1UL,0x1BA0D895L,7UL,0x0CFE8E9AC7269306LL};
static struct S2 g_97 = {0x28FFL,0x5284L,0x5AL,0xB6L,0x2759L,-1L};



static uint64_t  func_1(void);
static int32_t  func_28(uint32_t  p_29, int64_t  p_30, struct S2  p_31, const struct S3  p_32, struct S1  p_33);
static struct S0  func_54(uint64_t  p_55, uint8_t  p_56, uint16_t  p_57);
static struct S0  func_60(struct S2  p_61, union U5  p_62, uint8_t  p_63);




static uint64_t  func_1(void)
{ 
    int64_t l_27 = 1L;
    const union U5 l_34 = {0x62L};
    int32_t l_53[1];
    uint32_t l_133 = 0x8F595BA4L;
    const struct S0 l_148 = {0x93L,18446744073709551614UL,0xA0L,1UL};
    const struct S3 l_150 = {4294967287UL,0x026852E783141211LL};
    struct S3 l_151 = {0xA71D37E9L,0xE4E8F995CB7F88A7LL};
    int i;
    for (i = 0; i < 1; i++)
        l_53[i] = (-5L);
    for (g_2 = 0; (g_2 > 15); g_2++)
    { 
        int16_t l_8[4];
        struct S2 l_64 = {0xF361L,0x30FAL,0xFAL,0x0DL,0xEE1FL,-1L};
        int32_t l_149 = 4L;
        int i;
        for (i = 0; i < 4; i++)
            l_8[i] = 0x3E34L;
        for (g_5 = 0; (g_5 < 27); g_5 = safe_add_func_int32_t_s_s(g_5, 7))
        { 
            uint64_t l_26 = 18446744073709551615UL;
            int32_t l_49 = 0x165AAE70L;
            union U5 l_65 = {0x50L};
            int16_t l_118 = (-1L);
            for (g_9 = 0; (g_9 <= 3); g_9 += 1)
            { 
                struct S2 l_39 = {7L,0xDA66L,1L,1UL,0x42D6L,0L};
                int i;
                l_27 = (safe_mod_func_int64_t_s_s((((~(safe_sub_func_int64_t_s_s(l_8[g_9], (g_5 != (l_8[g_9] < (~(safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((~(safe_mod_func_uint64_t_u_u((g_25 &= ((safe_add_func_int64_t_s_s((-1L), g_2)) < g_2)), g_9))) < l_8[2]) , 0x6EL), (-8L))), g_9)))))))) > g_5) | g_9), l_26));
                if (l_8[g_9])
                    break;
                g_45 = func_28((l_27 > (l_34 , 4294967295UL)), (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_5, g_9)), l_34.f0)), l_39, g_40[0], g_41);
            }
            for (g_41.f0 = 6; (g_41.f0 == 1); --g_41.f0)
            { 
                int32_t l_48 = (-1L);
                uint32_t l_50[5] = {0xD8E7029BL,0xD8E7029BL,0xD8E7029BL,0xD8E7029BL,0xD8E7029BL};
                int i;
                l_50[1]--;
                l_53[0] = g_41.f1;
                g_96 = func_54((l_53[0] & (safe_mul_func_uint8_t_u_u((func_60(l_64, l_65, ((safe_div_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(g_25, 0xA09FL)) >= l_27), 9)) < l_65.f0) >= g_25), 0xE7L)) && g_2)) , g_44), 0x54L))), l_64.f2, l_50[1]);
            }
            l_49 |= (l_53[0] = (g_96.f2 && (safe_add_func_uint32_t_u_u(((+(1L & (g_97.f0 ^= (((g_45 > g_41.f0) <= 7L) || 0x2B8EL)))) & l_26), l_118))));
        }
        g_5 = (safe_lshift_func_int8_t_s_s((g_97.f2 = ((safe_mod_func_int32_t_s_s(((((l_64.f2 , (safe_mod_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u(g_97.f4, ((g_90 |= (((safe_add_func_uint32_t_u_u(4294967287UL, (safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(g_97.f2, 0x32L)) > (-1L)), g_40[0].f1)))) >= g_9) | 6L)) >= l_64.f4))) || 0x0AEA978AFB31ACB9LL) == l_64.f3) < l_64.f2), 0x4AL))) , g_97.f3) >= g_41.f1) ^ (-7L)), g_97.f1)) > l_133)), 5));
        for (g_45 = (-3); (g_45 > 46); g_45 = safe_add_func_uint64_t_u_u(g_45, 2))
        { 
            int16_t l_138 = (-9L);
            for (g_44 = (-17); (g_44 >= 60); g_44++)
            { 
                g_9 &= l_64.f0;
                if (l_138)
                    continue;
            }
            for (l_133 = 0; (l_133 <= 0); l_133 += 1)
            { 
                struct S2 l_139 = {0xF7E3L,0xC08CL,5L,0xE7L,65527UL,-1L};
                int i;
                g_5 &= l_53[l_133];
                l_139 = (g_97 = g_97);
            }
            for (g_96.f0 = 0; (g_96.f0 == 21); g_96.f0++)
            { 
                uint16_t l_147 = 8UL;
                l_149 = ((+0xEEBB44E65D69AD93LL) == (safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(l_147, g_96.f1)), ((l_148 , 0L) , g_96.f1))));
                if (l_64.f4)
                    break;
                return g_97.f2;
            }
        }
    }
    l_151 = l_150;
    return l_53[0];
}



static int32_t  func_28(uint32_t  p_29, int64_t  p_30, struct S2  p_31, const struct S3  p_32, struct S1  p_33)
{ 
    int16_t l_42[3][2] = {{(-1L),(-1L)},{1L,(-1L)},{(-1L),1L}};
    int32_t l_43 = 5L;
    int i, j;
    l_43 = l_42[2][0];
    g_44 = l_42[2][0];
    return p_31.f2;
}



static struct S0  func_54(uint64_t  p_55, uint8_t  p_56, uint16_t  p_57)
{ 
    struct S2 l_98 = {0xA600L,0L,0x3AL,5UL,0x3A56L,0L};
    const struct S2 l_106[2] = {{0x12FBL,0x8D12L,0xFBL,0UL,0xC189L,0L},{0x12FBL,0x8D12L,0xFBL,0UL,0xC189L,0L}};
    int32_t l_114 = (-10L);
    int i;
    l_98 = g_97;
    l_114 = (((+((safe_add_func_int32_t_s_s(l_98.f2, ((((safe_lshift_func_uint16_t_u_s((--p_57), ((l_98.f5 >= (l_106[1] , (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((+((safe_mul_func_uint16_t_u_u(p_55, g_25)) != 0x7285EB11L)), p_55)), 0x195449CDL)))) || 4294967291UL))) == l_98.f1) , 0x6C46319CD64B8F5BLL) | p_56))) | l_106[1].f1)) , 0xF7L) ^ l_98.f2);
    return g_96;
}



static struct S0  func_60(struct S2  p_61, union U5  p_62, uint8_t  p_63)
{ 
    uint64_t l_88 = 1UL;
    int32_t l_89[5][4][5] = {{{0x760DC054L,0x76B58F18L,0x760DC054L,0x6CF9C76AL,0x591FCF28L},{0x768DD0F0L,0x19E5EE4AL,0xA9A6AE6CL,0x19E5EE4AL,0x768DD0F0L},{0x760DC054L,5L,0x76B58F18L,0x93FB8B7EL,0x76B58F18L},{9L,9L,0xA9A6AE6CL,0x768DD0F0L,1L}},{{5L,0x760DC054L,0x760DC054L,5L,0x76B58F18L},{0x19E5EE4AL,0x768DD0F0L,(-1L),(-1L),0x768DD0F0L},{0x76B58F18L,0x93FB8B7EL,0x591FCF28L,0x76B58F18L,0x76B58F18L},{0x768DD0F0L,1L,0x768DD0F0L,0xA9A6AE6CL,9L}},{{0x6CF9C76AL,0x760DC054L,0x76B58F18L,0x760DC054L,0x6CF9C76AL},{0x768DD0F0L,(-7L),1L,(-1L),1L},{0L,0L,0x76B58F18L,0x6CF9C76AL,5L},{(-7L),0x768DD0F0L,0x768DD0F0L,(-7L),1L}},{{0x760DC054L,0x6CF9C76AL,0x591FCF28L,0x591FCF28L,0x6CF9C76AL},{1L,0x768DD0F0L,0xA9A6AE6CL,9L,9L},{0x93FB8B7EL,0L,0x93FB8B7EL,0x591FCF28L,0x76B58F18L},{(-1L),(-7L),9L,(-7L),(-1L)}},{{0x93FB8B7EL,0x760DC054L,0L,0x6CF9C76AL,0L},{1L,1L,9L,(-1L),0x19E5EE4AL},{0x760DC054L,0x93FB8B7EL,0x93FB8B7EL,0x760DC054L,0L},{(-7L),(-1L),0xA9A6AE6CL,0xA9A6AE6CL,(-1L)}}};
    int i, j, k;
    g_9 = (((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((l_89[0][0][4] = ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_2, (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((g_2 == (safe_rshift_func_int8_t_s_s(l_88, ((6L & g_41.f3) | p_61.f1)))), p_61.f5)) | 5UL) != p_61.f0), 5)))), 1L)) >= (-6L))), g_40[0].f1)), 6UL)), 0x7F80L)) && g_25) ^ 0x9AL) >= p_61.f2) | p_61.f2);
    g_93++;
    return g_96;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_40[i].f0, "g_40[i].f0", print_hash_value);
        transparent_crc(g_40[i].f1, "g_40[i].f1", print_hash_value);

    }
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_97.f4, "g_97.f4", print_hash_value);
    transparent_crc(g_97.f5, "g_97.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
