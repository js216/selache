// SPDX-License-Identifier: MIT
// cctest_csmith_51dbe30c.c --- cctest case csmith_51dbe30c (csmith seed 1373365004)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd1fb64b0 */

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

// Options:   -s 1373365004 -o /tmp/csmith_gen_4zjh4yxr/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   int16_t  f3;
   int16_t  f4;
   int32_t  f5;
   const uint32_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   const struct S0  f1;
   const uint8_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

struct S2 {
   int32_t  f0;
   int64_t  f1;
};

struct S3 {
   uint32_t  f0;
   uint64_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   int64_t  f0;
   struct S0  f1;
   int64_t  f2;
   int64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   int32_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

struct S6 {
   struct S1  f0;
   uint8_t  f1;
   struct S3  f2;
   const int8_t  f3;
   int64_t  f4;
   const uint32_t  f5;
   const struct S1  f6;
};

union U7 {
   struct S0  f0;
};

union U8 {
   const int64_t  f0;
   uint16_t  f1;
};

union U9 {
   struct S6  f0;
};


static const struct S1 g_6 = {0x9EL,{0xD3B0CF5AL,0x05D7L,0x270E7AD5L,0L,0xD067L,0x1F7D9671L,0xDB6084EDL},1UL,3UL};
static uint64_t g_8 = 0x85D06F62939C0105LL;
static const union U9 g_18 = {{{0x6DL,{0xB0C7B249L,0x3C8DL,18446744073709551615UL,-1L,0x8E0EL,0x626AECE0L,0x153AA9B2L},251UL,0x12097756EB3E1984LL},0xBCL,{0x846E972FL,0x3BC6C2DB602708CDLL},2L,1L,0x47A0585CL,{0xC1L,{0x2D1F73E7L,65535UL,18446744073709551611UL,0x9B2BL,-7L,0x5309F33DL,0x8A24E228L},0UL,0x7EE0456BBB30732BLL}}};
static int32_t g_22[2] = {7L,7L};
static uint32_t g_39 = 6UL;
static int32_t *g_53 = &g_22[1];
static int32_t ** const g_52 = &g_53;
static int32_t *g_66[6] = {&g_22[1],&g_22[1],&g_22[1],&g_22[1],&g_22[1],&g_22[1]};
static uint8_t g_70 = 5UL;
static int64_t g_72 = (-6L);
static int8_t g_84 = (-2L);
static int32_t g_88 = 0x5C0BBC23L;
static struct S5 g_98 = {-3L,0xC38AL};
static int8_t *g_137 = &g_84;
static uint16_t g_143 = 65535UL;
static int8_t **g_149 = (void*)0;
static uint32_t g_156 = 0x7DE76BAAL;
static uint8_t g_227 = 0x0EL;
static int8_t g_229 = 1L;
static int8_t ***g_302[3] = {&g_149,&g_149,&g_149};
static int8_t ****g_301 = &g_302[2];
static struct S5 g_315 = {1L,65527UL};
static uint64_t g_318[5][3] = {{0x567C547BACB7DD6ALL,0x567C547BACB7DD6ALL,0x567C547BACB7DD6ALL},{1UL,1UL,1UL},{0x567C547BACB7DD6ALL,0x567C547BACB7DD6ALL,0x567C547BACB7DD6ALL},{1UL,1UL,1UL},{0x567C547BACB7DD6ALL,0x567C547BACB7DD6ALL,0x567C547BACB7DD6ALL}};
static uint64_t g_320 = 0x244248F9BC9D4306LL;
static int64_t g_341 = 0x7FE0F81F5E85734ELL;
static union U7 g_355 = {{0x9A064169L,0x3252L,18446744073709551612UL,0x08E1L,-10L,-2L,4294967295UL}};
static int64_t *g_381[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t **g_380 = &g_381[3];
static union U8 g_386 = {0L};
static struct S3 g_411 = {0x9F2D266AL,0x91EACD9F30CE9AF5LL};
static uint32_t *g_422[6] = {(void*)0,(void*)0,&g_156,(void*)0,(void*)0,&g_156};
static uint32_t *g_424 = (void*)0;
static union U9 g_426 = {{{0x33L,{18446744073709551615UL,0x16A2L,0xAA01E965L,-1L,0L,-1L,0x8AFC7416L},0UL,0xF149BAF866C8C426LL},249UL,{0UL,0x98BB7B0D9FCE505CLL},-9L,-1L,1UL,{0L,{0x505FB3C2L,8UL,0x68D4158DL,-10L,1L,0xE6873DC5L,0x4EAA50EEL},1UL,0x4E8B6CB277D4DC08LL}}};
static union U9 g_429 = {{{-6L,{9UL,1UL,18446744073709551606UL,0x0AF5L,0xDB09L,-9L,0x9F90F2B9L},5UL,18446744073709551609UL},1UL,{0xC6BA5699L,18446744073709551607UL},0x6DL,5L,0UL,{0x77L,{1UL,65532UL,0x8A57FA2AL,0xA507L,4L,0L,1UL},0xBCL,1UL}}};
static uint32_t g_454 = 0x61B208E5L;
static uint16_t *g_461 = &g_98.f1;
static uint16_t **g_460 = &g_461;
static uint16_t ***g_459 = &g_460;
static struct S3 *g_465[1] = {&g_429.f0.f2};
static struct S2 g_477 = {0L,0x13BB585D425015FBLL};
static const struct S2 *g_476 = &g_477;
static const struct S2 **g_475 = &g_476;
static struct S4 g_531 = {0L,{0xF1C2D842L,0xF4CFL,9UL,0xE981L,-6L,0xCC19C0A1L,0x1CB189EDL},0x803319EBB2C30C91LL,0xDD8B6EBE03964760LL};
static int8_t g_583[2] = {(-1L),(-1L)};
static int8_t g_584 = 0xA6L;
static int8_t * const g_582[5][6][6] = {{{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]}},{{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]}},{{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]}},{{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]}},{{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]},{&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0],&g_583[0]}}};
static int8_t * const *g_581 = &g_582[4][1][1];
static int8_t * const **g_580[4] = {&g_581,&g_581,&g_581,&g_581};
static int8_t * const ***g_579 = &g_580[1];
static struct S5 *g_598[1] = {(void*)0};
static union U9 *g_668 = &g_426;
static union U9 **g_667[1][7][7] = {{{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668},{&g_668,&g_668,&g_668,&g_668,&g_668,&g_668,&g_668}}};
static uint32_t **g_699 = &g_422[2];
static struct S5 **g_729 = &g_598[0];
static int64_t ***g_779 = &g_380;
static int64_t ****g_778 = &g_779;
static int8_t g_799[6][3][1] = {{{1L},{(-3L)},{1L}},{{(-3L)},{1L},{(-3L)}},{{1L},{(-3L)},{1L}},{{(-3L)},{1L},{(-3L)}},{{1L},{(-3L)},{1L}},{{(-3L)},{1L},{(-3L)}}};
static uint32_t g_808 = 0xB76C1047L;
static uint8_t g_914[2][1][2] = {{{0x4CL,0x4CL}},{{0x4CL,0x4CL}}};
static uint32_t g_949 = 18446744073709551615UL;
static struct S4 g_974 = {0x166F62B4770B6FBBLL,{0xA60F5DEDL,0x517AL,0x3DF77215L,0xCCFAL,-1L,3L,0x66AEC202L},-1L,-4L};
static struct S4 *g_973 = &g_974;
static int16_t g_979 = 0xE680L;
static uint64_t g_989 = 0x05EBD153CC4C6452LL;
static const struct S3 g_1005 = {0x1A682B3EL,0x7B59C4178683C46ALL};
static int32_t g_1043 = 1L;
static int16_t *g_1116 = &g_355.f0.f4;
static const struct S3 g_1279 = {18446744073709551607UL,0x064D338E79F643A9LL};
static struct S0 g_1361 = {0x2C9087F0L,0x0DC1L,0x370F117EL,-5L,0x7E9BL,-1L,0x6AC64CCDL};
static uint8_t g_1406 = 0x43L;
static union U7 g_1436 = {{1UL,0x455CL,0xADAB3C95L,0x58A7L,5L,0xEB80B6E4L,4294967295UL}};
static uint32_t *g_1445 = (void*)0;
static uint32_t **g_1444 = &g_1445;
static uint8_t *g_1467 = &g_429.f0.f1;
static uint8_t **g_1466 = &g_1467;
static struct S2 *g_1477 = &g_477;
static struct S2 **g_1476 = &g_1477;
static struct S2 *** const g_1475 = &g_1476;
static struct S2 *** const *g_1474 = &g_1475;
static int8_t g_1616[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static const struct S0 g_1694 = {0xFA8D9A8EL,0xB282L,0x9CF343CDL,7L,0x292EL,0x8823E01FL,0xFAE34B66L};
static const struct S0 *g_1693 = &g_1694;



static uint16_t  func_1(void);
static int32_t  func_2(const struct S1  p_3, uint64_t  p_4, struct S2  p_5);
static struct S2  func_10(const struct S3  p_11, struct S0  p_12, int8_t  p_13, union U8  p_14);
static const struct S3  func_15(int32_t  p_16, const union U9  p_17);
static int32_t * func_29(int32_t * p_30, struct S6  p_31, int32_t * p_32, struct S5  p_33);
static int32_t * func_34(int32_t * p_35);
static struct S3  func_42(struct S6  p_43, struct S5  p_44, int32_t * p_45, int32_t * p_46, uint32_t  p_47);
static struct S6  func_48(const int32_t * p_49, int32_t ** const  p_50, struct S3  p_51);




static uint16_t  func_1(void)
{ 
    uint32_t l_7 = 0UL;
    uint16_t l_1355[1];
    struct S0 *l_1360 = &g_1361;
    int32_t l_1373 = (-1L);
    int8_t *l_1411 = (void*)0;
    uint32_t l_1459 = 18446744073709551615UL;
    int32_t l_1517 = (-9L);
    int32_t l_1518 = 5L;
    int32_t l_1519 = 0L;
    uint32_t l_1520 = 0xEFE8B9FEL;
    uint32_t l_1545 = 4294967291UL;
    const union U9 l_1562 = {{{3L,{0xC51C07F4L,0xEE68L,0xD858CE2BL,0xD244L,1L,0x4864B1C6L,0xB2B90C19L},0x1AL,0x337D3A38ADD3CCEELL},250UL,{1UL,0xD90136900E11565DLL},2L,0L,0x270CA7ABL,{1L,{18446744073709551615UL,65530UL,0x77C80744L,9L,-4L,0xC6FF459EL,0UL},0UL,0x872CCB45EB97FCD2LL}}};
    int32_t **l_1575[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_1574 = &l_1575[3];
    uint32_t **l_1590 = &g_1445;
    const struct S2 ***l_1645 = &g_475;
    uint64_t l_1679 = 0x0366BBB0B75AD716LL;
    uint16_t l_1683[4];
    union U9 *l_1689 = &g_429;
    uint32_t l_1690 = 4294967295UL;
    int i;
    for (i = 0; i < 1; i++)
        l_1355[i] = 0x6BC0L;
    for (i = 0; i < 4; i++)
        l_1683[i] = 6UL;
    return (***g_459);
}



static int32_t  func_2(const struct S1  p_3, uint64_t  p_4, struct S2  p_5)
{ 
    const int32_t * const *l_1321 = (void*)0;
    struct S2 *l_1325 = &g_477;
    union U9 l_1326 = {{{-1L,{0UL,0x5A62L,18446744073709551613UL,0x33ACL,0x9905L,0xDEA1676FL,0x6A06168CL},0x55L,5UL},255UL,{18446744073709551615UL,0x3610BDB96D9474BDLL},4L,1L,0x37FA0D21L,{0L,{0x44A5E3FAL,0x1A34L,0xF5AB0AE3L,0x634BL,0xBB44L,0x7B892CE2L,4294967294UL},250UL,0xBBD51A8065AA5ECBLL}}};
    uint8_t l_1327 = 248UL;
    const int32_t * const l_1329 = &g_22[1];
    const int32_t * const *l_1328 = &l_1329;
    int32_t *l_1330 = &g_22[1];
    union U8 l_1331 = {0xBE54C88E5CF8932DLL};
    int32_t l_1333 = 0x545DCD23L;
    struct S5 l_1336 = {0xE9944CF4L,65532UL};
    int32_t l_1345 = 0x7098833FL;
    int32_t l_1346 = 0x3735D7BAL;
    int32_t l_1347 = 0x07314F01L;
    int32_t l_1348[4] = {1L,1L,1L,1L};
    int32_t l_1349 = 0x2946C4D0L;
    int16_t l_1351 = 0L;
    uint16_t l_1352 = 0UL;
    int i;
    p_5.f0 = ((*l_1330) = (0x850CEFABL <= (l_1321 == ((!((safe_add_func_int64_t_s_s((p_3.f1 , ((((l_1325 != (l_1326 , (*g_475))) < ((p_3.f1.f5 & p_3.f2) == p_3.f1.f1)) > (-2L)) == l_1327)), p_4)) == l_1326.f0.f0.f2)) , l_1328))));
    l_1333 &= (l_1331 , ((~(-8L)) && (*l_1330)));
    (*l_1330) ^= (safe_rshift_func_uint8_t_u_u(((l_1336 , p_3.f1.f3) < (~p_4)), 3));
    for (g_355.f0.f1 = 16; (g_355.f0.f1 != 56); g_355.f0.f1 = safe_add_func_int8_t_s_s(g_355.f0.f1, 8))
    { 
        int32_t *l_1340 = (void*)0;
        int32_t *l_1341 = &g_22[1];
        int32_t *l_1342 = &g_98.f0;
        int32_t *l_1343 = &g_22[1];
        int32_t *l_1344[5];
        int16_t l_1350 = (-1L);
        int i;
        for (i = 0; i < 5; i++)
            l_1344[i] = &g_22[1];
        l_1352--;
    }
    return (*l_1329);
}



static struct S2  func_10(const struct S3  p_11, struct S0  p_12, int8_t  p_13, union U8  p_14)
{ 
    const struct S3 l_1317 = {0UL,0xC0900CBBEC962FC8LL};
    struct S3 *l_1318[3];
    struct S3 l_1319 = {1UL,1UL};
    struct S2 l_1320 = {0xC3389317L,1L};
    int i;
    for (i = 0; i < 3; i++)
        l_1318[i] = &g_429.f0.f2;
    l_1319 = l_1317;
    return l_1320;
}



static const struct S3  func_15(int32_t  p_16, const union U9  p_17)
{ 
    uint32_t l_19[7] = {0x480B0DEBL,0x480B0DEBL,0x480B0DEBL,0x480B0DEBL,0x480B0DEBL,0x480B0DEBL,0x480B0DEBL};
    int32_t l_24 = 2L;
    int32_t l_25[4] = {0L,0L,0L,0L};
    uint16_t l_26 = 0x3170L;
    uint32_t l_899 = 0x86EC46C4L;
    struct S2 l_918 = {8L,9L};
    int8_t ***l_956 = &g_149;
    struct S3 l_964 = {0xAA8BC494L,4UL};
    int16_t l_1040 = (-10L);
    uint32_t **l_1063 = (void*)0;
    int32_t *l_1072 = (void*)0;
    int32_t *l_1073[2][2][6] = {{{&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0},{&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0}},{{&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0},{&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0,&g_315.f0}}};
    int32_t l_1074 = 6L;
    uint8_t l_1075 = 255UL;
    struct S4 **l_1102 = &g_973;
    uint8_t l_1105 = 1UL;
    const uint8_t l_1120 = 0x0DL;
    struct S5 l_1124[4] = {{-3L,0x05E1L},{-3L,0x05E1L},{-3L,0x05E1L},{-3L,0x05E1L}};
    union U7 l_1166 = {{8UL,65535UL,4UL,0xF1EBL,-1L,0x2930E7F7L,1UL}};
    uint8_t l_1176 = 0xD6L;
    struct S6 l_1208 = {{-1L,{3UL,1UL,1UL,-1L,1L,-10L,0UL},2UL,18446744073709551613UL},0xE3L,{18446744073709551614UL,0UL},0xA2L,0x8B5860C2D55FBB6CLL,7UL,{0x74L,{0xDB337132L,9UL,0xF934533FL,0x8329L,0x2A51L,0xE151C543L,1UL},0x46L,0x7FBF9BDD58B7E641LL}};
    int64_t l_1308 = (-3L);
    const struct S3 l_1316 = {18446744073709551609UL,0xE15721A24E82E174LL};
    int i, j, k;
    for (p_16 = 0; (p_16 <= 6); p_16 += 1)
    { 
        uint32_t l_20[4] = {3UL,3UL,3UL,3UL};
        int32_t *l_21 = &g_22[1];
        int32_t *l_23[4] = {&g_22[1],&g_22[1],&g_22[1],&g_22[1]};
        int32_t **l_309 = &l_21;
        const struct S3 l_901 = {18446744073709551611UL,3UL};
        struct S0 l_943 = {0x16E2848EL,0xBD4BL,18446744073709551615UL,0xA4D9L,0x00DEL,0L,0x9047E1A8L};
        const int16_t l_947 = 0xF54BL;
        struct S4 *l_972 = (void*)0;
        int8_t l_1032 = 0x7CL;
        int64_t l_1042 = 7L;
        int16_t l_1050 = 0xB0DEL;
        uint8_t l_1057 = 0x79L;
        int8_t *****l_1069 = &g_301;
        int i;
        if (l_20[3])
            break;
        l_26++;
    }
    l_1075--;
lbl_1108:
    for (g_531.f1.f1 = 0; (g_531.f1.f1 < 2); g_531.f1.f1 = safe_add_func_int16_t_s_s(g_531.f1.f1, 1))
    { 
        uint64_t l_1080 = 3UL;
        l_1080--;
    }
    if (((safe_unary_minus_func_int32_t_s(p_17.f0.f0.f1.f3)) != g_411.f1))
    { 
        uint16_t l_1084 = 2UL;
        uint8_t *l_1093[3][4][2] = {{{&g_227,&g_426.f0.f1},{(void*)0,&g_70},{(void*)0,&g_227},{&g_429.f0.f1,(void*)0}},{{&g_426.f0.f1,&g_70},{&g_426.f0.f1,(void*)0},{&g_429.f0.f1,&g_227},{(void*)0,&g_70}},{{(void*)0,&g_426.f0.f1},{&g_227,(void*)0},{(void*)0,(void*)0},{&g_227,&g_426.f0.f1}}};
        int32_t l_1094 = 0x3B37DEBCL;
        int64_t *l_1095[3];
        int32_t l_1096 = 0xA590D9AEL;
        int32_t l_1099 = (-1L);
        int32_t l_1103 = 0x6D488072L;
        int32_t l_1104 = (-8L);
        uint32_t l_1106 = 0x5945985FL;
        int32_t l_1107 = 0xC2A2D4F2L;
        int64_t *** const l_1109[6] = {&g_380,&g_380,&g_380,&g_380,&g_380,&g_380};
        struct S3 l_1121 = {18446744073709551613UL,18446744073709551614UL};
        uint32_t * const *l_1135[2][5][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1095[i] = &g_429.f0.f4;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1135[i][j][k] = &g_422[2];
            }
        }
        l_1107 |= ((l_1084 < (l_964 , ((safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(((l_1096 = (!((**g_581) = (safe_unary_minus_func_uint8_t_u((l_1094 = p_17.f0.f0.f3)))))) ^ (l_1104 = ((((-10L) <= ((**g_52) &= (safe_lshift_func_int8_t_s_s((l_1099 = 0L), 3)))) & ((*g_461) = (safe_add_func_int8_t_s_s((l_1103 |= ((void*)0 == l_1102)), 3L)))) , p_17.f0.f6.f0))), 65535UL)), l_1105)) < l_1084), p_17.f0.f0.f1.f1)) & l_1084))) > l_1106);
        if (l_26)
            goto lbl_1108;
        if ((l_1109[1] != (*g_778)))
        { 
            int16_t *l_1113 = (void*)0;
            int16_t *l_1114[7] = {&g_531.f1.f4,&g_531.f1.f4,&g_531.f1.f4,&g_531.f1.f4,&g_531.f1.f4,&g_531.f1.f4,&g_531.f1.f4};
            uint16_t *l_1115 = &g_315.f1;
            int32_t l_1119 = 0xCB5E8533L;
            int32_t l_1132 = 0x14AA8CFEL;
            int i;
            (**g_52) = ((((((*l_1115) ^= ((**g_460) = (safe_unary_minus_func_int16_t_s((l_1094 = (-2L)))))) <= ((g_1116 = &g_979) != ((0x79L | (safe_mul_func_uint8_t_u_u(((*g_973) , 0x93L), (p_17.f0.f0.f1.f2 , ((((****g_579) = p_17.f0.f6.f1.f0) == p_17.f0.f0.f0) != l_1119))))) , (void*)0))) | l_1099) , l_1120) > 65530UL);
            if (((l_1121 , (safe_sub_func_int16_t_s_s(((253UL || (((**g_778) != (l_1124[0] , (**g_778))) >= ((l_1132 = (safe_add_func_uint64_t_u_u(g_531.f1.f1, (safe_div_func_int16_t_s_s(((~(safe_lshift_func_uint8_t_u_s(g_429.f0.f6.f2, l_1132))) & (***g_459)), p_17.f0.f6.f1.f1))))) <= p_17.f0.f6.f1.f3))) == (*g_137)), 0L))) ^ p_17.f0.f6.f0))
            { 
                return p_17.f0.f2;
            }
            else
            { 
                return p_17.f0.f2;
            }
        }
        else
        { 
            uint32_t **l_1136[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_1159 = (-1L);
            struct S5 l_1165 = {0xE3CF6CC6L,0x22F2L};
            int32_t *l_1192 = &g_22[1];
            int8_t l_1193 = (-1L);
            int16_t l_1201 = 0x9281L;
            uint32_t * const **l_1205 = &l_1135[0][2][0];
            int i, j;
            if ((safe_mul_func_int8_t_s_s((l_1135[0][2][0] != l_1136[0][3]), ((p_17.f0.f6.f1 , g_355) , (safe_lshift_func_uint8_t_u_s(1UL, 3))))))
            { 
                uint64_t *l_1151[4][4] = {{(void*)0,(void*)0,&g_429.f0.f2.f1,&g_320},{&g_320,&g_320,&g_429.f0.f2.f1,&g_320},{(void*)0,&l_1121.f1,&g_318[1][2],&g_429.f0.f2.f1},{&g_320,&l_1121.f1,&l_1121.f1,&g_320}};
                int32_t l_1152 = (-4L);
                uint32_t **l_1167 = &g_424;
                uint8_t l_1175 = 0x0CL;
                int64_t l_1177 = (-8L);
                int32_t l_1194 = 1L;
                struct S5 l_1199[6] = {{-10L,0UL},{-10L,0UL},{-10L,0UL},{-10L,0UL},{-10L,0UL},{-10L,0UL}};
                int i, j;
                if (((safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_1152 = p_17.f0.f1), ((safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(l_1159, 2)) == (*g_1116)), 0xD779L)) <= ((-9L) ^ (safe_lshift_func_int16_t_s_s(l_1121.f0, 3)))), (((&g_302[1] == (void*)0) ^ g_531.f1.f5) , p_16))) > p_17.f0.f1))), p_17.f0.f0.f1.f1)), p_17.f0.f0.f1.f0)), 1L)), p_17.f0.f0.f1.f4)) <= 0x03L), 0x3301L)) != p_17.f0.f2.f0))
                { 
                    uint32_t ***l_1164 = &l_1063;
                    uint32_t ***l_1168 = &l_1167;
                    int32_t **l_1169 = &g_66[5];
                    l_1104 ^= ((safe_add_func_uint8_t_u_u(g_429.f0.f0.f2, ((*g_1116) >= (((*l_1164) = l_1063) == ((*l_1168) = ((l_1165 , l_1166) , l_1167)))))) && (l_1152 <= (*g_1116)));
                    (*l_1169) = ((*g_52) = (void*)0);
                    l_1159 = ((g_386 , (l_1152 && ((*g_1116) , (safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*g_137) = ((!(l_1175 || (((*g_461) & 1L) < p_17.f0.f1))) > (-10L))), 0UL)), 0xCEL))))) == 0x1BL);
                    l_1152 = l_1176;
                }
                else
                { 
                    uint16_t l_1178 = 1UL;
                    struct S5 l_1191 = {0x4D23E6DCL,0xB162L};
                    struct S5 *l_1200[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1200[i] = &l_1199[5];
                    (*g_52) = (*g_52);
                    l_1178--;
                    l_1152 = ((safe_lshift_func_int8_t_s_s((g_429.f0.f0 , ((1UL & p_17.f0.f0.f1.f0) | ((((safe_sub_func_int8_t_s_s((((*l_1192) = (((((safe_mul_func_uint8_t_u_u(p_17.f0.f0.f2, (safe_rshift_func_uint8_t_u_u((((p_17.f0.f0 , (g_18.f0 , func_42((((safe_rshift_func_uint8_t_u_u(p_17.f0.f0.f2, 5)) != l_1159) , p_17.f0), l_1191, l_1192, (*g_52), (*l_1192)))) , p_17.f0.f6.f1.f4) , g_355.f0.f3), g_1005.f1)))) ^ l_1178) & p_17.f0.f6.f1.f2) , l_1193) <= p_17.f0.f6.f1.f4)) & p_17.f0.f0.f1.f3), p_17.f0.f3)) , 0x69181103B998C30ALL) <= p_17.f0.f2.f0) ^ 4L))), 3)) < p_17.f0.f0.f1.f2);
                    (*l_1192) |= (l_1194 & ((safe_mod_func_int64_t_s_s((l_1191.f0 , (safe_add_func_int8_t_s_s(((****g_579) = ((((l_1165 = l_1199[4]) , (*g_380)) != (p_17.f0.f2 , &l_1177)) > 0x5B7F945F1DC47F50LL)), p_17.f0.f2.f1))), p_17.f0.f0.f3)) != l_1178));
                }
            }
            else
            { 
                uint32_t * const **l_1204 = &l_1135[0][2][0];
                for (l_1193 = (-27); (l_1193 <= (-27)); l_1193 = safe_add_func_uint32_t_u_u(l_1193, 9))
                { 
                    l_1205 = l_1204;
                    (*g_52) = (*g_52);
                    return p_17.f0.f2;
                }
            }
        }
    }
    else
    { 
        int32_t *l_1206 = &l_1166.f0.f5;
        int32_t **l_1207 = &l_1072;
        struct S5 l_1209[5] = {{0xD9829212L,0UL},{0xD9829212L,0UL},{0xD9829212L,0UL},{0xD9829212L,0UL},{0xD9829212L,0UL}};
        uint16_t l_1274 = 0UL;
        int i;
        if ((((*l_1207) = func_34(l_1206)) == (g_531.f1 , func_29(func_29(g_66[3], l_1208, &l_1074, l_1209[0]), g_18.f0, &l_25[1], l_1124[0]))))
        { 
            return p_17.f0.f2;
        }
        else
        { 
            int16_t l_1227 = (-8L);
            int32_t l_1269 = 0xCAC3852AL;
            int32_t l_1273[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            if ((safe_rshift_func_int16_t_s_s((*g_1116), 0)))
            { 
                return p_17.f0.f2;
            }
            else
            { 
                int32_t l_1229 = (-1L);
                struct S2 *l_1251 = &g_477;
                int32_t l_1252 = 0x385A8681L;
                int16_t l_1264 = (-10L);
                uint32_t l_1265 = 2UL;
                int32_t l_1271 = 0x4260993CL;
                int32_t l_1272 = 0x473DEE0EL;
                for (g_426.f0.f2.f0 = 0; (g_426.f0.f2.f0 > 36); g_426.f0.f2.f0 = safe_add_func_int16_t_s_s(g_426.f0.f2.f0, 1))
                { 
                    if (p_16)
                        break;
                    if (p_17.f0.f6.f2)
                        break;
                }
                for (g_974.f1.f5 = 0; (g_974.f1.f5 <= 13); g_974.f1.f5 = safe_add_func_int8_t_s_s(g_974.f1.f5, 9))
                { 
                    uint8_t l_1222 = 0x0DL;
                    int8_t *l_1228 = &g_229;
                    union U9 l_1242 = {{{-7L,{0x1BE23AE6L,0x8233L,0xB2F74BE6L,7L,0x0052L,8L,4294967288UL},0xCFL,0x96E8D8B92EB03C9CLL},0x2AL,{8UL,0xBCB9527D04221B24LL},9L,0x01C108E5965D4613LL,0x4EC08E2FL,{0x9CL,{0UL,1UL,0x440D60FDL,-1L,0x0DD6L,0x2A118226L,0x89D48E7DL},0x31L,0xE8E67E3003EADC40LL}}};
                    struct S2 *l_1249 = &l_918;
                    struct S2 **l_1248 = &l_1249;
                    struct S2 ***l_1247[1];
                    uint64_t *l_1250 = &g_426.f0.f0.f3;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1247[i] = &l_1248;
                    l_1229 |= ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((**g_460), (*g_1116))), 1UL)) != (safe_add_func_int32_t_s_s(l_1222, ((*l_1206) = ((safe_mul_func_int8_t_s_s(((*l_1228) = ((****g_579) = (safe_rshift_func_int8_t_s_s(l_1227, 5)))), ((p_17.f0.f0.f3 > p_17.f0.f0.f1.f6) ^ p_17.f0.f0.f2))) > 18446744073709551611UL)))));
                    l_1252 &= (safe_add_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s((((l_1227 , (((*g_461) = (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((((((l_1222 ^ l_1229) == 1L) & ((((~((l_1242 , (((*l_1250) = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((((*g_1116) = (l_1247[0] != (void*)0)) ^ (*g_461)) | l_1229) | 0x01502879L), 0x5C14DB22C7067640LL)), (*l_1206)))) | l_1242.f0.f0.f1.f3)) < p_17.f0.f0.f1.f3)) == p_17.f0.f1) < (-1L)) , p_17.f0.f6.f1.f1)) == 0UL) , 0x31544A1BL))), 0x23C1L)), g_974.f1.f1)), l_1242.f0.f6.f1.f6))) <= 0xFD2FL)) , (*g_475)) == l_1251), l_1242.f0.f6.f1.f1)) && p_17.f0.f6.f1.f3) & 65533UL) && 65532UL), l_1227));
                }
                for (g_429.f0.f2.f1 = 0; (g_429.f0.f2.f1 <= 2); g_429.f0.f2.f1 += 1)
                { 
                    struct S1 * const l_1253[3] = {(void*)0,(void*)0,(void*)0};
                    struct S1 **l_1254 = (void*)0;
                    struct S1 *l_1256 = &l_1208.f0;
                    struct S1 **l_1255 = &l_1256;
                    int i;
                    (*l_1255) = l_1253[2];
                    return p_17.f0.f2;
                }
                for (g_531.f3 = 0; (g_531.f3 != (-18)); g_531.f3 = safe_sub_func_uint8_t_u_u(g_531.f3, 9))
                { 
                    uint32_t l_1259 = 0x2F91F7BFL;
                    int32_t l_1262 = 0x064F48D0L;
                    int32_t l_1263 = 0x3578078EL;
                    int64_t *l_1268 = &l_918.f1;
                    int32_t l_1270[7][7] = {{0L,0xD9CEEDCEL,0L,0x46166473L,(-1L),0xC587ECF2L,0x69007486L},{0x2E3D3C6DL,0L,1L,1L,0L,0x2E3D3C6DL,0L},{0L,0x46166473L,(-1L),0xC587ECF2L,0x69007486L,0xC587ECF2L,(-1L)},{0x3D505E07L,0x3D505E07L,0x2E3D3C6DL,1L,0x2E3D3C6DL,0x3D505E07L,0x3D505E07L},{0x8A24E9A0L,0x46166473L,0L,0x46166473L,0x8A24E9A0L,0L,(-1L)},{0xA1368F0FL,0L,0xA1368F0FL,0x2E3D3C6DL,0x2E3D3C6DL,0xA1368F0FL,0L},{(-1L),0xD9CEEDCEL,0L,0L,0x69007486L,0x46166473L,0x69007486L}};
                    int i, j;
                    l_1259 &= (0x275AL == 1L);
                    l_1265 = (safe_add_func_uint16_t_u_u((l_1262 = (0x1BDF04B7F5A60591LL | p_17.f0.f4)), ((g_1043 = g_974.f1.f2) , ((((l_1263 |= ((**g_460) ^ 0xF251L)) != (0xC0995C3BL || ((*l_1206) = ((p_17.f0.f0.f1 , 5UL) & 4294967288UL)))) >= l_1264) >= p_17.f0.f6.f1.f3))));
                    l_1269 = (safe_sub_func_int8_t_s_s((((*l_1268) = p_17.f0.f6.f1.f1) && p_17.f0.f6.f0), (g_426.f0.f2.f0 , ((void*)0 == &g_424))));
                    l_1274--;
                }
            }
        }
    }
    if (p_17.f0.f0.f3)
    { 
        uint32_t l_1277 = 0x648D6C97L;
        int32_t l_1278[2][6][1] = {{{1L},{1L},{0x59C6C04DL},{0xCC789B54L},{0x59C6C04DL},{1L}},{{1L},{0x59C6C04DL},{0xCC789B54L},{0x59C6C04DL},{1L},{1L}}};
        int i, j, k;
        l_1278[1][2][0] = l_1277;
        return g_1279;
    }
    else
    { 
        uint16_t l_1290 = 3UL;
        int32_t l_1310[4] = {(-4L),(-4L),(-4L),(-4L)};
        int32_t l_1312 = 0xF9FDED4FL;
        int i;
        for (l_1208.f0.f3 = 0; (l_1208.f0.f3 == 37); l_1208.f0.f3++)
        { 
            struct S5 **l_1295[4];
            int32_t l_1305 = 0xCB876FB7L;
            uint8_t *l_1306 = (void*)0;
            uint8_t *l_1307 = &l_1208.f1;
            uint64_t *l_1309[5][3] = {{&l_1208.f2.f1,&l_1208.f2.f1,&l_1208.f2.f1},{&g_429.f0.f0.f3,&g_411.f1,&g_429.f0.f0.f3},{&l_1208.f2.f1,&l_1208.f2.f1,&l_1208.f2.f1},{&g_429.f0.f0.f3,&g_411.f1,&g_429.f0.f0.f3},{&l_1208.f2.f1,&l_1208.f2.f1,&l_1208.f2.f1}};
            int64_t *l_1311 = &g_341;
            uint64_t l_1313 = 0x86341870E7E5E13ELL;
            uint64_t l_1314 = 0x0993C98D77C1C03CLL;
            int32_t l_1315 = 0xE69505DDL;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1295[i] = &g_598[0];
            l_1315 &= ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((*l_1311) = ((0x70EBL ^ ((((safe_add_func_uint64_t_u_u(l_1290, ((l_1310[0] = ((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((*l_1307) |= (((((g_426.f0.f2.f1 |= g_6.f1.f1) & (0x2AF7L ^ (((void*)0 == l_1295[3]) > (((((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((0x5E9137BD6D1AB46CLL <= p_17.f0.f6.f3), l_1290)) & 0UL), p_17.f0.f6.f3)))), l_1290)), (***g_459))) > l_1305) >= p_17.f0.f5) ^ 0x4898C862L) & l_1305)))) && 0x3486CF9CL) ^ l_1305) >= 0x0214E6DCL)) & 9UL), g_1005.f1)), l_1308)) & 0xD07AL)) | l_1290))) <= 0xC2B5FE5312572BA4LL) >= p_17.f0.f4) || p_16)) > 0x0811L)), 0x5DC95CE1EC285CC2LL)), l_1312)), 0xA121L)) <= l_1313) || g_429.f0.f0.f2) >= l_1314);
        }
    }
    return l_1316;
}



static int32_t * func_29(int32_t * p_30, struct S6  p_31, int32_t * p_32, struct S5  p_33)
{ 
    int32_t *l_316 = &g_22[0];
    uint64_t *l_317 = &g_318[1][2];
    uint64_t *l_319 = &g_320;
    int64_t *l_327[6][2] = {{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72},{&g_72,&g_72}};
    int64_t **l_326[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    struct S2 *l_330 = (void*)0;
    int32_t l_343 = 0xA836D34CL;
    int32_t l_348[5][6] = {{0x4CBD127EL,0x4CBD127EL,(-8L),0x823C35DBL,(-8L),0x4CBD127EL},{(-8L),(-1L),0x823C35DBL,0x823C35DBL,(-1L),(-8L)},{0x4CBD127EL,(-8L),0x823C35DBL,(-8L),0x4CBD127EL,0x4CBD127EL},{0L,(-8L),(-8L),0L,(-1L),0L},{0L,(-1L),0L,(-8L),(-8L),0L}};
    struct S4 l_365 = {0L,{4UL,0x35A7L,0x55AAA0CEL,0L,0x31A5L,-1L,0x6CF045B6L},0xFC406785D5D54A94LL,0xF482B1340AD02C0ALL};
    const uint8_t *l_366 = (void*)0;
    int16_t *l_412 = &l_365.f1.f3;
    union U9 *l_425 = &g_426;
    struct S5 l_441 = {-3L,0x59ADL};
    union U7 l_466[5][7][3] = {{{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{18446744073709551607UL,1UL,0x107D789DL,0x1616L,0L,4L,0x6BEADF25L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}},{{{0x0632252CL,65530UL,0UL,0L,0x9C9EL,-1L,0x65E66E7FL}},{{0xC4C0D3ADL,65535UL,18446744073709551613UL,0xB9C8L,0x15D9L,1L,4294967295UL}},{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{0xC4C0D3ADL,65535UL,18446744073709551613UL,0xB9C8L,0x15D9L,1L,4294967295UL}},{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}}},{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}}},{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{18446744073709551607UL,1UL,0x107D789DL,0x1616L,0L,4L,0x6BEADF25L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}}},{{{{0x0632252CL,65530UL,0UL,0L,0x9C9EL,-1L,0x65E66E7FL}},{{0xC4C0D3ADL,65535UL,18446744073709551613UL,0xB9C8L,0x15D9L,1L,4294967295UL}},{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{0xC4C0D3ADL,65535UL,18446744073709551613UL,0xB9C8L,0x15D9L,1L,4294967295UL}},{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}}},{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}}},{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{18446744073709551607UL,1UL,0x107D789DL,0x1616L,0L,4L,0x6BEADF25L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}},{{{0x0632252CL,65530UL,0UL,0L,0x9C9EL,-1L,0x65E66E7FL}},{{0xC4C0D3ADL,65535UL,18446744073709551613UL,0xB9C8L,0x15D9L,1L,4294967295UL}},{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{0xC4C0D3ADL,65535UL,18446744073709551613UL,0xB9C8L,0x15D9L,1L,4294967295UL}},{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}}}},{{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}}},{{{1UL,65527UL,0xFCF09A67L,1L,-7L,0x14260C80L,0xBC600FDBL}},{{18446744073709551607UL,1UL,0x107D789DL,0x1616L,0L,4L,0x6BEADF25L}},{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}}},{{{0x3014DDA7L,0x284BL,0xBDEA0201L,0x35E4L,0xD5BDL,0x591364ECL,0xFB78CCCDL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}},{{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}},{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{6UL,2UL,0x8C4E593CL,0L,0x2929L,6L,4294967295UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0xA8C87C79L,0xF4E6L,0x81EE3BAAL,0x23BDL,-1L,-9L,1UL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}}},{{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}},{{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}},{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{6UL,2UL,0x8C4E593CL,0L,0x2929L,6L,4294967295UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0xA8C87C79L,0xF4E6L,0x81EE3BAAL,0x23BDL,-1L,-9L,1UL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}},{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}},{{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}}},{{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{6UL,2UL,0x8C4E593CL,0L,0x2929L,6L,4294967295UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{0xA8C87C79L,0xF4E6L,0x81EE3BAAL,0x23BDL,-1L,-9L,1UL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}},{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}}},{{{0xB5993B89L,65535UL,0x3A55FC59L,0L,3L,-1L,1UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}},{{{0x62761709L,1UL,0xA13A8B29L,0L,1L,1L,4294967295UL}},{{0xEDBDE6A8L,0xAA10L,0x8CE8F446L,0x3669L,0x7B63L,-7L,1UL}},{{6UL,2UL,0x8C4E593CL,0L,0x2929L,6L,4294967295UL}}},{{{0x2BFFFA3EL,7UL,0UL,1L,9L,0x58D8B834L,0x2CDA5AF2L}},{{6UL,7UL,8UL,0L,0L,0L,0xCA0DDABBL}},{{0UL,0xA96CL,0xDDB49700L,0xD4C7L,0x61F7L,0xE5979D70L,1UL}}}}};
    const int8_t ***l_474 = (void*)0;
    struct S3 l_483 = {0UL,0x7DA71A9E01F7D11CLL};
    int64_t l_491 = 0xEED09632418B9132LL;
    int64_t l_496 = 0x1CA215E882120FC2LL;
    uint16_t l_500 = 0UL;
    uint8_t *l_501 = &g_429.f0.f1;
    uint32_t **l_507 = &g_422[0];
    uint8_t l_508[7] = {0x39L,255UL,255UL,0x39L,255UL,255UL,0x39L};
    int16_t l_550 = 1L;
    uint16_t l_619[5][3] = {{8UL,0UL,0UL},{8UL,8UL,0UL},{0x8C95L,0UL,0UL},{0UL,1UL,0UL},{0x8C95L,1UL,0x8C95L}};
    int32_t l_624[4] = {0x630A398DL,0x630A398DL,0x630A398DL,0x630A398DL};
    int8_t **l_649 = &g_137;
    int8_t l_723 = 0L;
    int32_t *l_761[3];
    struct S2 *l_771 = &g_477;
    uint32_t *l_773 = &g_39;
    uint32_t ** const l_772 = &l_773;
    int16_t l_789 = 4L;
    uint8_t l_829 = 0x2AL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_761[i] = &l_441.f0;
    return &g_22[1];
}



static int32_t * func_34(int32_t * p_35)
{ 
    int32_t l_36 = 7L;
    int32_t *l_37 = (void*)0;
    int32_t *l_38[6][3][5] = {{{&g_22[1],(void*)0,&g_22[1],&g_22[0],&g_22[1]},{&g_22[1],(void*)0,(void*)0,&g_22[1],&g_22[0]},{&g_22[1],&g_22[1],&g_22[1],&g_22[1],&g_22[0]}},{{(void*)0,&g_22[1],&g_22[1],&g_22[1],&g_22[1]},{&g_22[1],&g_22[1],&g_22[0],&g_22[1],&g_22[1]},{&g_22[1],(void*)0,&g_22[0],&g_22[1],(void*)0}},{{&g_22[1],&g_22[0],&g_22[1],&g_22[0],&g_22[1]},{&g_22[1],(void*)0,&g_22[1],&g_22[1],&g_22[1]},{&g_22[1],&g_22[1],(void*)0,&g_22[1],&g_22[1]}},{{&g_22[1],&g_22[1],&g_22[1],(void*)0,&g_22[1]},{&g_22[1],&g_22[1],&g_22[1],(void*)0,&g_22[1]},{&g_22[1],(void*)0,&g_22[1],&g_22[1],(void*)0}},{{(void*)0,(void*)0,&g_22[1],&g_22[1],&g_22[1]},{&g_22[1],(void*)0,&g_22[1],&g_22[0],&g_22[1]},{&g_22[1],(void*)0,(void*)0,&g_22[1],&g_22[0]}},{{&g_22[1],&g_22[1],&g_22[1],&g_22[1],&g_22[0]},{(void*)0,&g_22[1],&g_22[1],&g_22[1],&g_22[1]},{&g_22[1],&g_22[1],&g_22[0],&g_22[1],&g_22[1]}}};
    struct S3 l_54 = {0x4C286E78L,1UL};
    uint8_t *l_300 = &g_227;
    int8_t l_305 = (-3L);
    uint8_t l_306 = 0UL;
    int i, j, k;
    g_39++;
    if (g_39)
        goto lbl_304;
    if (g_39)
        goto lbl_304;
lbl_304:
    if ((*p_35))
    { 
        struct S5 l_78 = {0x4FEEF6E5L,1UL};
        uint32_t l_79[1];
        const int32_t **l_299 = (void*)0;
        const int32_t ***l_298 = &l_299;
        int i;
        for (i = 0; i < 1; i++)
            l_79[i] = 9UL;
        (*l_298) = (((((p_35 != (void*)0) , func_42(func_48(p_35, g_52, l_54), l_78, (*g_52), (*g_52), l_79[0])) , &g_22[1]) == (void*)0) , (void*)0);
    }
    else
    { 
        int8_t *****l_303 = &g_301;
        (*p_35) = ((void*)0 != l_300);
        (*l_303) = g_301;
    }
    l_306++;
    return l_38[0][0][4];
}



static struct S3  func_42(struct S6  p_43, struct S5  p_44, int32_t * p_45, int32_t * p_46, uint32_t  p_47)
{ 
    struct S4 l_80 = {0L,{0x0C0C6297L,0x455DL,0xAB54D395L,0L,7L,0x0B04548FL,3UL},1L,1L};
    int8_t *l_83 = &g_84;
    int32_t *l_85 = (void*)0;
    int32_t *l_86 = &l_80.f1.f5;
    int32_t *l_87 = &g_88;
    int16_t *l_93 = &l_80.f1.f3;
    int16_t *l_94[1];
    int32_t l_95 = 0x15E9F7B3L;
    int32_t **l_99 = &l_85;
    int32_t l_123 = 1L;
    int32_t l_125 = 0x2C5433B6L;
    int32_t l_126[6] = {0x0B75FEBAL,0x0B75FEBAL,(-6L),0x0B75FEBAL,0x0B75FEBAL,(-6L)};
    union U9 l_139 = {{{1L,{0x0C1A61F3L,0xF57DL,0x4481C7AFL,0x2FF0L,0L,-8L,1UL},0xFDL,0x6F51EB76DF177304LL},0x8DL,{0x327F2DC7L,18446744073709551615UL},0x16L,-7L,0x1B982560L,{-4L,{18446744073709551615UL,65535UL,0UL,4L,3L,0x7ADB6671L,2UL},0xBCL,2UL}}};
    struct S2 l_195 = {0x702151D6L,-2L};
    int16_t l_254 = 0x2D9CL;
    int16_t l_259[1];
    int32_t *l_264 = &g_22[1];
    int32_t *l_265 = &g_98.f0;
    int32_t *l_266 = &g_88;
    int32_t *l_267 = &l_125;
    int32_t *l_268 = &g_88;
    int32_t *l_269 = &g_98.f0;
    int32_t *l_270 = &g_22[1];
    int32_t *l_271 = &g_22[0];
    int32_t *l_272 = &g_88;
    int32_t *l_273 = &l_126[3];
    int32_t *l_274 = &l_80.f1.f5;
    int32_t *l_275 = &l_95;
    int32_t *l_276[4] = {&l_80.f1.f5,&l_80.f1.f5,&l_80.f1.f5,&l_80.f1.f5};
    uint32_t l_277 = 18446744073709551615UL;
    uint16_t *l_295 = (void*)0;
    uint16_t ** const l_294 = &l_295;
    uint16_t **l_297[1];
    uint16_t ***l_296 = &l_297[0];
    int i;
    for (i = 0; i < 1; i++)
        l_94[i] = &l_80.f1.f4;
    for (i = 0; i < 1; i++)
        l_259[i] = (-5L);
    for (i = 0; i < 1; i++)
        l_297[i] = &l_295;
lbl_231:
    (*l_87) &= ((*p_45) < (l_80 , ((*l_86) = (g_18.f0.f6.f1.f3 == ((-8L) ^ (safe_mod_func_int8_t_s_s(0L, ((*l_83) = 0x8AL))))))));
    if (((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((*l_87) = ((*l_93) = g_18.f0.f2.f1)), (l_87 == ((*g_52) = l_87)))), 3)) != (l_95 && (((safe_rshift_func_int16_t_s_u((g_98 , (((*l_99) = &l_95) != (((((1L < 0x0FF8L) <= p_43.f0.f1.f6) == 0UL) | g_18.f0.f1) , (void*)0))), 1)) & g_18.f0.f0.f1.f6) | (*l_86)))))
    { 
        int32_t l_106 = 0x5788D5B5L;
        int32_t l_120 = 0xFB77572BL;
        int32_t l_121 = 0x450B3EC0L;
        int32_t l_129 = 0xCC38E0EBL;
        int32_t l_130[1];
        int8_t *l_140 = &l_139.f0.f0.f0;
        uint32_t l_146 = 0x59EF8C94L;
        int8_t **l_148 = &l_83;
        int8_t ***l_147 = &l_148;
        struct S2 l_189 = {1L,0x05D4DD6702883978LL};
        int8_t *l_228[6][6][4] = {{{&g_229,&g_229,(void*)0,(void*)0},{&g_229,&g_229,&g_229,(void*)0},{&g_229,&g_229,(void*)0,&g_229},{(void*)0,&g_229,&g_229,(void*)0},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,&g_229,&g_229},{(void*)0,&g_229,(void*)0,&g_229},{(void*)0,&g_229,&g_229,(void*)0},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229}},{{(void*)0,&g_229,(void*)0,&g_229},{(void*)0,&g_229,&g_229,(void*)0},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{(void*)0,&g_229,(void*)0,&g_229}},{{(void*)0,&g_229,&g_229,(void*)0},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{(void*)0,&g_229,(void*)0,&g_229},{(void*)0,&g_229,&g_229,(void*)0}},{{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{(void*)0,&g_229,(void*)0,&g_229},{(void*)0,&g_229,&g_229,(void*)0},{&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229},{(void*)0,&g_229,(void*)0,&g_229},{(void*)0,&g_229,&g_229,(void*)0},{&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229}}};
        uint64_t l_230[5][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_130[i] = 0L;
        for (p_43.f0.f3 = 2; (p_43.f0.f3 <= 39); ++p_43.f0.f3)
        { 
            uint8_t l_111 = 247UL;
            int32_t l_122 = (-3L);
            int32_t l_124[2];
            int8_t **l_138[1];
            int i;
            for (i = 0; i < 2; i++)
                l_124[i] = 0x6253D0E6L;
            for (i = 0; i < 1; i++)
                l_138[i] = &l_83;
            for (p_43.f4 = (-13); (p_43.f4 > (-18)); --p_43.f4)
            { 
                int16_t l_110[3];
                int32_t l_127 = 0xE23BEAF9L;
                int32_t l_128 = 0xA174F5C3L;
                uint16_t l_132 = 3UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_110[i] = (-10L);
                for (p_44.f0 = 0; (p_44.f0 > 12); p_44.f0++)
                { 
                    int32_t *l_107 = &l_80.f1.f5;
                    int32_t *l_108 = &g_98.f0;
                    int32_t *l_109[2][1];
                    int16_t l_131[2][3] = {{0xFF71L,0xFF71L,0xFF71L},{0xE424L,0xE424L,0xE424L}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_109[i][j] = &l_80.f1.f5;
                    }
                    l_111++;
                    (**g_52) &= (((8L && (safe_mul_func_uint16_t_u_u((g_98 , (((safe_lshift_func_uint16_t_u_u(1UL, p_43.f0.f1.f0)) & ((safe_div_func_int64_t_s_s(((((void*)0 != &g_84) | (p_43.f0.f1.f6 & g_18.f0.f6.f1.f3)) & 65534UL), 0x21F199CA37C21472LL)) < g_18.f0.f0.f1.f3)) ^ p_43.f0.f1.f3)), l_106))) || p_43.f6.f1.f0) != p_43.f0.f1.f0);
                    l_132++;
                    (*l_108) ^= (*p_46);
                    if ((*p_46))
                        continue;
                }
                return p_43.f2;
            }
            (*l_87) = (safe_mod_func_uint8_t_u_u(((l_83 = (g_137 = (void*)0)) != (l_139 , (l_140 = &g_84))), (safe_add_func_int16_t_s_s(((*l_86) != (l_122 |= ((g_143 = g_18.f0.f6.f1.f2) <= p_43.f0.f1.f3))), (safe_add_func_int16_t_s_s(p_47, l_146))))));
        }
        g_149 = ((*l_147) = &l_83);
        for (g_98.f1 = 6; (g_98.f1 >= 36); g_98.f1 = safe_add_func_uint8_t_u_u(g_98.f1, 7))
        { 
            int32_t l_166[2][6][7] = {{{0xF841FF86L,0x5DCBFC91L,0x7829FDDAL,1L,(-1L),6L,0x92101502L},{(-1L),(-2L),0xBAA2C014L,(-1L),(-1L),0x48218CD9L,0xF841FF86L},{(-5L),0x5DCBFC91L,0x95851E5CL,0x3042A752L,(-1L),0x34E4512EL,(-1L)},{0L,0x2051E7DDL,5L,0L,(-1L),0x4672A85BL,(-1L)},{(-1L),0x3042A752L,1L,0x95851E5CL,0xA1D33F60L,0xA1D33F60L,0x95851E5CL},{0xAE67165DL,0xB90FCD6BL,0xAE67165DL,0x2B8D20E8L,(-2L),5L,0x3E0FBC3BL}},{{0xB90FCD6BL,(-4L),0x5DCBFC91L,0x34E4512EL,(-5L),0xF841FF86L,0x315E2C66L},{(-2L),0xF2169EFBL,1L,0x3042A752L,0xCF33F744L,5L,0xB90FCD6BL},{0x4672A85BL,(-2L),0xA1D33F60L,5L,0x9F0E9028L,0xA1D33F60L,0xF2169EFBL},{0x1448ED9AL,(-4L),(-1L),0x315E2C66L,0xBAA2C014L,1L,0x3042A752L},{0x1448ED9AL,0x30B52F03L,(-10L),(-2L),(-10L),0x30B52F03L,0x1448ED9AL},{0x4672A85BL,0x48218CD9L,0xCF33F744L,0xAE67165DL,(-2L),0x7829FDDAL,0xA1D33F60L}}};
            int64_t l_184 = 1L;
            struct S3 l_185[5][1][4] = {{{{9UL,0x60BC7536035E0CF0LL},{9UL,0x60BC7536035E0CF0LL},{0xE75F934CL,1UL},{9UL,0x60BC7536035E0CF0LL}}},{{{9UL,0x60BC7536035E0CF0LL},{0x0FD3A3C4L,1UL},{0x0FD3A3C4L,1UL},{9UL,0x60BC7536035E0CF0LL}}},{{{0x0FD3A3C4L,1UL},{9UL,0x60BC7536035E0CF0LL},{0x0FD3A3C4L,1UL},{0x0FD3A3C4L,1UL}}},{{{9UL,0x60BC7536035E0CF0LL},{9UL,0x60BC7536035E0CF0LL},{0xE75F934CL,1UL},{9UL,0x60BC7536035E0CF0LL}}},{{{9UL,0x60BC7536035E0CF0LL},{0x0FD3A3C4L,1UL},{0x0FD3A3C4L,1UL},{9UL,0x60BC7536035E0CF0LL}}}};
            int8_t *l_188 = (void*)0;
            struct S2 l_191 = {0L,0x01E3291E4BA6C3AFLL};
            int32_t *l_215 = &l_123;
            int i, j, k;
            for (l_139.f0.f2.f1 = 0; (l_139.f0.f2.f1 < 55); l_139.f0.f2.f1 = safe_add_func_int8_t_s_s(l_139.f0.f2.f1, 2))
            { 
                int8_t **l_155 = &l_140;
                uint64_t l_162 = 1UL;
                int64_t *l_163[3][1][5] = {{{&l_139.f0.f4,(void*)0,&g_72,(void*)0,(void*)0}},{{(void*)0,&l_139.f0.f4,(void*)0,&g_72,(void*)0}},{{&l_80.f0,&l_80.f3,(void*)0,&l_80.f3,&l_80.f0}}};
                int i, j, k;
                if (((0x39L && ((!(((0xD3L || ((((**g_52) &= 0L) != ((*p_46) = ((void*)0 != l_155))) > ((g_156 & ((p_43.f4 &= (safe_sub_func_uint64_t_u_u(((((*l_86) = (+l_162)) & 0x3E5AC415L) < 0UL), l_129))) > 18446744073709551613UL)) | 0xF79306F4L))) ^ 0x88L) & g_18.f0.f0.f1.f0)) || p_43.f6.f1.f2)) == 1UL))
                { 
                    return g_18.f0.f2;
                }
                else
                { 
                    (*l_87) = ((*p_46) = (safe_div_func_uint16_t_u_u(l_166[0][5][0], p_44.f0)));
                    (*p_46) = ((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_43.f6.f3, (safe_lshift_func_int16_t_s_s(1L, 0)))), (safe_lshift_func_int8_t_s_s((+((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(0xA202L, (safe_add_func_uint64_t_u_u((((g_18.f0.f6.f2 , (l_146 < (safe_add_func_uint8_t_u_u(l_184, p_43.f6.f2)))) == p_43.f6.f1.f3) & 0xA0C25E5FL), (*l_87))))), p_43.f6.f3)) > p_43.f0.f1.f2)), p_43.f3)))) | 0UL) & p_43.f0.f1.f4) & g_39);
                }
                return l_185[4][0][1];
            }
            for (l_95 = (-26); (l_95 > (-30)); l_95--)
            { 
                struct S2 *l_190[1];
                int32_t l_213 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_190[i] = &l_189;
                (*p_45) &= ((void*)0 == l_188);
                l_191 = l_189;
                for (l_139.f0.f4 = (-11); (l_139.f0.f4 > (-28)); --l_139.f0.f4)
                { 
                    struct S2 l_194 = {0x450F5EE5L,6L};
                    union U9 l_206 = {{{0x21L,{0xA7965CA6L,0UL,0UL,0x2CEAL,1L,0x0833B592L,6UL},0x3EL,0xB0BF49BC35313655LL},0xE2L,{0x3FA23E02L,0x395D0388B1D5A463LL},-2L,0xC0ABDC080480A983LL,18446744073709551615UL,{-3L,{0xD652D0F0L,65532UL,0xE9E952AFL,5L,1L,-3L,9UL},0xB8L,0x5A39968E064FD85ALL}}};
                    uint16_t *l_214 = &g_143;
                    (*l_87) &= 0xB996700FL;
                    l_195 = l_194;
                    (*p_45) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((((*l_214) ^= (((g_18.f0.f6.f1.f5 <= (safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((((&p_46 != ((l_206 , ((safe_sub_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((l_129 & (safe_lshift_func_uint16_t_u_u(p_43.f6.f0, ((void*)0 == &l_188)))), p_43.f6.f3)) > l_206.f0.f6.f0) > l_213), 0xA8C57EA8L)) , l_120)) , &g_66[1])) > 0xE0FFL) | 0x28C40FE08873CDE5LL) > g_6.f1.f1) | 0L), p_43.f0.f0)), 0xF9L))) <= l_213) | 0L)) , l_83) != l_188), 2)), l_166[1][4][5])), g_18.f0.f0.f2));
                    (*g_52) = l_215;
                }
                if (l_129)
                    break;
            }
            if ((*p_45))
                continue;
        }
        (*p_46) = ((18446744073709551612UL | (safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((g_70 = g_18.f0.f6.f1.f3) >= (((safe_mod_func_uint8_t_u_u(0xC0L, ((((l_130[0] = ((*l_140) &= (safe_mul_func_uint16_t_u_u(((*l_86) || (((*l_93) = ((~0xE8F8L) | (g_227 = ((&l_83 == ((*l_147) = (*l_147))) == l_146)))) == (-8L))), 0xF5C4L)))) , p_47) != l_230[3][3]) | (*l_87)))) != p_43.f4) < p_43.f4)), g_156)), l_106)) <= 0L), p_43.f0.f1.f5))) | l_106);
    }
    else
    { 
        uint32_t l_232 = 0UL;
        struct S5 *l_239 = (void*)0;
        struct S5 *l_240 = (void*)0;
        struct S5 *l_241 = &g_98;
        int32_t l_258 = 0L;
        int32_t *l_260[1][1];
        uint32_t l_261 = 0x78D9F81DL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_260[i][j] = &l_258;
        }
        if (g_84)
            goto lbl_231;
        (*l_241) = (((l_232 <= ((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(g_98.f1, (4294967295UL != (*p_46)))), 0x0D4290D7AD230726LL)) >= (p_43.f0.f0 = ((*l_83) = (0x33FCL & (safe_add_func_int16_t_s_s((g_18.f0.f6.f3 > p_43.f0.f1.f1), 0x1B2BL))))))) ^ p_43.f0.f1.f1) , g_98);
        (*p_46) = (l_126[5] |= ((((safe_mul_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((((((((p_43.f0.f1.f4 , (0x11075A79L | (safe_div_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(((safe_div_func_int64_t_s_s(l_232, l_254)) < (((**g_52) = (safe_add_func_uint32_t_u_u((((l_232 , l_232) >= (!0UL)) != (-1L)), (*p_45)))) != l_258)), p_43.f0.f1.f3)) , p_44.f0), p_43.f6.f1.f1)))) > (*l_86)) <= 0xC3L) && 6L) , p_43.f6.f1.f1) & 2UL) && 255UL), g_6.f1.f6)) != 5L) >= 0x4EL), g_18.f0.f0.f1.f6)) ^ g_18.f0.f6.f1.f3) != l_259[0]) < l_232));
        l_261++;
    }
    --l_277;
    (*l_267) ^= (safe_add_func_int16_t_s_s(((g_18.f0.f0.f1.f2 == (((**g_52) = ((safe_rshift_func_uint8_t_u_s((*l_266), 2)) <= (safe_mul_func_uint8_t_u_u(((l_80.f1 , (safe_mod_func_int16_t_s_s((*l_270), (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(g_18.f0.f0.f1.f4, ((p_43.f5 < (safe_sub_func_uint16_t_u_u(((void*)0 == l_83), 0xFE63L))) == p_43.f6.f3))) <= g_6.f1.f1), 9UL))))) != g_39), p_47)))) >= (*l_271))) ^ g_18.f0.f0.f1.f3), 65535UL));
    (*l_296) = l_294;
    return p_43.f2;
}



static struct S6  func_48(const int32_t * p_49, int32_t ** const  p_50, struct S3  p_51)
{ 
    int32_t *l_56[5];
    int32_t **l_55 = &l_56[2];
    uint8_t *l_69 = &g_70;
    int64_t *l_71 = &g_72;
    uint32_t l_73[6][1][7];
    int32_t l_74 = 0x99C82483L;
    uint16_t l_77[4];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_56[i] = &g_22[1];
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_73[i][j][k] = 1UL;
        }
    }
    for (i = 0; i < 4; i++)
        l_77[i] = 0xF429L;
    l_74 |= ((((*g_52) != ((*l_55) = (*g_52))) <= (safe_unary_minus_func_int64_t_s((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(g_18.f0.f0.f1.f2, ((safe_add_func_uint64_t_u_u(((g_66[2] != (*p_50)) >= (((*l_71) = ((safe_rshift_func_uint8_t_u_u(p_51.f0, ((*l_69) = (((**g_52) != p_51.f1) , p_51.f1)))) && 0xDBL)) , 65535UL)), 0x53FEDF4294B59A66LL)) , 0xC8C1L))), l_73[1][0][1])), (-2L)))))) >= g_6.f1.f5);
    l_77[2] ^= ((2L == (safe_sub_func_uint16_t_u_u(p_51.f1, g_6.f0))) & (g_18.f0.f6.f1.f4 , (**l_55)));
    return g_18.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1.f0, "g_6.f1.f0", print_hash_value);
    transparent_crc(g_6.f1.f1, "g_6.f1.f1", print_hash_value);
    transparent_crc(g_6.f1.f2, "g_6.f1.f2", print_hash_value);
    transparent_crc(g_6.f1.f3, "g_6.f1.f3", print_hash_value);
    transparent_crc(g_6.f1.f4, "g_6.f1.f4", print_hash_value);
    transparent_crc(g_6.f1.f5, "g_6.f1.f5", print_hash_value);
    transparent_crc(g_6.f1.f6, "g_6.f1.f6", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_6.f3, "g_6.f3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_18.f0.f0.f0, "g_18.f0.f0.f0", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f0, "g_18.f0.f0.f1.f0", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f1, "g_18.f0.f0.f1.f1", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f2, "g_18.f0.f0.f1.f2", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f3, "g_18.f0.f0.f1.f3", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f4, "g_18.f0.f0.f1.f4", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f5, "g_18.f0.f0.f1.f5", print_hash_value);
    transparent_crc(g_18.f0.f0.f1.f6, "g_18.f0.f0.f1.f6", print_hash_value);
    transparent_crc(g_18.f0.f0.f2, "g_18.f0.f0.f2", print_hash_value);
    transparent_crc(g_18.f0.f0.f3, "g_18.f0.f0.f3", print_hash_value);
    transparent_crc(g_18.f0.f1, "g_18.f0.f1", print_hash_value);
    transparent_crc(g_18.f0.f2.f0, "g_18.f0.f2.f0", print_hash_value);
    transparent_crc(g_18.f0.f2.f1, "g_18.f0.f2.f1", print_hash_value);
    transparent_crc(g_18.f0.f3, "g_18.f0.f3", print_hash_value);
    transparent_crc(g_18.f0.f4, "g_18.f0.f4", print_hash_value);
    transparent_crc(g_18.f0.f5, "g_18.f0.f5", print_hash_value);
    transparent_crc(g_18.f0.f6.f0, "g_18.f0.f6.f0", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f0, "g_18.f0.f6.f1.f0", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f1, "g_18.f0.f6.f1.f1", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f2, "g_18.f0.f6.f1.f2", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f3, "g_18.f0.f6.f1.f3", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f4, "g_18.f0.f6.f1.f4", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f5, "g_18.f0.f6.f1.f5", print_hash_value);
    transparent_crc(g_18.f0.f6.f1.f6, "g_18.f0.f6.f1.f6", print_hash_value);
    transparent_crc(g_18.f0.f6.f2, "g_18.f0.f6.f2", print_hash_value);
    transparent_crc(g_18.f0.f6.f3, "g_18.f0.f6.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_315.f0, "g_315.f0", print_hash_value);
    transparent_crc(g_315.f1, "g_315.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_318[i][j], "g_318[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_355.f0.f0, "g_355.f0.f0", print_hash_value);
    transparent_crc(g_355.f0.f1, "g_355.f0.f1", print_hash_value);
    transparent_crc(g_355.f0.f2, "g_355.f0.f2", print_hash_value);
    transparent_crc(g_355.f0.f3, "g_355.f0.f3", print_hash_value);
    transparent_crc(g_355.f0.f4, "g_355.f0.f4", print_hash_value);
    transparent_crc(g_355.f0.f5, "g_355.f0.f5", print_hash_value);
    transparent_crc(g_355.f0.f6, "g_355.f0.f6", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_426.f0.f0.f0, "g_426.f0.f0.f0", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f0, "g_426.f0.f0.f1.f0", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f1, "g_426.f0.f0.f1.f1", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f2, "g_426.f0.f0.f1.f2", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f3, "g_426.f0.f0.f1.f3", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f4, "g_426.f0.f0.f1.f4", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f5, "g_426.f0.f0.f1.f5", print_hash_value);
    transparent_crc(g_426.f0.f0.f1.f6, "g_426.f0.f0.f1.f6", print_hash_value);
    transparent_crc(g_426.f0.f0.f2, "g_426.f0.f0.f2", print_hash_value);
    transparent_crc(g_426.f0.f0.f3, "g_426.f0.f0.f3", print_hash_value);
    transparent_crc(g_426.f0.f1, "g_426.f0.f1", print_hash_value);
    transparent_crc(g_426.f0.f2.f0, "g_426.f0.f2.f0", print_hash_value);
    transparent_crc(g_426.f0.f2.f1, "g_426.f0.f2.f1", print_hash_value);
    transparent_crc(g_426.f0.f3, "g_426.f0.f3", print_hash_value);
    transparent_crc(g_426.f0.f4, "g_426.f0.f4", print_hash_value);
    transparent_crc(g_426.f0.f5, "g_426.f0.f5", print_hash_value);
    transparent_crc(g_426.f0.f6.f0, "g_426.f0.f6.f0", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f0, "g_426.f0.f6.f1.f0", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f1, "g_426.f0.f6.f1.f1", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f2, "g_426.f0.f6.f1.f2", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f3, "g_426.f0.f6.f1.f3", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f4, "g_426.f0.f6.f1.f4", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f5, "g_426.f0.f6.f1.f5", print_hash_value);
    transparent_crc(g_426.f0.f6.f1.f6, "g_426.f0.f6.f1.f6", print_hash_value);
    transparent_crc(g_426.f0.f6.f2, "g_426.f0.f6.f2", print_hash_value);
    transparent_crc(g_426.f0.f6.f3, "g_426.f0.f6.f3", print_hash_value);
    transparent_crc(g_429.f0.f0.f0, "g_429.f0.f0.f0", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f0, "g_429.f0.f0.f1.f0", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f1, "g_429.f0.f0.f1.f1", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f2, "g_429.f0.f0.f1.f2", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f3, "g_429.f0.f0.f1.f3", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f4, "g_429.f0.f0.f1.f4", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f5, "g_429.f0.f0.f1.f5", print_hash_value);
    transparent_crc(g_429.f0.f0.f1.f6, "g_429.f0.f0.f1.f6", print_hash_value);
    transparent_crc(g_429.f0.f0.f2, "g_429.f0.f0.f2", print_hash_value);
    transparent_crc(g_429.f0.f0.f3, "g_429.f0.f0.f3", print_hash_value);
    transparent_crc(g_429.f0.f1, "g_429.f0.f1", print_hash_value);
    transparent_crc(g_429.f0.f2.f0, "g_429.f0.f2.f0", print_hash_value);
    transparent_crc(g_429.f0.f2.f1, "g_429.f0.f2.f1", print_hash_value);
    transparent_crc(g_429.f0.f3, "g_429.f0.f3", print_hash_value);
    transparent_crc(g_429.f0.f4, "g_429.f0.f4", print_hash_value);
    transparent_crc(g_429.f0.f5, "g_429.f0.f5", print_hash_value);
    transparent_crc(g_429.f0.f6.f0, "g_429.f0.f6.f0", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f0, "g_429.f0.f6.f1.f0", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f1, "g_429.f0.f6.f1.f1", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f2, "g_429.f0.f6.f1.f2", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f3, "g_429.f0.f6.f1.f3", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f4, "g_429.f0.f6.f1.f4", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f5, "g_429.f0.f6.f1.f5", print_hash_value);
    transparent_crc(g_429.f0.f6.f1.f6, "g_429.f0.f6.f1.f6", print_hash_value);
    transparent_crc(g_429.f0.f6.f2, "g_429.f0.f6.f2", print_hash_value);
    transparent_crc(g_429.f0.f6.f3, "g_429.f0.f6.f3", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_477.f0, "g_477.f0", print_hash_value);
    transparent_crc(g_477.f1, "g_477.f1", print_hash_value);
    transparent_crc(g_531.f0, "g_531.f0", print_hash_value);
    transparent_crc(g_531.f1.f0, "g_531.f1.f0", print_hash_value);
    transparent_crc(g_531.f1.f1, "g_531.f1.f1", print_hash_value);
    transparent_crc(g_531.f1.f2, "g_531.f1.f2", print_hash_value);
    transparent_crc(g_531.f1.f3, "g_531.f1.f3", print_hash_value);
    transparent_crc(g_531.f1.f4, "g_531.f1.f4", print_hash_value);
    transparent_crc(g_531.f1.f5, "g_531.f1.f5", print_hash_value);
    transparent_crc(g_531.f1.f6, "g_531.f1.f6", print_hash_value);
    transparent_crc(g_531.f2, "g_531.f2", print_hash_value);
    transparent_crc(g_531.f3, "g_531.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_583[i], "g_583[i]", print_hash_value);

    }
    transparent_crc(g_584, "g_584", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_799[i][j][k], "g_799[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_808, "g_808", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_914[i][j][k], "g_914[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_974.f0, "g_974.f0", print_hash_value);
    transparent_crc(g_974.f1.f0, "g_974.f1.f0", print_hash_value);
    transparent_crc(g_974.f1.f1, "g_974.f1.f1", print_hash_value);
    transparent_crc(g_974.f1.f2, "g_974.f1.f2", print_hash_value);
    transparent_crc(g_974.f1.f3, "g_974.f1.f3", print_hash_value);
    transparent_crc(g_974.f1.f4, "g_974.f1.f4", print_hash_value);
    transparent_crc(g_974.f1.f5, "g_974.f1.f5", print_hash_value);
    transparent_crc(g_974.f1.f6, "g_974.f1.f6", print_hash_value);
    transparent_crc(g_974.f2, "g_974.f2", print_hash_value);
    transparent_crc(g_974.f3, "g_974.f3", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_1005.f0, "g_1005.f0", print_hash_value);
    transparent_crc(g_1005.f1, "g_1005.f1", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1279.f0, "g_1279.f0", print_hash_value);
    transparent_crc(g_1279.f1, "g_1279.f1", print_hash_value);
    transparent_crc(g_1361.f0, "g_1361.f0", print_hash_value);
    transparent_crc(g_1361.f1, "g_1361.f1", print_hash_value);
    transparent_crc(g_1361.f2, "g_1361.f2", print_hash_value);
    transparent_crc(g_1361.f3, "g_1361.f3", print_hash_value);
    transparent_crc(g_1361.f4, "g_1361.f4", print_hash_value);
    transparent_crc(g_1361.f5, "g_1361.f5", print_hash_value);
    transparent_crc(g_1361.f6, "g_1361.f6", print_hash_value);
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1436.f0.f0, "g_1436.f0.f0", print_hash_value);
    transparent_crc(g_1436.f0.f1, "g_1436.f0.f1", print_hash_value);
    transparent_crc(g_1436.f0.f2, "g_1436.f0.f2", print_hash_value);
    transparent_crc(g_1436.f0.f3, "g_1436.f0.f3", print_hash_value);
    transparent_crc(g_1436.f0.f4, "g_1436.f0.f4", print_hash_value);
    transparent_crc(g_1436.f0.f5, "g_1436.f0.f5", print_hash_value);
    transparent_crc(g_1436.f0.f6, "g_1436.f0.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1616[i], "g_1616[i]", print_hash_value);

    }
    transparent_crc(g_1694.f0, "g_1694.f0", print_hash_value);
    transparent_crc(g_1694.f1, "g_1694.f1", print_hash_value);
    transparent_crc(g_1694.f2, "g_1694.f2", print_hash_value);
    transparent_crc(g_1694.f3, "g_1694.f3", print_hash_value);
    transparent_crc(g_1694.f4, "g_1694.f4", print_hash_value);
    transparent_crc(g_1694.f5, "g_1694.f5", print_hash_value);
    transparent_crc(g_1694.f6, "g_1694.f6", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
