// SPDX-License-Identifier: MIT
// cctest_csmith_b568cd35.c --- cctest case csmith_b568cd35 (csmith seed 3043544373)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xacb7cdb1 */

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

// Options:   -s 3043544373 -o /tmp/csmith_gen_nm360yut/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 25;
   unsigned f1 : 12;
   unsigned f2 : 31;
   signed f3 : 14;
};

struct S1 {
   unsigned f0 : 25;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int16_t  f0;
   uint64_t  f1;
   const struct S0  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U4 {
   uint16_t  f0;
   const int16_t  f1;
   uint32_t  f2;
};


static int32_t g_2 = 0x80E3580DL;
static struct S0 g_9 = {878,15,7016,-57};
static int64_t g_51 = 0x9F113D064616E91FLL;
static int8_t g_94 = 1L;
static int32_t g_95[2] = {2L,2L};
static struct S1 g_96 = {5444};
static int32_t g_117 = (-5L);
static uint64_t g_118 = 0x262EB4CE563FEC5CLL;
static int32_t g_149 = 0xF6E95F59L;
static uint32_t g_153 = 0UL;



static const struct S1  func_1(void);
static struct S0  func_12(struct S0  p_13, uint8_t  p_14);
static struct S0  func_15(uint8_t  p_16);
static int16_t  func_17(struct S2  p_18);




static const struct S1  func_1(void)
{ 
    int32_t l_6 = 4L;
    int32_t l_116 = 0x061077F7L;
    uint32_t l_173 = 18446744073709551613UL;
    struct S2 l_177 = {0x1BAEL,0x03ACE2569E2B6F6ALL,{5549,43,12348,25},0xA0F4BA2FL};
    const struct S1 l_195 = {5747};
    for (g_2 = 0; (g_2 < (-17)); --g_2)
    { 
        int32_t l_5 = 0xFA3A92BDL;
        int32_t l_115[3][5][4] = {{{0xBD77ED61L,0xBD77ED61L,(-8L),(-1L)},{(-1L),(-4L),(-8L),(-4L)},{0xBD77ED61L,0x5480BE89L,1L,(-8L)},{(-4L),0x5480BE89L,0x5480BE89L,(-4L)},{0x5480BE89L,(-4L),0xBD77ED61L,(-1L)}},{{0x5480BE89L,0xBD77ED61L,0x5480BE89L,1L},{(-4L),(-1L),1L,1L},{0xBD77ED61L,0xBD77ED61L,(-8L),(-1L)},{(-1L),(-4L),(-8L),(-4L)},{0xBD77ED61L,0x5480BE89L,1L,(-8L)}},{{(-4L),0x5480BE89L,0x5480BE89L,(-4L)},{(-1L),0x5480BE89L,1L,1L},{(-1L),1L,(-1L),(-8L)},{0x5480BE89L,1L,(-8L),(-8L)},{1L,1L,0xBD77ED61L,1L}}};
        struct S1 l_121 = {3457};
        uint32_t l_151 = 0x8F2B49F5L;
        int32_t l_152[2];
        union U4 l_158 = {0xE130L};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_152[i] = 0L;
        l_6 &= (l_5 ^= 0x131D8B9DL);
        for (l_5 = 0; (l_5 != 29); ++l_5)
        { 
            struct S2 l_19 = {0x3895L,0xFE511BD77DFCC86FLL,{-200,19,37954,86},0UL};
            int32_t l_114 = (-1L);
            struct S1 l_122 = {3572};
            uint8_t l_129 = 250UL;
            uint16_t l_131 = 0x7957L;
            g_9 = g_9;
            if ((safe_lshift_func_uint8_t_u_s((l_114 |= (func_12(func_15(((func_17(l_19) ^ g_9.f3) >= 0x326EL)), l_5) , g_51)), l_5)))
            { 
                g_118--;
            }
            else
            { 
                l_122 = l_121;
                g_96 = g_96;
                l_114 = ((l_5 , (g_2 & (((safe_sub_func_int32_t_s_s(((0x04L == ((g_9.f2 | l_19.f1) && g_2)) <= 0x56L), 0xF6FB23EEL)) , 0xEB3B5FD3493D6CB4LL) >= 0x3456A020803FA2AELL))) != l_19.f1);
            }
            for (g_118 = 0; (g_118 <= 1); g_118 += 1)
            { 
                uint32_t l_150 = 9UL;
                g_9.f3 = (l_121.f0 < ((safe_add_func_int32_t_s_s(9L, (l_129 >= ((!l_115[1][3][3]) > g_2)))) == l_131));
                l_152[1] = (safe_rshift_func_int16_t_s_s(((l_115[0][1][0] |= l_131) | (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_95[1] && ((((+(g_149 = (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_114, l_6)), g_95[1])), 1UL)))) < 0xFE33L) == l_150) & 255UL)), l_116)), l_151)) | l_121.f0), 9)) > 0xA6L) && l_116), l_122.f0))), 0));
            }
        }
        for (g_117 = 0; (g_117 <= 2); g_117 += 1)
        { 
            int16_t l_166 = 0x51E1L;
            int32_t l_172 = (-3L);
            int32_t l_194 = 0x82BEE219L;
            for (g_51 = 1; (g_51 >= 0); g_51 -= 1)
            { 
                int i, j, k;
                g_96 = g_96;
                g_153++;
                g_9.f0 = (safe_add_func_uint64_t_u_u((l_158 , 9UL), (safe_sub_func_int32_t_s_s((+0x7558B3E8L), l_115[g_117][(g_117 + 1)][(g_51 + 2)]))));
            }
            for (g_118 = 0; (g_118 <= 1); g_118 += 1)
            { 
                int i, j, k;
                l_152[g_118] = l_115[g_118][(g_117 + 1)][g_117];
            }
            if (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_166 |= 0x66L), (l_152[1] , (safe_unary_minus_func_uint64_t_u(((((safe_rshift_func_int16_t_s_u(((l_172 = (safe_lshift_func_uint8_t_u_s(g_149, ((-1L) == l_6)))) || 0x4E5FL), 2)) , l_173) , l_172) , l_172)))))), g_94)) , l_115[1][4][0]))
            { 
                uint16_t l_174[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_174[i] = 0UL;
                --l_174[0];
            }
            else
            { 
                uint16_t l_193 = 0xB9DDL;
                g_9.f0 = (l_177 , (1L && (((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0x3545FE63L, g_153)), g_94)) & g_9.f2) || g_9.f3)));
                g_9.f3 = ((((((((safe_rshift_func_int16_t_s_u(g_94, (safe_lshift_func_uint8_t_u_s((((l_177.f3 != ((safe_mod_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s((+(2L != l_193)), 0xFF6FCCE8L)) < l_194) && g_2) >= l_172), 0)) | 0xF48CF4D9L) , g_51), l_152[1])) > 1L)) <= l_193) < (-2L)), 7)))) , l_158.f1) < l_193) >= l_166) <= l_166) <= 1L) >= g_153) >= 0x22B5A8EEL);
            }
            for (l_173 = 0; (l_173 <= 1); l_173 += 1)
            { 
                int i;
                l_152[l_173] = 0x6D67C1E1L;
            }
        }
    }
    return l_195;
}



static struct S0  func_12(struct S0  p_13, uint8_t  p_14)
{ 
    const int32_t l_87 = 1L;
    struct S0 l_93 = {2980,13,2769,115};
    if (((l_87 & (p_14 &= (~(safe_div_func_uint16_t_u_u(((0x4CED5A68L || ((l_93 , ((((4L ^ 65535UL) <= l_87) & l_87) ^ g_9.f3)) <= l_93.f3)) == 4294967293UL), g_94))))) <= p_13.f2))
    { 
        uint32_t l_100 = 0x87F316B6L;
        struct S2 l_108 = {-6L,18446744073709551615UL,{-4004,32,30970,-114},7UL};
        for (g_94 = 0; (g_94 <= 1); g_94 += 1)
        { 
            for (g_51 = 1; (g_51 >= 0); g_51 -= 1)
            { 
                struct S1 l_97 = {1677};
                l_97 = g_96;
            }
        }
        g_9.f3 &= (safe_div_func_uint8_t_u_u(l_100, (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_9.f1, (!(safe_div_func_int32_t_s_s(((g_94 | (l_108 , (-8L))) || 0xD9A1L), g_9.f2))))), p_13.f1))));
    }
    else
    { 
        uint32_t l_113 = 0UL;
        p_13.f0 = (safe_add_func_uint8_t_u_u(0xECL, ((((l_93.f0 = 65527UL) | (safe_div_func_int8_t_s_s(g_9.f2, 0x0AL))) & l_113) == g_95[1])));
        p_13.f3 = (((g_96.f0 ^ l_93.f0) || ((p_14 , 65535UL) <= l_93.f0)) < 0xE7D9AD9CL);
        return p_13;
    }
    return g_9;
}



static struct S0  func_15(uint8_t  p_16)
{ 
    struct S1 l_67[2] = {{3471},{3471}};
    int32_t l_81 = 6L;
    int32_t l_82 = (-1L);
    struct S0 l_86 = {2218,53,3467,-55};
    int i;
    l_67[0] = l_67[1];
lbl_85:
    g_9.f0 = (safe_mul_func_uint16_t_u_u((0x13AA7A40L >= (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(p_16, (safe_div_func_uint64_t_u_u(((l_82 = (l_81 = (!(safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((1UL <= (l_67[1].f0 || p_16)) == l_67[1].f0), l_67[1].f0)), 0x5A7FL))))) & (-7L)), 5UL)))) == g_9.f1), g_51))), g_9.f0));
    for (l_81 = 20; (l_81 != 24); l_81++)
    { 
        if (p_16)
            goto lbl_85;
    }
    return l_86;
}



static int16_t  func_17(struct S2  p_18)
{ 
    int8_t l_34 = 8L;
    uint32_t l_49 = 0x833E1ABBL;
    int32_t l_50 = 1L;
    int32_t l_53 = 0x96BD0C7FL;
    uint32_t l_64 = 0xE3E38F49L;
    g_9.f0 = (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((!(((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_18.f1, ((!(safe_lshift_func_uint8_t_u_u(l_34, (0UL != (0xD38E20B4584502E4LL ^ g_9.f3))))) > p_18.f0))), g_9.f3)), l_34)) && p_18.f2.f2) , l_34)) || g_9.f2), l_34)), 0x09E69C17L));
    for (l_34 = (-1); (l_34 < 11); ++l_34)
    { 
        uint8_t l_48[3][4][1] = {{{8UL},{0x4FL},{8UL},{0x4FL}},{{8UL},{0x4FL},{8UL},{0x4FL}},{{8UL},{0x4FL},{8UL},{0x4FL}}};
        int32_t l_52 = (-10L);
        int i, j, k;
        l_53 = (safe_mul_func_uint16_t_u_u(g_9.f0, (l_52 ^= ((g_51 = ((p_18.f1 = (safe_div_func_uint32_t_u_u((l_34 && ((l_50 = ((safe_div_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(g_9.f1, (+(safe_add_func_int16_t_s_s((p_18.f0 = ((l_34 | l_34) , l_48[1][0][0])), l_49))))) & l_49), p_18.f2.f2)) != g_9.f3)) && g_9.f3)), g_9.f0))) >= l_48[1][1][0])) <= (-6L)))));
        l_52 ^= (safe_mul_func_uint16_t_u_u(p_18.f2.f0, (p_18.f1 >= ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((((safe_sub_func_int32_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s((((l_50 > 0xC49480DD0043BD3ALL) <= 0xC9657A47622B4615LL) == g_9.f3), p_18.f1)))) ^ l_48[1][0][0]) | 0x6780L) | p_18.f1) && g_2) | g_9.f0) , g_51), g_51)), 0x8A2EL)) >= 0x99AE1959L))));
    }
    ++l_64;
    return g_9.f1;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    transparent_crc(g_9.f3, "g_9.f3", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
