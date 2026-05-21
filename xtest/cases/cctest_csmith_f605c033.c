// SPDX-License-Identifier: MIT
// cctest_csmith_f605c033.c --- cctest case csmith_f605c033 (csmith seed 4127572019)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd09072b7 */

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

// Options:   -s 4127572019 -o /tmp/csmith_gen_49vmj0ap/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   int16_t  f1;
   int32_t  f2;
   const uint8_t  f3;
   uint64_t  f4;
};

union U1 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   struct S0  f3;
};

union U2 {
   uint64_t  f0;
   int64_t  f1;
};

union U3 {
   uint16_t  f0;
   uint16_t  f1;
   struct S0  f2;
};

union U4 {
   int16_t  f0;
};

union U5 {
   int32_t  f0;
   const int8_t  f1;
};

union U6 {
   uint8_t  f0;
};

union U8 {
   const uint32_t  f0;
   int64_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};

union U10 {
   struct S0  f0;
   uint32_t  f1;
};


static int32_t g_7[1] = {(-1L)};
static int32_t g_10 = 5L;
static union U3 g_45 = {0xCB4EL};
static int16_t g_46 = 0xCE5AL;
static int16_t g_51 = 9L;
static uint32_t g_54 = 0UL;
static uint16_t g_89 = 0xB9F6L;
static int32_t g_95 = 0x043A4231L;
static int8_t g_96 = 0L;
static int32_t g_108[4][4] = {{0x912EB575L,0x912EB575L,0x8AC094E5L,0x912EB575L},{0x912EB575L,0x6F8AA410L,0x6F8AA410L,0x912EB575L},{0x6F8AA410L,0x912EB575L,0x6F8AA410L,0x6F8AA410L},{0x912EB575L,0x912EB575L,0x8AC094E5L,0x912EB575L}};
static int16_t g_111 = 1L;
static uint16_t g_116 = 65531UL;
static union U6 g_119 = {247UL};
static uint64_t g_120[3][5][5] = {{{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL}},{{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL}},{{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL},{0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL,0x461874A806017AB3LL}}};
static int32_t g_123 = (-2L);
static union U4 g_131 = {0x2989L};
static uint32_t g_184 = 0x71B9F5DDL;
static int32_t g_187 = 0x11399164L;
static int32_t g_190 = 3L;
static int32_t g_191 = 0x9BF0741CL;
static int8_t g_192[2][2] = {{1L,1L},{1L,1L}};
static uint8_t g_193 = 0x5DL;
static uint32_t g_214 = 4294967290UL;
static int8_t g_221 = (-1L);
static uint16_t g_222 = 0UL;
static union U6 g_225 = {1UL};
static uint16_t g_268 = 8UL;



static const union U8  func_1(void);
static int16_t  func_24(const uint16_t  p_25, union U4  p_26, const union U4  p_27, int64_t  p_28);
static union U6  func_34(uint64_t  p_35, uint32_t  p_36);
static int8_t  func_39(union U3  p_40, int32_t  p_41, uint64_t  p_42, union U10  p_43, union U4  p_44);




static const union U8  func_1(void)
{ 
    uint8_t l_2 = 0xFBL;
    int32_t l_16 = (-1L);
    uint32_t l_23[2][1];
    int32_t l_238[1][4][2] = {{{7L,7L},{7L,7L},{7L,7L},{7L,7L}}};
    union U10 l_249 = {{0x80B83B8E8A177C5ELL,9L,0L,0UL,0x0909C1F5AF660AC8LL}};
    uint32_t l_257 = 1UL;
    const uint8_t l_269[3] = {0x5AL,0x5AL,0x5AL};
    const union U8 l_270 = {7UL};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_23[i][j] = 1UL;
    }
lbl_226:
    l_2++;
lbl_252:
    for (l_2 = 21; (l_2 != 26); l_2 = safe_add_func_int8_t_s_s(l_2, 5))
    { 
        uint64_t l_13[5][2] = {{0xDE4BF748DC164F94LL,0UL},{0xDE4BF748DC164F94LL,0UL},{0xDE4BF748DC164F94LL,0UL},{0xDE4BF748DC164F94LL,0UL},{0xDE4BF748DC164F94LL,0UL}};
        const union U4 l_31 = {-1L};
        int i, j;
        for (g_7[0] = (-10); (g_7[0] > 29); g_7[0] = safe_add_func_uint64_t_u_u(g_7[0], 5))
        { 
            const uint16_t l_29 = 65531UL;
            for (g_10 = 0; (g_10 >= (-3)); g_10 = safe_sub_func_int16_t_s_s(g_10, 6))
            { 
                if (l_13[2][0])
                    break;
            }
            for (g_10 = 0; (g_10 == (-4)); g_10 = safe_sub_func_uint64_t_u_u(g_10, 7))
            { 
                int16_t l_22 = 0x2B62L;
                union U4 l_30 = {0xA388L};
                l_16 = g_7[0];
                g_187 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((~(l_23[1][0] = l_22)), 3)), func_24(l_29, l_30, l_31, g_7[0]))) & 0UL);
                if (g_184)
                    goto lbl_226;
            }
        }
    }
    if ((l_238[0][0][1] = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((l_23[1][0] >= l_23[1][0]) , (l_16 = ((((safe_sub_func_uint16_t_u_u(l_23[1][0], (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((g_46 | 0x73DF663DL))), 3)))) & l_23[1][0]) ^ 0x9E70L) & g_51))), 0x92C08DF405B1DA0ALL)), l_23[1][0])) ^ 1UL), l_2))))
    { 
        union U4 l_239[1][5] = {{{-7L},{-7L},{-7L},{-7L},{-7L}}};
        int i, j;
        g_7[0] = (l_239[0][4] , 0xBFD40105L);
    }
    else
    { 
        uint8_t l_250 = 0x30L;
        int32_t l_251 = (-1L);
        l_238[0][0][0] &= (((((safe_mod_func_uint16_t_u_u(((g_45.f2.f4 = g_95) & (g_120[1][3][2] = (safe_mul_func_uint8_t_u_u(249UL, ((safe_unary_minus_func_uint8_t_u(((safe_add_func_int32_t_s_s((g_7[0] = ((safe_lshift_func_uint16_t_u_s(((l_250 = ((g_46 < (l_249 , g_123)) | (-3L))) ^ l_16), g_108[1][1])) != g_108[1][1])), l_251)) <= g_221))) , 0UL))))), 0xCFE6L)) , g_51) , g_45.f1) , g_193) ^ l_251);
        if (g_45.f1)
            goto lbl_252;
        if ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(l_249.f0.f3, 5)), l_257)))
        { 
            uint16_t l_258 = 1UL;
            g_187 = (l_258 != ((((safe_add_func_uint16_t_u_u(g_225.f0, 0xAC70L)) > (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((!((safe_sub_func_int64_t_s_s((g_268 &= l_249.f0.f0), l_249.f0.f0)) || 0x80F592F2L)), g_120[2][4][4])), l_269[0]))) >= l_249.f0.f0) > 1UL));
        }
        else
        { 
            return l_270;
        }
    }
    return l_270;
}



static int16_t  func_24(const uint16_t  p_25, union U4  p_26, const union U4  p_27, int64_t  p_28)
{ 
    int16_t l_50 = 6L;
    int32_t l_53 = 0x68AB8AC2L;
    union U10 l_60 = {{0xC41177734166DA9ALL,0L,0xAE4D7D9CL,0x4EL,18446744073709551612UL}};
    union U4 l_61 = {-1L};
    for (p_26.f0 = 0; (p_26.f0 != 28); p_26.f0++)
    { 
        int64_t l_49 = 1L;
        int32_t l_52 = 4L;
        union U8 l_57 = {18446744073709551606UL};
        l_52 = (func_34((safe_div_func_int8_t_s_s(func_39(g_45, (g_46 = 0xEDE5C489L), ((safe_add_func_int8_t_s_s(((g_54--) ^ ((((l_57 , (safe_lshift_func_uint16_t_u_u((l_52 == p_25), 6))) > (-5L)) < p_27.f0) <= 0x2309L)), g_7[0])) > p_25), l_60, l_61), g_7[0])), p_26.f0) , l_60.f0.f1);
    }
    return l_60.f0.f4;
}



static union U6  func_34(uint64_t  p_35, uint32_t  p_36)
{ 
    int16_t l_83 = 0x2A0CL;
    int32_t l_84 = 4L;
    int16_t l_85 = 0x3BEAL;
    union U1 l_100[2] = {{-10L},{-10L}};
    int32_t l_113 = 0xAE4FB5D9L;
    union U4 l_132 = {0x0625L};
    int8_t l_166 = 0x55L;
    int i;
lbl_219:
    if ((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(l_83, 2)) < (-1L)), ((l_84 = (g_45.f2.f0 = l_83)) && ((l_85 | (-4L)) < g_54)))) & l_85) != g_7[0]))
    { 
        struct S0 l_97 = {-1L,0x71EDL,-1L,255UL,0x07A49E812ED69965LL};
        int32_t l_101 = 0xFBC3860FL;
        int32_t l_102 = 9L;
        for (l_84 = (-8); (l_84 > (-12)); --l_84)
        { 
            union U2 l_88[2][4][3] = {{{{0xA6DD691D5B906699LL},{0xA6DD691D5B906699LL},{18446744073709551615UL}},{{0x50E9BCC685A4B520LL},{0xD4008F4F80CF873ALL},{1UL}},{{0xA6DD691D5B906699LL},{0xA6DD691D5B906699LL},{18446744073709551615UL}},{{0x50E9BCC685A4B520LL},{0xD4008F4F80CF873ALL},{1UL}}},{{{0xA6DD691D5B906699LL},{0xA6DD691D5B906699LL},{18446744073709551615UL}},{{0x50E9BCC685A4B520LL},{0xD4008F4F80CF873ALL},{1UL}},{{0xA6DD691D5B906699LL},{0xA6DD691D5B906699LL},{18446744073709551615UL}},{{0x50E9BCC685A4B520LL},{0xD4008F4F80CF873ALL},{1UL}}}};
            int i, j, k;
            for (l_83 = 0; (l_83 <= 1); l_83 += 1)
            { 
                uint8_t l_92 = 255UL;
                g_89++;
                if (l_92)
                    break;
            }
            g_95 |= (safe_rshift_func_uint8_t_u_s(0x4BL, 7));
        }
        g_96 = g_45.f0;
        l_102 = (l_97 , ((l_101 = ((g_45.f2.f4 = (((safe_rshift_func_uint8_t_u_u(g_89, 7)) , (l_100[0] , 5UL)) || g_7[0])) >= p_35)) == l_83));
    }
    else
    { 
        int16_t l_112 = 7L;
        int32_t l_114 = 1L;
        int32_t l_115 = 0x5CA7D7ACL;
        for (p_35 = (-1); (p_35 <= 29); p_35 = safe_add_func_uint16_t_u_u(p_35, 3))
        { 
            uint16_t l_105[5] = {65527UL,65527UL,65527UL,65527UL,65527UL};
            int32_t l_106 = 0x881B111DL;
            int32_t l_107 = (-1L);
            int32_t l_109[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_109[i][j] = 0x6E4F4142L;
            }
            for (g_45.f2.f1 = 1; (g_45.f2.f1 <= 4); g_45.f2.f1 += 1)
            { 
                int32_t l_110 = 8L;
                g_116--;
                return g_119;
            }
        }
        for (g_119.f0 = 0; (g_119.f0 <= 3); g_119.f0 += 1)
        { 
            l_84 = g_111;
            for (g_45.f2.f1 = 3; (g_45.f2.f1 >= 0); g_45.f2.f1 -= 1)
            { 
                int i, j;
                ++g_120[1][3][2];
                if (g_108[g_119.f0][g_119.f0])
                    continue;
            }
        }
        g_123 ^= 0L;
    }
    for (g_45.f2.f4 = 0; (g_45.f2.f4 <= 2); g_45.f2.f4 += 1)
    { 
        const uint32_t l_124 = 0xCF22293CL;
        int32_t l_135[4];
        int32_t l_153 = (-1L);
        int32_t l_185 = 0x23EF36B2L;
        int i;
        for (i = 0; i < 4; i++)
            l_135[i] = (-1L);
        l_135[1] = ((l_124 < (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((((((l_132 = g_131) , (safe_lshift_func_int8_t_s_s(5L, 2))) < (0L ^ g_46)) | 0xD6AEL) == g_120[0][3][1]) != p_36), 0x15L)), g_120[2][0][4])), 0x35L))) , p_35);
        for (g_116 = 0; (g_116 <= 3); g_116 += 1)
        { 
            int32_t l_154[3];
            uint32_t l_155 = 18446744073709551609UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_154[i] = (-1L);
            if (g_108[g_116][g_116])
                break;
            l_135[1] = (!((l_154[0] = (g_123 && (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((0x5387F91F76D5A1B7LL >= ((safe_sub_func_uint64_t_u_u((p_35 &= ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u(p_36, (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(g_120[2][0][4], p_36)), 6)))), l_135[0])), p_36)) ^ l_153)), g_46)) , 0x7CE4AD85202676B6LL)) | 5L), l_113)), g_108[g_116][g_116])))) >= l_155));
            l_153 = ((safe_mul_func_int16_t_s_s(p_36, (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((g_96 = ((l_113 != (safe_mul_func_int16_t_s_s((g_131.f0 = g_51), (-6L)))) , l_100[0].f0)), g_108[3][2])), l_166)), (-3L))))) > (-1L));
            for (g_131.f0 = 2; (g_131.f0 >= 0); g_131.f0 -= 1)
            { 
                int i, j, k;
                if (p_36)
                    break;
                if (g_10)
                    continue;
            }
        }
        l_135[2] = g_7[0];
        for (g_123 = 2; (g_123 >= 0); g_123 -= 1)
        { 
            uint16_t l_186 = 0xF448L;
            int32_t l_188 = 1L;
            int32_t l_189[3][3][3] = {{{0x583338DEL,0xDD9FAC99L,0x583338DEL},{(-4L),0x779D1108L,(-4L)},{0x583338DEL,0xDD9FAC99L,0x583338DEL}},{{(-4L),0x779D1108L,(-4L)},{0x583338DEL,0xDD9FAC99L,0x583338DEL},{(-4L),0x779D1108L,(-4L)}},{{0x583338DEL,0xDD9FAC99L,0x583338DEL},{(-4L),0x779D1108L,(-4L)},{0x583338DEL,0xDD9FAC99L,0x583338DEL}}};
            int32_t l_220 = 6L;
            int i, j, k;
            l_135[0] = ((safe_mul_func_uint16_t_u_u((((!((safe_mul_func_int16_t_s_s(((l_100[0] , ((((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int16_t_s((g_7[0] , (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_185 = (safe_lshift_func_int8_t_s_s((((g_108[1][1] , (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(((g_45 , g_184) >= l_135[1]), g_45.f1)) , l_135[1]), 2))) > l_166) | 0x24FAL), 1))), l_166)), 0xB0A8L))))))) & 4294967287UL) <= 0L) , g_54)) || l_186), l_132.f0)) , 0xBFC7E325L)) > p_35) ^ 0x68C6BBB4891D5C63LL), g_45.f1)) || 0x3965C3E6L);
            ++g_193;
            if ((1L == (safe_sub_func_uint8_t_u_u(l_189[0][2][1], (safe_mul_func_uint16_t_u_u((2UL | ((safe_rshift_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0x6FL, g_7[0])) > 0UL), 0)), g_10)), 5)), p_35)) ^ l_132.f0) ^ p_35) > g_46), 6)) >= g_192[0][1])), 1L))))))
            { 
                int64_t l_212 = 0xC764A6B6FD115CA3LL;
                int32_t l_213[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_213[i] = 0x7B0B943BL;
                g_214--;
                if (g_7[0])
                    break;
                if (g_119.f0)
                    break;
            }
            else
            { 
                g_190 = (((safe_rshift_func_uint8_t_u_u((l_100[0].f2 = (l_135[1] <= ((0L == (4UL == p_35)) > 1UL))), 2)) != 255UL) & 0xFDF3L);
                l_100[0].f2 &= 0L;
            }
            for (g_89 = 0; (g_89 <= 2); g_89 += 1)
            { 
                if (g_119.f0)
                    goto lbl_219;
                g_222++;
                l_188 = l_135[1];
            }
        }
    }
    return g_225;
}



static int8_t  func_39(union U3  p_40, int32_t  p_41, uint64_t  p_42, union U10  p_43, union U4  p_44)
{ 
    int8_t l_72[1][5] = {{(-5L),(-5L),(-5L),(-5L),(-5L)}};
    union U5 l_76 = {0x8A068CF1L};
    int8_t l_77 = 0xB8L;
    int32_t l_78[4] = {0x2A59A03CL,0x2A59A03CL,0x2A59A03CL,0x2A59A03CL};
    int i, j;
    for (g_45.f2.f1 = (-13); (g_45.f2.f1 == (-12)); ++g_45.f2.f1)
    { 
        int16_t l_73 = 0xA9A4L;
        uint32_t l_74 = 0x8C4B5077L;
        int32_t l_75[1];
        int i;
        for (i = 0; i < 1; i++)
            l_75[i] = 0L;
        l_75[0] &= (((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((l_73 = l_72[0][2]) != (p_40.f0 = g_45.f1)), p_42)), 2UL)) | 7UL), g_51)) == p_43.f0.f1) && p_41), l_74)) >= g_46) >= g_10);
    }
    l_78[1] = (l_76 , l_77);
    return p_44.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_108[i][j], "g_108[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_120[i][j][k], "g_120[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_192[i][j], "g_192[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
