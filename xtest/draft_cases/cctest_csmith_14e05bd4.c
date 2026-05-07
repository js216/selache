// SPDX-License-Identifier: MIT
// cctest_csmith_14e05bd4.c --- cctest case csmith_14e05bd4 (csmith seed 350247892)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x92f959d */

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

// Options:   -s 350247892 -o /tmp/csmith_gen_47dsoo3z/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   const signed f2 : 16;
};

union U1 {
   uint32_t  f0;
   int8_t * f1;
};


static int32_t g_2 = 1L;
static int32_t g_22 = 3L;
static int32_t g_25 = 0x2F3A6825L;
static uint8_t g_26 = 0xBEL;
static int8_t g_31 = 1L;
static int8_t *g_58 = (void*)0;
static int8_t **g_57 = &g_58;
static int8_t ***g_56 = &g_57;
static int8_t ****g_55 = &g_56;
static int16_t g_97 = 0xA361L;
static int64_t g_99 = 0x740609845791C840LL;
static uint32_t g_116 = 0xC9B672C6L;
static int8_t g_123 = 0L;
static uint64_t g_126 = 0x85608B997ADCAF14LL;
static int16_t g_144 = 0x7094L;
static int32_t **g_167 = (void*)0;
static int32_t *g_173 = &g_2;
static int32_t **g_172 = &g_173;
static uint64_t g_174 = 0UL;
static struct S0 g_191 = {8UL,-7L,63};
static uint32_t g_198 = 0x19993031L;
static uint8_t g_208 = 0xA0L;
static uint32_t g_244 = 18446744073709551612UL;
static int64_t g_281 = 0x3267F2E3D422F2D6LL;
static uint32_t g_282 = 0x9371184BL;
static uint32_t *g_288 = &g_191.f0;
static uint32_t **g_287 = &g_288;
static int32_t g_309 = 1L;
static uint16_t g_320[1] = {0UL};
static uint16_t *g_319 = &g_320[0];
static int32_t g_323 = (-1L);
static int32_t g_328 = 0L;
static uint8_t g_333 = 0xE0L;
static const uint32_t g_341[1][6] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,18446744073709551615UL,18446744073709551609UL}};
static int32_t g_348 = 0x8260FE3EL;
static uint8_t g_349[5][2][7] = {{{0x92L,0UL,0UL,0x92L,0xABL,0x92L,0UL},{0xA9L,0xA9L,8UL,0UL,8UL,0xA9L,0xA9L}},{{1UL,0UL,0x1DL,0UL,1UL,1UL,0UL},{254UL,0UL,254UL,8UL,8UL,254UL,0UL}},{{0UL,0xABL,0x1DL,0x1DL,0xABL,0UL,0xABL},{254UL,8UL,8UL,254UL,0xA9L,0UL,254UL}},{{0UL,0UL,0x92L,0xABL,0x92L,0UL,0UL},{8UL,254UL,0UL,254UL,8UL,8UL,254UL}},{{0x1DL,1UL,0x1DL,0x92L,0x92L,0x1DL,1UL},{254UL,0xA9L,0UL,0UL,0xA9L,254UL,0xA9L}}};
static int32_t g_369 = 0xB987F491L;
static uint32_t g_382 = 0x7F9D6CCCL;
static uint32_t g_435 = 0xCD26A33DL;
static int32_t g_471 = (-1L);
static int8_t g_472 = 0xDEL;
static int32_t g_473[7][3][4] = {{{(-1L),0xF2D00B81L,0xF2D00B81L,(-1L)},{0xF2D00B81L,(-1L),(-1L),(-1L)},{0xFCB97E76L,0x8DBBC1B4L,(-1L),0xC25593DAL}},{{(-1L),(-1L),0L,0xC25593DAL},{(-1L),0x8DBBC1B4L,(-4L),(-1L)},{(-1L),(-1L),0x9271E52DL,(-1L)}},{{0x8DBBC1B4L,0xF2D00B81L,0L,0x2D6AC200L},{(-8L),0xFCB97E76L,0xF2D00B81L,(-8L)},{0xFCB97E76L,(-1L),0x7AC692A0L,(-1L)}},{{0xFCB97E76L,(-1L),0xF2D00B81L,0xC25593DAL},{(-8L),(-1L),0L,0L},{0x8DBBC1B4L,0x8DBBC1B4L,0x9271E52DL,(-1L)}},{{(-1L),(-8L),(-4L),(-1L)},{(-1L),0xFCB97E76L,0L,(-4L)},{(-1L),0xFCB97E76L,(-1L),(-1L)}},{{0xFCB97E76L,(-8L),(-1L),(-1L)},{0xF2D00B81L,0x8DBBC1B4L,0xF2D00B81L,0L},{(-1L),(-1L),0x61919647L,0xC25593DAL}},{{0x8DBBC1B4L,(-1L),(-4L),(-1L)},{(-1L),(-1L),(-4L),(-8L)},{0x8DBBC1B4L,0xFCB97E76L,0x61919647L,0x2D6AC200L}}};
static int8_t ** const **g_492 = (void*)0;
static union U1 g_498[1][2][4] = {{{{0x2E8BFC4DL},{0x19572002L},{0x2E8BFC4DL},{0x19572002L}},{{0x2E8BFC4DL},{0x19572002L},{0x2E8BFC4DL},{0x19572002L}}}};
static const int8_t **g_536 = (void*)0;
static const int8_t ***g_535[2][2][4] = {{{&g_536,&g_536,&g_536,&g_536},{&g_536,&g_536,&g_536,&g_536}},{{&g_536,&g_536,&g_536,&g_536},{&g_536,&g_536,&g_536,&g_536}}};
static uint32_t g_578 = 18446744073709551608UL;
static uint8_t *g_599 = &g_208;
static uint8_t **g_598 = &g_599;
static uint8_t ***g_597 = &g_598;
static uint32_t **g_660 = (void*)0;
static int32_t g_714 = (-1L);
static uint16_t g_746 = 1UL;
static struct S0 g_817 = {0xE39B994BL,-3L,109};
static struct S0 *g_816 = &g_817;
static int32_t ** const *g_826 = (void*)0;
static int32_t ** const **g_825 = &g_826;
static uint32_t ***g_877 = (void*)0;
static uint32_t ****g_876 = &g_877;
static int32_t g_887 = 0x9705E85DL;
static struct S0 g_911 = {0xD76B54AEL,-7L,-49};
static union U1 *g_969 = &g_498[0][0][2];
static int64_t * const **g_976 = (void*)0;
static uint8_t g_1125 = 0x4FL;
static uint32_t g_1158[4][7] = {{0xC320445FL,0UL,0UL,0xC320445FL,0UL,0UL,0xC320445FL},{0UL,0xC320445FL,0UL,0UL,0xC320445FL,0UL,0UL},{0xC320445FL,0xC320445FL,0x340E1E7EL,0xC320445FL,0xC320445FL,0x340E1E7EL,0xC320445FL},{0xC320445FL,0UL,0UL,0xC320445FL,0UL,0UL,0xC320445FL}};
static uint8_t g_1188 = 0x98L;
static int64_t ***g_1200 = (void*)0;
static const uint32_t *g_1350 = &g_911.f0;
static const uint32_t **g_1349 = &g_1350;
static const uint32_t ***g_1348 = &g_1349;
static uint32_t g_1366 = 0xF29526E8L;
static struct S0 **g_1440 = &g_816;
static uint32_t g_1685 = 0xB187E577L;
static uint32_t ***g_1694 = (void*)0;
static const int64_t g_1888 = 0x013735C4F3EED1E9LL;
static struct S0 g_1912 = {4294967293UL,-8L,-59};
static struct S0 g_1917 = {0x55C66A4CL,0x18L,-252};
static int64_t * const ***g_1919[4] = {&g_976,&g_976,&g_976,&g_976};
static int64_t * const *** const *g_1918[6] = {&g_1919[3],&g_1919[3],&g_1919[3],&g_1919[3],&g_1919[3],&g_1919[3]};
static int32_t g_1951 = 0xDD907F24L;
static struct S0 ***g_1957 = &g_1440;
static int32_t ***g_1975 = &g_172;
static int32_t ****g_1974 = &g_1975;
static int32_t *****g_1973[6][1][4] = {{{&g_1974,&g_1974,&g_1974,&g_1974}},{{&g_1974,&g_1974,&g_1974,&g_1974}},{{&g_1974,&g_1974,&g_1974,&g_1974}},{{&g_1974,&g_1974,&g_1974,&g_1974}},{{&g_1974,&g_1974,&g_1974,&g_1974}},{{&g_1974,&g_1974,&g_1974,&g_1974}}};
static struct S0 **g_2033[6] = {&g_816,&g_816,&g_816,&g_816,&g_816,&g_816};
static struct S0 ***g_2032[4] = {&g_2033[3],&g_2033[3],&g_2033[3],&g_2033[3]};
static int64_t ****g_2167 = (void*)0;
static uint16_t **g_2312 = &g_319;
static uint16_t ***g_2311[5] = {&g_2312,&g_2312,&g_2312,&g_2312,&g_2312};
static uint64_t g_2395 = 1UL;
static uint16_t g_2429 = 2UL;
static uint16_t g_2521 = 0UL;
static int32_t *g_2523 = &g_309;
static int32_t **g_2522 = &g_2523;
static const int64_t g_2548 = (-1L);
static const int64_t *g_2547 = &g_2548;
static uint32_t g_2556 = 0x20B0F366L;
static uint16_t g_2577 = 0xBC0DL;
static int16_t **g_2633 = (void*)0;
static uint16_t g_2652 = 0x9DA2L;
static int32_t g_2679 = 0x58F3143BL;
static int32_t g_2687 = 3L;
static uint32_t ** const *g_2760 = &g_660;
static uint32_t ** const **g_2759[5][2] = {{&g_2760,&g_2760},{(void*)0,(void*)0},{(void*)0,&g_2760},{&g_2760,(void*)0},{&g_2760,(void*)0}};
static uint32_t ** const ***g_2758 = &g_2759[1][1];
static uint8_t g_2798 = 0UL;



static int32_t  func_1(void);
static int64_t  func_6(int32_t  p_7, uint32_t  p_8, const int8_t * p_9, int8_t * p_10, uint16_t  p_11);
static const int8_t * func_13(struct S0  p_14, struct S0  p_15, int32_t  p_16, struct S0  p_17);
static struct S0  func_18(int32_t  p_19, int16_t  p_20);
static uint32_t  func_51(const int32_t  p_52);
static const int8_t *** func_62(int16_t  p_63, int8_t ** const ** p_64, const uint64_t  p_65, uint8_t  p_66, int32_t  p_67);
static uint16_t  func_68(int32_t ** p_69, int32_t  p_70, uint8_t  p_71);
static int8_t **** const * func_73(uint32_t  p_74, int32_t ** p_75, uint32_t  p_76, int8_t ** const *** const  p_77);




static int32_t  func_1(void)
{ 
    uint32_t l_12[3][7][6] = {{{0x5BEFA1E1L,18446744073709551611UL,0x25681085L,0x1D14CD49L,1UL,0x7B5CF1C9L},{0x5123020FL,0x7B5CF1C9L,0x943C6FE2L,0x5BEFA1E1L,0x8FC5674FL,1UL},{0x6B43D271L,0x549C4B05L,0x8FC5674FL,6UL,1UL,1UL},{0x10466712L,0x943C6FE2L,0x943C6FE2L,0x10466712L,0x27FA3DFAL,0x7B5CF1C9L},{0UL,18446744073709551615UL,0x25681085L,7UL,18446744073709551611UL,0x8FC5674FL},{1UL,0xE91C8413L,0x5DD253D9L,1UL,18446744073709551611UL,0x549C4B05L},{0xAAED6B65L,18446744073709551615UL,0x1BA6B42BL,0xA266D210L,0x27FA3DFAL,0xE91C8413L}},{{6UL,0x943C6FE2L,1UL,0x197E7C14L,1UL,0x27FA3DFAL},{7UL,0x549C4B05L,0x551FA4C8L,0x197E7C14L,0x8FC5674FL,0x551FA4C8L},{6UL,0x7B5CF1C9L,18446744073709551615UL,0xA266D210L,1UL,0x1BA6B42BL},{0xAAED6B65L,18446744073709551611UL,0x7B5CF1C9L,1UL,0x943C6FE2L,18446744073709551615UL},{1UL,0x1BA6B42BL,0x7B5CF1C9L,7UL,0x7B5CF1C9L,0x1BA6B42BL},{0UL,0x844A7543L,18446744073709551615UL,0x10466712L,0xD7F19125L,0x551FA4C8L},{0x10466712L,0xD7F19125L,0x551FA4C8L,6UL,0x5DD253D9L,0x27FA3DFAL}},{{0x6B43D271L,0xD7F19125L,1UL,0x5BEFA1E1L,0xD7F19125L,0xE91C8413L},{0x5123020FL,0x844A7543L,0x1BA6B42BL,0x1D14CD49L,0x7B5CF1C9L,0x549C4B05L},{0x5BEFA1E1L,0x1BA6B42BL,0x5DD253D9L,1UL,0x943C6FE2L,0x8FC5674FL},{0x5BEFA1E1L,18446744073709551611UL,0x25681085L,0x1D14CD49L,1UL,0x7B5CF1C9L},{0x5123020FL,0x7B5CF1C9L,0x943C6FE2L,0x5BEFA1E1L,0x8FC5674FL,1UL},{0x6B43D271L,0x549C4B05L,0x8FC5674FL,6UL,1UL,1UL},{0x10466712L,0x943C6FE2L,0x943C6FE2L,0x10466712L,0x27FA3DFAL,0x7B5CF1C9L}}};
    struct S0 ***l_2034[2];
    struct S0 l_2035 = {0xA6B4F977L,0x01L,141};
    int32_t l_2459[2][2];
    int32_t l_2488[6];
    int32_t l_2489[6] = {0L,0xE63A5A82L,0xE63A5A82L,0L,0xE63A5A82L,0xE63A5A82L};
    int16_t l_2490[1];
    int32_t l_2515 = (-3L);
    int8_t l_2540 = 0x7DL;
    const union U1 *l_2565 = &g_498[0][0][2];
    uint32_t l_2580 = 5UL;
    uint8_t *l_2596 = &g_333;
    uint32_t *l_2606 = &l_2580;
    uint32_t **l_2605 = &l_2606;
    int16_t *l_2609 = &l_2490[0];
    uint8_t l_2627 = 255UL;
    int16_t **l_2632 = &l_2609;
    int32_t l_2641 = 0L;
    uint16_t l_2709 = 1UL;
    int8_t **l_2723 = &g_58;
    uint64_t l_2811[2][1];
    int8_t ****l_2815 = &g_56;
    uint64_t l_2817 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2034[i] = &g_2033[4];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_2459[i][j] = 1L;
    }
    for (i = 0; i < 6; i++)
        l_2488[i] = 0xEFA946BEL;
    for (i = 0; i < 1; i++)
        l_2490[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_2811[i][j] = 0UL;
    }
lbl_2545:
    for (g_2 = (-3); (g_2 == (-14)); --g_2)
    { 
        uint32_t l_5 = 2UL;
        return l_5;
    }
    l_2459[1][0] = (func_6(l_12[1][6][0], g_2, func_13(func_18(g_2, g_2), (*g_816), ((g_2032[3] = &g_1440) == l_2034[0]), l_2035), (***g_55), (*g_319)) >= l_2035.f0);
    for (g_817.f1 = 4; (g_817.f1 >= 0); g_817.f1 -= 1)
    { 
        uint8_t l_2487 = 0x22L;
        int32_t *l_2493 = &g_2;
        uint8_t l_2539 = 1UL;
        int32_t **l_2541 = &g_2523;
        int32_t l_2544 = 1L;
        const int64_t *l_2546 = &g_1888;
        uint32_t l_2574 = 0x26DBB96DL;
        uint64_t l_2601 = 0x7D1A38AD7B590166LL;
        uint32_t **l_2607 = &l_2606;
        int16_t *l_2608 = &l_2490[0];
        uint32_t *****l_2682 = (void*)0;
        int32_t l_2708[1][5][7] = {{{(-1L),1L,1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L),1L,1L},{(-1L),(-1L),(-6L),(-1L),(-1L),(-6L),(-1L)},{(-1L),1L,(-6L),1L,(-6L),(-6L),1L},{(-6L),1L,(-6L),(-6L),1L,(-6L),(-6L)}}};
        int8_t l_2742 = 0x5DL;
        int32_t l_2744 = 0x9525CCEAL;
        int64_t * const l_2750 = (void*)0;
        int64_t * const * const l_2749 = &l_2750;
        int64_t * const * const *l_2748 = &l_2749;
        int64_t * const * const * const *l_2747 = &l_2748;
        int64_t *l_2771 = &g_281;
        int8_t ****l_2814 = &g_56;
        int32_t l_2816 = 0x72006485L;
        int i, j, k;
        if ((!(*g_599)))
        { 
            int8_t l_2461 = 0x44L;
            return l_2461;
        }
        else
        { 
            int32_t l_2468 = (-1L);
            union U1 **l_2477 = &g_969;
            union U1 * const *l_2478 = &g_969;
            uint32_t *l_2485 = (void*)0;
            uint32_t **l_2484 = &l_2485;
            int16_t *l_2486 = &g_144;
            int16_t l_2491 = 0x38A6L;
            int32_t *l_2492 = &g_2;
            int32_t *l_2502 = &g_309;
            uint16_t l_2509[1];
            int64_t *l_2510 = &g_281;
            uint32_t *****l_2511 = &g_876;
            int32_t l_2576 = (-1L);
            uint8_t l_2587[5][4][6] = {{{1UL,0x0BL,0xF3L,0UL,0xE6L,251UL},{1UL,255UL,0x74L,0UL,0xF5L,0xEAL},{1UL,0x25L,0x0BL,0xEAL,0x8BL,0xF3L},{0UL,0UL,0x85L,0x0BL,0x5EL,0x5EL}},{{0xEDL,0x8BL,0x8BL,0xEDL,255UL,0x15L},{0x91L,0xEAL,0xE6L,0x85L,0xBDL,1UL},{0xC8L,0UL,0xEDL,0x5EL,0xBDL,0x74L},{255UL,0xEAL,1UL,0UL,255UL,0x25L}},{{0x97L,0x8BL,0x25L,0x74L,0x5EL,0UL},{0x8BL,0UL,251UL,0UL,0x8BL,0UL},{251UL,0x25L,0x91L,0xC8L,0xF5L,0x8BL},{0UL,255UL,0xE7L,0x25L,0xE6L,0x8BL}},{{0UL,0x0BL,0x91L,255UL,1UL,0UL},{0xE6L,0x91L,251UL,0UL,0xE7L,0UL},{0x25L,1UL,0x25L,0x25L,1UL,0x25L},{0xF5L,0x85L,1UL,0xBDL,0x97L,0x74L}},{{0UL,255UL,0xEDL,0xE6L,0UL,1UL},{0UL,255UL,0xE6L,0xBDL,0UL,0x15L},{0xF5L,0x97L,0x8BL,0x25L,0x74L,0x5EL},{0x25L,0xF3L,0x85L,0UL,0x85L,0xF3L}}};
            struct S0 l_2600 = {0x99B58ECEL,0L,81};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2509[i] = 0x9EADL;
            (*l_2492) ^= (safe_lshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s(((((~(+((l_2468 <= (safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((0L ^ (((-8L) || (((l_2477 != l_2478) != (65535UL < ((*l_2486) &= (+(safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_2484 != &l_2485), l_12[0][4][3])), (**g_2312))))))) <= l_2459[1][0])) >= l_12[1][6][0])), l_2487)) == l_2468), l_2488[5])), 0xFA04L)) >= l_2468), l_2489[5]))) | l_2490[0]))) , (**g_287)) , (-8L)) >= l_2468), 0xE3C6776956AB1F92LL)) == l_2491), l_2491));
            (***g_1974) = l_2493;
            if ((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((0x6ADE5EEB5FE39AFELL ^ g_191.f1), ((safe_lshift_func_uint8_t_u_u(((*l_2493) ^ ((((*l_2502) = 0x09415241L) , ((((*l_2510) = ((((***g_1957) , (0x9384L != ((*l_2486) = ((((safe_mul_func_uint16_t_u_u((++(**g_2312)), (safe_add_func_int64_t_s_s((*l_2493), (*l_2492))))) == 0x0A4095B0L) , l_2509[0]) != 7UL)))) || (*l_2493)) ^ (**g_598))) , l_2511) == (void*)0)) , g_746)), 5)) , l_12[1][6][0]))), l_2488[1])), (**g_598))))
            { 
                uint64_t l_2520 = 0xDF3B22FB4B435368LL;
                int32_t *l_2526 = &g_328;
                int32_t *l_2542 = (void*)0;
                int32_t *l_2543[7] = {&g_473[0][2][1],&g_473[0][2][1],&g_473[0][2][1],&g_473[0][2][1],&g_473[0][2][1],&g_473[0][2][1],&g_473[0][2][1]};
                int i;
                if ((*l_2492))
                    break;
                g_2521 = (((safe_div_func_uint64_t_u_u(((!(((*l_2486) = (l_2515 < l_2489[1])) || l_2035.f0)) <= (((safe_mod_func_int32_t_s_s(0xA7608CF7L, (safe_unary_minus_func_int64_t_s((((safe_unary_minus_func_uint64_t_u((*l_2493))) > ((****g_1974) && (*l_2492))) >= (**g_2312)))))) ^ l_2520) , l_2520)), 0x8E0C94E75B4A2C19LL)) , (-8L)) < 0x169412E1L);
                l_2515 &= (l_2489[5] &= ((**g_172) = (****g_1974)));
                l_2544 |= ((g_2522 != ((safe_lshift_func_int16_t_s_u((l_2526 == l_2493), (safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s(((*l_2486) ^= g_887), (0x98C9L != ((***g_1957) , (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(0x0B6CL, 0x5C69L)), l_12[1][6][0])))))) == 1L) , 0x56EDL), (**g_2312))) ^ l_2520) < 247UL) & l_2539), (*l_2492))) & l_2540), (**g_2312))))) , l_2541)) , (*l_2492));
                if (g_817.f0)
                    goto lbl_2545;
            }
            else
            { 
                uint32_t l_2555 = 0x58CD202AL;
                union U1 *l_2566 = &g_498[0][0][2];
                int32_t l_2604 = 0xBA4BA9E7L;
                (*l_2493) = ((g_2547 = l_2546) == (void*)0);
                (****g_1974) = (safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_u(9UL, (*l_2493))) || (safe_sub_func_uint32_t_u_u(((*g_319) <= ((*l_2493) , l_2555)), (l_2555 , (*l_2492))))) >= g_126) <= g_2556) | 0xF468E7BBL), (*l_2493)));
                if (((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((l_2565 == l_2566) > (**g_2312)), ((!(safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_2493) , ((g_2395 = g_22) != l_2489[4])), 12)), (safe_add_func_uint32_t_u_u((*l_2493), (*g_173)))))) & (*l_2492)))), l_2555)), 0x13E5L)), l_2574)) == (**g_2312)))
                { 
                    int32_t *l_2575[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2575[i] = &g_369;
                    ++g_2577;
                    ++l_2580;
                }
                else
                { 
                    uint8_t *l_2590 = &l_2539;
                    int32_t l_2599[5][7][2] = {{{0x9F7FAE0CL,6L},{0L,(-10L)},{0xBD28A218L,0xE18E6F96L},{1L,0xBD28A218L},{(-1L),0x684085EFL},{(-1L),0xBD28A218L},{1L,0xE18E6F96L}},{{0xBD28A218L,(-10L)},{0L,6L},{0x9F7FAE0CL,4L},{4L,0x7B34174AL},{4L,0x9F7FAE0CL},{0x684085EFL,0xE9069002L},{6L,0xE9069002L}},{{0x684085EFL,0x9F7FAE0CL},{4L,0x7B34174AL},{4L,4L},{0x9F7FAE0CL,6L},{0L,(-10L)},{0xBD28A218L,0xE18E6F96L},{1L,0xBD28A218L}},{{(-1L),0x684085EFL},{(-1L),0xBD28A218L},{1L,0xE18E6F96L},{0xBD28A218L,(-10L)},{0L,6L},{0x7B34174AL,(-1L)},{(-1L),(-1L)}},{{0L,0x7B34174AL},{0xE18E6F96L,0x684085EFL},{4L,0x684085EFL},{0xE18E6F96L,0x7B34174AL},{0L,(-1L)},{(-1L),(-1L)},{0x7B34174AL,4L}}};
                    int16_t **l_2603 = &l_2486;
                    int i, j, k;
                    l_2489[1] = ((*g_599) < ((safe_mod_func_int16_t_s_s(((*l_2486) |= ((*l_2492) ^= (safe_mul_func_uint8_t_u_u((((*l_2590) = (++l_2587[0][1][5])) , (~(safe_add_func_uint64_t_u_u(0x1C17854C3EBE1552LL, 0xCBADBEFC7127B1AALL)))), 0x5CL)))), ((safe_lshift_func_uint16_t_u_u((((void*)0 != l_2596) ^ (safe_mul_func_uint16_t_u_u((((l_2035.f1 | l_2599[2][5][0]) , 0xDFC7A8F6L) | l_2555), 0x9233L))), 9)) , 65527UL))) , l_2555));
                    if ((***g_1975))
                        continue;
                    l_2604 |= ((((l_2600 , ((**g_2312) |= (*l_2493))) ^ (*l_2493)) < 248UL) ^ ((l_2489[5] = l_2601) > (safe_unary_minus_func_uint16_t_u((((((((*l_2603) = &g_144) == &g_144) == (*l_2493)) ^ 1UL) ^ 0x54C1C085588CB35BLL) == 247UL)))));
                    (*g_1440) = (*g_1440);
                }
            }
        }
        (****g_1974) = (((l_2605 == l_2607) & ((((l_2608 == (l_2609 = &g_144)) , ((safe_mul_func_uint8_t_u_u((((*g_288) ^= 8UL) , (safe_mod_func_int16_t_s_s(((1L ^ (l_2489[5] |= ((((*l_2493) || g_2521) != 0xF258L) > (***g_1348)))) | 4UL), (*l_2493)))), (-1L))) < 0x14FD429592AE175ALL)) , (*l_2493)) > l_2580)) ^ g_472);
        (*l_2493) = (*l_2493);
    }
    (**g_1975) = &l_2459[0][0];
    return l_2817;
}



static int64_t  func_6(int32_t  p_7, uint32_t  p_8, const int8_t * p_9, int8_t * p_10, uint16_t  p_11)
{ 
    uint8_t l_2246 = 253UL;
    int32_t l_2248 = 0x11242814L;
    int32_t l_2264 = 0xE624F59EL;
    uint32_t l_2265[2][5][6] = {{{0x2CFD323BL,18446744073709551608UL,0UL,0UL,0xCE64A84EL,18446744073709551610UL},{0UL,2UL,0xA71DCC1EL,18446744073709551610UL,0xCE64A84EL,18446744073709551610UL},{0x0751DC5CL,18446744073709551608UL,0x0751DC5CL,0x17FC0273L,0x278513ECL,2UL},{0x80E41C5CL,0x75B3AEA5L,0x0C201172L,18446744073709551610UL,0x2CFD323BL,0x278513ECL},{0UL,18446744073709551610UL,0x17FC0273L,18446744073709551610UL,18446744073709551610UL,0x17FC0273L}},{{0x80E41C5CL,0x80E41C5CL,18446744073709551608UL,0x17FC0273L,0x0C201172L,0x0751DC5CL},{0x0751DC5CL,0xCE64A84EL,0x80E41C5CL,18446744073709551610UL,0x75B3AEA5L,18446744073709551608UL},{0UL,0x0751DC5CL,0x80E41C5CL,0UL,0x80E41C5CL,0x0751DC5CL},{0x2CFD323BL,0UL,18446744073709551608UL,18446744073709551615UL,0UL,0x17FC0273L},{18446744073709551615UL,0UL,0x17FC0273L,0x80E41C5CL,0xA71DCC1EL,0x278513ECL}}};
    const uint16_t *l_2315 = &g_746;
    const uint16_t **l_2314 = &l_2315;
    const uint16_t ***l_2313 = &l_2314;
    int32_t l_2330 = 0L;
    int32_t *l_2373[7];
    int64_t l_2374 = (-1L);
    uint64_t l_2375[7][5][5] = {{{18446744073709551615UL,1UL,0xF714E5B668D7DEA5LL,0x1551E79BD9E26E4CLL,0xF714E5B668D7DEA5LL},{0x875564B44DAB52E7LL,0x875564B44DAB52E7LL,2UL,18446744073709551615UL,6UL},{18446744073709551610UL,0x88EF684507F07E13LL,8UL,18446744073709551608UL,0x1551E79BD9E26E4CLL},{0UL,0x916CB77DDE24FF92LL,0x832247626A4CDEDBLL,0x2A3E7A2303A59415LL,0xDF0AA3CEF58E9781LL},{1UL,0x88EF684507F07E13LL,0UL,18446744073709551615UL,0xC3DF8920FC640A3CLL}},{{0x69C09018F59A74F1LL,0x875564B44DAB52E7LL,0x2A3E7A2303A59415LL,0x875564B44DAB52E7LL,0x69C09018F59A74F1LL},{0x828D6180B83A1261LL,1UL,0x74079476345F565DLL,18446744073709551610UL,0x55CCA2C640494299LL},{0x457781E9432F8BB4LL,6UL,0xED30AE06B031C517LL,0UL,0x2A3E7A2303A59415LL},{0x74079476345F565DLL,0xFFEC538EC41FD5BALL,18446744073709551606UL,1UL,0x55CCA2C640494299LL},{0xDF0AA3CEF58E9781LL,0UL,0x457781E9432F8BB4LL,0x69C09018F59A74F1LL,0x69C09018F59A74F1LL}},{{0x55CCA2C640494299LL,0UL,0x55CCA2C640494299LL,0x828D6180B83A1261LL,0xC3DF8920FC640A3CLL},{0x257D5B6FE1F4FCDALL,0xBBC1545999692173LL,0x7E5862AD1C5F8524LL,0x457781E9432F8BB4LL,0xDF0AA3CEF58E9781LL},{0UL,0xC3DF8920FC640A3CLL,0xDEEB786DB93B551ELL,0x74079476345F565DLL,0x1551E79BD9E26E4CLL},{1UL,0UL,0x7E5862AD1C5F8524LL,0xDF0AA3CEF58E9781LL,6UL},{0UL,0xF714E5B668D7DEA5LL,0x55CCA2C640494299LL,0x55CCA2C640494299LL,0xF714E5B668D7DEA5LL}},{{1UL,2UL,0x457781E9432F8BB4LL,0x257D5B6FE1F4FCDALL,0UL},{0xFFEC538EC41FD5BALL,8UL,18446744073709551606UL,0UL,0UL},{0x7E5862AD1C5F8524LL,0x832247626A4CDEDBLL,0xED30AE06B031C517LL,1UL,1UL},{0xFFEC538EC41FD5BALL,0UL,0x74079476345F565DLL,0UL,1UL},{1UL,0x2A3E7A2303A59415LL,0x2A3E7A2303A59415LL,1UL,0x457781E9432F8BB4LL}},{{0UL,0x74079476345F565DLL,0UL,0xFFEC538EC41FD5BALL,0x8F642064B8E36084LL},{1UL,0xED30AE06B031C517LL,0x832247626A4CDEDBLL,0x7E5862AD1C5F8524LL,18446744073709551609UL},{0UL,18446744073709551606UL,8UL,18446744073709551610UL,0UL},{0UL,0x2A3E7A2303A59415LL,0x916CB77DDE24FF92LL,0x0AA5089E7857B18ALL,0x916CB77DDE24FF92LL},{1UL,1UL,0xDEEB786DB93B551ELL,0x55CCA2C640494299LL,0UL}},{{0UL,0xBBC1545999692173LL,0xED30AE06B031C517LL,1UL,0x0AA5089E7857B18ALL},{0x828D6180B83A1261LL,18446744073709551608UL,0xF714E5B668D7DEA5LL,0xD34AA20DA8EDB714LL,0x74079476345F565DLL},{0x2A3E7A2303A59415LL,0xBBC1545999692173LL,0x832247626A4CDEDBLL,0UL,2UL},{0x88EF684507F07E13LL,1UL,0xD34AA20DA8EDB714LL,1UL,0x88EF684507F07E13LL},{0x7E5862AD1C5F8524LL,0x2A3E7A2303A59415LL,0x69C09018F59A74F1LL,0UL,0UL}},{{0UL,0UL,18446744073709551610UL,0x828D6180B83A1261LL,0xD34AA20DA8EDB714LL},{0x69C09018F59A74F1LL,0xDF0AA3CEF58E9781LL,18446744073709551615UL,0x2A3E7A2303A59415LL,0UL},{0x74079476345F565DLL,0x828D6180B83A1261LL,0UL,0x88EF684507F07E13LL,0x88EF684507F07E13LL},{0UL,4UL,0UL,0x7E5862AD1C5F8524LL,2UL},{8UL,0xC3DF8920FC640A3CLL,0UL,0UL,0x74079476345F565DLL}}};
    uint32_t *****l_2380 = (void*)0;
    int64_t *l_2381 = &l_2374;
    uint16_t ***l_2394 = &g_2312;
    const int64_t l_2396 = 0x601BF3F3A7C88705LL;
    uint16_t l_2404 = 1UL;
    const int32_t *l_2414 = &l_2248;
    const int32_t **l_2413[7] = {&l_2414,&l_2414,&l_2414,&l_2414,&l_2414,&l_2414,&l_2414};
    const int32_t *** const l_2412 = &l_2413[6];
    const int32_t *** const *l_2411 = &l_2412;
    const int32_t *** const **l_2410 = &l_2411;
    struct S0 **l_2439 = &g_816;
    struct S0 **l_2440 = &g_816;
    int64_t ****l_2457 = &g_1200;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2373[i] = &g_1951;
    for (g_1912.f0 = 0; (g_1912.f0 >= 50); g_1912.f0 = safe_add_func_uint16_t_u_u(g_1912.f0, 2))
    { 
        uint32_t l_2245 = 1UL;
        int32_t l_2263[1];
        int32_t *l_2317 = &g_323;
        int i;
        for (i = 0; i < 1; i++)
            l_2263[i] = 0L;
        for (g_333 = 0; (g_333 >= 17); g_333 = safe_add_func_int32_t_s_s(g_333, 9))
        { 
            int8_t l_2247 = 2L;
            int32_t * const *l_2288 = &g_173;
            const uint16_t ***l_2316[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_2316[i][j] = &l_2314;
            }
            if (((((safe_sub_func_uint16_t_u_u(65535UL, (g_817.f2 || ((~((safe_rshift_func_uint16_t_u_u(p_7, 10)) & p_8)) >= (safe_lshift_func_int16_t_s_s(((l_2245 | 0x99L) || (g_1888 == g_191.f0)), g_26)))))) & 0x4EL) | l_2246) > l_2247))
            { 
                uint16_t l_2249 = 0xBBC5L;
                l_2249 ^= ((l_2248 = l_2246) || l_2246);
                if (l_2248)
                    break;
            }
            else
            { 
                int16_t l_2258 = (-1L);
                int32_t l_2261 = 6L;
                int32_t l_2262[1][6][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
                int32_t **l_2268 = &g_173;
                struct S0 ** const l_2327 = (void*)0;
                struct S0 ** const *l_2326[4][5][7] = {{{&l_2327,&l_2327,&l_2327,(void*)0,&l_2327,(void*)0,&l_2327},{&l_2327,(void*)0,&l_2327,(void*)0,(void*)0,&l_2327,&l_2327},{&l_2327,(void*)0,&l_2327,(void*)0,&l_2327,&l_2327,(void*)0},{&l_2327,&l_2327,(void*)0,&l_2327,(void*)0,&l_2327,&l_2327},{&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,(void*)0,&l_2327}},{{&l_2327,&l_2327,(void*)0,(void*)0,&l_2327,&l_2327,&l_2327},{&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327},{&l_2327,(void*)0,&l_2327,&l_2327,&l_2327,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2327,(void*)0,(void*)0,&l_2327},{&l_2327,&l_2327,&l_2327,(void*)0,&l_2327,&l_2327,&l_2327}},{{(void*)0,&l_2327,(void*)0,(void*)0,(void*)0,&l_2327,&l_2327},{(void*)0,&l_2327,&l_2327,(void*)0,&l_2327,&l_2327,(void*)0},{&l_2327,&l_2327,&l_2327,(void*)0,&l_2327,(void*)0,&l_2327},{(void*)0,&l_2327,&l_2327,&l_2327,&l_2327,(void*)0,&l_2327},{&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327}},{{&l_2327,&l_2327,&l_2327,(void*)0,&l_2327,&l_2327,&l_2327},{(void*)0,(void*)0,&l_2327,&l_2327,&l_2327,(void*)0,&l_2327},{&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327},{&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,&l_2327,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_2327,&l_2327,&l_2327}}};
                struct S0 ** const **l_2325 = &l_2326[0][2][1];
                int32_t l_2332 = 0xBD81A0D7L;
                int16_t *l_2333 = &g_144;
                int16_t *l_2334 = (void*)0;
                int16_t *l_2335 = &l_2258;
                int i, j, k;
                for (g_1951 = 23; (g_1951 < (-13)); g_1951 = safe_sub_func_int32_t_s_s(g_1951, 8))
                { 
                    int32_t *l_2252 = (void*)0;
                    int32_t *l_2253 = (void*)0;
                    int32_t *l_2254 = &g_369;
                    int32_t *l_2255 = &g_714;
                    int32_t *l_2256 = (void*)0;
                    int32_t *l_2257 = &l_2248;
                    int32_t *l_2259 = &g_473[1][1][1];
                    int32_t *l_2260[7][3][7] = {{{&g_369,&g_22,(void*)0,&g_887,&g_22,&g_369,&g_22},{&l_2248,(void*)0,&g_2,&g_714,&g_369,&g_887,(void*)0},{&g_1951,(void*)0,(void*)0,(void*)0,&g_369,&g_1951,&g_1951}},{{&l_2248,&l_2248,&g_369,&l_2248,&l_2248,&l_2248,(void*)0},{&g_1951,&g_369,&g_714,&g_369,(void*)0,&g_714,&g_22},{&g_2,(void*)0,&g_2,&g_2,&g_2,(void*)0,&g_369}},{{&g_1951,&g_369,&g_369,&g_1951,&g_22,&g_473[6][1][2],&g_369},{&l_2248,&g_714,&g_2,&g_22,&g_2,&g_714,&l_2248},{&g_1951,&g_369,(void*)0,(void*)0,(void*)0,&g_1951,(void*)0}},{{&l_2248,(void*)0,(void*)0,&l_2248,(void*)0,&g_22,&g_2},{&g_369,&g_369,(void*)0,&g_887,&g_369,(void*)0,&g_22},{&g_2,&l_2248,&g_2,&g_887,&g_2,&g_887,&g_2}},{{(void*)0,(void*)0,&g_369,&g_887,&g_369,&g_22,(void*)0},{&l_2248,(void*)0,&g_2,&l_2248,&g_1951,&g_714,(void*)0},{&g_714,&g_22,&g_714,(void*)0,&g_369,&g_714,&g_369}},{{(void*)0,(void*)0,&g_369,&g_22,&g_2,&g_22,&g_2},{&g_1951,(void*)0,(void*)0,&g_1951,&g_369,&g_714,&g_369},{&g_1951,&g_714,&g_2,&g_2,(void*)0,&g_714,&g_1951}},{{(void*)0,&g_369,(void*)0,&g_369,(void*)0,&g_22,&g_369},{&l_2248,&g_369,&g_2,&l_2248,&g_2,&g_887,&g_2},{(void*)0,&g_22,(void*)0,(void*)0,&g_22,(void*)0,&g_369}}};
                    int16_t *l_2278 = (void*)0;
                    int16_t *l_2279 = &g_144;
                    int16_t l_2302 = 0xACADL;
                    int i, j, k;
                    (***g_1975) |= (-3L);
                    --l_2265[1][3][0];
                    (*l_2259) = ((l_2268 == ((safe_mod_func_uint32_t_u_u((***g_1348), (((safe_lshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((*l_2279) = (safe_unary_minus_func_int32_t_s(p_7))), ((safe_mul_func_uint16_t_u_u(0UL, (safe_sub_func_uint64_t_u_u(g_208, (-5L))))) , (safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((*g_319), g_116)) ^ l_2247) || 0x64L), 0))))), p_11)) < (-1L)) , p_11), g_1685)) || (-4L)) | (*g_319)))) , l_2288)) <= (*l_2257));
                    (****g_1974) = (safe_rshift_func_uint16_t_u_s(((*g_319) = (*g_319)), ((safe_rshift_func_uint8_t_u_s((((*l_2279) = (**l_2268)) , (safe_sub_func_int32_t_s_s(((**l_2288) > (l_2263[0] |= p_11)), ((safe_unary_minus_func_uint64_t_u((safe_mod_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((((**g_287) = 0x29AAA905L) ^ 0xA9C7797DL), (safe_sub_func_int8_t_s_s(l_2246, (-1L))))) , (-2L)) && l_2302), p_8)))) , 7L)))), (**l_2288))) , p_8)));
                    (**l_2288) = (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((g_2311[2] == (l_2316[0][0] = l_2313)), (**g_598))) ^ (((l_2317 != l_2317) <= p_7) > (safe_unary_minus_func_uint16_t_u(0x7E3FL)))), 1)), (-10L))) != 0x498CDAE8B07A96D4LL), 2));
                }
                l_2262[0][2][0] ^= ((safe_mod_func_int16_t_s_s(((*l_2335) = ((*l_2333) = (((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((((((((((*l_2317) = g_382) , ((*l_2325) = (void*)0)) != (void*)0) , &g_492) != ((((safe_sub_func_int16_t_s_s((**l_2268), ((l_2330 ^ ((~p_7) <= l_2246)) , p_11))) & (-1L)) ^ l_2332) , (void*)0)) , p_7) | p_7) <= l_2264) < (-8L)), 0x13L)) >= 0x15633F61B9C541E8LL), 0x22ACC1C9L)) , g_1366) >= (**l_2268)))), (**g_2312))) & p_11);
            }
            (***g_1974) = &l_2248;
        }
        return p_8;
    }
    for (g_435 = 3; (g_435 > 38); g_435++)
    { 
        int8_t *** const **l_2366 = (void*)0;
        int32_t l_2371 = (-9L);
        for (g_2 = 0; (g_2 != 24); g_2 = safe_add_func_int16_t_s_s(g_2, 1))
        { 
            int8_t l_2369 = 0xC8L;
            for (g_471 = 0; (g_471 > (-3)); g_471 = safe_sub_func_uint64_t_u_u(g_471, 2))
            { 
                int16_t l_2344[7] = {(-3L),(-3L),(-5L),(-3L),(-3L),(-5L),(-3L)};
                int16_t *l_2370 = &g_144;
                int32_t *l_2372[5][1][6] = {{{&l_2371,&l_2371,(void*)0,&l_2371,(void*)0,&l_2371}},{{&g_2,&l_2371,&g_473[1][1][1],&g_473[1][1][1],&l_2371,&g_2}},{{(void*)0,&g_2,&g_473[1][1][1],&g_2,(void*)0,(void*)0}},{{&l_2371,&g_2,&g_2,&l_2371,&l_2371,&l_2371}},{{&l_2371,&l_2371,&l_2371,&g_2,&g_2,&l_2371}}};
                int i, j, k;
                l_2264 = (-1L);
                for (g_198 = (-5); (g_198 >= 3); g_198 = safe_add_func_uint64_t_u_u(g_198, 3))
                { 
                    if (l_2248)
                        break;
                }
                l_2344[4] = p_8;
                l_2264 = (((l_2246 && (((safe_div_func_int16_t_s_s(((*l_2370) ^= ((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s((g_817.f1 = ((safe_add_func_int64_t_s_s(5L, (safe_div_func_uint8_t_u_u(((*g_288) & (~l_2344[2])), ((***g_597)--))))) || ((l_2366 = l_2366) == &g_492))), (safe_div_func_int16_t_s_s(p_8, 65535UL)))) & l_2369), (-3L))), 0x12L)), g_281)) && p_11) > p_8), p_8)), 0x9E872DA7F7F3825BLL)) < (-8L))), l_2371)) & 0UL) , l_2369)) || p_8) , (-7L));
                return p_8;
            }
        }
    }
    --l_2375[2][4][3];
    return p_11;
}



static const int8_t * func_13(struct S0  p_14, struct S0  p_15, int32_t  p_16, struct S0  p_17)
{ 
    const int32_t l_2036 = 1L;
    int32_t *l_2037 = &g_714;
    int64_t *l_2038[1];
    int32_t l_2039 = 0x645D9AC5L;
    uint32_t l_2147 = 0x7307556AL;
    int8_t * const *l_2181 = (void*)0;
    int8_t * const ** const l_2180 = &l_2181;
    int8_t * const **l_2182 = &l_2181;
    union U1 *l_2190 = &g_498[0][0][2];
    int32_t l_2225[4];
    int i;
    for (i = 0; i < 1; i++)
        l_2038[i] = &g_99;
    for (i = 0; i < 4; i++)
        l_2225[i] = 1L;
    (*l_2037) = l_2036;
    if (((l_2039 = ((*l_2037) = 1L)) < g_31))
    { 
        const int8_t *l_2040 = &g_1912.f1;
        int32_t l_2048 = 0L;
        int32_t l_2060 = (-1L);
        if ((*g_173))
        { 
            return l_2040;
        }
        else
        { 
            const uint32_t l_2059 = 0x26057536L;
            for (p_17.f1 = 0; (p_17.f1 == 1); ++p_17.f1)
            { 
                const int8_t *l_2043 = &g_31;
                return l_2043;
            }
            l_2060 ^= ((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*l_2037) &= l_2048), ((safe_rshift_func_uint16_t_u_u((p_16 < (-1L)), ((!(safe_div_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((((((0xB0L != (~(**g_287))) < ((safe_rshift_func_uint8_t_u_u((l_2048 == p_17.f0), 2)) > p_15.f1)) >= 0UL) == (*g_319)) , p_14.f2), (*g_599))) < l_2059), 0x65B0354EF1E9F6F7LL))) < p_17.f2))) & 0x9658C1E56EA6CE8CLL))), 14)) , (*l_2037));
        }
    }
    else
    { 
        return (***g_55);
    }
    for (g_746 = 0; (g_746 >= 60); g_746 = safe_add_func_uint32_t_u_u(g_746, 9))
    { 
        int32_t *l_2069 = &g_309;
        int32_t l_2070 = 0xFE7EC51FL;
        int32_t l_2088 = 0x208A03F6L;
        int32_t * const l_2104 = (void*)0;
        int32_t * const *l_2103 = &l_2104;
        int32_t * const **l_2102 = &l_2103;
        int32_t * const ***l_2101 = &l_2102;
        int16_t l_2120 = 0xDD33L;
        uint32_t *l_2125 = &g_578;
        uint32_t **l_2124 = &l_2125;
        int32_t l_2146[2][6];
        int16_t l_2176 = 0xCD8CL;
        int8_t l_2222 = 0x2FL;
        int32_t *l_2223 = &l_2088;
        int32_t *l_2224 = &l_2088;
        int32_t *l_2226 = &g_714;
        int32_t *l_2227 = &g_887;
        int32_t *l_2228 = &g_473[1][1][1];
        int32_t *l_2229[7] = {(void*)0,&g_887,&g_887,(void*)0,&g_887,&g_887,(void*)0};
        int8_t l_2230 = 1L;
        uint16_t l_2231 = 65526UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_2146[i][j] = (-9L);
        }
    }
    return (*g_57);
}



static struct S0  func_18(int32_t  p_19, int16_t  p_20)
{ 
    int32_t *l_21 = &g_22;
    int32_t *l_23 = &g_22;
    int32_t *l_24[3][4];
    int8_t *l_29 = (void*)0;
    int8_t *l_30 = &g_31;
    int8_t **l_32 = &l_30;
    int64_t *l_891 = &g_281;
    struct S0 **l_913[3];
    const union U1 l_923 = {0xB11A242DL};
    uint8_t l_948 = 246UL;
    const int32_t l_957[2][2] = {{0x06BEF21DL,0x06BEF21DL},{0x06BEF21DL,0x06BEF21DL}};
    int64_t **l_971 = &l_891;
    int64_t ***l_970 = &l_971;
    const uint32_t ** const **l_981 = (void*)0;
    const uint32_t ** const ***l_980 = &l_981;
    int16_t l_1067 = (-2L);
    uint16_t **l_1092[7] = {&g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319};
    int64_t l_1155 = 0L;
    uint32_t **l_1244[1][2];
    uint32_t l_1321 = 0x8F48F1DDL;
    uint16_t l_1343 = 1UL;
    const uint32_t ****l_1351 = &g_1348;
    uint64_t *l_1362 = &g_126;
    int32_t *l_1363 = &g_323;
    int32_t *l_1364[2][1];
    int64_t l_1365 = 0xC267E69364C21709LL;
    union U1 **l_1431[4][5][4] = {{{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,(void*)0,(void*)0},{&g_969,&g_969,&g_969,(void*)0},{&g_969,&g_969,&g_969,&g_969}},{{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,(void*)0,&g_969},{&g_969,&g_969,&g_969,&g_969}},{{&g_969,&g_969,&g_969,&g_969},{&g_969,(void*)0,(void*)0,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969}},{{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,(void*)0,&g_969},{&g_969,&g_969,&g_969,&g_969},{&g_969,&g_969,&g_969,&g_969}}};
    uint32_t l_1463 = 0x2F94946DL;
    int64_t * const ***l_1498 = &g_976;
    uint32_t *l_1614 = &g_244;
    uint32_t **l_1613 = &l_1614;
    int32_t ***l_1636 = &g_167;
    uint32_t l_1657 = 0x09AE988EL;
    int32_t l_1736 = 0x93AE8F67L;
    uint32_t l_1832 = 2UL;
    int16_t l_1833 = 0x74E2L;
    int32_t l_1856 = (-4L);
    uint32_t ****l_1910 = &g_1694;
    const int8_t ****l_1913 = &g_535[0][0][3];
    int32_t l_2030 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_24[i][j] = &g_22;
    }
    for (i = 0; i < 3; i++)
        l_913[i] = &g_816;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1244[i][j] = &g_288;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1364[i][j] = &g_328;
    }
    ++g_26;
    return (***g_1957);
}



static uint32_t  func_51(const int32_t  p_52)
{ 
    int8_t ****l_54 = (void*)0;
    int8_t *****l_53[3][1];
    int32_t *l_59 = &g_22;
    const int8_t ***l_583 = &g_536;
    uint8_t *l_592 = &g_26;
    uint8_t * const *l_591 = &l_592;
    uint8_t * const **l_590 = &l_591;
    int32_t *l_605 = &g_22;
    int32_t l_626 = 0x370D3360L;
    int32_t l_627 = 0xC593E1CCL;
    int32_t l_628 = 1L;
    int32_t l_629 = 1L;
    int32_t l_630 = (-1L);
    int32_t l_631 = 0xB3BEC366L;
    int32_t l_633 = (-5L);
    int32_t l_634 = (-7L);
    int8_t l_635[4];
    int32_t l_636 = (-1L);
    uint64_t *l_640 = (void*)0;
    uint32_t * const *l_661 = (void*)0;
    uint32_t ***l_666 = &g_660;
    uint32_t ****l_665[3][4] = {{&l_666,&l_666,&l_666,&l_666},{&l_666,&l_666,&l_666,&l_666},{&l_666,&l_666,&l_666,&l_666}};
    const int32_t *l_668 = (void*)0;
    const int32_t **l_667 = &l_668;
    union U1 *l_774 = &g_498[0][0][3];
    struct S0 *l_815 = &g_191;
    uint64_t l_878 = 18446744073709551609UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_53[i][j] = &l_54;
    }
    for (i = 0; i < 4; i++)
        l_635[i] = 1L;
    g_55 = (void*)0;
    (*l_59) = 1L;
    for (g_22 = 0; (g_22 != (-19)); --g_22)
    { 
        int32_t **l_72 = &l_59;
        int16_t *l_490 = &g_144;
        int16_t *l_491 = &g_97;
        if (p_52)
            break;
    }
lbl_852:
    for (g_208 = 27; (g_208 < 33); g_208 = safe_add_func_uint64_t_u_u(g_208, 5))
    { 
        uint8_t **l_594 = &l_592;
        uint8_t ***l_593 = &l_594;
        uint8_t ****l_595 = (void*)0;
        uint8_t ****l_596[5][2] = {{&l_593,&l_593},{&l_593,&l_593},{&l_593,&l_593},{&l_593,&l_593},{&l_593,&l_593}};
        int32_t l_600[2];
        uint16_t **l_601 = &g_319;
        int32_t l_602 = 0xC2A83327L;
        uint32_t *l_616 = (void*)0;
        uint32_t **l_615[7] = {&l_616,&l_616,&l_616,&l_616,&l_616,&l_616,&l_616};
        int i, j;
        for (i = 0; i < 2; i++)
            l_600[i] = 0L;
        l_602 &= (((((p_52 , p_52) , (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((0x28L && (l_590 != (g_597 = l_593))) & (g_471 & g_473[3][1][1])) , 0x45L), l_600[0])) >= p_52), (*l_59)))) , (void*)0) == l_601) != (*l_59));
        if (p_52)
            break;
    }
    for (l_627 = 0; (l_627 <= 0); l_627 += 1)
    { 
        uint64_t *l_641 = &g_174;
        int32_t l_664 = 0L;
        const int32_t **l_669 = (void*)0;
        const uint32_t *l_671 = (void*)0;
        const uint32_t **l_670 = &l_671;
        union U1 l_673 = {4294967295UL};
        int32_t l_684 = 0x2FC9F371L;
        struct S0 l_718[3] = {{0UL,8L,-158},{0UL,8L,-158},{0UL,8L,-158}};
        const uint8_t *l_737 = &g_333;
        const uint8_t **l_736 = &l_737;
        int8_t ** const l_750[4][5][4] = {{{&g_58,&g_58,&g_58,(void*)0},{&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,(void*)0,&g_58},{&g_58,&g_58,(void*)0,(void*)0}},{{&g_58,&g_58,&g_58,(void*)0},{&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,(void*)0,&g_58},{&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58},{(void*)0,&g_58,(void*)0,&g_58},{(void*)0,&g_58,&g_58,(void*)0},{&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58},{(void*)0,&g_58,(void*)0,&g_58},{(void*)0,&g_58,&g_58,(void*)0},{&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58}}};
        uint32_t l_771 = 0x204EE31EL;
        int32_t l_804 = 0xBDEF2B3FL;
        int32_t l_805 = (-9L);
        int32_t l_806 = 2L;
        int32_t l_807 = 3L;
        int32_t l_808 = 0xC37962E3L;
        int32_t l_809 = 0x05DEB1ABL;
        uint16_t l_810 = 0x8E69L;
        uint32_t ****l_813 = &l_666;
        int i, j, k;
        for (l_626 = 0; (l_626 >= 0); l_626 -= 1)
        { 
            int64_t *l_655 = &g_99;
            uint32_t * const **l_662 = &l_661;
            int32_t l_663[6][6] = {{0L,0L,1L,0x0DC08007L,1L,0L},{1L,0xF701A50EL,0x0DC08007L,0x0DC08007L,0xF701A50EL,1L},{0L,1L,0x0DC08007L,1L,0L,0L},{0xAA2B3F10L,1L,1L,0xAA2B3F10L,0xF701A50EL,0xAA2B3F10L},{0xAA2B3F10L,0xF701A50EL,0xAA2B3F10L,1L,1L,0xAA2B3F10L},{0L,0L,1L,0x0DC08007L,1L,0L}};
            uint32_t * const *l_672 = &g_288;
            int32_t l_680 = 0x2782119CL;
            uint8_t *l_685[6];
            const uint8_t ***l_738 = &l_736;
            uint16_t *l_745[5];
            int16_t *l_747 = (void*)0;
            int16_t *l_748 = &g_97;
            int32_t *l_749[2];
            uint16_t l_756 = 0x461CL;
            const struct S0 l_761 = {1UL,0x5CL,139};
            uint16_t l_766[6][7][5] = {{{65530UL,1UL,65527UL,65526UL,65527UL},{0xFB23L,0xFB23L,0x654DL,65532UL,0xDA80L},{65527UL,0x0F70L,0x0357L,0UL,0UL},{0x8DFCL,1UL,4UL,1UL,0x8EDBL},{0xDF71L,0x0F70L,0x0F70L,0xDF71L,0xB4FCL},{0xDDE5L,0xFB23L,1UL,0xDA80L,65532UL},{0x0357L,1UL,1UL,65530UL,0x0F70L}},{{1UL,0xDDE5L,0xDA80L,0xDA80L,0xDDE5L},{0UL,65526UL,0x740FL,0xDF71L,65533UL},{1UL,0x8EDBL,0xFB23L,1UL,1UL},{65526UL,1UL,65529UL,0UL,0UL},{1UL,0x654DL,1UL,65532UL,0x9E7EL},{0UL,0x740FL,65530UL,65526UL,0x4A47L},{1UL,1UL,65532UL,0xFB23L,0xF46EL}},{{0x0357L,0x4A47L,65530UL,0x4A47L,0x0357L},{0xDDE5L,65535UL,1UL,0x8EDBL,0xFB23L},{0xDF71L,65533UL,65529UL,65527UL,1UL},{0x8DFCL,1UL,0xFB23L,65535UL,0xFB23L},{65527UL,65527UL,0x740FL,65529UL,0x0357L},{0xFB23L,1UL,0xDA80L,65532UL,0xF46EL},{65530UL,65534UL,1UL,1UL,0x4A47L}},{{65534UL,1UL,1UL,65534UL,0x9E7EL},{65533UL,65527UL,1UL,1UL,0x0357L},{1UL,0x9E7EL,65532UL,65535UL,4UL},{0x4A47L,0x0F70L,1UL,1UL,0x0F70L},{65532UL,65534UL,1UL,0xF46EL,1UL},{0xB4FCL,65527UL,65530UL,65534UL,1UL},{65534UL,1UL,0xDDE5L,0xDA80L,0xDA80L}},{{0xB4FCL,1UL,0xB4FCL,65533UL,0x740FL},{65532UL,1UL,65535UL,65534UL,0xFB23L},{0x4A47L,65534UL,0x0357L,65530UL,65529UL},{1UL,0xFB23L,65535UL,0xFB23L,1UL},{0x0F70L,0xDF71L,0xB4FCL,65527UL,65530UL},{0xF46EL,1UL,0xDDE5L,0x8DFCL,65532UL},{65526UL,0xB4FCL,65530UL,0xDF71L,65530UL}},{{0x8DFCL,0x8DFCL,1UL,0xDDE5L,1UL},{65530UL,1UL,1UL,0x0357L,65529UL},{65535UL,0x8EDBL,65532UL,1UL,0xFB23L},{0UL,1UL,1UL,0UL,0x740FL},{1UL,0x8DFCL,4UL,1UL,0xDA80L},{1UL,0xB4FCL,0UL,65526UL,1UL},{0x8EDBL,1UL,1UL,1UL,1UL}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_685[i] = &g_333;
            for (i = 0; i < 5; i++)
                l_745[i] = &g_746;
            for (i = 0; i < 2; i++)
                l_749[i] = &g_714;
        }
        (*l_605) &= g_320[l_627];
        for (l_629 = 0; (l_629 <= 2); l_629 += 1)
        { 
            uint8_t l_836 = 6UL;
            int32_t l_840 = 0x640B16D8L;
            for (l_806 = 0; (l_806 <= 3); l_806 += 1)
            { 
                uint32_t ***l_837 = &g_660;
                int i, j, k;
                (*l_667) = &g_473[(l_629 + 1)][l_629][l_629];
                for (g_369 = 3; (g_369 >= 0); g_369 -= 1)
                { 
                    g_816 = (g_473[(l_629 + 1)][l_629][l_629] , l_815);
                }
                for (g_282 = 0; (g_282 <= 3); g_282 += 1)
                { 
                    int64_t *l_818 = &g_99;
                    int32_t l_827 = 0x56AEA527L;
                    int i, j, k;
                    (*l_605) &= (((*l_818) = g_31) | ((((*l_641) = (0x90143780CA4ECCDDLL || g_817.f0)) && ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_592)--), 4)), (g_473[(l_629 + 1)][l_629][l_629] | (p_52 , ((((((void*)0 == g_825) == p_52) && l_827) & 0L) != 1UL))))) < 0x68E8L)) < 0x1DL));
                    if (p_52)
                        break;
                    l_836 ^= (((safe_div_func_int32_t_s_s((l_827 && (safe_div_func_uint8_t_u_u(((~((!(((p_52 , (safe_div_func_uint64_t_u_u(g_473[(g_282 + 2)][l_627][l_806], g_471))) > (0xEAL & (((l_718[0] , (*l_667)) == (*g_172)) > p_52))) > 8UL)) >= p_52)) , p_52), p_52))), p_52)) > (*l_59)) <= g_473[(l_629 + 1)][l_629][l_629]);
                    (*l_605) ^= (*g_173);
                    (*l_59) |= (((*l_813) == (l_837 = &g_660)) < (l_840 ^= (safe_rshift_func_int16_t_s_s(p_52, 4))));
                }
                for (l_636 = 3; (l_636 >= 0); l_636 -= 1)
                { 
                    const int64_t **l_841 = (void*)0;
                    const int64_t ***l_842 = &l_841;
                    (*l_842) = l_841;
                }
            }
            (*l_667) = &l_840;
            for (g_116 = 0; (g_116 <= 2); g_116 += 1)
            { 
                uint32_t *l_847 = &g_382;
                int i, j, k;
                for (g_123 = 2; (g_123 >= 0); g_123 -= 1)
                { 
                    int i, j, k;
                    return g_473[(g_123 + 3)][g_116][(l_629 + 1)];
                }
                if ((((g_174 = ((0xD6L <= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_473[(l_627 + 6)][g_116][(g_116 + 1)], p_52)), p_52))) || (l_847 != &g_341[0][1]))) , (safe_sub_func_int64_t_s_s(((--(*g_319)) < l_836), 0x6447206F6D685B50LL))) ^ (-1L)))
                { 
                    return (*g_288);
                }
                else
                { 
                    if (p_52)
                        break;
                }
            }
        }
        for (g_191.f0 = 0; (g_191.f0 <= 2); g_191.f0 += 1)
        { 
            uint64_t l_856 = 18446744073709551612UL;
            union U1 l_861 = {0x1AED5CE7L};
            union U1 **l_867 = &l_774;
            if (g_282)
                goto lbl_852;
            for (g_99 = 0; (g_99 <= 2); g_99 += 1)
            { 
                int32_t *l_853 = &l_804;
                int32_t l_854 = 0xF49AA9F0L;
                int32_t *l_855[2];
                int16_t *l_866 = &g_144;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_855[i] = &l_854;
                ++l_856;
                (*g_172) = &g_473[(g_191.f0 + 1)][g_99][(g_191.f0 + 1)];
                (*l_605) ^= (safe_add_func_int64_t_s_s((g_473[g_99][g_99][g_191.f0] , (1UL == (((l_861 , (*g_816)) , (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((*l_866) = 0xE7FBL), ((void*)0 == l_867))), 0x649EAA56359BD63ELL))) >= 65535UL))), 4UL));
            }
            (*l_605) = (g_349[1][1][0] , ((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_52, p_52)), ((safe_rshift_func_uint16_t_u_u((((*l_592) = 252UL) & (p_52 , ((l_665[1][2] = g_876) != l_813))), 9)) ^ p_52))), g_328)) <= l_861.f0));
        }
    }
    return l_878;
}



static const int8_t *** func_62(int16_t  p_63, int8_t ** const ** p_64, const uint64_t  p_65, uint8_t  p_66, int32_t  p_67)
{ 
    union U1 *l_497 = &g_498[0][0][2];
    int32_t l_501 = (-1L);
    int32_t l_505 = 0x82A610ADL;
    int32_t l_506 = 0x37F50E56L;
    int32_t l_507 = 0x79B2379CL;
    int32_t l_508 = (-1L);
    int32_t l_509 = 0L;
    int32_t l_510 = 0x760F33F8L;
    int32_t l_511[5][6][7] = {{{0x524D1772L,0x9FB8A149L,0x6D569C18L,0x5D42A525L,0x6E297C8DL,(-8L),0x43AEFF4EL},{1L,0xB22B6AAFL,2L,1L,9L,0x45821A03L,(-1L)},{9L,0x5877DACCL,0x524D1772L,0x7D8BD340L,0x30D714CBL,0xB9CA75A1L,(-6L)},{(-8L),0x5C4B519BL,0L,0x23AC2437L,0xFA9EDEA3L,0L,0x45821A03L},{(-1L),1L,0x38532F8FL,0x67079259L,8L,0L,8L},{0x43AEFF4EL,0x19C15CD8L,0x19C15CD8L,0x43AEFF4EL,0L,(-1L),1L}},{{0x130DE452L,0L,(-4L),1L,0x6D569C18L,9L,0xE0C9D0F2L},{1L,0x5BAD9308L,0xE0C9D0F2L,0xD0D99AB8L,0xFAEC3FA5L,1L,1L},{2L,1L,0L,(-8L),0x5D42A525L,7L,8L},{0x4D94ACE5L,1L,(-1L),0L,(-3L),3L,0x45821A03L},{0x30D6A8AFL,0x3E334D8DL,0x6DDFC270L,0xB22B6AAFL,0L,0xC28E9D31L,(-6L)},{(-8L),0L,1L,8L,0xD9D8ADD9L,(-3L),(-1L)}},{{(-4L),0L,0L,(-3L),1L,0x3AE37CC1L,0x43AEFF4EL},{0x746ACCB2L,(-3L),0x67079259L,0x19C15CD8L,0x5C4B519BL,0x6D569C18L,0x49342878L},{8L,(-8L),0xFA9EDEA3L,0x5D42A525L,7L,0x6D569C18L,0x130DE452L},{(-1L),0L,8L,1L,0L,0L,(-3L)},{8L,8L,0x8C28267DL,0x43AEFF4EL,0x49342878L,0xD0D99AB8L,0x67079259L},{0x5D42A525L,0L,0xAA672867L,9L,(-1L),0x26746A29L,1L}},{{0x194C8E7FL,0x4D94ACE5L,0x746ACCB2L,1L,0x19C15CD8L,0xB4455F90L,(-1L)},{0x3AE37CC1L,0L,(-2L),0x5BAD9308L,9L,0x5BAD9308L,(-2L)},{1L,1L,0x19C15CD8L,0x26746A29L,0x45821A03L,0x746ACCB2L,0x1E116E14L},{(-8L),0x26746A29L,7L,0xFA9EDEA3L,1L,8L,0L},{0x67079259L,(-4L),0xCF84BC5BL,(-1L),0x45821A03L,9L,1L},{0x3D790BBAL,0x5C4B519BL,0x49342878L,0x30D6A8AFL,9L,(-6L),(-3L)}},{{2L,0xB22B6AAFL,1L,0L,0x19C15CD8L,(-2L),0x2F5D25ACL},{0L,8L,0xB9CA75A1L,0x1E36E5A2L,(-1L),0x5C4B519BL,0x43AEFF4EL},{0L,0x3AE37CC1L,(-3L),0x8DA1B2EFL,0x49342878L,0x4D94ACE5L,2L},{(-1L),0x3D790BBAL,0x130DE452L,0xB9CA75A1L,0L,0xAA672867L,0x30D6A8AFL},{(-2L),0x1E36E5A2L,0x23AC2437L,0xC62A99C4L,7L,(-7L),8L},{0x43AEFF4EL,0xC905D4C1L,(-6L),0xC62A99C4L,0x5C4B519BL,0x1E116E14L,1L}}};
    uint64_t l_540[3];
    struct S0 l_552[1] = {{0x68ACA731L,-2L,-180}};
    int8_t l_558 = 0xAAL;
    const int8_t ***l_582 = &g_536;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_540[i] = 4UL;
    for (g_333 = (-20); (g_333 >= 46); ++g_333)
    { 
        union U1 *l_500 = &g_498[0][1][3];
        union U1 **l_499 = &l_500;
        int32_t l_512 = 0x2799945AL;
        int32_t l_513 = 0x5824F430L;
        int32_t l_514 = 0L;
        int32_t l_515 = 1L;
        int32_t l_516 = 0x0DA0BF28L;
        int32_t l_517 = 0x25B2839AL;
        int32_t l_518 = 0x5F03F7D2L;
        int32_t l_519 = 9L;
        int32_t l_520 = (-1L);
        int32_t l_521 = 0x3A76F4C4L;
        int32_t l_522 = 0xB09FCEF0L;
        uint16_t l_523[2][4] = {{0UL,65535UL,0UL,0UL},{65535UL,65535UL,65535UL,65535UL}};
        int16_t l_559 = (-1L);
        int i, j;
        if ((((**g_287)--) == (l_497 == ((*l_499) = &g_498[0][0][2]))))
        { 
            int32_t *l_502 = &l_501;
            int32_t *l_503 = &g_369;
            int32_t *l_504[6] = {&g_22,&g_22,&g_22,&g_22,&g_22,&g_22};
            const int8_t *l_534 = &g_123;
            const int8_t **l_533[5][5][2] = {{{&l_534,&l_534},{&l_534,&l_534},{&l_534,&l_534},{&l_534,&l_534},{&l_534,&l_534}},{{&l_534,&l_534},{(void*)0,&l_534},{&l_534,&l_534},{&l_534,&l_534},{&l_534,&l_534}},{{&l_534,&l_534},{(void*)0,&l_534},{&l_534,&l_534},{&l_534,(void*)0},{(void*)0,&l_534}},{{&l_534,&l_534},{(void*)0,(void*)0},{&l_534,&l_534},{&l_534,&l_534},{(void*)0,&l_534}},{{&l_534,&l_534},{&l_534,&l_534},{&l_534,&l_534},{&l_534,&l_534},{(void*)0,&l_534}}};
            const int8_t ***l_532 = &l_533[2][2][1];
            uint16_t * const * const l_555 = (void*)0;
            uint16_t l_560 = 65535UL;
            uint32_t *l_565[5][5][4] = {{{&g_244,(void*)0,&g_244,&g_382},{&g_382,&g_382,&g_244,&g_244},{&g_382,&g_382,&g_244,&g_382},{&g_244,&g_382,&g_244,&g_382},{&g_382,&g_382,&g_382,&g_244}},{{&g_244,(void*)0,(void*)0,&g_244},{(void*)0,&g_382,(void*)0,&g_244},{&g_244,&g_382,&g_382,&g_382},{(void*)0,&g_382,&g_382,&g_382},{&g_244,&g_244,&g_382,&g_382}},{{(void*)0,(void*)0,&g_382,&g_244},{&g_244,(void*)0,(void*)0,&g_382},{(void*)0,&g_382,(void*)0,&g_244},{&g_244,&g_382,&g_382,&g_244},{&g_382,&g_244,&g_244,&g_244}},{{&g_244,&g_244,&g_244,&g_382},{&g_382,&g_382,&g_244,&g_244},{&g_382,&g_382,&g_244,&g_244},{&g_382,&g_244,&g_244,&g_244},{&g_382,(void*)0,&g_382,&g_244}},{{&g_244,(void*)0,&g_382,&g_244},{(void*)0,&g_244,(void*)0,&g_244},{&g_382,&g_382,&g_244,&g_244},{(void*)0,&g_382,&g_382,&g_382},{(void*)0,&g_244,&g_382,&g_244}}};
            uint32_t **l_564 = &l_565[4][4][0];
            uint32_t ***l_563 = &l_564;
            int i, j, k;
            l_523[1][3]++;
            for (g_97 = 0; (g_97 > (-20)); g_97 = safe_sub_func_uint32_t_u_u(g_97, 5))
            { 
                (*l_503) = (-10L);
                for (l_519 = 1; (l_519 >= 0); l_519 -= 1)
                { 
                    int i, j, k;
                    g_473[l_519][l_519][l_519] = (safe_add_func_int64_t_s_s(l_523[l_519][l_519], (l_523[l_519][l_519] < (safe_mul_func_uint8_t_u_u(255UL, (g_473[(l_519 + 5)][(l_519 + 1)][(l_519 + 1)] != 0UL))))));
                }
                return g_535[1][1][3];
            }
            for (l_508 = 0; (l_508 <= 1); l_508 += 1)
            { 
                int16_t l_537 = 0x3C53L;
                int32_t l_538 = (-7L);
                int32_t l_539[4][4] = {{0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L},{0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L},{0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L},{0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L,0xFB09A0F4L}};
                struct S0 l_547 = {1UL,-1L,-163};
                int64_t l_556 = 0L;
                int i, j;
                --l_540[1];
                for (p_63 = 1; (p_63 >= 0); p_63 -= 1)
                { 
                    int i, j, k;
                    (*l_502) = ((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((l_523[p_63][(l_508 + 2)] & g_498[0][0][2].f0) > 0UL), 5)) && (**g_287)) <= (9UL && (l_547 , ((0x56F20E71E966CF98LL <= p_63) > p_67)))), l_523[p_63][(l_508 + 2)])) | 0xEA639C66L);
                }
                for (g_369 = 1; (g_369 >= 0); g_369 -= 1)
                { 
                    uint32_t l_548 = 0xFCB77EC7L;
                    uint32_t l_549 = 4294967293UL;
                    uint8_t *l_557[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_557[i] = &g_349[1][0][4];
                    (*l_502) &= (l_548 || (l_549 <= ((safe_sub_func_int64_t_s_s(((g_208 = ((l_552[0] , (((*g_288) || 4294967295UL) & ((safe_add_func_int32_t_s_s(p_63, (l_555 != (void*)0))) != l_540[1]))) , l_556)) || l_540[0]), 18446744073709551615UL)) , 0xC6F5784EL)));
                }
                l_560++;
                if (l_508)
                    continue;
                for (l_512 = 0; (l_512 <= 1); l_512 += 1)
                { 
                    uint32_t ****l_566 = &l_563;
                    (*l_566) = l_563;
                    (*l_502) &= (-2L);
                }
            }
        }
        else
        { 
            int32_t *l_567 = &l_518;
            int32_t *l_568 = &l_514;
            int32_t *l_569 = &l_513;
            int32_t *l_570 = &l_501;
            int32_t *l_571 = &l_517;
            int32_t *l_572 = (void*)0;
            int32_t *l_573 = &l_511[0][0][6];
            int32_t *l_574 = &l_518;
            int32_t *l_575 = &l_506;
            int32_t l_576 = 1L;
            int32_t *l_577[4] = {&l_518,&l_518,&l_518,&l_518};
            const int8_t ***l_581 = (void*)0;
            int i;
            g_578++;
            return l_581;
        }
    }
    return l_582;
}



static uint16_t  func_68(int32_t ** p_69, int32_t  p_70, uint8_t  p_71)
{ 
    const int8_t **l_82 = (void*)0;
    const int8_t ***l_81 = &l_82;
    const int8_t ****l_80 = &l_81;
    const int8_t *****l_79[7][1][4] = {{{&l_80,(void*)0,(void*)0,&l_80}},{{(void*)0,&l_80,&l_80,(void*)0}},{{(void*)0,&l_80,&l_80,(void*)0}},{{(void*)0,&l_80,(void*)0,&l_80}},{{&l_80,&l_80,(void*)0,&l_80}},{{(void*)0,&l_80,(void*)0,(void*)0}},{{&l_80,&l_80,(void*)0,(void*)0}}};
    int32_t l_87 = 0x25F0F443L;
    uint32_t l_92[2];
    int16_t *l_96 = &g_97;
    int64_t *l_98 = &g_99;
    int8_t ** const *l_102 = &g_57;
    int8_t ** const **l_101[1];
    int8_t ** const *** const l_100 = &l_101[0];
    int8_t **** const *l_489[1][6][6] = {{{&g_55,&g_55,&g_55,&g_55,&g_55,(void*)0},{(void*)0,&g_55,&g_55,&g_55,(void*)0,&g_55},{&g_55,(void*)0,&g_55,&g_55,(void*)0,&g_55},{&g_55,&g_55,&g_55,(void*)0,&g_55,&g_55},{&g_55,&g_55,&g_55,&g_55,&g_55,&g_55},{&g_55,&g_55,&g_55,(void*)0,&g_55,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_92[i] = 0xD27CF1A4L;
    for (i = 0; i < 1; i++)
        l_101[i] = &l_102;
    l_489[0][4][2] = func_73(((!((l_79[3][0][0] != &l_80) ^ ((*l_98) &= ((((((safe_mod_func_int16_t_s_s((((((*l_96) = (l_87 > ((safe_div_func_uint16_t_u_u(p_70, ((safe_add_func_int8_t_s_s(0x79L, (l_92[0] < ((!(safe_unary_minus_func_uint32_t_u((+((p_70 || p_70) , p_71))))) & g_2)))) & l_87))) > 0x3792L))) != (-1L)) == 4294967292UL) || p_71), 0x5E7EL)) <= g_26) && l_92[0]) , (void*)0) != (void*)0) == 0xBC952145F43875C6LL)))) > 65532UL), p_69, l_92[0], l_100);
    return (*g_319);
}



static int8_t **** const * func_73(uint32_t  p_74, int32_t ** p_75, uint32_t  p_76, int8_t ** const *** const  p_77)
{ 
    uint64_t l_107 = 18446744073709551612UL;
    int64_t *l_111 = (void*)0;
    int64_t *l_112 = (void*)0;
    int64_t *l_113[2][1][5] = {{{(void*)0,&g_99,(void*)0,&g_99,(void*)0}},{{&g_99,&g_99,&g_99,&g_99,&g_99}}};
    uint32_t *l_115 = &g_116;
    int32_t l_124 = 7L;
    uint64_t *l_125[3];
    union U1 l_135 = {0x24D48F7CL};
    int32_t l_143 = 0xA1FB0DB9L;
    int32_t *l_171 = (void*)0;
    int32_t **l_170 = &l_171;
    union U1 *l_211[2][6] = {{&l_135,&l_135,&l_135,&l_135,&l_135,&l_135},{&l_135,&l_135,&l_135,&l_135,&l_135,&l_135}};
    int8_t *****l_212 = (void*)0;
    uint16_t l_248 = 0UL;
    uint32_t l_275 = 4294967289UL;
    const uint32_t *l_340 = &g_341[0][3];
    int32_t l_360 = 0x178EDE34L;
    int32_t * const l_366 = &l_124;
    int8_t l_374 = (-10L);
    int16_t *l_424 = &g_97;
    uint32_t *l_425 = &g_198;
    uint8_t *l_426 = &g_349[1][1][2];
    const uint8_t l_427 = 0xB5L;
    int32_t l_428 = 0xA0B9FCD6L;
    int32_t l_475 = 0x2E6C88F2L;
    int32_t l_477[2];
    int32_t l_481 = 0xCAE1B7B4L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_125[i] = &g_126;
    for (i = 0; i < 2; i++)
        l_477[i] = 2L;
    for (g_26 = (-12); (g_26 != 7); g_26++)
    { 
        return &g_55;
    }
    if (((safe_div_func_uint16_t_u_u(g_25, (0x08L && l_107))) == (g_126 = (safe_mod_func_int16_t_s_s((((g_99 = (+p_74)) , (safe_unary_minus_func_int8_t_s(((((((*l_115)--) , ((((safe_lshift_func_int16_t_s_s((l_124 = (0x6459F139C94463E9LL ^ (((g_97 && (safe_sub_func_int16_t_s_s(((((((void*)0 == &g_99) , l_112) != (void*)0) | g_123) & l_107), (-1L)))) < g_97) ^ 0x088AL))), 4)) || g_99) || 1UL) && 4294967295UL)) < p_74) & 0x0FL) & 0xF7741F5DL)))) && (-5L)), l_107)))))
    { 
        int32_t *l_145 = &l_143;
        int8_t **** const *l_176 = (void*)0;
        union U1 l_215 = {7UL};
        uint32_t **l_216 = &l_115;
        int32_t *l_217 = &l_124;
        for (g_99 = 0; (g_99 == 24); ++g_99)
        { 
            uint8_t *l_138 = &g_26;
            g_144 = (safe_rshift_func_uint8_t_u_u(((8L < ((safe_div_func_uint16_t_u_u(((1UL ^ p_76) > (g_99 , (l_124 = (safe_div_func_int16_t_s_s((l_135 , g_97), (safe_rshift_func_uint8_t_u_s((--(*l_138)), 5))))))), (safe_mod_func_uint16_t_u_u((l_107 < l_143), l_135.f0)))) != 0x7D3CL)) ^ 0x9D16L), 3));
        }
lbl_153:
        (*p_75) = &g_2;
        if (((*l_145) = (0L && p_74)))
        { 
            uint32_t l_146 = 18446744073709551615UL;
            int32_t *l_147 = &l_143;
            uint8_t *l_156[1][2];
            uint8_t ** const l_155 = &l_156[0][1];
            int32_t l_190 = 0x807BAAA9L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_156[i][j] = &g_26;
            }
            (*p_75) = (l_146 , l_147);
            for (g_126 = 12; (g_126 >= 21); g_126 = safe_add_func_int32_t_s_s(g_126, 3))
            { 
                uint8_t **l_158 = &l_156[0][1];
                uint8_t ***l_157 = &l_158;
                int32_t **l_169 = &l_145;
                int32_t ***l_168[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_168[i] = &l_169;
                if ((0xC2A52D84E8D85B24LL < ((void*)0 != &g_97)))
                { 
                    uint8_t l_150 = 0x62L;
                    l_150--;
                    if (l_143)
                        goto lbl_153;
                    if ((**p_75))
                        continue;
                }
                else
                { 
                    int32_t *l_154 = &l_143;
                    l_154 = l_154;
                    if (g_144)
                        break;
                }
                (*l_157) = l_155;
                if ((g_174 &= (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((p_74 > ((g_144 && ((g_97 != ((l_170 = (g_167 = g_167)) != g_172)) >= (*l_145))) && (p_76 != g_26))) , 0UL), (**l_169))), 1L)), p_76)), 0L))))
                { 
                    uint8_t l_175 = 1UL;
                    l_175 ^= (**p_75);
                    return l_176;
                }
                else
                { 
                    uint32_t *l_186 = &l_135.f0;
                    int32_t l_187 = (-6L);
                    int16_t *l_188 = &g_144;
                    int16_t *l_189 = &g_97;
                    int8_t *l_203 = &g_123;
                    int32_t l_206 = 0x3223A29AL;
                    int32_t l_207 = 1L;
                    if ((*l_147))
                        break;
                    l_190 = (((safe_unary_minus_func_int16_t_s(((*l_189) ^= ((*l_188) ^= (safe_add_func_int64_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((((*l_115) = ((**l_169) = (*l_145))) || ((*l_147) = (**l_169))) || ((9UL < g_99) >= (safe_mod_func_uint8_t_u_u(((void*)0 != l_186), (*l_145))))), l_187)), g_174)) , l_187) || p_74), g_2)))))) && 0xF0L) >= 0xF3L);
                    (*l_145) = (g_191 , ((safe_rshift_func_uint16_t_u_u((0xF9DEAA75L == (safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(((g_198 ^ (((safe_lshift_func_int8_t_s_u(((*l_203) |= (safe_lshift_func_int8_t_s_u((-1L), 1))), 3)) & p_74) >= l_187)) & ((safe_div_func_uint16_t_u_u(g_2, p_74)) , p_76)), p_76)) <= 0x24EAL), 0x6299ED92AE5AED9FLL))), g_191.f2)) && 9UL));
                    ++g_208;
                }
                for (g_174 = 0; (g_174 <= 2); g_174 += 1)
                { 
                    (*g_172) = (*l_169);
                }
            }
        }
        else
        { 
            l_211[1][1] = &l_135;
            (*l_145) &= ((void*)0 == l_212);
        }
        (*l_217) = ((p_74 & (safe_rshift_func_uint16_t_u_s((((l_143 = (1UL & ((l_215 , 0x3535E136L) < (((((*l_216) = (void*)0) == l_171) != (((void*)0 == &g_57) || 1UL)) , (*l_145))))) < p_76) != 0x1C6BL), g_25))) >= 4294967295UL);
    }
    else
    { 
        uint8_t *l_228 = &g_26;
        uint8_t *l_231 = (void*)0;
        uint8_t *l_232 = &g_208;
        int32_t l_241[1];
        uint32_t *l_242 = (void*)0;
        uint32_t *l_243 = &g_244;
        int i;
        for (i = 0; i < 1; i++)
            l_241[i] = 0L;
        if ((((safe_sub_func_int32_t_s_s((**g_172), ((((((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((-2L), ((safe_sub_func_uint8_t_u_u(((*l_228)++), ((*l_232)++))) > 7UL))), 1)) || (safe_sub_func_int64_t_s_s(((((*l_243) = (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((0x34L & (((l_241[0] , (*p_75)) == (*p_75)) & l_241[0])), g_25)), p_76))) , l_241[0]) & p_76), 0UL))) ^ l_241[0]) , g_123), g_198)) ^ 18446744073709551615UL) , g_99) | g_126) && 0xD850D4A36DFC68BDLL) & 0x98A1L))) != 4UL) != l_241[0]))
        { 
            int16_t *l_247[5][6][5] = {{{&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,(void*)0,&g_97,&g_97,&g_97},{(void*)0,(void*)0,&g_97,&g_97,(void*)0},{&g_97,(void*)0,&g_97,&g_97,(void*)0},{(void*)0,&g_97,&g_97,(void*)0,&g_97},{&g_97,(void*)0,&g_97,(void*)0,&g_97}},{{&g_97,(void*)0,&g_97,&g_97,(void*)0},{&g_97,(void*)0,(void*)0,&g_97,&g_97},{(void*)0,&g_97,&g_97,(void*)0,(void*)0},{&g_97,&g_97,&g_97,&g_97,&g_97},{(void*)0,&g_97,&g_97,(void*)0,&g_97},{&g_97,&g_97,&g_97,&g_97,(void*)0}},{{&g_97,(void*)0,&g_97,&g_97,(void*)0},{(void*)0,(void*)0,&g_97,(void*)0,&g_97},{&g_97,(void*)0,&g_97,(void*)0,&g_97},{&g_97,&g_97,(void*)0,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97},{(void*)0,&g_97,&g_97,&g_97,&g_97}},{{&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,(void*)0,&g_97,&g_97,&g_97},{(void*)0,(void*)0,&g_97,&g_97,(void*)0},{&g_97,(void*)0,&g_97,&g_97,(void*)0},{(void*)0,&g_97,&g_97,(void*)0,&g_97},{&g_97,(void*)0,&g_97,(void*)0,&g_97}},{{&g_97,(void*)0,&g_97,&g_97,(void*)0},{&g_97,(void*)0,(void*)0,&g_97,&g_97},{(void*)0,&g_97,&g_97,(void*)0,(void*)0},{&g_97,&g_97,&g_97,&g_97,&g_97},{(void*)0,&g_97,&g_97,(void*)0,&g_97},{&g_97,&g_97,&g_97,&g_97,(void*)0}}};
            int8_t l_253 = (-10L);
            int32_t l_254[2];
            uint32_t **l_289 = &g_288;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_254[i] = 0x1759D767L;
            if (((safe_div_func_int16_t_s_s((g_144 = g_174), (g_97 = g_26))) & (((l_248 ^ ((--(*l_232)) && ((safe_add_func_uint64_t_u_u(((((g_126++) , ((safe_lshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(l_241[0], ((-1L) & (1UL >= l_241[0])))) || l_241[0]) , 3L), 4)) , p_74)) , 7UL) <= g_31), g_31)) & 0xF48CB3587C03A1E7LL))) , l_241[0]) == l_241[0])))
            { 
                uint32_t **l_263 = &l_115;
                int8_t l_273 = (-1L);
                int32_t *l_277 = &l_241[0];
                int32_t *l_278 = &l_143;
                int32_t *l_279 = &l_143;
                int32_t *l_280[5] = {&l_254[0],&l_254[0],&l_254[0],&l_254[0],&l_254[0]};
                int i;
                for (g_174 = 0; (g_174 >= 43); g_174++)
                { 
                    uint32_t l_266 = 0x6A20D3CCL;
                    uint32_t l_274 = 4294967294UL;
                    int32_t *l_276 = &l_254[0];
                    (*l_276) |= ((((l_263 == l_263) < 4294967291UL) || (safe_mul_func_int8_t_s_s((0UL == l_266), (l_275 = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(g_208, (((0L && l_273) , l_266) , l_274))), p_74)), 2)) , p_76))))) != 0x60L);
                }
                g_282--;
                for (l_253 = 0; (l_253 <= 0); l_253 += 1)
                { 
                    uint16_t l_290 = 65529UL;
                    uint16_t *l_308 = &l_290;
                    int i;
                    (*l_278) = ((safe_rshift_func_uint16_t_u_s((((l_290 &= (g_287 == l_289)) , ((safe_lshift_func_int16_t_s_u((l_241[l_253] = (((*l_308) = (safe_rshift_func_int8_t_s_s((l_241[l_253] ^ ((+((0x52L | (safe_div_func_int16_t_s_s(0L, (g_144 ^= ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(g_26, p_76)), g_2)) , 6UL) , l_254[0]) , (**p_75)), 0x29903A52L)) ^ (*l_278)), 1UL)), l_241[0])) <= p_76))))) , g_31)) == 0UL)), 7))) && 0x1B3AL)), 14)) , (void*)0)) != (void*)0), g_309)) != p_74);
                    (*l_277) = (~0x5FBFL);
                }
            }
            else
            { 
                int32_t *l_311[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_311[i] = &l_241[0];
                l_143 &= (**p_75);
            }
        }
        else
        { 
            int32_t l_313[2];
            int32_t ***l_314 = &g_172;
            uint16_t *l_322[3][6] = {{&l_248,&l_248,&g_320[0],&l_248,&l_248,&l_248},{(void*)0,&l_248,&l_248,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_248,&l_248,(void*)0}};
            int32_t l_327 = (-2L);
            int32_t l_329 = (-1L);
            int i, j;
            for (i = 0; i < 2; i++)
                l_313[i] = 0x4DD0C724L;
            (*g_172) = (*p_75);
            if ((+l_313[1]))
            { 
                int32_t ****l_315[2];
                int32_t ***l_316 = &g_167;
                uint16_t **l_321 = &g_319;
                int i;
                for (i = 0; i < 2; i++)
                    l_315[i] = &l_314;
                g_323 &= ((((l_316 = l_314) != &g_167) != (safe_add_func_int8_t_s_s(((((g_281 &= (g_25 != (((*l_321) = g_319) == l_322[0][3]))) ^ (((*l_243) = ((7UL || ((g_126 = p_76) >= p_76)) && (**p_75))) , 0xE18D8DBE5A4FAB11LL)) != (-6L)) > g_22), 1UL))) || 0x13L);
            }
            else
            { 
                uint64_t l_330 = 0UL;
                for (g_244 = 0; (g_244 != 30); g_244 = safe_add_func_int32_t_s_s(g_244, 3))
                { 
                    int32_t *l_326[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_326[i] = (void*)0;
                    --l_330;
                    if ((**g_172))
                        continue;
                    g_333++;
                }
            }
        }
        for (l_248 = 0; (l_248 != 32); l_248 = safe_add_func_uint16_t_u_u(l_248, 4))
        { 
            uint32_t **l_338 = (void*)0;
            uint32_t **l_339 = &l_243;
            int32_t l_342 = 0L;
            int8_t *l_343 = &g_191.f1;
            struct S0 l_356 = {4294967295UL,0x9DL,68};
            union U1 *l_373 = &l_135;
            int32_t l_379 = (-2L);
            int32_t l_380 = 0x03AA0D65L;
            int32_t l_381 = 0x2B6602E2L;
            if ((g_116 == ((l_241[0] &= g_320[0]) | ((*l_343) &= ((((*l_339) = &g_244) != (l_340 = &p_74)) == l_342)))))
            { 
                int32_t *l_344 = &l_124;
                int32_t *l_345 = &l_342;
                int32_t *l_346 = (void*)0;
                int32_t *l_347[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_22,&l_124,&g_22,&l_124,&g_22,&l_124,&g_22}};
                int16_t *l_359 = &g_144;
                int i, j;
                ++g_349[0][1][4];
                for (g_26 = 0; g_26 < 5; g_26 += 1)
                {
                    for (g_309 = 0; g_309 < 2; g_309 += 1)
                    {
                        for (l_275 = 0; l_275 < 7; l_275 += 1)
                        {
                            g_349[g_26][g_309][l_275] = 0UL;
                        }
                    }
                }
                for (g_328 = (-23); (g_328 != (-10)); g_328++)
                { 
                    (*l_170) = ((*p_75) = (*p_75));
                }
                (*l_344) = ((0xA759260AL >= ((((safe_lshift_func_int8_t_s_s((l_356 , ((*l_343) = (safe_div_func_int16_t_s_s(((((((*l_359) = 1L) , 0L) , l_360) >= ((((safe_div_func_uint16_t_u_u((*g_319), 0x8F3FL)) , 0xDD14F1A5L) , &p_75) == &g_167)) | (*g_319)), 0xA161L)))), 4)) | (**p_75)) < 1UL) < (**p_75))) , 0xC3F39495L);
            }
            else
            { 
                uint32_t l_365 = 0x8E3D2E3BL;
                int32_t l_375 = (-1L);
                int32_t *l_376 = (void*)0;
                int32_t *l_377[7][2] = {{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}};
                int64_t l_378 = 1L;
                int i, j;
                if ((**p_75))
                    break;
                for (l_124 = 19; (l_124 == 20); ++l_124)
                { 
                    int32_t **l_367 = &l_171;
                    int32_t *l_368 = &l_143;
                    l_241[0] = (l_365 = (&g_55 == &g_55));
                    (*l_367) = l_366;
                    (*l_368) = (**g_172);
                    (*l_368) = l_356.f2;
                    (*l_170) = (*l_367);
                }
                g_369 = 0x00BAB020L;
                (*l_366) = ((((-1L) < (!(g_328 < (g_126 = (p_74 , (safe_mul_func_uint8_t_u_u(((*g_288) <= (((void*)0 != l_373) , l_356.f2)), l_374))))))) || p_74) != g_282);
                g_382++;
            }
        }
        (*l_366) = (*g_173);
    }
    for (g_116 = 0; (g_116 <= 1); g_116 += 1)
    { 
        return &g_55;
    }
    l_428 |= ((safe_sub_func_uint8_t_u_u((0x46L <= (safe_rshift_func_int16_t_s_s(((((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(65526UL, (safe_rshift_func_uint16_t_u_u((*g_319), 3)))), (((safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s(((((safe_div_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((+((*l_426) = (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((~((*l_425) = ((2L <= (g_281 |= ((*l_366) = ((safe_rshift_func_uint16_t_u_u((p_76 > (((((*g_288) = (*l_366)) != (((((*l_424) ^= ((safe_mod_func_uint32_t_u_u(((((safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((((0x91L <= g_26) > 0xEF8FC4F5A4C17077LL) >= p_74), g_323)), p_76)), 0x03CFD7B8L)) || (*l_366)) ^ p_74) , p_76), (**p_75))) ^ p_74)) == (*l_366)) > (*l_366)) < g_208)) , (*l_366)) < p_76)), 6)) < (*g_319))))) , 0x3B51E8F3L))) && (**p_75)), 0xB12974DAL)), p_76)))) , g_191.f1), g_22)) , (*l_366)), (*g_319))), (**p_75))) && 1L) >= p_76), p_74)) || 0x6AC3AD8FL) | (*g_319)) | 1UL), g_244)))) == 4294967286UL) < p_74))), g_320[0])) , (*g_319)) && g_309) >= l_427), g_191.f1))), p_76)) <= (-9L));
    for (g_309 = (-20); (g_309 == (-29)); g_309--)
    { 
        int32_t * const l_431[5] = {&l_428,&l_428,&l_428,&l_428,&l_428};
        int32_t **l_432 = &l_171;
        int8_t ***l_464 = &g_57;
        int i;
        (*l_432) = l_431[3];
        (*g_172) = (*l_432);
        if (((safe_rshift_func_int16_t_s_s((-1L), 10)) <= (-9L)))
        { 
            uint32_t l_438 = 0xB9E0CDC9L;
            union U1 l_443 = {4294967288UL};
            int32_t l_446 = 0x0D217EABL;
            uint32_t *l_453 = &g_191.f0;
            (*l_366) &= (**g_172);
            g_435--;
            if (((l_438 = 1UL) > ((g_191 , (l_446 = (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x2311L, ((l_443 , l_431[4]) != (*g_287)))), (safe_lshift_func_uint16_t_u_s(((*l_171) && g_2), 8)))))) | 0x8E1D6876606C33CFLL)))
            { 
                int16_t l_463 = 1L;
                int8_t ****l_465 = &g_56;
                (*l_171) = (safe_lshift_func_int16_t_s_s(((g_281 >= 0UL) , p_76), 2));
                (*g_173) = (safe_mod_func_uint32_t_u_u(((1L < (safe_add_func_uint16_t_u_u(((l_453 != (void*)0) , (safe_lshift_func_uint16_t_u_s((0x3292492CL ^ ((((((~(&l_275 != &l_275)) < (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(p_76, (*g_319))), g_349[0][1][2])), (**g_172)))) , &g_55) == (void*)0) || l_463) && (*g_288))), p_74))), (*g_319)))) & l_463), (**g_172)));
                (**p_77) = ((*l_465) = l_464);
            }
            else
            { 
                (**l_432) = 0x12FACD6FL;
            }
        }
        else
        { 
            int16_t l_474[7][5] = {{1L,0x5295L,1L,0x05F3L,5L},{0xAE9AL,0xF569L,5L,0x05F3L,1L},{5L,0x8D80L,0xF569L,0xF569L,0x8D80L},{0x8D80L,0x17B7L,5L,1L,8L},{0x5295L,0x17B7L,1L,0xB1CDL,0x43B9L},{0L,0x8D80L,0x8D80L,0L,0xB1CDL},{0x5295L,0xF569L,8L,(-1L),0xB1CDL}};
            int32_t l_476 = 0x5CABFE95L;
            int32_t l_478 = 1L;
            int32_t l_479 = 0x37D3CC4FL;
            int32_t l_480[7][1] = {{0x98661768L},{0xE40DB038L},{0x98661768L},{0xE40DB038L},{0x98661768L},{0xE40DB038L},{0x98661768L}};
            uint16_t l_482 = 0UL;
            int8_t **** const *l_488 = &g_55;
            int i, j;
            for (g_126 = 0; (g_126 <= 12); ++g_126)
            { 
                int32_t l_468 = (-1L);
                int32_t l_469 = 0L;
                int32_t l_470[5] = {0x05E394C3L,0x05E394C3L,0x05E394C3L,0x05E394C3L,0x05E394C3L};
                int i;
                l_482--;
                for (g_26 = (-8); (g_26 <= 1); g_26 = safe_add_func_int8_t_s_s(g_26, 6))
                { 
                    int64_t l_487 = (-7L);
                    if (l_487)
                        break;
                }
            }
            return l_488;
        }
    }
    return &g_55;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_191.f0, "g_191.f0", print_hash_value);
    transparent_crc(g_191.f1, "g_191.f1", print_hash_value);
    transparent_crc(g_191.f2, "g_191.f2", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_320[i], "g_320[i]", print_hash_value);

    }
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_341[i][j], "g_341[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_348, "g_348", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_349[i][j][k], "g_349[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_473[i][j][k], "g_473[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_498[i][j][k].f0, "g_498[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_817.f0, "g_817.f0", print_hash_value);
    transparent_crc(g_817.f1, "g_817.f1", print_hash_value);
    transparent_crc(g_817.f2, "g_817.f2", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_911.f0, "g_911.f0", print_hash_value);
    transparent_crc(g_911.f1, "g_911.f1", print_hash_value);
    transparent_crc(g_911.f2, "g_911.f2", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1158[i][j], "g_1158[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1366, "g_1366", print_hash_value);
    transparent_crc(g_1685, "g_1685", print_hash_value);
    transparent_crc(g_1888, "g_1888", print_hash_value);
    transparent_crc(g_1912.f0, "g_1912.f0", print_hash_value);
    transparent_crc(g_1912.f1, "g_1912.f1", print_hash_value);
    transparent_crc(g_1912.f2, "g_1912.f2", print_hash_value);
    transparent_crc(g_1917.f0, "g_1917.f0", print_hash_value);
    transparent_crc(g_1917.f1, "g_1917.f1", print_hash_value);
    transparent_crc(g_1917.f2, "g_1917.f2", print_hash_value);
    transparent_crc(g_1951, "g_1951", print_hash_value);
    transparent_crc(g_2395, "g_2395", print_hash_value);
    transparent_crc(g_2429, "g_2429", print_hash_value);
    transparent_crc(g_2521, "g_2521", print_hash_value);
    transparent_crc(g_2548, "g_2548", print_hash_value);
    transparent_crc(g_2556, "g_2556", print_hash_value);
    transparent_crc(g_2577, "g_2577", print_hash_value);
    transparent_crc(g_2652, "g_2652", print_hash_value);
    transparent_crc(g_2679, "g_2679", print_hash_value);
    transparent_crc(g_2687, "g_2687", print_hash_value);
    transparent_crc(g_2798, "g_2798", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
