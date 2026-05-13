// SPDX-License-Identifier: MIT
// cctest_csmith_397bf388.c --- cctest case csmith_397bf388 (csmith seed 964424584)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe3c9d804 */

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

// Options:   -s 964424584 -o /tmp/csmith_gen_ox7nsram/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   const int32_t  f1;
   const int64_t  f2;
   int64_t  f3;
   uint64_t  f4;
};

union U1 {
   int16_t  f0;
   int32_t  f1;
};


static union U1 g_9[2][4][1] = {{{{0x779CL}},{{0x779CL}},{{0x779CL}},{{0x779CL}}},{{{0x779CL}},{{0x779CL}},{{0x779CL}},{{0x779CL}}}};
static int32_t g_21 = (-1L);
static uint8_t g_22 = 1UL;
static uint32_t g_48 = 0xDF123EFBL;
static uint8_t g_51 = 0xA9L;
static int16_t g_68 = 0x0DD0L;
static uint8_t g_83 = 0x0DL;
static struct S0 g_103 = {0x153C6A96L,-1L,-1L,0xE88EED364FFC8C37LL,18446744073709551612UL};
static int32_t g_112 = 3L;
static int32_t g_116 = 0L;
static uint32_t g_118 = 0xF0C11142L;
static int8_t g_148 = 0L;
static uint32_t g_160 = 18446744073709551615UL;



static struct S0  func_1(void);
static int64_t  func_4(union U1  p_5, int64_t  p_6, int32_t  p_7, int32_t  p_8);
static int64_t  func_23(uint32_t  p_24, union U1  p_25, struct S0  p_26, int32_t  p_27, struct S0  p_28);
static union U1  func_29(int64_t  p_30, const union U1  p_31, const int32_t  p_32);




static struct S0  func_1(void)
{ 
    int8_t l_10[5][3][5] = {{{(-2L),0x28L,0x28L,(-2L),0x07L},{(-1L),(-2L),6L,0x40L,0x40L},{0xC5L,(-2L),0xC5L,0x07L,(-2L)}},{{0x40L,0x28L,0x07L,0x40L,0x07L},{0x40L,0x40L,6L,(-2L),(-1L)},{0xC5L,(-1L),0x07L,0x07L,(-1L)}},{{(-1L),0x28L,0xC5L,(-1L),0x07L},{(-2L),(-1L),6L,0x07L,0x28L},{1L,0xC5L,6L,0x55L,0xC5L}},{{0x28L,6L,6L,0x28L,0x55L},{0x07L,0x28L,0x40L,0xC5L,0xC5L},{1L,0x28L,1L,0x55L,0x28L}},{{0xC5L,6L,0x55L,0xC5L,0x55L},{0xC5L,0xC5L,0x40L,0x28L,0x07L},{1L,0x07L,0x55L,0x55L,0x07L}}};
    uint32_t l_13 = 5UL;
    int32_t l_161 = (-5L);
    int32_t l_162 = (-5L);
    int i, j, k;
    l_162 ^= ((((l_161 = ((safe_sub_func_int64_t_s_s(func_4(g_9[1][0][0], l_10[2][0][2], g_9[1][0][0].f0, ((safe_rshift_func_int8_t_s_u(0x24L, 5)) , l_13)), g_160)) && l_13)) || l_10[2][0][2]) , 0x0105L) <= g_160);
    return g_103;
}



static int64_t  func_4(union U1  p_5, int64_t  p_6, int32_t  p_7, int32_t  p_8)
{ 
    uint32_t l_14[5][1] = {{0x1E2DB80EL},{0xBE360DE5L},{0x1E2DB80EL},{0xBE360DE5L},{0x1E2DB80EL}};
    int32_t l_15 = 0L;
    union U1 l_20 = {-1L};
    int32_t l_113 = (-1L);
    int32_t l_114 = 0x1CAF8AA5L;
    int32_t l_115 = 1L;
    int32_t l_117 = 0x337CDB55L;
    uint8_t l_149 = 0x18L;
    uint8_t l_151 = 0xBEL;
    int i, j;
    if ((((l_15 = (l_14[4][0] ^ ((((p_6 = p_7) | l_14[4][0]) == (-1L)) < 0xAFL))) , 0x74L) && 7UL))
    { 
        uint8_t l_33 = 7UL;
        int32_t l_111[4][1] = {{1L},{0xC76476FDL},{1L},{0xC76476FDL}};
        int i, j;
        g_112 = (safe_add_func_uint64_t_u_u((g_103.f4 = (l_111[3][0] = (safe_mod_func_int64_t_s_s(((l_20 , (g_22 = (g_21 = 6L))) , func_23(p_8, func_29(l_33, g_9[1][0][0], g_21), g_103, g_103.f4, g_103)), p_8)))), g_103.f2));
        g_118--;
    }
    else
    { 
        int32_t l_144 = 5L;
        int32_t l_152 = 0x5DF1CAE4L;
        for (l_114 = (-17); (l_114 >= (-30)); --l_114)
        { 
            uint32_t l_145 = 0x2F4ECBCEL;
            int32_t l_150[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_150[i][j] = (-2L);
            }
            l_152 = (((1UL <= (l_150[0][3] |= ((safe_div_func_uint64_t_u_u((((+(1L <= ((g_148 = (safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((((++g_103.f4) || ((safe_sub_func_int64_t_s_s((p_6 = ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((++l_145) | (0xA9L >= l_144)), g_103.f4)), 1)), 0xCCL)) ^ 255UL)), 0x4B031DE9004F7153LL)) ^ l_144)) ^ g_118), l_144)), p_7)) < l_144), 1))) | l_144))) == l_149) || g_51), (-1L))) > 0xC5361ACFDDCEC709LL))) <= g_118) < l_151);
        }
    }
    l_15 = (((((safe_mul_func_uint16_t_u_u(p_5.f0, (~251UL))) == ((safe_div_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((l_149 < g_103.f1), p_8)) && 0xBD2AF93AL) >= g_160), p_5.f0)) , p_7)) | 255UL) & p_8) | g_103.f4);
    return g_22;
}



static int64_t  func_23(uint32_t  p_24, union U1  p_25, struct S0  p_26, int32_t  p_27, struct S0  p_28)
{ 
    int64_t l_108 = 0x4350B5FE46E9995DLL;
    if (((safe_add_func_uint16_t_u_u(0x371AL, p_26.f2)) & (safe_sub_func_uint64_t_u_u((4294967289UL <= (p_25 , p_26.f0)), g_83))))
    { 
        l_108 ^= p_26.f4;
    }
    else
    { 
        for (p_24 = 0; (p_24 != 42); p_24++)
        { 
            if (g_103.f4)
                break;
        }
    }
    return g_103.f3;
}



static union U1  func_29(int64_t  p_30, const union U1  p_31, const int32_t  p_32)
{ 
    uint32_t l_47 = 6UL;
    int32_t l_67 = 9L;
    for (g_22 = 0; (g_22 <= 0); g_22 += 1)
    { 
        const int8_t l_39 = 0x42L;
        int32_t l_50 = 0x86E6AF57L;
        int32_t l_66[1];
        uint8_t l_78 = 0x3BL;
        int32_t l_79 = 0xDFE816D3L;
        int i;
        for (i = 0; i < 1; i++)
            l_66[i] = (-1L);
        for (p_30 = 0; (p_30 >= 0); p_30 -= 1)
        { 
            return p_31;
        }
        if (g_21)
        { 
            union U1 l_34 = {8L};
            g_48 &= (((l_34 , ((((safe_add_func_uint16_t_u_u((((l_34 , (l_47 = (((safe_lshift_func_int8_t_s_s(l_39, (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u((8UL || 0x9018L), p_30)))) > p_30) != l_34.f0) >= g_21), p_30)), l_39)) ^ p_30) & p_30))) , l_34.f0) , 0x7B1DL))) , 0UL) && l_47), g_21)) , 0x48L) <= 0x58L) < 0x4FL)) , l_39) > l_34.f0);
        }
        else
        { 
            uint32_t l_49 = 0x20C2888AL;
            l_49 = 0x21A0E57CL;
            g_51++;
            if (p_30)
                continue;
        }
        g_68 &= (((((g_22 && ((l_67 = ((safe_mul_func_int8_t_s_s(g_22, ((safe_mod_func_uint8_t_u_u((l_66[0] = ((safe_mod_func_int32_t_s_s(p_32, (safe_div_func_uint32_t_u_u((l_50 = ((safe_mod_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((((((((p_31.f0 > l_39) <= l_47) == (-1L)) ^ 0x0B10F657L) < p_32) <= 0x7774L) && l_47), g_21)) && 2UL), 18446744073709551615UL)) ^ p_31.f0)), p_32)))) & 0x3B00L)), l_39)) <= l_47))) >= 1L)) >= l_47)) > 0xA07FL) <= p_30) >= 0x6DE3FE27FCE2E644LL) > 0xAE891756L);
        for (l_47 = 0; (l_47 <= 0); l_47 += 1)
        { 
            struct S0 l_101 = {0xC0DA3939L,0x282F80E5L,1L,6L,1UL};
            int32_t l_102 = 0x121EC5D8L;
            for (g_68 = 0; (g_68 <= 0); g_68 += 1)
            { 
                uint8_t l_80 = 1UL;
                l_80 ^= (4294967295UL ^ ((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((((((safe_mul_func_int16_t_s_s(p_32, ((safe_rshift_func_int8_t_s_s(l_47, ((safe_unary_minus_func_uint64_t_u(l_66[0])) < g_48))) , (-3L)))) | 0x02F9L) || l_78) ^ p_30) && l_39) > p_30) && l_79), l_47)), g_9[1][0][0].f0)) & 0x230FEFE548C15133LL));
            }
            for (p_30 = 0; (p_30 >= 0); p_30 -= 1)
            { 
                struct S0 l_100[2][5] = {{{18446744073709551606UL,4L,0x5DFC961BCE71E83BLL,0L,0xCA30E3E679C8A6F1LL},{18446744073709551606UL,4L,0x5DFC961BCE71E83BLL,0L,0xCA30E3E679C8A6F1LL},{18446744073709551606UL,4L,0x5DFC961BCE71E83BLL,0L,0xCA30E3E679C8A6F1LL},{18446744073709551606UL,4L,0x5DFC961BCE71E83BLL,0L,0xCA30E3E679C8A6F1LL},{18446744073709551606UL,4L,0x5DFC961BCE71E83BLL,0L,0xCA30E3E679C8A6F1LL}},{{0x047EB93DL,-1L,1L,-6L,0x371577CD18324626LL},{0x047EB93DL,-1L,1L,-6L,0x371577CD18324626LL},{0x047EB93DL,-1L,1L,-6L,0x371577CD18324626LL},{0x047EB93DL,-1L,1L,-6L,0x371577CD18324626LL},{0x047EB93DL,-1L,1L,-6L,0x371577CD18324626LL}}};
                int i, j;
                l_102 = ((safe_lshift_func_uint16_t_u_s((g_83++), ((((safe_add_func_uint8_t_u_u(l_47, g_9[1][0][0].f0)) | (safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((((l_100[0][0] , l_101) , 0xD3D223BFL) > 0x35A7B369L) && p_32) != 1UL), l_101.f2)), l_67)), 0x51AC0D59L)) || g_48), g_48)), l_101.f0))) >= l_100[0][0].f3) < 0L))) & p_30);
            }
        }
    }
    return g_9[0][1][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_9[i][j][k].f0, "g_9[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
