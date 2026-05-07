// SPDX-License-Identifier: MIT
// cctest_csmith_4ecd5332.c --- cctest case csmith_4ecd5332 (csmith seed 1322079026)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9577bcdd */

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

// Options:   -s 1322079026 -o /tmp/csmith_gen_z2tcgzj3/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   uint32_t  f1;
};

union U1 {
   const int32_t  f0;
   struct S0  f1;
   signed f2 : 8;
   unsigned f3 : 13;
};

union U2 {
   uint8_t  f0;
   struct S0  f1;
};


static int32_t g_4 = 0L;
static struct S0 g_9 = {0xC3F4F880L,1UL};
static struct S0 *g_8 = &g_9;
static int64_t g_12 = (-2L);
static uint16_t g_13 = 1UL;
static int8_t g_61 = (-1L);
static int8_t g_63 = 2L;
static uint32_t g_65 = 1UL;
static union U2 g_122 = {251UL};
static int8_t *g_131 = &g_63;
static int8_t **g_130 = &g_131;
static int64_t g_145[2][4] = {{(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L)}};
static int32_t g_146[2][1][6] = {{{1L,0L,0L,1L,0L,0L}},{{1L,0L,0L,1L,0L,0L}}};
static int16_t g_170 = 0xAC05L;
static union U1 g_201[2] = {{-1L},{-1L}};
static uint64_t g_244 = 18446744073709551615UL;
static int32_t *g_254 = &g_122.f1.f0;
static uint32_t *g_330 = &g_65;
static uint32_t **g_329 = &g_330;
static uint16_t *g_334 = &g_13;
static uint16_t * const *g_333 = &g_334;
static uint16_t g_364 = 65535UL;
static uint32_t g_394 = 0xA4EBFBA9L;
static uint32_t g_434 = 4294967288UL;
static int32_t g_576 = 5L;
static int32_t * const g_575 = &g_576;
static int32_t * const *g_574 = &g_575;
static int8_t g_607 = (-1L);
static const uint16_t g_718 = 0x36C6L;
static uint32_t ***g_764 = &g_329;
static uint32_t ****g_763[3] = {&g_764,&g_764,&g_764};
static union U2 * const g_793 = &g_122;
static union U2 * const *g_792[1] = {&g_793};
static int16_t *g_885 = &g_170;
static int16_t *g_890 = &g_170;
static uint8_t g_921[2] = {247UL,247UL};
static int32_t g_1005 = (-3L);
static union U2 *g_1038 = &g_122;
static union U2 *g_1039 = (void*)0;
static int8_t g_1045 = (-3L);
static uint16_t **g_1074 = (void*)0;
static int16_t g_1091 = 0L;
static int16_t * const g_1090[3] = {&g_1091,&g_1091,&g_1091};
static int16_t * const *g_1089 = &g_1090[1];
static int16_t * const **g_1088 = &g_1089;
static uint8_t *g_1175 = (void*)0;
static int16_t ****g_1191 = (void*)0;
static int16_t *****g_1190 = &g_1191;
static uint32_t g_1224 = 18446744073709551606UL;
static struct S0 ** const *g_1367 = (void*)0;
static struct S0 ** const **g_1366 = &g_1367;
static struct S0 ** const ***g_1365 = &g_1366;
static const int32_t g_1378 = (-9L);
static const int32_t *g_1377 = &g_1378;
static int64_t *g_1387 = &g_145[0][2];
static int16_t **g_1467 = &g_885;
static int16_t ***g_1466 = &g_1467;
static int16_t g_1570[2] = {3L,3L};
static uint8_t g_1571[2][5] = {{1UL,0x11L,1UL,0x11L,1UL},{6UL,6UL,6UL,6UL,6UL}};
static int64_t **g_1575 = &g_1387;
static int64_t ***g_1574 = &g_1575;
static int32_t g_1617 = 8L;
static int8_t g_1756 = 1L;
static union U1 g_1769[2][3] = {{{0xEDBC7362L},{0xEDBC7362L},{0xEDBC7362L}},{{0xEDBC7362L},{0xEDBC7362L},{0xEDBC7362L}}};
static uint64_t *g_1808 = &g_244;
static union U1 * const *g_1842 = (void*)0;
static union U1 *g_1844[1] = {&g_201[1]};
static union U1 **g_1843 = &g_1844[0];
static int32_t g_1941 = 0L;
static int8_t *** const *g_2011 = (void*)0;
static int8_t *** const **g_2010 = &g_2011;
static int32_t g_2020 = (-7L);
static union U2 **g_2036 = &g_1039;
static union U2 ***g_2035[2] = {&g_2036,&g_2036};
static uint64_t ** const g_2097 = &g_1808;
static uint64_t ** const *g_2096 = &g_2097;
static int32_t g_2121 = 1L;
static uint16_t ****g_2150 = (void*)0;
static uint16_t **** const * const g_2149[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t ** const *g_2240 = &g_130;
static int8_t ** const **g_2239 = &g_2240;
static int8_t ** const ***g_2238 = &g_2239;
static union U2 ****g_2281[1][2][6] = {{{&g_2035[1],&g_2035[0],&g_2035[1],&g_2035[0],&g_2035[1],&g_2035[0]},{&g_2035[1],&g_2035[0],&g_2035[1],&g_2035[0],&g_2035[1],&g_2035[0]}}};
static union U2 ****g_2282 = &g_2035[0];
static const uint16_t g_2295 = 1UL;
static int32_t g_2452 = 1L;
static const int16_t g_2460 = 0x6F83L;
static const uint64_t g_2593 = 0x1BE864C560E43CBDLL;
static int32_t g_2620 = 1L;
static uint64_t g_2690 = 0UL;
static const union U2 *g_2700 = &g_122;
static const union U2 **g_2699 = &g_2700;
static const union U2 ***g_2698 = &g_2699;
static const union U2 ****g_2697 = &g_2698;
static const union U2 *****g_2696[1][6][1] = {{{(void*)0},{&g_2697},{(void*)0},{(void*)0},{&g_2697},{(void*)0}}};
static const int32_t g_2720[2][4][5] = {{{1L,0x65122858L,0x1A9FB9C4L,0xF780201AL,0x72FFFD74L},{(-5L),0xF780201AL,0xB85D5BF0L,0x7E9307A3L,0x7E9307A3L},{1L,0x28E95658L,1L,0xB85D5BF0L,2L},{0xBF78D6E1L,0x28E95658L,0x6976496AL,(-5L),0x65122858L}},{{0xA3C439E5L,0xF780201AL,0x7E9307A3L,0x1A9FB9C4L,0xBF78D6E1L},{0x207EB65CL,0x65122858L,0x6976496AL,0x65122858L,0x207EB65CL},{0x01D40FE4L,(-5L),1L,0x65122858L,0x1A9FB9C4L},{0x3E2CE858L,0x01D40FE4L,0xB85D5BF0L,0x1A9FB9C4L,5L}}};
static union U2 *****g_2873 = &g_2281[0][1][4];
static int32_t g_3042 = (-1L);
static int32_t g_3044 = 0xA5B24E91L;
static int8_t g_3058 = 0xCEL;
static uint64_t g_3087 = 18446744073709551612UL;
static struct S0 **g_3176[7] = {&g_8,&g_8,&g_8,&g_8,&g_8,&g_8,&g_8};
static uint64_t g_3192 = 0UL;



static uint8_t  func_1(void);
static struct S0  func_16(struct S0 * p_17, const uint64_t  p_18, uint64_t  p_19);
static uint32_t  func_22(struct S0 * p_23, int8_t  p_24, int32_t * p_25);
static struct S0 * func_26(struct S0 * p_27);
static struct S0 * func_28(int32_t * p_29, struct S0  p_30, int64_t  p_31, const int32_t * const  p_32, int32_t  p_33);
static struct S0  func_35(struct S0 * const  p_36, uint32_t  p_37, const uint32_t  p_38, int64_t  p_39);
static struct S0 * func_40(int32_t * p_41);
static uint32_t  func_44(const int16_t  p_45, struct S0 * p_46, int8_t  p_47, struct S0 * p_48);




static uint8_t  func_1(void)
{ 
    int64_t l_2 = 0L;
    int32_t *l_3 = &g_4;
    struct S0 l_6 = {-8L,9UL};
    struct S0 *l_7 = &l_6;
    int32_t *l_10 = &g_9.f0;
    int32_t *l_11[1][3][7] = {{{(void*)0,&g_9.f0,&g_9.f0,(void*)0,(void*)0,&g_9.f0,&g_9.f0},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,&g_9.f0,&g_9.f0,(void*)0,(void*)0,&g_9.f0}}};
    union U2 l_3077 = {4UL};
    int8_t l_3107[5][7][7] = {{{0L,(-4L),0xC0L,(-1L),0x2EL,0xF3L,0x2BL},{0x52L,0xC0L,0x34L,0x79L,0x26L,0x37L,(-7L)},{0x2EL,0xFAL,1L,0xF3L,0xF3L,1L,0xFAL},{0x19L,6L,0x79L,(-3L),0xB7L,(-1L),0x54L},{0xFAL,(-1L),(-1L),0xC5L,0xB3L,1L,0x57L},{(-1L),0x01L,0x62L,(-3L),(-8L),0xB1L,0x14L},{(-9L),0x57L,0xD9L,0xF3L,0x9EL,0x01L,0x51L}},{{0xC8L,7L,0xFAL,0x79L,0x2BL,(-3L),1L},{0xE4L,0x26L,(-1L),(-1L),0x64L,5L,(-1L)},{(-7L),0x54L,0x48L,0x2EL,0x0EL,5L,0x34L},{7L,0x62L,(-4L),0xA8L,0xC5L,(-3L),0xDDL},{0x31L,(-7L),0x81L,0L,(-4L),0x01L,0x01L},{1L,0xC8L,(-9L),0xC8L,1L,0xB1L,(-7L)},{(-1L),0xA8L,(-1L),0x0EL,0xB1L,0x7FL,0L}},{{(-1L),0xC8L,0xC3L,(-1L),0xD9L,(-4L),(-1L)},{(-1L),0x0EL,(-1L),0xC5L,(-4L),6L,0xA8L},{0x7FL,0xD9L,0x64L,0L,0x0EL,(-3L),(-9L)},{0L,0x81L,0L,0xFAL,0x2FL,0x57L,(-9L)},{0xC0L,(-1L),0x52L,0x34L,0xC3L,0xFAL,0L},{0x9EL,(-7L),0x52L,0L,0x51L,0x37L,1L},{0xC8L,8L,0L,(-3L),6L,0L,0xC3L}},{{0L,0xFAL,0x64L,0xA2L,0L,0xA2L,0x64L},{0x2EL,0x2EL,(-1L),0x19L,(-1L),0x48L,0xC0L},{(-4L),0xF3L,0xC3L,0xDDL,0x93L,(-8L),0xA2L},{0x51L,0L,(-1L),0xB1L,(-1L),0xE4L,0x81L},{(-1L),0xFAL,0x2EL,0L,0L,(-1L),0x2BL},{0x14L,0x2BL,0xDDL,(-1L),6L,0x52L,(-1L)},{0L,1L,0x37L,8L,0x51L,1L,0x2FL}},{{0L,0L,8L,0x9EL,0xC3L,(-9L),0x2FL},{0L,6L,0x81L,0xFAL,0x2FL,0xB7L,(-1L)},{(-1L),0x26L,0xFAL,1L,0x0EL,0x01L,0x2BL},{0L,(-4L),0x01L,0x01L,(-4L),0L,0x81L},{0x57L,0xDDL,7L,0x48L,0xD9L,(-1L),0xA2L},{6L,0x14L,0xD9L,0x52L,0xB1L,0x79L,0xC0L},{0x81L,0xDDL,0L,(-4L),0x7FL,0xD9L,0x64L}}};
    uint32_t l_3124 = 0x9B833231L;
    uint16_t l_3125 = 65529UL;
    const uint16_t *l_3144 = (void*)0;
    struct S0 **l_3175[5][5];
    struct S0 *l_3207[1];
    const int16_t *l_3215 = (void*)0;
    const int16_t **l_3214[7] = {(void*)0,&l_3215,(void*)0,(void*)0,&l_3215,(void*)0,(void*)0};
    const int16_t ** const *l_3213[3];
    const int16_t ** const **l_3212 = &l_3213[2];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_3175[i][j] = &l_7;
    }
    for (i = 0; i < 1; i++)
        l_3207[i] = &g_9;
    for (i = 0; i < 3; i++)
        l_3213[i] = &l_3214[3];
    (*l_3) ^= l_2;
    (*l_3) = (g_9.f0 &= ((((*l_7) = ((((*l_3) == (l_3 == &g_4)) & (safe_unary_minus_func_uint8_t_u(0x9CL))) , l_6)) , (g_8 != &g_9)) <= (*l_3)));
    g_13--;
    for (l_6.f0 = 0; (l_6.f0 <= 0); l_6.f0 += 1)
    { 
        int32_t *l_34 = &g_4;
        int32_t l_985 = (-1L);
        const int64_t l_986 = 0L;
        int16_t l_1239 = 0x5A52L;
        uint32_t l_3064 = 18446744073709551613UL;
        uint8_t *l_3067 = &g_1571[0][2];
        int16_t ***l_3068 = (void*)0;
        int64_t l_3069 = 0xCD191DFFBE6FFB27LL;
        struct S0 l_3103 = {0xE3122216L,0x3A6160A5L};
        union U2 ***** const l_3140[3][2][4] = {{{&g_2281[0][0][4],&g_2281[0][0][4],(void*)0,&g_2281[0][0][5]},{&g_2281[0][0][4],&g_2281[0][1][5],&g_2281[0][1][4],&g_2281[0][0][4]}},{{(void*)0,&g_2281[0][0][5],(void*)0,&g_2281[0][1][4]},{&g_2281[0][0][1],&g_2281[0][0][5],(void*)0,&g_2281[0][0][4]}},{{&g_2281[0][0][5],&g_2281[0][1][5],&g_2281[0][1][5],&g_2281[0][0][5]},{(void*)0,&g_2281[0][0][4],&g_2281[0][1][5],&g_2281[0][1][4]}}};
        const uint16_t l_3146 = 0xECDDL;
        uint32_t l_3180 = 4UL;
        int8_t l_3195 = 0x1CL;
        int i, j, k;
    }
    (*l_7) = func_16(((*l_3) , ((**g_1843) , l_3207[0])), ((safe_mul_func_uint8_t_u_u(253UL, (g_122.f0 = 0x5DL))) != (*l_3)), ((**g_2097) &= (safe_sub_func_uint8_t_u_u((l_3212 == (void*)0), 0UL))));
    return (*l_10);
}



static struct S0  func_16(struct S0 * p_17, const uint64_t  p_18, uint64_t  p_19)
{ 
    int32_t *l_2958 = &g_2452;
    union U2 **l_2968 = (void*)0;
    int32_t l_2973[4][7];
    int8_t l_2974 = (-8L);
    int32_t * const l_2983 = &g_1617;
    struct S0 l_2986 = {0L,0xBEE7C824L};
    union U2 ** const **l_3031 = (void*)0;
    int64_t l_3033 = 0x93D9D5BF3AC171F2LL;
    int64_t l_3057 = 5L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_2973[i][j] = 5L;
    }
    for (g_13 = (-23); (g_13 != 17); g_13 = safe_add_func_uint32_t_u_u(g_13, 1))
    { 
        int32_t *l_2956[1][3];
        union U2 **l_2967 = &g_1039;
        int64_t * const l_2981 = (void*)0;
        int32_t l_3001[6];
        union U2 ** const *l_3029 = &l_2967;
        union U2 ** const **l_3028 = &l_3029;
        uint32_t l_3050[1][4];
        uint32_t l_3059 = 18446744073709551615UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2956[i][j] = &g_2121;
        }
        for (i = 0; i < 6; i++)
            l_3001[i] = 1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_3050[i][j] = 18446744073709551615UL;
        }
        for (g_1005 = 0; (g_1005 > (-29)); --g_1005)
        { 
            uint32_t l_2959 = 0xAD4D013CL;
            int32_t l_2962 = 9L;
            int32_t l_2963[4] = {0xC252A1C6L,0xC252A1C6L,0xC252A1C6L,0xC252A1C6L};
            uint16_t *l_2964 = &g_364;
            struct S0 l_2982 = {7L,0xA5541B55L};
            int32_t **l_2984 = &l_2956[0][0];
            int i;
            for (g_12 = 0; (g_12 >= (-6)); --g_12)
            { 
                struct S0 l_2955 = {0L,18446744073709551606UL};
                int32_t **l_2957 = &l_2956[0][0];
                for (g_122.f1.f0 = 1; (g_122.f1.f0 >= 0); g_122.f1.f0 -= 1)
                { 
                    return l_2955;
                }
                (*l_2957) = l_2956[0][0];
            }
            (**g_574) &= (0x94L <= (((((l_2958 == (void*)0) ^ l_2959) <= 0x6BL) || ((safe_rshift_func_uint16_t_u_u(((*l_2964)--), ((((**g_2282) = l_2967) != l_2968) > 0x2D49L))) > p_19)) == (-4L)));
            for (g_9.f0 = 18; (g_9.f0 <= 22); ++g_9.f0)
            { 
                struct S0 l_2971[6] = {{-10L,0x3FEC2A1BL},{-10L,0x3FEC2A1BL},{-10L,0x3FEC2A1BL},{-10L,0x3FEC2A1BL},{-10L,0x3FEC2A1BL},{-10L,0x3FEC2A1BL}};
                uint8_t l_2977 = 255UL;
                int i;
                for (g_122.f0 = 0; (g_122.f0 <= 3); g_122.f0 += 1)
                { 
                    struct S0 l_2972[4][5] = {{{0x46AE2529L,18446744073709551606UL},{0x892952F0L,0x35CE2A49L},{0x892952F0L,0x35CE2A49L},{0x46AE2529L,18446744073709551606UL},{0x892952F0L,0x35CE2A49L}},{{0xF1CB1DF0L,0x6A66428DL},{0xF1CB1DF0L,0x6A66428DL},{0xA261ED6BL,0x7ED24A7CL},{0xF1CB1DF0L,0x6A66428DL},{0xF1CB1DF0L,0x6A66428DL}},{{0x892952F0L,0x35CE2A49L},{0x46AE2529L,18446744073709551606UL},{0x892952F0L,0x35CE2A49L},{0x892952F0L,0x35CE2A49L},{0x46AE2529L,18446744073709551606UL}},{{0xF1CB1DF0L,0x6A66428DL},{-7L,0x2306A16CL},{-7L,0x2306A16CL},{0xF1CB1DF0L,0x6A66428DL},{-7L,0x2306A16CL}}};
                    int64_t l_2975 = 0x2DBC34EF80B1F3FFLL;
                    int32_t l_2976 = 0L;
                    int i, j;
                    l_2972[2][4] = l_2971[5];
                    l_2973[0][5] &= l_2963[g_122.f0];
                    l_2977--;
                    (*g_575) &= (0x88L == (l_2963[g_122.f0] = (safe_unary_minus_func_uint16_t_u(((l_2963[g_122.f0] || 0x8DEA2040L) > ((***g_2240) ^= (l_2981 == (**g_1574))))))));
                }
                return l_2982;
            }
            (*l_2984) = l_2983;
            if ((+251UL))
            { 
                struct S0 l_2987 = {1L,0x91A45242L};
                if ((**l_2984))
                { 
                    if (p_19)
                        break;
                    return l_2986;
                }
                else
                { 
                    g_1190 = (void*)0;
                    (*l_2984) = l_2956[0][0];
                    (*g_8) = (*p_17);
                    (*g_8) = l_2982;
                }
                return l_2987;
            }
            else
            { 
                for (g_434 = (-29); (g_434 == 52); g_434 = safe_add_func_int64_t_s_s(g_434, 8))
                { 
                    return (*p_17);
                }
            }
        }
        for (g_122.f0 = 0; (g_122.f0 != 18); ++g_122.f0)
        { 
            uint8_t *l_2998 = (void*)0;
            int32_t l_3008[1][4];
            uint32_t l_3025 = 0x3DC1B517L;
            int32_t l_3026 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_3008[i][j] = 1L;
            }
            for (g_1045 = 0; g_1045 < 2; g_1045 += 1)
            {
                g_921[g_1045] = 0UL;
            }
            g_1377 = (((*g_131) && (((safe_rshift_func_uint16_t_u_s(((void*)0 != &g_2150), ((**g_1089) ^= (((--(*g_1808)) | ((safe_rshift_func_uint8_t_u_s((g_921[0] = 254UL), 0)) ^ (*l_2983))) | ((safe_mod_func_int32_t_s_s(0x347EEA9CL, (p_19 ^ p_19))) != l_3001[2]))))) < 0xB18EL) != 0x15L)) , (*g_574));
            for (l_2986.f0 = 0; (l_2986.f0 < 16); ++l_2986.f0)
            { 
                uint16_t *l_3014 = &g_364;
                union U2 l_3019 = {246UL};
                uint32_t l_3024 = 3UL;
                union U2 ** const ***l_3030[3];
                int32_t *l_3032[7][3];
                uint16_t l_3045[1][4] = {{65535UL,65535UL,65535UL,65535UL}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_3030[i] = (void*)0;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_3032[i][j] = &l_3019.f1.f0;
                }
                (*l_2983) = (safe_div_func_uint16_t_u_u(0xEC35L, (l_3008[0][1] & (l_3026 = ((*g_330) == (safe_mod_func_uint8_t_u_u(l_3008[0][1], (safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((--(*l_3014)))) , (safe_lshift_func_uint8_t_u_u(((((l_3019 , ((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u(((***g_764) > (*g_575)), 7)) , (*l_2983)) >= l_3024) >= l_3008[0][0]), (**g_333))) >= (****g_2239))) >= (**g_329)) , 0xB6579F4EL) , 0x7FL), 4))) , l_3025), 0x1249L)))))))));
                if (((g_1617 , (+p_18)) == ((l_3031 = l_3028) == (*g_2873))))
                { 
                    l_3032[1][1] = &l_3026;
                }
                else
                { 
                    const struct S0 l_3038 = {1L,0xB9AA4ECBL};
                    int32_t l_3039 = 0L;
                    int32_t l_3043 = (-1L);
                    int32_t l_3048 = 0L;
                    int32_t l_3049 = 0L;
                    g_3042 &= ((p_19 != (l_3033 <= ((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((0xDCAE9433L != (l_3038 , ((((*l_2983) = (((***g_764) &= (((**g_1089) = l_3008[0][2]) || p_18)) > ((--(*l_3014)) == l_3038.f0))) >= (*g_1377)) >= (-1L)))), 4)) , 1L), 0x43E7L)) == p_19))) != p_19);
                    ++l_3045[0][2];
                    --l_3050[0][2];
                }
                (*g_575) |= (safe_rshift_func_uint16_t_u_s((++(*l_3014)), 0));
            }
            (*g_8) = (*p_17);
        }
        l_3059++;
    }
    return l_2986;
}



static uint32_t  func_22(struct S0 * p_23, int8_t  p_24, int32_t * p_25)
{ 
    int32_t *l_2920 = (void*)0;
    int32_t **l_2921 = (void*)0;
    int32_t **l_2922 = &l_2920;
    (*l_2922) = l_2920;
lbl_2925:
    (*l_2922) = p_25;
    for (g_2452 = 0; (g_2452 != 7); g_2452 = safe_add_func_uint64_t_u_u(g_2452, 7))
    { 
        uint16_t l_2928 = 0x0D53L;
        int32_t **l_2948 = &g_254;
        if (g_2452)
            goto lbl_2925;
        (**g_574) &= (((safe_mod_func_uint8_t_u_u((**l_2922), (l_2928 , ((((**g_333) = (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((l_2928 >= ((*g_764) == ((safe_div_func_uint64_t_u_u((0x8374L | (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s((-1L), (((!1L) < (***g_1574)) , (-3L)))), 0x7481918CL)), p_24))), p_24)) , (void*)0))) < 5UL), (-9L))), 2))) | p_24) , (*l_2920))))) >= 0x5222L) >= p_24);
        (*l_2948) = (((((l_2928 && 0xA153L) != (***g_1574)) ^ (((safe_unary_minus_func_int8_t_s(((*p_25) <= ((**g_574) &= ((-4L) && (+(((safe_mod_func_int64_t_s_s(l_2928, ((**g_2097) |= (((*l_2920) != p_24) != (**g_329))))) , (*g_330)) > p_24))))))) & p_24) , 0L)) < (-1L)) , (*g_574));
        return p_24;
    }
    return (**g_329);
}



static struct S0 * func_26(struct S0 * p_27)
{ 
    int64_t ***l_2145[3][6] = {{&g_1575,&g_1575,&g_1575,&g_1575,&g_1575,&g_1575},{(void*)0,&g_1575,&g_1575,&g_1575,(void*)0,(void*)0},{&g_1575,&g_1575,&g_1575,&g_1575,&g_1575,&g_1575}};
    int32_t l_2148 = 1L;
    uint16_t *****l_2151 = &g_2150;
    int32_t **l_2154 = &g_254;
    int32_t ***l_2153 = &l_2154;
    int32_t ****l_2152 = &l_2153;
    uint32_t *l_2169 = &g_65;
    struct S0 l_2179 = {0x476E1AB4L,0UL};
    uint64_t ** const l_2217 = (void*)0;
    uint16_t l_2243 = 3UL;
    union U1 l_2250 = {0x8FB4CFB2L};
    union U2 l_2260 = {0xABL};
    int32_t l_2319 = 4L;
    int32_t l_2320 = (-1L);
    int32_t l_2321[1][1];
    uint32_t l_2322 = 0UL;
    struct S0 *l_2381 = (void*)0;
    uint8_t l_2385 = 0xAAL;
    struct S0 ***l_2426 = (void*)0;
    struct S0 ****l_2425[4][4] = {{&l_2426,&l_2426,&l_2426,&l_2426},{&l_2426,&l_2426,&l_2426,&l_2426},{&l_2426,&l_2426,&l_2426,&l_2426},{&l_2426,&l_2426,&l_2426,&l_2426}};
    struct S0 *****l_2424 = &l_2425[0][0];
    uint32_t ***l_2456 = (void*)0;
    int16_t **l_2474 = &g_890;
    uint16_t **l_2484 = (void*)0;
    int32_t l_2508[6][2][1] = {{{0xB8312E70L},{9L}},{{0xB8312E70L},{(-1L)}},{{(-1L)},{0xB8312E70L}},{{9L},{0xB8312E70L}},{{(-1L)},{(-1L)}},{{0xB8312E70L},{9L}}};
    int16_t l_2532 = 0xA8B3L;
    uint32_t l_2533[2];
    int16_t l_2537[3][5][3] = {{{1L,1L,1L},{0L,(-1L),1L},{(-4L),1L,0x81B0L},{0x51F2L,0x51F2L,1L},{1L,(-1L),1L}},{{0x51F2L,(-1L),(-1L)},{(-4L),(-1L),0x81B0L},{0L,0x51F2L,(-1L)},{1L,1L,1L},{0L,(-1L),1L}},{{(-4L),1L,0x81B0L},{0x51F2L,0x51F2L,1L},{1L,(-1L),1L},{0x51F2L,(-1L),(-1L)},{(-4L),(-1L),0x81B0L}}};
    struct S0 *l_2538 = &l_2179;
    const int8_t l_2569 = 0x92L;
    uint8_t l_2621 = 0xAEL;
    uint16_t l_2664[3][1];
    const union U1 l_2665 = {1L};
    int8_t *l_2685 = &g_607;
    int32_t l_2688[7];
    uint64_t *l_2689 = &g_2690;
    union U2 ***l_2695 = &g_2036;
    union U2 **** const l_2694[5] = {&l_2695,&l_2695,&l_2695,&l_2695,&l_2695};
    union U2 **** const *l_2693 = &l_2694[3];
    int8_t l_2741 = 0x51L;
    uint64_t l_2742[6][4][1] = {{{18446744073709551606UL},{0x86EE7CFFC2999263LL},{18446744073709551606UL},{0x86EE7CFFC2999263LL}},{{18446744073709551606UL},{0x86EE7CFFC2999263LL},{18446744073709551606UL},{0x86EE7CFFC2999263LL}},{{18446744073709551606UL},{0x86EE7CFFC2999263LL},{18446744073709551606UL},{0x86EE7CFFC2999263LL}},{{18446744073709551606UL},{0x86EE7CFFC2999263LL},{18446744073709551606UL},{0x86EE7CFFC2999263LL}},{{18446744073709551606UL},{0x86EE7CFFC2999263LL},{18446744073709551606UL},{0x86EE7CFFC2999263LL}},{{18446744073709551606UL},{0x86EE7CFFC2999263LL},{18446744073709551606UL},{0x86EE7CFFC2999263LL}}};
    struct S0 *l_2765 = &g_9;
    int32_t l_2773 = (-1L);
    uint64_t l_2821 = 0x4C67A8CDA7CA8F2DLL;
    uint16_t *l_2865 = &l_2243;
    int8_t l_2877 = 1L;
    uint8_t l_2895[5][3][6] = {{{9UL,0x56L,0xAEL,0x2AL,0x58L,1UL},{0xDAL,0x01L,0x23L,0x04L,0xD8L,252UL},{0xE4L,255UL,0x41L,0x41L,0xDAL,0x86L}},{{1UL,0x1CL,6UL,0xDAL,0x23L,255UL},{0x86L,0xDBL,252UL,0xDBL,0x86L,0x56L},{7UL,0UL,0x41L,0x01L,9UL,255UL}},{{0xD2L,0x04L,0xAAL,0UL,249UL,255UL},{247UL,249UL,0x2AL,0x46L,0xDBL,0UL},{0x23L,0x15L,0UL,1UL,249UL,0xE4L}},{{7UL,0xAAL,0x41L,247UL,0xAEL,0xD2L},{0UL,0xDAL,0x56L,0x56L,0xDAL,0UL},{0x46L,0xD2L,0x1CL,0x15L,252UL,255UL}},{{249UL,0x14L,9UL,0xDAL,247UL,0x86L},{249UL,1UL,0xDAL,0x15L,7UL,3UL},{0x46L,252UL,0xE4L,0x56L,0x2AL,0x14L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2321[i][j] = 5L;
    }
    for (i = 0; i < 2; i++)
        l_2533[i] = 0x9649B0F1L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2664[i][j] = 0x2A5EL;
    }
    for (i = 0; i < 7; i++)
        l_2688[i] = (-10L);
    return p_27;
}



static struct S0 * func_28(int32_t * p_29, struct S0  p_30, int64_t  p_31, const int32_t * const  p_32, int32_t  p_33)
{ 
    int16_t l_1244 = (-1L);
    int32_t l_1247 = 0xD2F37EFDL;
    uint64_t *l_1248[3][6] = {{(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244},{&g_244,&g_244,&g_244,&g_244,&g_244,&g_244},{(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244}};
    int32_t l_1250 = 1L;
    int32_t l_1251 = 0x0B5DD38AL;
    int32_t l_1259[7] = {0x980B0C2EL,0x61A1A474L,0x61A1A474L,0x980B0C2EL,0x61A1A474L,0x61A1A474L,0x980B0C2EL};
    int8_t l_1261 = 0L;
    struct S0 * const *l_1271 = (void*)0;
    struct S0 * const ** const l_1270 = &l_1271;
    int16_t **** const *l_1294 = &g_1191;
    union U1 l_1372 = {-9L};
    uint8_t l_1455 = 0xD5L;
    int8_t l_1479 = 0L;
    int16_t *l_1512 = &g_1091;
    int16_t l_1543[1][4][7] = {{{0xA6B6L,2L,0xA6B6L,0xA6B6L,2L,0xA6B6L,0xA6B6L},{2L,2L,0x487CL,2L,2L,0x487CL,2L},{2L,0xA6B6L,0xA6B6L,2L,0xA6B6L,0xA6B6L,2L},{0xA6B6L,2L,0xA6B6L,0xA6B6L,2L,0xA6B6L,0xA6B6L}}};
    int32_t l_1563 = 0xA087FC85L;
    union U2 ***l_1663 = (void*)0;
    union U2 ****l_1662 = &l_1663;
    int64_t l_1730 = 0L;
    uint32_t l_1736 = 0xDD504AE6L;
    union U1 *l_1768 = &g_1769[1][2];
    struct S0 *l_1770 = &g_9;
    uint16_t **l_1841 = &g_334;
    struct S0 **l_1875[5][3] = {{&l_1770,&l_1770,&l_1770},{&g_8,(void*)0,&g_8},{&l_1770,&l_1770,&l_1770},{&g_8,(void*)0,&g_8},{&l_1770,&l_1770,&l_1770}};
    struct S0 ***l_1874 = &l_1875[2][0];
    struct S0 ****l_1873 = &l_1874;
    struct S0 *****l_1872 = &l_1873;
    uint64_t l_1876[5];
    int32_t l_1937 = 0x239A34D1L;
    int8_t l_1940 = 0x3CL;
    int16_t l_1943[2][5] = {{(-6L),(-7L),(-6L),(-7L),(-6L)},{3L,3L,3L,3L,3L}};
    uint32_t l_1983 = 0UL;
    int64_t l_2031[3];
    int16_t l_2092[5][4] = {{(-1L),1L,(-2L),(-1L)},{0x46C2L,(-1L),0x46C2L,(-2L)},{1L,(-1L),(-1L),(-1L)},{(-1L),1L,1L,(-1L)},{0x46C2L,(-1L),1L,(-2L)}};
    uint64_t * const **l_2124 = (void*)0;
    union U2 l_2129 = {0x74L};
    struct S0 *l_2133 = &g_9;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1876[i] = 0x2BD9617240CCAFCALL;
    for (i = 0; i < 3; i++)
        l_2031[i] = 6L;
    return l_2133;
}



static struct S0  func_35(struct S0 * const  p_36, uint32_t  p_37, const uint32_t  p_38, int64_t  p_39)
{ 
    int8_t **l_987 = &g_131;
    int32_t l_992 = 0x3CC09730L;
    uint64_t *l_993 = (void*)0;
    uint64_t *l_994[7][2] = {{&g_244,&g_244},{&g_244,&g_244},{&g_244,&g_244},{&g_244,&g_244},{&g_244,&g_244},{&g_244,&g_244},{&g_244,&g_244}};
    union U1 l_999 = {0xD2FD7798L};
    int32_t *l_1004 = &g_1005;
    const union U2 *l_1008 = &g_122;
    union U2 *l_1011 = &g_122;
    union U2 **l_1010[1][1];
    union U2 ***l_1009[2];
    struct S0 l_1015 = {3L,1UL};
    int32_t l_1027[3][2][3] = {{{(-4L),(-4L),(-4L)},{0xDBEF104EL,0xDBEF104EL,0xDBEF104EL}},{{(-4L),(-4L),(-4L)},{0xDBEF104EL,0xDBEF104EL,0xDBEF104EL}},{{(-4L),(-4L),(-4L)},{0xDBEF104EL,0xDBEF104EL,0xDBEF104EL}}};
    uint16_t **l_1071 = (void*)0;
    uint16_t *l_1106 = &g_13;
    int16_t *****l_1126 = (void*)0;
    int32_t l_1138 = 1L;
    int8_t l_1139 = 0xDBL;
    int8_t l_1140 = 0xB4L;
    int16_t l_1141 = 0x07A1L;
    uint16_t ***l_1163 = &l_1071;
    uint8_t *l_1176 = &g_921[1];
    uint32_t l_1225 = 3UL;
    int32_t *l_1238 = &l_1027[0][0][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1010[i][j] = &l_1011;
    }
    for (i = 0; i < 2; i++)
        l_1009[i] = &l_1010[0][0];
    if ((l_987 == (((*l_1004) |= ((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_992 = (l_992 || g_122.f0)), (safe_rshift_func_uint8_t_u_s(((*g_575) <= (((g_244++) && ((((*g_334) & ((l_999 , (+(safe_sub_func_int16_t_s_s((!p_39), l_999.f3)))) || l_999.f0)) <= g_146[1][0][2]) && l_999.f2)) , 0L)), 7)))), 1L)) || (-1L))) , l_987)))
    { 
        const union U2 *l_1006 = &g_122;
        const union U2 **l_1007[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1007[i] = &l_1006;
        l_1008 = l_1006;
        l_992 = (&g_792[0] != l_1009[1]);
    }
    else
    { 
        int8_t l_1014 = 8L;
        const int8_t *l_1023 = (void*)0;
        const int8_t **l_1022 = &l_1023;
        const int8_t ***l_1021 = &l_1022;
        int64_t *l_1024 = &g_12;
        int32_t *l_1025 = &g_122.f1.f0;
        int32_t *l_1026 = &g_146[1][0][2];
        uint16_t *l_1105 = &g_13;
        int64_t l_1111 = 0x3C5101AEF07BE6B2LL;
        int32_t l_1125 = 0x981828B3L;
        int32_t l_1128 = 0L;
        int32_t l_1129 = 0x50BBD1BCL;
        int32_t l_1130 = 2L;
        int32_t l_1131 = 0x1AE62BEAL;
        int32_t l_1132 = 9L;
        int32_t l_1133 = (-1L);
        int32_t l_1134 = (-4L);
        int32_t l_1136 = 1L;
        int32_t l_1137[3][2][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}}};
        uint8_t l_1142 = 2UL;
        int64_t l_1165 = 0x00BB21CAA0A9DB86LL;
        int32_t l_1185 = 1L;
        int64_t l_1186[3][3] = {{0x9B46D2304D8B5D2DLL,0x59E4B06D69A73D39LL,0x9B46D2304D8B5D2DLL},{(-10L),(-10L),(-10L)},{0x9B46D2304D8B5D2DLL,0x59E4B06D69A73D39LL,0x9B46D2304D8B5D2DLL}};
        int16_t *****l_1192 = &g_1191;
        const int32_t *l_1203 = &g_576;
        int i, j, k;
lbl_1108:
        (*l_1026) ^= ((**g_574) |= (safe_add_func_uint64_t_u_u((((l_1014 , l_1015) , p_37) <= (0x476EF1EFE597224CLL & ((*l_1024) &= ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(l_999.f0)), (safe_sub_func_uint16_t_u_u(((*g_330) >= (l_1021 != (void*)0)), p_38)))) , 2L)))), l_1014)));
        if (((l_999.f3 , (p_39 | ((l_1027[0][0][1] ^= (p_39 , 0x1056270CL)) , p_38))) == g_63))
        { 
            union U2 *l_1040 = (void*)0;
            union U2 *l_1041 = &g_122;
            int16_t *l_1042 = (void*)0;
            int16_t *l_1043 = &g_170;
            int32_t l_1044 = 0x3B448BCBL;
            int32_t *l_1127[7][2][6] = {{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}},{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}},{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}},{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}},{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}},{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}},{{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]},{&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1],&l_1027[0][0][1]}}};
            int64_t l_1135 = 1L;
            uint16_t ***l_1162 = &g_1074;
            struct S0 l_1164 = {0xEF94DD5EL,0xD0E777C2L};
            int i, j, k;
            if (((safe_div_func_uint8_t_u_u(((*l_1026) , g_201[1].f3), (((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((*g_334) |= ((18446744073709551613UL != ((**g_574) & ((((((((*l_1024) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_1044 = ((*l_1043) = ((l_1040 = (p_38 , (g_1039 = (g_1038 = &g_122)))) == l_1041))), 0x66E2L)) <= p_38), (*l_1026)))) <= (-1L)) <= 0x7684L) >= g_921[1]) , g_1045) > 65531UL) && l_1044))) | 0xAE6FL)), 5)), p_39)) || g_201[1].f0) | 0x8CC82AD3L))) <= g_146[1][0][2]))
            { 
                uint32_t l_1055 = 0xBB863038L;
                union U1 l_1075[4] = {{0L},{0L},{0L},{0L}};
                int i;
                for (g_576 = 0; (g_576 <= 0); g_576 = safe_add_func_uint64_t_u_u(g_576, 3))
                { 
                    struct S0 l_1048 = {0x2E98EC6DL,6UL};
                    return l_1048;
                }
                for (g_434 = (-5); (g_434 <= 57); g_434 = safe_add_func_uint16_t_u_u(g_434, 5))
                { 
                    int32_t *l_1051 = &l_1027[0][1][0];
                    int32_t *l_1052 = &g_576;
                    int32_t *l_1053 = (void*)0;
                    int32_t *l_1054[1][7][6] = {{{(void*)0,&l_999.f1.f0,&l_999.f1.f0,(void*)0,&l_1044,(void*)0},{(void*)0,&l_1044,(void*)0,&l_999.f1.f0,&l_999.f1.f0,(void*)0},{&l_1015.f0,&l_1015.f0,&l_999.f1.f0,(void*)0,&l_999.f1.f0,&l_1015.f0},{&l_999.f1.f0,&l_1044,(void*)0,(void*)0,&l_1044,&l_999.f1.f0},{&l_1015.f0,&l_999.f1.f0,(void*)0,&l_999.f1.f0,&l_1015.f0,&l_1015.f0},{(void*)0,&l_999.f1.f0,&l_999.f1.f0,(void*)0,&l_1044,(void*)0},{(void*)0,&l_1044,(void*)0,&l_999.f1.f0,&l_999.f1.f0,(void*)0}}};
                    int32_t **l_1058 = (void*)0;
                    int32_t **l_1059 = &g_254;
                    uint8_t *l_1064 = &g_921[1];
                    uint16_t **l_1073 = &g_334;
                    uint16_t ***l_1072[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1072[i] = &l_1073;
                    l_1051 = l_1051;
                    ++l_1055;
                    g_254 = &l_992;
                    (*l_1059) = &l_1044;
                    (*l_1026) |= (((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_37 <= ((*l_1064)--)), p_39)), (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_1071 != (g_1074 = l_1071)), 0)), (l_1075[0] , (((safe_rshift_func_int8_t_s_u(1L, 6)) ^ l_1075[0].f3) != 1UL)))))) && 0x47237C55L) & l_1015.f0);
                }
                return (*p_36);
            }
            else
            { 
                int32_t l_1084 = 7L;
                int16_t * const **l_1086 = (void*)0;
                uint16_t **l_1103 = (void*)0;
                uint16_t **l_1104[1][1][7] = {{{&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334}}};
                int64_t *l_1107 = &g_145[0][0];
                int i, j, k;
                if (((safe_lshift_func_int8_t_s_u(p_39, 0)) >= ((p_37 <= (safe_mod_func_int32_t_s_s(p_39, (*l_1026)))) ^ ((void*)0 == &g_885))))
                { 
                    (*l_1025) = ((safe_mod_func_uint64_t_u_u((g_244 = 0x47F6D3A95D342F9ALL), l_1084)) && 4L);
                    return (*g_8);
                }
                else
                { 
                    int32_t **l_1085[6][5] = {{&l_1025,&l_1026,&l_1025,&l_1026,&l_1025},{&l_1026,&l_1025,&l_1025,&l_1026,&l_1026},{(void*)0,&l_1026,(void*)0,&l_1026,(void*)0},{&l_1026,&l_1026,&l_1025,&l_1025,&l_1026},{&l_1025,&l_1026,&l_1025,&l_1026,&l_1025},{&l_1026,&l_1025,&l_1025,&l_1026,&l_1026}};
                    int16_t * const ***l_1087 = (void*)0;
                    int16_t * const ***l_1092 = &l_1086;
                    int i, j;
                    (*l_1026) ^= 0xB532D7A2L;
                    g_254 = (*g_574);
                    (*l_1092) = (g_1088 = l_1086);
                }
                (*l_1026) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((-9L), (safe_rshift_func_int16_t_s_u(((g_921[0] <= ((l_1027[2][1][0] |= ((**g_1089) && (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint64_t_u_u((g_244 = ((g_334 = &g_364) == (l_1106 = l_1105))), (((*g_1039) , &g_145[0][0]) != l_1107))) , 0x95L), g_9.f0)))) <= l_1044)) >= g_13), p_37)))), p_37));
                for (p_39 = 0; (p_39 >= 0); p_39 -= 1)
                { 
                    int16_t l_1122 = (-2L);
                    int32_t *l_1123 = &g_201[1].f1.f0;
                    int32_t *l_1124[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1124[i] = &g_201[1].f1.f0;
                    if (g_13)
                        goto lbl_1108;
                    (*l_1026) = ((*l_1025) = p_38);
                    l_1125 &= ((safe_lshift_func_int16_t_s_u((0UL || ((l_1111 >= g_146[0][0][4]) & (((g_1005 != ((safe_lshift_func_int16_t_s_s(((p_37 , (safe_rshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(l_1084, (safe_mul_func_uint16_t_u_u((((0xF271L < (**g_1089)) | l_1122) > l_1084), p_38)))), 18446744073709551615UL)) != p_39), 6))) & (*g_575)), l_992)) == 0x67BEL)) < l_1084) , p_38))), p_37)) || g_434);
                }
                l_1126 = l_1126;
                (*g_8) = (*g_8);
            }
            ++l_1142;
            if ((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((g_244 = (safe_mul_func_int8_t_s_s(((*g_575) && (!(safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(l_1139, ((**g_130) && (((*l_1026) != (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((*l_1026), 3)), 65530UL))) > (l_1162 == l_1163))))), 4)))), 0x8EL))), g_146[0][0][3])), 4)), (*l_1026))))
            { 
                return l_1164;
            }
            else
            { 
                int64_t l_1166 = (-1L);
                uint8_t **l_1177 = &l_1176;
                union U2 l_1184 = {0xE5L};
                int32_t l_1187 = 0x0A74B11AL;
                (*g_8) = (*p_36);
                for (l_992 = 1; (l_992 >= 0); l_992 -= 1)
                { 
                    uint8_t l_1167[2];
                    int32_t l_1170 = 0x9EFF0BFFL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1167[i] = 1UL;
                    --l_1167[1];
                    l_1170 = l_1027[0][0][2];
                }
                l_1187 ^= (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((g_1175 == ((*l_1177) = l_1176)) , (((safe_div_func_uint16_t_u_u((*g_334), ((l_1027[0][0][1] == (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, 4)), (p_39 , (((l_1184 , l_1184.f0) < p_39) || p_38))))) , 0x3C31L))) < 0UL) <= l_1185)) | (***g_764)), l_1027[0][0][1])), 1)) != p_39) ^ l_1186[1][0]);
                for (l_1015.f1 = 0; l_1015.f1 < 2; l_1015.f1 += 1)
                {
                    for (g_434 = 0; g_434 < 4; g_434 += 1)
                    {
                        g_145[l_1015.f1][g_434] = 6L;
                    }
                }
                (*g_8) = (*g_8);
            }
        }
        else
        { 
            int32_t **l_1188 = &l_1026;
            int32_t **l_1189[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t * const **l_1200 = &g_1089;
            int8_t * const l_1237 = &l_1014;
            int i;
            l_1025 = ((*l_1188) = &g_4);
            l_1192 = g_1190;
            if ((safe_div_func_int32_t_s_s(0L, (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((!((((void*)0 == l_1200) & p_38) , ((+(((((*p_36) = (*p_36)) , &l_1163) != &l_1163) , 0x3464985490D9BD68LL)) != (-1L)))), g_607)), p_37)))))
            { 
                const int32_t *l_1202[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1202[i] = (void*)0;
                l_1203 = l_1202[0];
            }
            else
            { 
                int8_t ***l_1204 = &g_130;
                int32_t l_1211 = 0x23016F6AL;
                int32_t *l_1232 = &g_201[1].f1.f0;
                (*l_1188) = &l_992;
                (*l_1188) = (*l_1188);
                (*l_1025) = (l_1204 == (void*)0);
                if ((((p_38 ^ ((-6L) > (((++g_244) & (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_39, (g_1091 | (l_1027[1][0][1] = (l_1211 = 0xCB324BD38DCCBA9ALL))))), (safe_lshift_func_int16_t_s_u((!(safe_add_func_uint64_t_u_u((((((*g_575) = ((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((!g_576), (safe_sub_func_uint16_t_u_u((g_65 && p_39), 7L)))), g_1224)) && (***g_764)) != 8UL) & g_146[0][0][2])) == (*g_330)) && 9L) != p_38), l_1225))), (**g_333)))))) || p_37))) , l_1138) != 1UL))
                { 
                    uint64_t l_1226[1][5][3] = {{{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL}}};
                    int32_t *l_1231[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1231[i] = &g_576;
                    l_1226[0][4][1]--;
                    (*l_1188) = &l_992;
                    l_1232 = ((safe_lshift_func_int8_t_s_u(((**l_987) = l_1226[0][4][1]), 1)) , l_1231[0]);
                }
                else
                { 
                    (**l_1188) &= (safe_mul_func_int16_t_s_s(p_39, (safe_add_func_uint32_t_u_u((((*l_1022) = (*g_130)) == l_1237), (p_39 | g_576)))));
                    l_1238 = ((*l_1188) = (void*)0);
                    return (*p_36);
                }
            }
        }
    }
    return (*g_8);
}



static struct S0 * func_40(int32_t * p_41)
{ 
    int8_t l_66 = 6L;
    struct S0 *l_891 = &g_9;
    uint16_t *l_905 = (void*)0;
    int32_t l_908[7] = {4L,4L,4L,4L,4L,4L,4L};
    uint32_t *l_930[5];
    uint64_t l_962 = 0xE203117E2FF5B79DLL;
    struct S0 * const *l_983 = &l_891;
    struct S0 * const **l_982 = &l_983;
    int i;
    for (i = 0; i < 5; i++)
        l_930[i] = &g_65;
    for (g_9.f1 = 0; (g_9.f1 != 54); g_9.f1++)
    { 
        const uint32_t l_49 = 0xB38A83A5L;
        struct S0 *l_50 = (void*)0;
        struct S0 **l_51 = &l_50;
        int32_t l_59 = (-1L);
        int8_t *l_60 = &g_61;
        int8_t *l_62 = &g_63;
        uint32_t *l_64 = (void*)0;
        struct S0 *l_67 = &g_9;
        union U2 *l_871 = &g_122;
        int64_t *l_872 = &g_145[1][0];
        int32_t l_889 = 0x45727782L;
        (*g_575) = ((*p_41) && (func_44(l_49, ((*l_51) = l_50), (safe_unary_minus_func_uint8_t_u((((*g_8) , (safe_add_func_uint32_t_u_u(((g_65 |= ((((*l_62) = ((*l_60) = (safe_rshift_func_int16_t_s_s((((0x55B9L != (safe_lshift_func_uint16_t_u_s((l_59 = 0x881FL), (&g_4 == &g_4)))) < 0L) , g_9.f1), 10)))) , &g_9) != (void*)0)) | (*p_41)), (*p_41)))) ^ l_66))), l_67) , l_66));
        if ((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(0x5137EB3D4C600BA8LL)), (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_59, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((0L <= ((void*)0 == l_871)), 11)), (l_59 <= ((*l_872) = 0x33CE8F5021CB3742LL)))) && l_49))), 255UL)))) , (-1L)), g_61)))
        { 
            uint16_t ***l_879 = (void*)0;
            int32_t l_887 = 1L;
            int32_t l_932 = 1L;
            uint32_t l_966 = 0x7149AA85L;
            for (g_394 = 18; (g_394 > 14); --g_394)
            { 
                uint16_t ****l_880 = &l_879;
                int16_t *l_883 = (void*)0;
                int16_t **l_884[4] = {&l_883,&l_883,&l_883,&l_883};
                const int32_t l_886 = 0x1027181EL;
                int32_t l_888[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_888[i] = 0xEA8EFD78L;
                l_889 |= ((*g_575) |= ((l_888[1] = ((safe_rshift_func_int8_t_s_u((((((*p_41) , (**g_130)) != 0x18L) && ((((*l_880) = l_879) != &g_333) != ((((((safe_sub_func_int64_t_s_s(l_49, ((g_885 = l_883) == (void*)0))) , l_886) ^ g_146[1][0][2]) | l_49) , l_886) >= l_886))) | 0x6B1E6A2BB5B5ADE1LL), 0)) | l_887)) || l_59));
                if ((((*g_334) = (g_890 != (void*)0)) || (*g_334)))
                { 
                    return l_891;
                }
                else
                { 
                    if ((**g_574))
                        break;
                }
                (*p_41) ^= ((safe_lshift_func_int8_t_s_u((((*g_330) ^= l_889) >= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(l_66, 10)), (((((!0xB0L) && (0xB4DC09ABL ^ (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint64_t_u_u((l_905 != ((1UL || (safe_sub_func_int8_t_s_s((-3L), (**g_130)))) , (*g_333))), 0UL)) < l_908[2]), 1)), l_887)) , 0x71FCE00E0F9A6495LL) <= 1L))) != l_887) < 0xCBAC2FE810A9AA3CLL) , l_888[1])))), 7)) == 251UL);
                for (g_244 = 0; (g_244 != 54); g_244 = safe_add_func_uint32_t_u_u(g_244, 2))
                { 
                    int32_t **l_911 = &g_254;
                    (*l_911) = (*g_574);
                    return &g_9;
                }
            }
            for (g_122.f0 = 0; (g_122.f0 <= 2); g_122.f0 += 1)
            { 
                uint8_t *l_920 = &g_921[1];
                int32_t l_931 = 0x3EF5D1BDL;
                int32_t l_952 = 0L;
                int i;
                if ((l_932 |= (safe_lshift_func_int8_t_s_s((((g_201[1].f0 & ((safe_sub_func_int8_t_s_s(l_889, (safe_mul_func_uint8_t_u_u(((*l_920)--), (((*g_575) = 0x831DD78BL) < (safe_rshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(0L, (((-2L) >= (l_930[1] == (void*)0)) ^ l_908[2]))) == 0xC25DL) , (*g_131)), l_931)) || (**g_329)) >= 0x99CC6431L), 0))))))) >= l_887)) != (-1L)) < (*g_334)), 5))))
                { 
                    struct S0 l_933 = {1L,1UL};
                    int16_t **l_945 = &g_890;
                    int32_t **l_953 = &g_254;
                    int32_t **l_954 = &g_254;
                    int16_t ***l_955 = &l_945;
                    (**g_574) |= ((l_933 , (((*l_920) = (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((((!(safe_lshift_func_int8_t_s_u((((*p_41) > (((*l_945) = l_905) != &g_170)) != (((*l_953) = ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0x52422B69L & (safe_sub_func_int32_t_s_s((((**g_333) || (l_952 , l_889)) == l_889), l_908[2]))), l_952)), l_931)) , (void*)0)) == p_41)), 6))) | 65535UL) , (*g_330)) != l_931) | 0x63L), l_59)) > 0L), l_889))) | 0x32L)) & l_908[3]);
                    (*l_51) = &g_9;
                    (*l_954) = (*g_574);
                    (*g_254) = ((&g_885 == ((*l_955) = &g_890)) | 0x5402758BL);
                }
                else
                { 
                    int32_t *l_956 = &g_201[1].f1.f0;
                    int32_t *l_957 = &g_4;
                    int32_t *l_958 = &l_889;
                    int32_t *l_959 = &l_59;
                    int32_t *l_960 = &l_932;
                    int32_t *l_961[5][2] = {{(void*)0,&g_576},{&g_576,&g_576},{(void*)0,&g_576},{&l_889,&l_889},{&l_889,&g_576}};
                    int32_t **l_965 = &l_956;
                    int i, j;
                    ++l_962;
                    if ((*g_575))
                        break;
                    (*l_965) = (*g_574);
                    (*p_41) = 0xB8D0070EL;
                }
                for (g_607 = 0; (g_607 <= 1); g_607 += 1)
                { 
                    int i, j;
                    (*p_41) |= (l_908[(g_122.f0 + 4)] = g_145[g_607][(g_122.f0 + 1)]);
                }
                l_966--;
                (*g_575) = (safe_mod_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((~((safe_rshift_func_int8_t_s_u((l_59 ^ l_952), 7)) , l_931)), (((((safe_rshift_func_uint8_t_u_u((((((*l_920) &= g_201[1].f3) < ((safe_mul_func_uint16_t_u_u((**g_333), (4294967287UL && (safe_lshift_func_uint8_t_u_u(l_66, g_9.f1))))) < (***g_764))) | l_908[2]) && g_434), 0)) && 0xEDFDL) | 255UL) || g_201[1].f3) != l_966))) | (**g_329)) != g_4) | 1L), 0x4CL));
            }
            return &g_9;
        }
        else
        { 
            for (g_434 = 0; (g_434 <= 1); g_434 += 1)
            { 
                struct S0 * const ***l_984 = &l_982;
                (*l_984) = l_982;
                (*g_254) = (249UL && 0xD1L);
            }
            return l_891;
        }
    }
    return l_891;
}



static uint32_t  func_44(const int16_t  p_45, struct S0 * p_46, int8_t  p_47, struct S0 * p_48)
{ 
    int32_t l_68 = 0L;
    struct S0 l_72 = {3L,7UL};
    int8_t *l_73 = &g_63;
    int8_t **l_74 = &l_73;
    struct S0 **l_80 = (void*)0;
    uint32_t l_95 = 0UL;
    int32_t l_151 = 4L;
    int32_t l_154 = 0xB09ED61EL;
    uint8_t l_226 = 255UL;
    int64_t l_255 = 0x71E889AAD8E4E223LL;
    uint64_t l_355[6] = {0x503DA074F931C781LL,0x503DA074F931C781LL,0x503DA074F931C781LL,0x503DA074F931C781LL,0x503DA074F931C781LL,0x503DA074F931C781LL};
    int32_t l_411 = 0xD051A042L;
    int32_t l_412[6][5][5] = {{{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL}},{{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL}},{{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL}},{{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL}},{{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL}},{{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,8L,0x318768DEL,0xF9A72F8EL,0x318768DEL},{8L,0x318768DEL,0xA2E87949L,0x758EF842L,0xA2E87949L},{0x318768DEL,0x318768DEL,0xA2E87949L,0x758EF842L,0xA2E87949L}}};
    int16_t l_415 = 1L;
    union U1 l_467 = {0x21D1AD1EL};
    uint32_t l_469[1][7];
    uint32_t *** const l_481[7] = {&g_329,&g_329,&g_329,&g_329,&g_329,&g_329,&g_329};
    int16_t l_509 = 0xD300L;
    int32_t **l_571[7][3][7] = {{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}},{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,(void*)0,&g_254,&g_254,(void*)0,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}},{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}},{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,(void*)0,&g_254,&g_254,(void*)0,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}},{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}},{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,(void*)0,&g_254,&g_254,(void*)0,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}},{{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254,&g_254,&g_254}}};
    uint16_t * const *l_623 = &g_334;
    int16_t l_655 = 0xC7C5L;
    uint16_t l_665 = 0x7054L;
    int32_t l_680 = 0x0E817719L;
    int32_t l_682 = (-1L);
    int8_t l_717[3][6] = {{(-1L),(-7L),(-1L),(-1L),(-1L),(-1L)},{(-9L),(-9L),(-1L),0x7AL,(-1L),(-9L)},{(-1L),(-7L),0x7AL,0x7AL,(-7L),(-1L)}};
    uint16_t l_749 = 65535UL;
    int32_t * const l_799 = &l_412[5][2][2];
    uint32_t l_805[7][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
    uint16_t l_855 = 0x906EL;
    uint32_t *** const *l_857 = &l_481[1];
    uint32_t *** const **l_856 = &l_857;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_469[i][j] = 0xB993456DL;
    }
    if (((((l_68 >= (+(safe_rshift_func_int8_t_s_s(((0xDCAE3649L != 0xEE08A9CBL) | (l_72 , g_61)), 5)))) > (((*l_74) = (((void*)0 != p_46) , l_73)) == (void*)0)) ^ p_47) , l_68))
    { 
        return g_4;
    }
    else
    { 
        struct S0 **l_85 = &g_8;
        uint32_t *l_87[2][1];
        uint32_t **l_86 = &l_87[1][0];
        const uint32_t *l_88 = &g_65;
        int32_t l_89 = 0xFF52682FL;
        int32_t *l_90 = (void*)0;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_87[i][j] = &g_65;
        }
        g_9.f0 &= ((!(safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((1UL >= (l_80 == ((safe_mul_func_uint8_t_u_u(p_47, (((l_68 &= ((void*)0 == l_85)) , (((*l_86) = &g_65) == l_88)) < 0L))) , (void*)0))), l_89)), 9UL))) | 5UL);
    }
    for (g_4 = 16; (g_4 > (-4)); g_4 = safe_sub_func_uint32_t_u_u(g_4, 3))
    { 
        int64_t l_98 = 0xFF5A50E62F179D16LL;
        uint16_t *l_107 = &g_13;
        int64_t l_108[3];
        int32_t l_147 = (-9L);
        int32_t l_148 = 1L;
        int32_t l_155 = 0L;
        uint32_t l_156[2][6][2] = {{{0xB29A1D6AL,0xB29A1D6AL},{0xB29A1D6AL,0UL},{0xB29A1D6AL,0xB29A1D6AL},{0xB29A1D6AL,0UL},{0xB29A1D6AL,0xB29A1D6AL},{0xB29A1D6AL,0UL}},{{0xB29A1D6AL,0xB29A1D6AL},{0xB29A1D6AL,0UL},{0xB29A1D6AL,0xB29A1D6AL},{0xB29A1D6AL,0UL},{0xB29A1D6AL,0xB29A1D6AL},{0xB29A1D6AL,0UL}}};
        uint32_t *l_165 = &l_95;
        struct S0 l_210[5] = {{0x8903686DL,1UL},{0x8903686DL,1UL},{0x8903686DL,1UL},{0x8903686DL,1UL},{0x8903686DL,1UL}};
        int32_t l_242 = 9L;
        int32_t l_256 = 6L;
        int32_t l_257 = 1L;
        uint32_t l_258 = 0x7D5ABB85L;
        union U2 *l_273 = &g_122;
        int32_t l_416 = 0x77AAFB62L;
        int32_t l_423 = 0x3B5FD5A4L;
        int32_t l_424[1][6] = {{8L,0xC23D63E7L,8L,8L,0xC23D63E7L,8L}};
        uint8_t l_564 = 0x52L;
        int32_t l_631 = 0x5A1B139FL;
        int32_t l_636[7][4] = {{8L,0x418A7CE6L,8L,(-3L)},{8L,(-3L),(-3L),8L},{0x23F9CBCEL,(-3L),1L,(-3L)},{(-3L),0x418A7CE6L,1L,1L},{0x23F9CBCEL,0x23F9CBCEL,(-3L),1L},{8L,0x418A7CE6L,8L,(-3L)},{8L,(-3L),(-3L),8L}};
        const uint64_t l_715 = 0xCC26F8F4C78CD19DLL;
        int32_t l_716 = 0x48724964L;
        uint8_t l_745 = 1UL;
        uint32_t **l_831[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_108[i] = 4L;
        for (i = 0; i < 3; i++)
            l_831[i] = (void*)0;
    }
    for (l_680 = 0; (l_680 <= 6); l_680 = safe_add_func_uint64_t_u_u(l_680, 1))
    { 
        int16_t l_842 = 7L;
        int32_t l_843 = 1L;
        int32_t l_844 = 8L;
        int32_t l_845 = 0x4009ECDBL;
        int32_t l_846[5] = {0x6368EF4AL,0x6368EF4AL,0x6368EF4AL,0x6368EF4AL,0x6368EF4AL};
        int i;
        for (l_72.f1 = 0; (l_72.f1 != 4); ++l_72.f1)
        { 
            struct S0 l_840 = {0x2F85B6E3L,5UL};
            int32_t l_841 = (-6L);
            int32_t l_847 = 0L;
            int32_t l_848 = 1L;
            int32_t l_849[2];
            uint32_t l_850 = 18446744073709551613UL;
            int i;
            for (i = 0; i < 2; i++)
                l_849[i] = 0xF6767AD7L;
            l_840 = (*p_48);
            l_850--;
        }
        l_72 = (*p_48);
    }
    (**g_574) ^= (safe_mul_func_uint16_t_u_u(((*g_8) , l_855), ((**g_333) = (**g_333))));
    (*l_856) = &l_481[3];
    return (***g_764);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_145[i][j], "g_145[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_146[i][j][k], "g_146[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_201[i].f0, "g_201[i].f0", print_hash_value);
        transparent_crc(g_201[i].f2, "g_201[i].f2", print_hash_value);
        transparent_crc(g_201[i].f3, "g_201[i].f3", print_hash_value);

    }
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_921[i], "g_921[i]", print_hash_value);

    }
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1224, "g_1224", print_hash_value);
    transparent_crc(g_1378, "g_1378", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1570[i], "g_1570[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1571[i][j], "g_1571[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1617, "g_1617", print_hash_value);
    transparent_crc(g_1756, "g_1756", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1769[i][j].f0, "g_1769[i][j].f0", print_hash_value);
            transparent_crc(g_1769[i][j].f2, "g_1769[i][j].f2", print_hash_value);
            transparent_crc(g_1769[i][j].f3, "g_1769[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_1941, "g_1941", print_hash_value);
    transparent_crc(g_2020, "g_2020", print_hash_value);
    transparent_crc(g_2121, "g_2121", print_hash_value);
    transparent_crc(g_2295, "g_2295", print_hash_value);
    transparent_crc(g_2452, "g_2452", print_hash_value);
    transparent_crc(g_2460, "g_2460", print_hash_value);
    transparent_crc(g_2593, "g_2593", print_hash_value);
    transparent_crc(g_2620, "g_2620", print_hash_value);
    transparent_crc(g_2690, "g_2690", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2720[i][j][k], "g_2720[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_3042, "g_3042", print_hash_value);
    transparent_crc(g_3044, "g_3044", print_hash_value);
    transparent_crc(g_3058, "g_3058", print_hash_value);
    transparent_crc(g_3087, "g_3087", print_hash_value);
    transparent_crc(g_3192, "g_3192", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
