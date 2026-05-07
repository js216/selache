// SPDX-License-Identifier: MIT
// cctest_csmith_57d9b27e.c --- cctest case csmith_57d9b27e (csmith seed 1473884798)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8f8ef12 */

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

// Options:   -s 1473884798 -o /tmp/csmith_gen_r2xh1ybl/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
   int32_t  f1;
   int16_t  f2;
   int16_t  f3;
   int8_t  f4;
   unsigned f5 : 6;
   uint32_t  f6;
   int8_t  f7;
};

union U1 {
   int8_t * f0;
};


static int8_t g_7 = 0xCEL;
static int64_t g_13 = 0x15E82AA9DADE661FLL;
static int16_t g_22[1][6] = {{0xE4C7L,8L,0xE4C7L,0xE4C7L,8L,0xE4C7L}};
static int16_t g_24 = 0x5702L;
static int32_t g_28 = 0x8B36CEDDL;
static union U1 g_47[5][7][1] = {{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}},{{0}},{{0}}}};
static struct S0 g_79 = {-8L,0xCE577E9FL,0L,0xD7BFL,0xF1L,6,7UL,0x87L};
static uint32_t g_104[1] = {0xA7851781L};
static uint8_t g_107[1] = {0xFDL};
static uint16_t g_128 = 0xA2E5L;
static uint64_t g_132 = 18446744073709551615UL;
static int64_t g_145 = 0x29ECF7F40F1A7D10LL;
static uint8_t g_146[7][3] = {{0x5AL,0x5AL,0xBDL},{0x33L,0x33L,0x76L},{0xA1L,0xA1L,0x5AL},{0x33L,0x33L,0x76L},{0xA1L,0xA1L,0x5AL},{0x33L,0x33L,0x76L},{0xA1L,0xA1L,0x5AL}};
static uint16_t g_165[2] = {6UL,6UL};
static int16_t *g_190 = &g_22[0][2];
static int16_t **g_189 = &g_190;
static int16_t ***g_188 = &g_189;
static const int16_t *g_265 = &g_24;
static const int16_t **g_264 = &g_265;
static union U1 *g_276 = &g_47[0][5][0];
static int32_t g_291 = 0L;
static int64_t **g_303 = (void*)0;
static int64_t ****g_318 = (void*)0;
static int32_t *g_337[2][5][7] = {{{&g_291,(void*)0,&g_28,&g_291,&g_28,&g_291,&g_28},{(void*)0,(void*)0,&g_291,&g_291,&g_291,(void*)0,(void*)0},{&g_28,&g_28,&g_28,&g_28,&g_291,&g_291,&g_291},{&g_28,&g_291,&g_291,&g_291,&g_291,&g_291,&g_28},{(void*)0,&g_291,(void*)0,&g_28,&g_28,(void*)0,&g_291}},{{(void*)0,&g_28,&g_291,&g_291,&g_291,&g_291,&g_291},{&g_28,&g_291,&g_291,&g_291,&g_28,&g_28,&g_28},{&g_28,(void*)0,(void*)0,&g_291,&g_291,&g_291,(void*)0},{(void*)0,&g_28,&g_291,&g_28,&g_291,&g_28,(void*)0},{&g_291,&g_28,&g_28,&g_291,(void*)0,&g_28,&g_28}}};
static union U1 **g_348 = &g_276;
static union U1 ***g_347 = &g_348;
static int8_t *g_350 = &g_79.f7;
static uint8_t g_446 = 247UL;
static struct S0 *g_509[6] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
static const int8_t *g_527 = &g_79.f4;
static const int8_t **g_526 = &g_527;
static const int8_t ***g_525 = &g_526;
static int8_t g_556 = 0xCAL;
static int16_t ****g_632 = &g_188;
static const uint64_t g_640 = 18446744073709551607UL;
static uint32_t g_654[4][4] = {{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}};
static uint64_t g_702 = 1UL;
static int16_t g_703[3][1][6] = {{{0L,0xF20EL,0xF20EL,0L,0xF20EL,0xF20EL}},{{0L,0xF20EL,0xF20EL,0L,0xF20EL,0xF20EL}},{{0L,0xF20EL,0xF20EL,0L,0xF20EL,0xF20EL}}};
static uint16_t g_751[7][2] = {{0xEEFAL,0xEEFAL},{0xEEFAL,0xEEFAL},{0xEEFAL,0xEEFAL},{0xEEFAL,0xEEFAL},{0xEEFAL,0xEEFAL},{0xEEFAL,0xEEFAL},{0xEEFAL,0xEEFAL}};
static int16_t g_785 = 9L;
static const int64_t **g_801 = (void*)0;
static const int64_t ***g_800 = &g_801;
static const int64_t ****g_799 = &g_800;
static int32_t *g_845[3][3][6] = {{{(void*)0,&g_79.f1,&g_79.f1,&g_79.f1,&g_79.f1,(void*)0},{&g_79.f1,&g_79.f1,&g_79.f1,&g_79.f1,&g_79.f1,(void*)0},{&g_79.f1,&g_79.f1,&g_79.f1,(void*)0,&g_79.f1,&g_79.f1}},{{&g_79.f1,&g_79.f1,(void*)0,&g_79.f1,&g_79.f1,(void*)0},{&g_79.f1,&g_79.f1,(void*)0,&g_79.f1,&g_79.f1,&g_79.f1},{(void*)0,(void*)0,(void*)0,&g_79.f1,&g_79.f1,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_79.f1,&g_79.f1,&g_79.f1},{&g_79.f1,&g_79.f1,(void*)0,(void*)0,(void*)0,&g_79.f1},{&g_79.f1,&g_79.f1,&g_79.f1,&g_79.f1,&g_79.f1,(void*)0}}};
static int32_t * const *g_844 = &g_845[0][2][3];
static int64_t **g_871 = (void*)0;
static int16_t ** const *g_929 = (void*)0;
static int16_t ** const **g_928 = &g_929;
static int8_t g_956[5] = {0x27L,0x27L,0x27L,0x27L,0x27L};
static uint32_t g_1000[7][7] = {{0x868745D8L,0xDA18A80FL,0x1A10A4CCL,0x615368C9L,0x8855DB69L,4UL,0x868745D8L},{4294967287UL,0xDA18A80FL,0x901D9F7BL,0x359C1A60L,0x8855DB69L,4294967287UL,4294967287UL},{4294967287UL,4UL,0x1A10A4CCL,0x359C1A60L,0x1A10A4CCL,4UL,4294967287UL},{0x868745D8L,0xDA18A80FL,0x1A10A4CCL,0x615368C9L,0x8855DB69L,4UL,0x868745D8L},{4294967287UL,0xDA18A80FL,0x901D9F7BL,0x359C1A60L,0x8855DB69L,4294967287UL,4294967287UL},{4294967287UL,4UL,0x1A10A4CCL,0x359C1A60L,0x1A10A4CCL,4UL,4294967287UL},{0x868745D8L,0xDA18A80FL,0x1A10A4CCL,0x615368C9L,0x8855DB69L,4UL,0x868745D8L}};
static uint8_t g_1038[4][7] = {{0x32L,0x32L,0x32L,0x32L,0x32L,0x32L,0x32L},{0x72L,8UL,0x72L,8UL,0x72L,8UL,0x72L},{0x32L,0x32L,0x32L,0x32L,0x32L,0x32L,0x32L},{0x72L,8UL,0x72L,8UL,0x72L,8UL,0x72L}};
static struct S0 g_1046 = {0xF2L,3L,0x26ABL,1L,4L,5,4294967288UL,-1L};



static uint32_t  func_1(void);
static int32_t * func_36(uint32_t  p_37, int16_t  p_38);
static union U1 * func_48(union U1 * p_49, int64_t  p_50, uint32_t  p_51, int64_t  p_52);
static union U1 * func_54(int16_t * const  p_55, int32_t * p_56, int16_t * p_57, const int32_t  p_58, int64_t * p_59);
static int32_t * func_62(const uint32_t  p_63, int64_t  p_64, const int16_t ** p_65, int16_t  p_66);
static const uint32_t  func_67(struct S0  p_68, union U1  p_69);
static int32_t  func_70(const uint64_t  p_71, union U1  p_72, int64_t * p_73, uint32_t  p_74);
static const union U1  func_86(int16_t  p_87, uint32_t  p_88, uint32_t  p_89, uint32_t  p_90, uint64_t  p_91);




static uint32_t  func_1(void)
{ 
    uint64_t l_2 = 0x659D568D526D2E85LL;
    int32_t l_8 = 0x1BC7DCD6L;
    uint32_t l_25 = 0x91A83ACDL;
    int8_t *l_41 = &g_7;
    int64_t *l_371 = (void*)0;
    int32_t l_377[3][6] = {{0xFC1D8D49L,(-1L),(-1L),0xFC1D8D49L,(-1L),(-1L)},{0xFC1D8D49L,(-1L),(-1L),0xFC1D8D49L,(-1L),(-1L)},{0xFC1D8D49L,(-1L),(-1L),0xFC1D8D49L,(-1L),(-1L)}};
    uint32_t l_381 = 0x103F1AFAL;
    int16_t l_397 = 0xB9B9L;
    int8_t l_418 = 1L;
    int32_t *l_467 = &l_377[1][4];
    uint64_t l_506 = 0xB0B475680E212252LL;
    struct S0 l_521[1] = {{0x7AL,1L,0L,0x4038L,0x06L,5,0x71B0955DL,0xBFL}};
    int32_t l_550 = 0L;
    int16_t l_555 = 8L;
    struct S0 l_569 = {0xC3L,0L,9L,-5L,-9L,3,0x8B80ED6AL,9L};
    const uint32_t l_630 = 0x52BA17DCL;
    int16_t ****l_631 = &g_188;
    const int16_t **l_633 = &g_265;
    uint16_t l_660 = 65527UL;
    int32_t l_670 = 0x6D792E74L;
    uint64_t l_696[3][7][4] = {{{0x3FCF9C956132A486LL,18446744073709551615UL,0x3FCF9C956132A486LL,18446744073709551608UL},{8UL,0x3677104AA6C096DELL,0xD0CB2C7D9F2FBFF1LL,0x890B049D22A369EELL},{0x48FF58670B584F6CLL,5UL,18446744073709551615UL,0x3677104AA6C096DELL},{4UL,0UL,18446744073709551615UL,0x3FCF9C956132A486LL},{0x48FF58670B584F6CLL,2UL,0xD0CB2C7D9F2FBFF1LL,0UL},{8UL,1UL,0x3FCF9C956132A486LL,18446744073709551615UL},{0x3FCF9C956132A486LL,18446744073709551615UL,18446744073709551610UL,5UL}},{{18446744073709551615UL,2UL,9UL,7UL},{0x3677104AA6C096DELL,4UL,4UL,0x3677104AA6C096DELL},{18446744073709551615UL,0UL,1UL,0x5D59AC9F51C60971LL},{18446744073709551615UL,0x3677104AA6C096DELL,18446744073709551614UL,0x63E88AE772741A89LL},{7UL,0xD2B78C73A3042DBFLL,0x3FCF9C956132A486LL,0x63E88AE772741A89LL},{18446744073709551610UL,0x3677104AA6C096DELL,1UL,0x5D59AC9F51C60971LL},{0x48FF58670B584F6CLL,0UL,18446744073709551609UL,0x3677104AA6C096DELL}},{{0UL,4UL,18446744073709551615UL,7UL},{1UL,2UL,1UL,5UL},{8UL,18446744073709551615UL,18446744073709551606UL,18446744073709551615UL},{7UL,1UL,18446744073709551610UL,0UL},{1UL,2UL,1UL,0x3FCF9C956132A486LL},{0x3677104AA6C096DELL,0UL,0xF23FC86DAB55CDE3LL,0x3677104AA6C096DELL},{0x3677104AA6C096DELL,5UL,18446744073709551606UL,0xDAC833AC90742E0ALL}}};
    uint32_t l_786 = 0xE228B4C9L;
    const int32_t *l_792 = &l_377[1][4];
    uint32_t l_829 = 18446744073709551610UL;
    int32_t l_917 = 0L;
    const int16_t l_933 = 0x69A2L;
    int32_t **l_935[3];
    int32_t ***l_934 = &l_935[0];
    union U1 ****l_948 = &g_347;
    uint64_t l_952 = 0x19BBA1BF6DE9DFD9LL;
    union U1 ** const *l_965 = &g_348;
    union U1 ** const **l_964[7][1];
    int64_t l_973 = (-6L);
    uint64_t l_1009[4];
    int32_t *l_1035 = (void*)0;
    int32_t *l_1036 = &l_8;
    int32_t *l_1037 = &g_291;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_935[i] = (void*)0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_964[i][j] = &l_965;
    }
    for (i = 0; i < 4; i++)
        l_1009[i] = 2UL;
    l_2++;
    return g_1046.f2;
}



static int32_t * func_36(uint32_t  p_37, int16_t  p_38)
{ 
    uint32_t l_266 = 0xDA18C3DDL;
    const uint16_t l_274 = 9UL;
    int64_t *l_275[2];
    union U1 * const *l_285 = &g_276;
    int32_t l_297 = 1L;
    int64_t **l_302 = &l_275[0];
    int32_t l_304 = 0x0E9B9C9FL;
    int i;
    for (i = 0; i < 2; i++)
        l_275[i] = (void*)0;
    for (p_37 = 6; (p_37 == 60); p_37++)
    { 
        union U1 l_53 = {0};
        int64_t *l_75 = &g_13;
        int32_t l_286[2];
        int32_t *l_296[1];
        const int16_t ***l_326 = &g_264;
        const int16_t ****l_325[5];
        int i;
        for (i = 0; i < 2; i++)
            l_286[i] = 0L;
        for (i = 0; i < 1; i++)
            l_296[i] = &g_28;
        for (i = 0; i < 5; i++)
            l_325[i] = &l_326;
        for (p_38 = (-25); (p_38 == 23); p_38++)
        { 
            const union U1 *l_46[7][1][5] = {{{&g_47[4][2][0],&g_47[2][6][0],(void*)0,(void*)0,&g_47[2][6][0]}},{{&g_47[2][6][0],&g_47[4][6][0],&g_47[4][2][0],&g_47[2][6][0],(void*)0}},{{&g_47[4][5][0],&g_47[2][6][0],&g_47[4][6][0],&g_47[2][6][0],&g_47[4][5][0]}},{{&g_47[4][2][0],&g_47[4][6][0],&g_47[4][6][0],(void*)0,&g_47[4][6][0]}},{{&g_47[4][5][0],&g_47[4][6][0],&g_47[4][6][0],&g_47[4][5][0],(void*)0}},{{&g_47[2][6][0],&g_47[4][5][0],&g_47[4][6][0],&g_47[4][6][0],&g_47[4][6][0]}},{{&g_47[4][2][0],&g_47[4][5][0],&g_47[4][2][0],(void*)0,&g_47[4][5][0]}}};
            int16_t *l_61 = &g_22[0][2];
            int16_t **l_60 = &l_61;
            int32_t *l_273 = &g_28;
            int32_t **l_272 = &l_273;
            int32_t *l_289 = (void*)0;
            int32_t *l_290[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_290[i] = &g_291;
            g_276 = (((void*)0 != l_46[0][0][2]) , func_48((l_53 , func_54(((*l_60) = (void*)0), ((*l_272) = func_62(func_67((func_70(g_28, g_47[4][6][0], l_75, g_22[0][2]) , g_79), l_53), p_38, g_264, l_266)), (**g_188), l_274, l_275[0])), p_38, p_38, p_38));
            g_291 &= ((safe_sub_func_int8_t_s_s(((p_38 | (p_37 | (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((p_37 , l_285) == &g_276), l_286[0])), (safe_mod_func_int8_t_s_s((*l_273), (-1L))))) != 0x0FADCD0BB8CB34ADLL), 0xCBL)))) != (-1L)), 1UL)) == (-6L));
            (**l_272) |= l_286[0];
        }
        l_297 = (((safe_sub_func_int64_t_s_s((-10L), g_165[1])) , 1UL) > (((l_274 <= 7UL) == ((safe_add_func_uint16_t_u_u(g_22[0][2], (p_37 & (-1L)))) , p_38)) ^ g_24));
        for (l_266 = (-17); (l_266 <= 11); ++l_266)
        { 
            int64_t **l_301 = &l_275[0];
            int64_t ***l_300[3][7][1];
            union U1 **l_333 = &g_276;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_300[i][j][k] = &l_301;
                }
            }
            g_291 = ((l_302 = &l_275[0]) != (g_303 = &l_75));
            l_304 ^= g_79.f4;
            for (l_304 = 0; (l_304 < (-2)); l_304 = safe_sub_func_uint64_t_u_u(l_304, 1))
            { 
                const int16_t ****l_327[4];
                int32_t l_329 = (-7L);
                int i;
                for (i = 0; i < 4; i++)
                    l_327[i] = &l_326;
                for (g_79.f0 = 28; (g_79.f0 < 9); g_79.f0 = safe_sub_func_int8_t_s_s(g_79.f0, 9))
                { 
                    uint32_t l_309 = 4UL;
                    const int16_t *****l_328 = &l_327[3];
                    const union U1 *l_332 = &g_47[2][3][0];
                    const union U1 **l_331 = &l_332;
                    const union U1 ***l_330[5][5] = {{&l_331,&l_331,&l_331,&l_331,&l_331},{&l_331,&l_331,&l_331,&l_331,&l_331},{&l_331,&l_331,&l_331,&l_331,&l_331},{&l_331,&l_331,&l_331,&l_331,&l_331},{&l_331,&l_331,&l_331,&l_331,&l_331}};
                    int i, j;
                    l_309 ^= (-7L);
                    g_291 ^= p_38;
                    l_329 = (l_309 > (safe_mod_func_uint32_t_u_u(((0x45518725L || 0xD2ECE790L) , (safe_div_func_uint16_t_u_u(((l_266 == (((safe_lshift_func_int8_t_s_s((g_318 == ((safe_add_func_int64_t_s_s(((g_28 &= (((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((l_325[2] != ((*l_328) = l_327[3])), l_329)) != p_37), p_37)) <= p_38) & p_38)) & 4294967290UL), 0UL)) , g_318)), p_37)) == 0x0746226BA7BF0661LL) & l_266)) , 5UL), 0xEC73L))), 1UL)));
                    l_333 = (void*)0;
                }
                return &g_28;
            }
        }
        if (g_146[0][2])
            break;
        for (g_24 = 14; (g_24 >= (-5)); g_24 = safe_sub_func_uint16_t_u_u(g_24, 8))
        { 
            int32_t *l_336 = &g_28;
            return l_336;
        }
    }
    return &g_28;
}



static union U1 * func_48(union U1 * p_49, int64_t  p_50, uint32_t  p_51, int64_t  p_52)
{ 
    return &g_47[0][5][0];
}



static union U1 * func_54(int16_t * const  p_55, int32_t * p_56, int16_t * p_57, const int32_t  p_58, int64_t * p_59)
{ 
    return &g_47[4][6][0];
}



static int32_t * func_62(const uint32_t  p_63, int64_t  p_64, const int16_t ** p_65, int16_t  p_66)
{ 
    int64_t *l_267 = &g_13;
    int32_t *l_268 = &g_28;
    int32_t **l_269 = &l_268;
    int32_t *l_270 = (void*)0;
    int32_t l_271 = 0L;
    l_271 = ((((*l_267) = 0xA8F937999FF8B330LL) == (&g_28 == ((*l_269) = l_268))) || (**l_269));
    return &g_28;
}



static const uint32_t  func_67(struct S0  p_68, union U1  p_69)
{ 
    int16_t *l_92[5][4][4] = {{{&g_22[0][2],&g_79.f2,(void*)0,&g_79.f2},{(void*)0,&g_79.f3,&g_79.f2,(void*)0},{&g_24,&g_79.f3,&g_79.f3,&g_24},{&g_79.f3,&g_24,&g_79.f3,&g_79.f2}},{{&g_79.f3,&g_79.f2,(void*)0,&g_24},{&g_79.f2,&g_22[0][2],(void*)0,&g_24},{(void*)0,&g_79.f2,&g_24,&g_79.f2},{&g_79.f3,&g_24,(void*)0,&g_24}},{{&g_79.f3,&g_79.f3,&g_24,(void*)0},{&g_24,&g_79.f3,(void*)0,&g_79.f2},{&g_79.f3,&g_79.f2,&g_24,(void*)0},{&g_79.f3,&g_79.f2,&g_79.f3,(void*)0}},{{&g_24,&g_79.f2,(void*)0,&g_79.f2},{&g_79.f3,&g_24,&g_22[0][3],&g_79.f2},{&g_79.f2,&g_22[0][1],&g_22[0][3],&g_79.f2},{&g_79.f3,&g_79.f3,(void*)0,&g_22[0][3]}},{{&g_24,&g_79.f3,&g_79.f3,&g_24},{&g_79.f3,&g_24,&g_24,&g_79.f3},{&g_79.f3,&g_24,(void*)0,(void*)0},{&g_24,&g_79.f2,&g_24,&g_24}}};
    int32_t l_101 = 1L;
    int64_t *l_114 = &g_13;
    uint8_t *l_115 = (void*)0;
    uint8_t *l_116 = (void*)0;
    int32_t l_117[2][1];
    uint16_t l_162[4][4];
    uint32_t l_175[1][2];
    uint64_t l_216 = 0x5C9785EC66A7C9A4LL;
    uint16_t l_231 = 1UL;
    struct S0 l_245 = {0xB2L,0x1F329292L,0x7CBEL,0x5B98L,0x7CL,3,4294967292UL,0x36L};
    const int16_t *l_257[5][1][5] = {{{(void*)0,&l_245.f3,(void*)0,(void*)0,&l_245.f2}},{{&g_24,(void*)0,&g_22[0][3],(void*)0,&g_24}},{{(void*)0,(void*)0,&l_245.f3,&l_245.f2,(void*)0}},{{&g_24,&l_245.f3,&l_245.f3,&g_24,&l_245.f2}},{{(void*)0,&g_24,&g_22[0][3],(void*)0,(void*)0}}};
    const int16_t **l_256[6][5][1] = {{{&l_257[3][0][1]},{&l_257[0][0][0]},{&l_257[0][0][4]},{&l_257[1][0][4]},{&l_257[4][0][1]}},{{&l_257[3][0][1]},{&l_257[3][0][1]},{(void*)0},{&l_257[3][0][1]},{&l_257[3][0][1]}},{{&l_257[4][0][1]},{&l_257[1][0][4]},{&l_257[0][0][4]},{&l_257[0][0][0]},{&l_257[3][0][1]}},{{&l_257[0][0][0]},{&l_257[0][0][4]},{&l_257[1][0][4]},{&l_257[4][0][1]},{&l_257[3][0][1]}},{{&l_257[3][0][1]},{(void*)0},{&l_257[3][0][1]},{&l_257[3][0][1]},{&l_257[3][0][1]}},{{&l_257[3][0][1]},{&l_257[3][0][1]},{&l_257[3][0][1]},{&l_257[4][0][1]},{&l_257[3][0][1]}}};
    const int16_t ***l_255 = &l_256[0][2][0];
    int64_t **l_259 = &l_114;
    int64_t ***l_258 = &l_259;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_117[i][j] = (-1L);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_162[i][j] = 65535UL;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_175[i][j] = 4294967294UL;
    }
    if ((((safe_rshift_func_uint8_t_u_s((g_107[0] = ((((*l_114) = (safe_mul_func_int16_t_s_s(g_79.f6, (safe_sub_func_uint64_t_u_u((func_86((p_68.f2 = 1L), (safe_sub_func_uint16_t_u_u((l_101 = ((((!p_68.f4) & 0x1428L) != 18446744073709551609UL) ^ (safe_mul_func_int16_t_s_s((g_79.f4 ^ (((safe_lshift_func_int8_t_s_u((+0x5EE1L), l_101)) >= 1L) && 0x4400D43E6B0C5DECLL)), l_101)))), p_68.f7)), g_22[0][2], g_79.f2, g_79.f0) , g_107[0]), 0x119C8BA4A5683E25LL))))) > p_68.f1) || 0UL)), l_117[0][0])) >= l_117[1][0]) , (-5L)))
    { 
        struct S0 l_122 = {0x12L,0x8B81D3E1L,-1L,1L,0x24L,2,6UL,0x61L};
        for (g_7 = 0; (g_7 > 24); g_7 = safe_add_func_int32_t_s_s(g_7, 9))
        { 
            return l_117[0][0];
        }
        for (l_101 = (-27); (l_101 == 29); l_101 = safe_add_func_uint32_t_u_u(l_101, 1))
        { 
            struct S0 *l_123 = &l_122;
            (*l_123) = l_122;
            (*l_123) = g_79;
            for (p_68.f6 = 0; (p_68.f6 <= 0); p_68.f6 += 1)
            { 
                for (p_68.f2 = 0; (p_68.f2 >= 0); p_68.f2 -= 1)
                { 
                    int i, j;
                    if (g_22[p_68.f6][(p_68.f2 + 1)])
                        break;
                }
                for (l_122.f3 = 0; (l_122.f3 >= 0); l_122.f3 -= 1)
                { 
                    int i, j;
                    if (g_22[l_122.f3][(l_122.f3 + 1)])
                        break;
                    if (l_117[p_68.f6][l_122.f3])
                        continue;
                }
            }
        }
    }
    else
    { 
        const uint8_t l_126[7] = {0x50L,0x50L,0x50L,0x50L,0x50L,0x50L,0x50L};
        uint16_t *l_127[6][3] = {{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128}};
        int64_t ** const l_130[2] = {&l_114,&l_114};
        int64_t ** const *l_129[2];
        uint64_t *l_131 = &g_132;
        int8_t *l_137 = &g_79.f4;
        int32_t *l_138 = &g_28;
        int32_t *l_139 = &l_117[0][0];
        int32_t *l_140 = &l_117[0][0];
        int32_t l_141 = 0L;
        int32_t *l_142 = &l_101;
        int32_t *l_143 = &l_117[1][0];
        int32_t *l_144[4][2][5] = {{{&l_101,&g_28,&l_117[0][0],&g_28,&l_101},{&l_141,&l_141,&g_28,&l_141,&l_141}},{{&l_101,&g_28,&l_117[0][0],&g_28,&l_101},{&l_141,&l_141,&g_28,&l_141,&l_141}},{{&l_101,&g_28,&l_117[0][0],&g_28,&l_101},{&l_141,&l_141,&g_28,&l_141,&l_141}},{{&l_101,&g_28,&l_117[0][0],&g_28,&l_101},{&l_141,&l_141,&g_28,&l_141,&l_141}}};
        uint8_t l_160 = 0x9BL;
        struct S0 l_187 = {0x90L,0x631AE8C0L,-1L,0x8E95L,1L,2,8UL,0x9BL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_129[i] = &l_130[1];
        (*l_138) ^= ((safe_sub_func_uint8_t_u_u(l_126[4], ((g_128 = l_117[0][0]) < (((l_101 &= (((*l_131) |= ((void*)0 == l_129[0])) , (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(((*l_137) = ((l_131 == (void*)0) ^ 1UL)), 2)) || 0x0DF8BE3DL), g_79.f2)))) , 0xE4L) || 1L)))) & g_107[0]);
lbl_149:
        --g_146[0][2];
        for (p_68.f6 = 0; (p_68.f6 <= 0); p_68.f6 += 1)
        { 
            int32_t l_163 = 1L;
            for (p_68.f2 = 0; (p_68.f2 <= 0); p_68.f2 += 1)
            { 
                if (p_68.f4)
                    goto lbl_149;
            }
            for (p_68.f0 = 0; (p_68.f0 >= 0); p_68.f0 -= 1)
            { 
                const int32_t l_161[1][6][2] = {{{0xDF3A3A19L,(-1L)},{(-1L),1L},{(-1L),1L},{(-1L),(-1L)},{0xDF3A3A19L,0xDF3A3A19L},{0xDF3A3A19L,(-1L)}}};
                int32_t l_164 = 0L;
                int32_t **l_168 = &l_138;
                uint16_t l_186[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_186[i] = 0x41D1L;
            }
        }
        for (g_7 = (-21); (g_7 == (-23)); g_7 = safe_sub_func_int64_t_s_s(g_7, 6))
        { 
            uint8_t l_208[5];
            int32_t l_209 = (-1L);
            uint64_t l_234 = 0x847C295546736D52LL;
            int i;
            for (i = 0; i < 5; i++)
                l_208[i] = 0xD2L;
            for (l_101 = 1; (l_101 >= 23); l_101++)
            { 
                struct S0 *l_195 = &g_79;
                int32_t l_198[2][4] = {{(-1L),(-1L),0L,(-1L)},{(-1L),0xA72BD436L,0xA72BD436L,(-1L)}};
                int16_t ****l_247 = (void*)0;
                int16_t ****l_248 = (void*)0;
                const int16_t *l_252 = &l_187.f3;
                const int16_t **l_251[4];
                const int16_t ***l_250 = &l_251[0];
                const int16_t ****l_249 = &l_250;
                int64_t ****l_260 = (void*)0;
                int64_t ****l_261 = &l_258;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_251[i] = &l_252;
                (*l_195) = g_79;
                for (l_187.f0 = 9; (l_187.f0 <= 26); l_187.f0 = safe_add_func_uint8_t_u_u(l_187.f0, 3))
                { 
                    union U1 *l_200[2];
                    union U1 **l_199 = &l_200[0];
                    int32_t l_201[6][6][2] = {{{0x336772ACL,0L},{0x03C2B814L,0L},{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L},{0x336772ACL,0L},{0x03C2B814L,0L}},{{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L},{0x336772ACL,0L},{0x03C2B814L,0L},{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L}},{{0x336772ACL,0L},{0x03C2B814L,0L},{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L},{0x336772ACL,0L},{0x03C2B814L,0L}},{{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L},{0x336772ACL,0L},{0x03C2B814L,0L},{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L}},{{0x336772ACL,0L},{0x03C2B814L,0L},{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L},{0x336772ACL,0L},{0x03C2B814L,0L}},{{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L},{0x336772ACL,0L},{0x03C2B814L,0L},{0x336772ACL,0xA1B42956L},{0x03C2B814L,0xA1B42956L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_200[i] = &g_47[4][6][0];
                    if (p_68.f0)
                        goto lbl_149;
                    g_28 |= g_79.f2;
                    if (l_198[1][1])
                        break;
                    (*l_199) = &p_69;
                    (*l_140) = l_201[0][2][0];
                }
                if ((((safe_sub_func_int16_t_s_s((-1L), (((((l_198[1][1] & ((1UL <= (0x7E15E09DB5B34FF2LL >= (safe_sub_func_uint32_t_u_u((l_208[2] , l_209), (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((((0xBFL <= g_79.f4) , l_175[0][0]) & p_68.f4) >= l_209) | p_68.f3) || l_216), (***g_188))), 0xFEL)), 3)))))) != l_198[1][1])) || l_101) ^ p_68.f0) , l_198[0][1]) == g_104[0]))) , l_175[0][0]) > 0UL))
                { 
                    uint8_t *l_217 = &g_107[0];
                    int32_t l_226 = 0x4E43E4D8L;
                    uint64_t *l_246[6] = {(void*)0,&l_216,(void*)0,(void*)0,&l_216,(void*)0};
                    int i;
                    (*l_143) &= ((((*l_217)--) <= g_79.f3) , (safe_lshift_func_uint8_t_u_s(((*l_217) = (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_68.f7, l_226)), (safe_sub_func_int64_t_s_s(((void*)0 == &g_189), (safe_rshift_func_uint16_t_u_s(l_231, ((((safe_mul_func_int16_t_s_s(p_68.f5, (**g_189))) <= 1UL) <= (-1L)) , (*g_190))))))))), l_234)));
                    l_226 &= l_198[1][1];
                    (*l_140) = ((((g_165[0]--) , (safe_mul_func_int16_t_s_s((g_47[1][0][0] , (~(0x5BL & ((l_175[0][0] | l_209) > ((((*l_114) = g_28) | (safe_sub_func_uint8_t_u_u(p_68.f1, ((~(safe_div_func_int64_t_s_s((((l_245 , l_246[0]) != (void*)0) ^ l_209), (*l_138)))) & g_104[0])))) >= 0xAAA033F4L))))), p_68.f5))) && 0L) && l_226);
                }
                else
                { 
                    (*l_140) |= ((l_231 , (g_13 > (&p_68 != (void*)0))) & l_209);
                    return p_68.f0;
                }
                (*l_249) = (void*)0;
                (*l_261) = ((safe_mod_func_int64_t_s_s(((l_255 != &l_256[4][1][0]) < 0L), p_68.f5)) , l_258);
            }
            for (g_79.f7 = 0; (g_79.f7 == 27); g_79.f7++)
            { 
                return g_79.f6;
            }
            if (p_68.f7)
                goto lbl_149;
        }
    }
    return l_231;
}



static int32_t  func_70(const uint64_t  p_71, union U1  p_72, int64_t * p_73, uint32_t  p_74)
{ 
    int64_t *l_78 = &g_13;
    int64_t * const *l_77 = &l_78;
    int64_t * const **l_76 = &l_77;
    (*l_76) = (void*)0;
    return g_7;
}



static const union U1  func_86(int16_t  p_87, uint32_t  p_88, uint32_t  p_89, uint32_t  p_90, uint64_t  p_91)
{ 
    int32_t *l_102 = (void*)0;
    int32_t *l_103[3];
    union U1 *l_112 = &g_47[4][6][0];
    const int16_t *l_113 = &g_22[0][2];
    int i;
    for (i = 0; i < 3; i++)
        l_103[i] = &g_28;
    ++g_104[0];
    g_107[0]--;
    g_28 = (((void*)0 != l_112) && (l_113 == &p_87));
    return (*l_112);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_22[i][j], "g_22[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5, "g_79.f5", print_hash_value);
    transparent_crc(g_79.f6, "g_79.f6", print_hash_value);
    transparent_crc(g_79.f7, "g_79.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_146[i][j], "g_146[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_165[i], "g_165[i]", print_hash_value);

    }
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_654[i][j], "g_654[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_702, "g_702", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_703[i][j][k], "g_703[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_751[i][j], "g_751[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_785, "g_785", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_956[i], "g_956[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1000[i][j], "g_1000[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1038[i][j], "g_1038[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1046.f0, "g_1046.f0", print_hash_value);
    transparent_crc(g_1046.f1, "g_1046.f1", print_hash_value);
    transparent_crc(g_1046.f2, "g_1046.f2", print_hash_value);
    transparent_crc(g_1046.f3, "g_1046.f3", print_hash_value);
    transparent_crc(g_1046.f4, "g_1046.f4", print_hash_value);
    transparent_crc(g_1046.f5, "g_1046.f5", print_hash_value);
    transparent_crc(g_1046.f6, "g_1046.f6", print_hash_value);
    transparent_crc(g_1046.f7, "g_1046.f7", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
