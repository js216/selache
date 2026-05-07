// SPDX-License-Identifier: MIT
// cctest_csmith_d237942d.c --- cctest case csmith_d237942d (csmith seed 3526857773)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfe728a39 */

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

// Options:   -s 3526857773 -o /tmp/csmith_gen_opttrf2o/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int32_t  f0;
   unsigned f1 : 10;
   const uint16_t  f2;
   uint32_t  f3;
};

struct S1 {
   unsigned f0 : 15;
   uint16_t  f1;
   signed f2 : 15;
};

struct S2 {
   const unsigned f0 : 5;
};

union U3 {
   uint32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};

union U4 {
   int32_t  f0;
};


static int64_t g_11 = 0x047D2038E85A7B05LL;
static uint32_t g_31[2][2][4] = {{{0x2B4CF22AL,4294967295UL,0x2B4CF22AL,0x2B4CF22AL},{4294967295UL,4294967295UL,4294967294UL,4294967295UL}},{{4294967295UL,0x2B4CF22AL,0x2B4CF22AL,4294967295UL},{0x2B4CF22AL,4294967295UL,0x2B4CF22AL,0x2B4CF22AL}}};
static int32_t g_42 = 6L;
static uint32_t g_57[7] = {0x49389D0EL,0x49389D0EL,0UL,0x49389D0EL,0x49389D0EL,0UL,0x49389D0EL};
static struct S1 g_58[6] = {{17,0x8E87L,-75},{17,0x8E87L,-75},{17,0x8E87L,-75},{17,0x8E87L,-75},{17,0x8E87L,-75},{17,0x8E87L,-75}};
static int32_t g_61 = 0xCDB7A897L;
static uint64_t g_65 = 1UL;
static int8_t g_88 = 0xC0L;
static uint16_t g_95 = 1UL;
static struct S2 g_111 = {3};
static union U3 g_112 = {0x2CAD0F00L};
static int32_t *g_130 = (void*)0;
static int16_t g_144 = 0x7782L;
static int32_t g_145 = 0x23BADFC1L;
static int8_t g_149[1][5] = {{2L,2L,2L,2L,2L}};
static int64_t g_194 = 0x6469023DF18954A2LL;
static struct S2 *g_236 = (void*)0;
static struct S1 *g_257 = (void*)0;
static struct S1 **g_256[2] = {&g_257,&g_257};
static uint64_t g_279 = 0UL;
static uint8_t g_282[7][3][7] = {{{0x01L,0UL,255UL,1UL,6UL,1UL,0x75L},{0UL,255UL,0xEAL,0x01L,0x4DL,8UL,0x67L},{1UL,0x81L,0x4DL,0UL,255UL,0xD3L,0x01L}},{{1UL,0x67L,0xEAL,0xD3L,0xF5L,0UL,0x73L},{0x75L,0xF5L,0xEBL,0x01L,252UL,255UL,0x79L},{255UL,254UL,0UL,255UL,1UL,255UL,0xF5L}},{{0xD5L,252UL,255UL,0xD5L,0x75L,255UL,8UL},{255UL,255UL,1UL,255UL,0x4DL,255UL,0UL},{0x01L,253UL,1UL,0x75L,1UL,0UL,0UL}},{{0xD3L,252UL,1UL,1UL,252UL,0xD3L,1UL},{0UL,0x01L,255UL,1UL,250UL,8UL,0x79L},{0x01L,8UL,0x51L,252UL,0UL,0x46L,250UL}},{{0UL,0x01L,255UL,0x3CL,7UL,255UL,0x4DL},{0x4DL,252UL,0UL,2UL,0x31L,253UL,0x67L},{255UL,253UL,0x51L,255UL,255UL,254UL,252UL}},{{255UL,255UL,0x81L,0x46L,0x79L,0x51L,0x46L},{0x67L,252UL,255UL,7UL,0x79L,0x73L,0x4DL},{1UL,254UL,1UL,252UL,255UL,0xEAL,0x2FL}},{{255UL,0xF5L,254UL,253UL,0x31L,0UL,0UL},{7UL,0x67L,0x4EL,0x67L,7UL,0xB5L,255UL},{2UL,0x81L,0UL,0x75L,0UL,254UL,0x2FL}}};
static uint32_t *g_323[4][7] = {{(void*)0,&g_112.f2,(void*)0,&g_112.f2,(void*)0,&g_112.f2,(void*)0},{&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2},{(void*)0,&g_112.f2,(void*)0,&g_112.f2,(void*)0,&g_112.f2,(void*)0},{&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2,&g_112.f2}};
static uint32_t **g_322 = &g_323[2][2];
static uint16_t *g_359 = &g_112.f3;
static uint16_t *g_360 = &g_112.f3;
static const uint16_t g_364 = 0xA6A1L;
static const uint16_t *g_363[5][2] = {{&g_364,&g_364},{&g_364,&g_364},{&g_364,&g_364},{&g_364,&g_364},{&g_364,&g_364}};
static uint16_t g_380[7] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL};
static int32_t g_384[5][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
static uint64_t *g_393 = (void*)0;
static uint64_t *g_397 = &g_279;
static const uint64_t **g_413 = (void*)0;
static struct S0 g_418 = {0x235C0653L,7,65535UL,0xB1035838L};
static union U4 g_439 = {-1L};
static union U4 *g_438 = &g_439;
static const union U3 g_442 = {18446744073709551610UL};
static int8_t g_478[4] = {0L,0L,0L,0L};
static int8_t g_631[3] = {0x29L,0x29L,0x29L};
static int32_t g_634 = 0xC98EF799L;
static uint16_t g_635[3][7] = {{0x5718L,0x5718L,0xDDEEL,0x5718L,0x5718L,0xDDEEL,0x5718L},{65535UL,0UL,0UL,65535UL,0UL,0UL,65535UL},{1UL,0x5718L,1UL,1UL,0x5718L,1UL,1UL}};
static uint32_t g_648 = 0x98281550L;
static int32_t g_652 = (-7L);
static int16_t *g_722 = &g_144;
static int16_t **g_721[6][4] = {{&g_722,&g_722,&g_722,&g_722},{&g_722,&g_722,&g_722,&g_722},{&g_722,&g_722,&g_722,(void*)0},{&g_722,&g_722,&g_722,&g_722},{&g_722,&g_722,&g_722,&g_722},{&g_722,&g_722,&g_722,&g_722}};
static int16_t ***g_720 = &g_721[4][1];
static uint8_t g_805[2] = {250UL,250UL};
static union U3 g_832 = {18446744073709551610UL};
static const uint16_t g_839[5] = {0x508AL,0x508AL,0x508AL,0x508AL,0x508AL};
static struct S1 g_859 = {174,0UL,-3};
static int32_t g_864 = 0xFD8C9190L;
static int8_t *g_873 = &g_149[0][4];
static int32_t g_875 = 0x006C9ED8L;
static uint32_t *g_905 = &g_832.f0;
static uint32_t **g_904 = &g_905;
static uint32_t g_1011 = 1UL;
static uint32_t g_1030 = 0UL;
static uint32_t * const g_1029 = &g_1030;
static uint32_t * const *g_1028 = &g_1029;
static uint32_t * const **g_1027[4] = {&g_1028,&g_1028,&g_1028,&g_1028};
static int32_t g_1038 = (-1L);
static int32_t g_1042 = (-1L);
static struct S2 ***g_1108 = (void*)0;
static const uint32_t g_1139 = 0x1C5A3863L;
static const uint32_t *g_1138 = &g_1139;
static const uint32_t g_1143 = 0x78E8D3C0L;
static int64_t g_1157 = 0x78C8E78B37DCFFE4LL;
static uint64_t g_1193 = 18446744073709551615UL;
static const int16_t **g_1212 = (void*)0;
static const int16_t ***g_1211 = &g_1212;
static uint32_t g_1231[1][2] = {{0x0E68FBE7L,0x0E68FBE7L}};
static struct S0 g_1279 = {0xEB8F0998L,11,0xB82AL,1UL};
static uint16_t g_1287 = 9UL;
static int32_t **g_1376 = &g_130;
static int8_t g_1458 = 0xD1L;
static int32_t * const g_1546 = &g_634;
static int64_t g_1600[2][3][7] = {{{(-9L),0xFB9F05404AE24902LL,0xFB9F05404AE24902LL,(-9L),0L,0x4996499BF2A82729LL,(-9L)},{0xFF63BA7D6D916F6CLL,0x492320FD27FEF435LL,0xAFEFD137D866BE3CLL,0xAFEFD137D866BE3CLL,0x492320FD27FEF435LL,0xFF63BA7D6D916F6CLL,0xAD22E1D619F366F7LL},{0xA05EEE7ADDFF7F2ELL,(-9L),(-10L),0x419B5893617BA7C3LL,0x419B5893617BA7C3LL,(-10L),(-9L)}},{{0x492320FD27FEF435LL,0xAD22E1D619F366F7LL,0xFF63BA7D6D916F6CLL,0x492320FD27FEF435LL,0xAFEFD137D866BE3CLL,0xAFEFD137D866BE3CLL,0x492320FD27FEF435LL},{0x4996499BF2A82729LL,(-9L),0x4996499BF2A82729LL,0L,(-9L),0xFB9F05404AE24902LL,0xFB9F05404AE24902LL},{0x15057AA8A19CD145LL,0x492320FD27FEF435LL,(-1L),0x492320FD27FEF435LL,0x15057AA8A19CD145LL,(-1L),1L}}};
static const struct S0 g_1631 = {0xB39A664BL,31,0x35A9L,18446744073709551615UL};
static int8_t g_1676 = 0xE6L;
static union U3 * const g_1708 = (void*)0;
static union U3 * const *g_1707[2] = {&g_1708,&g_1708};
static struct S0 g_1934 = {3L,25,65535UL,0xEEE4C699L};
static struct S0 *g_1970 = &g_1279;
static struct S0 **g_1969[2][5] = {{&g_1970,&g_1970,(void*)0,&g_1970,&g_1970},{&g_1970,&g_1970,&g_1970,&g_1970,&g_1970}};
static uint64_t g_2029 = 18446744073709551614UL;
static uint32_t g_2049 = 1UL;
static uint8_t g_2093 = 0x31L;
static int32_t g_2153 = 1L;
static uint32_t *****g_2237 = (void*)0;
static uint8_t *g_2289[3][6] = {{(void*)0,&g_2093,&g_2093,(void*)0,&g_2093,&g_2093},{(void*)0,&g_2093,&g_2093,(void*)0,&g_2093,&g_2093},{(void*)0,&g_2093,&g_2093,(void*)0,&g_2093,&g_2093}};
static uint8_t **g_2288 = &g_2289[2][0];
static int8_t g_2290 = (-10L);
static int32_t g_2351 = 0x1A0153F5L;
static uint16_t g_2353 = 65535UL;
static uint64_t ***g_2368 = (void*)0;
static int32_t g_2395 = 1L;
static const int32_t g_2401 = 0x9FEF27B2L;
static const int32_t *g_2402 = &g_42;
static uint16_t **g_2593 = (void*)0;
static uint16_t ** const *g_2592[6][4][7] = {{{&g_2593,&g_2593,(void*)0,(void*)0,&g_2593,&g_2593,&g_2593},{&g_2593,&g_2593,&g_2593,(void*)0,&g_2593,&g_2593,(void*)0},{&g_2593,&g_2593,&g_2593,(void*)0,&g_2593,(void*)0,&g_2593},{&g_2593,(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593}},{{&g_2593,&g_2593,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593},{&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593},{&g_2593,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593,&g_2593},{&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593}},{{&g_2593,&g_2593,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593},{(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593},{&g_2593,(void*)0,&g_2593,&g_2593,&g_2593,(void*)0,&g_2593},{&g_2593,(void*)0,(void*)0,&g_2593,&g_2593,&g_2593,&g_2593}},{{&g_2593,(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593},{&g_2593,(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593},{&g_2593,(void*)0,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593},{(void*)0,(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593}},{{&g_2593,(void*)0,&g_2593,&g_2593,&g_2593,(void*)0,&g_2593},{&g_2593,(void*)0,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593},{&g_2593,&g_2593,(void*)0,(void*)0,(void*)0,(void*)0,&g_2593},{&g_2593,&g_2593,&g_2593,&g_2593,(void*)0,&g_2593,&g_2593}},{{(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593},{(void*)0,&g_2593,&g_2593,&g_2593,&g_2593,&g_2593,(void*)0},{(void*)0,&g_2593,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593},{&g_2593,&g_2593,&g_2593,(void*)0,&g_2593,&g_2593,&g_2593}}};
static struct S2 g_2599[1][5] = {{{2},{2},{2},{2},{2}}};
static uint64_t *g_2732 = &g_65;
static uint32_t ***g_2747 = &g_904;
static uint32_t ****g_2746 = &g_2747;
static int32_t *g_2758 = &g_2153;
static int64_t g_2779 = 0xB71815D776D380D3LL;
static union U3 *g_2820 = &g_832;
static union U3 **g_2819[3] = {&g_2820,&g_2820,&g_2820};



static int64_t  func_1(void);
static uint16_t  func_4(int32_t  p_5, uint32_t  p_6, struct S0  p_7, union U3  p_8, uint32_t  p_9);
static struct S0  func_12(struct S1  p_13, int32_t  p_14, int8_t  p_15);
static int32_t  func_17(int8_t  p_18);
static struct S1  func_19(int32_t  p_20, const uint32_t  p_21, uint64_t  p_22, union U3  p_23, uint64_t  p_24);
static struct S0  func_32(struct S1  p_33, struct S2  p_34, uint32_t * p_35, int8_t  p_36);
static struct S2  func_38(struct S1  p_39);
static int32_t  func_47(uint16_t  p_48, struct S1  p_49, uint32_t  p_50, uint32_t * p_51, const uint32_t * p_52);




static int64_t  func_1(void)
{ 
    int64_t l_10 = 0x864896E6A3735B26LL;
    struct S1 l_16 = {98,0xFF63L,-108};
    union U3 l_1718 = {0UL};
    int32_t l_2823 = 0x73488AF6L;
    l_2823 &= ((*g_1546) = (safe_mul_func_uint16_t_u_u(func_4(l_10, g_11, func_12(l_16, func_17(g_11), l_16.f1), l_1718, l_10), l_16.f1)));
    return g_635[1][5];
}



static uint16_t  func_4(int32_t  p_5, uint32_t  p_6, struct S0  p_7, union U3  p_8, uint32_t  p_9)
{ 
    struct S1 l_1723 = {161,0UL,-58};
    struct S2 l_1724 = {3};
    uint32_t * const *l_1725 = &g_323[0][1];
    union U3 l_1731 = {0x05F642A6L};
    int32_t l_1735 = (-1L);
    int32_t l_1737 = (-1L);
    int32_t l_1738 = 1L;
    uint32_t l_1742 = 0x5B77D349L;
    int32_t *l_1811 = &g_384[3][1];
    int16_t **l_1852 = &g_722;
    const union U4 *l_1854 = (void*)0;
    union U4 *l_1859[1];
    struct S1 *l_1894[6][3][2];
    int32_t l_1899 = 1L;
    uint16_t **l_1921[1][7][7] = {{{(void*)0,&g_359,&g_360,&g_360,&g_360,&g_360,&g_360},{(void*)0,&g_360,&g_359,&g_360,(void*)0,&g_360,(void*)0},{&g_359,(void*)0,&g_359,(void*)0,&g_360,&g_359,(void*)0},{(void*)0,(void*)0,&g_360,&g_359,&g_359,&g_360,(void*)0},{&g_359,(void*)0,(void*)0,(void*)0,&g_359,&g_360,&g_360},{(void*)0,&g_359,&g_360,&g_359,&g_359,&g_359,&g_359},{(void*)0,&g_359,&g_359,(void*)0,&g_360,&g_359,(void*)0}}};
    int32_t l_1947[7];
    uint32_t l_1960[7][2];
    int16_t l_2028 = 1L;
    uint64_t l_2075 = 18446744073709551615UL;
    struct S1 ***l_2082 = &g_256[0];
    struct S1 ****l_2081 = &l_2082;
    union U3 *l_2195[6] = {(void*)0,&l_1731,&l_1731,(void*)0,&l_1731,&l_1731};
    union U3 **l_2194 = &l_2195[3];
    union U3 l_2213 = {1UL};
    uint32_t ***l_2336 = &g_322;
    uint32_t ****l_2335 = &l_2336;
    uint32_t l_2342[6][5] = {{5UL,0x1C8A31D2L,0x35029868L,0x1C8A31D2L,5UL},{5UL,0x4512B4EDL,9UL,0x4512B4EDL,5UL},{5UL,0x1C8A31D2L,0x35029868L,0x1C8A31D2L,5UL},{5UL,0x4512B4EDL,9UL,0x4512B4EDL,5UL},{5UL,0x1C8A31D2L,0x35029868L,0x1C8A31D2L,5UL},{5UL,0x4512B4EDL,9UL,0x4512B4EDL,5UL}};
    uint64_t **l_2370 = &g_397;
    uint64_t ***l_2369[5][7][2] = {{{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,(void*)0}},{{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{(void*)0,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370}},{{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{(void*)0,&l_2370}},{{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,(void*)0},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370}},{{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370},{&l_2370,&l_2370}}};
    uint16_t l_2424[3];
    uint32_t l_2455 = 0x6880B5BBL;
    int32_t *l_2468 = &g_145;
    uint32_t l_2491 = 0x13FBC1D3L;
    uint32_t ***l_2523 = &g_904;
    uint32_t *l_2536 = &l_2213.f0;
    uint8_t l_2546[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
    const uint32_t **l_2569 = &g_1138;
    const uint32_t ***l_2568 = &l_2569;
    const uint32_t ****l_2567 = &l_2568;
    union U3 l_2651[7][5][7] = {{{{0xA9064075L},{0xCA2DB158L},{18446744073709551615UL},{18446744073709551615UL},{0xCA2DB158L},{0xA9064075L},{18446744073709551611UL}},{{0x4BBDD269L},{18446744073709551615UL},{0x59FBF9E0L},{0UL},{0xF41C6D8EL},{0x3A5AAED1L},{6UL}},{{0x83B71515L},{0x451A808BL},{0x9761763EL},{6UL},{0x5E266298L},{2UL},{3UL}},{{2UL},{18446744073709551615UL},{1UL},{2UL},{0xCEFD577EL},{0xB39516A3L},{0x5A82F64EL}},{{0x8A5CDA3CL},{0xCA2DB158L},{0UL},{0x984E23C8L},{18446744073709551613UL},{0xCBB7E86EL},{0x62B28A13L}}},{{{0x3531D677L},{5UL},{0x5A82F64EL},{18446744073709551615UL},{8UL},{0x77FF15C1L},{0xBB91A0D4L}},{{0x9761763EL},{18446744073709551610UL},{0x9B52A1BEL},{0UL},{0xD0A387DEL},{18446744073709551611UL},{0x5E266298L}},{{3UL},{0x3BF82FCBL},{0x27173528L},{18446744073709551615UL},{0x3531D677L},{0UL},{6UL}},{{0xAE2C867EL},{0x370FCFBDL},{0xA07A6335L},{3UL},{0xA07A6335L},{0x370FCFBDL},{0xAE2C867EL}},{{0x98351B22L},{18446744073709551615UL},{2UL},{0x163CF59FL},{0x4BBDD269L},{0UL},{1UL}}},{{{0x62B28A13L},{2UL},{0x47AD31C2L},{0x8498D545L},{18446744073709551613UL},{6UL},{0x83B71515L}},{{0x473BE1C0L},{18446744073709551614UL},{0xD5B8CF26L},{1UL},{0x80F53C2AL},{0x27173528L},{0x98351B22L}},{{2UL},{18446744073709551607UL},{0x47AD31C2L},{0UL},{18446744073709551615UL},{0x1E55E3E5L},{18446744073709551611UL}},{{1UL},{18446744073709551615UL},{1UL},{0x5A82F64EL},{0xF16C46E2L},{0x3BF82FCBL},{0x5A82F64EL}},{{18446744073709551615UL},{0UL},{2UL},{0x9B52A1BEL},{4UL},{18446744073709551615UL},{0UL}}},{{{0x80F53C2AL},{0xD5F54598L},{0x5FFBEA28L},{0x27173528L},{0x5A82F64EL},{8UL},{18446744073709551610UL}},{{18446744073709551609UL},{18446744073709551615UL},{6UL},{0xA07A6335L},{0xA07A6335L},{6UL},{18446744073709551615UL}},{{0xB39516A3L},{0x3A5AAED1L},{0UL},{2UL},{0UL},{0xD5B8CF26L},{1UL}},{{0UL},{0UL},{6UL},{0x47AD31C2L},{0UL},{0x1E55E3E5L},{0xDDB1118BL}},{{0x163CF59FL},{5UL},{0xF41C6D8EL},{2UL},{5UL},{0x174B1F5EL},{0UL}}},{{{1UL},{0xDDB1118BL},{0x23BC66F8L},{0xA07A6335L},{0x4247E0ECL},{0x5984CD57L},{0x451A808BL}},{{0UL},{0x5A82F64EL},{0x3A5AAED1L},{0x27173528L},{0x8FFBD813L},{1UL},{0x59FBF9E0L}},{{0x9B52A1BEL},{0x9761763EL},{18446744073709551610UL},{0x9B52A1BEL},{0UL},{0xD0A387DEL},{18446744073709551611UL}},{{0xF16C46E2L},{1UL},{0xF20CD3A4L},{0x5A82F64EL},{18446744073709551610UL},{0UL},{2UL}},{{0x5984CD57L},{0UL},{0x1E55E3E5L},{0UL},{1UL},{0UL},{0x1E55E3E5L}}},{{{5UL},{5UL},{18446744073709551615UL},{1UL},{5UL},{0x2E39DAC8L},{0x8FFBD813L}},{{0x5E266298L},{2UL},{0xD898BAB6L},{0x9761763EL},{0x5984CD57L},{0x47AD31C2L},{0x451A808BL}},{{8UL},{0xD5F54598L},{0UL},{0x59FBF9E0L},{5UL},{0UL},{8UL}},{{0x370FCFBDL},{18446744073709551608UL},{18446744073709551614UL},{18446744073709551615UL},{1UL},{0x984E23C8L},{0x9761763EL}},{{2UL},{0xF20CD3A4L},{0x80F53C2AL},{8UL},{18446744073709551610UL},{0UL},{1UL}}},{{{0UL},{18446744073709551607UL},{0x4247E0ECL},{0xA5294696L},{0UL},{0x28B4C9BBL},{2UL}},{{0x98351B22L},{1UL},{0xCEFD577EL},{0UL},{0x8FFBD813L},{18446744073709551615UL},{0xB39516A3L}},{{18446744073709551607UL},{18446744073709551615UL},{0xD898BAB6L},{0UL},{0x4247E0ECL},{0x4247E0ECL},{0UL}},{{8UL},{0UL},{8UL},{0xD5B8CF26L},{5UL},{0xF20CD3A4L},{1UL}},{{0UL},{0xA07A6335L},{0xAE2C867EL},{0x5E266298L},{0UL},{18446744073709551613UL},{0x370FCFBDL}}}};
    int32_t l_2666 = (-3L);
    int32_t l_2676 = 3L;
    int32_t l_2700 = (-6L);
    uint16_t l_2701[7][1];
    int32_t l_2717[5][3] = {{1L,1L,1L},{0L,0L,0L},{1L,1L,1L},{0L,0L,0L},{1L,1L,1L}};
    const int32_t *l_2730 = &g_42;
    int32_t l_2753 = 0x0A8C27F0L;
    union U3 **l_2822 = &l_2195[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1859[i] = &g_439;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_1894[i][j][k] = &g_58[1];
        }
    }
    for (i = 0; i < 7; i++)
        l_1947[i] = 0L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_1960[i][j] = 0UL;
    }
    for (i = 0; i < 3; i++)
        l_2424[i] = 0xFA67L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2701[i][j] = 6UL;
    }
lbl_2737:
    if ((l_1723.f2 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((*g_722), 5)), ((l_1724 , p_8.f0) <= ((*g_397) = (((l_1725 == (l_1723 , l_1725)) == 0L) == p_6)))))))
    { 
        uint64_t l_1726 = 0xDA9E82A11D6427DELL;
        uint16_t *l_1734[2][1][1];
        int64_t *l_1736[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1734[i][j][k] = &g_58[1].f1;
            }
        }
        for (i = 0; i < 2; i++)
            l_1736[i] = &g_1600[1][2][4];
        l_1738 &= ((l_1726 && 8UL) >= ((l_1737 = (safe_div_func_int8_t_s_s(((l_1724.f0 | (safe_lshift_func_uint16_t_u_u((g_859.f1 ^= (l_1735 &= (l_1723.f2 ^= ((((*g_1546) = ((*g_1546) != (l_1731 , ((g_384[3][4] | ((safe_mul_func_uint8_t_u_u(255UL, p_8.f2)) < 0x833C51A936CB8735LL)) | 65533UL)))) == p_8.f1) || l_1723.f1)))), 8))) , 0x68L), p_8.f0))) && g_1631.f3));
        for (g_112.f2 = 0; (g_112.f2 <= 1); g_112.f2 += 1)
        { 
            return p_5;
        }
    }
    else
    { 
        struct S1 l_1741 = {76,0xAB9BL,51};
        int32_t *l_1808 = &g_439.f0;
        struct S2 ***l_1823 = (void*)0;
        struct S2 ****l_1824 = &l_1823;
        int16_t l_1833 = 0L;
        union U4 *l_1858 = &g_439;
        struct S1 l_1879 = {119,0xB257L,12};
        l_1738 ^= ((((safe_mod_func_int32_t_s_s(((*g_1546) = ((l_1724 , g_144) ^ (l_1741 , p_7.f3))), (((-1L) ^ p_8.f2) && 0x85D8D28E7C0C9DBBLL))) | p_9) && l_1742) && p_7.f3);
        for (p_6 = 0; (p_6 <= 43); p_6 = safe_add_func_int16_t_s_s(p_6, 1))
        { 
            struct S1 l_1749 = {48,0x22C4L,14};
            struct S1 *l_1750 = &l_1741;
            for (p_5 = 0; (p_5 < 23); p_5 = safe_add_func_uint64_t_u_u(p_5, 1))
            { 
                (*g_1376) = &l_1735;
            }
            (*l_1750) = l_1749;
            return p_7.f3;
        }
        for (g_1676 = 0; (g_1676 > 29); g_1676++)
        { 
            struct S1 l_1753 = {111,0xA42AL,-124};
            int32_t l_1786 = 0x980BA61AL;
            int16_t ***l_1814 = &g_721[4][1];
            l_1753 = (l_1741 = l_1723);
            if (p_7.f0)
                break;
            for (g_648 = 0; (g_648 != 49); ++g_648)
            { 
                int64_t l_1756 = 1L;
                return l_1756;
            }
            for (g_112.f0 = 23; (g_112.f0 < 15); g_112.f0 = safe_sub_func_uint16_t_u_u(g_112.f0, 7))
            { 
                uint32_t l_1785 = 0UL;
                if ((l_1737 = ((*g_1546) = (safe_mul_func_int16_t_s_s((l_1723 , ((safe_lshift_func_int16_t_s_s((p_8.f2 < (safe_div_func_uint64_t_u_u(p_8.f2, (safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_1741.f1, (safe_lshift_func_uint16_t_u_s((p_6 < (((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((l_1723.f1 | (safe_rshift_func_int8_t_s_u(((p_8.f3 == l_1785) != 0L), p_8.f1))), l_1785)), 0x640DFBB9L)) & 0x245BL), 6)), 6)) >= 0x9B0BF2F49C87592ALL) == l_1785)), 7)))), l_1741.f1)), 0x11L)) > l_1786), p_7.f1))))), 0)) && p_9)), p_7.f3)))))
                { 
                    int16_t l_1789[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1789[i] = 0x88FEL;
                    if (l_1753.f0)
                        break;
                    (*g_1546) ^= (safe_lshift_func_int16_t_s_s(p_8.f3, 15));
                    return l_1789[0];
                }
                else
                { 
                    int32_t **l_1809 = (void*)0;
                    int32_t **l_1810[2];
                    int16_t ****l_1813[7] = {&g_720,&g_720,&g_720,&g_720,&g_720,&g_720,&g_720};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1810[i] = &g_130;
                    (*g_1546) &= (((safe_mod_func_uint32_t_u_u(((**g_1028) ^= ((*l_1808) = (safe_div_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(9UL, p_8.f0)), (safe_add_func_int8_t_s_s(((l_1811 = l_1808) == &l_1786), l_1742)))) , ((*g_722) ^= (safe_unary_minus_func_int16_t_s(((l_1814 = &g_721[2][1]) != (g_720 = ((4294967295UL > (*l_1808)) , (void*)0))))))) > l_1735), 3)), 0x324275DFA0C1DB19LL)) , l_1786), p_8.f0)) & (-1L)) < l_1753.f0) == p_7.f1), 1L)) < l_1753.f1) ^ (*g_873)), p_7.f0)))), l_1753.f0)) , l_1753.f2) != p_8.f0);
                    (*g_1546) |= 0L;
                    return (*l_1811);
                }
            }
            (*l_1808) = (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(g_380[5], g_65)), (**g_1028)));
        }
        (*g_1546) |= (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((g_88 < (((*l_1811) == p_8.f1) && (g_1108 == ((*l_1824) = l_1823)))) , (**g_1028)), ((safe_mod_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_8.f1, (*l_1811))), 0xA5L)) || 3L), 0x4BAFAD18E4D9FB52LL)) == (*l_1808)) , l_1833), p_8.f1)) , (*l_1808)))), (*g_873)));
        for (g_418.f3 = 29; (g_418.f3 == 12); --g_418.f3)
        { 
            uint16_t l_1840 = 8UL;
            uint16_t *l_1844 = (void*)0;
            uint16_t *l_1845 = (void*)0;
            uint16_t *l_1846[3];
            struct S1 l_1853 = {152,1UL,-160};
            const union U4 **l_1855 = (void*)0;
            const union U4 **l_1856 = (void*)0;
            const union U4 **l_1857[3];
            int32_t *l_1860 = &g_652;
            int32_t *l_1863[4][5][2] = {{{(void*)0,&g_384[3][1]},{&g_864,(void*)0},{&g_439.f0,&g_439.f0},{(void*)0,&g_864},{&g_384[3][1],&g_864}},{{(void*)0,&g_439.f0},{&g_439.f0,(void*)0},{&g_864,&g_384[3][1]},{&g_864,(void*)0},{&g_439.f0,&g_439.f0}},{{(void*)0,&g_864},{&g_384[3][1],&g_864},{(void*)0,&g_439.f0},{&g_439.f0,(void*)0},{&g_864,&g_384[3][1]}},{{&g_864,(void*)0},{&g_439.f0,&g_439.f0},{(void*)0,&g_864},{&g_384[3][1],&g_864},{(void*)0,&g_439.f0}}};
            union U4 **l_1884 = &l_1859[0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1846[i] = &l_1741.f1;
            for (i = 0; i < 3; i++)
                l_1857[i] = &l_1854;
            for (g_1038 = 0; (g_1038 >= 9); g_1038 = safe_add_func_uint32_t_u_u(g_1038, 1))
            { 
                if ((*l_1808))
                    break;
                (*g_1376) = (((void*)0 != (*g_1211)) , &g_42);
            }
            (*l_1808) |= ((((g_95 > 6UL) > (p_7.f3 != (safe_mul_func_uint16_t_u_u((l_1840 & (p_8 , (safe_unary_minus_func_int8_t_s(((*l_1811) | (g_112.f1 = (((safe_rshift_func_int16_t_s_u(0L, 10)) , p_9) | (*g_397)))))))), l_1840)))) & 0xC7L) || (*g_397));
            (*l_1811) |= ((+1UL) <= (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((*g_1211) == l_1852), p_7.f3)), (((*l_1860) |= ((l_1853 , (l_1854 = l_1854)) == (l_1859[0] = l_1858))) , (*g_873)))));
        }
    }
lbl_2727:
    if ((safe_lshift_func_int16_t_s_u(p_8.f3, 15)))
    { 
        int32_t l_1944 = 1L;
        int32_t l_1945 = 0x69B49AD4L;
        int32_t l_1948[6][3][1] = {{{4L},{4L},{(-7L)}},{{4L},{4L},{(-7L)}},{{4L},{4L},{(-7L)}},{{4L},{4L},{(-7L)}},{{4L},{4L},{(-7L)}},{{4L},{4L},{(-7L)}}};
        uint8_t l_1949 = 1UL;
        struct S1 l_1962[6][6] = {{{49,0UL,-110},{101,0x062AL,176},{18,0xA191L,-132},{139,0x9A2AL,12},{139,0x9A2AL,12},{18,0xA191L,-132}},{{139,0x9A2AL,12},{139,0x9A2AL,12},{18,0xA191L,-132},{101,0x062AL,176},{49,0UL,-110},{18,0xA191L,-132}},{{101,0x062AL,176},{49,0UL,-110},{18,0xA191L,-132},{49,0UL,-110},{101,0x062AL,176},{18,0xA191L,-132}},{{49,0UL,-110},{101,0x062AL,176},{18,0xA191L,-132},{139,0x9A2AL,12},{139,0x9A2AL,12},{18,0xA191L,-132}},{{139,0x9A2AL,12},{139,0x9A2AL,12},{18,0xA191L,-132},{101,0x062AL,176},{49,0UL,-110},{18,0xA191L,-132}},{{101,0x062AL,176},{49,0UL,-110},{18,0xA191L,-132},{49,0UL,-110},{101,0x062AL,176},{18,0xA191L,-132}}};
        union U4 *l_1966 = &g_439;
        int32_t l_2001 = 1L;
        struct S0 l_2080 = {1L,14,1UL,1UL};
        int16_t ***l_2083 = &l_1852;
        uint16_t ***l_2215 = &l_1921[0][5][0];
        const struct S1 *l_2252[6][4] = {{&l_1962[1][1],&g_58[5],&l_1962[1][1],&g_58[5]},{&l_1962[1][1],&g_58[5],&l_1962[1][1],&g_58[5]},{&l_1962[1][1],&g_58[5],&l_1962[1][1],&g_58[5]},{&l_1962[1][1],&g_58[5],&l_1962[1][1],&g_58[5]},{&l_1962[1][1],&g_58[5],&l_1962[1][1],&g_58[5]},{&l_1962[1][1],&g_58[5],&l_1962[1][1],&g_58[5]}};
        const struct S1 * const *l_2251[2];
        struct S1 l_2258 = {132,65535UL,-124};
        int32_t l_2259[5] = {0x2A5CB463L,0x2A5CB463L,0x2A5CB463L,0x2A5CB463L,0x2A5CB463L};
        struct S1 **l_2262 = &l_1894[3][0][0];
        int64_t l_2296 = (-7L);
        uint32_t l_2302 = 1UL;
        uint16_t l_2315 = 65533UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2251[i] = &l_2252[4][3];
    }
    else
    { 
        uint32_t l_2423 = 1UL;
        struct S2 ***l_2461 = (void*)0;
        int32_t *l_2467 = &g_1038;
        int16_t l_2488 = 8L;
        int32_t l_2489 = (-1L);
        int32_t l_2490 = 9L;
        int32_t *l_2501 = &g_634;
        uint8_t *l_2512 = &g_282[1][0][6];
        struct S0 l_2524[1][3] = {{{0x06303DBCL,30,65526UL,0x2BCCBC90L},{0x06303DBCL,30,65526UL,0x2BCCBC90L},{0x06303DBCL,30,65526UL,0x2BCCBC90L}}};
        struct S1 l_2528 = {78,0xC867L,177};
        uint64_t l_2530 = 0x3B28B59BEB13818BLL;
        int32_t l_2556 = 0x5EFBB433L;
        struct S1 l_2560 = {69,1UL,-39};
        int16_t * const ***l_2573 = (void*)0;
        uint16_t ***l_2591 = &l_1921[0][3][6];
        int32_t l_2672[3];
        int32_t l_2680 = 3L;
        uint64_t l_2682 = 0x13E69424AD2943BCLL;
        int8_t l_2694[1];
        uint16_t l_2714 = 0xE140L;
        union U4 l_2722 = {0x19033C54L};
        struct S1 l_2724 = {12,0x0000L,-140};
        int i, j;
        for (i = 0; i < 3; i++)
            l_2672[i] = 0xDE606813L;
        for (i = 0; i < 1; i++)
            l_2694[i] = 1L;
    }
    for (g_634 = 8; (g_634 > 20); g_634 = safe_add_func_int32_t_s_s(g_634, 2))
    { 
        const int32_t *l_2728 = &l_2717[4][2];
        const int32_t **l_2729 = (void*)0;
        uint64_t *l_2731 = &g_1193;
        int32_t *l_2733 = &l_2717[2][1];
        struct S1 l_2742 = {123,65528UL,92};
        int32_t l_2772 = 1L;
        int32_t l_2773 = 0x65A98312L;
        int32_t l_2774 = (-6L);
        int32_t l_2775 = 7L;
        int32_t l_2778 = 0x814DBB79L;
        int8_t l_2783 = 1L;
        union U4 l_2803[2] = {{1L},{1L}};
        int i;
        if (p_8.f1)
            goto lbl_2727;
        l_2730 = l_2728;
        (*l_2733) = ((g_393 = ((*l_2370) = (*l_2370))) == (((*l_1811) ^= p_7.f2) , (l_2731 = (g_2732 = l_2731))));
        if ((*g_1546))
        { 
            int8_t l_2734 = 6L;
            return l_2734;
        }
        else
        { 
            struct S1 l_2743 = {120,0x1568L,-17};
            int32_t l_2771 = 4L;
            int32_t l_2776 = 0xA84F6958L;
            int32_t l_2777 = (-2L);
            uint16_t *l_2799 = (void*)0;
            int64_t *l_2800 = &g_1600[1][1][6];
            int16_t *l_2801 = &l_2028;
            uint8_t *l_2816 = &l_2546[2];
            union U3 ***l_2821[5] = {&g_2819[2],&g_2819[2],&g_2819[2],&g_2819[2],&g_2819[2]};
            int i;
            for (g_1676 = (-5); (g_1676 >= (-3)); g_1676 = safe_add_func_int8_t_s_s(g_1676, 1))
            { 
                int32_t l_2750 = 0L;
                int64_t l_2752 = 0x2F8DF300EEB014B5LL;
                struct S2 l_2766[1] = {{4}};
                int i;
                if (p_8.f2)
                    goto lbl_2737;
                for (g_2353 = 0; (g_2353 <= 1); g_2353 += 1)
                { 
                    int16_t *l_2749 = &l_2028;
                    int64_t *l_2751 = &g_1600[1][2][4];
                    (*l_2733) = (safe_div_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((l_1724 , ((safe_add_func_int64_t_s_s((-1L), (*l_2728))) == ((*l_1811) = (((((*l_2751) = (g_2746 != ((p_7.f0 > (((((+((l_2749 == l_2749) >= l_2743.f2)) ^ 0x5499BAACL) > 1L) != p_8.f0) >= l_2750)) , &g_2747))) < g_832.f1) > p_7.f2) & l_2752)))) && l_2743.f2), p_7.f1)) | l_2753) > 5UL), 0x4D86L));
                    l_2742.f2 &= (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((l_2468 = g_2758) == &p_5) , (p_7.f2 , (safe_mod_func_int16_t_s_s((-1L), (safe_rshift_func_int8_t_s_u((l_2750 ^= ((*g_873) ^= (safe_add_func_uint64_t_u_u((+(*l_2730)), ((*g_397) <= (l_2766[0] , p_8.f1)))))), 0)))))), 7UL)), p_9));
                    return p_8.f0;
                }
                if ((*g_1546))
                    break;
            }
            for (l_2742.f1 = 0; (l_2742.f1 <= 42); l_2742.f1++)
            { 
                int32_t *l_2769 = &l_1735;
                int32_t *l_2770[2][7][7] = {{{&g_384[2][2],&l_1738,&g_384[2][2],&l_2717[0][0],&l_1899,(void*)0,&l_1735},{&g_384[2][2],(void*)0,&l_1899,&g_384[1][4],&g_384[2][2],(void*)0,&l_1899},{&g_2351,(void*)0,&l_1947[5],&g_2351,&l_2717[0][0],&g_439.f0,&l_1735},{&l_1735,&g_384[1][4],&l_1738,&g_2351,(void*)0,(void*)0,&g_2351},{&l_1899,&l_1735,&l_1899,&g_384[1][4],(void*)0,(void*)0,&g_384[2][2]},{&l_1735,&g_61,&g_439.f0,&l_2717[0][0],(void*)0,&l_1899,&g_384[2][2]},{(void*)0,&l_1899,&l_1738,&l_1947[6],(void*)0,(void*)0,&l_1735}},{{&g_384[2][2],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1899},{(void*)0,(void*)0,&l_2717[0][0],(void*)0,&g_384[2][2],&g_61,&g_384[1][4]},{(void*)0,(void*)0,&l_2717[3][1],&l_1738,&l_2717[3][1],(void*)0,(void*)0},{&g_439.f0,(void*)0,&l_2666,&l_1899,&l_1738,&l_2700,(void*)0},{&l_1738,(void*)0,(void*)0,(void*)0,(void*)0,&l_2717[0][0],&g_384[1][4]},{&g_384[2][2],&l_1947[5],&l_2666,&g_384[1][4],&l_2717[0][0],&l_1899,&l_1738},{&l_1899,(void*)0,&l_2717[3][1],&l_2717[0][0],(void*)0,&l_2700,(void*)0}}};
                uint32_t l_2780 = 0xB12E92E1L;
                uint64_t l_2784[1][7][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_2784[i][j][k] = 0UL;
                    }
                }
                ++l_2780;
                l_2784[0][5][0]--;
                return p_9;
            }
            if ((*l_2730))
                break;
            (*l_2733) = ((((safe_add_func_int16_t_s_s(((&p_7 != ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((*g_722), ((*l_2801) = ((safe_sub_func_uint8_t_u_u(l_2777, (p_7.f1 ^ (*l_2730)))) > (((*l_2800) = (safe_rshift_func_int8_t_s_s((l_2799 == l_2799), 6))) <= 0x6B0949B5725E919BLL))))), (*l_2730))) , (void*)0)) , (-4L)), p_8.f1)) > 4UL) <= p_7.f2) && 0x0642170EL);
            l_2822 = (l_2194 = ((~(l_2803[0] , (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0L, 5)) | ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((*g_873), ((*l_2816) = 246UL))) | (safe_add_func_uint16_t_u_u((g_439 , ((l_2743 , p_8.f2) != (-5L))), p_8.f1))) || 0x11L), (*l_2730))), 0x28AEDC20L)) && l_2743.f2)), (*l_2733))), p_7.f0)))) , g_2819[0]));
        }
    }
    return p_8.f2;
}



static struct S0  func_12(struct S1  p_13, int32_t  p_14, int8_t  p_15)
{ 
    int16_t l_1518 = 0x9242L;
    int32_t *l_1519 = &g_439.f0;
    int32_t l_1527 = 1L;
    int32_t l_1528 = (-1L);
    int32_t l_1529[7];
    uint8_t l_1531[1][5][5] = {{{0xC4L,246UL,249UL,246UL,0xC4L},{255UL,0x51L,0UL,0x51L,255UL},{0xC4L,246UL,249UL,246UL,0xC4L},{255UL,0x51L,0UL,0x51L,255UL},{0xC4L,246UL,249UL,246UL,0xC4L}}};
    int64_t l_1538 = 0x9D62FDFE304E6B7BLL;
    uint8_t *l_1540 = &g_282[0][1][3];
    uint8_t **l_1539[2][1];
    uint16_t * const *l_1567[4][1][3] = {{{&g_360,&g_359,&g_359}},{{&g_360,&g_360,&g_359}},{{&g_359,&g_359,&g_359}},{{&g_359,&g_359,&g_359}}};
    int32_t *l_1596 = &g_652;
    struct S1 l_1601 = {160,0xEC9DL,-129};
    struct S0 l_1603 = {0x6CEEDD06L,3,65535UL,18446744073709551615UL};
    union U3 l_1608 = {18446744073709551615UL};
    const struct S0 *l_1630 = &g_1631;
    const struct S0 **l_1629[5] = {&l_1630,&l_1630,&l_1630,&l_1630,&l_1630};
    union U4 **l_1711 = (void*)0;
    union U4 **l_1712[2];
    int16_t *l_1715 = &l_1518;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1529[i] = 0x2BF5D830L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1539[i][j] = &l_1540;
    }
    for (i = 0; i < 2; i++)
        l_1712[i] = &g_438;
    if ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((g_11 <= (safe_rshift_func_uint16_t_u_u((((~(safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(g_57[4], (p_14 <= (safe_div_func_uint64_t_u_u(p_13.f2, ((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((l_1518 < (p_14 < p_13.f2)))) < 0x286AB0C7A51025EALL), 1)) , 0x90A050FCAC1CB086LL)))))), 4L)) >= 5UL) , (void*)0) != l_1519), p_13.f0))) | (*g_873)) ^ (*l_1519)), (*l_1519)))), 0UL)) , 0x98L), (*l_1519))), (**g_1028))))
    { 
        struct S2 **l_1522 = &g_236;
        int32_t *l_1523 = &g_439.f0;
        int32_t *l_1524 = &g_439.f0;
        int32_t *l_1525 = &g_42;
        int32_t *l_1526[3][4][1] = {{{&g_384[3][2]},{&g_42},{&g_384[3][2]},{&g_42}},{{&g_384[3][2]},{&g_42},{&g_384[3][2]},{&g_42}},{{&g_384[3][2]},{&g_42},{&g_384[3][2]},{&g_42}}};
        int16_t l_1530 = 0L;
        int i, j, k;
        (*l_1522) = ((safe_rshift_func_int16_t_s_u(p_13.f2, 12)) , &g_111);
        (*g_1376) = l_1519;
        l_1531[0][1][2]++;
        (*g_1376) = l_1526[2][0][0];
    }
    else
    { 
        int32_t * const l_1542 = &l_1529[5];
        const uint64_t *l_1552 = &g_1193;
        const uint64_t **l_1551 = &l_1552;
        uint32_t **l_1561 = &g_905;
        struct S2 l_1602 = {1};
        uint64_t l_1607[5][7][1] = {{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}};
        struct S0 l_1635 = {0x86E065CAL,26,8UL,0x3CF94A17L};
        int32_t l_1641 = 0xA7A16A08L;
        int16_t * const **l_1657 = (void*)0;
        int16_t * const ***l_1656 = &l_1657;
        int32_t l_1677 = 0xCFBEFFE2L;
        int32_t l_1678[3][2] = {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}};
        int64_t *l_1709 = (void*)0;
        int64_t *l_1710 = &l_1538;
        int i, j, k;
        if ((safe_div_func_uint8_t_u_u(p_13.f0, (safe_lshift_func_uint16_t_u_u(l_1538, 3)))))
        { 
            uint8_t ***l_1541 = &l_1539[1][0];
            int32_t **l_1543 = &g_130;
            struct S0 l_1548 = {3L,23,0x8521L,1UL};
            uint32_t **l_1562 = (void*)0;
            uint32_t ***l_1563 = &l_1562;
            int32_t l_1566[1];
            uint32_t l_1568 = 1UL;
            int32_t *l_1593[5] = {&g_61,&g_61,&g_61,&g_61,&g_61};
            int i;
            for (i = 0; i < 1; i++)
                l_1566[i] = 0x5959E7A5L;
            (*l_1541) = l_1539[1][0];
            (*l_1543) = l_1542;
            for (g_1030 = 0; (g_1030 < 44); g_1030 = safe_add_func_uint64_t_u_u(g_1030, 9))
            { 
                uint64_t **l_1549[7];
                struct S0 l_1555 = {0x352D50EDL,21,0xFFA6L,0UL};
                int i;
                for (i = 0; i < 7; i++)
                    l_1549[i] = &g_397;
                if ((p_15 , (g_1108 != g_1108)))
                { 
                    int32_t **l_1547 = &g_130;
                    (*l_1547) = g_1546;
                    return l_1548;
                }
                else
                { 
                    uint64_t ***l_1550 = &l_1549[4];
                    (*g_1546) &= (((((*l_1550) = l_1549[1]) != l_1551) || (*g_873)) && (safe_rshift_func_int8_t_s_s((*g_873), 0)));
                    return l_1555;
                }
            }
            (**g_1376) = (((((!(safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_15, (l_1561 == ((*l_1563) = l_1562)))), ((((safe_lshift_func_uint16_t_u_s((p_13.f1 = (g_635[1][5] = (l_1566[0] || ((void*)0 == l_1567[2][0][1])))), l_1568)) ^ (*l_1519)) & (-6L)) , (**l_1543))))) , (-1L)) , &l_1543) == &l_1543) ^ 0xFFA1B2FCL);
            p_13.f2 ^= ((*g_1546) = ((--g_282[3][1][1]) != (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_1519) = ((**l_1543) = ((((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((((**g_1028) = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(p_15, (safe_lshift_func_uint16_t_u_s(((-8L) | 4294967288UL), 7)))) > ((g_832.f3--) && ((((g_1231[0][0] > (p_15 , ((void*)0 == &g_257))) && (*g_1029)) || 0xA9L) >= (*l_1519)))), (*g_873))), (*l_1519)))) , p_15), p_14)) , g_631[1]), 1L)), (*g_873))), 0xF6C76881L)) >= g_112.f0) , 0x46L) , 0x3B15L))), 4)), g_57[4]))));
        }
        else
        { 
            uint64_t ***l_1604 = (void*)0;
            int8_t *l_1610 = &g_631[1];
            int32_t l_1620 = 0xEACDADD5L;
            int8_t l_1624 = 1L;
            const struct S0 *l_1628 = &l_1603;
            const struct S0 **l_1627 = &l_1628;
            int32_t l_1642 = 0xED5CA64FL;
            int32_t l_1643 = (-9L);
            uint16_t l_1644 = 0UL;
            int32_t l_1679 = 0xDB0E923DL;
            int32_t l_1681 = 0xB36F34A5L;
            int32_t l_1682 = (-2L);
            int32_t l_1683 = 0xE2D177F4L;
            int32_t l_1687[5] = {3L,3L,3L,3L,3L};
            int i;
            if (((l_1603 , l_1604) != (void*)0))
            { 
                const uint32_t l_1609 = 0xC6E8AC2FL;
                struct S0 l_1611 = {-10L,16,0UL,0x55D9B63EL};
                int32_t *l_1625 = &l_1529[1];
                struct S0 *l_1633[3][5][5] = {{{&l_1611,(void*)0,(void*)0,&l_1611,&l_1611},{(void*)0,&g_418,(void*)0,&g_418,(void*)0},{&l_1611,&l_1611,(void*)0,(void*)0,&l_1611},{(void*)0,&g_418,(void*)0,&g_418,(void*)0},{&l_1611,(void*)0,(void*)0,&l_1611,&l_1611}},{{(void*)0,&g_418,(void*)0,&g_418,(void*)0},{&l_1611,&l_1611,(void*)0,(void*)0,&l_1611},{(void*)0,&g_418,(void*)0,&g_418,(void*)0},{&l_1611,(void*)0,(void*)0,&l_1611,&l_1611},{(void*)0,&g_418,(void*)0,&g_418,(void*)0}},{{&l_1611,&l_1611,(void*)0,(void*)0,&l_1611},{(void*)0,&g_418,(void*)0,&g_418,(void*)0},{&l_1611,(void*)0,(void*)0,&l_1611,&l_1611},{(void*)0,&g_418,(void*)0,&g_418,(void*)0},{&l_1611,&l_1611,(void*)0,(void*)0,&l_1611}}};
                struct S0 **l_1632[4] = {&l_1633[1][4][2],&l_1633[1][4][2],&l_1633[1][4][2],&l_1633[1][4][2]};
                int32_t l_1636 = 5L;
                int32_t *l_1637 = &g_634;
                int32_t *l_1638 = &l_1527;
                int32_t *l_1639 = (void*)0;
                int32_t *l_1640[4][5][5] = {{{(void*)0,(void*)0,&g_634,&g_384[0][1],&g_384[2][2]},{&g_61,(void*)0,&l_1528,&g_384[0][1],&l_1528},{&g_634,&l_1527,&l_1528,&l_1527,&l_1527},{&g_61,(void*)0,&l_1528,&l_1529[5],&g_384[2][2]},{(void*)0,&l_1528,&l_1528,(void*)0,&l_1527}},{{&g_634,&l_1528,&g_634,&l_1527,&l_1528},{&g_384[3][4],(void*)0,&l_1527,(void*)0,&g_384[2][2]},{&g_384[3][4],&l_1527,&l_1528,&l_1529[5],(void*)0},{&g_634,(void*)0,&l_1527,&l_1527,(void*)0},{(void*)0,(void*)0,&g_634,&g_384[0][1],&g_384[2][2]}},{{&g_61,(void*)0,&l_1528,&g_384[0][1],&l_1528},{&g_634,&l_1527,&l_1528,&l_1527,&l_1527},{&g_61,(void*)0,&l_1528,&l_1529[5],&g_384[2][2]},{(void*)0,&l_1528,&l_1528,(void*)0,&l_1527},{&g_634,&l_1528,&g_634,&l_1527,&l_1528}},{{&g_384[3][4],(void*)0,&l_1527,(void*)0,&g_384[2][2]},{&g_384[3][4],&l_1527,&l_1528,&l_1529[5],(void*)0},{&g_634,(void*)0,&l_1527,&l_1527,(void*)0},{(void*)0,(void*)0,&g_634,&g_384[0][1],&g_384[2][2]},{&g_61,(void*)0,&l_1528,&g_384[0][1],&l_1528}}};
                int i, j, k;
                for (l_1601.f1 = 0; (l_1601.f1 <= 0); l_1601.f1 += 1)
                { 
                    int i;
                    l_1607[3][5][0] = ((*g_1546) = (safe_lshift_func_int8_t_s_u(g_380[(l_1601.f1 + 4)], 6)));
                    (*g_1546) |= ((l_1608 , (((g_380[(l_1601.f1 + 3)] > (((l_1609 , l_1610) == &p_15) & (l_1611 , (((p_15 & p_13.f1) | 0UL) != 9UL)))) < (**g_1028)) != (*l_1519))) , p_13.f0);
                }
                for (l_1603.f3 = 0; (l_1603.f3 <= 0); l_1603.f3 += 1)
                { 
                    int32_t l_1619 = 0x555F7F80L;
                    int32_t **l_1626 = &l_1519;
                    int32_t **l_1634 = &g_130;
                    int i;
                    (*g_1546) = (safe_div_func_uint32_t_u_u(0x1502036FL, (safe_lshift_func_uint8_t_u_s(g_631[(l_1603.f3 + 1)], (((((*l_1540) = 0xE1L) <= (+(safe_add_func_int64_t_s_s((65535UL | (l_1619 = (0x9C6592BFL || (**g_1028)))), g_631[(l_1603.f3 + 1)])))) != p_13.f0) || p_14)))));
                    if (l_1620)
                        continue;
                    (*g_1546) |= ((+(l_1624 > (((*l_1626) = l_1625) == (void*)0))) & (((*l_1542) = ((*g_397) ^= ((l_1629[2] = l_1627) != (l_1632[1] = l_1632[1])))) < 0xEA3AEBE98B9DD603LL));
                    (*l_1634) = l_1542;
                    return l_1635;
                }
                ++l_1644;
            }
            else
            { 
                int64_t l_1655 = 0x3DCDE8B6CABC543CLL;
                int32_t l_1674 = 0xBD53EACCL;
                int32_t l_1675 = (-1L);
                int32_t l_1680 = (-1L);
                int32_t l_1684 = (-1L);
                int32_t l_1685 = 0x6EA282A5L;
                int32_t l_1686 = 0L;
                if ((safe_lshift_func_uint16_t_u_s(((p_13.f2 , (((safe_mod_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(p_15, (safe_mod_func_uint8_t_u_u(l_1655, ((p_13.f0 != (l_1656 == (void*)0)) && (safe_sub_func_uint8_t_u_u((((p_13.f1 ^= 0x08CFL) | (*l_1542)) , p_13.f1), (-2L)))))))) < 4UL), l_1655)) & g_65) ^ l_1655)) || (*l_1519)), 13)))
                { 
                    uint64_t l_1661 = 0xA5D0B1F24271DD51LL;
                    int32_t *l_1668 = &l_1529[5];
                    int32_t *l_1669 = (void*)0;
                    int32_t *l_1670 = (void*)0;
                    int32_t *l_1671 = &l_1642;
                    int32_t *l_1672 = &l_1527;
                    int32_t *l_1673[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    uint64_t l_1688[7][5] = {{0xF91E5A60F6B716C0LL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL},{0x59DABDEEDE531184LL,0x59DABDEEDE531184LL,1UL,0xBD33C72D89C56F36LL,6UL},{18446744073709551615UL,0xF91E5A60F6B716C0LL,0xF91E5A60F6B716C0LL,18446744073709551615UL,18446744073709551615UL},{1UL,0xBD33C72D89C56F36LL,0xA7152B32BB7F2F6CLL,0xA7152B32BB7F2F6CLL,0xBD33C72D89C56F36LL},{18446744073709551615UL,0xF91E5A60F6B716C0LL,0x1B84439D1913201ELL,0xEB08CAA16ED19C21LL,0xEB08CAA16ED19C21LL},{0xCFB1A75EEE5A1424LL,0x59DABDEEDE531184LL,0xCFB1A75EEE5A1424LL,0xA7152B32BB7F2F6CLL,1UL},{18446744073709551609UL,18446744073709551615UL,0xEB08CAA16ED19C21LL,18446744073709551615UL,18446744073709551609UL}};
                    int i, j;
                    (*l_1542) = ((~0x323CL) & ((((((l_1661 & (&g_1027[2] != (void*)0)) && ((safe_rshift_func_uint16_t_u_s((p_15 == p_13.f1), (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_1655, l_1655)), l_1655)))) >= 4L)) == p_13.f0) > 0x0CL) ^ p_13.f2) <= p_13.f0));
                    --l_1688[6][0];
                    (*g_1546) &= (safe_unary_minus_func_uint64_t_u(((*g_397) = (*l_1542))));
                }
                else
                { 
                    uint8_t l_1692 = 0x0EL;
                    --l_1692;
                    return l_1635;
                }
                p_13 = p_13;
                (*g_1376) = &l_1529[5];
                l_1519 = &l_1677;
            }
            (*g_1376) = &l_1678[2][0];
        }
        (*l_1542) = (p_13.f2 = (((*l_1710) = ((safe_mul_func_uint16_t_u_u(((void*)0 != &g_904), (((-10L) ^ ((*g_722) &= (safe_mul_func_uint8_t_u_u(247UL, (g_859.f0 > ((safe_mod_func_uint64_t_u_u((((void*)0 == g_1707[1]) >= (*l_1542)), (*l_1542))) ^ (**g_1376))))))) || p_13.f0))) > 0x5664L)) & p_13.f0));
    }
    g_438 = (void*)0;
    (*g_1546) &= ((safe_mul_func_int16_t_s_s(p_13.f1, ((*l_1715) &= ((*g_722) = (*g_722))))) == (p_13.f2 , ((&g_1027[2] != (void*)0) >= ((**g_1028) &= (safe_mod_func_int16_t_s_s(0x2771L, p_15))))));
    return (*l_1630);
}



static int32_t  func_17(int8_t  p_18)
{ 
    uint64_t l_27 = 0x9403132D683A7EF2LL;
    uint32_t *l_30 = &g_31[0][0][2];
    struct S1 l_37 = {47,0x6B78L,-167};
    union U3 l_690 = {0x24574F0DL};
    l_37 = func_19(g_11, ((*l_30) = (safe_add_func_uint64_t_u_u((l_27 , (safe_lshift_func_uint16_t_u_s((7L >= g_11), 6))), p_18))), (func_32(l_37, func_38(l_37), g_323[2][2], g_111.f0) , p_18), l_690, l_690.f3);
    return p_18;
}



static struct S1  func_19(int32_t  p_20, const uint32_t  p_21, uint64_t  p_22, union U3  p_23, uint64_t  p_24)
{ 
    struct S2 l_701 = {4};
    int32_t l_709[1][5];
    int16_t ***l_723 = &g_721[4][1];
    uint32_t *l_726 = (void*)0;
    int16_t l_803 = (-2L);
    union U3 *l_830 = &g_112;
    struct S1 l_834[4][7] = {{{175,65535UL,-103},{175,65535UL,-103},{84,0x34A0L,-65},{88,65527UL,108},{125,0x3470L,-37},{112,1UL,80},{116,0x5166L,-180}},{{79,0x6E62L,126},{84,0x34A0L,-65},{82,0xAA48L,34},{72,0x64F4L,13},{72,0x64F4L,13},{82,0xAA48L,34},{84,0x34A0L,-65}},{{82,0xAA48L,34},{125,0x3470L,-37},{84,0x34A0L,-65},{112,1UL,80},{118,0x331EL,125},{132,0x66A9L,-177},{79,0x6E62L,126}},{{82,0xAA48L,34},{88,65527UL,108},{21,2UL,44},{84,0x34A0L,-65},{21,2UL,44},{88,65527UL,108},{82,0xAA48L,34}}};
    int8_t l_852 = 0x81L;
    uint16_t *l_868 = &g_380[2];
    uint64_t l_870 = 0xECE7664C543BB8EELL;
    const struct S0 l_923 = {0x3608FF54L,6,0xBB7CL,0xE482AED5L};
    int32_t l_988 = 0x33010C1DL;
    uint64_t **l_1022 = &g_393;
    uint64_t **l_1024 = &g_393;
    uint64_t ***l_1023 = &l_1024;
    uint32_t * const *l_1026 = (void*)0;
    uint32_t * const **l_1025 = &l_1026;
    struct S1 *l_1031 = &l_834[0][3];
    struct S1 *l_1032 = &g_859;
    int32_t **l_1033 = &g_130;
    int32_t *l_1035 = &g_439.f0;
    int32_t **l_1034 = &l_1035;
    int32_t *l_1036[3];
    int32_t l_1037 = (-2L);
    int32_t l_1039 = 0xDC7CF225L;
    int64_t l_1040 = (-4L);
    int8_t l_1041[2];
    int64_t l_1043 = (-1L);
    int32_t l_1044 = 0x8C09BB04L;
    uint32_t l_1045 = 0x1FB12B42L;
    struct S1 **l_1052[1];
    struct S1 *l_1053[3];
    const uint8_t *l_1061[4];
    union U4 *l_1062 = &g_439;
    uint64_t l_1063 = 1UL;
    uint16_t l_1087 = 0xB60DL;
    struct S2 * const *l_1146 = &g_236;
    struct S2 * const ** const l_1145 = &l_1146;
    int32_t l_1164 = 0x788BE193L;
    uint32_t **l_1166 = &l_726;
    int32_t l_1186 = 0xA359EB80L;
    uint16_t l_1190[7][6] = {{0xD2A8L,0x062FL,7UL,0x1FEBL,7UL,0x062FL},{7UL,0xD2A8L,6UL,0xF77BL,0xF77BL,6UL},{7UL,7UL,0xF77BL,0x1FEBL,0xD157L,0x1FEBL},{0xD2A8L,7UL,0xD2A8L,6UL,0xF77BL,0xF77BL},{0x062FL,0xD2A8L,0xD2A8L,0x062FL,7UL,0x1FEBL},{0x1FEBL,0x062FL,0xF77BL,0x062FL,0x1FEBL,6UL},{0x062FL,0x1FEBL,6UL,6UL,0x1FEBL,0x062FL}};
    uint32_t ***l_1208[7][1][1] = {{{&g_904}},{{(void*)0}},{{(void*)0}},{{&g_904}},{{(void*)0}},{{(void*)0}},{{&g_904}}};
    uint32_t ****l_1207 = &l_1208[5][0][0];
    uint32_t **l_1274 = &g_905;
    struct S0 *l_1276 = &g_418;
    int16_t l_1311 = 0x9A1CL;
    int64_t l_1327 = 0x28540048EAE6207DLL;
    int32_t l_1406[3];
    int32_t l_1415 = 1L;
    int32_t l_1493 = 0xCBDB4B58L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_709[i][j] = 0xBEEF8929L;
    }
    for (i = 0; i < 3; i++)
        l_1036[i] = &g_864;
    for (i = 0; i < 2; i++)
        l_1041[i] = 0L;
    for (i = 0; i < 1; i++)
        l_1052[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1053[i] = &g_58[1];
    for (i = 0; i < 4; i++)
        l_1061[i] = &g_805[1];
    for (i = 0; i < 3; i++)
        l_1406[i] = 0L;
    for (g_112.f0 = 1; (g_112.f0 <= 6); g_112.f0 += 1)
    { 
        struct S2 *l_695 = &g_111;
        int32_t l_708 = 0x4CFBD25EL;
        int32_t l_710[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        union U4 *l_731 = &g_439;
        int16_t ***l_741 = &g_721[5][3];
        struct S1 l_786 = {20,0x8C6DL,-68};
        int32_t l_792 = 1L;
        int32_t l_828 = 0x0C737351L;
        uint16_t **l_869 = &l_868;
        int32_t *l_871 = &g_652;
        int8_t *l_872 = &g_478[2];
        uint16_t **l_908 = &g_360;
        uint32_t **l_909[4] = {&g_323[2][2],&g_323[2][2],&g_323[2][2],&g_323[2][2]};
        int i;
    }
    (*l_1034) = ((*l_1033) = (((*l_1032) = ((*l_1031) = ((safe_lshift_func_int8_t_s_u(((*g_873) = ((safe_mod_func_int64_t_s_s(p_23.f2, (((((g_1027[0] = ((l_923.f2 | ((l_709[0][2] = 8UL) <= ((l_1022 = l_1022) != ((*l_1023) = &g_397)))) , l_1025)) != &g_322) , (*g_722)) <= l_923.f3) ^ 0L))) == l_834[0][3].f0)), 7)) , l_834[0][3]))) , &l_709[0][1]));
    ++l_1045;
    if (((((++(*g_1029)) || ((safe_lshift_func_int8_t_s_s(p_24, (((l_1053[2] = &l_834[1][5]) != (g_144 , (void*)0)) | (safe_mul_func_uint8_t_u_u((+(((*l_868) = (((**l_1034) = p_23.f3) , (safe_mul_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s((l_1061[2] == (void*)0), 7)) == (**l_1034)) , l_1062) != l_1062), (*l_1035))))) > l_1063)), g_859.f1))))) , 0UL)) == p_23.f3) < p_23.f1))
    { 
        int32_t l_1066 = (-5L);
        int32_t l_1123 = 0xB14C0120L;
        uint32_t *l_1148 = &l_1045;
        int32_t l_1179 = 4L;
        int32_t l_1182[1];
        int16_t l_1183 = 0L;
        uint16_t l_1187 = 65535UL;
        struct S2 l_1201 = {2};
        int32_t ***l_1205 = &l_1034;
        int16_t ***l_1210 = (void*)0;
        struct S0 l_1250 = {0L,6,0x1CC7L,0UL};
        struct S1 *l_1255 = &l_834[0][3];
        union U3 *l_1267 = &g_832;
        int64_t l_1310 = 0L;
        uint32_t l_1312 = 18446744073709551615UL;
        struct S2 l_1338[7] = {{1},{1},{1},{1},{1},{1},{1}};
        struct S1 l_1427[4] = {{13,0x98F1L,67},{13,0x98F1L,67},{13,0x98F1L,67},{13,0x98F1L,67}};
        int i;
        for (i = 0; i < 1; i++)
            l_1182[i] = 0x16ABCBF9L;
        if ((((safe_mod_func_int32_t_s_s(l_1066, ((g_442.f2 ^ (((safe_div_func_int64_t_s_s(0x2C7D3228ED2B9C25LL, (safe_div_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((g_1042 |= (((**l_1034) , (void*)0) != l_1061[1])), (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_1066, l_1066)), l_1066)))) & (*g_130)), 0x969DC499346FE7CBLL)))) && l_1066) ^ g_442.f3)) , l_1066))) && 247UL) >= 0x3EL))
        { 
            uint32_t l_1096[6][1][2] = {{{0x1A2EB975L,0x1A2EB975L}},{{0x1A2EB975L,0x58DC828CL}},{{0x6181F948L,0xBB1046BEL}},{{0x58DC828CL,0xBB1046BEL}},{{0x6181F948L,0x58DC828CL}},{{0x1A2EB975L,0x1A2EB975L}}};
            struct S1 l_1105 = {77,0xEDC1L,171};
            struct S2 **l_1107 = &g_236;
            struct S2 ***l_1106 = &l_1107;
            uint32_t *l_1150 = &g_57[3];
            uint32_t **l_1149 = &l_1150;
            int16_t l_1176 = 0x7821L;
            int32_t l_1178 = 0x0C3BC2DAL;
            int32_t l_1180 = 0x6104F523L;
            int32_t l_1181 = 0x9CBD2774L;
            int32_t l_1184 = 0x610DCB45L;
            int32_t l_1185[5][2] = {{0x88659DA0L,0x88659DA0L},{0x88659DA0L,0x88659DA0L},{0x88659DA0L,0x88659DA0L},{0x88659DA0L,0x88659DA0L},{0x88659DA0L,0x88659DA0L}};
            uint32_t *****l_1209 = &l_1207;
            int i, j, k;
            for (p_23.f3 = (-8); (p_23.f3 >= 43); p_23.f3 = safe_add_func_int8_t_s_s(p_23.f3, 3))
            { 
                uint32_t l_1079 = 4294967291UL;
                ++l_1079;
            }
            (**l_1034) &= (safe_rshift_func_uint16_t_u_u((((l_1066 || (+(safe_div_func_uint64_t_u_u(l_1066, p_22)))) ^ l_1087) > (~g_478[1])), ((((!(safe_sub_func_uint64_t_u_u((p_24 = (safe_rshift_func_uint8_t_u_u(0xA2L, 3))), (safe_sub_func_int16_t_s_s(l_1066, p_22))))) == l_1096[2][0][0]) , p_24) && 0x18L)));
            for (l_1039 = 0; (l_1039 == 28); l_1039++)
            { 
                uint32_t *l_1101 = (void*)0;
                uint32_t *l_1102[3];
                const uint16_t **l_1115 = &g_363[0][1];
                const uint32_t *l_1142 = &g_1143;
                int i;
                for (i = 0; i < 3; i++)
                    l_1102[i] = (void*)0;
                if (((*g_130) = ((p_23.f2 = (++(**g_1028))) | (safe_sub_func_int32_t_s_s(l_1066, ((l_1105 , l_1106) != g_1108))))))
                { 
                    uint16_t l_1122 = 0xB5EEL;
                    const uint32_t *l_1137[1];
                    const uint32_t **l_1136 = &l_1137[0];
                    const uint32_t *l_1141 = &g_442.f0;
                    const uint32_t **l_1140[4];
                    uint8_t *l_1144[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_1147 = 8L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1137[i] = &l_923.f3;
                    for (i = 0; i < 4; i++)
                        l_1140[i] = &l_1141;
                    p_20 ^= ((l_1123 &= ((*l_868) = (((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(p_23.f3, (safe_mod_func_int64_t_s_s((l_1115 != &l_868), (safe_mul_func_uint8_t_u_u((g_805[1] = ((safe_mul_func_int16_t_s_s((l_1066 ^ (safe_lshift_func_uint8_t_u_s((**l_1033), 3))), 0xA6F9L)) , (l_1122 != p_23.f0))), 0x84L)))))), p_23.f0)) , 0L) >= 0xF92E8152L))) | p_24);
                    l_1147 = (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_701 , (l_1105.f2 = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(1UL, p_23.f3)), ((l_1142 = (g_1138 = ((*l_1136) = (*g_904)))) == (*g_904)))))) ^ ((0xC24BC1225797E0D9LL >= (((l_1145 != g_1108) != 0xD6L) || 1L)) > p_23.f1)), p_23.f3)), l_1105.f1)) && 18446744073709551606UL), p_20)), g_380[0]));
                }
                else
                { 
                    (*l_1032) = l_1105;
                }
            }
            if ((((*g_322) = l_1148) == ((*l_1149) = &g_57[4])))
            { 
                int8_t l_1161[3][2];
                int64_t l_1165 = 0xEB2B96A021BB3D6CLL;
                int32_t l_1177[5][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                struct S1 l_1196 = {98,0xD18EL,74};
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1161[i][j] = 0L;
                }
                for (l_1045 = 0; (l_1045 <= 0); l_1045 += 1)
                { 
                    uint16_t l_1158[4][5] = {{0xF8CCL,65535UL,0xF8CCL,65535UL,0xF8CCL},{0xAE48L,0xAE48L,1UL,1UL,0xAE48L},{0x568EL,65535UL,0x568EL,65535UL,0x568EL},{0xAE48L,1UL,1UL,0xAE48L,0xAE48L}};
                    uint32_t ***l_1167 = &g_904;
                    int i, j;
                    (*l_1035) = ((safe_lshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(((((*g_130) == (++(**l_1149))) < (p_23.f1 , (g_1157 = 0xD7C4L))) == ((l_1158[3][4] & (safe_add_func_uint64_t_u_u((p_24 = ((((l_1161[2][0] || ((*g_397) ^= (l_1096[2][0][0] > (safe_rshift_func_uint16_t_u_s(l_1164, 11))))) || p_23.f1) , (*g_1029)) != l_1161[2][0])), 7UL))) > l_1165)), l_1161[2][0])), 4)) >= p_23.f3);
                    (*l_1034) = &g_384[1][2];
                    if (l_1123)
                        break;
                    (**l_1033) ^= (((((*l_1167) = l_1166) != &g_905) <= l_1105.f0) ^ (safe_div_func_int32_t_s_s(((*l_1035) = (safe_mul_func_uint8_t_u_u((((*l_1166) = (void*)0) == (void*)0), ((((safe_lshift_func_int8_t_s_s((((*g_722) = (**l_1034)) != ((safe_div_func_int64_t_s_s(((((*g_873) = p_23.f1) | p_23.f1) & p_23.f3), 0x2C9E59E3679A1B92LL)) < 8UL)), p_23.f1)) & l_1176) != g_859.f1) | g_859.f2)))), l_1066)));
                }
                --l_1187;
                ++l_1190[2][5];
                --g_1193;
                (*l_1031) = l_1196;
            }
            else
            { 
                int8_t *l_1206 = &g_478[3];
                (**l_1034) = (safe_rshift_func_int8_t_s_s((**l_1033), ((*g_873) = ((*l_1206) &= (safe_add_func_int8_t_s_s((*l_1035), (p_21 < (l_1201 , (safe_lshift_func_uint8_t_u_s(((((((((18446744073709551615UL & (!((*g_722) & ((l_1205 == (void*)0) | (-1L))))) != (*g_873)) ^ (*g_873)) == 0xBD06L) <= 0x9663L) <= (**g_1028)) & p_23.f1) <= 0xCA3DL), (*g_873)))))))))));
            }
            (*l_1209) = l_1207;
        }
        else
        { 
            const int16_t ****l_1213 = &g_1211;
            const int16_t ***l_1214[2][2];
            uint32_t *l_1215[5][7];
            struct S1 l_1220[5][5][7] = {{{{171,1UL,-137},{16,65532UL,-172},{59,65533UL,-47},{171,1UL,-137},{164,0xAFEAL,2},{128,0UL,-150},{69,0UL,107}},{{156,0x1427L,170},{16,65532UL,-172},{60,65534UL,159},{90,0xEC3BL,98},{133,4UL,126},{59,0xA4BBL,173},{59,0xA4BBL,173}},{{16,65532UL,-172},{69,0UL,107},{91,0UL,-148},{69,0UL,107},{16,65532UL,-172},{134,0xB33EL,-162},{140,0x2E1AL,-75}},{{73,1UL,-78},{132,1UL,-127},{128,0UL,-150},{140,0x2E1AL,-75},{100,0xE045L,127},{148,0xE2CBL,80},{18,65535UL,1}},{{60,65534UL,159},{18,65535UL,1},{67,0x64C8L,167},{90,0xEC3BL,98},{18,65535UL,1},{100,0xE045L,127},{132,1UL,-127}}},{{{73,1UL,-78},{140,0x2E1AL,-75},{55,0x7685L,-64},{109,0UL,-26},{142,0x5349L,-132},{57,0xC162L,-156},{69,0UL,107}},{{16,65532UL,-172},{59,0xA4BBL,173},{164,0x4A44L,169},{175,0UL,134},{100,0xE045L,127},{156,0x1427L,170},{16,65532UL,-172}},{{156,0x1427L,170},{69,0UL,107},{90,0xEC3BL,98},{100,0xE045L,127},{52,9UL,-36},{156,0x1427L,170},{164,0x4A44L,169}},{{0,0xD87BL,173},{94,0x8620L,133},{57,0xC162L,-156},{140,0x2E1AL,-75},{140,0x2E1AL,-75},{57,0xC162L,-156},{94,0x8620L,133}},{{69,0UL,107},{132,1UL,-127},{156,1UL,-176},{164,0xAFEAL,2},{159,65535UL,-146},{100,0xE045L,127},{142,0x5349L,-132}}},{{{57,0x5203L,-110},{133,4UL,126},{60,65534UL,159},{128,0UL,-150},{94,0x8620L,133},{148,0xE2CBL,80},{164,0x4A44L,169}},{{16,65532UL,-172},{52,9UL,-36},{55,0x7685L,-64},{164,0xAFEAL,2},{133,4UL,126},{134,0xB33EL,-162},{59,65533UL,-47}},{{59,65533UL,-47},{164,0x4A44L,169},{90,0xEC3BL,98},{140,0x2E1AL,-75},{141,0UL,138},{59,0xA4BBL,173},{140,0x2E1AL,-75}},{{57,0x5203L,-110},{18,65535UL,1},{148,0xE2CBL,80},{100,0xE045L,127},{140,0x2E1AL,-75},{128,0UL,-150},{132,1UL,-127}},{{140,0x2E1AL,-75},{18,65535UL,1},{91,0UL,-148},{175,0UL,134},{142,0x5349L,-132},{55,0x7685L,-64},{142,0x5349L,-132}}},{{{109,0UL,-26},{164,0x4A44L,169},{164,0x4A44L,169},{109,0UL,-26},{159,65535UL,-146},{57,0x5203L,-110},{133,4UL,126}},{{156,0x1427L,170},{52,9UL,-36},{100,0xE045L,127},{90,0xEC3BL,98},{69,0UL,107},{156,0x1427L,170},{59,0xA4BBL,173}},{{52,9UL,-36},{133,4UL,126},{91,0UL,-148},{140,0x2E1AL,-75},{59,65533UL,-47},{134,0xB33EL,-162},{133,4UL,126}},{{0,0xD87BL,173},{132,1UL,-127},{57,0x5203L,-110},{69,0UL,107},{100,0xE045L,127},{128,0UL,-150},{142,0x5349L,-132}},{{60,65534UL,159},{94,0x8620L,133},{156,1UL,-176},{90,0xEC3BL,98},{94,0x8620L,133},{164,0x4A44L,169},{132,1UL,-127}}},{{{109,0UL,-26},{69,0UL,107},{55,0x7685L,-64},{0,0xD87BL,173},{94,0x8620L,133},{57,0xC162L,-156},{140,0x2E1AL,-75}},{{59,65533UL,-47},{59,0xA4BBL,173},{100,0xE045L,127},{67,1UL,71},{100,0xE045L,127},{59,0xA4BBL,173},{59,65533UL,-47}},{{156,0x1427L,170},{140,0x2E1AL,-75},{67,0x64C8L,167},{100,0xE045L,127},{59,65533UL,-47},{141,0UL,138},{164,0x4A44L,169}},{{73,1UL,-78},{18,65535UL,1},{57,0xC162L,-156},{133,4UL,126},{69,0UL,107},{57,0xC162L,-156},{142,0x5349L,-132}},{{133,4UL,126},{132,1UL,-127},{67,0x64C8L,167},{175,0UL,134},{159,65535UL,-146},{60,65534UL,159},{94,0x8620L,133}}}};
            struct S2 * const **l_1223[6] = {&l_1146,&l_1146,&l_1146,&l_1146,&l_1146,&l_1146};
            uint32_t * const l_1230 = &g_1231[0][0];
            uint32_t * const *l_1229 = &l_1230;
            uint32_t * const **l_1228 = &l_1229;
            union U4 l_1232 = {0xC5EA0AB5L};
            int16_t *l_1246 = &l_1183;
            const int32_t *l_1251 = &g_145;
            int32_t l_1286 = (-5L);
            int16_t l_1308 = 0L;
            int32_t l_1309[6] = {0xF3A5E825L,(-5L),0xF3A5E825L,0xF3A5E825L,(-5L),0xF3A5E825L};
            union U4 *l_1330 = &l_1232;
            struct S0 l_1359 = {0x82B40C40L,18,5UL,0xC1EAD591L};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1214[i][j] = &g_1212;
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1215[i][j] = &g_112.f0;
            }
            (***l_1205) &= (-5L);
            p_20 |= ((l_1210 == (l_1214[1][0] = ((*l_1213) = g_1211))) || (((void*)0 == l_1215[4][3]) , (((safe_add_func_int64_t_s_s((safe_div_func_uint8_t_u_u((((((l_1220[3][4][4] , ((((void*)0 != l_1148) < p_23.f3) ^ 0xDD71L)) == (***l_1205)) & 0x4B2F91E10D895D33LL) < (*g_397)) & 0xE65BL), 0x08L)), (*g_397))) < l_1220[3][4][4].f1) >= (-9L))));
        }
        (*g_1376) = (**l_1205);
        return l_1427[0];
    }
    else
    { 
        int32_t *l_1428 = &l_709[0][0];
        int32_t l_1431 = 0x3DB2A778L;
        int32_t l_1432 = 0x0BAD71D9L;
        uint16_t **l_1443 = &g_360;
        int16_t *l_1453 = (void*)0;
        uint32_t l_1476[7] = {18446744073709551615UL,0x5EE732C5L,18446744073709551615UL,18446744073709551615UL,0x5EE732C5L,18446744073709551615UL,18446744073709551615UL};
        uint32_t l_1480 = 1UL;
        int32_t l_1488 = 0xAFE4A41FL;
        int32_t l_1489 = 1L;
        int32_t l_1490 = 0L;
        int32_t l_1491 = 0x8E668259L;
        int32_t l_1492 = 7L;
        struct S1 l_1497[2][3][6] = {{{{9,0x3020L,118},{144,0x78C4L,-167},{144,0x78C4L,-167},{144,0x78C4L,-167},{135,65535UL,118},{99,0x7079L,127}},{{11,65535UL,-109},{131,4UL,-144},{27,0x13FEL,70},{158,1UL,-72},{99,0x7079L,127},{104,0UL,-39}},{{135,65535UL,118},{15,0xF4DAL,-30},{69,65535UL,117},{99,0x7079L,127},{69,65535UL,117},{15,0xF4DAL,-30}}},{{{135,65535UL,118},{104,0UL,-39},{99,0x7079L,127},{158,1UL,-72},{27,0x13FEL,70},{131,4UL,-144}},{{11,65535UL,-109},{99,0x7079L,127},{135,65535UL,118},{144,0x78C4L,-167},{144,0x78C4L,-167},{135,65535UL,118}},{{99,0x7079L,127},{99,0x7079L,127},{13,0x8360L,15},{11,65535UL,-109},{27,0x13FEL,70},{144,0x78C4L,-167}}}};
        int i, j, k;
        l_1428 = ((*g_1376) = (void*)0);
        if (((*l_1035) |= 0x4EA06463L))
        { 
            int64_t l_1436 = 0L;
            int32_t l_1437[5] = {0x225C6801L,0x225C6801L,0x225C6801L,0x225C6801L,0x225C6801L};
            struct S1 l_1447 = {102,65534UL,48};
            int i;
            (*l_1035) ^= p_22;
            for (p_22 = 0; (p_22 > 57); p_22++)
            { 
                uint8_t l_1433 = 0x61L;
                int32_t l_1438 = 6L;
                int32_t l_1439 = 0x817E88EFL;
                uint64_t l_1440[4];
                uint16_t ***l_1444 = &l_1443;
                uint16_t **l_1446 = (void*)0;
                uint16_t ***l_1445 = &l_1446;
                uint32_t *l_1452 = &l_1045;
                int i;
                for (i = 0; i < 4; i++)
                    l_1440[i] = 18446744073709551615UL;
                l_1433--;
                --l_1440[3];
                l_1437[1] &= (&g_360 == ((*l_1445) = ((*l_1444) = l_1443)));
                p_20 = (((((*g_873) = ((l_1447 , ((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(0x8933L, ((((((*l_1452) ^= (**g_1028)) != (((void*)0 == l_1453) >= l_1440[3])) , (((p_24 = (safe_rshift_func_int16_t_s_u(((((safe_add_func_uint64_t_u_u(l_1433, 18446744073709551607UL)) || (**g_1028)) == (*g_873)) && l_1447.f1), 15))) <= g_839[0]) , p_23.f2)) & g_442.f3) != 0x58F59088804854EELL))) > p_21), 0x9AL)) > p_23.f0)) || g_1458)) , (-10L)) && l_1447.f2) == l_1431);
                (*l_1031) = l_1447;
            }
            for (g_864 = (-23); (g_864 <= 6); ++g_864)
            { 
                const uint32_t l_1465 = 18446744073709551606UL;
                for (g_61 = 27; (g_61 <= (-14)); g_61--)
                { 
                    (**l_1034) &= (safe_mod_func_int16_t_s_s(l_1465, 8UL));
                }
                p_20 |= (-5L);
                if (p_21)
                    continue;
            }
            for (g_634 = 0; (g_634 >= 23); g_634 = safe_add_func_uint8_t_u_u(g_634, 1))
            { 
                union U4 l_1474 = {0xCB658B9AL};
                int32_t l_1475 = 1L;
                int32_t l_1484 = 0L;
                int32_t l_1487[2];
                uint16_t l_1494[5][1][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1487[i] = 1L;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1494[i][j][k] = 0x9B93L;
                    }
                }
                for (p_23.f2 = 0; (p_23.f2 != 21); ++p_23.f2)
                { 
                    int8_t *l_1473[3][6] = {{&g_478[0],&g_478[1],&g_631[2],&g_149[0][3],&g_478[1],&g_149[0][3]},{&g_478[0],&g_478[0],&g_478[0],&g_149[0][3],&g_478[0],&g_631[2]},{&g_478[0],(void*)0,&g_149[0][3],&g_149[0][3],(void*)0,&g_478[0]}};
                    int i, j;
                    l_1475 |= (safe_mod_func_uint64_t_u_u(((*g_873) ^ p_23.f2), (g_832 , (+(((*l_868) = (((l_1437[1] = 0x48L) <= (((l_1474 , 0xF7L) & p_22) ^ (**l_1034))) , p_20)) && p_23.f2)))));
                }
                if (l_1476[2])
                    continue;
                for (p_24 = 12; (p_24 >= 34); p_24++)
                { 
                    int32_t l_1479 = 0L;
                    int8_t l_1483 = 0xC9L;
                    int32_t l_1485 = (-5L);
                    int32_t l_1486[6][2][4] = {{{0xE2ADBD25L,0xEA372A56L,0xE0413379L,0xE0413379L},{0x8C65785CL,0x8C65785CL,0xE2ADBD25L,0xE0413379L}},{{1L,0xEA372A56L,1L,0xE2ADBD25L},{1L,0xE2ADBD25L,0xE2ADBD25L,1L}},{{0x8C65785CL,0xE2ADBD25L,0xE0413379L,0xE2ADBD25L},{0xE2ADBD25L,0xEA372A56L,0xE0413379L,0xE0413379L}},{{0x8C65785CL,0x8C65785CL,0xE2ADBD25L,0xE0413379L},{1L,0xEA372A56L,1L,0xE2ADBD25L}},{{1L,0xE2ADBD25L,0xE2ADBD25L,1L},{0x8C65785CL,0xE2ADBD25L,0xE0413379L,0xE2ADBD25L}},{{0xE2ADBD25L,0xEA372A56L,0xE0413379L,0xE0413379L},{0x8C65785CL,0x8C65785CL,0xE2ADBD25L,0xE0413379L}}};
                    int i, j, k;
                    ++l_1480;
                    if (g_1279.f3)
                        continue;
                    l_1494[1][0][0]++;
                }
                if (l_1494[3][0][0])
                    continue;
                (*l_1031) = l_1447;
            }
            (*g_1376) = &p_20;
        }
        else
        { 
            (*l_1035) = p_23.f0;
        }
        return l_1497[0][2][0];
    }
}



static struct S0  func_32(struct S1  p_33, struct S2  p_34, uint32_t * p_35, int8_t  p_36)
{ 
    const uint16_t *l_361 = (void*)0;
    int32_t l_382 = 0x6CB509AEL;
    int32_t l_414 = 1L;
    int32_t l_424 = 0x3E14CC09L;
    int32_t l_425 = 0x053FC814L;
    int32_t l_431 = 1L;
    uint32_t l_433 = 3UL;
    uint8_t *l_466 = &g_282[6][1][3];
    int32_t l_474 = 0xCC1A26BEL;
    int32_t l_475[4];
    struct S1 l_503 = {140,0x878CL,-112};
    const struct S2 *l_505 = &g_111;
    const struct S2 **l_504 = &l_505;
    struct S2 **l_510 = &g_236;
    int16_t l_514 = (-4L);
    int32_t l_526 = 0x2DC191B4L;
    int64_t l_537 = 0xB52D4AADB915AE76LL;
    int16_t l_587 = 0x48A8L;
    int16_t **l_596 = (void*)0;
    int64_t l_632 = 0x9BEA9A7D0E20EC76LL;
    struct S0 l_657 = {0x00A021B4L,27,1UL,2UL};
    uint8_t l_684 = 0xC9L;
    int i;
    for (i = 0; i < 4; i++)
        l_475[i] = (-1L);
    for (g_61 = 0; (g_61 > 13); g_61 = safe_add_func_uint16_t_u_u(g_61, 4))
    { 
        uint16_t *l_357[5][2][5] = {{{&g_95,&g_95,&g_95,&g_95,&g_58[1].f1},{&g_95,&g_58[1].f1,&g_112.f3,&g_112.f3,&g_58[1].f1}},{{&g_58[1].f1,&g_95,(void*)0,&g_58[1].f1,&g_58[1].f1},{&g_58[1].f1,&g_112.f1,&g_58[1].f1,&g_112.f3,&g_58[1].f1}},{{&g_95,&g_95,&g_58[1].f1,&g_95,&g_95},{&g_58[1].f1,&g_95,&g_112.f1,&g_58[1].f1,&g_112.f1}},{{&g_58[1].f1,&g_58[1].f1,&g_58[1].f1,&g_95,&g_112.f3},{&g_95,&g_58[1].f1,&g_58[1].f1,&g_95,&g_112.f1}},{{&g_95,&g_95,(void*)0,(void*)0,&g_95},{&g_112.f1,&g_58[1].f1,&g_112.f3,&g_58[1].f1,&g_58[1].f1}}};
        uint16_t **l_358[6];
        const uint16_t **l_362[1][3];
        int32_t l_376[2][4] = {{0x315378EAL,0x315378EAL,0x315378EAL,0x315378EAL},{0x315378EAL,0x315378EAL,0x315378EAL,0x315378EAL}};
        uint32_t l_443 = 0UL;
        struct S1 l_444 = {115,0x2545L,147};
        struct S1 *l_490[6][7] = {{&l_444,&g_58[1],&l_444,&g_58[5],&l_444,&l_444,&g_58[5]},{&g_58[0],&g_58[5],&g_58[0],&g_58[1],&g_58[0],&g_58[1],&l_444},{&g_58[5],&g_58[2],&g_58[0],&l_444,&l_444,&l_444,&g_58[0]},{&g_58[0],&g_58[0],&l_444,&g_58[1],&g_58[1],&g_58[1],&g_58[5]},{&g_58[1],&l_444,&g_58[5],&l_444,&l_444,&g_58[5],&l_444},{&g_58[5],&g_58[1],&l_444,&g_58[1],&l_444,&g_58[2],&g_58[1]}};
        struct S2 **l_506 = &g_236;
        struct S2 ***l_507 = &l_506;
        struct S2 **l_509[4][1] = {{&g_236},{(void*)0},{&g_236},{(void*)0}};
        struct S2 ***l_508[7];
        int8_t *l_511 = (void*)0;
        int8_t *l_512[6] = {&g_478[0],&g_478[0],&g_478[0],&g_478[0],&g_478[0],&g_478[0]};
        int32_t *l_513[7] = {&g_439.f0,&g_42,&g_42,&g_439.f0,&g_42,&g_42,&g_439.f0};
        uint16_t l_531[5][3] = {{0x1E2DL,0xD4F6L,0x1E2DL},{65531UL,65531UL,65531UL},{0x1E2DL,0xD4F6L,0x1E2DL},{65531UL,65531UL,65531UL},{0x1E2DL,0xD4F6L,0x1E2DL}};
        uint16_t *l_598[4][6] = {{&l_531[1][2],&g_112.f1,&l_531[1][2],&l_531[1][2],&g_112.f1,&l_531[1][2]},{&l_531[1][2],&g_112.f1,&l_531[1][2],&l_531[1][2],&g_112.f1,&l_531[1][2]},{&l_531[1][2],&g_112.f1,&l_531[1][2],&l_531[1][2],&g_112.f1,&l_531[1][2]},{&l_531[1][2],&g_112.f1,&l_531[1][2],&l_531[1][2],&g_112.f1,&l_531[1][2]}};
        uint32_t l_683[6][1] = {{0UL},{0x1CAF02F2L},{0x1CAF02F2L},{0UL},{0x1CAF02F2L},{0x1CAF02F2L}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_358[i] = &l_357[2][1][2];
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_362[i][j] = &l_361;
        }
        for (i = 0; i < 7; i++)
            l_508[i] = &l_509[0][0];
        if (((g_360 = (g_359 = (g_65 , l_357[2][1][2]))) == (g_363[3][0] = l_361)))
        { 
            int64_t l_373 = 0xBD7A3C5580B1920ELL;
            int32_t l_390 = (-7L);
            int32_t l_428 = 5L;
            int32_t l_429[3];
            uint32_t l_441[4][3];
            uint8_t *l_467[2];
            int8_t l_486 = 0x49L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_429[i] = 0x5A3C4628L;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                    l_441[i][j] = 0xB2D8139EL;
            }
            for (i = 0; i < 2; i++)
                l_467[i] = &g_282[5][0][5];
            g_130 = p_35;
            for (p_33.f1 = 4; (p_33.f1 == 14); p_33.f1 = safe_add_func_uint16_t_u_u(p_33.f1, 9))
            { 
                int16_t l_379 = 0x6950L;
                int16_t *l_381[6];
                int32_t *l_383 = &g_384[2][2];
                int8_t *l_388 = &g_149[0][3];
                int32_t l_426 = 0x2C3D760EL;
                int32_t l_427 = 0x4CDF6CA3L;
                int32_t l_430 = (-1L);
                int32_t l_432 = 1L;
                int32_t l_476 = 0x51D29280L;
                int32_t l_477 = (-9L);
                int32_t l_479 = 0xBB1E18A1L;
                int32_t l_480 = 0L;
                int32_t l_481 = 1L;
                int32_t l_482 = (-1L);
                int32_t l_483[5][3] = {{(-5L),(-1L),(-5L)},{(-1L),0xED6A1995L,(-1L)},{(-5L),(-1L),(-5L)},{(-1L),0xED6A1995L,(-1L)},{(-5L),(-1L),(-5L)}};
                int16_t l_485 = 0xF707L;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_381[i] = &g_144;
                (*l_383) ^= ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_u(p_36, (l_373 = 0x2302L))) , ((l_382 = (g_144 = ((((0xE03AB2666C24BEB8LL & g_42) < ((safe_mul_func_uint16_t_u_u((l_376[0][1] = 0xBFA7L), (l_379 = (g_111 , ((safe_rshift_func_uint16_t_u_s((p_34 , 65535UL), 11)) == p_33.f2))))) > g_380[0])) <= g_11) , 0x0179L))) > 0x4B71L)) >= 0xDE8DL) | 0xBDD903581B5EB772LL) ^ 1L), 0x99014910L)), 2)) <= p_33.f0);
                if ((safe_div_func_int64_t_s_s((g_112 , p_33.f2), (~(0xB7F010E2L != (0x47L <= ((*l_388) = p_34.f0)))))))
                { 
                    int32_t *l_389[1];
                    uint64_t **l_394 = &g_393;
                    uint64_t *l_396 = (void*)0;
                    uint64_t **l_395 = &l_396;
                    uint64_t *l_415 = &g_65;
                    int16_t l_416 = 0L;
                    uint16_t l_417 = 0x3BCAL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_389[i] = &g_42;
                    if (p_34.f0)
                        break;
                    l_390 &= ((*l_383) ^= (g_112 , g_11));
                    p_33.f2 = (safe_mul_func_int16_t_s_s((((*l_395) = ((*l_394) = g_393)) == (g_397 = &g_65)), (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_383) = 0x52631DDCL), 0UL)), (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(((g_144 = (((l_382 = (((safe_sub_func_uint64_t_u_u(((*l_415) = (safe_div_func_int64_t_s_s(((3L <= (g_413 == (((l_414 | l_376[0][1]) , 0x2211FA1381323F42LL) , (void*)0))) > l_373), p_33.f1))), p_33.f0)) == 0x2CEE8C0EL) != p_34.f0)) ^ p_33.f0) < 4294967295UL)) != 0xE788L), l_390)))) < g_57[3]), l_416)), g_145))))));
                    if (l_417)
                        break;
                }
                else
                { 
                    if (l_376[0][1])
                        break;
                    return g_418;
                }
                for (g_42 = 0; (g_42 < (-19)); g_42--)
                { 
                    int32_t *l_421 = &g_384[0][4];
                    int32_t *l_422 = &l_376[0][3];
                    int32_t *l_423[7][2][1] = {{{&g_42},{&l_376[1][0]}},{{(void*)0},{(void*)0}},{{&l_376[1][0]},{&g_42}},{{&l_376[1][0]},{(void*)0}},{{(void*)0},{&l_376[1][0]}},{{&g_42},{&l_376[1][0]}},{{(void*)0},{(void*)0}}};
                    union U4 *l_436 = (void*)0;
                    union U4 **l_437[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_437[i] = &l_436;
                    l_433++;
                    g_438 = l_436;
                    if (l_429[0])
                        break;
                }
                if ((((~(((l_441[2][2] <= l_441[2][2]) & (((((l_433 < (((((g_442 , (l_443 && (l_444 , ((*l_383) |= (((safe_rshift_func_int8_t_s_u(((*l_388) = ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_111.f0, 247UL)), 7)), l_390)) || g_418.f1)), g_418.f2)) < g_57[2]) <= p_33.f0))))) == g_282[5][1][5]) != 0xEBL) & p_33.f2) == 0x25L)) , g_418.f2) != p_33.f2) ^ (-10L)) == p_33.f0)) & p_34.f0)) <= l_376[0][1]) & l_425))
                { 
                    if (p_34.f0)
                        break;
                }
                else
                { 
                    int32_t **l_453 = (void*)0;
                    int32_t **l_454 = (void*)0;
                    int32_t **l_455 = (void*)0;
                    int32_t **l_456 = &g_130;
                    (*l_456) = &l_426;
                }
                for (l_433 = 5; (l_433 == 20); ++l_433)
                { 
                    struct S1 *l_459 = &g_58[1];
                    int64_t *l_468 = &l_373;
                    int32_t l_469 = (-1L);
                    int32_t *l_470 = &l_469;
                    int32_t *l_471 = (void*)0;
                    int32_t *l_472 = &g_42;
                    int32_t *l_473[6] = {&l_432,&l_376[0][1],&l_376[0][1],&l_432,&l_376[0][1],&l_376[0][1]};
                    int8_t l_484 = 0L;
                    uint32_t l_487[5][6][4] = {{{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,0xD4B5F898L},{1UL,0xA7AB1BD2L,0x783E44EDL,0xA7AB1BD2L},{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,0xD4B5F898L},{1UL,0xA7AB1BD2L,0x783E44EDL,0xA7AB1BD2L}},{{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,0xD4B5F898L},{1UL,0xA7AB1BD2L,0x783E44EDL,0xA7AB1BD2L},{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,0xD4B5F898L},{1UL,0xA7AB1BD2L,0x783E44EDL,0xA7AB1BD2L}},{{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,0xD4B5F898L},{1UL,0xA7AB1BD2L,0x783E44EDL,0xA7AB1BD2L},{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,0xD4B5F898L},{1UL,0xA7AB1BD2L,0x783E44EDL,0xA7AB1BD2L}},{{1UL,0xD4B5F898L,4294967290UL,0xA7AB1BD2L},{4294967290UL,0xA7AB1BD2L,4294967290UL,1UL},{4294967290UL,0xD4B5F898L,1UL,0xD4B5F898L},{4294967290UL,1UL,0x783E44EDL,0xD4B5F898L},{0x783E44EDL,0xD4B5F898L,0x783E44EDL,1UL},{4294967290UL,0xD4B5F898L,1UL,0xD4B5F898L}},{{4294967290UL,1UL,0x783E44EDL,0xD4B5F898L},{0x783E44EDL,0xD4B5F898L,0x783E44EDL,1UL},{4294967290UL,0xD4B5F898L,1UL,0xD4B5F898L},{4294967290UL,1UL,0x783E44EDL,0xD4B5F898L},{0x783E44EDL,0xD4B5F898L,0x783E44EDL,1UL},{4294967290UL,0xD4B5F898L,1UL,0xD4B5F898L}}};
                    int i, j, k;
                    p_33.f2 = (((*l_459) = l_444) , (((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((l_466 != l_467[1]) ^ (((*l_466) = g_58[1].f0) , ((void*)0 != &g_144))), 4)), ((*l_468) = g_279))) != (-2L)) & 0x220CL));
                    --l_487[0][0][0];
                }
            }
        }
        else
        { 
            int32_t l_491[3][1][6] = {{{0x92DB5FACL,0x8B602C33L,0x95F4AF2FL,0x95F4AF2FL,0x8B602C33L,0x92DB5FACL}},{{0xD66AEB98L,0x92DB5FACL,0x95F4AF2FL,0x92DB5FACL,0xD66AEB98L,0xD66AEB98L}},{{(-1L),0x92DB5FACL,0x92DB5FACL,(-1L),0x8B602C33L,(-1L)}}};
            struct S1 l_492 = {18,65535UL,83};
            int i, j, k;
            l_490[4][0] = &l_444;
            if (p_34.f0)
                continue;
            if (l_491[1][0][5])
                continue;
            p_33 = l_492;
        }
        g_439.f0 &= ((l_424 = (safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((1UL && (safe_mul_func_uint16_t_u_u((((((safe_rshift_func_uint8_t_u_s(p_33.f0, (((safe_lshift_func_uint16_t_u_u((l_503 , (l_504 == (l_510 = ((*l_507) = l_506)))), (0xFCBEL ^ (p_34.f0 , g_58[1].f1)))) <= 0xFBE0D773L) >= g_380[4]))) || l_443) > 0x3671AF1DA5E192BBLL) && p_34.f0) || 4294967295UL), 0xC9F6L))) && l_475[3]), l_474)), 7))) && g_11);
        l_514 ^= (0xB44A15CDD9D3AB90LL <= p_33.f1);
        for (l_514 = 0; (l_514 == 8); ++l_514)
        { 
            int16_t *l_517 = &g_144;
            int16_t *l_519[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t **l_518 = &l_519[0];
            int32_t l_529 = (-4L);
            int32_t *l_536[3][4][3] = {{{&g_384[2][2],&g_61,&g_61},{&g_61,&g_384[2][2],&g_42},{&g_384[2][2],&g_384[2][2],&g_384[2][2]},{&g_61,&g_61,&g_42}},{{&g_61,&g_61,&g_61},{&g_384[2][2],&g_61,&g_61},{&g_61,&g_384[2][2],&g_42},{&g_384[2][2],&g_384[2][2],&g_384[2][2]}},{{&g_61,&g_61,&g_42},{&g_61,&g_61,&g_61},{&g_384[2][2],&g_61,&g_61},{&g_61,&g_384[2][2],&g_42}}};
            struct S2 ***l_557 = &l_510;
            int32_t l_633[5][5][4] = {{{0xFB24E548L,0xADCE21F8L,(-1L),1L},{(-7L),0xB8D289D2L,(-1L),0xF214A4B4L},{(-1L),0xF214A4B4L,0x043E281BL,0xADCE21F8L},{(-1L),0xE63C076BL,1L,1L},{0x835AB7C1L,0x835AB7C1L,1L,0xB8D289D2L}},{{(-1L),0x2EC2C386L,1L,0x043E281BL},{0xB8D289D2L,1L,0x279AE30DL,1L},{1L,1L,3L,0x043E281BL},{1L,0x2EC2C386L,0xE63C076BL,0xB8D289D2L},{1L,0x835AB7C1L,1L,1L}},{{0x279AE30DL,0xE63C076BL,0xD9B57338L,0xADCE21F8L},{1L,0xF214A4B4L,(-7L),0xF214A4B4L},{1L,0xB8D289D2L,0xADCE21F8L,1L},{0xA2D354B7L,0xADCE21F8L,(-10L),0xFB24E548L},{0xF214A4B4L,3L,0xD10D097BL,(-1L)}},{{0xF214A4B4L,1L,(-10L),1L},{0xA2D354B7L,(-1L),0xADCE21F8L,0x2EC2C386L},{1L,(-1L),(-7L),0xD9B57338L},{1L,(-10L),0xD9B57338L,1L},{0x279AE30DL,1L,1L,0x279AE30DL}},{{1L,0x043E281BL,0xE63C076BL,7L},{1L,0xF8DA05BEL,3L,6L},{1L,0xD9B57338L,0x279AE30DL,6L},{0xA2D354B7L,(-7L),(-1L),(-1L)},{0x279AE30DL,1L,0x835AB7C1L,1L}}};
            uint8_t l_653[5][4][2] = {{{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL}},{{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL}},{{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL}},{{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL}},{{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL},{0xC2L,5UL}}};
            int32_t **l_656 = &l_513[3];
            int i, j, k;
            if ((((l_517 == ((*l_518) = &g_144)) != (safe_mod_func_uint16_t_u_u((--g_380[2]), ((safe_mod_func_int64_t_s_s(p_33.f2, l_526)) || (g_439 , ((&g_111 == (*l_504)) && p_33.f0)))))) && p_33.f1))
            { 
                int16_t l_527 = 0xAE03L;
                int32_t l_528 = 0x4ECA27DCL;
                int32_t l_530 = 0x3C02A93CL;
                l_531[4][0]++;
                g_130 = &g_61;
                return g_418;
            }
            else
            { 
                int32_t *l_534 = &l_529;
                int32_t **l_535[1][2][4] = {{{(void*)0,&l_513[1],&l_513[1],(void*)0},{&l_513[1],(void*)0,&l_513[1],&l_513[1]}}};
                uint16_t l_538 = 0UL;
                int32_t l_544 = 0xF9368BC5L;
                int64_t l_545 = 0xF29507A1CB68E917LL;
                int8_t l_547 = 0xECL;
                union U4 l_561 = {0xDE4110D1L};
                int i, j, k;
                if (p_36)
                    break;
                l_536[0][1][2] = l_534;
                ++l_538;
                for (l_537 = (-11); (l_537 > 14); l_537 = safe_add_func_uint64_t_u_u(l_537, 6))
                { 
                    struct S1 l_543 = {136,6UL,167};
                    int32_t l_546[2];
                    uint32_t l_548 = 0x990502B6L;
                    uint32_t *l_568 = (void*)0;
                    uint32_t *l_569 = &g_57[4];
                    uint32_t *l_574 = &l_443;
                    int32_t *l_575 = &l_544;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_546[i] = 0x44190680L;
                    l_543 = p_33;
                    l_548--;
                    (*l_534) = ((((*l_575) = (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((((void*)0 == l_557) == (p_36 | (safe_lshift_func_uint16_t_u_s(p_33.f0, 14)))) & (((+((l_561 , (((safe_sub_func_int16_t_s_s(l_382, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((--(*l_569)), ((*l_574) = (safe_sub_func_uint8_t_u_u(((((p_34 , 1UL) <= 0x5915L) ^ p_33.f1) , 1UL), l_543.f1))))), p_34.f0)))) && 0x4FL) , &p_35)) != (void*)0)) < p_33.f1) , 0UL)) < p_36) != 0x8B97BAC9L), 255UL)), p_33.f0)), p_33.f0))) , g_442.f2) | 9L);
                    if (l_431)
                        continue;
                }
            }
            for (g_88 = (-1); (g_88 != (-7)); g_88--)
            { 
                int64_t l_586 = 0x954A520CFD685ADFLL;
                uint16_t l_603 = 1UL;
                int32_t l_627 = 0L;
                int32_t **l_628 = &l_513[6];
                int32_t l_629 = 0xE303CB5BL;
                int32_t l_630[7][7][5] = {{{0x8702171CL,1L,8L,0x549FB0FFL,0x4E3982B8L},{2L,0xF480FDA3L,0xB2CF198DL,0xB2CF198DL,0xF480FDA3L},{(-10L),1L,(-3L),1L,0x477A8388L},{0L,0x060DAAE4L,0xCFB4DFEDL,(-1L),0x5CB82C6FL},{0x477A8388L,0x4E3982B8L,0L,5L,6L},{0L,0x5A8A6860L,2L,0xFB9FC99FL,(-5L)},{(-10L),0xD52CD83AL,1L,0xF8677C8BL,0x549FB0FFL}},{{2L,0x6B7BBEE7L,(-5L),0x095B7F89L,0xFB8E971AL},{0x8702171CL,0x477A8388L,0x477A8388L,0x8702171CL,5L},{0x5CB82C6FL,0x060DAAE4L,0xD7CB0D69L,0xFB8E971AL,0x6B7BBEE7L},{(-3L),0x50D3A15AL,5L,1L,0xE99F980CL},{0x060DAAE4L,0x095B7F89L,2L,0xFB8E971AL,0L},{0x5F6B7EACL,1L,(-1L),0x8702171CL,1L},{(-5L),0L,0xE8939649L,0x095B7F89L,1L}},{{0x50D3A15AL,0L,(-3L),0xF8677C8BL,(-3L)},{1L,1L,5L,0xFB9FC99FL,0x6B7BBEE7L},{1L,6L,0x049153BCL,5L,(-10L)},{0xFB9FC99FL,(-1L),(-5L),(-1L),0x0053DFE5L},{0x5F6B7EACL,6L,(-3L),1L,0x549FB0FFL},{0xB2CF198DL,1L,0L,0xB2CF198DL,0xFB9FC99FL},{0xE99F980CL,0L,1L,0x549FB0FFL,0x39566FE1L}},{{0x5CB82C6FL,0L,0x7D741437L,0L,0x5CB82C6FL},{0L,1L,0x049153BCL,0xA2DBB787L,0x4E3982B8L},{(-10L),0x095B7F89L,0xB2CF198DL,0x060DAAE4L,0x095B7F89L},{(-10L),0x50D3A15AL,(-2L),1L,0x4E3982B8L},{(-5L),0x060DAAE4L,0xE8939649L,0xB3184BC0L,0x5CB82C6FL},{0x4E3982B8L,0x477A8388L,0L,(-10L),0x39566FE1L},{(-1L),0xE8939649L,0xFB9FC99FL,0x095B7F89L,0x095B7F89L}},{{0xD6F48D1CL,0xA2DBB787L,0xD6F48D1CL,(-3L),0x39566FE1L},{(-5L),0xCFB4DFEDL,(-8L),0xB2CF198DL,(-3L)},{0x477A8388L,0x19281937L,0xF8677C8BL,0x477A8388L,0xA1E0724FL},{0xAB4C6086L,0L,(-8L),(-3L),0xE8939649L},{0x049153BCL,0L,0xD6F48D1CL,0xC4823908L,8L},{0L,0xB2CF198DL,0xFB9FC99FL,0x5A8A6860L,0xB3184BC0L},{1L,0L,0L,0L,0L}},{{0x095B7F89L,(-8L),0xAB4C6086L,0xB2CF198DL,0x0743C8E5L},{0xC4823908L,0x477A8388L,0x5F6B7EACL,1L,0x049153BCL},{0x0743C8E5L,0xB3184BC0L,(-6L),(-1L),0xE8939649L},{0xC4823908L,(-2L),1L,0xA1E0724FL,0xD6F48D1CL},{0x095B7F89L,0x0053DFE5L,0xF480FDA3L,(-5L),0x5A8A6860L},{1L,(-3L),0L,(-1L),0x39566FE1L},{0L,0x0743C8E5L,0x0743C8E5L,0L,(-1L)}},{{0x049153BCL,0x477A8388L,0xD52CD83AL,0x39566FE1L,(-3L)},{0xAB4C6086L,(-1L),(-1L),(-8L),2L},{0x477A8388L,(-1L),1L,0x39566FE1L,0x590E66F6L},{(-5L),0xB2CF198DL,1L,0L,0xB2CF198DL},{0xD6F48D1CL,0xC4823908L,8L,(-1L),0x19281937L},{(-1L),(-6L),0xAB4C6086L,(-5L),0xAB4C6086L},{0x19281937L,0x19281937L,0x4E3982B8L,0xA1E0724FL,(-3L)}}};
                uint32_t l_649[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_649[i] = 0xB51DD501L;
                if ((((*l_505) , (safe_div_func_int8_t_s_s((1L && (g_439.f0 &= (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_34.f0, (safe_rshift_func_uint16_t_u_u((p_33.f1 <= p_33.f2), 6)))) >= g_111.f0), 0)))), ((l_586 || l_586) ^ l_587)))) , (-8L)))
                { 
                    int32_t **l_588 = &g_130;
                    (*l_588) = &l_474;
                }
                else
                { 
                    const union U4 *l_595 = &g_439;
                    int16_t ***l_597 = &l_518;
                    int64_t *l_599 = &l_586;
                    int32_t l_600 = 0x9763D0FCL;
                    uint8_t l_626 = 0x17L;
                    l_600 = (safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s((-1L), (safe_sub_func_int64_t_s_s(((*l_599) = (l_595 == ((((253UL > (g_478[0] = (l_596 == ((*l_597) = l_596)))) , l_598[0][3]) != (void*)0) , (void*)0))), 3L)))), l_526));
                    g_439.f0 &= g_88;
                    p_33.f2 &= ((safe_mul_func_uint8_t_u_u(l_603, p_33.f0)) == ((p_33.f0 & ((safe_div_func_int32_t_s_s((l_586 == 0xF6D6L), 0x2A58AD7BL)) >= (safe_mul_func_uint8_t_u_u((p_33.f0 ^ (-1L)), p_34.f0)))) <= p_33.f0));
                    g_384[2][2] ^= g_95;
                    p_33 = ((safe_mod_func_int32_t_s_s(0xE82FF33CL, (((safe_sub_func_int32_t_s_s(l_424, (safe_sub_func_int8_t_s_s(((p_33.f0 , (g_112.f1++)) | g_384[2][2]), (l_627 &= ((((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_34.f0 ^ ((p_36 , p_36) & 0xF8L)), p_33.f2)), l_586)), p_36)), p_33.f2)), g_149[0][3])) != 0x43828514B4C7B4A1LL) != l_586) > l_626)))))) <= (-2L)) ^ p_34.f0))) , p_33);
                }
                (*l_628) = p_35;
                ++g_635[1][5];
                g_634 &= ((((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(p_34.f0, 5)) | 0x8067L), (g_442 , (((safe_mul_func_int16_t_s_s(p_33.f0, (((g_149[0][4] = (0xD978L | (safe_add_func_int64_t_s_s((g_58[1].f1 | 0xFAA1673FL), g_145)))) > l_425) ^ 0xA2L))) && 18446744073709551608UL) | p_33.f0)))) | 0xF52AL) , 0x1DL), p_33.f1)) ^ g_648) && g_380[0]) , 0x66CA0B49L);
                l_649[0]--;
            }
            l_653[4][2][0]++;
            (*l_656) = &g_384[2][2];
            return l_657;
        }
        for (g_95 = 0; (g_95 <= 52); g_95++)
        { 
            struct S0 l_664 = {0x5B7EDCA7L,2,65530UL,18446744073709551606UL};
            int32_t l_685 = (-1L);
            int64_t l_686 = 0x3D115A23CB36DDADLL;
            uint32_t *l_687[7][6] = {{&l_683[5][0],(void*)0,&g_418.f3,(void*)0,&l_683[5][0],&l_683[5][0]},{&l_683[5][0],(void*)0,(void*)0,&l_683[5][0],&l_683[5][0],&l_683[5][0]},{&l_683[5][0],&l_683[5][0],&l_683[5][0],(void*)0,(void*)0,&l_683[5][0]},{&l_683[5][0],&l_683[5][0],(void*)0,&g_418.f3,(void*)0,&l_683[5][0]},{(void*)0,&l_683[5][0],&g_418.f3,&g_418.f3,&l_683[5][0],(void*)0},{&l_683[5][0],(void*)0,&g_418.f3,(void*)0,&l_683[5][0],&l_683[5][0]},{&l_683[5][0],(void*)0,(void*)0,&l_683[5][0],&l_683[5][0],&l_683[5][0]}};
            uint32_t l_688[3][3];
            int32_t l_689 = (-1L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_688[i][j] = 0x405B6C01L;
            }
            l_689 |= (0x76L | (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((l_664 , (((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_34.f0, (safe_mul_func_int16_t_s_s(g_112.f3, (safe_sub_func_int8_t_s_s((0x9F285392L >= (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_503.f0, (((g_648 |= ((((((safe_lshift_func_uint16_t_u_s((l_685 = (safe_div_func_uint32_t_u_u((l_684 ^= (safe_lshift_func_uint8_t_u_u(l_683[5][0], l_514))), p_33.f2))), 15)) == 0xF218L) != l_686) , 0x28L) && 5L) && 1L)) , l_688[1][2]) | 0xB72EL))), g_634))), g_635[1][0])))))), g_42)) & 0x2684L) , l_512[0])) == (void*)0), 5)), p_33.f1)));
            if (g_145)
                continue;
            return l_664;
        }
    }
    return l_657;
}



static struct S2  func_38(struct S1  p_39)
{ 
    uint32_t *l_56 = &g_57[4];
    int32_t l_75 = 4L;
    struct S2 l_80 = {2};
    int8_t *l_86 = (void*)0;
    int8_t *l_87 = &g_88;
    int32_t *l_89 = (void*)0;
    int32_t *l_90[2][3] = {{&g_42,&g_42,&g_42},{&g_61,&g_61,&g_61}};
    struct S1 *l_126 = (void*)0;
    uint32_t **l_129 = &l_56;
    struct S1 *l_198 = &g_58[1];
    int64_t l_214 = (-3L);
    uint8_t l_221 = 0xD6L;
    union U4 l_253 = {0x8CE79D49L};
    int8_t *l_353 = (void*)0;
    int i, j;
    for (p_39.f1 = (-10); (p_39.f1 < 38); p_39.f1++)
    { 
        union U4 l_53 = {-10L};
        uint32_t **l_69 = &l_56;
        uint32_t ***l_70 = &l_69;
        for (g_42 = 0; (g_42 <= (-25)); g_42--)
        { 
            const uint32_t *l_59 = &g_57[2];
            int32_t *l_68 = &g_61;
            p_39.f2 ^= (safe_add_func_uint16_t_u_u(0xE510L, (-10L)));
            (*l_68) ^= func_47(((l_53 , (18446744073709551609UL == (safe_mul_func_uint16_t_u_u(((((g_11 , l_56) == (void*)0) , &g_57[4]) != (void*)0), 0x9235L)))) != 0UL), g_58[1], g_57[1], &g_57[4], l_59);
        }
        (*l_70) = l_69;
    }
lbl_131:
    g_42 ^= (((*l_87) &= (((0x99L <= (safe_unary_minus_func_int32_t_s((+(safe_mul_func_int16_t_s_s(l_75, ((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(l_75, ((l_80 , (+g_57[4])) , p_39.f2))) <= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_57[4] >= g_57[4]), p_39.f0)), 9UL))), p_39.f1)) < 0x0A497976L))))))) , p_39.f1) && 0x21B5A5E5L)) | g_58[1].f1);
    if (p_39.f0)
    { 
        int8_t l_93 = 0xECL;
        int32_t l_94[2];
        uint32_t **l_127 = (void*)0;
        uint32_t ***l_128[6][5] = {{&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127},{&l_127,&l_127,&l_127,&l_127,&l_127}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_94[i] = 1L;
        for (g_61 = 12; (g_61 >= (-3)); --g_61)
        { 
            --g_95;
            for (g_42 = 0; (g_42 == 17); g_42 = safe_add_func_int16_t_s_s(g_42, 1))
            { 
                int32_t **l_100 = &l_90[1][2];
                struct S0 l_106 = {0x6AAE9426L,26,1UL,18446744073709551611UL};
                struct S2 l_108 = {2};
                uint64_t *l_122 = (void*)0;
                uint64_t *l_123 = &g_65;
                uint16_t *l_124 = &g_95;
                struct S1 **l_125[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_125[i] = (void*)0;
                (*l_100) = &l_94[0];
                for (l_75 = 0; (l_75 != 20); l_75++)
                { 
                    uint32_t l_107 = 0x85C008FFL;
                    l_107 ^= ((((248UL ^ p_39.f0) , (safe_unary_minus_func_int32_t_s(p_39.f1))) & (safe_lshift_func_int16_t_s_u(g_42, 11))) == (l_106 , g_95));
                    return l_108;
                }
                g_58[1].f2 |= (safe_div_func_int32_t_s_s((((*l_124) = ((g_111 , ((g_112 , g_58[1].f0) > p_39.f1)) == ((*l_123) = ((((*l_87) = 0L) || (~((((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((*l_56) = (safe_rshift_func_int8_t_s_s((g_112.f2 , ((p_39.f2 , (-10L)) == p_39.f2)), 6))), g_112.f3)), l_93)) , g_112.f3) >= g_11), l_93)) < g_112.f3) && g_57[0]) & g_88))) > p_39.f0)))) >= 0x39A6L), 0x0E031660L));
                l_126 = &p_39;
            }
        }
        l_129 = l_127;
        g_130 = &l_94[0];
    }
    else
    { 
        int16_t l_138 = 0x5984L;
        int32_t l_147 = 0x764F569BL;
        int32_t l_148 = 0xE22BCD37L;
        int32_t l_150[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        union U3 l_175 = {6UL};
        struct S1 *l_196 = &g_58[1];
        int8_t *l_210 = (void*)0;
        int64_t *l_246 = &l_214;
        struct S1 l_247 = {44,0UL,-111};
        uint32_t *l_262 = &l_175.f2;
        struct S2 l_263 = {3};
        int i;
        if (g_111.f0)
        { 
            int32_t *l_136 = &g_61;
            uint32_t *l_140 = (void*)0;
            int32_t l_146 = (-3L);
            uint16_t l_152 = 0x41F6L;
            struct S1 l_224 = {180,65531UL,33};
            int32_t l_232 = 0x94535032L;
            uint16_t l_237 = 0x0504L;
            if (p_39.f0)
                goto lbl_131;
            if (((+0x26BC3EE986691D7FLL) <= p_39.f2))
            { 
                return g_111;
            }
            else
            { 
                struct S1 *l_133[1];
                int32_t l_151 = 0xCDCF8F5FL;
                const struct S0 l_155[5] = {{7L,30,0x7C54L,0xE72F9FE9L},{7L,30,0x7C54L,0xE72F9FE9L},{7L,30,0x7C54L,0xE72F9FE9L},{7L,30,0x7C54L,0xE72F9FE9L},{7L,30,0x7C54L,0xE72F9FE9L}};
                int32_t l_215 = 0xE9F2B418L;
                int i;
                for (i = 0; i < 1; i++)
                    l_133[i] = &g_58[1];
                g_58[1] = g_58[3];
                for (g_65 = 12; (g_65 != 8); g_65 = safe_sub_func_uint16_t_u_u(g_65, 1))
                { 
                    int32_t **l_137 = &l_136;
                    (*l_137) = l_136;
                }
                if (l_138)
                { 
                    uint32_t *l_139[1][3];
                    uint32_t l_141 = 4UL;
                    uint16_t *l_142 = &g_58[1].f1;
                    int32_t l_143[2][6][1] = {{{5L},{0x674BE705L},{5L},{0x674BE705L},{5L},{0x674BE705L}},{{5L},{0x674BE705L},{5L},{0x674BE705L},{5L},{0x674BE705L}}};
                    uint64_t *l_167 = &g_65;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_139[i][j] = &g_57[4];
                    }
                    (*l_136) &= ((((((*l_129) = (*l_129)) == (l_140 = l_139[0][2])) > l_141) && ((*l_142) = 65531UL)) , (p_39.f1 < g_42));
                    l_152++;
                    (*l_136) = (l_155[0] , ((safe_rshift_func_int16_t_s_s(((((l_80 , (l_143[1][5][0] |= (g_58[1].f2 == g_58[1].f2))) >= (safe_sub_func_uint8_t_u_u((!((safe_rshift_func_int16_t_s_s(((0xFB8516656B1269F6LL && p_39.f1) <= (l_141 | l_141)), 6)) <= p_39.f0)), (-1L)))) <= 1UL) | 1L), g_42)) <= g_112.f3));
                    (*l_136) |= (safe_div_func_uint32_t_u_u(0x471E60DAL, (safe_mul_func_uint8_t_u_u((((((*l_167) = 0x6CDD36E1F2821DCCLL) > (g_57[1] >= g_112.f1)) , 4294967289UL) & (safe_mod_func_uint16_t_u_u(l_155[0].f2, (l_143[1][1][0] = ((safe_add_func_int16_t_s_s((((((safe_add_func_int64_t_s_s(((+0xED5F3CC42DB4DAEALL) < p_39.f0), g_111.f0)) > l_155[0].f2) , 0x3FB5L) | l_143[0][2][0]) , 0L), g_112.f2)) || l_143[1][5][0]))))), p_39.f1))));
                }
                else
                { 
                    uint64_t *l_190 = &g_65;
                    int64_t *l_193 = &g_194;
                    uint16_t *l_195 = &g_112.f1;
                    struct S1 **l_197[5][7] = {{&l_126,(void*)0,&l_126,&l_126,&l_126,&l_126,(void*)0},{(void*)0,(void*)0,&l_133[0],(void*)0,(void*)0,(void*)0,&l_133[0]},{&l_126,&l_126,&l_126,(void*)0,&l_126,&l_126,(void*)0},{(void*)0,&l_133[0],(void*)0,(void*)0,(void*)0,&l_133[0],(void*)0},{&l_126,(void*)0,(void*)0,&l_126,&l_126,&l_126,&l_126}};
                    int16_t *l_211 = &l_138;
                    union U4 l_220 = {0xC2A9EBE4L};
                    int i, j;
                    (*l_136) = ((l_175 , ((+l_175.f2) || (((safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((*l_136), (safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(((*l_195) = (((*l_190) = 0UL) || ((*l_193) = ((p_39.f2 &= (p_39.f1 != (&g_130 != &l_89))) >= g_112.f2)))), g_61)))) > 6L) >= (*l_136)), p_39.f0)), g_58[1].f0)) | l_150[2]), 0xD4E4574DL)))) ^ l_155[0].f3) && 0xC32FL), g_149[0][0])) != 0UL) != 0x405EL))) & p_39.f1);
                    l_198 = l_196;
                    l_215 ^= ((*l_136) = ((safe_sub_func_uint16_t_u_u(((*l_195) = ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((!(l_151 ^ (*l_136))), 5)) ^ (&g_149[0][4] != l_210)), ((*l_211) ^= (-1L)))), ((*l_87) = (safe_lshift_func_uint8_t_u_s(((p_39.f1 == ((((*l_193) = (g_61 >= g_111.f0)) , p_39.f0) || g_112.f3)) < p_39.f0), l_175.f1))))) && 0xC7L), g_42)) , g_61)), 8L)) || l_214));
                    p_39.f2 |= (safe_sub_func_int64_t_s_s((0x95422EF5DC3FCBC6LL <= (safe_rshift_func_int8_t_s_u((((((l_220 , (void*)0) == (void*)0) | (l_151 | ((*l_136) = l_221))) | l_152) >= 1L), 6))), g_57[4]));
                }
            }
            for (g_61 = 0; (g_61 == (-24)); --g_61)
            { 
                uint16_t l_229 = 0UL;
                struct S2 l_240 = {0};
                int32_t **l_241 = &l_90[1][2];
                (*l_198) = l_224;
                if (p_39.f2)
                    continue;
                p_39.f2 = (g_149[0][3] || (((g_58[0] , ((safe_lshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(l_229, (safe_add_func_int16_t_s_s((l_232 != p_39.f2), ((~((*l_56) ^= g_111.f0)) < g_58[1].f0))))) , 0x7B0AL), l_175.f0)) == 0x3B38C434FA47DC6CLL)) < p_39.f2) > g_58[1].f2));
                for (l_229 = 0; (l_229 <= 5); l_229 += 1)
                { 
                    struct S2 **l_234 = (void*)0;
                    struct S2 **l_235 = (void*)0;
                    int i;
                    g_236 = &g_111;
                    --l_237;
                    p_39.f2 ^= (g_42 = (l_150[l_229] ^= 0x61723A1AL));
                    return l_240;
                }
                (*l_241) = &g_42;
            }
            for (g_42 = 0; (g_42 <= 6); g_42 += 1)
            { 
                int32_t **l_242 = (void*)0;
                int32_t **l_243 = &l_89;
                (*l_243) = &l_146;
            }
        }
        else
        { 
            const uint64_t l_248 = 0xD2C7568425D96900LL;
            int32_t l_249 = (-1L);
            l_249 &= ((((p_39.f1 | (safe_lshift_func_uint16_t_u_u(1UL, ((l_246 = &g_11) != (void*)0)))) , (((p_39 = l_247) , ((l_248 , 9UL) | p_39.f2)) , l_175.f3)) , l_248) >= l_248);
        }
        for (l_147 = 1; (l_147 <= 5); l_147 += 1)
        { 
            uint16_t l_252 = 0x0D42L;
            int16_t *l_260[5];
            int32_t l_261 = 0xD9764715L;
            struct S2 l_264 = {0};
            int i;
            for (i = 0; i < 5; i++)
                l_260[i] = &l_138;
            if ((safe_sub_func_uint32_t_u_u(l_252, ((l_253 , g_112.f1) == ((0x26AFAFC6B1E59010LL || ((((safe_add_func_uint32_t_u_u(((g_256[0] == &g_257) >= (l_261 ^= (safe_lshift_func_uint16_t_u_u(((((((g_11 && g_57[4]) , (void*)0) != (void*)0) > g_58[1].f1) == 2L) ^ g_95), p_39.f0)))), 0x2B7B2368L)) , l_262) != l_262) , l_252)) || p_39.f2)))))
            { 
                g_58[1].f2 &= p_39.f2;
            }
            else
            { 
                if (l_175.f3)
                    break;
                p_39.f2 |= (g_58[1].f2 = g_194);
                return l_263;
            }
            if (p_39.f2)
                continue;
            g_58[l_147] = (l_264 , g_58[l_147]);
            for (l_75 = 4; (l_75 >= 0); l_75 -= 1)
            { 
                struct S2 l_265 = {2};
                union U3 l_268 = {0x518A3AE3L};
                int64_t *l_275 = &l_214;
                uint64_t *l_276 = &g_65;
                uint64_t *l_277 = (void*)0;
                uint64_t *l_278[3][4][7] = {{{&g_279,(void*)0,&g_279,(void*)0,&g_279,(void*)0,&g_279},{&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279}},{{&g_279,(void*)0,&g_279,(void*)0,&g_279,(void*)0,&g_279},{&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279}},{{&g_279,(void*)0,&g_279,(void*)0,&g_279,(void*)0,&g_279},{&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279}}};
                int32_t *l_280 = &l_261;
                int i, j, k;
                l_261 |= (((l_265 , g_88) != (g_112 , (l_150[2] |= (((safe_rshift_func_int16_t_s_u((((*l_275) = (l_268 , ((g_279 |= (((*l_276) &= (safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((p_39.f1 || l_268.f1) != (((safe_lshift_func_uint16_t_u_u(0x6091L, p_39.f2)) , l_275) != &l_214)), 0L)), 6UL))) > g_58[1].f2)) != 0x193B92927784A772LL))) , p_39.f1), p_39.f1)) > g_58[l_147].f1) && p_39.f2)))) >= 0x91654FE5L);
                for (g_112.f3 = 0; (g_112.f3 <= 5); g_112.f3 += 1)
                { 
                    int32_t **l_281 = &l_280;
                    (*l_281) = l_280;
                    g_282[5][0][5]++;
                    return l_265;
                }
            }
            for (p_39.f1 = 0; (p_39.f1 == 8); p_39.f1 = safe_add_func_int32_t_s_s(p_39.f1, 2))
            { 
                return l_80;
            }
        }
        for (l_138 = 27; (l_138 != (-21)); l_138 = safe_sub_func_int32_t_s_s(l_138, 8))
        { 
            struct S1 ***l_289 = &g_256[0];
            (*l_289) = &l_198;
            return g_111;
        }
        for (l_175.f2 = (-17); (l_175.f2 > 30); l_175.f2 = safe_add_func_uint8_t_u_u(l_175.f2, 1))
        { 
            uint32_t l_292[2];
            int i;
            for (i = 0; i < 2; i++)
                l_292[i] = 0x6FB6AEB4L;
            ++l_292[0];
        }
    }
    for (g_112.f2 = (-9); (g_112.f2 >= 44); g_112.f2++)
    { 
        uint32_t **l_297 = &l_56;
        int32_t l_302 = 9L;
        int64_t *l_303[5] = {&l_214,&l_214,&l_214,&l_214,&l_214};
        int32_t *l_331 = (void*)0;
        struct S2 **l_334 = &g_236;
        uint8_t l_354 = 0xB4L;
        int i;
        if (((g_42 = ((65526UL == ((((*l_297) = &g_57[0]) != &g_57[2]) > (g_65 || (p_39.f1 >= ((g_194 &= (l_302 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((l_80 , (l_302 && p_39.f2)) >= g_111.f0) != g_145), 2)), l_302)))) & p_39.f0))))) | p_39.f1)) != 8UL))
        { 
            struct S1 l_310 = {37,0x96B3L,118};
            int32_t l_311[3];
            int i;
            for (i = 0; i < 3; i++)
                l_311[i] = 3L;
            if (p_39.f2)
                break;
            for (l_221 = (-28); (l_221 <= 20); l_221 = safe_add_func_uint32_t_u_u(l_221, 4))
            { 
                uint8_t *l_306 = &g_282[1][1][0];
                uint16_t * const l_309 = &g_58[1].f1;
                const struct S2 *l_321[2][5] = {{&l_80,&l_80,&l_80,&l_80,&l_80},{&g_111,&g_111,&g_111,&g_111,&g_111}};
                const struct S2 **l_320[2];
                uint32_t ***l_324[7][6] = {{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297},{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297},{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297},{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297},{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297},{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297},{&l_297,&l_297,&l_297,&l_297,&l_297,&l_297}};
                uint16_t l_325 = 4UL;
                int32_t l_326[5][3][7] = {{{5L,0xA7ADA459L,0L,(-8L),(-8L),0L,0xA7ADA459L},{0L,5L,2L,0x498343F8L,0L,0x498343F8L,2L},{(-8L),1L,0L,(-1L),5L,5L,(-1L)}},{{0x0E41B89AL,0x2491D7C0L,0x0E41B89AL,0x498343F8L,(-1L),0x2491D7C0L,(-1L)},{1L,(-1L),0xA7ADA459L,(-8L),5L,0x7356911EL,0x7356911EL},{0L,0x3F649D34L,0xBBB86616L,0x3F649D34L,0L,0x2491D7C0L,0xBBB86616L}},{{0xCB9D765CL,1L,(-1L),0xA7ADA459L,(-8L),5L,0x7356911EL},{(-1L),0x498343F8L,0x0E41B89AL,0x2491D7C0L,0x0E41B89AL,0x498343F8L,(-1L)},{0xCB9D765CL,0xA7ADA459L,0x7356911EL,(-8L),1L,0L,(-1L)}},{{0L,0x498343F8L,2L,5L,0L,5L,2L},{1L,1L,0x7356911EL,(-1L),0xCB9D765CL,5L,0xA7ADA459L},{0x0E41B89AL,0x3F649D34L,0x0E41B89AL,5L,(-1L),0x3F649D34L,(-1L)}},{{(-8L),(-1L),(-1L),(-8L),0xCB9D765CL,0x7356911EL,0L},{0L,0x2491D7C0L,0xBBB86616L,0x2491D7C0L,0L,0x3F649D34L,0xBBB86616L},{5L,1L,0xA7ADA459L,0xA7ADA459L,1L,5L,0L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_320[i] = &l_321[1][1];
                g_42 = ((g_194 |= p_39.f0) , (l_311[2] ^= ((((*l_306) = g_11) && g_58[1].f2) ^ (safe_mul_func_int16_t_s_s(((l_302 , (l_309 == (void*)0)) > (l_310 , 0xF5L)), g_145)))));
                g_42 &= p_39.f1;
                l_311[0] &= (((safe_lshift_func_uint16_t_u_u((+0UL), 2)) & ((+(((((*l_306) = ((g_149[0][2] , (0xC6540DECL | (p_39.f2 = (l_325 &= ((g_322 = ((safe_lshift_func_int16_t_s_u((((0xD56DDB92C3FD392BLL != 0x70AD77E3B7BC428ELL) != l_302) | (((++(*l_309)) , &g_236) != l_320[1])), l_310.f1)) , g_322)) == &g_323[0][5]))))) < 0xCDF8BA9425BB4C82LL)) ^ l_326[3][2][5]) && p_39.f2) >= g_58[1].f0)) || p_39.f2)) & g_57[4]);
                if (l_302)
                    continue;
            }
        }
        else
        { 
            struct S2 l_327 = {3};
            return l_327;
        }
        if ((safe_mod_func_int64_t_s_s((g_194 ^= 0xD2D39850ADC6CE29LL), 18446744073709551613UL)))
        { 
            int32_t **l_330[1];
            struct S2 **l_335 = &g_236;
            int i;
            for (i = 0; i < 1; i++)
                l_330[i] = &l_90[1][0];
            g_130 = &g_61;
            l_331 = &g_42;
            for (l_302 = 0; (l_302 <= 23); l_302 = safe_add_func_int32_t_s_s(l_302, 5))
            { 
                l_335 = l_334;
                (*g_130) = (*g_130);
                return l_80;
            }
            for (g_88 = 0; (g_88 <= 0); g_88 += 1)
            { 
                uint64_t l_336 = 18446744073709551615UL;
                --l_336;
            }
        }
        else
        { 
            return g_111;
        }
        if (((g_11 , ((*l_331) = g_144)) == p_39.f2))
        { 
            for (l_75 = 0; (l_75 > 4); l_75 = safe_add_func_int8_t_s_s(l_75, 4))
            { 
                struct S2 l_341 = {4};
                return l_341;
            }
        }
        else
        { 
            struct S2 l_342 = {3};
            return l_342;
        }
        for (l_214 = 0; (l_214 >= 0); l_214 -= 1)
        { 
            int i, j;
            if (g_149[l_214][(l_214 + 3)])
                break;
            g_58[1].f2 = ((((*g_130) = ((safe_add_func_uint32_t_u_u((p_39.f0 = (safe_div_func_int8_t_s_s(((*l_331) = ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((0x89L != p_39.f0) >= (safe_sub_func_uint8_t_u_u((((*l_331) , l_353) != &g_149[l_214][(l_214 + 3)]), g_58[1].f2))), g_58[1].f1)), 4294967292UL)) <= g_61)), 1L))), p_39.f1)) <= p_39.f2)) , l_354) || g_57[6]);
        }
    }
    return g_111;
}



static int32_t  func_47(uint16_t  p_48, struct S1  p_49, uint32_t  p_50, uint32_t * p_51, const uint32_t * p_52)
{ 
    int32_t *l_60 = &g_61;
    int32_t *l_62 = &g_61;
    int32_t *l_63[6][7][5] = {{{&g_61,&g_42,&g_61,&g_42,&g_61},{&g_61,&g_42,&g_61,&g_61,&g_61},{&g_61,&g_42,&g_61,&g_42,&g_61},{(void*)0,&g_61,&g_61,&g_42,(void*)0},{&g_42,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_42,&g_42,&g_42,&g_61},{&g_61,&g_61,&g_42,&g_42,&g_61}},{{&g_42,&g_42,&g_61,&g_42,&g_42},{&g_61,&g_42,&g_61,&g_61,&g_42},{&g_42,&g_42,&g_42,&g_42,&g_42},{&g_42,&g_42,&g_42,&g_42,(void*)0},{&g_42,&g_61,&g_42,&g_42,(void*)0},{&g_61,&g_61,&g_61,&g_42,&g_42},{&g_61,&g_61,&g_61,&g_42,&g_42}},{{(void*)0,&g_61,&g_42,&g_61,&g_42},{&g_42,&g_42,&g_42,&g_61,&g_61},{(void*)0,&g_61,&g_61,&g_42,&g_61},{&g_61,&g_42,&g_61,(void*)0,&g_42},{&g_42,&g_61,&g_61,&g_42,(void*)0},{(void*)0,&g_42,&g_42,&g_61,&g_42},{&g_61,&g_42,&g_42,&g_61,&g_61}},{{&g_42,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_42,&g_42,&g_61},{(void*)0,&g_42,(void*)0,(void*)0,&g_61},{&g_61,&g_61,&g_42,&g_42,&g_61},{(void*)0,(void*)0,&g_61,&g_42,&g_42},{&g_42,(void*)0,&g_61,&g_61,&g_42},{&g_42,(void*)0,&g_61,&g_42,&g_61}},{{&g_61,&g_42,(void*)0,&g_42,&g_61},{&g_61,&g_42,(void*)0,&g_61,&g_42},{&g_42,&g_61,&g_42,(void*)0,&g_42},{&g_42,(void*)0,&g_42,&g_42,&g_42},{&g_42,(void*)0,&g_42,&g_42,&g_61},{&g_42,&g_42,&g_61,&g_42,&g_61},{&g_61,&g_61,&g_61,&g_42,&g_42}},{{&g_61,&g_61,&g_42,&g_61,&g_42},{&g_61,&g_42,&g_61,&g_61,&g_61},{&g_61,(void*)0,&g_42,&g_42,&g_61},{&g_42,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61},{&g_42,&g_42,&g_61,&g_42,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_42}}};
    int32_t l_64 = 0xEAFAF4B0L;
    int i, j, k;
    --g_65;
    return g_65;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_31[i][j][k], "g_31[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_58[i].f0, "g_58[i].f0", print_hash_value);
        transparent_crc(g_58[i].f1, "g_58[i].f1", print_hash_value);
        transparent_crc(g_58[i].f2, "g_58[i].f2", print_hash_value);

    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f3, "g_112.f3", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_149[i][j], "g_149[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_282[i][j][k], "g_282[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_380[i], "g_380[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_384[i][j], "g_384[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f1, "g_418.f1", print_hash_value);
    transparent_crc(g_418.f2, "g_418.f2", print_hash_value);
    transparent_crc(g_418.f3, "g_418.f3", print_hash_value);
    transparent_crc(g_439.f0, "g_439.f0", print_hash_value);
    transparent_crc(g_442.f0, "g_442.f0", print_hash_value);
    transparent_crc(g_442.f1, "g_442.f1", print_hash_value);
    transparent_crc(g_442.f2, "g_442.f2", print_hash_value);
    transparent_crc(g_442.f3, "g_442.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_478[i], "g_478[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_631[i], "g_631[i]", print_hash_value);

    }
    transparent_crc(g_634, "g_634", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_635[i][j], "g_635[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_805[i], "g_805[i]", print_hash_value);

    }
    transparent_crc(g_832.f1, "g_832.f1", print_hash_value);
    transparent_crc(g_832.f3, "g_832.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_839[i], "g_839[i]", print_hash_value);

    }
    transparent_crc(g_859.f0, "g_859.f0", print_hash_value);
    transparent_crc(g_859.f1, "g_859.f1", print_hash_value);
    transparent_crc(g_859.f2, "g_859.f2", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1143, "g_1143", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1231[i][j], "g_1231[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1279.f0, "g_1279.f0", print_hash_value);
    transparent_crc(g_1279.f1, "g_1279.f1", print_hash_value);
    transparent_crc(g_1279.f2, "g_1279.f2", print_hash_value);
    transparent_crc(g_1279.f3, "g_1279.f3", print_hash_value);
    transparent_crc(g_1287, "g_1287", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1600[i][j][k], "g_1600[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1631.f0, "g_1631.f0", print_hash_value);
    transparent_crc(g_1631.f1, "g_1631.f1", print_hash_value);
    transparent_crc(g_1631.f2, "g_1631.f2", print_hash_value);
    transparent_crc(g_1631.f3, "g_1631.f3", print_hash_value);
    transparent_crc(g_1676, "g_1676", print_hash_value);
    transparent_crc(g_1934.f0, "g_1934.f0", print_hash_value);
    transparent_crc(g_1934.f1, "g_1934.f1", print_hash_value);
    transparent_crc(g_1934.f2, "g_1934.f2", print_hash_value);
    transparent_crc(g_1934.f3, "g_1934.f3", print_hash_value);
    transparent_crc(g_2029, "g_2029", print_hash_value);
    transparent_crc(g_2049, "g_2049", print_hash_value);
    transparent_crc(g_2093, "g_2093", print_hash_value);
    transparent_crc(g_2153, "g_2153", print_hash_value);
    transparent_crc(g_2290, "g_2290", print_hash_value);
    transparent_crc(g_2351, "g_2351", print_hash_value);
    transparent_crc(g_2353, "g_2353", print_hash_value);
    transparent_crc(g_2395, "g_2395", print_hash_value);
    transparent_crc(g_2401, "g_2401", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2599[i][j].f0, "g_2599[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_2779, "g_2779", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
