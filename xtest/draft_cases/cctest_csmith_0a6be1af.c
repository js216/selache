// SPDX-License-Identifier: MIT
// cctest_csmith_0a6be1af.c --- cctest case csmith_0a6be1af (csmith seed 174842287)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10e001fc */

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

// Options:   -s 174842287 -o /tmp/csmith_gen_uvckjkxw/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int64_t  f1;
   const int16_t  f2;
   uint8_t  f3;
   const int16_t  f4;
};

union U1 {
   const uint8_t  f0;
};

union U2 {
   int8_t  f0;
};

union U3 {
   uint32_t  f0;
   int64_t  f1;
   int32_t  f2;
   const unsigned f3 : 27;
};

union U4 {
   uint16_t  f0;
   const struct S0  f1;
   uint16_t  f2;
};

union U5 {
   int32_t  f0;
   int8_t  f1;
   int8_t  f2;
   int16_t  f3;
};


static int32_t g_2 = (-2L);
static uint8_t g_5[1][3][3] = {{{250UL,250UL,250UL},{0x98L,0x06L,0x98L},{250UL,250UL,250UL}}};
static const union U3 g_27 = {18446744073709551615UL};
static uint8_t g_40 = 254UL;
static uint64_t g_41[3][3][5] = {{{1UL,1UL,0xF45A3231966BA053LL,0UL,5UL},{0x73C098B3027FE137LL,0x47E13251F81F13D4LL,0x47E13251F81F13D4LL,0x73C098B3027FE137LL,0xE868E0133D4965DALL},{0x409EF321248C3319LL,0UL,1UL,1UL,0UL}},{{0xE868E0133D4965DALL,0x47E13251F81F13D4LL,0x2614F5C6F0D602FFLL,0xAAF75D59274CB070LL,0xAAF75D59274CB070LL},{0x353725AC950041ACLL,1UL,0x353725AC950041ACLL,1UL,0xF45A3231966BA053LL},{18446744073709551615UL,0x73C098B3027FE137LL,0xAAF75D59274CB070LL,0x73C098B3027FE137LL,18446744073709551615UL}},{{0x353725AC950041ACLL,0x409EF321248C3319LL,1UL,0UL,1UL},{0xE868E0133D4965DALL,0xE868E0133D4965DALL,0xE868E0133D4965DALL,0x2614F5C6F0D602FFLL,0x73C098B3027FE137LL},{0x353725AC950041ACLL,0UL,0UL,0x353725AC950041ACLL,5UL}}};
static union U1 g_45 = {0xE0L};
static uint8_t g_54 = 5UL;
static uint32_t g_55 = 1UL;
static uint32_t g_80 = 0xE7B382E3L;
static uint32_t g_81 = 0x5E5E7DF3L;
static uint16_t g_90 = 0x243AL;
static int32_t g_105 = (-1L);
static uint32_t g_118 = 0x96A5E243L;
static uint8_t g_124[4][1] = {{255UL},{251UL},{255UL},{251UL}};
static union U2 g_132 = {5L};
static uint16_t g_148 = 0x1BE0L;
static int32_t g_160[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
static int32_t g_166 = 1L;
static union U5 g_176 = {0xD48D0EE8L};
static const union U4 g_198 = {65528UL};
static uint32_t g_213 = 4294967295UL;
static int64_t g_229 = 0x9F17A2EE58E92035LL;
static int64_t g_230 = 0x50AB9E387D5A15B5LL;
static int32_t g_231 = 6L;
static int32_t g_232 = 0x97A0B385L;
static uint32_t g_234 = 18446744073709551615UL;
static uint16_t g_237 = 0x35BFL;
static const uint32_t g_270 = 0UL;
static int32_t g_272 = 0x8175E35AL;
static uint16_t g_316 = 65528UL;



static int64_t  func_1(void);
static const union U2  func_6(union U2  p_7, union U5  p_8);
static union U2  func_9(int32_t  p_10, uint64_t  p_11, int32_t  p_12);
static int32_t  func_30(int8_t  p_31, int16_t  p_32, union U1  p_33, uint32_t  p_34, int64_t  p_35);




static int64_t  func_1(void)
{ 
    uint64_t l_15 = 0x5A63A74ADF29855ELL;
    uint32_t l_22 = 0x4307976BL;
    int8_t l_23 = 1L;
    const union U5 l_249[2][3][4] = {{{{-1L},{0xC4F20DA1L},{-1L},{-1L}},{{0xC4F20DA1L},{0xC4F20DA1L},{2L},{0xC4F20DA1L}},{{0xC4F20DA1L},{-1L},{-1L},{0xC4F20DA1L}}},{{{-1L},{0xC4F20DA1L},{-1L},{-1L}},{{0xC4F20DA1L},{0xC4F20DA1L},{2L},{0xC4F20DA1L}},{{0xC4F20DA1L},{-1L},{-1L},{0xC4F20DA1L}}}};
    int32_t l_271[1];
    union U1 l_285 = {0x9EL};
    uint8_t l_311 = 0x69L;
    int64_t l_312 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_271[i] = (-1L);
    for (g_2 = 20; (g_2 > 2); g_2 = safe_sub_func_uint32_t_u_u(g_2, 5))
    { 
        int16_t l_24 = 0x4FD5L;
        union U4 l_256 = {0x8ACBL};
        int8_t l_287 = 0x61L;
        g_5[0][0][2] = 0xAF425F5FL;
    }
    for (l_23 = (-10); (l_23 != (-26)); l_23 = safe_sub_func_uint16_t_u_u(l_23, 1))
    { 
        int32_t l_310[4][4];
        uint32_t l_313 = 0x539E2D7BL;
        uint16_t l_314[5][1] = {{0x5B59L},{0UL},{0x5B59L},{0UL},{0x5B59L}};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_310[i][j] = 1L;
        }
    }
    return l_249[0][1][0].f2;
}



static const union U2  func_6(union U2  p_7, union U5  p_8)
{ 
    uint32_t l_187 = 4294967295UL;
    int32_t l_188 = 0xB6A00515L;
    int32_t l_193[5];
    int32_t l_194 = 0x1AA19CEEL;
    int32_t l_195 = 0x69D0CB17L;
    int i;
    for (i = 0; i < 5; i++)
        l_193[i] = 0L;
lbl_240:
    if ((l_195 &= (0x172A5171L != (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((l_194 |= (safe_div_func_uint64_t_u_u((l_193[1] ^= (((safe_rshift_func_uint8_t_u_s(((l_188 ^= l_187) == ((p_8.f0 & (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(1L, p_8.f2)), 0L))) > l_187)), 5)) & 1UL) <= g_160[4])), 0x27AD0C03D5BD3527LL))), l_187)) | g_105), 1UL)), 3)))))
    { 
        uint16_t l_201 = 0xB7DFL;
        int32_t l_202 = 0xACD49A5DL;
        if ((0x9C36F569L || (safe_div_func_uint32_t_u_u((g_198 , ((p_8.f0 = (((0L <= (safe_mul_func_int16_t_s_s((l_202 = l_201), 0xE7EBL))) < g_41[0][1][3]) & p_8.f1)) != 1L)), p_7.f0))))
        { 
            uint8_t l_205 = 0xC9L;
            int32_t l_212 = (-5L);
            for (g_40 = 0; (g_40 >= 14); g_40++)
            { 
                int16_t l_210 = 4L;
                int8_t l_211 = 0x16L;
                l_212 = (l_202 <= (l_205 && (p_8.f0 &= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(l_210, (l_193[1] = g_198.f2))) < 7UL), l_211)))));
            }
            return g_132;
        }
        else
        { 
            g_213--;
            for (g_166 = 0; (g_166 <= 4); g_166 += 1)
            { 
                struct S0 l_225 = {1UL,0xBC3BCD21EB8B61DALL,5L,0x0CL,-8L};
                int32_t l_226 = (-1L);
                int i;
                l_226 ^= (safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_int32_t_s(((((0L == (safe_sub_func_int64_t_s_s((((l_193[1] ^= ((g_160[g_166] != ((safe_mod_func_int16_t_s_s((g_160[g_166] || (!p_8.f3)), p_8.f2)) && g_213)) != l_202)) & 2L) | 0L), (-1L)))) , l_225) , p_8) , 0x3C88BFD1L))) != l_201)));
                if (g_45.f0)
                    continue;
            }
        }
    }
    else
    { 
        int64_t l_227 = (-4L);
        int32_t l_228 = (-1L);
        int32_t l_233[1][5][1] = {{{0xDF3491AEL},{1L},{0xDF3491AEL},{1L},{0xDF3491AEL}}};
        int i, j, k;
        ++g_234;
    }
    --g_237;
    if (p_8.f0)
        goto lbl_240;
    return p_7;
}



static union U2  func_9(int32_t  p_10, uint64_t  p_11, int32_t  p_12)
{ 
    union U2 l_44 = {-2L};
    uint16_t l_56 = 0xB334L;
    uint64_t l_69 = 0UL;
    int32_t l_89 = 0L;
    uint32_t l_173 = 2UL;
    if (((((safe_div_func_int16_t_s_s((g_27 , ((g_55 = (safe_lshift_func_uint16_t_u_s((func_30(((1L ^ (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((g_41[0][1][3] = g_40) & ((safe_div_func_uint8_t_u_u((((l_44 , g_27.f3) ^ g_27.f0) , l_44.f0), p_11)) | l_44.f0)), g_40)) < 0L), g_27.f2))) >= p_10), l_44.f0, g_45, l_44.f0, l_44.f0) == 0xDAB70C68L), p_11))) <= 0L)), g_5[0][0][2])) > 18446744073709551607UL) > g_40) > l_56))
    { 
        int32_t l_79 = 0x14E4505BL;
        int32_t l_106[2][2][4] = {{{0x01126FE5L,0x01126FE5L,0x076915C5L,0x01126FE5L},{0x01126FE5L,(-8L),(-8L),0x01126FE5L}},{{(-8L),0x01126FE5L,(-8L),(-8L)},{0x01126FE5L,0x01126FE5L,0x076915C5L,0x01126FE5L}}};
        int i, j, k;
        for (g_54 = 20; (g_54 != 22); g_54++)
        { 
            int64_t l_71 = (-1L);
            if ((+(((+((g_27.f2 >= (safe_sub_func_int32_t_s_s(l_44.f0, (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_12, (safe_sub_func_uint8_t_u_u((g_5[0][0][2] || l_69), 0xE6L)))), g_54)) && 8L) && g_5[0][2][0])))) <= 249UL)) != g_2) <= 1L)))
            { 
                uint64_t l_70 = 0UL;
                l_70 ^= 2L;
            }
            else
            { 
                l_71 &= g_27.f0;
            }
            for (g_55 = (-25); (g_55 >= 37); ++g_55)
            { 
                int16_t l_78 = 4L;
                union U1 l_88 = {0UL};
                g_81 &= (safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((l_78 | (p_12 = l_79)), ((((0UL ^ (((p_10 || p_10) > g_27.f3) > g_2)) != 1UL) , l_78) & p_11))) < g_80), p_10));
                l_89 = (0x340D7ECFL & (((safe_mod_func_uint16_t_u_u((0x04E4D2D9911037DELL != (safe_mul_func_uint16_t_u_u(((-4L) >= (safe_add_func_uint64_t_u_u((((l_78 != l_71) == 4L) < l_79), p_12))), 65533UL))), p_11)) , l_88) , g_27.f2));
                --g_90;
            }
        }
        for (g_40 = 0; (g_40 != 25); g_40 = safe_add_func_int32_t_s_s(g_40, 5))
        { 
            int32_t l_109[1][5][2] = {{{1L,0x3C24CE62L},{1L,1L},{0x3C24CE62L,1L},{1L,0x3C24CE62L},{1L,1L}}};
            int i, j, k;
            l_106[0][1][2] = ((((safe_sub_func_uint64_t_u_u(0xA4C35ED1F7F3E9DALL, (safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_12, (safe_lshift_func_uint8_t_u_u((p_11 || ((safe_add_func_int64_t_s_s((((g_105 = 0xA2BDD4A0L) , 1UL) || (-6L)), p_12)) > p_11)), 6)))), 5)))) != g_80) || (-1L)) < p_12);
            g_118 = (safe_rshift_func_int8_t_s_s((l_109[0][4][1] <= (g_40 == (safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((0xBCL <= ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(l_109[0][4][1], p_12)) || g_27.f0), g_27.f0)) != g_81)), 0xBD0DL)) <= p_12), p_10)))), l_106[0][1][2]));
            p_12 = ((g_81++) || p_11);
        }
    }
    else
    { 
        p_12 = 3L;
        p_10 = (((g_124[0][0] ^= ((((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((p_12 , 0x732C9520L))) , ((g_105 >= p_11) >= p_10)), g_2)) > g_80) , p_11) < p_12)) > p_12) && g_27.f3);
    }
    if ((((l_44 , (p_12 != (l_89 |= ((p_10 < (g_5[0][0][2] >= 0xCF4CL)) >= l_56)))) > g_27.f0) , g_27.f3))
    { 
        int32_t l_128 = 0xD7906007L;
        union U4 l_129 = {9UL};
        int32_t l_130[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_130[i][j] = (-4L);
        }
        l_130[1][0] = ((safe_mul_func_uint16_t_u_u(65532UL, (safe_unary_minus_func_int16_t_s((l_128 &= l_56))))) ^ (l_129 , (-2L)));
        p_10 ^= (~p_12);
        p_12 = ((l_44 = g_132) , p_12);
    }
    else
    { 
        int32_t l_133 = 2L;
        int32_t l_138 = 1L;
        int16_t l_147 = 0x6E46L;
        int32_t l_159 = 0x5E6FE971L;
        int8_t l_161 = (-4L);
        int32_t l_175[4][3] = {{0x639025BFL,0x9021D3DDL,0x639025BFL},{(-9L),0x05CA6D59L,0xB98E7B1AL},{(-9L),(-9L),0x05CA6D59L},{0x639025BFL,0x05CA6D59L,0x05CA6D59L}};
        int i, j;
        l_133 = 0x16096333L;
lbl_174:
        if ((~((safe_mod_func_uint32_t_u_u((~(l_138 ^= 6L)), p_11)) | (((safe_rshift_func_int8_t_s_s(g_41[0][0][2], (safe_lshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(0x706B8BA9L, 3UL)) & 6L), 6)))) != g_40) < g_54))))
        { 
            for (l_56 = 0; (l_56 <= 0); l_56 += 1)
            { 
                l_138 = 0xD19F8FA1L;
            }
            g_148 = (safe_lshift_func_uint8_t_u_u((p_12 >= (l_147 && l_147)), 4));
        }
        else
        { 
            int16_t l_158 = 0xEBC8L;
            l_161 = (g_160[4] = ((l_159 = (safe_unary_minus_func_uint8_t_u(((((((safe_mul_func_int16_t_s_s(((((l_138 = (safe_rshift_func_int8_t_s_s((((((g_5[0][1][1] & g_27.f0) < (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x9CL, 6)), g_90))) != g_55) != g_5[0][1][0]) < 0x8C764DEBD41BC699LL), l_44.f0))) < 0xDC07D217L) < g_55) && p_10), l_133)) , g_80) | l_158) != l_158) <= g_124[2][0]) || 0xFBL)))) || 0x2BL));
            if (p_11)
                goto lbl_174;
            for (g_55 = 0; (g_55 <= 2); g_55 += 1)
            { 
                return g_132;
            }
            p_10 = (safe_div_func_int32_t_s_s(((p_10 > ((((((safe_sub_func_int16_t_s_s((g_166 = 0x4679L), (((safe_sub_func_uint32_t_u_u((((p_12 > ((safe_mul_func_uint16_t_u_u((g_90 = ((safe_mod_func_int32_t_s_s(0xD2BE7945L, 1L)) || l_138)), g_160[4])) > g_80)) ^ 0x4A8CL) | l_173), 0UL)) > g_40) <= g_124[0][0]))) == p_11) < l_159) ^ 0UL) || g_54) < 0x3D26L)) >= l_133), l_133));
        }
        l_175[3][1] &= p_10;
    }
    return g_132;
}



static int32_t  func_30(int8_t  p_31, int16_t  p_32, union U1  p_33, uint32_t  p_34, int64_t  p_35)
{ 
    const uint8_t l_53 = 255UL;
    g_54 = (safe_mod_func_int8_t_s_s((((safe_div_func_uint32_t_u_u(((!(0xD2985DA4L != p_32)) | ((safe_mul_func_int16_t_s_s(l_53, p_35)) && g_2)), 0x162BCA91L)) , g_2) == g_27.f2), l_53));
    return g_40;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_41[i][j][k], "g_41[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_124[i][j], "g_124[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_176.f3, "g_176.f3", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f2, "g_198.f2", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
