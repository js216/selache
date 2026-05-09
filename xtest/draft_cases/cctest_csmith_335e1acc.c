// SPDX-License-Identifier: MIT
// cctest_csmith_335e1acc.c --- cctest case csmith_335e1acc (csmith seed 861805260)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x67cdc422 */

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

// Options:   -s 861805260 -o /tmp/csmith_gen_1noi25qm/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 20;
   signed f1 : 25;
   const unsigned f2 : 23;
   unsigned f3 : 7;
   unsigned f4 : 26;
   signed f5 : 9;
   unsigned f6 : 3;
};

union U1 {
   signed f0 : 3;
   const signed f1 : 31;
   uint32_t  f2;
};


static union U1 g_21 = {0x0105807CL};
static struct S0 g_28 = {-398,4043,586,10,7693,19,1};
static uint16_t g_39 = 3UL;
static int32_t g_45[3] = {(-1L),(-1L),(-1L)};
static int64_t g_56 = 0x9E808E27FB601BA2LL;
static int16_t g_95 = 1L;
static uint32_t g_146 = 4294967295UL;
static uint32_t g_147[2][6][2] = {{{3UL,0UL},{0UL,0UL},{3UL,0UL},{0UL,0UL},{0UL,0UL},{3UL,0UL}},{{0UL,0UL},{3UL,0UL},{0UL,0UL},{0UL,0UL},{3UL,0UL},{0UL,0UL}}};
static int16_t g_154 = (-6L);
static union U1 *g_191 = &g_21;
static union U1 **g_190 = &g_191;
static int64_t g_217[5][1] = {{5L},{5L},{5L},{5L},{5L}};
static int8_t g_232[7] = {0x38L,0x63L,0x63L,0x38L,0x63L,0x63L,0x38L};
static const int16_t *g_253 = &g_95;
static const int16_t **g_252 = &g_253;
static const uint16_t g_272 = 0xF235L;
static uint32_t *g_289 = &g_147[1][1][1];
static uint32_t **g_288 = &g_289;
static uint32_t g_293 = 0UL;
static uint32_t g_296 = 0x0AED94CEL;
static const int16_t g_301[4] = {0x75FAL,0x75FAL,0x75FAL,0x75FAL};
static int8_t g_328 = (-1L);
static int16_t **g_357 = (void*)0;
static uint8_t g_393 = 3UL;
static uint32_t g_402 = 0x7BE4DC9AL;
static uint32_t g_434 = 18446744073709551606UL;
static int32_t **g_513 = (void*)0;
static uint64_t g_548 = 0x290ECA2DBC4C0D3ALL;
static int8_t g_549 = 3L;
static struct S0 *g_598 = (void*)0;
static struct S0 g_600 = {-789,-4680,692,3,961,-16,1};
static struct S0 *g_599 = &g_600;
static int32_t *g_629 = (void*)0;
static uint16_t *g_667 = &g_39;
static uint16_t **g_666 = &g_667;
static uint8_t **g_670 = (void*)0;
static uint8_t g_738 = 0xA3L;
static int16_t g_780 = 0x5D93L;
static uint8_t **** const * const g_990 = (void*)0;
static int32_t g_1019 = 0xB85887BCL;
static uint32_t g_1115 = 0xF77A926EL;
static const uint16_t * const g_1120[5][3][3] = {{{&g_272,&g_272,&g_39},{&g_272,&g_272,(void*)0},{&g_39,&g_39,&g_272}},{{&g_272,&g_272,(void*)0},{&g_39,&g_39,&g_272},{&g_272,&g_272,(void*)0}},{{&g_39,&g_39,&g_272},{&g_272,&g_272,(void*)0},{&g_39,&g_39,&g_272}},{{&g_272,&g_272,(void*)0},{&g_39,&g_39,&g_272},{&g_272,&g_272,(void*)0}},{{&g_39,&g_39,&g_272},{&g_272,&g_272,(void*)0},{&g_39,&g_39,&g_272}}};
static const uint16_t * const *g_1119 = &g_1120[0][1][1];
static uint64_t g_1232[7] = {0xBE5310B1F4E8A8A8LL,0xBE5310B1F4E8A8A8LL,0UL,0xBE5310B1F4E8A8A8LL,0xBE5310B1F4E8A8A8LL,0UL,0xBE5310B1F4E8A8A8LL};
static uint32_t *g_1257 = &g_293;
static uint32_t **g_1256 = &g_1257;
static const int16_t g_1326 = 0xD4CBL;
static const int16_t * const g_1325 = &g_1326;
static const int16_t * const *g_1324 = &g_1325;
static const int16_t * const **g_1323 = &g_1324;
static const int16_t * const ***g_1322 = &g_1323;
static const int16_t * const ****g_1321 = &g_1322;
static uint32_t g_1349 = 0xF25DFF1DL;
static int64_t g_1394 = 0x9099D2F1200D45C3LL;
static int16_t g_1456 = 1L;
static uint32_t ****g_1474 = (void*)0;
static const uint8_t g_1541 = 1UL;
static const int32_t g_1548 = 0xE1B30441L;
static const int32_t *g_1547 = &g_1548;
static uint8_t ***g_1737 = &g_670;
static uint8_t ****g_1736 = &g_1737;
static uint8_t *****g_1735 = &g_1736;
static int32_t *g_1762 = &g_45[1];
static const int32_t ***g_1765 = (void*)0;
static int32_t g_1888[1][3][4] = {{{8L,0x148DA12AL,(-1L),(-1L)},{0x36217CF1L,0x36217CF1L,8L,(-1L)},{0x34D6DB1CL,0x148DA12AL,0x34D6DB1CL,8L}}};
static int16_t g_2014 = (-4L);
static uint64_t g_2080[7] = {1UL,7UL,7UL,1UL,7UL,7UL,1UL};
static int16_t *g_2093 = &g_780;
static const uint32_t g_2103 = 18446744073709551610UL;
static int32_t ***g_2179[6][5][2] = {{{&g_513,&g_513},{(void*)0,&g_513},{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513}},{{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513}},{{(void*)0,&g_513},{&g_513,(void*)0},{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513}},{{&g_513,&g_513},{&g_513,&g_513},{&g_513,(void*)0},{&g_513,(void*)0},{&g_513,&g_513}},{{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513},{&g_513,(void*)0}},{{&g_513,&g_513},{(void*)0,&g_513},{&g_513,&g_513},{&g_513,&g_513},{&g_513,&g_513}}};
static uint8_t g_2312 = 0xCFL;
static uint32_t ***g_2359 = &g_288;
static uint64_t *g_2377[3] = {&g_2080[2],&g_2080[2],&g_2080[2]};
static int16_t g_2420 = 0x010AL;
static int64_t g_2431[5] = {1L,1L,1L,1L,1L};
static int32_t g_2440 = 0xBFD2D814L;
static uint64_t g_2526 = 0x878338062D219729LL;
static uint64_t g_2529 = 1UL;
static uint64_t * const g_2528 = &g_2529;
static uint64_t * const *g_2527[4] = {&g_2528,&g_2528,&g_2528,&g_2528};
static uint32_t g_2547 = 1UL;



static int64_t  func_1(void);
static uint64_t  func_2(int32_t  p_3, int32_t  p_4, uint16_t  p_5, int16_t  p_6, uint8_t  p_7);
static uint8_t  func_8(const struct S0  p_9, struct S0  p_10);
static struct S0  func_11(struct S0  p_12, union U1  p_13, int16_t  p_14);
static struct S0  func_15(union U1  p_16, const uint32_t  p_17, int8_t  p_18, uint32_t  p_19, struct S0  p_20);
static uint8_t  func_25(struct S0  p_26, int32_t  p_27);
static struct S0  func_31(uint32_t  p_32, int16_t  p_33, int16_t  p_34);
static uint64_t  func_35(uint16_t  p_36, uint16_t  p_37);




static int64_t  func_1(void)
{ 
    const int8_t l_22 = 0x1CL;
    uint16_t *l_38 = &g_39;
    const uint16_t * const **l_1121 = (void*)0;
    const uint16_t * const **l_1122 = &g_1119;
    const uint16_t *l_1124 = &g_272;
    const uint16_t **l_1123 = &l_1124;
    int32_t l_1148[7] = {(-6L),1L,(-6L),(-6L),1L,(-6L),(-6L)};
    union U1 l_1313[2][7] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0x94AFA655L},{0x94AFA655L},{0x94AFA655L},{0x94AFA655L},{0x94AFA655L},{0x94AFA655L},{0x94AFA655L}}};
    struct S0 l_1314 = {-152,41,1118,2,2815,-17,0};
    int32_t *l_1886 = (void*)0;
    int32_t *l_1887 = &g_1888[0][0][0];
    uint8_t *l_1892 = (void*)0;
    uint8_t *l_1893 = &g_738;
    int64_t l_1918 = 0L;
    uint32_t l_1957 = 0x0B6E1BC2L;
    int16_t l_1959 = 0L;
    uint32_t ** const *l_1960[5] = {&g_288,&g_288,&g_288,&g_288,&g_288};
    uint32_t l_1999 = 0UL;
    uint8_t l_2002 = 1UL;
    uint16_t l_2018[1][6] = {{0UL,0xB00EL,0xB00EL,0UL,0xB00EL,0xB00EL}};
    uint16_t l_2057[4][7][6] = {{{0xA81CL,0xC2DFL,0x731DL,65535UL,65531UL,0xE0E4L},{1UL,3UL,65528UL,9UL,0UL,65531UL},{3UL,65535UL,0xA81CL,0x7523L,9UL,0x064AL},{1UL,0x7523L,0x8F05L,0x7523L,65535UL,65528UL},{0xCCF4L,65531UL,1UL,1UL,0xE0E4L,65534UL},{65535UL,0x9D23L,0xC0C7L,65531UL,0x064AL,65534UL},{1UL,65528UL,1UL,0xA81CL,65535UL,65528UL}},{{0x064AL,65535UL,0x8F05L,0xBBFCL,65528UL,0x9D23L},{0xABE5L,0xCCF4L,0xFB70L,9UL,65535UL,0xBBFCL},{0xBBFCL,0xB97CL,65528UL,0x731DL,65530UL,65530UL},{65528UL,65528UL,65528UL,65528UL,0x018FL,0x4895L},{0UL,1UL,1UL,0xC0C7L,0xCCF4L,65535UL},{65528UL,9UL,65535UL,65535UL,0xCCF4L,0x064AL},{0x4895L,1UL,65534UL,0xABE5L,0x018FL,9UL}},{{1UL,65528UL,0UL,65535UL,65530UL,1UL},{0UL,0xB97CL,0xA81CL,0x064AL,65535UL,0xC2DFL},{65535UL,0xCCF4L,0x018FL,65528UL,65528UL,65528UL},{9UL,65535UL,9UL,3UL,65535UL,0xABE5L},{0xA81CL,65528UL,65535UL,65535UL,0x064AL,0xC0C7L},{65535UL,0x9D23L,65528UL,65535UL,0xE0E4L,3UL},{0xA81CL,65531UL,0x7523L,3UL,65535UL,65535UL}},{{9UL,0x7523L,0xC2DFL,65528UL,0x8F05L,65535UL},{65535UL,0x018FL,65530UL,0x064AL,65535UL,1UL},{0UL,5UL,0xCCF4L,65535UL,65535UL,0xCCF4L},{1UL,1UL,0UL,0xABE5L,0x9D23L,0x731DL},{0x4895L,65535UL,1UL,65535UL,65531UL,0UL},{65528UL,0x4895L,1UL,0xC0C7L,1UL,0x731DL},{0UL,0xC0C7L,0UL,65528UL,1UL,0xCCF4L}}};
    uint16_t l_2070[7][1][5] = {{{7UL,7UL,7UL,7UL,7UL}},{{0xA2B1L,0x959EL,0xA2B1L,0x959EL,0xA2B1L}},{{7UL,7UL,7UL,7UL,7UL}},{{0xA2B1L,0x959EL,0xA2B1L,0x959EL,0xA2B1L}},{{7UL,7UL,7UL,7UL,7UL}},{{0xA2B1L,0x959EL,0xA2B1L,0x959EL,0xA2B1L}},{{7UL,7UL,7UL,7UL,7UL}}};
    uint16_t l_2085 = 65535UL;
    int16_t *l_2092[7];
    union U1 l_2210 = {-1L};
    uint64_t l_2212 = 0x02A27F81D72D35B5LL;
    int16_t l_2320 = 0xA9E1L;
    int16_t ***l_2331 = &g_357;
    int16_t **** const l_2330 = &l_2331;
    int32_t l_2374 = 0xFA49C8F8L;
    uint32_t l_2492 = 0UL;
    int32_t l_2499[1];
    uint64_t * const l_2525[1] = {&g_2526};
    uint64_t * const *l_2524 = &l_2525[0];
    struct S0 l_2532[7][2][6] = {{{{-466,-1309,1851,7,5888,-17,1},{-461,-621,1110,4,3635,19,0},{-807,-5335,424,2,4624,12,1},{164,5119,669,4,6998,-17,1},{114,1537,802,0,8070,-4,0},{935,70,1219,8,1982,4,0}},{{-683,2783,2804,2,3450,-2,1},{-147,4178,2599,6,6307,21,0},{-587,1543,1014,6,1334,11,1},{-807,-5335,424,2,4624,12,1},{954,-218,1614,8,4925,17,0},{954,-218,1614,8,4925,17,0}}},{{{-324,-3342,1059,7,4811,-21,0},{-587,1543,1014,6,1334,11,1},{-587,1543,1014,6,1334,11,1},{-324,-3342,1059,7,4811,-21,0},{-147,4178,2599,6,6307,21,0},{935,70,1219,8,1982,4,0}},{{-35,1976,2274,4,6804,2,1},{-400,-3290,1984,3,1110,15,1},{954,-218,1614,8,4925,17,0},{-324,-3342,1059,7,4811,-21,0},{935,70,1219,8,1982,4,0},{-841,-5149,21,0,6810,11,0}}},{{{-324,-3342,1059,7,4811,-21,0},{935,70,1219,8,1982,4,0},{-841,-5149,21,0,6810,11,0},{-807,-5335,424,2,4624,12,1},{935,70,1219,8,1982,4,0},{-400,-3290,1984,3,1110,15,1}},{{-683,2783,2804,2,3450,-2,1},{-400,-3290,1984,3,1110,15,1},{-147,4178,2599,6,6307,21,0},{-35,1976,2274,4,6804,2,1},{-147,4178,2599,6,6307,21,0},{-400,-3290,1984,3,1110,15,1}}},{{{114,1537,802,0,8070,-4,0},{-587,1543,1014,6,1334,11,1},{-841,-5149,21,0,6810,11,0},{-461,-621,1110,4,3635,19,0},{954,-218,1614,8,4925,17,0},{-841,-5149,21,0,6810,11,0}},{{114,1537,802,0,8070,-4,0},{-147,4178,2599,6,6307,21,0},{954,-218,1614,8,4925,17,0},{-35,1976,2274,4,6804,2,1},{-461,-5789,2277,1,3119,15,0},{935,70,1219,8,1982,4,0}}},{{{-683,2783,2804,2,3450,-2,1},{-147,4178,2599,6,6307,21,0},{-587,1543,1014,6,1334,11,1},{-807,-5335,424,2,4624,12,1},{954,-218,1614,8,4925,17,0},{954,-218,1614,8,4925,17,0}},{{-324,-3342,1059,7,4811,-21,0},{-587,1543,1014,6,1334,11,1},{-587,1543,1014,6,1334,11,1},{-324,-3342,1059,7,4811,-21,0},{-147,4178,2599,6,6307,21,0},{935,70,1219,8,1982,4,0}}},{{{-35,1976,2274,4,6804,2,1},{-400,-3290,1984,3,1110,15,1},{954,-218,1614,8,4925,17,0},{-324,-3342,1059,7,4811,-21,0},{935,70,1219,8,1982,4,0},{-841,-5149,21,0,6810,11,0}},{{-324,-3342,1059,7,4811,-21,0},{935,70,1219,8,1982,4,0},{-841,-5149,21,0,6810,11,0},{-807,-5335,424,2,4624,12,1},{935,70,1219,8,1982,4,0},{-400,-3290,1984,3,1110,15,1}}},{{{-683,2783,2804,2,3450,-2,1},{-400,-3290,1984,3,1110,15,1},{-147,4178,2599,6,6307,21,0},{-35,1976,2274,4,6804,2,1},{-147,4178,2599,6,6307,21,0},{-400,-3290,1984,3,1110,15,1}},{{114,1537,802,0,8070,-4,0},{-587,1543,1014,6,1334,11,1},{-841,-5149,21,0,6810,11,0},{-461,-621,1110,4,3635,19,0},{954,-218,1614,8,4925,17,0},{-841,-5149,21,0,6810,11,0}}}};
    uint32_t l_2562[2][2][4] = {{{0x3704C712L,0x3704C712L,0x3704C712L,0x3704C712L},{0x3704C712L,0x3704C712L,0x3704C712L,0x3704C712L}},{{0x3704C712L,0x3704C712L,0x3704C712L,0x3704C712L},{0x3704C712L,0x3704C712L,0x3704C712L,0x3704C712L}}};
    int32_t *l_2569 = &g_1019;
    uint16_t ***l_2571 = &g_666;
    uint16_t ****l_2570 = &l_2571;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2092[i] = &g_154;
    for (i = 0; i < 1; i++)
        l_2499[i] = 0x158EB26FL;
    return (*l_1887);
}



static uint64_t  func_2(int32_t  p_3, int32_t  p_4, uint16_t  p_5, int16_t  p_6, uint8_t  p_7)
{ 
    int8_t l_1858 = (-1L);
    union U1 l_1859[6][2][4] = {{{{1L},{0x40993C98L},{0x40993C98L},{1L}},{{0xEF1AE49AL},{0x40993C98L},{1L},{0x40993C98L}}},{{{0x40993C98L},{0x3C36B4FEL},{1L},{1L}},{{0xEF1AE49AL},{0xEF1AE49AL},{0x40993C98L},{1L}}},{{{1L},{0x3C36B4FEL},{1L},{0x40993C98L}},{{1L},{0x40993C98L},{0x40993C98L},{1L}}},{{{0xEF1AE49AL},{0x40993C98L},{1L},{0x40993C98L}},{{0x40993C98L},{0x3C36B4FEL},{1L},{1L}}},{{{0xEF1AE49AL},{0xEF1AE49AL},{0x40993C98L},{1L}},{{1L},{0x3C36B4FEL},{1L},{0x40993C98L}}},{{{1L},{0x40993C98L},{0x40993C98L},{1L}},{{0xEF1AE49AL},{0x40993C98L},{1L},{0x40993C98L}}}};
    uint16_t ***l_1865 = (void*)0;
    int32_t **l_1866 = &g_1762;
    int64_t *l_1867[5][4][5] = {{{(void*)0,&g_1394,&g_217[3][0],&g_1394,&g_217[3][0]},{&g_217[3][0],&g_1394,&g_217[3][0],&g_217[3][0],&g_1394},{&g_56,&g_217[1][0],&g_217[4][0],(void*)0,&g_1394},{&g_217[3][0],&g_217[3][0],(void*)0,(void*)0,&g_217[3][0]}},{{&g_1394,&g_1394,&g_1394,&g_217[3][0],&g_217[3][0]},{&g_1394,&g_217[3][0],&g_56,&g_1394,(void*)0},{&g_56,&g_217[3][0],&g_217[3][0],&g_217[4][0],&g_1394},{&g_1394,&g_217[4][0],&g_56,&g_1394,&g_1394}},{{&g_1394,&g_56,&g_217[3][0],&g_56,&g_217[3][0]},{&g_217[3][0],&g_217[3][0],&g_217[3][0],&g_56,&g_56},{&g_56,&g_217[3][0],&g_217[3][0],&g_217[3][0],&g_217[3][0]},{&g_56,&g_217[3][0],&g_1394,&g_1394,&g_217[3][0]}},{{&g_217[3][0],&g_217[3][0],&g_217[3][0],&g_217[3][0],&g_217[3][0]},{&g_217[4][0],&g_1394,&g_217[1][0],&g_217[3][0],&g_56},{&g_217[3][0],&g_1394,&g_56,&g_1394,&g_1394},{&g_217[3][0],&g_1394,&g_1394,&g_217[3][0],&g_217[3][0]}},{{&g_217[3][0],&g_1394,&g_56,&g_217[4][0],&g_217[3][0]},{&g_217[3][0],&g_217[3][0],&g_56,&g_56,&g_56},{&g_1394,&g_217[3][0],&g_1394,&g_217[4][0],&g_56},{&g_1394,&g_217[3][0],&g_217[3][0],&g_217[3][0],(void*)0}}};
    int32_t *l_1868 = (void*)0;
    int32_t *l_1869 = &g_1019;
    int16_t *l_1878 = &g_780;
    uint32_t l_1883 = 0xEE231A6BL;
    int i, j, k;
    l_1859[0][1][0].f0 = (((safe_mul_func_int16_t_s_s((l_1858 & p_6), 0x8697L)) < l_1858) && (l_1859[0][1][0] , l_1859[0][1][0].f0));
    p_4 = ((*l_1869) = (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_s((((((p_4 > (safe_div_func_int32_t_s_s(((l_1859[0][1][0].f0 = (((((((((void*)0 != l_1865) , (p_7 && (l_1866 == (void*)0))) == p_5) >= g_28.f2) & g_154) , g_548) , 0L) && l_1859[0][1][0].f0)) > p_6), 0xEDBBB7E4L))) == g_28.f3) > p_6) && 0xF3L) & p_7), (**g_252))) >= p_3))));
    (*l_1869) = (g_1019 >= (((((safe_sub_func_int16_t_s_s((***g_1323), ((safe_mod_func_uint64_t_u_u(0xD21199744A5E3FACLL, (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((g_56 |= ((7L < ((*l_1878) |= (***g_1323))) <= ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_1883 , (((safe_add_func_int64_t_s_s((l_1859[0][1][0] , (-1L)), 9UL)) , (*l_1869)) & 4294967295UL)), (-9L))), (*l_1869))) ^ 8UL))) >= g_21.f0), 0x39BA9BE7L)), (*l_1869))))) , p_3))) < (*g_253)) , l_1859[5][1][0]) , (*l_1869)) >= g_28.f4));
    (*l_1869) = p_6;
    return g_1541;
}



static uint8_t  func_8(const struct S0  p_9, struct S0  p_10)
{ 
    const union U1 **l_1315 = (void*)0;
    const union U1 ***l_1316 = (void*)0;
    const int16_t * const *l_1320 = &g_253;
    const int16_t * const **l_1319 = &l_1320;
    const int16_t * const ***l_1318 = &l_1319;
    const int16_t * const ****l_1317 = &l_1318;
    int32_t l_1338 = 0x128C0901L;
    int32_t l_1339 = 0x20A6402DL;
    int32_t l_1395 = 0xE8A2F390L;
    int32_t l_1396 = (-4L);
    int32_t l_1397 = 0xF558D4B4L;
    int32_t l_1399 = 0xC5442F2FL;
    int32_t l_1400[2];
    uint32_t l_1404 = 0x18618323L;
    uint8_t ***l_1433 = &g_670;
    int64_t l_1459 = 3L;
    uint32_t l_1460 = 0x85242917L;
    uint32_t ***l_1476 = &g_288;
    uint32_t ****l_1475 = &l_1476;
    int32_t **l_1480 = (void*)0;
    int8_t l_1509 = 0xE5L;
    uint8_t l_1570 = 252UL;
    const int64_t l_1585 = (-9L);
    uint64_t *l_1626 = &g_548;
    int32_t *l_1730 = &l_1400[0];
    int8_t l_1795 = 0x48L;
    uint32_t l_1807[3][4] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    int32_t *l_1808 = (void*)0;
    int32_t *l_1809 = (void*)0;
    int32_t *l_1810 = &g_45[1];
    int64_t *l_1811 = &l_1459;
    uint16_t l_1855 = 0x5D17L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1400[i] = 0xDDA1E890L;
lbl_1352:
    l_1315 = l_1315;
    if (((g_1321 = l_1317) == (void*)0))
    { 
        int8_t l_1340 = 0L;
        int32_t l_1342 = (-1L);
        int32_t l_1343 = 1L;
        int32_t l_1344 = (-1L);
        int32_t l_1345 = (-7L);
        int32_t l_1346 = 0xFF17F615L;
        int32_t l_1347[2];
        uint8_t ** const *l_1427 = &g_670;
        const int32_t *l_1432 = &l_1344;
        const int32_t **l_1431[5];
        const int32_t ***l_1430 = &l_1431[2];
        int32_t l_1458 = 0xAB03B47CL;
        int16_t *l_1490[6][1][4] = {{{&g_154,&g_154,&g_154,&g_154}},{{&g_1456,&g_154,&g_1456,&g_154}},{{&g_154,&g_95,&g_1456,&g_1456}},{{&g_1456,&g_1456,&g_154,&g_1456}},{{&g_154,&g_95,&g_154,&g_154}},{{&g_154,&g_154,&g_154,&g_154}}};
        union U1 l_1512[7][4] = {{{0x1DC1D30DL},{0L},{3L},{0x399D261BL}},{{0L},{0x704B6A75L},{0x704B6A75L},{0L}},{{1L},{0x399D261BL},{0x704B6A75L},{0x484D28EEL}},{{0L},{0x1DC1D30DL},{3L},{0x1DC1D30DL}},{{0x1DC1D30DL},{0x704B6A75L},{1L},{0x1DC1D30DL}},{{1L},{0x1DC1D30DL},{0x484D28EEL},{0x484D28EEL}},{{0x399D261BL},{0x399D261BL},{3L},{0L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1347[i] = 0x6D839E82L;
        for (i = 0; i < 5; i++)
            l_1431[i] = &l_1432;
        for (g_328 = 26; (g_328 > 19); g_328--)
        { 
            int64_t l_1329 = 0x10E20AF73C13A73ELL;
            int32_t *l_1330 = &g_1019;
            int32_t *l_1331 = &g_45[1];
            int32_t *l_1332 = &g_45[1];
            int32_t *l_1333 = &g_45[2];
            int32_t *l_1334 = &g_45[2];
            int32_t l_1335 = 0xB7A9CFAAL;
            int32_t *l_1336 = &g_45[1];
            int32_t *l_1337[3];
            int32_t l_1341 = 0x4F4ACE64L;
            int64_t l_1348 = 0x09B938028463AE1DLL;
            union U1 ** const *l_1379 = &g_190;
            union U1 l_1380 = {0xAAEBDA0CL};
            int8_t *l_1411[4][1];
            int i, j;
            for (i = 0; i < 3; i++)
                l_1337[i] = &g_45[2];
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1411[i][j] = &g_549;
            }
            --g_1349;
            if (g_328)
                goto lbl_1352;
            for (l_1339 = 0; (l_1339 <= 6); l_1339 += 1)
            { 
                uint8_t l_1364 = 0xAAL;
                union U1 l_1371[1][6] = {{{0xD87BF245L},{0x23B5B528L},{0x23B5B528L},{0xD87BF245L},{0x23B5B528L},{0x23B5B528L}}};
                int i, j;
                for (g_1019 = 0; (g_1019 <= 6); g_1019 += 1)
                { 
                    int32_t **l_1353 = &l_1331;
                    (*l_1353) = &l_1347[0];
                }
                if (g_328)
                    goto lbl_1352;
                for (l_1341 = 5; (l_1341 >= 2); l_1341 -= 1)
                { 
                    int i;
                    (*l_1331) = g_232[l_1341];
                }
                if (((*l_1331) = g_232[l_1339]))
                { 
                    int32_t *l_1354 = &l_1343;
                    int32_t **l_1355 = &l_1354;
                    (*l_1332) = 0x82BFD786L;
                    (*l_1355) = l_1354;
                    (*l_1355) = (void*)0;
                }
                else
                { 
                    uint32_t l_1356 = 4294967293UL;
                    uint8_t *l_1374 = (void*)0;
                    uint8_t *l_1375 = (void*)0;
                    struct S0 **l_1376 = &g_599;
                    --l_1356;
                    if (p_10.f5)
                        break;
                    l_1346 ^= (safe_div_func_uint8_t_u_u((g_738 ^= (((safe_unary_minus_func_uint32_t_u(p_9.f0)) >= (((*l_1330) = ((safe_mul_func_int8_t_s_s((l_1364 && (safe_sub_func_int64_t_s_s(g_328, (safe_lshift_func_int8_t_s_s(0x21L, (safe_mul_func_int8_t_s_s(p_10.f5, (l_1371[0][0] , ((((safe_lshift_func_int16_t_s_s(l_1344, l_1364)) && (*l_1332)) < l_1338) == 0x162554B98AD3FAEDLL))))))))), 255UL)) == 0xBF57L)) < p_10.f2)) , p_10.f2)), 0x8BL));
                    if (l_1356)
                        break;
                    (*l_1376) = &g_28;
                }
            }
            if ((safe_mul_func_uint16_t_u_u((l_1345 > (l_1338 | 0x42L)), ((l_1379 == ((0x6D0FL & (&g_232[3] == (l_1380 , &l_1340))) , (void*)0)) ^ l_1347[0]))))
            { 
                int32_t l_1393[6][5] = {{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-2L),0x2AD8FC77L,(-2L),0x2AD8FC77L,(-2L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-2L),0x2AD8FC77L,(-2L),0x2AD8FC77L,(-2L)},{(-8L),(-8L),(-8L),(-8L),(-8L)},{(-2L),0x2AD8FC77L,(-2L),0x2AD8FC77L,(-2L)}};
                int32_t l_1398 = 0L;
                int32_t l_1401 = (-2L);
                int32_t l_1402 = 1L;
                int32_t l_1403 = 0x77C59EF9L;
                int i, j;
                l_1345 = ((*g_599) , (((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((((**g_288) | ((safe_sub_func_int8_t_s_s(g_147[0][4][0], ((l_1338 || 0x3E6EL) | l_1339))) , (**g_288))) && 0UL) || p_9.f1), l_1343)), (*l_1333))), l_1346)) != (**g_1324)), p_10.f1)), g_548)) || p_10.f2) < g_1232[0]) | (**g_252)) < (*l_1330)));
                ++l_1404;
                if (((((*g_1257) = ((&g_217[3][0] == &g_1394) && (1L < (safe_mul_func_uint8_t_u_u(((*l_1332) < (((p_9.f5 & 7L) || (safe_mod_func_uint64_t_u_u(((void*)0 == l_1411[3][0]), 18446744073709551615UL))) <= l_1403)), 0xEDL))))) , p_10.f2) > (-1L)))
                { 
                    int32_t **l_1412 = &l_1336;
                    (*l_1412) = &l_1401;
                    p_10.f1 &= p_10.f5;
                    (**l_1412) = l_1338;
                }
                else
                { 
                    return p_10.f0;
                }
                for (l_1335 = 0; (l_1335 < (-9)); l_1335 = safe_sub_func_uint32_t_u_u(l_1335, 4))
                { 
                    int16_t *l_1417 = &g_95;
                    int64_t *l_1424 = (void*)0;
                    int64_t *l_1425 = &l_1348;
                    l_1402 &= ((p_10.f2 <= (safe_add_func_uint64_t_u_u(((-10L) ^ ((((*l_1417) |= l_1344) != (safe_mod_func_int16_t_s_s((p_9.f3 == ((((*l_1425) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0x904C3D69L, (l_1346 || (0x569DL <= 0x2C05L)))) ^ 7L), 12))) && 1L) || (*l_1333))), p_9.f1))) && p_10.f5)), (*l_1331)))) > l_1399);
                    if (p_9.f2)
                        continue;
                    if (p_9.f1)
                        goto lbl_1352;
                    (*l_1333) &= (l_1346 | (+p_10.f0));
                    if (l_1399)
                        break;
                }
            }
            else
            { 
                uint8_t l_1428[5][2] = {{0x93L,1UL},{0x93L,0x93L},{1UL,0x93L},{0x93L,1UL},{0x93L,0x93L}};
                int32_t l_1434 = 0x626B074CL;
                int i, j;
                l_1434 ^= (l_1427 != ((((*l_1334) = l_1428[2][1]) == (0x1159L ^ ((+((&g_513 != (g_21 , l_1430)) & 0x1ED03056L)) ^ 0x110D148FL))) , l_1433));
            }
        }
        for (l_1404 = 0; (l_1404 <= 0); l_1404 += 1)
        { 
            int32_t *l_1453 = (void*)0;
            int32_t *l_1454 = &l_1347[0];
            int32_t *l_1455[5][7][4] = {{{&g_1019,&l_1343,&g_1019,&g_45[1]},{&g_45[0],&l_1342,&l_1342,&l_1342},{&l_1399,(void*)0,(void*)0,&l_1399},{&l_1395,&l_1400[1],&g_1019,&l_1339},{(void*)0,&g_1019,&l_1339,&l_1344},{&l_1399,&l_1400[1],(void*)0,(void*)0},{&l_1342,(void*)0,&l_1342,&l_1397}},{{&l_1345,&l_1342,&l_1400[0],&l_1399},{&g_45[1],(void*)0,&g_1019,(void*)0},{&l_1342,(void*)0,&l_1343,(void*)0},{&g_1019,(void*)0,&l_1347[0],&l_1347[0]},{(void*)0,(void*)0,&l_1399,&l_1400[1]},{(void*)0,&l_1347[1],&l_1397,(void*)0},{&g_45[1],&l_1395,&l_1395,&l_1397}},{{&g_1019,&l_1395,(void*)0,(void*)0},{&l_1395,&l_1347[1],&l_1395,&l_1400[1]},{&l_1344,(void*)0,&l_1346,&l_1347[0]},{&g_45[1],(void*)0,&g_45[1],(void*)0},{&l_1342,(void*)0,&g_45[1],(void*)0},{&l_1399,(void*)0,(void*)0,&l_1399},{&l_1339,&l_1342,&l_1344,&l_1343}},{{&l_1344,&g_45[1],&g_1019,(void*)0},{(void*)0,(void*)0,&l_1344,(void*)0},{&l_1397,&l_1346,&g_45[1],&l_1339},{(void*)0,&g_1019,&l_1343,&l_1396},{&l_1345,&l_1347[1],(void*)0,&g_45[1]},{&l_1344,&l_1399,&l_1395,(void*)0},{(void*)0,&l_1395,(void*)0,(void*)0}},{{&l_1397,&g_45[1],&g_45[1],&l_1342},{&l_1344,&g_1019,(void*)0,&g_45[1]},{(void*)0,(void*)0,(void*)0,&l_1347[0]},{&l_1344,&l_1347[0],&g_45[1],(void*)0},{&l_1397,&l_1346,(void*)0,&l_1399},{(void*)0,&l_1399,&l_1395,&l_1344},{&l_1344,(void*)0,(void*)0,&l_1339}}};
            int64_t l_1457 = 0x4973787F3B1BC8EFLL;
            int16_t *l_1481 = &g_154;
            int64_t l_1482 = (-8L);
            uint32_t ****l_1485 = &l_1476;
            int i, j, k;
            for (g_328 = 0; (g_328 <= 6); g_328 += 1)
            { 
                struct S0 l_1445[6] = {{-971,4497,951,6,3821,2,0},{-971,4497,951,6,3821,2,0},{-971,4497,951,6,3821,2,0},{-971,4497,951,6,3821,2,0},{-971,4497,951,6,3821,2,0},{-971,4497,951,6,3821,2,0}};
                uint16_t **l_1449 = &g_667;
                const int16_t l_1450 = 0x305AL;
                int32_t *l_1451 = (void*)0;
                int32_t *l_1452 = &l_1400[1];
                int i, j;
                (*l_1452) |= (g_45[2] = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(1UL, ((safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((g_217[(l_1404 + 2)][l_1404] == ((l_1445[1] , (((safe_mul_func_uint16_t_u_u(0UL, ((!(**g_288)) ^ g_28.f5))) || (&g_1120[0][1][1] == l_1449)) , 0xABC2235A9A373CBALL)) & l_1450)), g_549)), 0x94L)) , &g_190) == (void*)0), 0UL)) & g_738))) ^ p_10.f5), 0)));
                (**l_1430) = &l_1400[0];
            }
            ++l_1460;
            (**l_1430) = &l_1400[0];
            for (l_1395 = 0; (l_1395 >= 0); l_1395 -= 1)
            { 
                union U1 l_1472 = {0xA47922A8L};
                for (g_154 = 6; (g_154 >= 0); g_154 -= 1)
                { 
                    int i;
                    if (p_9.f5)
                        break;
                    if (g_549)
                        continue;
                }
                for (g_154 = 0; (g_154 <= 1); g_154 += 1)
                { 
                    uint8_t l_1463 = 9UL;
                    l_1463--;
                }
                p_10.f5 = ((*l_1454) = (safe_mod_func_uint64_t_u_u(((+(g_434 != (safe_lshift_func_int16_t_s_u(((!l_1399) <= (l_1472 , 18446744073709551611UL)), 0)))) != 0L), p_9.f3)));
            }
            for (g_549 = 6; (g_549 >= 0); g_549 -= 1)
            { 
                const uint64_t l_1473[1] = {3UL};
                int i;
                if ((l_1473[0] == (g_1474 == l_1475)))
                { 
                    int32_t l_1483 = (-4L);
                    uint16_t *l_1484 = &g_39;
                    int64_t *l_1491 = &l_1459;
                    int i, j;
                    if (p_9.f3)
                        break;
                    l_1483 = (((*l_1484) = ((l_1404 != (safe_add_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s(l_1473[0])) , ((((l_1480 == (void*)0) , l_1481) == ((g_232[g_549] = l_1482) , l_1481)) >= p_9.f4)), l_1483))) & p_10.f0)) == p_10.f4);
                    (*l_1454) = (((void*)0 == l_1485) != (((p_9.f0 ^ (((p_9.f5 , g_28.f6) >= ((*l_1491) = (g_217[l_1404][l_1404] = (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((l_1490[0][0][2] == (void*)0) , 0xDF92L), p_10.f1)), g_232[g_549]))))) || 1L)) >= g_232[g_549]) | g_328));
                }
                else
                { 
                    int32_t l_1494 = 0xD4CC3411L;
                    if (p_9.f6)
                        break;
                    p_10.f5 = ((g_28.f1 | (safe_div_func_int32_t_s_s((l_1494 = (-4L)), p_10.f1))) >= (safe_mod_func_int64_t_s_s(((p_10.f5 && (safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((65531UL && ((safe_rshift_func_int8_t_s_u(((l_1400[0] = (safe_unary_minus_func_uint16_t_u((l_1509 = 0xC184L)))) | (((safe_sub_func_int8_t_s_s(((l_1512[1][2] , g_402) < 18446744073709551615UL), g_1115)) != p_9.f0) >= 65534UL)), p_9.f4)) < 0xDEEE1CCDL)), p_9.f3)), p_10.f6)) , p_9.f0), 0x11L))))) & (*l_1454)), 0x6ED777B5B098E160LL)));
                }
            }
        }
    }
    else
    { 
        struct S0 l_1521 = {-468,-2230,1003,7,4881,-16,0};
        int16_t *l_1522 = &g_780;
        int32_t *l_1523 = &l_1396;
        uint8_t *l_1544 = &g_738;
        int32_t l_1559 = (-3L);
        int16_t * const *l_1580[1][1];
        int16_t * const **l_1579[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t ***l_1597 = &l_1480;
        const union U1 l_1602 = {0xEAA636F4L};
        uint32_t l_1606 = 18446744073709551615UL;
        int32_t l_1671[4][2] = {{5L,5L},{5L,5L},{5L,5L},{5L,5L}};
        int32_t l_1706[4] = {9L,9L,9L,9L};
        uint8_t *** const *l_1739 = &g_1737;
        uint8_t *** const ** const l_1738 = &l_1739;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1580[i][j] = &l_1522;
        }
        if ((p_9.f2 <= (p_9.f4 <= (p_10.f5 != ((*l_1522) = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((p_10.f0 == (safe_rshift_func_uint16_t_u_s(1UL, (l_1521.f0 = (((((*g_253) , l_1521) , (void*)0) == g_990) > p_10.f1))))) , l_1521.f1), 5)) <= g_301[1]), 13)))))))
        { 
            int32_t **l_1524 = &l_1523;
            (*l_1524) = l_1523;
        }
        else
        { 
            uint64_t l_1538 = 4UL;
            union U1 l_1554 = {0x820EF0FDL};
            uint64_t l_1571[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1571[i] = 0xFF5E9A62334BFAEDLL;
            for (g_1349 = 0; (g_1349 <= 21); ++g_1349)
            { 
                union U1 l_1543 = {0xD41B1E73L};
                uint32_t * const *l_1558 = &g_289;
                uint32_t l_1563 = 0x115B0390L;
                if (((*g_289) > (safe_mul_func_int16_t_s_s(p_10.f5, p_9.f5))))
                { 
                    int32_t *l_1529 = &l_1399;
                    int32_t *l_1530 = &l_1397;
                    int32_t *l_1531 = &g_1019;
                    int32_t *l_1532 = &l_1397;
                    int32_t *l_1533 = (void*)0;
                    int32_t *l_1534 = &l_1395;
                    int32_t *l_1535 = &g_45[0];
                    int32_t *l_1536 = &l_1339;
                    int32_t *l_1537[7][3] = {{&g_45[1],&g_45[1],&l_1339},{(void*)0,(void*)0,(void*)0},{&l_1339,&l_1400[0],&l_1396},{(void*)0,(void*)0,(void*)0},{&g_45[1],&l_1339,&l_1396},{&l_1396,&l_1396,(void*)0},{&g_45[2],&l_1339,&l_1339}};
                    int i, j;
                    l_1538--;
                    if (g_1541)
                        break;
                }
                else
                { 
                    struct S0 l_1542 = {110,-1372,1307,4,2844,-20,0};
                    const int32_t *l_1546 = (void*)0;
                    const int32_t **l_1545 = &l_1546;
                    const int32_t *l_1550[3];
                    const int32_t **l_1549 = &l_1550[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1550[i] = (void*)0;
                    (*l_1523) &= (p_9.f1 == ((func_11(l_1542, l_1543, p_10.f6) , ((void*)0 == l_1544)) >= p_10.f2));
                    if (l_1459)
                        continue;
                    (*l_1549) = (g_1547 = ((*l_1545) = &g_45[1]));
                }
                for (g_296 = 0; (g_296 <= 1); g_296 += 1)
                { 
                    uint32_t l_1551 = 0xC925F8CBL;
                    int16_t *l_1564 = &g_1456;
                    int32_t **l_1572 = &g_629;
                    (*l_1523) = (((***l_1476) &= ((l_1551 , (((((((safe_div_func_uint32_t_u_u((p_10.f3 && (((*l_1544) = ((l_1554 , (safe_sub_func_uint32_t_u_u((((p_10.f3 , (((+(-1L)) , (*l_1523)) > ((0xF0823D0AL & 0xFC088213L) == 0L))) < p_9.f0) , 0x948C249BL), 4294967290UL))) | p_9.f4)) ^ p_10.f5)), l_1538)) && p_9.f5) , &g_289) != l_1558) < l_1559) ^ l_1554.f0) < 4294967295UL)) , l_1551)) ^ l_1543.f0);
                    (*l_1572) = (((((p_10.f0 || p_10.f2) ^ (safe_rshift_func_int16_t_s_s(p_10.f4, (((safe_unary_minus_func_int64_t_s((((*l_1522) ^= l_1563) >= (((*l_1564) = p_10.f4) >= (safe_mod_func_int8_t_s_s((!(0L ^ (safe_lshift_func_int16_t_s_s((((l_1570 , l_1538) | l_1571[1]) != 4294967295UL), 10)))), p_9.f1)))))) , (*l_1523)) >= 1UL)))) != 18446744073709551613UL) >= g_56) , (void*)0);
                    if (p_9.f2)
                        break;
                }
                (*l_1523) |= 0x62206C4AL;
            }
            (*l_1523) |= 1L;
        }
        for (l_1399 = 0; (l_1399 < 5); ++l_1399)
        { 
            return p_10.f6;
        }
        (*l_1523) = ((&g_191 == &g_191) != ((18446744073709551610UL | ((((safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((((l_1579[1] == ((safe_mod_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u(((((p_9.f0 == p_10.f6) || ((**g_288) <= (*g_1547))) | (*l_1523)) == (**g_1324)), 0UL)) , p_9.f4) & (*l_1523)) != p_9.f5), p_10.f2)) , (*g_1322))) && p_9.f5) == p_9.f0) , (void*)0) == &g_549), 255UL)) >= l_1585), p_9.f1)) , (**g_288)) != p_9.f6) , p_10.f3)) && p_10.f0));
        if (p_9.f0)
        { 
            uint16_t **l_1605 = &g_667;
            const int32_t l_1607 = (-8L);
            int32_t *l_1613 = (void*)0;
            int64_t l_1614 = 0x77B07D826024CB74LL;
            int16_t l_1625[5];
            union U1 *** const l_1630 = &g_190;
            uint8_t ** const **l_1638 = (void*)0;
            int32_t l_1666 = (-1L);
            int32_t l_1669 = (-1L);
            uint32_t l_1729 = 4294967295UL;
            int32_t l_1755 = 1L;
            const uint16_t l_1756[6] = {65534UL,2UL,2UL,65534UL,2UL,2UL};
            int i;
            for (i = 0; i < 5; i++)
                l_1625[i] = 0x3189L;
            for (g_328 = 19; (g_328 > 19); ++g_328)
            { 
                int32_t ***l_1595[5][6] = {{&l_1480,&l_1480,&g_513,&l_1480,&l_1480,&l_1480},{&l_1480,&l_1480,&l_1480,&l_1480,&g_513,&l_1480},{&l_1480,&g_513,&l_1480,&l_1480,&l_1480,&l_1480},{&l_1480,&l_1480,&l_1480,&g_513,&l_1480,&l_1480},{&l_1480,&g_513,&g_513,&g_513,&g_513,&l_1480}};
                int32_t ****l_1596[2];
                int32_t l_1608 = 0x35038566L;
                int64_t *l_1609 = &l_1459;
                int64_t *l_1610 = &g_217[1][0];
                uint64_t *l_1617 = (void*)0;
                uint64_t *l_1618[1];
                uint8_t ** const *l_1640 = &g_670;
                uint8_t ** const **l_1639 = &l_1640;
                uint32_t l_1646[7] = {0xC4607824L,0x3D48BD0CL,0x3D48BD0CL,0xC4607824L,0x3D48BD0CL,0x3D48BD0CL,0xC4607824L};
                int16_t l_1663[5][7] = {{1L,0L,0xA0FDL,0x672CL,(-3L),0L,(-3L)},{1L,(-3L),(-3L),1L,1L,1L,0x720DL},{0x9BD0L,1L,0xA0FDL,1L,1L,0xA0FDL,1L},{1L,0x9BD0L,0L,0L,(-3L),0x720DL,0x720DL},{0L,0x9BD0L,1L,0x9BD0L,0L,0L,(-3L)}};
                int8_t l_1670 = 9L;
                uint8_t l_1672[2][2][1];
                union U1 l_1696[1] = {{-8L}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1596[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_1618[i] = &g_1232[5];
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1672[i][j][k] = 7UL;
                    }
                }
                (*l_1523) = ((((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_10.f6, (((*l_1610) = ((*l_1609) = (+(((l_1597 = l_1595[4][5]) != (void*)0) && ((~((safe_sub_func_int64_t_s_s(((((+((l_1602 , 0UL) ^ (safe_sub_func_int64_t_s_s(((0UL && ((l_1605 = &g_667) == (void*)0)) , l_1606), (*l_1523))))) && 0xC565C5A9L) , 0x6481D5ACCCBBB823LL) == 0L), l_1607)) < l_1608)) > (*l_1523)))))) ^ (-1L)))) || p_10.f3), g_28.f2)) || p_9.f0) & p_9.f1) | l_1607);
                for (g_39 = (-26); (g_39 > 47); ++g_39)
                { 
                    l_1613 = l_1523;
                    return l_1614;
                }
                if ((((p_10.f4 = ((safe_add_func_uint32_t_u_u(p_10.f1, (((*l_1523) = 8UL) || (safe_div_func_uint8_t_u_u(((((*l_1544) = (((safe_lshift_func_uint8_t_u_s((((p_10.f3 & (***g_1323)) , ((safe_lshift_func_uint16_t_u_s((((**g_1256) = ((p_10.f0 = 0x2E29715CL) >= ((*g_289) = 0xCEAF8AEDL))) , (0x326DL > p_9.f5)), l_1625[2])) , l_1626)) != (void*)0), 5)) ^ p_10.f6) >= 1UL)) , &g_513) != (void*)0), p_9.f6))))) && (**g_288))) ^ 9L) == p_9.f6))
                { 
                    uint16_t l_1631[2];
                    int32_t l_1647 = 0x8D5F7A1AL;
                    int32_t l_1655 = (-1L);
                    uint16_t *l_1661[4][6][2] = {{{&l_1631[1],&l_1631[1]},{&l_1631[1],&l_1631[1]},{&g_39,&l_1631[0]},{&l_1631[1],&l_1631[0]},{&g_39,&l_1631[1]},{&l_1631[1],&l_1631[1]}},{{&l_1631[1],(void*)0},{&g_39,&l_1631[1]},{(void*)0,&l_1631[0]},{&l_1631[1],(void*)0},{&l_1631[1],&l_1631[1]},{&l_1631[1],(void*)0}},{{&l_1631[1],&l_1631[0]},{(void*)0,&l_1631[1]},{&g_39,(void*)0},{&l_1631[1],&l_1631[1]},{&l_1631[1],&l_1631[1]},{&g_39,&l_1631[0]}},{{&l_1631[1],&l_1631[0]},{&g_39,&l_1631[1]},{&l_1631[1],&l_1631[1]},{&l_1631[1],(void*)0},{&g_39,&l_1631[1]},{(void*)0,&l_1631[0]}}};
                    int32_t l_1662 = 0xD721BFB8L;
                    int32_t l_1664 = 0xA709F174L;
                    int32_t l_1665[6] = {0x1BC76DBCL,0x86EF57A8L,0x1BC76DBCL,0x1BC76DBCL,0x86EF57A8L,0x1BC76DBCL};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1631[i] = 0UL;
                    if ((*g_1547))
                        break;
                    (*l_1523) = (((*g_289) = 0x8632ED6CL) && (((p_10.f2 , (+(safe_lshift_func_int8_t_s_u(g_1548, (l_1630 != (void*)0))))) , l_1631[1]) ^ (safe_mod_func_int16_t_s_s((((safe_div_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((void*)0 == (**g_1323)), p_9.f3)) , p_10.f1) == g_1394), p_9.f3)) > p_9.f2) && p_10.f3), 0x01CDL))));
                    l_1639 = l_1638;
                    g_21.f0 &= ((*l_1523) = l_1397);
                    l_1665[4] = (safe_div_func_int64_t_s_s((+(safe_sub_func_int32_t_s_s((((l_1647 &= ((*l_1544) = l_1646[1])) == (safe_mul_func_uint16_t_u_u(((l_1664 = ((l_1663[0][5] |= (l_1662 = ((*l_1523) = ((p_9.f3 != (safe_unary_minus_func_int64_t_s((safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((((l_1655 = p_10.f1) >= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((p_9.f0 ^ ((void*)0 == (*g_190))), ((!g_95) > p_9.f4))), p_10.f1))) != p_10.f4) >= p_9.f1), l_1631[1])) == p_9.f0) ^ (*l_1523)), l_1625[3]))))) < 0x8003L)))) != p_9.f5)) ^ p_9.f0), l_1631[0]))) || p_10.f4), l_1665[0]))), g_28.f2));
                }
                else
                { 
                    int16_t l_1667 = 0x9155L;
                    int32_t l_1668[4][1][4] = {{{(-4L),0L,(-4L),(-4L)}},{{0L,0L,0x9C6444C0L,0L}},{{0L,(-4L),(-4L),0L}},{{(-4L),0L,(-4L),(-4L)}}};
                    int32_t l_1681 = (-1L);
                    int i, j, k;
                    ++l_1672[1][0][0];
                    p_10.f1 &= (g_296 == (((((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_1681 &= (safe_mul_func_uint8_t_u_u(0x2AL, l_1668[1][0][0]))), 0xC8CBL)), (*l_1523))) , (safe_div_func_uint16_t_u_u(p_9.f4, (safe_mod_func_uint8_t_u_u(0xCDL, g_1349))))) <= 6L) , (void*)0) != (void*)0));
                    return p_10.f5;
                }
                for (g_402 = (-25); (g_402 > 56); g_402 = safe_add_func_int16_t_s_s(g_402, 8))
                { 
                    int64_t l_1704 = 0xC3CF6BF216424723LL;
                    int32_t l_1705[4][3] = {{0xB79FFAFBL,0xB79FFAFBL,0xB79FFAFBL},{0x667A6DFBL,0x667A6DFBL,0x667A6DFBL},{0xB79FFAFBL,0xB79FFAFBL,0xB79FFAFBL},{0x667A6DFBL,0x667A6DFBL,0x667A6DFBL}};
                    uint16_t *l_1707 = &g_39;
                    uint32_t *l_1708 = &g_146;
                    int32_t *l_1709 = &l_1666;
                    int i, j;
                    p_10.f0 ^= ((safe_sub_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((*l_1708) = ((*g_289) = ((((*l_1707) = ((safe_mod_func_uint16_t_u_u(0x24BDL, (safe_mod_func_int64_t_s_s((l_1696[0] , (p_10.f6 > (g_28.f0 ^= (safe_div_func_int64_t_s_s((((((((safe_rshift_func_uint8_t_u_u(((((((safe_sub_func_int8_t_s_s(p_10.f6, (~(l_1705[3][1] &= (l_1704 >= g_549))))) == (((void*)0 != g_990) , l_1706[3])) != p_9.f2) == p_9.f1) , (*l_1523)) && p_9.f6), p_9.f1)) >= p_10.f1) | p_10.f4) ^ (-1L)) < 0x0E673798170DE597LL) != 0xDA1AL) < 0UL), p_9.f1))))), 0xE97FADCBB6413CA7LL)))) < p_9.f3)) > p_9.f6) || p_9.f1))), p_10.f3)) , p_10.f2) == 0xC297L), p_10.f5)) ^ (*l_1523));
                    l_1709 = &l_1666;
                }
                p_10.f1 |= (((+((((safe_div_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0x431FL, ((p_9.f1 , (safe_sub_func_int8_t_s_s(0L, (safe_lshift_func_int8_t_s_u(0x3FL, 6))))) == (((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s((p_10.f0 <= (safe_div_func_uint16_t_u_u((~l_1607), 2UL))), p_10.f6)))) | (*l_1523)) || l_1729) < p_10.f5) != 0UL)))), p_9.f5)) ^ p_10.f5), l_1614)) ^ p_9.f1) , p_9) , g_28.f5)) == g_28.f2) ^ 1UL);
            }
            l_1730 = (l_1613 = &l_1669);
            (*l_1730) = (safe_lshift_func_uint8_t_u_u((*l_1613), 1));
            for (g_1115 = (-11); (g_1115 == 60); ++g_1115)
            { 
                uint32_t * const *l_1754[1][4][3] = {{{&g_289,&g_289,&g_289},{(void*)0,(void*)0,&g_289},{&g_289,&g_289,&g_289},{(void*)0,(void*)0,&g_289}}};
                const int32_t *l_1757 = (void*)0;
                const int32_t **l_1758 = &l_1757;
                int i, j, k;
                (*l_1613) = (*g_1547);
                (*l_1613) = ((p_10.f0 , ((((g_1735 = g_1735) == l_1738) , ((*l_1730) == (0xA9DA5524E9233346LL ^ (safe_lshift_func_uint16_t_u_u((p_10.f0 & (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((!((*l_1544) = ((((safe_sub_func_int16_t_s_s((+(safe_add_func_uint16_t_u_u((((**l_1475) = (**l_1475)) != l_1754[0][0][1]), p_9.f2))), p_9.f3)) == p_10.f1) <= 0x1D11L) | l_1755))), p_10.f2)) & (*l_1523)), p_10.f5)) | (*l_1523)), p_9.f2))), l_1756[5]))))) , 255UL)) != p_10.f3);
                (*l_1758) = l_1757;
            }
            (*l_1730) &= p_10.f5;
        }
        else
        { 
            return p_9.f3;
        }
        for (l_1399 = 1; (l_1399 <= 1); l_1399 = safe_add_func_uint16_t_u_u(l_1399, 1))
        { 
            int32_t **l_1761[5];
            int32_t ****l_1763 = (void*)0;
            int32_t ****l_1764[2][7][3] = {{{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,(void*)0,&l_1597},{&l_1597,&l_1597,&l_1597}},{{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,(void*)0,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597},{&l_1597,&l_1597,&l_1597}}};
            uint8_t *l_1773[7] = {&g_738,&g_738,&g_738,&g_738,&g_738,&g_738,&g_738};
            uint8_t **l_1779[2];
            int64_t *l_1780 = &g_56;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1761[i] = &l_1730;
            for (i = 0; i < 2; i++)
                l_1779[i] = &l_1544;
            l_1730 = (g_1762 = (g_629 = (void*)0));
            g_1765 = (void*)0;
            l_1338 |= (safe_sub_func_uint64_t_u_u((!0L), ((*l_1780) = (((safe_mod_func_uint8_t_u_u(((*l_1544) = (safe_mod_func_uint16_t_u_u((((l_1773[1] = (void*)0) != (void*)0) == (safe_mod_func_uint8_t_u_u((&l_1730 != ((((((****g_1322) | 1L) & (((safe_unary_minus_func_int64_t_s(g_402)) | p_9.f2) <= p_10.f0)) , l_1779[1]) == (void*)0) , &g_629)), 0x0EL))), 0x0632L))), (-7L))) != 4294967294UL) > p_10.f2))));
            if (((void*)0 != &g_28))
            { 
                uint32_t l_1781 = 18446744073709551611UL;
                if ((*g_1547))
                { 
                    p_10.f1 &= ((void*)0 != &g_1232[5]);
                }
                else
                { 
                    l_1730 = (void*)0;
                    l_1781 &= (*g_1547);
                    if (p_10.f2)
                        break;
                }
                (*l_1523) &= (safe_sub_func_int8_t_s_s(((65532UL | (safe_mul_func_int8_t_s_s(((((-1L) && (65528UL == (((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_1781, 12)) < g_402), ((((((p_9.f0 != (&g_1257 == &g_1257)) == p_10.f5) <= p_10.f2) < 0x0F82L) | p_10.f1) , p_9.f6))) == p_10.f6) & l_1781))) , 0x7CL) >= p_9.f0), p_9.f4))) , p_10.f2), p_10.f6));
            }
            else
            { 
                (*l_1523) = p_9.f1;
                return p_10.f4;
            }
        }
    }
    for (l_1570 = 0; (l_1570 > 33); l_1570 = safe_add_func_int64_t_s_s(l_1570, 1))
    { 
        int64_t l_1792 = 0xA31F2FD786BC262CLL;
        return l_1792;
    }
    l_1399 ^= (((safe_add_func_int32_t_s_s(l_1397, p_10.f1)) , (((((*l_1811) = (l_1795 || ((safe_add_func_uint32_t_u_u(((((*****g_1321) && (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_1810) = (~(safe_div_func_int64_t_s_s((l_1626 == &g_1232[5]), (safe_mod_func_uint8_t_u_u(((((((void*)0 != &l_1315) ^ l_1807[0][1]) ^ p_10.f4) == p_10.f0) ^ l_1404), p_9.f5)))))) <= p_10.f5), p_9.f0)), 0x2F1B6BD29C869007LL))) > g_1232[3]) || (**g_288)), 0xA0180A68L)) , (*l_1810)))) || p_9.f3) & 0x4982705C28426099LL) | 0L)) && 0x1BEBL);
    if (((safe_mul_func_uint8_t_u_u((((void*)0 == &l_1400[0]) != p_10.f0), (l_1433 != (void*)0))) == (safe_div_func_int64_t_s_s((((p_9.f6 , (*l_1475)) != (*l_1475)) != (*l_1810)), p_9.f3))))
    { 
        uint32_t *l_1820 = (void*)0;
        uint32_t *l_1821 = &l_1460;
        int32_t l_1835[1][4] = {{0x79E01359L,0x79E01359L,0x79E01359L,0x79E01359L}};
        int32_t l_1836[3][4][3] = {{{0x58820381L,0x4B5FC318L,0x58820381L},{6L,0xDB92DBB2L,6L},{0x58820381L,0x4B5FC318L,0x58820381L},{6L,0xDB92DBB2L,6L}},{{0x58820381L,0x4B5FC318L,0x58820381L},{6L,0xDB92DBB2L,6L},{0x58820381L,0x4B5FC318L,0x58820381L},{6L,0xDB92DBB2L,6L}},{{0x58820381L,0x4B5FC318L,0x58820381L},{6L,0xDB92DBB2L,6L},{0x58820381L,0x4B5FC318L,0x58820381L},{6L,0xDB92DBB2L,6L}}};
        int16_t *l_1843 = &g_1456;
        uint8_t *l_1848 = &g_738;
        union U1 l_1851 = {0x88FB1BB7L};
        uint16_t l_1852 = 65535UL;
        int8_t *l_1853 = (void*)0;
        int8_t *l_1854 = &l_1795;
        int i, j, k;
        (*l_1810) = ((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((((*l_1821) &= (**g_288)) && (safe_div_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((~(safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((l_1835[0][3] = (~(safe_lshift_func_int8_t_s_s(g_1349, (safe_sub_func_int8_t_s_s((p_9.f5 , ((void*)0 == &g_598)), ((void*)0 == l_1811))))))), 246UL)) && p_10.f4) || 8L), p_9.f0))) <= p_10.f6))), g_28.f3))), l_1836[2][3][1])) , &g_1736) != (void*)0), l_1836[2][2][2])) != g_56);
        (*l_1810) = ((void*)0 != (**g_1323));
        g_600.f5 |= (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((p_10.f1 ^ (1UL ^ (safe_add_func_uint32_t_u_u(((**g_252) && ((*l_1843) = 0xA0BEL)), ((safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((--(*l_1848)), ((*l_1854) &= (l_1851 , (l_1835[0][3] >= l_1852))))) && 1L) >= 6UL), g_28.f5)) || 0xAB0E8E47L))))) , 3L) && p_9.f0), p_10.f6)), g_146));
    }
    else
    { 
        return p_10.f1;
    }
    return l_1855;
}



static struct S0  func_11(struct S0  p_12, union U1  p_13, int16_t  p_14)
{ 
    return (*g_599);
}



static struct S0  func_15(union U1  p_16, const uint32_t  p_17, int8_t  p_18, uint32_t  p_19, struct S0  p_20)
{ 
    int32_t *l_1149 = &g_45[0];
    int32_t *l_1150[2];
    uint8_t l_1151[1];
    uint32_t *l_1180[2];
    uint32_t **l_1179 = &l_1180[0];
    const uint32_t *l_1254 = (void*)0;
    const uint32_t **l_1253 = &l_1254;
    uint32_t ***l_1285 = &g_288;
    uint32_t ***l_1289 = &g_288;
    int32_t l_1308 = 0x7C6C056DL;
    union U1 *l_1311 = &g_21;
    struct S0 l_1312 = {805,1619,585,0,2353,-0,1};
    int i;
    for (i = 0; i < 2; i++)
        l_1150[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1151[i] = 255UL;
    for (i = 0; i < 2; i++)
        l_1180[i] = &g_296;
lbl_1184:
    l_1151[0]++;
    for (g_95 = 0; (g_95 >= (-3)); g_95--)
    { 
        union U1 l_1178 = {0x1C0B9CACL};
        int32_t l_1193 = 5L;
        int32_t l_1199 = 9L;
        uint64_t *l_1240 = &g_1232[2];
        uint32_t ***l_1290 = (void*)0;
        uint32_t l_1309 = 4UL;
        for (g_296 = (-1); (g_296 > 5); g_296 = safe_add_func_uint32_t_u_u(g_296, 8))
        { 
            int16_t l_1171[7] = {0L,0x66DFL,0L,0L,0x66DFL,0L,0L};
            uint32_t **l_1175 = (void*)0;
            uint32_t **l_1182 = &l_1180[0];
            int32_t l_1188 = 0x16403B6CL;
            int32_t l_1197 = 0x511E3804L;
            int32_t l_1198[5] = {1L,1L,1L,1L,1L};
            uint16_t l_1200 = 65535UL;
            struct S0 l_1235 = {-428,-2160,1099,5,7294,11,0};
            int8_t *l_1245 = (void*)0;
            const uint32_t ***l_1255 = &l_1253;
            uint16_t *l_1264 = &g_39;
            uint32_t ****l_1286 = (void*)0;
            uint32_t ****l_1287 = (void*)0;
            uint32_t ****l_1288[3][2][5] = {{{&l_1285,&l_1285,&l_1285,&l_1285,&l_1285},{&l_1285,&l_1285,&l_1285,&l_1285,&l_1285}},{{&l_1285,&l_1285,&l_1285,&l_1285,&l_1285},{&l_1285,&l_1285,&l_1285,&l_1285,&l_1285}},{{&l_1285,&l_1285,&l_1285,&l_1285,&l_1285},{&l_1285,&l_1285,&l_1285,&l_1285,&l_1285}}};
            int i, j, k;
            for (g_549 = (-2); (g_549 != (-22)); g_549 = safe_sub_func_uint64_t_u_u(g_549, 1))
            { 
                int16_t l_1189 = 0xEE6FL;
                int32_t l_1190 = 0x0BC1F701L;
                int32_t l_1191 = 0xB47B533AL;
                int32_t l_1192 = 0x07C18423L;
                int32_t l_1194 = (-1L);
                int32_t l_1195 = (-6L);
                int32_t l_1196[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                int8_t l_1230 = (-1L);
                const uint64_t l_1233[4][5][6] = {{{4UL,18446744073709551615UL,0x46B880373F82071CLL,0x720C36EA5F8A1283LL,0x46B880373F82071CLL,18446744073709551615UL},{18446744073709551606UL,4UL,0x46B880373F82071CLL,0x49182ED4F59A4F1CLL,18446744073709551613UL,0x720C36EA5F8A1283LL},{0x6AFB7E36B1095615LL,0x49182ED4F59A4F1CLL,18446744073709551615UL,18446744073709551615UL,0x49182ED4F59A4F1CLL,0x6AFB7E36B1095615LL},{18446744073709551615UL,0x49182ED4F59A4F1CLL,0x6AFB7E36B1095615LL,18446744073709551615UL,18446744073709551613UL,0x46B880373F82071CLL},{0x46B880373F82071CLL,4UL,18446744073709551606UL,4UL,0x46B880373F82071CLL,0x49182ED4F59A4F1CLL}},{{0x46B880373F82071CLL,18446744073709551615UL,4UL,18446744073709551615UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551615UL,18446744073709551613UL,18446744073709551613UL,18446744073709551615UL,18446744073709551606UL,18446744073709551612UL},{0x6AFB7E36B1095615LL,18446744073709551612UL,4UL,0x49182ED4F59A4F1CLL,18446744073709551615UL,0x49182ED4F59A4F1CLL},{18446744073709551606UL,0xD57FD619E73C393DLL,18446744073709551606UL,0x720C36EA5F8A1283LL,18446744073709551615UL,0x46B880373F82071CLL},{4UL,18446744073709551612UL,0x6AFB7E36B1095615LL,18446744073709551606UL,18446744073709551606UL,0x6AFB7E36B1095615LL}},{{18446744073709551613UL,18446744073709551613UL,18446744073709551615UL,18446744073709551606UL,18446744073709551612UL,0x720C36EA5F8A1283LL},{4UL,18446744073709551615UL,0x46B880373F82071CLL,0x720C36EA5F8A1283LL,0x46B880373F82071CLL,18446744073709551615UL},{18446744073709551606UL,4UL,0x46B880373F82071CLL,0x49182ED4F59A4F1CLL,18446744073709551613UL,0x720C36EA5F8A1283LL},{0x6AFB7E36B1095615LL,0x49182ED4F59A4F1CLL,18446744073709551615UL,18446744073709551615UL,0x49182ED4F59A4F1CLL,0x6AFB7E36B1095615LL},{18446744073709551615UL,0x49182ED4F59A4F1CLL,0x6AFB7E36B1095615LL,18446744073709551615UL,18446744073709551613UL,0x46B880373F82071CLL}},{{0x46B880373F82071CLL,4UL,18446744073709551606UL,4UL,0x46B880373F82071CLL,0x49182ED4F59A4F1CLL},{0x46B880373F82071CLL,18446744073709551615UL,4UL,18446744073709551615UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551615UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,0x49182ED4F59A4F1CLL,0x46B880373F82071CLL},{18446744073709551606UL,0x46B880373F82071CLL,0xD57FD619E73C393DLL,18446744073709551615UL,18446744073709551612UL,18446744073709551615UL},{0x49182ED4F59A4F1CLL,18446744073709551615UL,0x49182ED4F59A4F1CLL,4UL,18446744073709551612UL,0x6AFB7E36B1095615LL}}};
                int64_t *l_1241 = &g_217[1][0];
                int8_t *l_1242 = &g_328;
                int8_t *l_1246[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1246[i] = &g_232[3];
                if ((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((+(safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(l_1171[0], (((+(safe_div_func_uint64_t_u_u(p_20.f4, g_146))) , l_1175) == (void*)0))), 5))), 0xD048L)) != (safe_lshift_func_uint8_t_u_s((l_1178 , p_20.f1), 6))), l_1171[0])) & l_1171[3]) | p_20.f1), p_20.f4)))
                { 
                    uint32_t ***l_1181[2];
                    int32_t l_1183 = 0x95709766L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1181[i] = &l_1179;
                    l_1182 = l_1179;
                    l_1183 = (((*g_289) &= 0UL) >= 1L);
                    if (g_549)
                        goto lbl_1184;
                }
                else
                { 
                    uint32_t ****l_1185 = (void*)0;
                    uint32_t ***l_1187 = &g_288;
                    uint32_t ****l_1186 = &l_1187;
                    l_1188 ^= ((*l_1149) ^= ((((*l_1186) = &g_288) == &l_1175) != 0UL));
                    return p_20;
                }
                ++l_1200;
                for (g_39 = 0; (g_39 == 2); g_39 = safe_add_func_int64_t_s_s(g_39, 7))
                { 
                    uint64_t *l_1231 = &g_1232[5];
                    int32_t l_1234 = 1L;
                    (*l_1149) = (((safe_mul_func_int8_t_s_s(0x9CL, (l_1197 = (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((l_1198[1] |= (safe_mod_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(g_548, (safe_mod_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(((((*l_1231) = ((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((p_19 != 7UL) & (l_1230 ^ 3L)), 3UL)) != p_19), 0xCBL)), p_20.f1)) || 7L), p_18)) <= 0x6B01E0A0C3FB4EE4LL)) < (-1L)) >= l_1233[0][1][0]), (*l_1149))) && p_20.f6) != g_28.f5) == p_19) ^ l_1197), (*l_1149))))) && 248UL) & l_1197), 255UL))), p_20.f2)), p_20.f4)), 0x38L)) < l_1234)))))) , g_45[0]) ^ g_217[3][0]);
                    return l_1235;
                }
                for (g_146 = 0; (g_146 < 52); g_146++)
                { 
                    return p_20;
                }
                l_1195 = (((*l_1242) |= ((l_1240 != (void*)0) ^ ((*l_1241) |= (-8L)))) == (g_232[1] = (4UL <= ((0xF6933EF9876C35B4LL | ((void*)0 != l_1245)) <= (*g_289)))));
            }
            (*l_1149) = (((*g_289) ^= (((((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((*l_1255) = l_1253) != g_1256), 5)) == p_20.f5), (safe_mod_func_uint8_t_u_u(0xBEL, (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_1264) ^= p_20.f4), p_20.f3)) == (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(0UL)), 0UL))), p_20.f6)))))), 1L)) >= l_1199) && l_1235.f1) , 0x4C7BED91D1362D86LL) == p_20.f1)) > p_20.f0);
            (*l_1149) = (safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((~(-1L)), (safe_mod_func_int16_t_s_s((((*g_289)--) != ((l_1285 = l_1285) != (l_1290 = l_1289))), ((*l_1264) = 65531UL))))), (!((4UL < (p_20.f6 && (((!(&g_289 == (void*)0)) != (*l_1149)) == 0x2CFCA2CBL))) && (*l_1149))))), p_20.f0)), p_20.f4)) >= l_1193), 5));
            if ((((safe_add_func_int32_t_s_s(((g_232[3] = (safe_lshift_func_uint16_t_u_u(((((p_19 , (~(((safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(p_16.f0, ((safe_rshift_func_uint16_t_u_s(l_1171[4], 1)) > (l_1199 ^ (safe_mul_func_int8_t_s_s(g_95, ((safe_mul_func_uint16_t_u_u((((p_20.f6 > (((*g_599) , (*g_289)) , 0x30B7L)) <= p_20.f1) & l_1308), l_1193)) | 0xB77EL))))))) == l_1309), p_20.f1)) | g_600.f1) != l_1235.f0))) >= 18446744073709551615UL) & l_1193) || p_20.f4), 13))) >= p_20.f3), (*l_1149))) ^ g_393) | (-3L)))
            { 
                (*l_1149) |= 1L;
            }
            else
            { 
                int32_t **l_1310 = &l_1150[0];
                (*l_1310) = &l_1198[3];
            }
            (*g_190) = l_1311;
        }
    }
    return l_1312;
}



static uint8_t  func_25(struct S0  p_26, int32_t  p_27)
{ 
    for (g_56 = 2; (g_56 == (-26)); g_56--)
    { 
        for (g_549 = 2; (g_549 >= 0); g_549 -= 1)
        { 
            int i;
            return g_45[g_549];
        }
    }
    return p_26.f5;
}



static struct S0  func_31(uint32_t  p_32, int16_t  p_33, int16_t  p_34)
{ 
    uint64_t *l_1136[5][3] = {{&g_548,&g_548,(void*)0},{&g_548,(void*)0,(void*)0},{&g_548,&g_548,(void*)0},{(void*)0,&g_548,(void*)0},{&g_548,&g_548,&g_548}};
    int32_t l_1137 = 0xB07DACC3L;
    int16_t *l_1140 = (void*)0;
    int16_t *l_1141 = &g_154;
    union U1 **l_1142 = &g_191;
    int8_t *l_1143[5];
    int32_t *l_1144 = (void*)0;
    struct S0 l_1145 = {828,-2532,1257,3,6290,-18,1};
    int i, j;
    for (i = 0; i < 5; i++)
        l_1143[i] = (void*)0;
    l_1137 |= ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((-9L), (g_232[3] = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(p_33, ((((*l_1141) = (+(g_548--))) | 0x5828L) && (p_34 , ((*g_289) ^ ((void*)0 != l_1142)))))) <= 0L), p_33))))), p_33)) > p_33);
    return l_1145;
}



static uint64_t  func_35(uint16_t  p_36, uint16_t  p_37)
{ 
    uint16_t l_47 = 0xF804L;
    int32_t l_82 = 4L;
    int32_t l_102 = 0xAA0F805AL;
    int32_t l_104 = 0xC1B3DFEAL;
    int32_t l_105 = 0x4B0677A0L;
    int32_t l_106 = 4L;
    int32_t l_107 = 0L;
    int32_t l_108[7];
    int16_t l_150 = 0xCBCBL;
    uint16_t l_277 = 0xF936L;
    int32_t l_282 = 0xE36CFAE2L;
    uint32_t l_291 = 0x7487D388L;
    int64_t l_327 = 0x5C4B03A1C65866FCLL;
    uint32_t ***l_354 = &g_288;
    uint32_t l_369 = 0x76AEF64FL;
    int16_t **l_448[4];
    int64_t *l_516 = &g_217[3][0];
    int32_t *l_518 = &l_106;
    int32_t **l_517 = &l_518;
    const uint64_t l_531 = 0xA1D7DA4107D789D1LL;
    uint32_t l_626 = 0x2AF702D8L;
    struct S0 **l_643 = &g_599;
    int16_t * const l_665 = &l_150;
    int16_t * const *l_664 = &l_665;
    int16_t * const **l_663[5];
    int16_t * const ***l_662 = &l_663[0];
    uint32_t l_668[3][3] = {{0UL,0UL,0UL},{3UL,3UL,3UL},{0UL,0UL,0UL}};
    const struct S0 l_865 = {-673,-5318,447,4,7754,-16,0};
    int32_t l_918 = 1L;
    union U1 l_957[2][4] = {{{7L},{7L},{0x281B1CA0L},{7L}},{{7L},{1L},{1L},{7L}}};
    struct S0 l_1015 = {-556,-3414,2059,2,3202,-10,0};
    uint16_t l_1050[3][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL}};
    uint8_t ***l_1059 = &g_670;
    uint8_t ****l_1058 = &l_1059;
    int i, j;
    for (i = 0; i < 7; i++)
        l_108[i] = 0xD717EF14L;
    for (i = 0; i < 4; i++)
        l_448[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_663[i] = &l_664;
lbl_294:
    for (g_39 = (-17); (g_39 == 45); g_39 = safe_add_func_uint16_t_u_u(g_39, 8))
    { 
        int32_t *l_44 = &g_45[1];
        int32_t *l_46[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_46[i][j] = (void*)0;
        }
        l_47--;
    }
    for (g_39 = (-25); (g_39 >= 28); g_39++)
    { 
        int32_t l_54[3][1];
        int64_t *l_55 = &g_56;
        uint64_t l_65 = 8UL;
        uint64_t l_96 = 0xCE03596026DF2D4CLL;
        uint16_t l_109 = 0UL;
        int32_t *l_117[4];
        int16_t *l_142 = (void*)0;
        int8_t l_144 = 0x93L;
        uint64_t l_157[5] = {0UL,0UL,0UL,0UL,0UL};
        int8_t l_160[1][2][4] = {{{0x57L,0x57L,0x57L,0x57L},{0x57L,0x57L,0x57L,0x57L}}};
        uint32_t l_163 = 5UL;
        union U1 *l_188 = &g_21;
        union U1 ** const l_187 = &l_188;
        int32_t l_196[1][7] = {{9L,9L,9L,9L,9L,9L,9L}};
        uint64_t *l_292[3];
        const uint32_t *l_330 = &l_291;
        const uint32_t **l_329[3][6] = {{&l_330,&l_330,(void*)0,(void*)0,&l_330,&l_330},{(void*)0,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,(void*)0,(void*)0,&l_330,&l_330,(void*)0}};
        uint32_t *l_342 = &g_147[0][5][1];
        uint16_t *l_345 = (void*)0;
        uint16_t *l_346 = &l_277;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_54[i][j] = 0x4ED7B975L;
        }
        for (i = 0; i < 4; i++)
            l_117[i] = &l_82;
        for (i = 0; i < 3; i++)
            l_292[i] = (void*)0;
        g_45[1] ^= g_28.f5;
        if ((((((1UL == (safe_sub_func_int32_t_s_s((((((((*l_55) ^= l_54[1][0]) | 3L) == (((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((g_45[1] , ((safe_sub_func_uint64_t_u_u(p_37, ((((0x8ADB298FL <= (&l_54[1][0] == (void*)0)) < l_54[1][0]) <= (-7L)) < p_37))) <= 6L)), p_36)), g_45[0])) | g_28.f3) == p_36)) || 0x22AAL) == l_65) , 0x40F8590CL), g_28.f5))) , 1UL) , p_37) ^ g_28.f0) , l_54[0][0]))
        { 
            int64_t *l_68 = &g_56;
            int32_t l_81 = 4L;
            int32_t *l_83 = &g_45[1];
            uint16_t *l_93 = &g_39;
            int16_t *l_94 = &g_95;
            int32_t *l_97 = &g_45[2];
            int32_t *l_98 = &l_81;
            int32_t *l_99 = &g_45[0];
            int32_t *l_100 = &l_82;
            int32_t *l_101[7] = {&g_45[1],&g_45[1],&g_45[1],&g_45[1],&g_45[1],&g_45[1],&g_45[1]};
            int32_t l_103 = 0L;
            int32_t l_112 = (-1L);
            uint32_t l_113 = 4294967290UL;
            int32_t **l_116[5][4][5] = {{{(void*)0,(void*)0,(void*)0,&l_100,&l_100},{&l_101[3],&l_100,&l_101[0],&l_100,&l_100},{&l_100,&l_83,&l_100,&l_83,&l_101[0]},{&l_101[0],&l_100,&l_101[3],(void*)0,&l_101[0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_100},{&l_101[0],(void*)0,&l_101[3],&l_101[0],&l_100},{&l_101[0],&l_101[3],&l_100,&l_101[3],&l_101[0]},{(void*)0,(void*)0,&l_101[0],&l_101[0],(void*)0}},{{&l_101[0],(void*)0,(void*)0,(void*)0,(void*)0},{&l_100,&l_101[3],&l_101[0],(void*)0,(void*)0},{&l_101[3],(void*)0,&l_101[0],&l_83,&l_101[0]},{(void*)0,(void*)0,(void*)0,&l_100,&l_100}},{{&l_101[3],&l_100,&l_101[0],&l_100,&l_100},{&l_100,&l_83,&l_100,&l_83,&l_101[0]},{&l_101[0],&l_100,&l_101[3],(void*)0,&l_101[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_100}},{{&l_101[0],(void*)0,&l_101[3],&l_101[0],&l_100},{&l_101[0],&l_101[3],&l_100,&l_101[3],&l_101[0]},{(void*)0,(void*)0,&l_101[0],&l_100,&l_83},{&l_100,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            (*l_83) &= ((safe_mul_func_int8_t_s_s(g_28.f3, (((void*)0 != l_68) , (safe_sub_func_uint8_t_u_u(p_36, (safe_sub_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((~(p_36 < (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(p_37)) || (l_82 = (l_81 == 7UL))), 0x6617FA17L)))), g_28.f1)) && 0L), l_65)) && g_28.f2), p_37))))))) , 0x5B48F270L);
            (*l_83) = ((0x1D2EL > ((safe_add_func_uint8_t_u_u((0x63F3D54CDCAC19DALL != g_21.f0), ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((g_28.f6 , (safe_sub_func_uint32_t_u_u(l_65, ((((*l_94) = (safe_add_func_uint8_t_u_u(((void*)0 != l_93), 9L))) >= l_47) < (*l_83))))))), p_36)) < (*l_83)))) | g_28.f0)) , l_96);
            l_109--;
            l_113++;
            l_117[3] = &g_45[2];
        }
        else
        { 
            uint32_t l_118 = 18446744073709551615UL;
            int64_t *l_121[4] = {&g_56,&g_56,&g_56,&g_56};
            int16_t *l_129 = &g_95;
            union U1 l_143 = {2L};
            int32_t l_149[2][5] = {{0xB4BD51CDL,0xB4BD51CDL,0xB4BD51CDL,0xB4BD51CDL,0xB4BD51CDL},{0xAE2238FFL,0xAE2238FFL,0xAE2238FFL,0xAE2238FFL,0xAE2238FFL}};
            int32_t **l_179 = &l_117[3];
            union U1 **l_189 = &l_188;
            uint32_t ** const l_290 = &g_289;
            int i, j;
            l_108[1] = ((g_28.f1 > l_118) || (safe_lshift_func_uint8_t_u_u(((((1L ^ (&g_56 == (l_121[1] = (void*)0))) ^ g_28.f6) == ((safe_div_func_uint32_t_u_u(0x9E727854L, g_21.f0)) ^ 0x04L)) || p_36), l_118)));
            if ((g_21.f0 , (g_21 , ((safe_sub_func_uint8_t_u_u(249UL, (p_37 | g_39))) > (l_107 &= l_118)))))
            { 
                uint32_t l_128 = 0x466B9169L;
                int16_t **l_130 = &l_129;
                int32_t l_151 = 1L;
                int32_t l_153 = 0L;
                int32_t l_155 = 0x44F4403AL;
                int32_t l_156 = 0x1E7A812AL;
                for (p_37 = 22; (p_37 > 55); p_37 = safe_add_func_uint8_t_u_u(p_37, 9))
                { 
                    l_128 = g_21.f0;
                    return g_28.f2;
                }
                if ((((*l_130) = l_129) != &g_95))
                { 
                    union U1 *l_131[5] = {&g_21,&g_21,&g_21,&g_21,&g_21};
                    union U1 **l_132 = &l_131[3];
                    int32_t **l_133 = &l_117[3];
                    uint32_t *l_145 = &g_146;
                    int32_t l_148 = (-5L);
                    int32_t l_152[7][1];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_152[i][j] = 0xCBAC9F7DL;
                    }
                    (*l_132) = l_131[3];
                    (*l_133) = (void*)0;
                    g_147[0][5][1] &= (safe_sub_func_uint8_t_u_u(0xE3L, (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((g_56 >= g_28.f5) ^ ((*l_145) = (((p_36 > ((safe_sub_func_int16_t_s_s((l_142 != ((*l_130) = l_142)), (((l_143 , g_45[1]) , g_28) , l_144))) || g_28.f0)) <= p_36) , 4294967289UL))), 0x4E47L)), p_37))));
                    l_104 |= l_128;
                    l_157[0]--;
                }
                else
                { 
                    int32_t l_161 = 0xB4B55F37L;
                    int32_t l_162[1][5];
                    uint32_t *l_169 = &g_146;
                    uint32_t **l_168 = &l_169;
                    uint32_t *l_171 = &g_147[1][3][1];
                    uint32_t **l_170 = &l_171;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_162[i][j] = 1L;
                    }
                    if (l_143.f0)
                        break;
                    l_163++;
                    l_108[6] = (g_56 , ((safe_div_func_uint64_t_u_u((((*l_170) = ((*l_168) = &g_147[0][5][1])) != &g_146), p_36)) > l_149[0][0]));
                }
            }
            else
            { 
                int32_t l_178[6];
                int32_t l_192 = 0xE65E92AEL;
                int32_t l_194[2][3];
                uint32_t *l_216 = (void*)0;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_178[i] = 7L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_194[i][j] = 0x43FE6205L;
                }
                for (g_146 = 0; (g_146 <= 6); g_146 += 1)
                { 
                    int32_t l_177 = 7L;
                    int i;
                    (**l_179) = (safe_div_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((((((safe_unary_minus_func_int16_t_s(p_37)) & (l_118 | l_177)) | ((l_108[g_146] = l_178[0]) && (p_37 , (((-7L) > ((((l_102 &= ((l_179 != l_179) , l_108[g_146])) | g_95) == p_36) > g_95)) > g_28.f3)))) , g_28.f1) == p_37), g_28.f0)) && (-1L)), 0x3B17L));
                    return p_37;
                }
                if (g_147[0][5][1])
                { 
                    if (p_36)
                        break;
                    if (g_28.f6)
                        break;
                }
                else
                { 
                    int16_t l_182 = (-4L);
                    int32_t l_193 = 0x9A8A8730L;
                    int32_t l_195 = 0xC918A1D3L;
                    int32_t l_197 = 0xC0FB6D2DL;
                    uint32_t l_198 = 0xB3167490L;
                    l_192 |= (safe_sub_func_int16_t_s_s(l_182, ((((((-1L) || ((((0xDA9B5F79306F493ALL & (safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_21.f0, ((void*)0 != l_187))), 7))) , (l_189 == g_190)) , g_28.f3) != p_36)) <= 0L) <= (**l_179)) <= 0x5C6F841FL) == p_36)));
                    ++l_198;
                    (**l_179) = (safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(9L, p_36)) , l_108[0]), p_36));
                    l_195 &= ((p_37 < (l_193 , (safe_rshift_func_int16_t_s_s(p_37, 12)))) == ((((p_37 , l_108[0]) >= (+l_47)) , &l_150) == (void*)0));
                }
                if ((((safe_add_func_int16_t_s_s((g_154 = ((&l_188 == (void*)0) , ((safe_rshift_func_int16_t_s_s(0x3EACL, 15)) , ((((g_45[1] = ((**l_179) &= ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((g_217[3][0] |= (l_216 == &g_147[1][4][0])), (&g_95 == &g_154))), 18446744073709551606UL)) ^ g_95))) , p_37) | 1UL) < 0x657EL)))), 0xA55CL)) , &g_39) != &l_109))
                { 
                    if ((**l_179))
                        break;
                    if (l_192)
                        break;
                }
                else
                { 
                    uint16_t l_231 = 8UL;
                    int32_t l_254 = 0x091062EFL;
                    uint16_t *l_263 = &l_231;
                    const uint16_t *l_271 = &g_272;
                    const uint16_t **l_270 = &l_271;
                    l_194[0][1] = (g_232[3] ^= ((safe_rshift_func_uint8_t_u_u(p_37, (safe_sub_func_int64_t_s_s((g_147[0][5][1] >= 0x9F60620FB379CF19LL), g_45[1])))) <= (safe_rshift_func_int16_t_s_s((+((safe_mul_func_int8_t_s_s(((g_28.f5 & (safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(l_231, l_231)) , 6L), p_36))) , 0xC3L), (-5L))) > 0x3FA2L)), l_231))));
                    l_254 = ((**l_179) = (safe_sub_func_int16_t_s_s((((*l_55) = (safe_div_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((p_36 | ((g_21.f0 == ((safe_lshift_func_int16_t_s_s(g_39, (safe_lshift_func_uint16_t_u_s(g_28.f5, (((**l_187) , (safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(8UL, (safe_div_func_int16_t_s_s(((((+((&l_142 != g_252) || l_106)) >= 0x918DL) && g_56) <= (**l_179)), g_146)))) > g_45[1]) , 8UL), p_36)), (**g_252)))) && g_147[0][5][0]))))) < 0xA998L)) , 1UL)), l_192)) > 0xF87CA8DFL), g_28.f6))) , 1L), p_37)));
                    (*l_179) = &l_254;
                    l_194[1][2] = ((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((1L && ((safe_sub_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(0x106FL, ((*l_263)--))) && ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((*l_270) = &l_47) == l_129), ((safe_sub_func_int16_t_s_s((**g_252), (safe_sub_func_int32_t_s_s(((**l_179) = l_178[4]), p_37)))) , 0UL))), 2)) , g_28.f2)) && l_106), l_277)) , 0xC4F02E37L)) > 0x1BL), g_45[2])), p_36)) ^ 0x39L);
                }
            }
            (*l_179) = &l_102;
            l_291 |= (g_45[1] = (0x65L && (safe_add_func_uint32_t_u_u((((((l_150 <= (safe_mul_func_uint8_t_u_u((((*g_253) && (((*l_55) = l_282) && (!((*l_55) = (safe_rshift_func_uint8_t_u_u(((0x47C9C755FA33FCBBLL != l_108[1]) | (g_288 == l_290)), l_282)))))) | g_45[2]), p_37))) , 0xFFAD69ECL) , g_146) == l_282) ^ 9UL), p_37))));
        }
        for (l_105 = 0; l_105 < 1; l_105 += 1)
        {
            for (l_282 = 0; l_282 < 2; l_282 += 1)
            {
                for (g_154 = 0; g_154 < 4; g_154 += 1)
                {
                    l_160[l_105][l_282][g_154] = 8L;
                }
            }
        }
        if ((0xB79847B0FE2D9C7CLL && (g_293 &= g_272)))
        { 
            int32_t l_297 = 0x34E86C85L;
            struct S0 l_298 = {398,2493,2497,9,2152,-2,1};
            const int16_t *l_300 = &g_301[1];
            const int16_t **l_299 = &l_300;
            int32_t **l_302 = &l_117[0];
            if (l_144)
                goto lbl_294;
            l_297 = ((-7L) ^ (g_296 = (safe_unary_minus_func_uint32_t_u(p_36))));
            l_298.f5 = ((l_298 , (*g_252)) == ((*l_299) = l_142));
            (*l_302) = &g_45[1];
            l_298.f5 = (safe_rshift_func_int16_t_s_u(p_36, (safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((0xF734D981D13EEEFELL == (((l_82 &= l_298.f4) ^ ((((safe_mod_func_int32_t_s_s(((((((p_36 > ((safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s((l_327 |= ((safe_sub_func_int8_t_s_s(g_232[3], g_146)) > (**g_288))), (**g_288))) , p_37), g_28.f6)), p_36)), g_301[1])) & (**g_252)), 0UL)) == 1UL) , 0x8AL), g_301[1])) && g_39)) , p_37) , g_217[1][0]) < g_328) || 0xE6BA4F4FL) && l_106), p_36)) < 0x6CC2278EL) >= (**g_288)) != 254UL)) && (**g_252))), g_95)), 11))));
        }
        else
        { 
            const uint32_t ***l_331 = &l_329[1][3];
            (*l_331) = l_329[1][3];
        }
        if (((((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((*l_346) = (((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((0xA234L ^ (p_36 == g_296)) & (safe_mod_func_int8_t_s_s((((**g_252) , (*g_288)) == (l_342 = (*g_288))), (((safe_mod_func_int8_t_s_s((&l_142 == &g_253), l_108[5])) , (*g_289)) , (-4L))))), l_107)), 7)) | 0x89L) ^ g_45[0])), 1)) , 0UL) == l_106), (*g_253))) > 255UL) ^ g_217[3][0]) == l_291))
        { 
            int64_t l_366 = (-1L);
            int32_t l_367 = 0xB88F1BC9L;
            int32_t l_368[6];
            uint32_t l_395 = 18446744073709551615UL;
            int16_t l_433[1];
            uint8_t *l_469 = (void*)0;
            uint8_t *l_470 = &g_393;
            int i;
            for (i = 0; i < 6; i++)
                l_368[i] = 0x1BFA4073L;
            for (i = 0; i < 1; i++)
                l_433[i] = 0xEDA9L;
            if ((l_107 , (~l_105)))
            { 
                int8_t l_360 = 0x58L;
                int32_t l_364 = 0x8CB26E2EL;
                int32_t l_365[2];
                uint32_t l_372 = 0x0919BC36L;
                int i;
                for (i = 0; i < 2; i++)
                    l_365[i] = 0xE49509F3L;
                for (l_144 = 0; (l_144 < 14); l_144++)
                { 
                    int16_t ***l_358 = &g_357;
                    int64_t *l_359 = &l_327;
                    int32_t l_361 = (-8L);
                    int32_t l_362 = 0xB559AE18L;
                    int32_t l_363 = 0x2BC9B478L;
                    l_360 = (((l_104 = ((*l_359) &= ((*l_55) = ((safe_mul_func_int8_t_s_s((g_45[1] || (safe_rshift_func_int16_t_s_s(((l_354 != &l_329[1][4]) && 0xD4B35B5182B9280CLL), (safe_mod_func_uint64_t_u_u((p_37 && (((*l_358) = g_357) == (l_102 , &l_142))), 0x75422D324052EEA0LL))))), g_39)) <= p_36)))) | p_36) & p_37);
                    l_369--;
                    ++l_372;
                }
            }
            else
            { 
                const int8_t l_394[7][3] = {{0xAAL,0xF3L,0xAAL},{0x08L,(-1L),0xF5L},{0x08L,0x08L,(-1L)},{0xAAL,(-1L),(-1L)},{(-1L),0xF3L,0xF5L},{0xAAL,0xF3L,0xAAL},{0x08L,(-1L),0xF5L}};
                int i, j;
                for (p_37 = 0; (p_37 == 52); p_37 = safe_add_func_int16_t_s_s(p_37, 7))
                { 
                    uint16_t l_381[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_381[i] = 65530UL;
                    g_45[1] |= ((safe_lshift_func_uint8_t_u_s(g_146, g_328)) ^ (safe_sub_func_int64_t_s_s(l_381[0], (+(safe_rshift_func_uint8_t_u_s(246UL, (safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((((*g_289) ^ ((safe_mod_func_uint16_t_u_u(g_301[1], (safe_mod_func_int32_t_s_s((g_293 , g_217[3][0]), 0x1CA12D06L)))) >= 18446744073709551612UL)) >= g_147[0][5][1]) >= g_393), g_28.f0)) , p_36), l_394[5][2]))))))));
                    g_45[1] |= p_37;
                }
            }
            --l_395;
            for (g_328 = (-15); (g_328 > (-12)); g_328 = safe_add_func_uint32_t_u_u(g_328, 2))
            { 
                return g_154;
            }
            if ((safe_mod_func_uint64_t_u_u((l_105 ^= (++g_402)), ((l_354 == &g_288) ^ g_296))))
            { 
                int16_t ***l_414 = &g_357;
                int16_t ****l_413 = &l_414;
                int32_t l_422[1][3];
                const uint16_t *l_456 = (void*)0;
                const uint16_t **l_455 = &l_456;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_422[i][j] = 0x3DEA15C3L;
                }
                for (g_296 = 0; (g_296 <= 18); ++g_296)
                { 
                    int32_t **l_407 = &l_117[3];
                    (*l_407) = (void*)0;
                }
                for (l_65 = 0; (l_65 <= 0); l_65 += 1)
                { 
                    int16_t *l_412[2][6][3] = {{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}}};
                    int16_t *****l_415 = &l_413;
                    int32_t **l_416 = &l_117[3];
                    int32_t l_417 = (-4L);
                    int32_t l_418 = 0L;
                    int32_t l_419 = (-7L);
                    int32_t l_420 = (-1L);
                    int32_t l_421 = 0x5E615C46L;
                    int32_t l_423 = 0x67399ED4L;
                    int32_t l_424 = 0x266AB648L;
                    int32_t l_425 = 0x073A7401L;
                    int32_t l_426 = (-7L);
                    int32_t l_427 = 0xE5411332L;
                    int32_t l_428 = 0xAE5AC33CL;
                    int32_t l_429 = 0x9E1F8F8FL;
                    int32_t l_430 = 2L;
                    int32_t l_431 = 0x2E2A44E8L;
                    int32_t l_432[7] = {0x239DCB01L,0xD92401ACL,0xD92401ACL,0x239DCB01L,0xD92401ACL,0xD92401ACL,0x239DCB01L};
                    int i, j, k;
                    l_107 = (safe_sub_func_int16_t_s_s((g_95 = (((*l_55) = g_28.f1) , (g_154 &= ((p_36 <= ((((void*)0 != &g_289) != g_217[4][0]) , ((0x2DE67464L > (safe_mul_func_int8_t_s_s(l_368[4], 255UL))) != p_37))) && g_146)))), p_36));
                    (*l_415) = l_413;
                    (*l_416) = &g_45[2];
                    --g_434;
                }
                if (p_36)
                    continue;
                g_45[1] &= 0L;
                for (g_56 = 20; (g_56 <= 24); g_56 = safe_add_func_uint64_t_u_u(g_56, 1))
                { 
                    l_368[2] = ((((safe_mul_func_int8_t_s_s((!(safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((l_422[0][0] ^= ((safe_mul_func_uint16_t_u_u((&g_253 != l_448[0]), ((((***l_354) = (*g_289)) && (safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0L, (*g_253))), (((*g_289) , g_301[1]) && p_36))), g_328))) >= g_272))) != 18446744073709551613UL)), (**g_252))), 13))), 0x73L)) , &l_345) == l_455) , p_36);
                }
            }
            else
            { 
                if (g_301[2])
                    break;
            }
            l_102 ^= (p_37 != (g_328 == ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((((*l_470) = (safe_lshift_func_uint8_t_u_u(p_36, l_366))) == g_434), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_147[0][5][1], 5)), 0xEAA5L)))), p_36)) || p_36), g_328)), 4)) || 7L)));
        }
        else
        { 
            if (p_36)
                break;
        }
    }
    for (g_328 = 0; (g_328 == (-2)); --g_328)
    { 
        int32_t *l_477[2];
        struct S0 l_483 = {374,908,617,4,3199,6,0};
        int8_t l_499[2];
        int i;
        for (i = 0; i < 2; i++)
            l_477[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_499[i] = (-1L);
        l_477[0] = l_477[0];
        if (p_36)
            break;
        l_107 = (safe_unary_minus_func_uint64_t_u(g_147[1][3][1]));
        for (g_39 = 23; (g_39 >= 16); --g_39)
        { 
            uint32_t l_495 = 0x65AC1310L;
            for (g_402 = 0; (g_402 == 49); g_402 = safe_add_func_int16_t_s_s(g_402, 8))
            { 
                int16_t l_496 = 0x58B1L;
                int32_t l_497 = 0x9DAF36BCL;
                l_497 = (l_483 , (safe_sub_func_int32_t_s_s((l_82 , (safe_div_func_int32_t_s_s(p_36, (safe_mod_func_int8_t_s_s((((p_37 < (((l_496 = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(65535UL, 13)) >= g_293), ((safe_unary_minus_func_uint32_t_u((g_217[3][0] && 0x359AL))) && l_495)))) ^ p_36) >= g_146)) , g_39) != (**g_252)), l_497))))), p_37)));
            }
            g_45[1] = (safe_unary_minus_func_int16_t_s((l_499[0] <= 0x64BAL)));
            for (l_282 = 0; (l_282 == (-6)); l_282--)
            { 
                uint32_t l_504 = 0x8D580F7FL;
                for (g_154 = (-24); (g_154 != 28); g_154 = safe_add_func_uint8_t_u_u(g_154, 2))
                { 
                    int32_t l_507 = 0xCE9277E1L;
                    l_504++;
                    if (p_36)
                        continue;
                    if (l_507)
                        continue;
                    if (l_504)
                        goto lbl_294;
                    return p_37;
                }
            }
            return l_106;
        }
        return l_369;
    }
    if (((((safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((!g_45[1]), 0xF54EL)) , g_513) != ((((((*g_288) = (*g_288)) == (((*l_516) = (safe_add_func_uint32_t_u_u(4294967295UL, l_327))) , &l_291)) >= l_108[4]) && l_291) , l_517)), (**l_517))) && 0x42B0L) & 0x2C6CCA28L) != (*l_518)))
    { 
        uint32_t l_532 = 0xC9EE2F26L;
        int32_t l_533[3];
        int32_t **l_567 = &l_518;
        uint32_t l_636 = 0UL;
        uint8_t * const l_646 = (void*)0;
        uint8_t *l_647 = &g_393;
        union U1 *l_691 = &g_21;
        int8_t l_748 = 0L;
        uint32_t l_749 = 4294967288UL;
        uint32_t l_761[5] = {0xBF809F3DL,0xBF809F3DL,0xBF809F3DL,0xBF809F3DL,0xBF809F3DL};
        uint16_t l_923[2][2] = {{1UL,1UL},{1UL,1UL}};
        uint32_t **l_943 = &g_289;
        int i, j;
        for (i = 0; i < 3; i++)
            l_533[i] = (-8L);
        if (p_37)
        { 
            int32_t *l_534 = &l_282;
            int32_t l_552 = 0x889BA0D2L;
            int32_t l_553 = 0xEDD58FF2L;
            int16_t l_628 = (-1L);
lbl_581:
            (*l_534) = (l_533[1] ^= (safe_lshift_func_int16_t_s_s(((((*l_518) ^= ((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((p_37 , (((void*)0 == (*g_288)) | (((((safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(0x8FL, 5)) , ((0xB72970AEFB2DAAB2LL && ((0xABL > 0xE7L) >= g_45[1])) & p_36)), 0xDB497002D4C7561FLL)), l_531)) , 0x8E1EB6BEADF25B06LL) == g_232[2]) & l_532) != (-8L)))), g_28.f3)), 0xCDL)) , g_147[0][5][1]) >= 18446744073709551608UL) < p_36)) , (void*)0) == &g_393), 15)));
            if (p_37)
            { 
                uint32_t l_554 = 0xEEEF64BCL;
                int32_t *l_559[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_559[i] = &g_45[1];
                (*l_534) |= 0L;
                for (g_328 = 0; (g_328 == (-30)); g_328 = safe_sub_func_uint32_t_u_u(g_328, 7))
                { 
                    uint16_t *l_546 = &g_39;
                    uint64_t *l_547[3];
                    int32_t *l_550 = &l_104;
                    int32_t *l_551[4][2] = {{&g_45[1],&g_45[1]},{&g_45[1],&g_45[1]},{&g_45[1],&g_45[1]},{&g_45[1],&g_45[1]}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_547[i] = &g_548;
                }
                for (g_296 = 0; (g_296 <= 14); g_296 = safe_add_func_int64_t_s_s(g_296, 3))
                { 
                    int32_t **l_560 = &l_559[1];
                    int32_t ***l_568 = &l_567;
                    uint16_t *l_575 = (void*)0;
                    uint16_t *l_576 = &l_47;
                    (*l_560) = ((*l_517) = l_559[2]);
                    (*l_534) = ((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((((safe_div_func_int8_t_s_s((&l_559[0] != ((*l_568) = l_567)), (((*g_289) = (**g_288)) | (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((*l_576)++) && (0x8429L >= 0x43F4L)), (0xED0AL | (safe_add_func_int32_t_s_s((p_36 , (**l_560)), 0xBDA7B8C8L))))), p_37)) >= (**l_560)), p_37))))) , p_37) , g_21.f0) == g_217[0][0]), g_549)) >= (*l_534)) , 0x17L), p_37)) || 2UL);
                    return p_37;
                }
                (*l_517) = (*l_517);
                for (g_296 = 0; (g_296 <= 2); g_296 += 1)
                { 
                    int i;
                    if (g_28.f1)
                        goto lbl_581;
                    (*l_518) |= l_533[g_296];
                }
            }
            else
            { 
                int32_t ***l_587 = &g_513;
                int32_t *l_588 = &l_108[3];
                uint64_t *l_589 = (void*)0;
                uint64_t *l_590 = (void*)0;
                uint64_t *l_591 = &g_548;
                struct S0 **l_645[6][6] = {{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599}};
                uint32_t ***l_649 = &g_288;
                int i, j;
                (*l_534) = ((0x9E113A56L || 4294967293UL) == (p_36 & ((*l_591) = (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*l_588) |= ((((safe_unary_minus_func_uint64_t_u((((*l_534) , (0x28A6732CACD3FCC0LL == ((**l_567) || (l_587 != &g_513)))) , 0xDA84764BFB6859D8LL))) >= p_37) > (*l_534)) < p_36)), (*l_518))), (-8L))))));
                for (p_36 = 0; (p_36 <= 0); p_36 += 1)
                { 
                    uint64_t l_592 = 18446744073709551614UL;
                    struct S0 **l_595 = (void*)0;
                    struct S0 *l_597 = &g_28;
                    struct S0 **l_596[7][1];
                    uint16_t *l_609 = &l_47;
                    int8_t *l_610[3][5][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_549,&g_232[2],&g_549},{&g_328,&g_232[3],&g_232[3],&g_328,&g_549,&g_232[3],&g_549},{(void*)0,(void*)0,(void*)0,(void*)0,&g_549,&g_232[2],&g_549},{&g_328,&g_232[3],&g_232[3],&g_328,&g_549,&g_232[3],&g_549},{(void*)0,(void*)0,(void*)0,(void*)0,&g_549,&g_232[2],&g_549}},{{&g_328,&g_232[3],&g_232[3],&g_328,&g_549,&g_232[3],&g_549},{(void*)0,(void*)0,(void*)0,(void*)0,&g_549,&g_328,&g_232[3]},{&g_232[3],&g_232[3],&g_232[3],&g_232[3],&g_232[6],&g_328,&g_232[6]},{(void*)0,&g_232[2],&g_232[2],(void*)0,&g_232[3],&g_328,&g_232[3]},{&g_232[3],&g_232[3],&g_232[3],&g_232[3],&g_232[6],&g_328,&g_232[6]}},{{(void*)0,&g_232[2],&g_232[2],(void*)0,&g_232[3],&g_328,&g_232[3]},{&g_232[3],&g_232[3],&g_232[3],&g_232[3],&g_232[6],&g_328,&g_232[6]},{(void*)0,&g_232[2],&g_232[2],(void*)0,&g_232[3],&g_328,&g_232[3]},{&g_232[3],&g_232[3],&g_232[3],&g_232[3],&g_232[6],&g_328,&g_232[6]},{(void*)0,&g_232[2],&g_232[2],(void*)0,&g_232[3],&g_328,&g_232[3]}}};
                    uint8_t *l_621 = (void*)0;
                    uint8_t *l_622 = &g_393;
                    uint32_t *l_627[2][4] = {{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291}};
                    int32_t **l_630 = &l_534;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_596[i][j] = &l_597;
                    }
                    --l_592;
                    g_599 = (g_598 = &g_28);
                }
                for (p_36 = 17; (p_36 > 32); p_36++)
                { 
                    if (p_37)
                        break;
                    if (p_37)
                        break;
                }
                for (p_36 = 0; (p_36 <= 1); p_36 += 1)
                { 
                    int32_t *l_633 = &l_102;
                    int32_t *l_634 = (void*)0;
                    int32_t *l_635[4];
                    struct S0 ***l_644[7][2][4] = {{{(void*)0,(void*)0,&l_643,(void*)0},{&l_643,(void*)0,(void*)0,&l_643}},{{(void*)0,&l_643,&l_643,&l_643},{&l_643,(void*)0,(void*)0,&l_643}},{{&l_643,&l_643,&l_643,&l_643},{(void*)0,&l_643,(void*)0,&l_643}},{{&l_643,&l_643,&l_643,&l_643},{(void*)0,&l_643,(void*)0,&l_643}},{{&l_643,&l_643,&l_643,&l_643},{(void*)0,(void*)0,&l_643,&l_643}},{{&l_643,&l_643,(void*)0,&l_643},{(void*)0,(void*)0,&l_643,(void*)0}},{{&l_643,(void*)0,(void*)0,&l_643},{(void*)0,&l_643,&l_643,&l_643}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_635[i] = (void*)0;
                    (**l_517) = p_37;
                    l_636--;
                    if ((*l_518))
                        continue;
                    (*l_518) |= (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((void*)0 != l_448[(p_36 + 1)]), 2)) > ((l_645[2][1] = l_643) != (void*)0)), g_402));
                }
                if (p_36)
                { 
                    uint8_t **l_648 = &l_647;
                    int32_t l_650[1][6] = {{1L,1L,1L,1L,1L,1L}};
                    int i, j;
                    (*l_588) ^= (((*g_599) , &g_288) != ((l_646 == ((*l_648) = l_647)) , l_649));
                    (*l_518) = p_37;
                    l_650[0][1] = g_293;
                }
                else
                { 
                    if (l_369)
                        goto lbl_581;
                    return g_45[1];
                }
            }
        }
        else
        { 
            int32_t *l_651 = &l_105;
            union U1 *l_697[3];
            int i;
            for (i = 0; i < 3; i++)
                l_697[i] = &g_21;
            (*l_517) = l_651;
            (*l_518) = p_37;
            if ((((((*l_665) = ((p_36 == (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((4294967295UL || (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((--(***l_354)) == ((void*)0 != l_662)), 1UL)), 253UL))) , ((((void*)0 == g_666) && g_402) != (**l_567))), l_668[2][0])), 4)) != p_37) >= 65535UL)) || p_36)) || (**g_666)) >= (*g_253)) | g_600.f2))
            { 
                uint8_t ***l_669 = (void*)0;
                int32_t l_680 = (-1L);
                union U1 *l_689 = (void*)0;
                g_670 = &l_647;
                for (l_636 = (-29); (l_636 == 22); l_636 = safe_add_func_int16_t_s_s(l_636, 2))
                { 
                    int8_t *l_675 = &g_232[6];
                    uint64_t *l_676 = &g_548;
                    int32_t l_679 = 0x650BE667L;
                    union U1 *l_688 = &g_21;
                    union U1 **l_687 = &l_688;
                    union U1 **l_690 = &l_689;
                    struct S0 l_696 = {-528,3315,659,1,1206,-3,1};
                    (*l_518) = (safe_mul_func_uint16_t_u_u((((*l_675) ^= (l_643 != (void*)0)) >= (**g_670)), (((l_676 == &g_548) >= (65534UL && (safe_rshift_func_uint16_t_u_u(((((l_679 < 9L) ^ (*l_651)) >= l_680) > (**g_670)), 15)))) && 0xAEA444D520FFCA5FLL)));
                    (*l_651) &= 0L;
                    l_679 |= (safe_mul_func_uint8_t_u_u((!((safe_mod_func_uint64_t_u_u((0x885AED47L != ((~p_36) != ((((*l_687) = ((*g_190) = (void*)0)) != ((*l_690) = l_689)) ^ ((*l_676) = (((l_691 == (((((**l_517) = (safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((*l_665) = (l_696 , p_36)), 0L)) >= (**l_517)), 0x50L))) | 0xE7BBL) && p_36) , l_697[2])) && 0xA4AC1761EE132435LL) | (*g_253)))))), 1L)) <= l_680)), p_36));
                }
            }
            else
            { 
                (*l_651) = ((*g_253) == ((**g_252) >= (safe_rshift_func_uint8_t_u_s(0xCBL, ((((0x27EAL >= (0x605AL > p_37)) & ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(0x9F4F24FA83CEE616LL, 0x1F210F1B68A4D797LL)), (*g_253))) > 0x9474D7CB1CB5C73FLL)) && (**l_567)) ^ p_37)))));
lbl_714:
                g_600.f1 = ((**l_567) && (((void*)0 != (*g_190)) & (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((*l_651), ((safe_lshift_func_int8_t_s_u(((((*l_516) = ((safe_lshift_func_int16_t_s_s(p_37, 7)) ^ (((g_548 & (((((0x5FF2A68460C1C72DLL > g_301[3]) ^ (**l_567)) >= p_36) <= 0x7E284F1EL) == g_600.f3)) || p_37) && 18446744073709551615UL))) && g_600.f5) && (**g_288)), 7)) , (-1L)))) , g_600.f0), p_37)) , p_37) || 0x379E5F15L)));
                for (l_626 = 0; l_626 < 7; l_626 += 1)
                {
                    l_108[l_626] = (-8L);
                }
                return g_28.f6;
            }
            if (g_56)
                goto lbl_714;
        }
        if (p_36)
        { 
            uint32_t l_739 = 18446744073709551608UL;
            int32_t l_740[7][5][3] = {{{(-8L),0x3546F582L,7L},{(-7L),0xB103E221L,(-7L)},{(-9L),(-8L),7L},{0L,0L,6L},{0xE58D9E53L,(-8L),(-8L)}},{{6L,0xB103E221L,0xECC22D78L},{0xE58D9E53L,0x3546F582L,0xE58D9E53L},{0L,6L,0xECC22D78L},{(-9L),(-9L),(-8L)},{(-7L),6L,6L}},{{(-8L),0x3546F582L,7L},{(-7L),0xB103E221L,(-7L)},{(-9L),(-8L),7L},{0L,0L,6L},{0xE58D9E53L,(-8L),(-8L)}},{{6L,0xB103E221L,0xECC22D78L},{0xE58D9E53L,0x3546F582L,0xE58D9E53L},{0L,6L,0xECC22D78L},{(-9L),(-9L),(-8L)},{(-7L),6L,6L}},{{(-8L),0x3546F582L,7L},{0xECC22D78L,0L,0xECC22D78L},{(-8L),0xE58D9E53L,0x3546F582L},{6L,6L,(-7L)},{7L,0xE58D9E53L,0xE58D9E53L}},{{(-7L),0L,0xB103E221L},{7L,(-9L),7L},{6L,(-7L),0xB103E221L},{(-8L),(-8L),0xE58D9E53L},{0xECC22D78L,(-7L),(-7L)}},{{0xE58D9E53L,(-9L),0x3546F582L},{0xECC22D78L,0L,0xECC22D78L},{(-8L),0xE58D9E53L,0x3546F582L},{6L,6L,(-7L)},{7L,0xE58D9E53L,0xE58D9E53L}}};
            int32_t l_743 = 0xC9567C04L;
            int32_t l_746 = 0x636576FEL;
            int8_t l_747 = 0x1FL;
            uint8_t l_767[5][3];
            int64_t l_779[3][1];
            uint32_t l_781 = 0x1C65A794L;
            int8_t l_812 = (-1L);
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 3; j++)
                    l_767[i][j] = 0UL;
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_779[i][j] = 0x0B6DFF4C2C33BC2DLL;
            }
            if (p_37)
            { 
                int64_t *l_741 = &g_56;
                int32_t l_742 = 0xDE8AD925L;
                int32_t *l_744 = &l_102;
                int32_t *l_745[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_745[i][j] = &l_105;
                }
                l_743 = (safe_mod_func_int64_t_s_s(((safe_add_func_int8_t_s_s(0x11L, ((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((l_742 = (safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((*l_741) ^= ((safe_lshift_func_uint16_t_u_u(65528UL, 1)) && (l_740[1][1][0] = (safe_mod_func_uint32_t_u_u(((((**l_664) = (((p_37 >= g_217[3][0]) <= (((p_37 | (p_37 ^ ((g_738 = (+((**l_567) ^= 1L))) <= g_296))) > p_37) | p_36)) & (-1L))) < (*g_253)) || l_739), l_739))))) | p_36), (*g_667))), (*g_667))) ^ g_45[1]) , l_740[3][1][0]), l_742))) , g_154), 0x6CF5F4820C7D2948LL)), 0xBE71CE51EBE3A41BLL)), (**g_666))) , p_37))) & g_45[1]), p_36));
                ++l_749;
                if (l_277)
                    goto lbl_806;
                return p_36;
            }
            else
            { 
                int32_t *l_752 = &l_108[6];
                int32_t *l_753 = &l_533[2];
                int32_t *l_754 = &g_45[1];
                int32_t *l_755 = &g_45[1];
                int32_t *l_756 = &l_108[1];
                int32_t *l_757 = &l_106;
                int32_t *l_758 = (void*)0;
                int32_t *l_759[3][5][3] = {{{&l_533[1],&l_108[1],&l_533[1]},{&l_743,&g_45[1],&l_743},{&l_533[1],&l_108[1],&l_533[1]},{&l_743,&g_45[1],&l_743},{&l_533[1],&l_108[1],&l_533[1]}},{{&l_743,&g_45[1],&l_743},{&l_533[1],&l_108[1],&l_533[1]},{&l_743,&g_45[1],&l_743},{&l_533[1],&l_108[1],&l_533[1]},{&l_743,&g_45[1],&l_743}},{{&l_533[1],&l_108[1],&l_533[1]},{&l_743,&g_45[1],&l_743},{&l_533[1],&l_108[1],&l_533[1]},{&l_743,&g_45[1],&l_743},{&l_533[1],&l_108[1],&l_533[1]}}};
                int16_t l_760 = 0x9AF5L;
                uint32_t *l_772 = &l_761[4];
                int8_t l_790[4] = {0x39L,0x39L,0x39L,0x39L};
                int i, j, k;
                --l_761[0];
                if ((((*l_757) = ((((*l_647) = (l_743 = 249UL)) >= (safe_unary_minus_func_uint64_t_u(0xC4D9CE1938F0C87ALL))) && (((((p_36 >= g_28.f4) && (safe_add_func_uint32_t_u_u(l_767[2][0], (safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u((((*l_772) &= 0xDB66D21EL) , ((safe_mod_func_uint8_t_u_u(0UL, (**l_517))) | 0x1CL)), (*l_753))) , 0L) < (*l_753)) , p_37), 10))))) ^ p_36) == 0x87B2F12AL) && (**g_288)))) >= l_767[3][2]))
                { 
                    (*l_662) = (*l_662);
                }
                else
                { 
                    g_598 = (*l_643);
                }
                for (l_369 = 0; (l_369 >= 58); ++l_369)
                { 
                    int32_t l_777 = 1L;
                    int32_t l_778[6][6] = {{0x47C2782AL,8L,8L,0x47C2782AL,1L,0x0BC8588CL},{0x0BC8588CL,0x47C2782AL,0xC4E5A262L,0x47C2782AL,0x0BC8588CL,0x768140C2L},{0x47C2782AL,0x0BC8588CL,0x768140C2L,0x768140C2L,0x0BC8588CL,0x47C2782AL},{8L,0x47C2782AL,1L,0x0BC8588CL,1L,0x47C2782AL},{1L,8L,0x768140C2L,0xC4E5A262L,0xC4E5A262L,0x768140C2L},{1L,1L,0xC4E5A262L,0x0BC8588CL,(-2L),0x0BC8588CL}};
                    int i, j;
                    (*l_753) = ((**l_517) |= 0x6C9371A4L);
                    l_781--;
                }
                l_740[2][2][1] ^= ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(255UL, (safe_lshift_func_int16_t_s_s(((void*)0 != &l_760), (l_790[3] | (safe_mod_func_int8_t_s_s((+(safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((**l_567), ((((*l_518) | (safe_mod_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((*g_599) , g_45[1]), 254UL)), (*g_667))), 3)) & p_37), g_434))) , &l_662) != (void*)0))) | 0x2FL), p_37))), 0xEEL))))))) && 0x5974L), (*g_667))) != g_296);
            }
lbl_806:
            (**l_567) = (**l_567);
            for (g_154 = 0; (g_154 != 26); ++g_154)
            { 
                int16_t *l_818 = &l_150;
                int16_t **l_817[4][2];
                int32_t *l_847 = &l_740[3][1][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_817[i][j] = &l_818;
                }
                (**l_567) = 1L;
            }
        }
        else
        { 
            uint16_t *l_859[6][5] = {{&l_47,&l_47,&l_47,&l_47,&l_47},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_47,&l_47,&l_47,&l_47,&l_47},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_47,&l_47,&l_47,&l_47,&l_47},{&l_277,&l_277,&l_277,&l_277,&l_277}};
            uint16_t **l_858 = &l_859[0][2];
            int32_t l_862 = 0x21298D79L;
            int8_t *l_866 = &g_328;
            uint32_t l_900 = 18446744073709551615UL;
            int32_t l_917 = (-5L);
            int32_t l_919 = 6L;
            int32_t l_920 = 4L;
            int32_t l_921 = (-2L);
            int32_t l_922 = (-9L);
            int i, j;
            for (l_369 = (-7); (l_369 != 55); ++l_369)
            { 
                for (g_296 = 0; (g_296 == 13); g_296 = safe_add_func_uint16_t_u_u(g_296, 6))
                { 
                    (*l_567) = &g_45[0];
                    (**l_567) |= p_36;
                }
            }
lbl_887:
            for (g_402 = 14; (g_402 >= 29); g_402++)
            { 
                g_600.f0 &= (safe_lshift_func_int16_t_s_u(p_36, (safe_add_func_uint64_t_u_u(0xC1611630CF394940LL, (**l_567)))));
            }
            if (((((*g_666) == ((*l_858) = &p_37)) , (safe_mod_func_uint8_t_u_u((**l_567), l_862))) & ((-10L) & (&g_232[1] == (l_865 , l_866)))))
            { 
                int8_t l_885[7] = {0xB3L,0xB3L,1L,0xB3L,0xB3L,1L,0xB3L};
                int32_t *l_886[7];
                uint64_t *l_890[5] = {&g_548,&g_548,&g_548,&g_548,&g_548};
                int32_t l_899 = 0L;
                int i;
                for (i = 0; i < 7; i++)
                    l_886[i] = &l_107;
                l_533[1] &= (((*g_599) , (1L ^ (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((*g_289), ((safe_unary_minus_func_int64_t_s(((safe_unary_minus_func_int32_t_s(((*l_691) , (**l_517)))) || (safe_lshift_func_int16_t_s_s((**l_567), 5))))) != (safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s(l_885[0], 0x1B1F5358L)) ^ (*g_289)) , p_37), g_296)) != (*g_667)), 1L)) , (*g_667)), p_37))))), g_39)), 12)))) && l_885[0]);
                for (l_369 = 0; (l_369 <= 2); l_369 += 1)
                { 
                    (**l_517) = (((**l_858) |= ((**l_517) ^ (*g_667))) ^ (**l_517));
                    if (g_28.f4)
                        goto lbl_887;
                }
                (**l_567) = (((*l_516) = (((void*)0 != &g_289) == 1UL)) , (safe_mod_func_uint32_t_u_u((((--g_548) >= (((((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(0x25L, (safe_lshift_func_int8_t_s_s(0x99L, ((((((g_95 = p_37) <= (l_862 , p_37)) & 0xBAL) | 0xECC3525DL) , l_899) || 0x3FL))))), 0x8A10BAD6334EC5F9LL)) == p_36) >= (-5L)) > g_600.f6) , 0x4BBF4D8205BB46A3LL)) != l_900), p_37)));
            }
            else
            { 
                int32_t *l_901 = &l_108[4];
                int32_t *l_902 = &l_282;
                int32_t *l_903 = &g_45[2];
                int32_t *l_904 = &l_104;
                int32_t *l_905 = &g_45[1];
                int32_t *l_906 = &l_533[1];
                int32_t *l_907 = &l_533[0];
                int32_t *l_908 = (void*)0;
                int32_t *l_909 = &l_104;
                int32_t *l_910 = &l_82;
                int32_t *l_911 = (void*)0;
                int32_t *l_912 = &l_105;
                int32_t *l_913 = (void*)0;
                int32_t *l_914 = (void*)0;
                int32_t *l_915 = &l_104;
                int32_t *l_916[7] = {&l_104,&l_104,&l_105,&l_104,&l_104,&l_105,&l_104};
                uint8_t ***l_929 = &g_670;
                uint8_t ****l_928 = &l_929;
                uint64_t *l_950[6][7] = {{(void*)0,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,(void*)0,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548}};
                int i, j;
                l_923[0][0]++;
                (*l_518) = (safe_mul_func_uint16_t_u_u((**g_666), (((*l_928) = &g_670) != (void*)0)));
                for (l_862 = 6; (l_862 > (-16)); l_862 = safe_sub_func_uint64_t_u_u(l_862, 1))
                { 
                    uint8_t l_932 = 0xADL;
                    ++l_932;
                    (*l_904) = (safe_mul_func_int8_t_s_s(g_293, (safe_lshift_func_uint8_t_u_u((**l_517), 5))));
                }
                (*l_909) = ((*l_906) = (safe_div_func_int8_t_s_s(((l_943 == (void*)0) >= ((*g_289) < ((**l_517) = (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((0UL & ((g_548 ^= ((**l_567) , 0xAD09957D591A7A74LL)) & (safe_rshift_func_int16_t_s_s((((**g_252) , (*l_518)) , p_37), 0)))), (**g_252))), (*g_667))) != 0x93L) > 0x29AA6A4B9FC68739LL)))), 0x91L)));
            }
        }
    }
    else
    { 
        uint32_t l_961 = 0x5505966FL;
        int16_t *l_969 = &l_150;
        int32_t l_976[5][3] = {{0x01920A93L,(-3L),0x01920A93L},{1L,1L,1L},{0x01920A93L,(-3L),0x01920A93L},{1L,1L,1L},{0x01920A93L,(-3L),0x01920A93L}};
        int16_t ***l_988 = &g_357;
        int16_t ****l_987 = &l_988;
        int16_t *****l_986 = &l_987;
        uint32_t l_1003 = 0x999BB03EL;
        uint16_t *l_1051 = &l_277;
        struct S0 l_1057 = {-574,2299,2645,4,5928,-14,1};
        uint8_t *****l_1072 = &l_1058;
        int32_t *l_1087[2];
        uint64_t l_1116 = 0x624979510461EF6CLL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1087[i] = &g_45[1];
        for (g_154 = 8; (g_154 < 6); g_154--)
        { 
            int32_t l_960 = (-1L);
            int16_t *l_970[3][2][4];
            int16_t *l_971 = &g_154;
            int16_t ***l_985 = &l_448[3];
            int16_t ****l_984[5] = {&l_985,&l_985,&l_985,&l_985,&l_985};
            int16_t *****l_983 = &l_984[0];
            int32_t *l_989 = &l_105;
            uint8_t ***l_993 = &g_670;
            uint8_t **** const l_992 = &l_993;
            uint8_t **** const *l_991 = &l_992;
            int32_t l_1021 = 0x11D14F24L;
            int32_t *l_1022 = &l_102;
            int32_t *l_1023 = &l_976[0][0];
            int32_t *l_1024 = &l_107;
            int32_t *l_1025 = &l_282;
            int32_t *l_1026 = &g_1019;
            int32_t *l_1027 = (void*)0;
            int32_t *l_1028 = &l_105;
            int32_t *l_1029 = &l_104;
            int32_t *l_1030 = &l_282;
            int32_t *l_1031 = (void*)0;
            int32_t *l_1032 = &g_45[1];
            int32_t *l_1033 = &l_102;
            int32_t *l_1034 = (void*)0;
            int32_t *l_1035 = (void*)0;
            int32_t *l_1036 = &l_282;
            int32_t *l_1037 = &l_108[5];
            int32_t *l_1038[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_1039 = 4294967295UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_970[i][j][k] = &g_780;
                }
            }
        }
        (**l_517) = (((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((&l_517 == (void*)0), (((*g_666) = &p_36) == &g_272))) == (-1L)), ((((**g_288) = ((safe_mod_func_int16_t_s_s(0xA4CBL, ((*l_1051) = (safe_add_func_int16_t_s_s(((****l_662) = (g_154 = ((((l_1050[1][0] | p_37) | 0xDFL) <= p_36) != g_600.f6))), g_147[0][5][1]))))) | g_600.f5)) >= 0xEDDC28CBL) , p_37))) , &g_434) == &l_369);
        if (p_37)
        { 
            return p_37;
        }
        else
        { 
            uint32_t ***l_1078 = (void*)0;
            int32_t l_1079 = 1L;
            int64_t l_1084[2][5] = {{0x12C9CDC1F088C635LL,0x12C9CDC1F088C635LL,0x12C9CDC1F088C635LL,0x12C9CDC1F088C635LL,0x12C9CDC1F088C635LL},{(-5L),(-5L),(-5L),(-5L),(-5L)}};
            int32_t l_1088 = 0x3FE2F20FL;
            int32_t l_1089 = 7L;
            int32_t l_1090 = 1L;
            int32_t l_1091[4][2];
            uint8_t *l_1114[4] = {&g_738,&g_738,&g_738,&g_738};
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1091[i][j] = 0x21C15E60L;
            }
            for (g_434 = (-1); (g_434 < 27); ++g_434)
            { 
                uint8_t * const l_1063 = &g_393;
                uint8_t * const *l_1062 = &l_1063;
                uint8_t * const **l_1061[1];
                uint8_t * const ***l_1060 = &l_1061[0];
                uint8_t *****l_1073 = &l_1058;
                uint8_t *****l_1074 = &l_1058;
                uint32_t ***l_1077 = &g_288;
                uint8_t ****l_1080[5][6][7] = {{{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059}},{{(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0},{(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,(void*)0,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,(void*)0,&l_1059,&l_1059}},{{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,(void*)0,(void*)0,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0},{&l_1059,&l_1059,&l_1059,&l_1059,(void*)0,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0}},{{(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,(void*)0},{&l_1059,(void*)0,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059}},{{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,(void*)0,(void*)0,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059},{&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059,&l_1059}}};
                int32_t l_1081 = 0x93C710A3L;
                int8_t l_1082 = 0x3BL;
                int32_t l_1093[7];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1061[i] = &l_1062;
                for (i = 0; i < 7; i++)
                    l_1093[i] = 0x3E47AE32L;
                for (g_402 = 0; (g_402 <= 1); g_402 += 1)
                { 
                    uint64_t l_1054 = 0x71D6875054322289LL;
                    (**l_517) ^= l_1054;
                }
                (**l_517) = (((((((**l_517) && (safe_sub_func_uint16_t_u_u((((l_1057 , (void*)0) == (((l_1058 != l_1060) ^ 1UL) , &g_253)) && (*l_518)), 0xF60DL))) ^ 1L) , p_36) && 0x638B66821A2F39E5LL) , l_1057.f1) <= 9UL);
                if ((((safe_div_func_int32_t_s_s(p_37, (safe_div_func_uint16_t_u_u(((*g_667) = 65535UL), ((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((((((*l_516) = ((l_1072 == (l_1074 = l_1073)) , (safe_rshift_func_uint16_t_u_s((0xCD794796L || ((l_354 != (l_1078 = l_1077)) <= 1UL)), l_1079)))) | g_600.f0) , (void*)0) == l_1080[2][1][1]) >= l_1081), p_37)) , (*l_518)), l_1079)) , 0xF1AD9B5399A1E19FLL) , p_37) ^ (**g_288)))))) <= 18446744073709551608UL) && l_1082))
                { 
                    int16_t ***l_1083 = (void*)0;
                    (**l_986) = l_1083;
                    (**l_517) = (((0xC2EEL == l_1084[0][1]) && (safe_mod_func_int8_t_s_s(((void*)0 == &l_517), l_1079))) | (g_217[3][0] = 0x95C941C90164FEA0LL));
                    if (l_1079)
                        break;
                    l_1087[1] = &g_45[1];
                }
                else
                { 
                    int16_t l_1092 = 0xD70FL;
                    uint8_t l_1094 = 0x11L;
                    l_1094--;
                    l_1091[2][0] |= (0xBF19857010753A66LL <= ((*l_518) == p_37));
                    (**l_517) = p_36;
                }
            }
            (**l_517) &= (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((l_1091[2][1] |= ((safe_div_func_int16_t_s_s((*g_253), (safe_div_func_uint8_t_u_u((((((***l_354)++) <= ((*l_986) != (((~(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(6L, 4)), 1L)) != p_37) < (-1L))) , l_957[1][2]) , (void*)0))) >= p_36) <= (**g_666)), 0x6AL)))) & (-1L))) <= (-4L)), g_1115)), (*g_667)));
            (*l_517) = (*l_517);
            ++l_1116;
        }
    }
    return p_36;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_28.f5, "g_28.f5", print_hash_value);
    transparent_crc(g_28.f6, "g_28.f6", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_147[i][j][k], "g_147[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_217[i][j], "g_217[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_232[i], "g_232[i]", print_hash_value);

    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_301[i], "g_301[i]", print_hash_value);

    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_600.f1, "g_600.f1", print_hash_value);
    transparent_crc(g_600.f2, "g_600.f2", print_hash_value);
    transparent_crc(g_600.f3, "g_600.f3", print_hash_value);
    transparent_crc(g_600.f4, "g_600.f4", print_hash_value);
    transparent_crc(g_600.f5, "g_600.f5", print_hash_value);
    transparent_crc(g_600.f6, "g_600.f6", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1115, "g_1115", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1232[i], "g_1232[i]", print_hash_value);

    }
    transparent_crc(g_1326, "g_1326", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1456, "g_1456", print_hash_value);
    transparent_crc(g_1541, "g_1541", print_hash_value);
    transparent_crc(g_1548, "g_1548", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1888[i][j][k], "g_1888[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2014, "g_2014", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2080[i], "g_2080[i]", print_hash_value);

    }
    transparent_crc(g_2103, "g_2103", print_hash_value);
    transparent_crc(g_2312, "g_2312", print_hash_value);
    transparent_crc(g_2420, "g_2420", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2431[i], "g_2431[i]", print_hash_value);

    }
    transparent_crc(g_2440, "g_2440", print_hash_value);
    transparent_crc(g_2526, "g_2526", print_hash_value);
    transparent_crc(g_2529, "g_2529", print_hash_value);
    transparent_crc(g_2547, "g_2547", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
