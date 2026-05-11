// SPDX-License-Identifier: MIT
// cctest_csmith_5933ea04.c --- cctest case csmith_5933ea04 (csmith seed 1496574468)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x935f1e21 */

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

// Options:   -s 1496574468 -o /tmp/csmith_gen_xebjzi4d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 16;
   signed f1 : 5;
   unsigned f2 : 19;
   unsigned f3 : 19;
   const signed f4 : 22;
};

union U1 {
   const int32_t  f0;
};


static struct S0 g_18[3] = {{178,-4,616,10,-1663},{178,-4,616,10,-1663},{178,-4,616,10,-1663}};
static const union U1 g_25 = {0x04204102L};
static uint32_t g_52 = 4294967292UL;
static int64_t g_53 = 1L;
static int16_t g_54[4][5] = {{0xB613L,0x7069L,0xB613L,(-1L),(-1L)},{0x144DL,0xD709L,0x144DL,1L,1L},{0xB613L,0x7069L,0xB613L,(-1L),(-1L)},{0x144DL,0xD709L,0x144DL,1L,1L}};
static uint8_t g_56 = 252UL;
static uint16_t g_93 = 9UL;
static uint16_t g_187 = 65533UL;
static uint32_t g_238[5][4][5] = {{{1UL,0x68785947L,4294967295UL,0x49DE4D3EL,0xF87870E3L},{1UL,4294967295UL,3UL,1UL,1UL},{0xF87870E3L,0x1B0F9FA3L,0xF87870E3L,0x459FD89EL,0UL},{0x53FAB730L,0x73313E7CL,0x913CB2BFL,3UL,1UL}},{{0x1B0F9FA3L,0UL,0UL,0x459FD89EL,0xF7684E16L},{0xD89197F5L,0x0369643DL,0x73313E7CL,4294967295UL,4294967295UL},{0xF87870E3L,0UL,0UL,0UL,0UL},{3UL,4294967293UL,1UL,0xB296F204L,4294967295UL}},{{0x5A5B2702L,0x68785947L,0x53B413ECL,0xB44177A3L,0x49DE4D3EL},{0x73313E7CL,0x996FE7B0L,1UL,0xD89197F5L,0x351D0449L},{0x5A5B2702L,0UL,0x459FD89EL,0xF87870E3L,0x1B0F9FA3L},{3UL,0x0280CFF7L,0x0280CFF7L,3UL,1UL}},{{0xF87870E3L,0x459FD89EL,0UL,0x5A5B2702L,0x8E2E1F9CL},{0xD89197F5L,1UL,0x996FE7B0L,0x73313E7CL,3UL},{0xB44177A3L,0x53B413ECL,0x68785947L,0x5A5B2702L,4294967289UL},{0xB296F204L,1UL,4294967293UL,3UL,4294967293UL}},{{0UL,0UL,0UL,0xF87870E3L,0x53B413ECL},{4294967295UL,0x73313E7CL,0x0369643DL,0xD89197F5L,3UL},{0x459FD89EL,0xF4FF7079L,0x0386AEEFL,0xB44177A3L,1UL},{1UL,0x73313E7CL,0UL,0xB296F204L,0x996FE7B0L}}};
static int8_t g_285 = (-1L);
static uint64_t g_317 = 0x2C8B339EBD8DD007LL;
static uint8_t g_318[2][5] = {{0x7DL,7UL,0x7DL,0x48L,0x48L},{0x7DL,7UL,0x7DL,0x48L,0x48L}};
static int16_t g_332 = 0L;
static uint32_t g_343 = 0xC6081798L;
static uint32_t g_346 = 4294967295UL;



static uint32_t  func_1(void);
static uint32_t  func_4(uint64_t  p_5, union U1  p_6, struct S0  p_7);
static uint32_t  func_19(const union U1  p_20, struct S0  p_21, int8_t  p_22, int16_t  p_23, uint8_t  p_24);
static struct S0  func_26(int32_t  p_27, uint32_t  p_28);




static uint32_t  func_1(void)
{ 
    int8_t l_14 = 0xE7L;
    union U1 l_17 = {-1L};
    if (((safe_mod_func_uint32_t_u_u(0x214C405BL, func_4(((safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((l_14 == (0x864BL < (safe_lshift_func_int16_t_s_u(l_14, l_14)))), 0x45C1D102L)), l_14)) & 0L), l_17, g_18[2]))) ^ 0UL))
    { 
        const uint8_t l_323 = 1UL;
        int32_t l_342[4][4][4] = {{{0xDEFED59EL,0L,4L,0x8F6B505EL},{(-1L),(-1L),4L,0L},{0xDEFED59EL,(-1L),0x6B2FD4DCL,8L},{0x8FEF89A3L,0xC0675523L,1L,1L}},{{1L,1L,0xC0675523L,0x8FEF89A3L},{8L,0x6B2FD4DCL,(-1L),0xDEFED59EL},{0L,4L,(-1L),(-1L)},{0x8F6B505EL,4L,0L,0xDEFED59EL}},{{4L,0x6B2FD4DCL,0x8F6B505EL,0x8FEF89A3L},{0x468218E0L,1L,5L,1L},{(-8L),0xC0675523L,0xDEFED59EL,8L},{0L,(-1L),0x6FBCDAFEL,0L}},{{5L,(-1L),0xCB4F8539L,0x8F6B505EL},{5L,0L,0x6FBCDAFEL,4L},{0L,0x8F6B505EL,0xDEFED59EL,0x468218E0L},{(-8L),5L,5L,(-8L)}}};
        int i, j, k;
        for (l_14 = 0; (l_14 != 18); l_14++)
        { 
            int16_t l_344 = 0L;
            if (g_18[2].f0)
            { 
                g_18[2].f1 = (safe_div_func_uint16_t_u_u(g_54[1][0], g_187));
                if (l_323)
                    break;
                g_332 = ((safe_rshift_func_uint8_t_u_u(((l_14 >= (((safe_div_func_uint64_t_u_u((g_317 = (0x16C8E1A1L >= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((0L >= 0xEFE8F5AFL) < l_323), g_18[2].f3)), 1)))), 18446744073709551610UL)) != g_93) , 3UL)) || g_18[2].f4), g_238[1][3][4])) | g_318[0][0]);
            }
            else
            { 
                int8_t l_345 = 0x59L;
                g_18[2].f1 &= l_323;
                g_343 |= (!(((safe_mod_func_int8_t_s_s((0UL || ((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0x53L == ((l_342[3][1][3] = 0xD604E956L) , 0x71L)), 3L)), 0UL)), g_18[2].f1)) <= g_285)), 255UL)) <= (-1L)) <= g_317));
                --g_346;
            }
        }
    }
    else
    { 
        int16_t l_349 = 0xBD54L;
        int32_t l_360 = 1L;
        g_18[2].f1 = (l_349 > ((((safe_mod_func_uint64_t_u_u(g_93, (safe_rshift_func_uint16_t_u_s((g_187 |= (safe_add_func_int32_t_s_s((((g_54[1][0] = (safe_div_func_int64_t_s_s((g_53 = (((safe_add_func_int64_t_s_s((g_54[1][0] < l_360), 0xF62C58C6798C4C04LL)) && 0x4F5CE1E3A921E9CBLL) , g_54[1][0])), 0x7F7FB4EBCAFB7451LL))) | 65535UL) < g_93), 0UL))), 11)))) > l_349) | l_349) > 5UL));
    }
    return l_17.f0;
}



static uint32_t  func_4(uint64_t  p_5, union U1  p_6, struct S0  p_7)
{ 
    uint32_t l_36 = 18446744073709551613UL;
    int32_t l_37 = (-1L);
    int32_t l_38 = (-1L);
    uint32_t l_287 = 0xE05B0D0CL;
    int32_t l_308[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_308[i][j] = (-6L);
    }
lbl_246:
    g_18[2].f1 = (func_19(g_25, func_26(((g_18[2] , ((l_38 |= (((safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((~(safe_add_func_uint64_t_u_u((g_25.f0 , 0x25423B19D88C83B9LL), l_36))), 0xAE07L)) | l_37), g_25.f0)) , p_7.f0) >= p_7.f0)) < (-1L))) >= l_36), g_25.f0), g_18[2].f3, l_37, g_18[2].f4) | (-1L));
    for (g_93 = (-15); (g_93 >= 34); ++g_93)
    { 
        uint16_t l_241 = 65533UL;
        int32_t l_242[2][5][5] = {{{(-7L),0xE4EA202BL,0xE4EA202BL,(-7L),0xE4EA202BL},{(-7L),(-7L),(-3L),(-7L),(-7L)},{0xE4EA202BL,(-7L),0xE4EA202BL,0xE4EA202BL,(-7L)},{(-7L),0xE4EA202BL,0xE4EA202BL,(-7L),0xE4EA202BL},{(-7L),(-7L),(-3L),(-7L),(-7L)}},{{0xE4EA202BL,(-7L),0xE4EA202BL,0xE4EA202BL,(-7L)},{(-7L),0xE4EA202BL,0xE4EA202BL,(-7L),0xE4EA202BL},{(-7L),(-7L),(-3L),(-7L),(-7L)},{(-3L),0xE4EA202BL,(-3L),(-3L),0xE4EA202BL},{0xE4EA202BL,(-3L),(-3L),0xE4EA202BL,(-3L)}}};
        int32_t l_243 = 0xF990C31AL;
        uint64_t l_279 = 0xDB9C2B1DA7329BD3LL;
        int i, j, k;
        if ((g_18[1] , ((safe_sub_func_int32_t_s_s(((l_243 = (safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((g_238[4][1][4] &= g_25.f0), ((safe_mul_func_uint16_t_u_u((g_187 = (((l_241 = l_36) , (l_242[1][2][4] = (0xA7616D2739A248FCLL && 18446744073709551615UL))) && g_54[3][3])), 65529UL)) >= (-8L)))) ^ p_6.f0) , g_238[4][1][4]), 3))) , g_18[2].f1), 0L)) <= 8L)))
        { 
            for (l_243 = 0; (l_243 >= 26); l_243++)
            { 
                p_7.f1 |= p_7.f3;
            }
        }
        else
        { 
            p_7.f1 = p_5;
            if (l_36)
                goto lbl_246;
        }
        for (g_56 = 0; (g_56 != 48); g_56 = safe_add_func_int8_t_s_s(g_56, 1))
        { 
            int32_t l_259 = 1L;
            int8_t l_262 = 0xC4L;
            for (l_38 = 20; (l_38 != (-1)); l_38--)
            { 
                uint64_t l_261 = 1UL;
                int32_t l_263 = (-1L);
                p_7.f1 = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((((((((safe_mul_func_int16_t_s_s(((safe_mul_func_int32_t_s_s((g_18[2].f1 = g_187), ((((((l_259 ^ (g_56 , (+(l_261 & g_18[2].f2)))) != g_18[2].f0) != 0xCBL) <= g_56) > l_38) >= 2L))) < l_242[1][2][2]), g_238[4][1][4])) <= l_262) && l_263) , 4294967291UL) ^ 0x354AC34EL) && 0x66FA5968L) <= (-1L)) & l_36), 11)) ^ g_25.f0), l_263));
            }
        }
        for (l_241 = 0; (l_241 <= 3); l_241 += 1)
        { 
            uint32_t l_280 = 18446744073709551615UL;
            p_7.f1 = (-1L);
            for (l_38 = 3; (l_38 >= 0); l_38 -= 1)
            { 
                int32_t l_278 = 0x1CAC8D62L;
                int i, j;
                g_18[2].f1 = ((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((0L == (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((l_279 = (0x50EF8E2CL | (safe_sub_func_int8_t_s_s((((g_54[l_241][(l_241 + 1)] || (safe_rshift_func_uint8_t_u_s((l_278 = ((l_242[0][2][4] |= l_243) , 247UL)), p_7.f1))) , p_7) , 0x04L), 0xBCL)))), 7)), 0))) && g_18[2].f4) == l_280), 2)), 0x30D7L)), (-1L))) , 0xE39112D3L);
            }
        }
    }
    for (g_52 = 0; (g_52 <= 3); g_52 += 1)
    { 
        uint32_t l_281 = 4294967295UL;
        int32_t l_284 = 0xC72399D5L;
        int32_t l_286 = 0x8831052EL;
        int16_t l_296[3];
        int i;
        for (i = 0; i < 3; i++)
            l_296[i] = (-2L);
        ++l_281;
        for (p_5 = 0; (p_5 <= 3); p_5 += 1)
        { 
            int32_t l_309 = (-7L);
            uint32_t l_316 = 0xB9D344B9L;
            ++l_287;
            g_18[2].f1 ^= ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((l_296[0] , (safe_add_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_7.f1, (+((g_25.f0 < (safe_div_func_uint8_t_u_u(((l_308[0][0] &= ((safe_rshift_func_uint8_t_u_s((l_38 &= (safe_sub_func_int32_t_s_s(g_187, 4294967295UL))), 1)) > 0x6EF4L)) != l_309), g_25.f0))) <= 0x7664DF74A3EB68EFLL)))) < p_7.f1), g_54[2][2]))) && g_54[2][0]), p_7.f3)), g_238[0][3][4])) & p_5), g_25.f0)) > l_296[0]);
            if (p_7.f0)
            { 
                int64_t l_315 = 0L;
                p_7.f1 = (safe_rshift_func_uint8_t_u_s(p_7.f2, ((g_53 = ((safe_sub_func_uint64_t_u_u(0x7DE6D6B87803D3D6LL, (((-4L) && (((!l_315) ^ g_187) , 0xB6C6L)) <= p_7.f1))) | p_6.f0)) >= l_315)));
                if (l_316)
                    break;
            }
            else
            { 
                return g_18[2].f4;
            }
            for (g_93 = 0; (g_93 <= 3); g_93 += 1)
            { 
                g_317 = ((0xD0CBDD73L | (((((((g_18[2].f1 |= (((((l_309 > ((((g_25 , 0xC0E6L) >= 65535UL) > p_7.f2) | l_316)) != 1L) | 0UL) & 0xFFL) ^ g_18[2].f4)) || l_309) == (-1L)) <= l_316) , g_238[4][1][4]) | p_7.f1) & (-1L))) || 0x46L);
            }
        }
    }
    return g_318[0][0];
}



static uint32_t  func_19(const union U1  p_20, struct S0  p_21, int8_t  p_22, int16_t  p_23, uint8_t  p_24)
{ 
    int8_t l_227 = 1L;
    const uint64_t l_228 = 0UL;
    int32_t l_229 = 0x8F83BE11L;
    g_18[2].f1 = (l_229 = (((((g_53 && (p_24 | (0xF9F1FBD920C650B9LL <= ((safe_add_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(4294967295UL, l_227)) < l_227), g_18[2].f1)) || p_21.f0)))) , g_56) || l_228) & g_18[2].f1) == p_21.f4));
    p_21.f1 = 0x22846306L;
    return p_21.f1;
}



static struct S0  func_26(int32_t  p_27, uint32_t  p_28)
{ 
    uint32_t l_51 = 1UL;
    int32_t l_55 = 0x786CB52FL;
    uint32_t l_69 = 0x4AE3B72CL;
    struct S0 l_165 = {128,0,519,484,298};
    uint32_t l_190 = 0x4E04F8DBL;
    if ((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_u(((+((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((g_18[2].f2 | g_18[2].f2) & (((safe_rshift_func_uint8_t_u_u(g_18[2].f3, 6)) ^ (((safe_unary_minus_func_uint16_t_u((g_52 = l_51))) >= g_18[2].f4) <= l_51)) & 1UL)) <= 1L), 0UL)), 0xE792L)) == p_27)) & p_27), l_51)) | l_51) != 0L), g_25.f0)))
    { 
        g_56++;
    }
    else
    { 
        int64_t l_92 = 1L;
        int32_t l_140 = (-6L);
        int64_t l_166 = (-9L);
        int32_t l_173 = 0xB2E08F32L;
        if ((((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(p_28, ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(9UL, g_18[2].f2)) == (((((g_54[0][0] &= 0L) || g_18[2].f3) > p_27) ^ (-8L)) > l_55)), l_69)), g_25.f0)) || 0x19L))), (-1L))) > l_51) < g_18[2].f4))
        { 
            uint32_t l_72[1][2][1];
            int32_t l_73 = 0L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_72[i][j][k] = 0xCB0470BDL;
                }
            }
            l_73 = (safe_sub_func_uint64_t_u_u((p_28 || l_72[0][1][0]), (g_53 &= 2L)));
        }
        else
        { 
            int8_t l_76 = 0x20L;
            int32_t l_105 = 0xD4860CE0L;
            int64_t l_111[4][5][1] = {{{5L},{(-10L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-10L)},{5L},{(-1L)},{5L}},{{(-10L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-10L)},{5L},{(-1L)},{5L},{(-10L)}}};
            int i, j, k;
            if ((safe_lshift_func_uint16_t_u_s(0x0FFBL, 11)))
            { 
                l_76 = p_27;
                return g_18[2];
            }
            else
            { 
                const int16_t l_89 = 0xD6FFL;
                int32_t l_102 = 0x089868D5L;
                int32_t l_106 = 0x08AE343BL;
                g_18[2].f1 = ((~(safe_lshift_func_int16_t_s_s(2L, (g_54[3][2] != ((~(safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((g_93 &= ((l_89 || (safe_lshift_func_uint16_t_u_u((((((l_92 = 5L) < 0L) || 0x6575EB915481186CLL) & 0L) == 0xA9L), 4))) > g_18[2].f1)), 65533UL)) , 0xCAL), g_54[2][3])), p_27)), l_69))) & 18446744073709551615UL))))) , g_25.f0);
                l_106 = (((((g_56 = (safe_sub_func_int16_t_s_s((+(safe_unary_minus_func_int16_t_s(((safe_rshift_func_int16_t_s_u(p_27, (l_102 ^= (g_93--)))) > ((g_52 & (l_92 , ((((l_105 ^= (l_55 | g_18[2].f2)) && 0x6B9E65AFEF71A1F9LL) <= 0L) > 2L))) <= p_28))))), p_28))) , l_105) , g_54[3][2]) != 8UL) >= 0UL);
            }
            l_105 = ((-1L) <= (l_55 = ((1UL ^ p_28) >= 0x95D6L)));
            if ((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(p_27, 3)), (l_111[0][3][0] | (safe_rshift_func_int8_t_s_u((p_27 | (safe_add_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(8L, l_111[2][0][0])), l_111[2][3][0])) && 0xD55BL) || g_52), g_54[1][0]))), 1))))))
            { 
                int16_t l_122 = 1L;
                union U1 l_125 = {0L};
                g_18[2].f1 |= ((0xD1L < (p_28 > (((l_122 = 0x56C5F0395E10BBF0LL) || (0xC290L | l_122)) > g_18[2].f4))) >= p_27);
                l_55 &= l_76;
                l_55 = (((safe_div_func_int16_t_s_s(g_18[2].f0, 65534UL)) || ((((l_125 , ((safe_mul_func_uint8_t_u_u(((((!(g_18[2].f2 = ((g_54[1][0] = ((safe_mod_func_uint32_t_u_u(l_92, 0x3A7E4293L)) || g_52)) || 1L))) | 0UL) <= 0x5DCDL) >= p_28), l_122)) ^ g_18[2].f1)) & p_28) && 0UL) && l_125.f0)) <= g_18[2].f0);
            }
            else
            { 
                uint32_t l_139[1];
                int32_t l_147[5][1] = {{(-9L)},{0L},{(-9L)},{0L},{(-9L)}};
                int32_t l_159 = 6L;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_139[i] = 1UL;
                l_140 = ((l_139[0] = ((((safe_sub_func_uint16_t_u_u(1UL, p_27)) == (((g_54[1][0] = (safe_add_func_uint8_t_u_u((l_105 = (safe_sub_func_uint64_t_u_u(0UL, 0x4325E2F7FA0514B5LL))), g_18[2].f3))) && 0xF46CL) < p_27)) , p_28) < 0UL)) & 0L);
                l_105 = ((l_147[4][0] = ((((((0xE3D9D29738531772LL < (safe_mod_func_int16_t_s_s((g_25.f0 <= (safe_add_func_uint64_t_u_u(g_52, ((safe_add_func_int32_t_s_s(l_111[0][2][0], 4294967293UL)) <= g_52)))), p_28))) , 0x03A7L) ^ g_93) , l_111[1][3][0]) && l_76) , g_18[2].f3)) <= 9L);
                l_159 |= ((((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint16_t_u_u(4UL, ((5UL ^ ((safe_sub_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(0x98L, (((safe_rshift_func_uint16_t_u_u((((l_147[4][0] = p_27) || g_56) != 0x5276L), 15)) == 0x4D6C3E8AFA607CF5LL) == 0x61L))) && p_27) != l_139[0]), 0L)) == p_27)) ^ p_28))) , p_27))), 6)) < g_18[2].f0) > 0x33FCB7661C5061D6LL) > g_18[2].f0);
            }
        }
        l_166 = (((safe_add_func_int32_t_s_s((((((l_165.f1 = (safe_add_func_uint32_t_u_u(p_27, ((~(p_28 < l_92)) , (l_165 , g_18[2].f4))))) || 0x7C3C58E251D0698FLL) | g_18[2].f2) , 0x5BA6L) < p_27), l_165.f0)) != g_53) | l_140);
        for (p_27 = (-12); (p_27 != 12); ++p_27)
        { 
            int64_t l_169 = 2L;
            int32_t l_170 = 0x29456BCAL;
            int32_t l_171 = 0xA0453326L;
            int32_t l_172 = (-3L);
            l_171 = ((++g_93) | ((safe_div_func_uint32_t_u_u(g_53, ((safe_sub_func_int16_t_s_s(g_18[2].f1, (safe_lshift_func_int8_t_s_u((+(((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((g_187 = g_18[2].f1), 4)) | (safe_div_func_int16_t_s_s((p_28 , g_18[2].f2), 0xB8B9L))) & l_190), g_18[2].f3)) , 0UL) , p_28)), 6)))) || p_28))) && l_92));
            if ((((safe_mod_func_uint8_t_u_u(p_27, ((safe_add_func_int8_t_s_s(1L, (0xF45AC62AL & (l_69 == 0xAA68L)))) || p_27))) & l_165.f3) | g_18[2].f1))
            { 
                uint32_t l_200 = 1UL;
                g_18[2].f1 = (safe_sub_func_int64_t_s_s(p_28, (~l_200)));
                return l_165;
            }
            else
            { 
                int32_t l_208 = (-2L);
                l_208 = ((safe_lshift_func_uint8_t_u_s((l_140 = 0x62L), (safe_add_func_int32_t_s_s((!((safe_sub_func_int32_t_s_s(g_18[2].f2, ((p_27 >= l_173) >= p_27))) & 1L)), g_52)))) == p_28);
            }
        }
    }
    for (g_187 = 0; (g_187 <= 3); g_187 += 1)
    { 
        int8_t l_209[3];
        int i;
        for (i = 0; i < 3; i++)
            l_209[i] = 0L;
        l_209[1] = l_51;
        if (l_165.f3)
            continue;
        l_55 = g_93;
        for (p_28 = 0; (p_28 <= 3); p_28 += 1)
        { 
            int32_t l_221 = 0x58F46018L;
            int16_t l_222 = (-1L);
            int i, j;
            g_18[2].f1 = (g_54[p_28][g_187] >= (safe_lshift_func_int8_t_s_s((((((safe_mul_func_uint16_t_u_u(((((((g_54[p_28][g_187] >= ((1L <= (!((safe_add_func_uint8_t_u_u((((l_221 = (safe_lshift_func_int8_t_s_u((((safe_mod_func_int32_t_s_s((65535UL >= g_54[g_187][(g_187 + 1)]), 0xB37FBF51L)) <= l_190) , p_28), g_18[2].f3))) || l_190) == 0x687FL), 8L)) <= 0x8433A3D88CF5AA1CLL))) < 0xC90199EC3F422AACLL)) == (-2L)) < g_25.f0) , 0xB0L) & g_52) , 0UL), g_54[2][2])) || l_165.f4) ^ 65535UL) != l_222) || g_54[1][0]), p_27)));
            l_55 = g_54[1][2];
            l_221 ^= p_28;
        }
    }
    l_55 ^= ((l_69 == p_27) >= ((p_28 < l_165.f1) || 0x56L));
    return l_165;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_18[i].f0, "g_18[i].f0", print_hash_value);
        transparent_crc(g_18[i].f1, "g_18[i].f1", print_hash_value);
        transparent_crc(g_18[i].f2, "g_18[i].f2", print_hash_value);
        transparent_crc(g_18[i].f3, "g_18[i].f3", print_hash_value);
        transparent_crc(g_18[i].f4, "g_18[i].f4", print_hash_value);

    }
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_54[i][j], "g_54[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_238[i][j][k], "g_238[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_318[i][j], "g_318[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
