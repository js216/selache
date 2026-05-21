// SPDX-License-Identifier: MIT
// cctest_csmith_e96e3c86.c --- cctest case csmith_e96e3c86 (csmith seed 3916315782)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1b9acf64 */

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

// Options:   -s 3916315782 -o /tmp/csmith_gen_5q2ft5y2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   int16_t  f1;
   int16_t  f2;
   int8_t  f3;
   uint32_t  f4;
   const uint64_t  f5;
};

union U1 {
   const struct S0  f0;
   uint8_t  f1;
};

union U3 {
   int8_t  f0;
   const struct S0  f1;
};

union U4 {
   uint32_t  f0;
   int8_t  f1;
};


static uint32_t g_5 = 0x89A69576L;
static int32_t g_58 = 0x0A95A2E2L;
static struct S0 g_62[4][1] = {{{0x1AL,0xC9C6L,0x2CF3L,0x69L,0xAFB55E8AL,0x86CC6B0C40B387E8LL}},{{0x1AL,0xC9C6L,0x2CF3L,0x69L,0xAFB55E8AL,0x86CC6B0C40B387E8LL}},{{0x1AL,0xC9C6L,0x2CF3L,0x69L,0xAFB55E8AL,0x86CC6B0C40B387E8LL}},{{0x1AL,0xC9C6L,0x2CF3L,0x69L,0xAFB55E8AL,0x86CC6B0C40B387E8LL}}};
static int32_t g_75[3] = {0xA8844187L,0xA8844187L,0xA8844187L};
static uint8_t g_81 = 0UL;
static uint64_t g_87 = 0x8768DD0F05760DC0LL;
static union U4 g_88 = {1UL};
static union U3 g_103 = {1L};
static int32_t g_108 = 0x51F0AF62L;
static int32_t g_110[3][1][5] = {{{1L,0xD400D3BCL,0xD400D3BCL,1L,1L}},{{1L,0xD400D3BCL,0xD400D3BCL,1L,1L}},{{1L,0xD400D3BCL,0xD400D3BCL,1L,1L}}};
static uint64_t g_127 = 0UL;
static uint32_t g_147 = 4294967295UL;



static int32_t  func_1(void);
static int64_t  func_2(uint32_t  p_3, union U4  p_4);
static int8_t  func_17(uint32_t  p_18, struct S0  p_19, struct S0  p_20, int32_t  p_21);
static uint8_t  func_26(struct S0  p_27, uint64_t  p_28, int32_t  p_29, uint32_t  p_30, int8_t  p_31);




static int32_t  func_1(void)
{ 
    union U4 l_6[5] = {{0x70A50B5FL},{0x70A50B5FL},{0x70A50B5FL},{0x70A50B5FL},{0x70A50B5FL}};
    const union U3 l_124[2] = {{0x26L},{0x26L}};
    int8_t l_145 = 0x7DL;
    int32_t l_151 = 0x85B248B1L;
    int i;
lbl_130:
    g_110[1][0][3] = (g_75[0] = (func_2(g_5, l_6[3]) && g_103.f0));
    for (g_88.f1 = (-25); (g_88.f1 != (-1)); g_88.f1 = safe_add_func_uint8_t_u_u(g_88.f1, 2))
    { 
        int8_t l_139 = 0L;
        int32_t l_146 = 0x69CE4C49L;
        if ((((safe_div_func_int16_t_s_s((l_124[1] , (safe_mod_func_uint32_t_u_u(g_62[1][0].f3, 0x435EB154L))), g_127)) && 0x61BAF8CBL) < g_5))
        { 
            for (g_127 = 0; (g_127 > 44); ++g_127)
            { 
                if (g_5)
                    goto lbl_130;
            }
            for (g_58 = 0; (g_58 != (-1)); g_58--)
            { 
                if (l_124[1].f0)
                    break;
            }
        }
        else
        { 
            uint64_t l_133[1];
            int32_t l_142 = 1L;
            int32_t l_143 = 1L;
            int32_t l_144[5];
            uint64_t l_150 = 0x080F894422981FDBLL;
            uint32_t l_152[5][4] = {{18446744073709551607UL,1UL,18446744073709551607UL,1UL},{18446744073709551607UL,1UL,18446744073709551607UL,1UL},{18446744073709551607UL,1UL,18446744073709551607UL,1UL},{18446744073709551607UL,1UL,18446744073709551607UL,1UL},{18446744073709551607UL,1UL,18446744073709551607UL,1UL}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_133[i] = 0xC28C3218605C96C5LL;
            for (i = 0; i < 5; i++)
                l_144[i] = 0xC1A71962L;
            if (l_133[0])
            { 
                return g_88.f1;
            }
            else
            { 
                g_110[2][0][2] ^= g_108;
            }
            g_110[1][0][3] = (((safe_sub_func_int16_t_s_s((l_124[1] , (((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((((g_110[1][0][3] > (l_139 > (((((safe_lshift_func_uint16_t_u_s((--g_147), 12)) && g_147) <= g_103.f0) , g_58) , l_142))) , l_139) ^ l_6[3].f1))) < g_81) & l_150), l_139)) >= 0xAB5F7C52L) || l_151)), 2L)) ^ (-1L)) ^ l_152[0][3]);
        }
        for (l_151 = 0; (l_151 > (-11)); --l_151)
        { 
            return g_62[1][0].f5;
        }
    }
    return g_58;
}



static int64_t  func_2(uint32_t  p_3, union U4  p_4)
{ 
    uint32_t l_7[3];
    int32_t l_113[5][2][2];
    uint8_t l_117 = 0xDCL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_7[i] = 0xB5C6F8B8L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_113[i][j][k] = 0x72AEA97FL;
        }
    }
    for (g_5 = 0; (g_5 <= 2); g_5 += 1)
    { 
        uint32_t l_61 = 18446744073709551615UL;
        int32_t l_112 = 1L;
        int32_t l_114[3][1][4] = {{{0x6E0413CFL,0x6E0413CFL,(-6L),0x8E030EDBL}},{{0xD6D9707EL,0x1D1304DEL,0xD6D9707EL,(-6L)}},{{0xD6D9707EL,(-6L),(-6L),0xD6D9707EL}}};
        int i, j, k;
        for (p_4.f1 = 0; (p_4.f1 <= 2); p_4.f1 += 1)
        { 
            struct S0 l_32 = {0L,0xA021L,0xE9A9L,7L,18446744073709551610UL,0x0EA1BCA3396D56A4LL};
            int32_t l_111 = 0L;
            int32_t l_115 = 0x10E35A52L;
            int8_t l_116 = 0x03L;
            int i;
            l_111 &= ((l_7[g_5] = (safe_add_func_uint32_t_u_u(0x04B064BAL, (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((!4294967295UL), (g_110[1][0][3] &= ((safe_mul_func_int8_t_s_s(l_7[p_4.f1], func_17(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((func_26(l_32, g_5, g_5, l_32.f2, g_5) , 3L), l_61)), 12)) || p_3), g_62[1][0], g_62[1][0], p_3))) > l_7[2])))), 6)) > 0x64F7A502L) , l_7[0])))) != (-9L));
            ++l_117;
        }
        if (l_7[g_5])
            break;
    }
    return l_113[3][0][0];
}



static int8_t  func_17(uint32_t  p_18, struct S0  p_19, struct S0  p_20, int32_t  p_21)
{ 
    uint16_t l_72 = 0xEF2AL;
    int32_t l_80 = 0L;
    for (p_21 = 0; (p_21 <= 23); p_21++)
    { 
        int32_t l_69 = 0xE0EE4D50L;
        int32_t l_70 = 0x2FD4AE77L;
        int32_t l_71 = 0x7A58E81DL;
        if ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_62[1][0].f4, g_62[1][0].f0)), ((l_69 &= 9UL) < ((l_71 = (l_70 ^= 0L)) | 0x426AB799115BA09FLL)))))
        { 
            int32_t l_73 = 0L;
            if (p_20.f4)
            { 
                l_72 = (p_20.f5 && 8L);
                l_71 = ((l_73 > g_62[1][0].f5) == 0x071001949225D623LL);
            }
            else
            { 
                int32_t l_74 = 0x5C258348L;
                g_58 = l_74;
            }
            return l_72;
        }
        else
        { 
            for (g_58 = 2; (g_58 >= 0); g_58 -= 1)
            { 
                int i;
                g_75[g_58] = g_75[g_58];
            }
        }
        for (l_71 = 0; (l_71 > 20); l_71 = safe_add_func_uint8_t_u_u(l_71, 4))
        { 
            uint64_t l_86 = 0xBE07DECC76B58F18LL;
            int32_t l_93[4];
            union U1 l_94 = {{0L,0x977AL,0L,9L,0UL,18446744073709551610UL}};
            int i;
            for (i = 0; i < 4; i++)
                l_93[i] = (-4L);
            if ((safe_mod_func_uint16_t_u_u((--g_81), (g_87 = ((p_19.f1 ^ (((safe_sub_func_uint16_t_u_u(g_62[1][0].f3, 65535UL)) <= 0xF0591FCFL) && l_86)) || 0x6AE6C26CL)))))
            { 
                l_93[1] = (((g_88 , (l_86 <= p_19.f3)) & (((((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(p_19.f2, p_19.f2)), 0)) ^ 0x4322L) , l_86) , 1L) || l_80) <= 1UL) >= 6UL)) != g_75[1]);
            }
            else
            { 
                g_58 = (l_93[1] ^= (g_75[0] |= (4294967293UL > (l_80 > (l_94 , ((safe_lshift_func_uint8_t_u_u(8UL, l_94.f0.f2)) ^ l_80))))));
            }
            for (l_69 = 0; (l_69 <= 2); l_69 += 1)
            { 
                int i;
                g_75[l_69] = g_75[l_69];
                return l_93[l_69];
            }
        }
        for (g_81 = 0; (g_81 > 52); ++g_81)
        { 
            uint8_t l_109 = 8UL;
            l_71 = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((g_103 , (1L && (l_69 >= ((safe_mod_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(g_81, 7)) <= p_20.f0) != 0L), 0xBD8D123FB1128C18LL)) , g_62[1][0].f1)))) , g_108) <= 0x9CA922C56DE09DF9LL) | g_5), g_75[0])), l_109)) , g_5);
        }
    }
    return l_72;
}



static uint8_t  func_26(struct S0  p_27, uint64_t  p_28, int32_t  p_29, uint32_t  p_30, int8_t  p_31)
{ 
    uint32_t l_55 = 0x7EE8C4B0L;
    int32_t l_56 = 0x40C09C4FL;
    int16_t l_57 = 0x6D71L;
    int32_t l_59 = 6L;
    int32_t l_60[5];
    int i;
    for (i = 0; i < 5; i++)
        l_60[i] = (-1L);
    l_60[3] ^= (l_59 &= (safe_sub_func_int8_t_s_s(0xA3L, (safe_sub_func_int8_t_s_s((g_58 &= (((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_27 , (safe_mod_func_int8_t_s_s((((l_56 = ((0xD2C8L | (safe_mod_func_int32_t_s_s(((((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x0E98L, l_55)), 6UL)) & p_27.f0) && 0L) || p_27.f3), g_5))) != 1L)) , l_56) ^ l_55), l_55))), 0x3986L)), l_55)), l_55)), p_31)) <= l_57) <= (-1L)) , 65535UL), 0x8F64L)) < g_5) == l_57)), 8UL)))));
    return l_60[3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_62[i][j].f0, "g_62[i][j].f0", print_hash_value);
            transparent_crc(g_62[i][j].f1, "g_62[i][j].f1", print_hash_value);
            transparent_crc(g_62[i][j].f2, "g_62[i][j].f2", print_hash_value);
            transparent_crc(g_62[i][j].f3, "g_62[i][j].f3", print_hash_value);
            transparent_crc(g_62[i][j].f4, "g_62[i][j].f4", print_hash_value);
            transparent_crc(g_62[i][j].f5, "g_62[i][j].f5", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
