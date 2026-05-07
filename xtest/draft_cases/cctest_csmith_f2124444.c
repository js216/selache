// SPDX-License-Identifier: MIT
// cctest_csmith_f2124444.c --- cctest case csmith_f2124444 (csmith seed 4061283396)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb3a5a48d */

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

// Options:   -s 4061283396 -o /tmp/csmith_gen_j0ipr3_5/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   const int32_t  f1;
   int16_t  f2;
};

union U1 {
   const uint64_t  f0;
   uint32_t  f1;
   signed f2 : 6;
   struct S0  f3;
};


static int64_t g_11 = 0xAC12265E3EDFA831LL;
static int32_t g_37 = (-9L);
static uint32_t g_47 = 0x197BA274L;
static struct S0 g_48 = {0x7C837E05AF849FB9LL,0L,0x4ACAL};
static uint32_t *g_53 = (void*)0;
static uint32_t **g_52 = &g_53;
static uint16_t g_70 = 0xEB61L;
static uint32_t g_76 = 4294967295UL;
static int64_t g_79[3] = {0L,0L,0L};
static int8_t g_91 = 8L;
static int32_t g_97 = (-1L);
static int16_t g_98 = 3L;
static uint32_t g_112 = 0x0DE8C290L;
static uint8_t g_130 = 0x8AL;
static uint64_t g_148[6] = {0xB1779622336EAB1FLL,0xB1779622336EAB1FLL,0xB1779622336EAB1FLL,0xB1779622336EAB1FLL,0xB1779622336EAB1FLL,0xB1779622336EAB1FLL};
static int8_t g_217 = 1L;
static uint8_t g_218[7][1] = {{9UL},{255UL},{255UL},{9UL},{255UL},{255UL},{9UL}};
static uint16_t g_290 = 0xB5F0L;
static int32_t g_300 = 0xCE44F534L;
static int32_t g_351 = (-1L);
static int32_t g_352 = 0x83AA05CAL;
static int8_t g_354 = 0xEBL;
static int32_t g_356 = 0x5F2AAED8L;
static uint16_t g_357 = 0x7BD4L;
static int32_t ***g_361 = (void*)0;
static int32_t ****g_360 = &g_361;
static const int32_t g_385 = 0L;
static const int32_t *g_384 = &g_385;
static const int32_t g_389 = 0L;
static const int32_t *g_388[5][4][4] = {{{(void*)0,&g_389,&g_385,&g_389},{&g_389,&g_389,&g_385,(void*)0},{&g_389,&g_389,&g_389,&g_385},{(void*)0,&g_385,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_389,(void*)0},{&g_389,(void*)0,&g_385,&g_389},{&g_389,(void*)0,&g_385,&g_385},{(void*)0,(void*)0,&g_385,(void*)0}},{{&g_385,&g_389,(void*)0,&g_385},{(void*)0,&g_389,(void*)0,&g_385},{&g_389,&g_385,&g_385,&g_385},{&g_389,&g_389,&g_385,&g_385}},{{&g_385,&g_389,&g_385,(void*)0},{(void*)0,&g_385,&g_385,&g_385},{&g_389,(void*)0,&g_389,&g_385},{&g_389,&g_389,(void*)0,(void*)0}},{{&g_389,&g_385,&g_385,&g_389},{&g_385,&g_385,&g_385,&g_385},{&g_389,&g_385,(void*)0,&g_389},{&g_389,&g_385,&g_389,&g_389}}};
static const int32_t g_391 = 0x8C0522CEL;
static const int32_t *g_390 = &g_391;
static const uint32_t *g_397 = &g_47;
static const uint32_t **g_396 = &g_397;
static const uint32_t ***g_395 = &g_396;
static int32_t *g_405 = &g_351;
static int32_t **g_404[4][3][2] = {{{&g_405,(void*)0},{&g_405,&g_405},{(void*)0,&g_405}},{{&g_405,(void*)0},{&g_405,&g_405},{&g_405,(void*)0}},{{&g_405,&g_405},{(void*)0,&g_405},{&g_405,(void*)0}},{{&g_405,&g_405},{&g_405,(void*)0},{&g_405,&g_405}}};
static int32_t g_442 = 3L;
static union U1 **g_485 = (void*)0;
static uint16_t g_515 = 0x82D5L;
static struct S0 g_519 = {0xBE6D2AF7D0585112LL,-9L,0x85F9L};
static uint16_t *g_542[5] = {&g_70,&g_70,&g_70,&g_70,&g_70};
static uint8_t g_582 = 0x0CL;
static struct S0 *g_642 = &g_519;
static struct S0 ** const g_641 = &g_642;
static int64_t g_700 = 1L;
static int64_t g_703 = 0xEA6D93960DC39345LL;
static int32_t g_705 = (-3L);
static int8_t g_706 = 0x7DL;
static int32_t g_707 = 0xB80F8E6FL;
static int16_t g_708 = 0x5C37L;
static int32_t g_709 = (-1L);
static uint8_t g_710 = 0x40L;
static int8_t g_730 = 0xB7L;
static uint32_t g_731[1][7] = {{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL}};
static union U1 g_736 = {1UL};
static union U1 *g_735 = &g_736;
static const int16_t g_758 = 1L;
static const int16_t g_760 = 0L;
static int16_t *** const *g_798 = (void*)0;
static int32_t g_877 = 3L;
static uint8_t g_878 = 247UL;
static int64_t *g_979 = &g_79[2];
static int64_t **g_1047 = &g_979;
static int8_t g_1055 = (-7L);
static uint64_t g_1056 = 18446744073709551610UL;
static int16_t g_1114 = 0xE41DL;
static const int16_t *g_1147 = &g_758;
static const int16_t **g_1146 = &g_1147;
static int32_t *g_1163 = (void*)0;
static int32_t *g_1209 = &g_877;
static uint16_t g_1297 = 0xF622L;
static uint64_t ***g_1341 = (void*)0;
static const int32_t **g_1376 = &g_384;
static const int32_t ***g_1375 = &g_1376;
static uint64_t *g_1408 = &g_148[3];
static uint64_t * const *g_1407[2][3] = {{(void*)0,(void*)0,(void*)0},{&g_1408,&g_1408,&g_1408}};
static int64_t g_1430 = 0x4DFA127300F08159LL;
static uint32_t g_1432 = 0xEA5730CCL;
static int8_t *g_1441 = &g_1055;
static int8_t **g_1440 = &g_1441;
static uint64_t g_1496[2] = {0x9C2F72534F2CC92DLL,0x9C2F72534F2CC92DLL};
static int64_t g_1542 = 1L;
static int64_t g_1545 = 0x92D502D6BED6CD3BLL;
static int8_t g_1547 = 0xFDL;
static int32_t g_1548[2] = {0x7AF17139L,0x7AF17139L};
static int32_t *g_1725 = &g_300;
static int16_t g_1922 = 0L;
static uint32_t **g_1989 = &g_53;
static int8_t g_1992 = 0x82L;
static int16_t * const **g_2156 = (void*)0;
static int32_t ***g_2260[4][3][4] = {{{&g_404[0][2][0],&g_404[0][2][0],&g_404[2][2][1],&g_404[3][1][1]},{&g_404[3][1][1],&g_404[3][1][0],&g_404[2][2][1],&g_404[3][1][0]},{&g_404[0][2][0],&g_404[1][1][1],&g_404[3][2][0],&g_404[2][2][1]}},{{&g_404[3][1][0],&g_404[1][1][1],&g_404[1][1][1],&g_404[3][1][0]},{&g_404[1][1][1],&g_404[3][1][0],&g_404[0][2][0],&g_404[3][1][1]},{&g_404[1][1][1],&g_404[0][2][0],&g_404[1][1][1],&g_404[3][2][0]}},{{&g_404[3][1][0],&g_404[3][1][1],&g_404[3][2][0],&g_404[3][2][0]},{&g_404[0][2][0],&g_404[0][2][0],&g_404[2][2][1],&g_404[3][1][1]},{&g_404[3][1][1],&g_404[3][1][0],&g_404[2][2][1],&g_404[3][1][0]}},{{&g_404[0][2][0],&g_404[1][1][1],&g_404[3][2][0],&g_404[2][2][1]},{&g_404[3][1][0],&g_404[1][1][1],&g_404[1][1][1],&g_404[3][1][0]},{&g_404[1][1][1],&g_404[3][1][0],&g_404[0][2][0],&g_404[3][1][1]}}};
static struct S0 **g_2325 = &g_642;
static struct S0 ** const *g_2324 = &g_2325;
static const uint64_t *g_2337 = &g_1496[0];
static const uint64_t **g_2336 = &g_2337;
static const uint64_t ***g_2335 = &g_2336;
static const uint8_t g_2512 = 0x2CL;
static const uint8_t *g_2511 = &g_2512;
static const uint8_t g_2521 = 0UL;
static struct S0 g_2621 = {0xAA35BEF293E3C792LL,0xF11AB382L,0L};
static int16_t ***g_2670 = (void*)0;
static int16_t ****g_2669 = &g_2670;
static int16_t *****g_2668 = &g_2669;
static struct S0 g_2753 = {-7L,-9L,0L};
static struct S0 * const g_2752 = &g_2753;
static struct S0 * const *g_2751 = &g_2752;
static const struct S0 g_2804[3] = {{0x0039A772E1512BA8LL,3L,0x6200L},{0x0039A772E1512BA8LL,3L,0x6200L},{0x0039A772E1512BA8LL,3L,0x6200L}};
static uint64_t g_2860 = 0UL;
static int64_t g_2926 = 0x951E4F514BFC2627LL;
static uint64_t g_2954[2] = {18446744073709551615UL,18446744073709551615UL};
static struct S0 ***g_2986 = (void*)0;
static struct S0 ****g_2985 = &g_2986;
static struct S0 *****g_2984 = &g_2985;
static uint32_t * const *g_2992[1][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}}};
static uint32_t * const **g_2991 = &g_2992[0][1][6];
static uint32_t * const ***g_2990 = &g_2991;
static uint32_t * const **** const g_2989 = &g_2990;
static const int16_t g_3119 = 0x68ECL;
static int16_t g_3166 = 0xF819L;
static int32_t **g_3192[3][5] = {{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209},{&g_1163,&g_1163,&g_1163,&g_1163,&g_1163},{&g_1209,&g_1209,&g_1209,&g_1209,&g_1209}};
static int32_t *g_3231 = &g_37;
static uint32_t g_3271 = 0UL;
static uint64_t **g_3314 = &g_1408;
static const uint64_t g_3369 = 18446744073709551615UL;
static const uint64_t * const g_3368 = &g_3369;
static const uint64_t * const *g_3367 = &g_3368;
static const uint64_t * const **g_3366 = &g_3367;
static const uint64_t * const ***g_3365 = &g_3366;
static int32_t g_3559 = 0x4515158DL;
static struct S0 **g_3661 = &g_642;
static struct S0 *** const g_3660 = &g_3661;
static struct S0 *** const *g_3659[7][1][4] = {{{&g_3660,(void*)0,(void*)0,&g_3660}},{{&g_3660,&g_3660,&g_3660,&g_3660}},{{&g_3660,&g_3660,&g_3660,&g_3660}},{{&g_3660,&g_3660,&g_3660,&g_3660}},{{&g_3660,&g_3660,&g_3660,(void*)0}},{{&g_3660,&g_3660,&g_3660,&g_3660}},{{&g_3660,&g_3660,(void*)0,(void*)0}}};
static const int32_t *g_3684 = &g_356;
static const int32_t **g_3683 = &g_3684;
static const int32_t ***g_3682 = &g_3683;
static const int32_t *** const *g_3681 = &g_3682;
static const int32_t *** const **g_3680 = &g_3681;
static uint8_t ***g_3765 = (void*)0;
static uint8_t *g_3768 = (void*)0;
static uint8_t **g_3767 = &g_3768;
static uint8_t ***g_3766 = &g_3767;
static uint32_t **g_3811 = &g_53;
static uint8_t g_3812 = 0UL;
static int32_t **g_3879 = &g_1163;



static uint8_t  func_1(void);
static int8_t  func_8(int16_t  p_9, uint32_t  p_10);
static const struct S0  func_15(uint32_t  p_16, uint32_t  p_17, struct S0  p_18, int32_t  p_19);
static uint32_t  func_20(union U1  p_21, union U1  p_22);
static union U1  func_23(uint32_t  p_24, uint16_t  p_25, struct S0  p_26);
static int32_t  func_30(uint64_t  p_31, uint16_t  p_32);
static uint32_t  func_83(int64_t  p_84, uint16_t * p_85, int32_t  p_86);
static uint8_t  func_88(int8_t  p_89);




static uint8_t  func_1(void)
{ 
    uint32_t l_4 = 18446744073709551613UL;
    int32_t l_5 = 0xE6E7F737L;
    uint32_t l_14 = 18446744073709551610UL;
    uint32_t *l_45 = (void*)0;
    uint32_t *l_46 = &g_47;
    union U1 l_885 = {1UL};
    struct S0 l_2120 = {0xB94BFBEE9149EC7DLL,-6L,0x5E57L};
    uint64_t l_2121 = 0x73EEB65D2802A375LL;
    uint16_t *l_2126 = &g_357;
    int32_t *l_3398 = &g_707;
    int32_t *****l_3408 = &g_360;
    int32_t l_3424 = 0xBAB9713FL;
    int16_t *l_3442 = (void*)0;
    int16_t **l_3441 = &l_3442;
    int16_t ***l_3440 = &l_3441;
    int32_t l_3478 = 0x05BECD83L;
    int64_t l_3480 = (-4L);
    int32_t l_3481 = 0xA376C6DDL;
    int32_t l_3483 = 0x60986FDCL;
    uint32_t l_3486 = 0xD33A4413L;
    int32_t l_3490 = 1L;
    int8_t l_3491[2];
    int32_t l_3492 = 0xA5750A61L;
    int32_t l_3493 = (-7L);
    int32_t l_3494 = 0L;
    int32_t l_3495[5][6] = {{0L,7L,7L,0L,0xB47ABBADL,0L},{0L,0xB47ABBADL,0L,7L,7L,0L},{4L,4L,7L,0x18697AEAL,7L,4L},{7L,0xB47ABBADL,0x18697AEAL,0x18697AEAL,0xB47ABBADL,7L},{4L,7L,0x18697AEAL,7L,4L,4L}};
    int64_t l_3499 = 0xF94AB2FD7720C4B8LL;
    uint32_t **l_3501 = &l_45;
    const int32_t *l_3520 = &g_442;
    const int32_t **l_3519 = &l_3520;
    int32_t *l_3575 = &g_356;
    int32_t l_3687 = (-7L);
    union U1 ***l_3710 = &g_485;
    uint64_t * const *l_3733[4];
    uint32_t l_3753 = 0x01C9ADEDL;
    uint32_t l_3813[7] = {0x61831BD3L,0x61831BD3L,0x61831BD3L,0x61831BD3L,0x61831BD3L,0x61831BD3L,0x61831BD3L};
    uint16_t l_3815 = 65535UL;
    int16_t l_3855 = 0x4011L;
    int64_t l_3856 = 5L;
    int32_t l_3857 = 0x2B693F8CL;
    int32_t l_3862 = 4L;
    uint32_t l_3865 = 0xD22DF1AAL;
    int64_t l_3868 = 0x8A45E896ACF660E6LL;
    int32_t *l_3890 = &g_709;
    int32_t *l_3891 = &g_97;
    int32_t *l_3892 = &g_709;
    int32_t *l_3893 = (void*)0;
    int32_t *l_3894 = &l_3495[3][0];
    int32_t *l_3895 = &g_1548[1];
    int32_t *l_3896 = &g_37;
    int32_t *l_3897 = (void*)0;
    int32_t *l_3898[4];
    uint8_t l_3899 = 1UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_3491[i] = 1L;
    for (i = 0; i < 4; i++)
        l_3733[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_3898[i] = &l_3493;
    return (*l_3890);
}



static int8_t  func_8(int16_t  p_9, uint32_t  p_10)
{ 
    struct S0 **l_2133 = &g_642;
    struct S0 ***l_2132 = &l_2133;
    struct S0 ****l_2131 = &l_2132;
    int32_t l_2138 = (-1L);
    const uint32_t *l_2139 = (void*)0;
    int32_t *l_2148[6][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    const union U1 l_2205 = {0UL};
    int32_t ***l_2261 = &g_404[2][2][0];
    int8_t **l_2269 = &g_1441;
    uint64_t l_2271 = 18446744073709551615UL;
    int16_t l_2287 = 6L;
    int32_t l_2302[6] = {0x077F729EL,0x077F729EL,0x1F0013D6L,0x077F729EL,0x077F729EL,0x1F0013D6L};
    uint64_t * const ** const l_2334 = &g_1407[0][0];
    uint32_t l_2341 = 2UL;
    int8_t l_2353 = 0x1CL;
    int8_t l_2504[4];
    int16_t l_2551[3][1];
    uint32_t l_2617 = 18446744073709551612UL;
    uint32_t ***l_2736 = (void*)0;
    uint32_t ****l_2735 = &l_2736;
    int64_t l_2768[2][3][7] = {{{1L,0xFC97807F65ABAE7ELL,0xB14E9EC9C730A3CBLL,0x98754D5A0ED2C3A7LL,0x98754D5A0ED2C3A7LL,0xB14E9EC9C730A3CBLL,0xFC97807F65ABAE7ELL},{0xA23EA27E73A5EE64LL,0x4D5D163C1BEF3FB5LL,0xB787BC5C11DEEFEFLL,0xA23EA27E73A5EE64LL,0xC21FFF2AFAC36B40LL,0xC21FFF2AFAC36B40LL,0xA23EA27E73A5EE64LL},{0L,0xFC97807F65ABAE7ELL,0L,0L,0xFC97807F65ABAE7ELL,0L,0L}},{{0x95E509EC62FB4157LL,0xA23EA27E73A5EE64LL,0xCAAE7145DAB6CC1DLL,0xA23EA27E73A5EE64LL,0x95E509EC62FB4157LL,0xCAAE7145DAB6CC1DLL,0xCDA39CE5FC90F89BLL},{0x98754D5A0ED2C3A7LL,0L,0L,0x98754D5A0ED2C3A7LL,0L,0L,0x98754D5A0ED2C3A7LL},{0xB787BC5C11DEEFEFLL,0xCDA39CE5FC90F89BLL,0x4D5D163C1BEF3FB5LL,0xC21FFF2AFAC36B40LL,0xCDA39CE5FC90F89BLL,0xC21FFF2AFAC36B40LL,0x4D5D163C1BEF3FB5LL}}};
    uint32_t l_2769 = 0x23EE7162L;
    uint8_t *l_2780 = &g_582;
    uint8_t **l_2779 = &l_2780;
    uint16_t l_2790 = 0x1882L;
    int32_t ****l_2825 = &g_2260[1][2][2];
    uint64_t l_2870[1];
    int32_t * const *l_2937 = &g_1163;
    int32_t * const **l_2936[2][2][7] = {{{&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937},{&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937}},{{&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937},{&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937,&l_2937}}};
    int32_t * const ***l_2935[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *****l_2949 = (void*)0;
    int16_t ****l_2959 = (void*)0;
    int64_t **l_2970 = &g_979;
    uint8_t l_3002 = 255UL;
    uint32_t l_3022[7][6] = {{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL},{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL},{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL},{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL},{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL},{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL},{0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL,0x3DD40C7AL}};
    uint16_t *l_3023 = (void*)0;
    uint32_t l_3024 = 0x6220CC9FL;
    uint8_t l_3025 = 0xD9L;
    uint32_t l_3079 = 0x5434BC76L;
    uint64_t l_3167[5] = {18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL};
    const int32_t l_3205 = 1L;
    int32_t l_3223 = 1L;
    uint32_t *l_3308 = &l_3024;
    uint8_t l_3333 = 252UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2504[i] = 0xE1L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2551[i][j] = 2L;
    }
    for (i = 0; i < 1; i++)
        l_2870[i] = 0xCFF4F7933A8B2008LL;
    if ((((safe_unary_minus_func_int64_t_s((~((void*)0 == l_2131)))) >= (4UL && (safe_mod_func_uint64_t_u_u((p_10 >= (safe_add_func_int8_t_s_s(l_2138, ((((void*)0 != l_2139) & p_9) < p_10)))), 1L)))) , l_2138))
    { 
        uint16_t l_2141 = 0x2A06L;
        int16_t ***l_2155 = (void*)0;
        uint32_t l_2194 = 9UL;
        const uint64_t *l_2208[2][4] = {{&l_2205.f0,&l_2205.f0,&l_2205.f0,&l_2205.f0},{&l_2205.f0,&l_2205.f0,&l_2205.f0,&l_2205.f0}};
        const uint64_t **l_2207 = &l_2208[0][1];
        const uint64_t ***l_2206[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2207,&l_2207,&l_2207,&l_2207,&l_2207},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2207,&l_2207,&l_2207,&l_2207,&l_2207},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_2210[1][1];
        uint32_t l_2229[3][2][6] = {{{4294967290UL,0UL,4294967290UL,4294967290UL,0UL,4294967290UL},{4294967290UL,0UL,4294967290UL,4294967290UL,0UL,4294967290UL}},{{4294967290UL,0UL,4294967290UL,4294967290UL,0UL,4294967290UL},{4294967290UL,0UL,4294967290UL,4294967290UL,0UL,4294967290UL}},{{4294967290UL,0UL,4294967290UL,4294967290UL,0UL,4294967290UL},{4294967290UL,0UL,4294967290UL,4294967290UL,0UL,4294967290UL}}};
        int8_t l_2314 = 0L;
        uint8_t l_2321 = 254UL;
        const int32_t ***l_2329 = (void*)0;
        const int32_t ****l_2328 = &l_2329;
        union U1 *l_2361 = &g_736;
        int32_t *l_2374 = &l_2138;
        int32_t * const ** const *l_2453 = (void*)0;
        int16_t ****l_2457[4];
        int16_t ****l_2458 = &l_2155;
        int32_t l_2474 = (-1L);
        int32_t * const l_2483 = (void*)0;
        int32_t * const *l_2482 = &l_2483;
        int32_t * const **l_2481 = &l_2482;
        int32_t * const ***l_2480 = &l_2481;
        int32_t * const ****l_2479 = &l_2480;
        const uint8_t *l_2520[7] = {&g_2521,&g_2521,&g_2521,&g_2521,&g_2521,&g_2521,&g_2521};
        uint32_t l_2536 = 0xC7FEDC7FL;
        struct S0 l_2542[6][6][7] = {{{{0x4BF1672A3651EB78LL,2L,2L},{0x04D2394375017353LL,0L,0L},{0x4BF1672A3651EB78LL,2L,2L},{-1L,0x7D3CB665L,0x2AC9L},{1L,0L,1L},{-1L,-4L,0x0911L},{0x446BED1C8E95D679LL,0xCC625B7BL,0x462DL}},{{0xB1E24F128C0B6CF9LL,-10L,0x6E57L},{0L,0x1676A147L,5L},{1L,0x91CBBC90L,-1L},{0x34F01124A5D3EA28LL,-1L,0xABCAL},{-2L,1L,-1L},{0L,0x1676A147L,5L},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L}},{{0x26C15589B32808B4LL,0x0EF07622L,0L},{8L,-7L,9L},{0x5887A5442BEEC049LL,0xE0A027E5L,0xC749L},{0x37EE47B9F676C0B4LL,-7L,1L},{0x56877D466F16FF0CLL,0xE248D668L,-1L},{-1L,-4L,0x0911L},{0x56877D466F16FF0CLL,0xE248D668L,-1L}},{{0L,0x1676A147L,5L},{7L,7L,0x8D69L},{7L,7L,0x8D69L},{0L,0x1676A147L,5L},{1L,0x4FEDF1D9L,9L},{6L,0xBC8E6503L,0xB92EL},{0x34F01124A5D3EA28LL,-1L,0xABCAL}},{{0xB7E8944E070D2D25LL,0xAD472E1EL,0L},{4L,0x4AB93B06L,-4L},{0x446BED1C8E95D679LL,0xCC625B7BL,0x462DL},{0x367FDDF36022DEE7LL,1L,0xA507L},{0x4BF1672A3651EB78LL,2L,2L},{0x1E31B63B136400AALL,0x6640BB85L,0x2DF9L},{0xA9AD6F3C8C464F99LL,0x0063ED02L,0xA064L}},{{1L,0x4FEDF1D9L,9L},{0xB1E24F128C0B6CF9LL,-10L,0x6E57L},{1L,0x91CBBC90L,-1L},{0x9E7E6B36FB67BC8DLL,1L,0xD8BAL},{0x59233149599D5FE6LL,0xE5E31981L,0x8E18L},{3L,-3L,1L},{0x34F01124A5D3EA28LL,-1L,0xABCAL}}},{{{-1L,-4L,0xC7C1L},{0L,0x19441436L,0xF288L},{0x45DC14BB70BD70C9LL,0L,-3L},{0L,0x19441436L,0xF288L},{-1L,-4L,0xC7C1L},{8L,-7L,9L},{0x56877D466F16FF0CLL,0xE248D668L,-1L}},{{0x666BA44F3FBC96F2LL,1L,-1L},{6L,0xBC8E6503L,0xB92EL},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L},{0x198062A0985BC03FLL,5L,-1L},{0x61CFF3EA698CAD5ELL,0L,0x5449L},{0x9E7E6B36FB67BC8DLL,1L,0xD8BAL},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L}},{{0x4715543D0BE9620DLL,0x5344A253L,0L},{0x4B9FDF000C7C4973LL,0xC58B3503L,0xDD97L},{0x0E756562FA93037DLL,0L,1L},{0x367FDDF36022DEE7LL,1L,0xA507L},{0xA9AD6F3C8C464F99LL,0x0063ED02L,0xA064L},{-1L,0x7D3CB665L,0x2AC9L},{0x446BED1C8E95D679LL,0xCC625B7BL,0x462DL}},{{0x666BA44F3FBC96F2LL,1L,-1L},{0x198062A0985BC03FLL,5L,-1L},{0xF3A45DD19C774613LL,6L,-5L},{0xF3A45DD19C774613LL,6L,-5L},{0x198062A0985BC03FLL,5L,-1L},{0x666BA44F3FBC96F2LL,1L,-1L},{-1L,0x7258004DL,-8L}},{{-1L,-4L,0xC7C1L},{-1L,0x6359D4CDL,-9L},{2L,-1L,1L},{0x37EE47B9F676C0B4LL,-7L,1L},{1L,-6L,0xE5D6L},{4L,0x4AB93B06L,-4L},{0xCA3F76A0829CAD8DLL,-1L,9L}},{{1L,0x4FEDF1D9L,9L},{-1L,-3L,-1L},{1L,0x2FB397CCL,0x34ACL},{3L,-3L,1L},{0x61CFF3EA698CAD5ELL,0L,0x5449L},{1L,0x91CBBC90L,-1L},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L}}},{{{0xB7E8944E070D2D25LL,0xAD472E1EL,0L},{-1L,0x6359D4CDL,-9L},{0x252F2666849116D0LL,0x9E239CF9L,0L},{-1L,0x7D3CB665L,0x2AC9L},{0x252F2666849116D0LL,0x9E239CF9L,0L},{-1L,0x6359D4CDL,-9L},{0xB7E8944E070D2D25LL,0xAD472E1EL,0L}},{{0L,0x1676A147L,5L},{0x198062A0985BC03FLL,5L,-1L},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L},{-1L,0x7258004DL,-8L},{0x59233149599D5FE6LL,0xE5E31981L,0x8E18L},{-2L,1L,-1L},{7L,7L,0x8D69L}},{{0x26C15589B32808B4LL,0x0EF07622L,0L},{0x4B9FDF000C7C4973LL,0xC58B3503L,0xDD97L},{0x56877D466F16FF0CLL,0xE248D668L,-1L},{-1L,0x6359D4CDL,-9L},{0x45DC14BB70BD70C9LL,0L,-3L},{4L,0x4AB93B06L,-4L},{0xBDF9C13F46B8FEBALL,0x05E27F77L,1L}},{{0xB1E24F128C0B6CF9LL,-10L,0x6E57L},{6L,0xBC8E6503L,0xB92EL},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L},{1L,0x4FEDF1D9L,9L},{1L,0x4FEDF1D9L,9L},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L},{6L,0xBC8E6503L,0xB92EL}},{{0x4BF1672A3651EB78LL,2L,2L},{0L,0x19441436L,0xF288L},{0x252F2666849116D0LL,0x9E239CF9L,0L},{8L,-7L,9L},{0x4715543D0BE9620DLL,0x5344A253L,0L},{-1L,0x7D3CB665L,0x2AC9L},{0x069371CF61C57D24LL,6L,-5L}},{{0x666BA44F3FBC96F2LL,1L,-1L},{0x47FEC7AA70A69D6ALL,-4L,-2L},{0x9E7E6B36FB67BC8DLL,1L,0xD8BAL},{-1L,-3L,-1L},{0x666BA44F3FBC96F2LL,1L,-1L},{0L,0x1676A147L,5L},{0x34F01124A5D3EA28LL,-1L,0xABCAL}}},{{{0x45DC14BB70BD70C9LL,0L,-3L},{-1L,-4L,0x0911L},{0xBA3348672F2D1F36LL,0xD628F1B9L,0x3ADCL},{-1L,0x6359D4CDL,-9L},{1L,-6L,0xE5D6L},{-1L,0x6359D4CDL,-9L},{0xBA3348672F2D1F36LL,0xD628F1B9L,0x3ADCL}},{{3L,-3L,1L},{0x34F01124A5D3EA28LL,-1L,0xABCAL},{7L,7L,0x8D69L},{0x198062A0985BC03FLL,5L,-1L},{-2L,1L,-1L},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L},{1L,0x2FB397CCL,0x34ACL}},{{0x4BF1672A3651EB78LL,2L,2L},{-1L,0x6359D4CDL,-9L},{0x4715543D0BE9620DLL,0x5344A253L,0L},{0x4B9FDF000C7C4973LL,0xC58B3503L,0xDD97L},{0x0E756562FA93037DLL,0L,1L},{0x367FDDF36022DEE7LL,1L,0xA507L},{0xA9AD6F3C8C464F99LL,0x0063ED02L,0xA064L}},{{0x666BA44F3FBC96F2LL,1L,-1L},{0x59233149599D5FE6LL,0xE5E31981L,0x8E18L},{-1L,-3L,-1L},{6L,0xBC8E6503L,0xB92EL},{-2L,1L,-1L},{-2L,1L,-1L},{6L,0xBC8E6503L,0xB92EL}},{{6L,0x7CC72216L,0x6284L},{0x37EE47B9F676C0B4LL,-7L,1L},{6L,0x7CC72216L,0x6284L},{0L,0x19441436L,0xF288L},{1L,-6L,0xE5D6L},{0x1E31B63B136400AALL,0x6640BB85L,0x2DF9L},{0x45DC14BB70BD70C9LL,0L,-3L}},{{0x47FEC7AA70A69D6ALL,-4L,-2L},{7L,7L,0x8D69L},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L},{0xB1E24F128C0B6CF9LL,-10L,0x6E57L},{0x666BA44F3FBC96F2LL,1L,-1L},{7L,7L,0x8D69L},{-1L,-3L,-1L}}},{{{0x4715543D0BE9620DLL,0x5344A253L,0L},{-1L,0x6359D4CDL,-9L},{0x4BF1672A3651EB78LL,2L,2L},{4L,0x4AB93B06L,-4L},{0x069371CF61C57D24LL,6L,-5L},{0x1E31B63B136400AALL,0x6640BB85L,0x2DF9L},{0x069371CF61C57D24LL,6L,-5L}},{{0x59233149599D5FE6LL,0xE5E31981L,0x8E18L},{3L,-3L,1L},{0x34F01124A5D3EA28LL,-1L,0xABCAL},{7L,7L,0x8D69L},{0x198062A0985BC03FLL,5L,-1L},{-2L,1L,-1L},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L}},{{0xBA3348672F2D1F36LL,0xD628F1B9L,0x3ADCL},{-1L,-4L,0x0911L},{0x45DC14BB70BD70C9LL,0L,-3L},{8L,-7L,9L},{6L,0x7CC72216L,0x6284L},{0x367FDDF36022DEE7LL,1L,0xA507L},{-1L,-4L,0xC7C1L}},{{0x198062A0985BC03FLL,5L,-1L},{-1L,-3L,-1L},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L},{0L,0x1676A147L,5L},{3L,-3L,1L},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L}},{{0x446BED1C8E95D679LL,0xCC625B7BL,0x462DL},{0x04D2394375017353LL,0L,0L},{1L,6L,-1L},{0x04D2394375017353LL,0L,0L},{0x446BED1C8E95D679LL,0xCC625B7BL,0x462DL},{-1L,0x6359D4CDL,-9L},{0x069371CF61C57D24LL,6L,-5L}},{{1L,0x4FEDF1D9L,9L},{-2L,1L,-1L},{-1L,-3L,-1L},{0xF3A45DD19C774613LL,6L,-5L},{0x004E339473622A38LL,0x35471BC2L,0x787FL},{0L,0x1676A147L,5L},{-1L,-3L,-1L}}},{{{0xBDF9C13F46B8FEBALL,0x05E27F77L,1L},{-1L,0x7D3CB665L,0x2AC9L},{0x56877D466F16FF0CLL,0xE248D668L,-1L},{8L,-7L,9L},{-1L,-4L,0xC7C1L},{0L,0x19441436L,0xF288L},{0x45DC14BB70BD70C9LL,0L,-3L}},{{1L,0x4FEDF1D9L,9L},{0xF3A45DD19C774613LL,6L,-5L},{7L,7L,0x8D69L},{0x59233149599D5FE6LL,0xE5E31981L,0x8E18L},{0L,0x1676A147L,5L},{1L,0x2FB397CCL,0x34ACL},{6L,0xBC8E6503L,0xB92EL}},{{0x446BED1C8E95D679LL,0xCC625B7BL,0x462DL},{0x4B9FDF000C7C4973LL,0xC58B3503L,0xDD97L},{-1L,0x04D113F2L,0xD156L},{4L,0x4AB93B06L,-4L},{0x252F2666849116D0LL,0x9E239CF9L,0L},{-1L,-4L,0x0911L},{0xA9AD6F3C8C464F99LL,0x0063ED02L,0xA064L}},{{0x198062A0985BC03FLL,5L,-1L},{0x61CFF3EA698CAD5ELL,0L,0x5449L},{0x9E7E6B36FB67BC8DLL,1L,0xD8BAL},{0xC10CFE915BA3D9CALL,0xDD6A2A12L,0x6161L},{0x004E339473622A38LL,0x35471BC2L,0x787FL},{0x666BA44F3FBC96F2LL,1L,-1L},{1L,0x2FB397CCL,0x34ACL}},{{0xBA3348672F2D1F36LL,0xD628F1B9L,0x3ADCL},{0x4B9FDF000C7C4973LL,0xC58B3503L,0xDD97L},{0x5887A5442BEEC049LL,0xE0A027E5L,0xC749L},{0L,0x19441436L,0xF288L},{0x5887A5442BEEC049LL,0xE0A027E5L,0xC749L},{0x4B9FDF000C7C4973LL,0xC58B3503L,0xDD97L},{0xBA3348672F2D1F36LL,0xD628F1B9L,0x3ADCL}},{{0x59233149599D5FE6LL,0xE5E31981L,0x8E18L},{0xF3A45DD19C774613LL,6L,-5L},{1L,0x2FB397CCL,0x34ACL},{0x004E339473622A38LL,0x35471BC2L,0x787FL},{3L,-3L,1L},{0x31FBE95BD41BEC5BLL,0x6A77814CL,0x47D3L},{0x34F01124A5D3EA28LL,-1L,0xABCAL}}}};
        int8_t l_2578 = (-1L);
        uint16_t l_2580 = 0xF0D9L;
        uint32_t ***l_2734 = &g_52;
        uint32_t ****l_2733 = &l_2734;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_2210[i][j] = 0L;
        }
        for (i = 0; i < 4; i++)
            l_2457[i] = &l_2155;
lbl_2342:
        if ((*g_1725))
        { 
            int32_t *l_2140 = &g_300;
            uint8_t l_2168 = 246UL;
            uint8_t l_2173[2];
            uint64_t l_2190 = 18446744073709551609UL;
            int i;
            for (i = 0; i < 2; i++)
                l_2173[i] = 0x20L;
            --l_2141;
            if (p_10)
            { 
                int32_t *l_2146[3];
                int16_t * const *l_2159 = (void*)0;
                int16_t * const **l_2158 = &l_2159;
                int32_t ****l_2164 = &g_361;
                uint16_t *l_2172 = &l_2141;
                int i;
                for (i = 0; i < 3; i++)
                    l_2146[i] = (void*)0;
                (*g_1725) |= l_2138;
                for (p_9 = 2; (p_9 > 26); p_9 = safe_add_func_uint32_t_u_u(p_9, 3))
                { 
                    int32_t **l_2147 = &l_2146[0];
                    int16_t * const ***l_2157[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_2157[i][j] = &g_2156;
                    }
                    l_2148[0][0] = ((*l_2147) = l_2146[2]);
                    (*g_1725) |= ((+((+(safe_div_func_int64_t_s_s(((1UL > 2UL) & p_9), 0x8A7C9EE12FDA0881LL))) && (safe_mul_func_uint8_t_u_u(((l_2155 == (l_2158 = g_2156)) && ((((safe_sub_func_uint64_t_u_u(p_9, 0x357ACA688F9F6B10LL)) < (-3L)) > p_10) && g_1297)), (**g_1440))))) && p_10);
                    (*l_2140) = 0x25E15AFAL;
                    if (l_2141)
                        break;
                    (*g_1725) ^= p_10;
                }
                l_2173[1] ^= (safe_mod_func_int16_t_s_s(((void*)0 == l_2164), (((!((safe_lshift_func_uint16_t_u_u(l_2168, 3)) >= ((*l_2172) = (((safe_mul_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(((((-1L) != (*l_2140)) | p_10) < 7L))), 0UL)) | 1UL) ^ l_2141)))) ^ 18446744073709551615UL) , p_9)));
            }
            else
            { 
                int32_t *l_2174 = &g_97;
                (**g_1375) = l_2174;
                if ((!(g_356 & 0xFBL)))
                { 
                    (*l_2174) ^= (*g_1725);
                    (*g_1725) = (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((p_10 <= ((*l_2174) ^= p_9)) , ((safe_lshift_func_int8_t_s_u((2L < (-1L)), 6)) || p_9)), 1UL)) <= ((safe_mod_func_int32_t_s_s(((l_2141 < (**g_1146)) & p_9), 0x42A4EC8CL)) ^ 0xBA3FL)), 65529UL));
                }
                else
                { 
                    (*l_2140) = 1L;
                }
            }
            for (g_1922 = 0; (g_1922 >= (-25)); g_1922 = safe_sub_func_int16_t_s_s(g_1922, 8))
            { 
                int32_t l_2191[7][7][5] = {{{0x2B402C75L,0x06BE80C0L,0xB5701A87L,0x06BE80C0L,0x2B402C75L},{0L,0x63F0E531L,(-1L),0x63F0E531L,0L},{0x2B402C75L,0x06BE80C0L,0xB5701A87L,0x06BE80C0L,0x2B402C75L},{0L,0x63F0E531L,(-1L),0x63F0E531L,0L},{0x2B402C75L,0x06BE80C0L,0xB5701A87L,0x06BE80C0L,0x2B402C75L},{0L,0x63F0E531L,(-1L),0x63F0E531L,0L},{0x2B402C75L,0x06BE80C0L,0xB5701A87L,0x06BE80C0L,0x2B402C75L}},{{0L,0x63F0E531L,(-1L),0x63F0E531L,0L},{0x2B402C75L,0x06BE80C0L,0xB5701A87L,0x06BE80C0L,0x2B402C75L},{0L,0x63F0E531L,(-1L),0x63F0E531L,0L},{0x2B402C75L,0x06BE80C0L,0xB5701A87L,0x06BE80C0L,0x2B402C75L},{0L,0x63F0E531L,(-1L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L}},{{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L}},{{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L}},{{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L}},{{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L}},{{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L},{0x63F0E531L,0xDCD111E1L,(-6L),0xDCD111E1L,0x63F0E531L},{0x06BE80C0L,0x3DD96AA7L,1L,0x3DD96AA7L,0x06BE80C0L}}};
                int16_t *l_2192 = &g_98;
                int i, j, k;
                (*l_2140) = (((*l_2192) = (safe_lshift_func_uint16_t_u_u((*l_2140), (safe_add_func_int64_t_s_s((l_2190 > p_10), l_2191[5][1][4]))))) <= 0x9414L);
                return (*g_1441);
            }
            (*g_1376) = &l_2138;
        }
        else
        { 
            int64_t l_2193[1];
            int32_t l_2211 = 1L;
            int32_t l_2214 = (-7L);
            int32_t l_2224 = 0x1A4ADE8FL;
            int32_t l_2226 = 0xA1DC93E7L;
            int32_t l_2227[1];
            uint32_t l_2270 = 0x97BF3FA3L;
            const int16_t l_2282 = 0xAC7EL;
            const int32_t ****l_2331 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_2193[i] = 1L;
            for (i = 0; i < 1; i++)
                l_2227[i] = 0x60307253L;
            l_2193[0] = l_2141;
            if (p_10)
            { 
                (*g_1725) = l_2194;
            }
            else
            { 
                int64_t **l_2209 = &g_979;
                int32_t l_2213 = 0x2401B84AL;
                int32_t l_2216 = 5L;
                int32_t l_2217 = 3L;
                int32_t l_2218 = 0xD70FAC13L;
                int32_t l_2220[1][2][2] = {{{0x443CE6E3L,0x443CE6E3L},{0x443CE6E3L,0x443CE6E3L}}};
                uint32_t l_2221 = 18446744073709551609UL;
                int32_t l_2225[1][7] = {{0xA56B6573L,0xA56B6573L,0xA56B6573L,0xA56B6573L,0xA56B6573L,0xA56B6573L,0xA56B6573L}};
                int32_t l_2283 = 0x80366E52L;
                int i, j, k;
                if (((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x9ECC7728L, (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((l_2205 , (((((*g_390) < ((void*)0 != l_2206[4][2])) > ((**g_1146) , (((g_218[0][0] != l_2194) < 18446744073709551614UL) < g_519.f2))) <= g_48.f0) , g_703)) >= p_10) <= l_2193[0]), 1L)) != g_290), l_2193[0])), p_10)))), g_878)) , l_2141))
                { 
                    int32_t l_2212 = 1L;
                    int32_t l_2215 = 0xE2A8688DL;
                    int32_t l_2219[4];
                    int32_t l_2228 = 2L;
                    uint32_t *l_2232 = &g_47;
                    union U1 l_2247 = {0xCD59AA4AEA477C17LL};
                    int8_t *l_2248 = (void*)0;
                    int8_t *l_2249 = &g_91;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2219[i] = 0xD41110A2L;
                    l_2210[0][0] = (&g_979 == l_2209);
                    ++l_2221;
                    l_2229[1][1][3]--;
                    l_2227[0] = ((**g_1047) | ((l_2232 = l_2148[0][0]) == ((((func_15(p_10, p_9, (*g_642), p_10) , (-1L)) > (-9L)) == 1UL) , (void*)0)));
                    l_2219[1] = (safe_mod_func_int8_t_s_s(((*l_2249) &= ((*g_1441) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_9, (&g_405 == ((safe_add_func_int64_t_s_s(l_2229[1][1][5], (l_2193[0] || (safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((l_2247 , 0x89L) | 0x13L), 4)), l_2224)), (*g_1147)))))) , &g_405)))), 14)))), 1UL));
                }
                else
                { 
                    int32_t ****l_2257 = (void*)0;
                    int32_t ***l_2259 = &g_404[1][2][0];
                    int32_t ****l_2258[3];
                    union U1 **l_2272 = &g_735;
                    uint16_t *l_2273 = &g_357;
                    int64_t l_2281 = 6L;
                    int16_t *l_2284 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2258[i] = &l_2259;
                    l_2271 = (((safe_rshift_func_int8_t_s_u(((*g_1441) = (safe_lshift_func_int8_t_s_s((((((((+((p_9 = (safe_sub_func_uint32_t_u_u(((g_2260[1][2][2] = &g_404[3][1][0]) == l_2261), (safe_add_func_uint32_t_u_u(g_79[2], (l_2210[0][0] = (!p_9))))))) & ((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((((p_10 , ((void*)0 != l_2269)) | l_2270) | p_10), l_2193[0])) == p_10), l_2211)) == l_2227[0]))) , 255UL) < p_10) < 255UL) >= g_217) ^ p_10) , 0L), 4))), 2)) <= g_731[0][5]) < p_10);
                    (*l_2272) = &g_736;
                    l_2226 = (((*l_2273) = 0UL) , (((safe_rshift_func_int16_t_s_u((p_9 = (((l_2214 ^= (safe_add_func_uint32_t_u_u(((((((!(safe_rshift_func_int16_t_s_u((((-7L) >= ((0x2B82L && (((*g_1725) = ((p_9 && (p_10 && l_2281)) & 4UL)) && l_2281)) <= 0L)) && l_2229[1][1][3]), l_2229[0][1][2]))) && (*g_1441)) | l_2220[0][1][0]) == l_2282) || 0x728AD64DL) <= p_10), g_706))) >= l_2283) , 0L)), 12)) ^ 7L) != 3L));
                    (**g_1375) = &l_2210[0][0];
                    (**g_1375) = (*g_1376);
                }
                l_2210[0][0] = (safe_mul_func_int16_t_s_s(l_2287, (**g_1146)));
            }
            for (g_1432 = 16; (g_1432 != 16); g_1432 = safe_add_func_int32_t_s_s(g_1432, 4))
            { 
                int16_t l_2293[6];
                int32_t l_2296 = 0x83C6DDDDL;
                int32_t l_2297 = 0xEBF99C48L;
                int32_t l_2298 = 0x2A0FD7A8L;
                int32_t l_2299 = 0x5A204FE4L;
                int32_t l_2300 = 0x471C4402L;
                int32_t l_2301 = 0x313BA827L;
                int32_t l_2303 = 0x0B283B51L;
                int32_t l_2307 = (-10L);
                int32_t l_2308 = 0x715A4822L;
                int32_t l_2310 = 0x92F48CF4L;
                int32_t l_2311[7] = {0xC18F7AE3L,(-1L),(-1L),0xC18F7AE3L,(-1L),(-1L),0xC18F7AE3L};
                int64_t l_2312 = 1L;
                int64_t l_2313 = (-1L);
                int8_t l_2315[4][3] = {{1L,1L,4L},{0L,4L,4L},{4L,1L,0L},{0L,1L,0L}};
                uint64_t l_2316 = 1UL;
                struct S0 ** const *l_2323 = &l_2133;
                struct S0 ** const **l_2322[7] = {&l_2323,(void*)0,&l_2323,&l_2323,(void*)0,&l_2323,&l_2323};
                int i, j;
                for (i = 0; i < 6; i++)
                    l_2293[i] = 0x45DDL;
                for (l_2270 = (-30); (l_2270 != 14); l_2270++)
                { 
                    int64_t l_2292 = 0xB9BEC7A429ADBD3DLL;
                    int8_t l_2294 = 0xFEL;
                    int32_t l_2295[3];
                    uint64_t l_2304 = 0UL;
                    int8_t l_2309[5];
                    union U1 *l_2319 = &g_736;
                    union U1 **l_2320 = &l_2319;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2295[i] = (-1L);
                    for (i = 0; i < 5; i++)
                        l_2309[i] = 0xC3L;
                    --l_2304;
                    l_2316--;
                    (*l_2320) = l_2319;
                }
                l_2321 |= 0x06AC6A8BL;
                g_2324 = &g_641;
                (*g_1376) = (void*)0;
                for (g_356 = 0; (g_356 > (-8)); g_356 = safe_sub_func_uint8_t_u_u(g_356, 3))
                { 
                    const int32_t *****l_2330[5];
                    const uint64_t ****l_2338 = &l_2206[0][2];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2330[i] = (void*)0;
                    l_2331 = (l_2328 = l_2328);
                    if (p_10)
                        break;
                    (*g_1376) = (void*)0;
                    l_2210[0][0] = (((p_10 > (safe_sub_func_uint8_t_u_u(((l_2334 != ((*l_2338) = g_2335)) , (&g_1432 == (void*)0)), g_1432))) | l_2296) > l_2224);
                }
            }
        }
        if ((safe_add_func_int64_t_s_s(l_2341, ((*g_1408) |= l_2229[0][0][3]))))
        { 
            int32_t l_2349 = (-1L);
            int32_t *l_2352 = &l_2210[0][0];
            const int32_t *l_2377 = &l_2138;
            uint16_t *l_2451 = &g_1297;
            uint16_t l_2452 = 0xADAEL;
            int16_t l_2454 = 1L;
            int16_t ****l_2456 = (void*)0;
            int16_t *****l_2455[2][6][2] = {{{(void*)0,&l_2456},{&l_2456,&l_2456},{(void*)0,&l_2456},{&l_2456,&l_2456},{(void*)0,&l_2456},{&l_2456,&l_2456}},{{(void*)0,&l_2456},{&l_2456,&l_2456},{(void*)0,&l_2456},{&l_2456,&l_2456},{(void*)0,&l_2456},{&l_2456,&l_2456}}};
            int i, j, k;
            if (l_2341)
                goto lbl_2342;
lbl_2424:
            if (((**g_2325) , (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_9, ((safe_mod_func_int16_t_s_s(0xE530L, l_2349)) , (safe_add_func_uint8_t_u_u(((((**g_1047) &= p_9) >= (***g_2335)) == ((&l_2138 == l_2352) ^ (*g_1147))), l_2353))))), 6))))
            { 
                uint8_t *l_2370 = (void*)0;
                uint8_t *l_2371 = (void*)0;
                uint8_t *l_2372 = &g_878;
                int32_t *l_2373 = (void*)0;
                uint32_t *l_2387 = &l_2229[0][1][2];
                int32_t l_2388 = 0x94F726C2L;
                uint64_t ****l_2393 = &g_1341;
                uint16_t *l_2401 = (void*)0;
                uint16_t *l_2402[7] = {&l_2141,&l_2141,&l_2141,&l_2141,&l_2141,&l_2141,&l_2141};
                int32_t *l_2414 = &g_352;
                int i;
                (*g_1725) = (safe_rshift_func_uint8_t_u_u(((*g_979) , (((((((((safe_div_func_int32_t_s_s((((*l_2372) = (safe_rshift_func_int16_t_s_u((255UL > ((~((void*)0 == l_2361)) >= (p_9 >= (safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((4UL && (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_10, 0xE8L)), (*l_2352)))), 0x92L)), g_37))))), 15))) && 255UL), g_70)) , l_2373) != l_2373) >= 4L) && l_2194) | p_10) & l_2229[0][1][4]) | p_9) | (*l_2352))), g_1430));
                (*g_1376) = l_2374;
                (*g_1725) |= (**g_1376);
                for (g_710 = 0; (g_710 < 23); g_710++)
                { 
                    l_2377 = (*g_1376);
                    if (p_9)
                        break;
                }
                if (l_2341)
                    goto lbl_2424;
                if ((((0x9BA8L || ((*g_390) < ((((safe_unary_minus_func_uint16_t_u((safe_div_func_int64_t_s_s((p_10 , (safe_rshift_func_int8_t_s_u((((safe_mod_func_uint64_t_u_u((*l_2374), (*l_2374))) == (++(*g_1408))) , (p_9 & ((((*l_2387) ^= (*l_2377)) || g_1992) <= l_2388))), 7))), 0x21EF034B923AB674LL)))) ^ (*g_390)) , 0x6D66B3BE215F752FLL) , (*l_2377)))) , 0x404836C2L) < 0x090D0453L))
                { 
                    uint32_t l_2389[6][2] = {{18446744073709551615UL,0x0300037EL},{18446744073709551615UL,18446744073709551615UL},{0x0300037EL,18446744073709551615UL},{18446744073709551615UL,0x0300037EL},{18446744073709551615UL,18446744073709551615UL},{0x0300037EL,18446744073709551615UL}};
                    struct S0 l_2392 = {0x79813698634C5CBDLL,0xE6ECECAFL,0x1EC1L};
                    int i, j;
                    l_2389[2][1]--;
                    (*g_1725) |= (l_2392 , (***g_1375));
                    if (g_706)
                        goto lbl_2394;
                }
                else
                { 
lbl_2394:
                    (*g_1725) = (0x53021139L == ((p_10 , l_2393) != l_2393));
                    (*l_2374) ^= 0xEFC62F17L;
                    (*g_1725) = (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_76, (*g_1441))), ((safe_rshift_func_int8_t_s_u(((p_9 != ((((l_2388 |= (*l_2377)) || ((++g_731[0][6]) < (((*l_2372) = (p_10 == (-1L))) == (safe_lshift_func_uint16_t_u_u((!((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((((p_10 | 1UL) , p_9) && 0x60D32C3CFB5C6644LL), (**g_1440))), 6)) , p_9)), 0))))) || p_9) && 5UL)) == p_9), 5)) != g_706)));
                    (**g_1375) = l_2414;
                    (*l_2414) = 1L;
                }
            }
            else
            { 
                uint16_t *l_2421 = (void*)0;
                uint16_t *l_2422 = &g_515;
                uint8_t l_2423 = 0x65L;
                (*l_2374) = (0x18L & (((!p_9) & (g_878 || 0xC6L)) == (safe_div_func_int32_t_s_s(((!9L) & ((((((4294967295UL == (func_23((((*l_2422) = (*l_2374)) , (***g_395)), p_10, (**l_2133)) , 4294967293UL)) || l_2423) <= (*g_1441)) <= g_736.f2) > 0x9EFB705EL) , 0x42E0239DL)), 1L))));
                (**g_1375) = &l_2210[0][0];
            }
            (*g_1725) &= ((((safe_lshift_func_int16_t_s_s((**g_1146), 9)) == ((safe_add_func_uint8_t_u_u((p_9 & ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((((((*g_390) ^ (((((safe_lshift_func_uint8_t_u_u((*l_2352), 5)) ^ ((safe_rshift_func_int8_t_s_u(((((l_2453 = ((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-3L), (safe_div_func_int64_t_s_s(((*l_2374) = ((*g_979) = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_2451) = (p_10 != ((safe_div_func_int64_t_s_s((p_9 & 65535UL), p_9)) ^ 0x4BL))), l_2452)), (-1L))))), 18446744073709551613UL)))), 0x5A14L)) , l_2453)) == (void*)0) , p_10) , (*g_1441)), 5)) , (*g_1147))) | (**g_1146)) >= p_10) > g_218[1][0])) == 4294967288UL) == (*l_2352)) < l_2454), 0x55L)) ^ p_9), 0xFECCL)), g_1922)) < p_9)), g_442)) , p_9)) && 1L) , 0x31642DB1L);
            l_2458 = (l_2457[2] = &l_2155);
        }
        else
        { 
            union U1 *l_2469 = &g_736;
            int32_t l_2470 = (-1L);
            int32_t * const ****l_2515 = &l_2480;
            int32_t l_2524 = 0x0A2FDD5AL;
            int32_t l_2552 = 0x5D97A3B3L;
            int32_t l_2556 = 0xBBD46DA7L;
            int32_t l_2559 = 0x6BDAE4E3L;
            int32_t l_2560 = (-3L);
            int32_t l_2561[6];
            int64_t l_2606 = 1L;
            struct S0 *l_2620[1];
            uint64_t l_2631 = 0xCEB6151125F94411LL;
            uint8_t *l_2660 = &l_2321;
            int16_t *****l_2667 = &l_2457[3];
            uint16_t *l_2715 = &g_515;
            int i;
            for (i = 0; i < 6; i++)
                l_2561[i] = 0x7874A47BL;
            for (i = 0; i < 1; i++)
                l_2620[i] = &g_2621;
            if (((*g_1725) = (safe_mul_func_int8_t_s_s(((void*)0 != &g_2260[1][2][2]), (((safe_add_func_uint8_t_u_u((((*g_642) , (((((safe_add_func_uint32_t_u_u(p_10, (g_1432 = ((safe_add_func_int8_t_s_s(((**l_2269) = ((*g_1441) | (safe_unary_minus_func_int32_t_s((+((void*)0 == l_2469)))))), 0x22L)) < p_9)))) == p_10) | l_2470) >= 0x796997B7L) , &l_2206[0][3])) != &l_2334), p_10)) >= 0L) ^ 7UL)))))
            { 
                int32_t l_2473 = 0x2CC0B041L;
                int32_t * const *l_2478 = &g_405;
                int32_t * const **l_2477 = &l_2478;
                int32_t * const ***l_2476 = &l_2477;
                int32_t * const ****l_2475 = &l_2476;
                int64_t *l_2501 = &g_1545;
                const uint8_t *l_2507 = &g_710;
                struct S0 l_2522 = {0xCCA9EF88D4BEEDE4LL,-1L,0x6B1FL};
                int32_t l_2529 = 0x20B06E12L;
                int32_t l_2531 = 1L;
                int32_t l_2533 = 0L;
                int32_t l_2534[4][1][4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_2534[i][j][k] = 0L;
                    }
                }
                for (g_356 = 0; (g_356 < (-4)); g_356 = safe_sub_func_uint32_t_u_u(g_356, 6))
                { 
                    return l_2473;
                }
                if (((l_2470 ^ (l_2470 | (((*l_2374) = (l_2474 && ((l_2479 = l_2475) == (void*)0))) , (safe_sub_func_int16_t_s_s((((***l_2132) , (*g_1047)) != (void*)0), (*g_1147)))))) , l_2473))
                { 
                    uint32_t l_2490 = 0UL;
                    int64_t * const l_2502 = (void*)0;
                    uint32_t *l_2503[5][3][7] = {{{(void*)0,&l_2194,&l_2194,(void*)0,&l_2194,&l_2194,(void*)0},{&g_47,&l_2194,&g_736.f1,(void*)0,&g_47,(void*)0,&g_736.f1},{(void*)0,(void*)0,&g_736.f1,&g_47,&l_2194,&g_736.f1,&l_2194}},{{&g_736.f1,&g_736.f1,&g_736.f1,&g_47,(void*)0,&g_736.f1,&g_736.f1},{&g_47,&l_2194,&l_2194,&l_2194,&l_2194,&g_47,&l_2194},{&g_736.f1,&g_47,&g_736.f1,&l_2194,&g_47,&g_47,&g_736.f1}},{{&l_2194,&l_2194,&g_47,&l_2194,&l_2194,&l_2194,&l_2194},{&g_47,&g_47,&g_47,(void*)0,&g_736.f1,&g_736.f1,&g_736.f1},{&g_47,&l_2194,&g_736.f1,&l_2194,&g_47,&g_736.f1,(void*)0}},{{&g_47,&g_736.f1,(void*)0,&l_2194,(void*)0,&g_736.f1,&g_47},{&g_47,(void*)0,&l_2194,&l_2194,(void*)0,&l_2194,&l_2194},{&g_47,&l_2194,&g_736.f1,&g_47,&g_736.f1,&g_47,&g_736.f1}},{{&g_47,&l_2194,&l_2194,&g_47,&l_2194,&g_47,&g_47},{&g_47,(void*)0,(void*)0,(void*)0,&g_736.f1,&g_736.f1,&g_736.f1},{&l_2194,&g_47,&g_736.f1,(void*)0,(void*)0,&g_736.f1,&g_47}}};
                    const uint8_t **l_2508 = &l_2507;
                    const uint8_t **l_2509 = (void*)0;
                    const uint8_t **l_2510[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_2523[4];
                    uint32_t l_2525[7][1] = {{0x7FB34542L},{0x6F60658FL},{0x6F60658FL},{0x7FB34542L},{0x6F60658FL},{0x6F60658FL},{0x7FB34542L}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_2523[i] = 0x436B11AFL;
                    (*g_1725) = ((safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(l_2490, ((**g_1440) = (**g_1440)))) <= 18446744073709551615UL), (((safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(1UL, (((safe_lshift_func_int8_t_s_u((((-4L) == 65535UL) == (l_2501 != l_2502)), 3)) != p_10) || 1UL))) | (**g_1146)), 251UL)) <= g_1548[1]) , p_10), 8)) & p_9) ^ p_10))) , p_9);
                    (**g_1375) = &l_2138;
                    (*l_2374) &= (func_15((l_2504[1] &= 8UL), ((safe_add_func_uint16_t_u_u(((g_2511 = ((*l_2508) = l_2507)) != (l_2520[3] = ((((safe_mul_func_uint16_t_u_u(((&l_2328 != l_2515) | (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((0xD6L && l_2473), ((****l_2515) != (****l_2475)))), 0xE5EFCE05L))), 65532UL)) && 1UL) , l_2470) , (void*)0))), l_2470)) != (-2L)), l_2522, l_2470) , p_9);
                    l_2525[0][0]--;
                    return l_2525[0][0];
                }
                else
                { 
                    int8_t l_2528 = 1L;
                    int32_t l_2530 = (-1L);
                    int32_t l_2532 = (-9L);
                    int32_t l_2535 = 0x7CD38FB0L;
                    int8_t *l_2548 = &g_1547;
                    int32_t l_2549 = 0xF5ADDD1CL;
                    int32_t l_2550 = 0x272F28C8L;
                    int32_t l_2553 = (-1L);
                    int32_t l_2554 = 0x4B98F66AL;
                    int32_t l_2555 = 0L;
                    int32_t l_2557 = 0L;
                    int32_t l_2558[2][3][3] = {{{0x39547506L,0x39547506L,0x39547506L},{1L,1L,1L},{0x39547506L,0x39547506L,0x39547506L}},{{1L,1L,1L},{0x39547506L,0x39547506L,0x39547506L},{1L,1L,1L}}};
                    uint64_t l_2562 = 0xA7179703E248D5FDLL;
                    int i, j, k;
                    l_2473 = 0xAC1E9BCDL;
                    --l_2536;
                    (*g_1376) = (((((l_2533 = ((**g_1440) > (0xAAL ^ (safe_mod_func_uint8_t_u_u((((!0xF2E1CDD7L) > (l_2542[5][2][6] , ((*g_2511) || ((((((*l_2475) == ((((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((*l_2548) = (l_2524 = (safe_div_func_uint8_t_u_u(1UL, p_9)))))), l_2522.f0)) ^ (-9L)) | 18446744073709551609UL) , (void*)0)) || p_10) != p_10) && 3UL) >= p_10)))) & 4294967295UL), p_9))))) >= (*g_2511)) || 0x9190ABEF30AF0D37LL) || p_9) , (*g_1376));
                    ++l_2562;
                }
            }
            else
            { 
                uint64_t l_2577 = 0xA05CB64D0C40E673LL;
                int32_t l_2600 = (-4L);
                int32_t l_2601 = 1L;
                int32_t l_2602 = 0xC183AE1EL;
                int32_t l_2603 = 0L;
                int32_t l_2609 = 0L;
                int32_t l_2610 = 0x4619F38CL;
                int32_t l_2611 = 2L;
                for (l_2474 = 3; (l_2474 > (-11)); l_2474 = safe_sub_func_uint8_t_u_u(l_2474, 6))
                { 
                    int16_t l_2579 = 0x86DDL;
                    (*g_1725) = (l_2559 = ((func_15((safe_sub_func_uint8_t_u_u(0x24L, (*g_2511))), ((safe_mod_func_uint8_t_u_u((g_582 = (safe_sub_func_uint32_t_u_u(0xE351E925L, (safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((l_2470 ^ (**g_1047)) && ((g_79[2] <= (*g_1725)) , 1UL)), l_2577)), l_2578))))), p_9)) != 0xF88E5901L), (**g_641), (*l_2374)) , (***l_2132)) , l_2579));
                    if ((*g_390))
                        break;
                }
                if (l_2580)
                { 
                    l_2560 = 0xD48613FEL;
                    return (**g_1440);
                }
                else
                { 
                    (*g_1376) = &l_2138;
                }
                for (g_878 = 0; (g_878 == 34); g_878 = safe_add_func_int32_t_s_s(g_878, 8))
                { 
                    int16_t l_2604 = 0xB3FFL;
                    int32_t l_2605 = 0L;
                    int32_t l_2607 = (-1L);
                    int32_t l_2608 = 0L;
                    int32_t l_2612 = 0L;
                    int32_t l_2613 = (-2L);
                    int32_t l_2614 = 5L;
                    int32_t l_2615 = 1L;
                    int64_t l_2616 = 0xC51C73CFBC01EA85LL;
                    l_2552 = (safe_lshift_func_int16_t_s_u(((p_10 ^ (4294967295UL || 4294967295UL)) | ((~(4294967293UL <= l_2560)) <= (((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x30L, (((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0x10L, (*g_2511))) > p_10), 1L)), l_2577)), p_10)), p_10)) >= (-1L)) && 1UL))), (-10L))) , p_9) & l_2561[2]))), p_10));
                    l_2617--;
                }
                if (l_2353)
                    goto lbl_2622;
lbl_2622:
                l_2620[0] = ((*l_2133) = (**g_2324));
                (**g_1375) = (**g_1375);
            }
            for (g_1992 = 1; (g_1992 > 1); g_1992++)
            { 
                uint32_t l_2625[4][6] = {{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}};
                int32_t * const *l_2630[6];
                uint16_t l_2647[7][4] = {{65529UL,65529UL,0xA0EEL,65529UL},{65529UL,0xB52CL,0xB52CL,65529UL},{0xB52CL,65529UL,0xB52CL,0xB52CL},{65529UL,65529UL,0xA0EEL,65529UL},{65529UL,0xB52CL,0xB52CL,65529UL},{0xB52CL,65529UL,0xB52CL,0xB52CL},{65529UL,65529UL,0xA0EEL,65529UL}};
                struct S0 l_2676[1] = {{0x7905DF63ABC9FEA3LL,0x2E98AF7BL,0xF858L}};
                int8_t l_2704[4] = {(-1L),(-1L),(-1L),(-1L)};
                int i, j;
                for (i = 0; i < 6; i++)
                    l_2630[i] = (void*)0;
                if ((l_2625[1][3] ^ ((&g_2156 == (void*)0) | ((safe_rshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s((((((p_9 <= (*l_2374)) , l_2630[4]) == &l_2148[2][0]) > 0x99E6L) <= p_10), (**g_1047))) & p_9), l_2556)) , (*g_2511)))))
                { 
                    l_2631--;
                }
                else
                { 
                    int8_t l_2634 = 0xCFL;
                    l_2634 = p_10;
                    (*l_2374) ^= ((*g_1725) = ((**g_641) , 0xF9E022BBL));
                    return l_2561[2];
                }
                for (g_48.f2 = 0; (g_48.f2 <= 29); g_48.f2++)
                { 
                    uint8_t l_2641 = 1UL;
                    uint16_t *l_2646[5];
                    uint32_t l_2650 = 18446744073709551609UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2646[i] = &g_70;
                    (*l_2374) = ((safe_rshift_func_int8_t_s_u(((((0x0E3A38EFL == 2L) >= ((((safe_sub_func_uint32_t_u_u((l_2641 < (((safe_mul_func_int8_t_s_s(0L, (l_2205 , (*g_1441)))) | p_9) > p_9)), p_9)) | l_2641) && 0UL) <= p_10)) == l_2641) != (-3L)), 2)) || (**g_1440));
                    l_2650 &= ((safe_rshift_func_int16_t_s_u(l_2552, (l_2647[1][2]--))) < (*g_979));
                    (*g_1725) = ((~p_9) , p_10);
                }
                for (g_515 = 0; (g_515 <= 2); g_515 += 1)
                { 
                    (*g_1725) |= ((safe_sub_func_int8_t_s_s((safe_mul_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((*g_1147), 1L)) || ((--(*g_1408)) | (***g_2335))) && ((void*)0 == l_2660)), ((safe_rshift_func_int8_t_s_u(((*g_1441) = (*g_1441)), 4)) < p_10))), p_9)) || p_10);
                }
                if (((l_2561[3] , (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((0x3ABE4BC399F14123LL < ((g_2668 = l_2667) != ((*g_735) , (void*)0))) & (*g_1408)) >= p_9), 7)) | 0L), (-1L)))) && p_9))
                { 
                    uint16_t l_2679 = 0xD136L;
                    l_2679 &= (g_1432 != 0UL);
                    (*l_2374) = p_10;
                    if (l_2561[4])
                        break;
                    if (l_2679)
                        break;
                }
                else
                { 
                    int32_t l_2697 = 1L;
                    int32_t l_2700[7][3][3] = {{{0x4CCB73C2L,9L,0xAAA4043EL},{0xD00CB61CL,0xFA4A30CCL,(-1L)},{2L,2L,0L}},{{0xB2E14C16L,0xFA4A30CCL,0xF9519604L},{8L,9L,0xDD5A386BL},{0xB2E14C16L,0x654B5BBBL,0x92C41285L}},{{2L,8L,0xDD5A386BL},{0xD00CB61CL,0xD00CB61CL,0xF9519604L},{0x4CCB73C2L,8L,0L}},{{0xFA4A30CCL,0x654B5BBBL,(-1L)},{0x4CCB73C2L,9L,0xAAA4043EL},{0xD00CB61CL,0xFA4A30CCL,(-1L)}},{{2L,2L,0L},{0xB2E14C16L,0xFA4A30CCL,0xF9519604L},{8L,9L,0xDD5A386BL}},{{0xB2E14C16L,0x654B5BBBL,0x92C41285L},{2L,8L,0xDD5A386BL},{0xD00CB61CL,0xD00CB61CL,0xF9519604L}},{{0x4CCB73C2L,8L,0L},{0xFA4A30CCL,0x654B5BBBL,(-1L)},{0x4CCB73C2L,9L,0xAAA4043EL}}};
                    uint16_t *l_2703 = &l_2141;
                    uint32_t *l_2705 = &g_1432;
                    int32_t l_2706 = 0xF352E56FL;
                    uint64_t *l_2707 = (void*)0;
                    uint64_t *l_2708 = &g_1496[1];
                    int i, j, k;
                    l_2700[3][2][1] = (((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((g_731[0][1] ^= (5UL < (p_10 < (((*l_2708) ^= ((((l_2706 ^= (safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_2660) = ((((!((p_9 , l_2552) , ((((*l_2705) = (((*g_1408) ^= (((l_2697 > (((safe_mul_func_int16_t_s_s((p_9 = l_2700[3][2][1]), ((*l_2703) = (safe_mul_func_uint16_t_u_u((&l_2631 == &l_2631), p_10))))) ^ l_2697) >= p_10)) < p_10) , l_2704[1])) , g_442)) && 0xFE0D0421L) > p_10))) , &p_10) == &p_10) | 0x44L)), 7)), p_10)) ^ 0xF2AEL) | l_2556), p_10)) & p_10), 4)), 0x2542L)), p_10))) < l_2700[3][2][1]) , p_9) < p_10)) <= p_10)))) < 4294967295UL), p_10)), (-1L))) | (*l_2374)) || 4294967291UL);
                    (**g_1375) = (*g_1376);
                    return (**g_1440);
                }
            }
            (**g_1375) = (*g_1376);
            (*g_1725) = (((p_9 != ((*g_979) = (*g_979))) <= ((*l_2715) = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((p_10 < (g_878 &= ((*l_2374) <= ((safe_add_func_uint8_t_u_u(((*l_2660) = (*g_2511)), (**g_1440))) != (p_9 < g_148[3]))))), 5)), (*l_2374))) <= p_10))) , (*g_1725));
        }
        for (g_877 = 10; (g_877 != (-5)); g_877 = safe_sub_func_uint32_t_u_u(g_877, 5))
        { 
            int32_t *l_2720 = (void*)0;
            int64_t **l_2739 = &g_979;
            (*l_2374) = (safe_div_func_uint8_t_u_u(0xB6L, (*g_1441)));
            (*g_1376) = l_2720;
            g_1548[1] ^= ((*g_1725) = ((*l_2374) = p_9));
            for (l_2138 = 0; (l_2138 <= 1); l_2138 += 1)
            { 
                uint32_t *l_2728[4][5][7] = {{{&g_731[0][4],(void*)0,&l_2341,&g_76,&g_76,&l_2341,(void*)0},{&g_731[0][0],&l_2341,&g_1432,&g_731[0][0],&g_112,&g_76,&g_731[0][0]},{&g_76,(void*)0,&g_76,&l_2229[0][1][2],(void*)0,&g_1432,&g_1432},{&l_2229[1][1][3],&g_731[0][0],&g_76,&g_731[0][0],&l_2229[1][1][3],&g_76,&l_2229[1][1][3]},{&g_76,&g_1432,&l_2229[0][1][2],&g_76,&l_2229[0][1][2],&g_1432,&g_76}},{{&g_1432,&l_2341,&l_2229[0][1][2],&g_76,&l_2229[1][1][3],&g_76,&l_2229[0][1][2]},{&g_76,&g_76,&l_2341,&g_1432,&l_2229[0][1][2],&g_76,&l_2229[0][1][2]},{&l_2229[0][1][2],&g_76,&g_76,&l_2341,(void*)0,&g_731[0][5],&l_2229[0][1][2]},{(void*)0,&l_2229[0][1][2],&g_1432,&g_1432,&l_2229[0][1][2],(void*)0,&l_2341},{&g_112,&l_2341,&l_2229[1][1][3],&g_731[0][0],&g_1432,&l_2341,&l_2229[0][1][2]}},{{&l_2229[0][1][2],&l_2341,(void*)0,&l_2229[0][1][2],&g_1432,&g_1432,&l_2229[0][1][2]},{&g_76,&l_2341,&g_76,&g_731[0][3],&l_2229[0][1][2],&g_76,&g_76},{&g_1432,&l_2229[0][1][2],&g_76,&l_2229[0][1][2],&g_1432,&g_76,&g_76},{&g_1432,&g_76,(void*)0,&g_731[0][0],(void*)0,&g_76,&g_1432},{(void*)0,&g_76,&l_2341,&g_1432,&g_76,&g_1432,&l_2341}},{{&g_1432,&g_731[0][0],&l_2229[1][1][3],&l_2341,&g_112,&l_2341,&g_112},{&g_1432,&l_2341,&l_2341,&g_1432,&g_1432,(void*)0,&g_1432},{&g_76,&g_76,(void*)0,&g_731[0][3],&g_112,&g_731[0][5],&g_76},{&l_2229[0][1][2],&g_1432,&g_76,&g_76,&g_76,&g_76,&g_1432},{&g_112,&g_76,&g_76,&g_76,(void*)0,&g_731[0][3],&g_112}}};
                uint32_t *****l_2737 = &l_2735;
                int32_t l_2738 = 0x366C77FBL;
                int32_t l_2740 = (-10L);
                int i, j, k;
                for (g_730 = 0; (g_730 <= 1); g_730 += 1)
                { 
                    int32_t l_2721 = 0xC77783C9L;
                    int i;
                    l_2721 &= g_1496[g_730];
                    if ((*g_390))
                        break;
                }
                l_2740 |= (safe_mod_func_uint64_t_u_u((&g_979 == ((0UL ^ ((l_2738 = (safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((g_731[0][1]--), 0x9985A8D6L)) == 0x986A49D6B36C87C6LL), ((((((g_519.f2 = (safe_rshift_func_int16_t_s_s((g_736.f3.f2 = ((g_1496[l_2138] , l_2733) != ((*l_2737) = l_2735))), 14))) <= g_1496[l_2138]) | (*g_2511)) < (*g_1408)) & 0xAE5CE3A4282931BFLL) , g_1496[l_2138])))) && p_10)) , l_2739)), (*g_979)));
                if (p_9)
                    continue;
            }
        }
        (*l_2374) = ((*g_2511) , p_10);
    }
    else
    { 
        int32_t *l_2741 = &g_97;
        (*g_1376) = ((****l_2131) , l_2741);
    }
    for (g_736.f1 = (-17); (g_736.f1 > 52); g_736.f1 = safe_add_func_uint8_t_u_u(g_736.f1, 3))
    { 
        int32_t l_2746 = 0xB9EF6035L;
        struct S0 ***l_2750 = &g_2325;
        const int32_t ****l_2756 = &g_1375;
        int32_t l_2765 = (-1L);
        int16_t *l_2784[6][5][4] = {{{&g_2621.f2,&g_2621.f2,(void*)0,&g_98},{&g_48.f2,&g_1114,&g_98,&g_48.f2},{&g_1922,&g_2621.f2,&g_1114,(void*)0},{&g_1114,(void*)0,(void*)0,&g_1922},{(void*)0,&g_2753.f2,(void*)0,&g_2621.f2}},{{&g_2753.f2,(void*)0,(void*)0,(void*)0},{&g_2753.f2,(void*)0,&g_2621.f2,(void*)0},{&l_2551[1][0],&g_1114,&g_98,(void*)0},{&g_2753.f2,&g_1922,&g_98,&l_2551[1][0]},{&g_2753.f2,&g_1922,&g_48.f2,&g_48.f2}},{{&l_2551[1][0],&l_2551[1][0],&g_98,(void*)0},{(void*)0,&g_2621.f2,(void*)0,(void*)0},{&g_48.f2,&l_2287,&g_48.f2,(void*)0},{(void*)0,&l_2287,&g_1922,(void*)0},{&l_2287,&g_2621.f2,&g_1114,(void*)0}},{{&g_98,&l_2551[1][0],&g_48.f2,&g_48.f2},{&g_48.f2,&g_1922,&l_2287,&l_2551[1][0]},{(void*)0,&g_1922,(void*)0,(void*)0},{(void*)0,&g_1114,&g_48.f2,(void*)0},{&g_1922,(void*)0,&g_1922,(void*)0}},{{&l_2287,(void*)0,(void*)0,&g_2621.f2},{(void*)0,&g_2753.f2,&g_48.f2,&g_1922},{&g_2753.f2,(void*)0,(void*)0,(void*)0},{(void*)0,&g_2621.f2,&g_2621.f2,&g_48.f2},{(void*)0,&g_48.f2,&g_1922,&g_98}},{{(void*)0,&g_2753.f2,&g_2753.f2,(void*)0},{(void*)0,&g_98,&g_1922,&g_1114},{(void*)0,(void*)0,(void*)0,&g_1114},{(void*)0,&g_1922,(void*)0,(void*)0},{&g_1114,(void*)0,&l_2551[1][0],&g_2621.f2}}};
        const struct S0 *l_2808 = &g_2804[1];
        const struct S0 **l_2807 = &l_2808;
        const struct S0 ***l_2806[5][7][5] = {{{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{(void*)0,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807}},{{(void*)0,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807}},{{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{(void*)0,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807}},{{(void*)0,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807}},{{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{(void*)0,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807},{&l_2807,&l_2807,&l_2807,&l_2807,&l_2807}}};
        const struct S0 ****l_2805 = &l_2806[2][0][1];
        int32_t **l_2813 = &g_405;
        int8_t *l_2816 = &g_1547;
        int32_t ****l_2823 = &l_2261;
        const uint64_t l_2894 = 8UL;
        int32_t l_2918 = 0xCDCF0290L;
        int32_t l_2919[6] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
        const int16_t ***l_2961[7];
        const int16_t **** const l_2960[6][1][2] = {{{&l_2961[1],(void*)0}},{{&l_2961[1],(void*)0}},{{&l_2961[1],(void*)0}},{{&l_2961[1],(void*)0}},{{&l_2961[1],(void*)0}},{{&l_2961[1],(void*)0}}};
        int64_t **l_2969 = &g_979;
        union U1 l_2971[1][4][7] = {{{{0UL},{0xF91E961005FC47F8LL},{0x9EFD4B659891A288LL},{18446744073709551607UL},{0xC9C98B7FA9FC52A5LL},{0x08C62B8B28773DF3LL},{0x08C62B8B28773DF3LL}},{{0xD18A3DBAF1E87115LL},{0xC9C98B7FA9FC52A5LL},{0x2170892A0852326BLL},{0xC9C98B7FA9FC52A5LL},{0xD18A3DBAF1E87115LL},{1UL},{0UL}},{{18446744073709551609UL},{0xF91E961005FC47F8LL},{0x08C62B8B28773DF3LL},{0xAB2E993BCFC4616ALL},{0xD18A3DBAF1E87115LL},{0UL},{0xD18A3DBAF1E87115LL}},{{18446744073709551615UL},{0x68E8F1EE73FC4D9FLL},{0x68E8F1EE73FC4D9FLL},{18446744073709551615UL},{0xC9C98B7FA9FC52A5LL},{0xAB2E993BCFC4616ALL},{18446744073709551609UL}}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_2961[i] = &g_1146;
        if ((p_9 <= ((safe_add_func_int64_t_s_s(l_2746, (safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_uint16_t_u(((((*g_979) = ((((*l_2750) = ((**l_2131) = (*l_2132))) == (g_2751 = &g_642)) || p_9)) & (((((safe_sub_func_int64_t_s_s(((l_2756 != ((&l_2746 == &l_2746) , l_2756)) <= (***g_2335)), p_9)) <= p_9) ^ g_731[0][6]) & (-1L)) , p_10)) & 0x03226870L))) == p_10) , p_9), 6)))) || (*g_1441))))
        { 
            uint8_t l_2759 = 0x8CL;
            int32_t l_2764 = 0x496E194FL;
            int32_t l_2766 = (-6L);
            int32_t l_2767[4];
            int32_t **l_2776 = (void*)0;
            uint8_t * const *l_2782 = (void*)0;
            uint8_t * const **l_2781 = &l_2782;
            int16_t l_2787 = 0xF43FL;
            int32_t *****l_2824 = (void*)0;
            struct S0 l_2828 = {0x7B9B4E611DE40D06LL,0x40FC1FABL,0x5052L};
            uint32_t *** const *l_2834[4][3][4] = {{{(void*)0,&l_2736,&l_2736,&l_2736},{&l_2736,&l_2736,(void*)0,&l_2736},{&l_2736,&l_2736,(void*)0,&l_2736}},{{&l_2736,&l_2736,&l_2736,&l_2736},{&l_2736,&l_2736,(void*)0,&l_2736},{&l_2736,&l_2736,(void*)0,&l_2736}},{{&l_2736,&l_2736,&l_2736,&l_2736},{(void*)0,&l_2736,&l_2736,&l_2736},{(void*)0,&l_2736,&l_2736,&l_2736}},{{&l_2736,&l_2736,&l_2736,&l_2736},{(void*)0,&l_2736,&l_2736,&l_2736},{(void*)0,&l_2736,&l_2736,&l_2736}}};
            struct S0 **l_2862 = (void*)0;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2767[i] = 0x31939B89L;
            l_2764 = ((p_9 >= (safe_sub_func_uint16_t_u_u(l_2759, (safe_mul_func_uint8_t_u_u(0xE6L, ((safe_sub_func_int32_t_s_s((*g_1725), ((1L && ((**g_1047) |= 0x7D654C3456760B56LL)) != (&l_2205 != (void*)0)))) || p_10)))))) && 65535UL);
            --l_2769;
            l_2765 &= (((safe_rshift_func_uint16_t_u_u(p_10, (l_2767[2] , (255UL > ((safe_add_func_int32_t_s_s(((((void*)0 == l_2776) <= ((safe_mod_func_int64_t_s_s((0x3DB24F0FL || g_217), p_9)) , p_10)) && 0x3AL), g_391)) == 0x9B6F5DBAL))))) & (-3L)) <= 0xCADF9AF48C7A2C34LL);
            if ((l_2779 != ((*l_2781) = (void*)0)))
            { 
                uint8_t *l_2785 = &g_130;
                const int32_t l_2786 = 0L;
                (*g_1725) &= ((safe_unary_minus_func_int64_t_s(((0x54L != (0x404A4910L <= ((((*g_1147) , ((void*)0 == l_2784[0][4][2])) ^ g_218[6][0]) & ((*l_2785) = ((*l_2780) = ((((p_10 ^ p_10) == (**g_1047)) <= p_9) == 0xAFL)))))) ^ l_2786))) >= l_2786);
                (*g_1725) |= 2L;
            }
            else
            { 
                uint16_t l_2796 = 9UL;
                struct S0 l_2798 = {-1L,0xE13E2BC3L,0x3E74L};
                (*g_1725) = l_2787;
                (*g_1725) = p_10;
                for (p_9 = 1; (p_9 >= 0); p_9 -= 1)
                { 
                    uint64_t ****l_2795 = &g_1341;
                    int32_t l_2797 = (-1L);
                    const struct S0 *l_2803 = &g_2804[0];
                    const struct S0 **l_2802 = &l_2803;
                    const struct S0 ***l_2801[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    const struct S0 ****l_2800 = &l_2801[0];
                    const struct S0 *****l_2799 = &l_2800;
                    int i;
                    (***l_2756) = (((l_2805 = ((*l_2799) = ((((***l_2750) , p_9) ^ (safe_mul_func_uint16_t_u_u(((***l_2750) , p_10), 0x52EAL))) , (void*)0))) != &g_2324) , &l_2138);
                }
                for (g_130 = 0; (g_130 <= 6); g_130++)
                { 
                    (*g_1725) &= 0xB96A29CDL;
                }
                if ((safe_mod_func_uint32_t_u_u((l_2767[2] && ((void*)0 == l_2813)), ((safe_sub_func_int32_t_s_s(0x6D779B0EL, ((g_1542 , l_2816) != ((*g_1440) = (*l_2269))))) | 1UL))))
                { 
                    int32_t *l_2817 = &g_1548[1];
                    int32_t **l_2818 = &l_2148[0][0];
                    (*g_1376) = ((*l_2818) = l_2817);
                }
                else
                { 
                    return l_2787;
                }
            }
            if (((((g_1432 ^= ((safe_rshift_func_uint8_t_u_u(p_9, 3)) && (((0x18986B03L & ((safe_mod_func_int8_t_s_s((&g_2260[0][2][2] == (l_2825 = l_2823)), p_9)) , 0UL)) <= (((func_15((safe_sub_func_uint16_t_u_u(p_9, (*g_1147))), p_10, l_2828, (*g_405)) , g_97) , p_9) & 0x58B2L)) < p_10))) ^ 2L) > 0x98359D70C5B16FAFLL) != p_10))
            { 
                int64_t l_2833 = 0L;
                int64_t l_2840 = 1L;
                for (g_2753.f2 = 0; (g_2753.f2 <= (-24)); g_2753.f2--)
                { 
                    int32_t l_2837[3];
                    uint16_t *l_2838 = &g_290;
                    uint32_t *l_2839[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2837[i] = 0xF8883DC7L;
                    for (i = 0; i < 1; i++)
                        l_2839[i] = &g_76;
                    l_2837[2] = ((safe_add_func_uint32_t_u_u(((l_2833 != ((*g_1725) ^= p_9)) , (((((void*)0 != l_2834[2][2][2]) && (safe_mod_func_int16_t_s_s((l_2837[2] , (((g_76 = (g_1432 = (p_9 & ((*l_2838) = 0x8DDFL)))) <= g_2753.f2) != l_2840)), p_9))) , (void*)0) == (void*)0)), g_218[6][0])) < 0L);
                }
            }
            else
            { 
                int32_t *l_2863 = (void*)0;
                for (g_2753.f2 = 2; (g_2753.f2 < 11); g_2753.f2++)
                { 
                    struct S0 **l_2843 = &g_642;
                    struct S0 l_2848 = {0x4E6D297505B5B1DDLL,1L,0x8BC6L};
                    uint8_t l_2861 = 0xF2L;
                    l_2764 |= (((*l_2132) = l_2843) == ((safe_add_func_int32_t_s_s(p_10, ((1L > (safe_rshift_func_uint16_t_u_s((l_2848 , p_9), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((!((**g_1440) = ((l_2766 &= ((*g_1725) &= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*g_1441) | (-1L)), (*g_2511))), g_2860)) <= 0x31L))) ^ l_2767[3]))) , 4294967286UL), l_2861)), (*g_2511))), p_9))))) , p_9))) , l_2862));
                    if (p_9)
                        continue;
                    if (p_10)
                        break;
                    if (p_9)
                        break;
                }
                (**g_1375) = l_2863;
                l_2765 = (safe_sub_func_int32_t_s_s(p_9, (0x85L | ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((func_23((**g_396), p_10, func_15(l_2870[0], p_10, (***l_2132), (*g_405))) , 0L), (*g_1441))), p_9)) , l_2759) , (*g_979)) != (*g_1408)))));
            }
        }
        else
        { 
            uint16_t l_2897 = 0xC6F4L;
            struct S0 l_2913 = {-6L,-4L,0x2910L};
            int32_t l_2914 = 0xC6C42E1FL;
            int32_t l_2915 = 1L;
            int32_t l_2916[4];
            uint16_t l_2923 = 6UL;
            int32_t * const ***l_2938 = &l_2936[0][1][6];
            int32_t *l_2941 = &l_2138;
            int32_t ** const l_2944 = (void*)0;
            uint32_t *****l_2948 = &l_2735;
            struct S0 ***l_2993 = &l_2133;
            int i;
            for (i = 0; i < 4; i++)
                l_2916[i] = 1L;
            for (g_352 = (-17); (g_352 > 23); g_352++)
            { 
                int32_t ****l_2887[3][4] = {{&g_2260[0][2][0],&g_2260[0][2][0],&g_2260[0][2][0],&g_2260[0][2][0]},{&g_2260[0][2][0],&g_2260[0][2][0],&g_2260[0][2][0],&g_2260[0][2][0]},{&g_2260[0][2][0],&g_2260[0][2][0],&g_2260[0][2][0],&g_2260[0][2][0]}};
                int32_t l_2899 = 6L;
                int16_t l_2917 = 1L;
                int32_t l_2920 = 0xD6E779A5L;
                int32_t l_2921[7];
                int16_t l_2922 = 0L;
                uint32_t l_2932[2];
                uint32_t **l_2951[6][1] = {{&g_53},{&g_53},{&g_53},{&g_53},{&g_53},{&g_53}};
                int8_t l_2953 = 0x97L;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_2921[i] = 0x7EBE1954L;
                for (i = 0; i < 2; i++)
                    l_2932[i] = 5UL;
            }
            l_2918 = 0xE50CEFA6L;
            if (((((((*g_2511) != 0UL) ^ (((*g_2511) < (safe_mod_func_int64_t_s_s(p_10, 8L))) || (((-8L) != ((**g_1047) = ((l_2959 != l_2960[1][0][0]) >= p_10))) , g_706))) || p_10) | 0x00CCF55AL) & 0xCBE24C4B47B1FA77LL))
            { 
                uint32_t l_2965[6] = {0x0A06AF7AL,18446744073709551610UL,0x0A06AF7AL,0x0A06AF7AL,18446744073709551610UL,0x0A06AF7AL};
                int32_t *l_2968[4] = {&g_877,&g_877,&g_877,&g_877};
                int i;
                if (p_10)
                { 
                    int16_t l_2962[4];
                    int32_t l_2963 = (-1L);
                    int32_t l_2964[6] = {0x282CE29BL,0x282CE29BL,0x22BC0650L,0x282CE29BL,0x282CE29BL,0x22BC0650L};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2962[i] = (-9L);
                    l_2965[3]++;
                    l_2968[3] = &l_2963;
                    (*g_1725) = (l_2969 == l_2970);
                    if (p_10)
                        break;
                    return p_10;
                }
                else
                { 
                    int64_t l_2983 = 9L;
                    int32_t l_2987[2][7] = {{7L,7L,0x492EA4FCL,(-3L),0L,(-3L),0x492EA4FCL},{7L,7L,0x492EA4FCL,(-3L),0L,(-3L),0x492EA4FCL}};
                    int32_t l_2988 = 0x245BE7D7L;
                    uint32_t *l_2994 = &l_2769;
                    int i, j;
                    (*g_1725) = (l_2971[0][1][0] , (((**l_2779) ^= 0x9FL) && (((*l_2994) = (((((!(safe_div_func_uint32_t_u_u((((((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(0x74CBL, 12)) != ((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_2983, 0)), (((l_2987[1][6] = (g_2984 == (void*)0)) , (***g_2324)) , 1L))) | (*g_2511)) | p_10) | 1UL)) , l_2988), (*l_2941))) , g_2989) != &g_2990) , (void*)0) != (void*)0), 0x8DFA3FE8L))) , 0x77755BDD0767EAC1LL) == (**g_1047)) , l_2993) != (void*)0)) ^ g_730)));
                    return (**g_1440);
                }
            }
            else
            { 
                l_2148[0][0] = (*l_2937);
            }
        }
        (*g_1725) = (p_9 != (**g_1146));
        if (p_10)
            break;
        for (g_710 = 29; (g_710 == 24); --g_710)
        { 
            uint16_t l_2999 = 0x7C53L;
            (*g_1725) = (0x68L & ((*l_2780)--));
            l_2999--;
        }
        ++l_3002;
    }
    if ((((p_10 == ((safe_add_func_int16_t_s_s(((&l_2735 == &g_2990) < ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_3024 = (p_10 <= ((((((~((safe_lshift_func_int8_t_s_s((*g_1441), (safe_add_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(((**g_2335) != (void*)0), p_10)) <= g_2753.f0) == (**g_1146)), 0x26CBE46CL)))) & 0x9049L)) ^ (**g_2336)) | l_3022[4][3]) >= 4294967287UL) < (*g_2511)) < g_700))), 2)), 2)), 4)), p_9)) ^ p_9)), 1L)) || 0x49L)) >= 0xBF93DEE53155E39CLL) , l_3025))
    { 
        uint32_t l_3026 = 0x03CB8D3DL;
        struct S0 l_3046 = {2L,0x192A2FF3L,-1L};
        const int16_t *l_3118 = &g_3119;
        uint8_t **l_3137 = &l_2780;
        int8_t l_3140 = (-3L);
        int32_t l_3141 = 0L;
        uint64_t **l_3146 = &g_1408;
        uint64_t ***l_3145 = &l_3146;
        uint32_t l_3150[3][5][3] = {{{4294967289UL,4294967293UL,7UL},{0xF6F4012DL,4294967292UL,0xF6F4012DL},{4294967295UL,4294967289UL,7UL},{0xDDBC1C39L,0xDDBC1C39L,1UL},{0x118386BFL,4294967289UL,4294967289UL}},{{1UL,4294967292UL,4294967295UL},{0x118386BFL,4294967293UL,0x118386BFL},{0xDDBC1C39L,1UL,4294967295UL},{4294967295UL,4294967295UL,4294967289UL},{0xF6F4012DL,1UL,1UL}},{{4294967289UL,4294967293UL,7UL},{4294967295UL,0xDDBC1C39L,4294967295UL},{4294967289UL,0x118386BFL,4294967293UL},{1UL,1UL,0xF6F4012DL},{7UL,0x118386BFL,0x118386BFL}}};
        const struct S0 *l_3158 = (void*)0;
        const struct S0 **l_3157[3][2][6] = {{{(void*)0,(void*)0,(void*)0,&l_3158,(void*)0,&l_3158},{(void*)0,&l_3158,(void*)0,&l_3158,&l_3158,(void*)0}},{{(void*)0,&l_3158,&l_3158,&l_3158,&l_3158,(void*)0},{(void*)0,(void*)0,(void*)0,&l_3158,(void*)0,&l_3158}},{{(void*)0,&l_3158,(void*)0,&l_3158,&l_3158,(void*)0},{(void*)0,&l_3158,&l_3158,&l_3158,&l_3158,(void*)0}}};
        const struct S0 ***l_3156 = &l_3157[1][0][5];
        const struct S0 ****l_3155 = &l_3156;
        int32_t l_3163 = 1L;
        int32_t l_3164 = (-10L);
        int32_t l_3165[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_3165[i] = 0x9C8323F5L;
lbl_3132:
        (*g_1725) &= l_3026;
        for (g_519.f2 = 23; (g_519.f2 != (-30)); g_519.f2 = safe_sub_func_uint8_t_u_u(g_519.f2, 1))
        { 
            uint32_t l_3035 = 4294967289UL;
            uint64_t *l_3047 = &g_2954[0];
            int32_t l_3048 = 1L;
            struct S0 l_3049 = {0x4548F53175D8DD62LL,1L,0L};
            int32_t l_3050 = (-8L);
            const uint32_t l_3051 = 0x6D4B6ACAL;
            int32_t ***l_3052 = &g_404[3][1][0];
            int32_t l_3126 = 0x9E438D18L;
            if (((((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((l_3035 , &g_404[1][2][1]) != ((((*g_1408)--) != (safe_sub_func_uint16_t_u_u((((((l_3049 , 0xBFL) > (*g_1441)) <= (*g_2511)) <= 1L) > l_3050), l_3051))) , l_3052)) && p_10), p_9)), p_9)) >= 0UL) , (*g_2511)) != l_3046.f2))
            { 
                uint8_t l_3058 = 0x62L;
                int32_t *****l_3095 = &l_2825;
                struct S0 l_3100[1][7] = {{{0xF2E309B980352C43LL,-1L,0L},{0x4786E75B998D043ALL,1L,-4L},{0xF2E309B980352C43LL,-1L,0L},{0xF2E309B980352C43LL,-1L,0L},{0x4786E75B998D043ALL,1L,-4L},{0xF2E309B980352C43LL,-1L,0L},{0xF2E309B980352C43LL,-1L,0L}}};
                int16_t *l_3112[7] = {(void*)0,(void*)0,&g_708,(void*)0,(void*)0,&g_708,(void*)0};
                int32_t l_3125 = 7L;
                int i, j;
                for (l_2617 = 0; (l_2617 == 60); ++l_2617)
                { 
                    uint8_t l_3055 = 1UL;
                    int16_t *l_3093 = (void*)0;
                    int16_t *l_3094 = &l_2551[1][0];
                    int32_t l_3107 = 6L;
                    ++l_3055;
                    l_3058 |= (-3L);
                    l_3048 &= ((((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((p_9 > (((p_9 == (safe_lshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u(1UL, ((safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_3079, ((((((l_3058 | (p_9 > p_9)) ^ l_3046.f0) != l_3050) < 0x42L) , 0L) < l_3058))), l_3058)), l_3026)), p_9)), l_3055)), p_9)) || 7L))) || (-8L)), l_3055))) == 0xBA97C51A20B35594LL) > p_10)), (*g_2511))) < 3L) >= 1UL), p_10)) > l_3058) & g_300) & (**g_1146));
                    (*g_1725) = (((*g_1441) = (safe_add_func_int64_t_s_s(0L, (safe_sub_func_uint16_t_u_u((!l_3058), (safe_add_func_uint32_t_u_u(l_3055, (p_9 | (-1L))))))))) < (&l_2825 == ((((*l_3094) = (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((0xE298CFFCL | p_9), 0x07L)), l_3046.f1)) <= (-1L)), p_9))) && l_3058) , l_3095)));
                    l_3107 ^= ((0x380DL && (**g_1146)) , (safe_div_func_int32_t_s_s(l_3058, (safe_mod_func_int32_t_s_s((l_3100[0][0] , (safe_mul_func_uint8_t_u_u(((**g_1047) == p_10), ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0x5BL, p_10)), p_9)) > l_3055)))), p_10)))));
                }
                if (((l_3046.f1 , (((safe_mul_func_uint8_t_u_u(((-1L) && ((((safe_add_func_int16_t_s_s(((*g_1441) , (p_9 = (g_2753.f2 = (p_9 > (((0x20L & p_9) , (void*)0) != (void*)0))))), p_10)) <= p_10) , 7L) , (*g_979))), p_10)) < 1L) < p_10)) , 0x3F7D9957L))
                { 
                    const int16_t **l_3115 = (void*)0;
                    const int16_t *l_3117[5] = {&g_758,&g_758,&g_758,&g_758,&g_758};
                    const int16_t **l_3116[4][5][7] = {{{&l_3117[3],&l_3117[2],&l_3117[2],&l_3117[2],&g_1147,&l_3117[2],&l_3117[2]},{&l_3117[2],&l_3117[2],(void*)0,&l_3117[2],&l_3117[0],(void*)0,&l_3117[3]},{&l_3117[2],&g_1147,(void*)0,&g_1147,&l_3117[1],&l_3117[0],&l_3117[0]},{&g_1147,&l_3117[3],&l_3117[2],&l_3117[3],&g_1147,(void*)0,&l_3117[4]},{(void*)0,&g_1147,(void*)0,&l_3117[4],&l_3117[2],&l_3117[2],&g_1147}},{{(void*)0,&g_1147,&l_3117[2],&g_1147,&g_1147,&l_3117[2],&g_1147},{(void*)0,&l_3117[4],&l_3117[2],&l_3117[3],&l_3117[1],&l_3117[0],&l_3117[3]},{&g_1147,&l_3117[0],&l_3117[2],&l_3117[2],&l_3117[2],&l_3117[2],&g_1147},{&l_3117[2],&l_3117[3],&g_1147,&l_3117[2],&g_1147,&l_3117[2],&l_3117[2]},{&l_3117[2],&l_3117[2],&l_3117[0],&l_3117[4],&l_3117[4],&l_3117[0],&l_3117[2]}},{{&l_3117[3],&g_1147,&g_1147,(void*)0,&l_3117[0],&l_3117[2],&l_3117[1]},{(void*)0,&l_3117[1],(void*)0,(void*)0,&l_3117[2],&l_3117[2],&l_3117[2]},{&g_1147,&g_1147,&l_3117[2],(void*)0,&l_3117[1],(void*)0,&g_1147},{&g_1147,&l_3117[2],&g_1147,&l_3117[4],&l_3117[4],&l_3117[0],&l_3117[4]},{(void*)0,&g_1147,&l_3117[2],&l_3117[2],&l_3117[4],(void*)0,&g_1147}},{{&l_3117[4],&g_1147,&l_3117[2],&l_3117[2],&l_3117[1],&l_3117[2],&l_3117[1]},{&l_3117[3],&l_3117[2],&l_3117[2],&l_3117[3],&l_3117[0],(void*)0,&l_3117[1]},{&l_3117[2],&g_1147,&l_3117[2],&g_1147,&l_3117[3],&l_3117[4],&l_3117[2]},{&l_3117[2],&l_3117[2],&g_1147,(void*)0,(void*)0,&l_3117[4],&l_3117[2]},{&g_1147,(void*)0,&l_3117[4],(void*)0,&l_3117[2],&g_1147,&l_3117[4]}}};
                    uint16_t *l_3127 = &g_357;
                    int32_t l_3128 = (-6L);
                    uint32_t *l_3129 = &l_3035;
                    uint32_t *l_3130 = &l_3026;
                    uint32_t *l_3131 = &l_3024;
                    int i, j, k;
                    l_3128 = (((*l_3131) &= ((*l_3130) = ((*l_3129) = ((p_9 >= (l_3126 = ((*l_3127) = ((((p_10 , func_15((safe_mul_func_int8_t_s_s((0x4EL != ((((((*g_1146) == (l_3118 = &p_9)) & ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_10, ((*l_3127) = ((((l_3125 |= (~g_2804[0].f0)) > (**g_1440)) , l_3126) , p_10)))), p_9)) != 1UL)) & 1UL) , p_9) ^ p_9)), (*g_2511))), l_3128, l_3049, p_9)) , 0xE0L) >= l_3128) , 0x2B3CL)))) == 2L)))) < p_9);
                    if (l_2287)
                        goto lbl_3132;
                    (*g_1725) = (l_3046.f2 > 0x22L);
                    (*g_1725) ^= (safe_sub_func_int32_t_s_s((0x4F99FEDFF2C892A2LL ^ (*g_979)), (safe_lshift_func_uint8_t_u_s(((p_10 == ((void*)0 != l_3137)) && 0UL), (**g_1440)))));
                    if (l_3049.f0)
                        break;
                }
                else
                { 
                    return (*g_1441);
                }
                for (g_703 = 0; (g_703 != (-1)); --g_703)
                { 
                    uint8_t l_3142[5][1][7] = {{{255UL,0xFBL,0x8EL,0x0AL,0x8EL,0xFBL,255UL}},{{7UL,0xFAL,0xB4L,0x21L,0xB4L,0xFAL,7UL}},{{255UL,0xFBL,0x8EL,0x0AL,0x8EL,0xFBL,255UL}},{{7UL,0xFAL,0xB4L,0x21L,0xB4L,0xFAL,7UL}},{{255UL,0xFBL,0x8EL,0x0AL,0x8EL,0xFBL,255UL}}};
                    int32_t l_3147 = 8L;
                    int32_t l_3148 = 0x68F5C630L;
                    int32_t l_3149 = 0x8B5637D1L;
                    int i, j, k;
                    --l_3142[2][0][3];
                    (**g_2324) = (*g_641);
                    (*g_1725) &= (l_3049 , ((void*)0 != l_3145));
                    (*g_1725) &= (&g_2990 == &g_2990);
                    l_3150[1][2][0]--;
                }
            }
            else
            { 
                const struct S0 *****l_3159 = &l_3155;
                uint32_t l_3160 = 4UL;
                (*g_1376) = ((safe_sub_func_uint8_t_u_u((((*l_3159) = l_3155) != ((l_3160 <= (6L | ((safe_add_func_int32_t_s_s((p_10 , ((*g_2511) <= ((**l_2779) = (p_10 < (*g_1725))))), l_3160)) || g_1056))) , (void*)0)), (*g_2511))) , (void*)0);
            }
        }
        --l_3167[0];
    }
    else
    { 
        uint8_t l_3176 = 253UL;
        int16_t *l_3177 = &g_1922;
        uint32_t ***l_3181 = &g_1989;
        int16_t l_3182[3];
        int32_t l_3188[1];
        int32_t l_3225[3];
        int32_t *l_3229 = &l_3188[0];
        struct S0 ** const l_3241 = &g_642;
        int32_t * const l_3274 = &g_877;
        uint64_t *l_3330 = &g_2954[1];
        int8_t l_3353 = (-1L);
        int i;
        for (i = 0; i < 3; i++)
            l_3182[i] = 0xE451L;
        for (i = 0; i < 1; i++)
            l_3188[i] = 0x2D814785L;
        for (i = 0; i < 3; i++)
            l_3225[i] = 0xFAE629ABL;
lbl_3189:
        (*g_1725) |= ((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(((*l_3177) = (g_2753.f2 &= l_3176)), ((+(safe_mod_func_uint64_t_u_u((l_3181 != l_3181), p_9))) , (((((l_3182[1] , p_10) | (*g_1147)) , 0UL) , (-1L)) && 0x39L)))) && 8L) | (*g_2511)) >= 1UL) == l_3182[1]), p_10)) == (-7L)), 1UL)) < 0x323CE945A6725A23LL);
        for (g_2621.f2 = (-21); (g_2621.f2 != (-17)); g_2621.f2 = safe_add_func_int8_t_s_s(g_2621.f2, 4))
        { 
            int32_t **l_3185 = (void*)0;
            int32_t **l_3186 = (void*)0;
            int32_t **l_3187 = &l_2148[0][0];
            int8_t l_3232 = 0x2CL;
            uint32_t * const l_3235 = &l_2769;
            int64_t l_3242 = 0x6B6B3BA6228D5D7FLL;
            int32_t * const ***l_3248 = (void*)0;
            int32_t * const ****l_3247[1];
            int i;
            for (i = 0; i < 1; i++)
                l_3247[i] = &l_3248;
            (*l_3187) = (*l_2937);
            l_3188[0] ^= 6L;
            if (g_706)
                goto lbl_3189;
            for (l_2287 = 0; (l_2287 != 0); l_2287 = safe_add_func_int32_t_s_s(l_2287, 9))
            { 
                int32_t *l_3202[2][6][5] = {{{&g_300,&g_877,&g_300,&g_877,&g_300},{&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0]},{&g_300,&g_877,&g_300,&g_877,&g_300},{&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0]},{&g_300,&g_877,&g_300,&g_877,&g_300},{&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0]}},{{&g_300,&g_877,&g_300,&g_877,&g_300},{&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0]},{&g_300,&g_877,&g_300,&g_877,&g_300},{&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0]},{&g_300,&g_877,&g_300,&g_877,&g_300},{&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0],&g_1548[0]}}};
                int16_t l_3240 = 0x3305L;
                int i, j, k;
                for (g_70 = 0; (g_70 <= 5); g_70 += 1)
                { 
                    int32_t *l_3193 = (void*)0;
                    int i;
                    g_3192[1][4] = l_3185;
                    (**g_1375) = l_3193;
                    l_3188[0] = g_148[g_70];
                    (**g_1375) = (((4294967295UL > g_148[g_70]) || p_10) , &l_3188[0]);
                }
                if ((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((p_10 > ((**g_1440) = (safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s(p_10, 18446744073709551608UL)), ((void*)0 == l_3202[0][1][3]))))), ((((safe_lshift_func_uint16_t_u_s(l_3205, 15)) && (((safe_mul_func_int8_t_s_s(p_10, p_10)) >= g_48.f0) | g_708)) >= l_3176) || g_148[3]))) >= p_9), 3)) && 0x67L) , p_10))
                { 
                    uint16_t *l_3217 = (void*)0;
                    uint16_t *l_3218 = &g_515;
                    const int32_t l_3224 = 0L;
                    l_3225[1] &= (safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((((p_10 == p_10) | (safe_div_func_uint16_t_u_u(((*l_3218) = l_3188[0]), 1L))) == ((p_10 == (l_3223 = ((-1L) == ((((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(p_9, 3)) ^ 0xCBC8D92675EB5CCDLL), p_10)) > 0x9F64393B4F9B01C5LL) <= p_9) | p_9)))) , l_3224)))), l_3224)), 6L)) > p_9) , 1UL), l_3224));
                    (*g_1725) = l_3224;
                    return (*g_1441);
                }
                else
                { 
                    int32_t *l_3226 = &g_1548[1];
                    l_3226 = &l_3188[0];
                }
                for (l_3223 = 0; (l_3223 <= (-28)); l_3223 = safe_sub_func_uint8_t_u_u(l_3223, 2))
                { 
                    int32_t *l_3230 = (void*)0;
                    l_3229 = &l_3225[1];
                    (**g_1375) = (*l_3187);
                    g_3231 = l_3230;
                    (*l_3229) = 4L;
                }
                l_3242 ^= (((**l_2131) = (((l_3232 == p_10) <= 0xAA13L) , (**l_2131))) == ((safe_div_func_uint16_t_u_u((((void*)0 == l_3235) < (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((p_9 || p_9), p_9)), (**g_1440)))), l_3240)) , l_3241));
                if ((*g_1725))
                { 
                    if (p_9)
                        break;
                }
                else
                { 
                    int32_t l_3249 = 0xE8BBDE5AL;
                    (*l_3229) &= (safe_mul_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((p_9 || ((void*)0 == l_3247[0])), (0x42EBL ^ 0x76ACL))) || (-8L)) && g_706), l_3249));
                    (**g_1375) = &l_3225[1];
                }
            }
        }
        for (g_290 = (-22); (g_290 == 35); ++g_290)
        { 
            int8_t l_3261 = 0x10L;
            int32_t l_3270 = (-5L);
            const uint32_t **l_3284[7][6] = {{(void*)0,&g_397,(void*)0,&l_2139,&g_397,&g_397},{(void*)0,(void*)0,&l_2139,(void*)0,(void*)0,(void*)0},{&g_397,(void*)0,&g_397,(void*)0,&g_397,(void*)0},{(void*)0,(void*)0,&g_397,(void*)0,(void*)0,(void*)0},{&l_2139,&g_397,&g_397,&l_2139,(void*)0,(void*)0},{(void*)0,(void*)0,&l_2139,&g_397,(void*)0,&g_397},{&l_2139,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint32_t l_3285[7];
            uint64_t ** const l_3320 = &g_1408;
            struct S0 ** const *l_3324 = &g_641;
            int32_t ***l_3340 = &g_404[3][1][0];
            int16_t l_3360 = 0x85F6L;
            const uint64_t * const *l_3363 = &g_2337;
            const uint64_t * const **l_3362[7] = {&l_3363,&l_3363,&l_3363,&l_3363,&l_3363,&l_3363,&l_3363};
            const uint64_t * const ***l_3361 = &l_3362[4];
            uint8_t l_3395 = 0xB4L;
            int i, j;
            for (i = 0; i < 7; i++)
                l_3285[i] = 0x09FF6F8CL;
            for (g_3166 = (-19); (g_3166 < 10); ++g_3166)
            { 
                uint32_t *l_3256[3][6] = {{&g_1432,(void*)0,&g_1432,&g_1432,(void*)0,&g_1432},{&g_1432,(void*)0,&g_1432,&g_1432,(void*)0,&g_1432},{&g_1432,(void*)0,&g_1432,&g_1432,(void*)0,&g_1432}};
                int32_t l_3266[1][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int32_t *l_3267 = &g_442;
                int32_t l_3268[2][3][4];
                int32_t l_3269[5][1][2] = {{{0x22456D54L,0x22456D54L}},{{0x22456D54L,0x22456D54L}},{{0x22456D54L,0x22456D54L}},{{0x22456D54L,0x22456D54L}},{{0x22456D54L,0x22456D54L}}};
                struct S0 l_3309 = {5L,0x74B4A4D3L,1L};
                uint64_t *l_3343[5];
                int32_t * const **l_3370 = (void*)0;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_3268[i][j][k] = 1L;
                    }
                }
                for (i = 0; i < 5; i++)
                    l_3343[i] = &l_3167[0];
                if ((l_3270 = (((((safe_mul_func_int8_t_s_s(((g_731[0][0]--) >= 3UL), (p_10 , (safe_lshift_func_int8_t_s_s(l_3261, 1))))) <= (safe_mod_func_int16_t_s_s(((*l_3177) &= (*l_3229)), 65527UL))) , (l_3268[1][1][0] |= ((p_9 , ((*l_3267) = ((*l_3229) = ((*g_405) = (l_3266[0][3] = ((safe_mul_func_uint16_t_u_u(((((*l_3177) ^= l_3266[0][1]) , (*l_3229)) ^ 0x8D888A81L), l_3266[0][1])) || g_391)))))) , 0x4F4EL))) || l_3261) | l_3269[1][0][1])))
                { 
                    return (**g_1440);
                }
                else
                { 
                    int32_t **l_3275[5][5] = {{(void*)0,&g_1163,(void*)0,&l_3229,&l_3229},{(void*)0,&g_1163,(void*)0,&l_3229,&l_3229},{(void*)0,&g_1163,(void*)0,&l_3229,&l_3229},{(void*)0,&g_1163,(void*)0,&l_3229,&l_3229},{(void*)0,&g_1163,(void*)0,&l_3229,&l_3229}};
                    int32_t **l_3276 = &l_2148[4][0];
                    int i, j;
                    ++g_3271;
                    (*l_3276) = l_3274;
                }
                if ((safe_add_func_int16_t_s_s((func_23(p_9, l_3261, ((((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((((*g_2991) == l_3284[2][0]) & (((l_3261 , (0xD2L != p_9)) >= 65534UL) > 0xEAC9E5CBAF5CE5B4LL)))) , 1L), 10)) == (*g_1147)) == (*g_1441)) , (**g_2325))) , l_3285[5]), (*g_1147))))
                { 
                    uint32_t l_3319[1][5];
                    int32_t l_3321[2];
                    uint16_t *l_3325 = &l_2790;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_3319[i][j] = 0xFEF53CB6L;
                    }
                    for (i = 0; i < 2; i++)
                        l_3321[i] = (-1L);
                    (*l_3229) ^= (((p_10 && (func_23(((((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_3268[0][0][3] < (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_519.f1, (safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(((--p_10) < p_9), (((4UL & (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((p_9 <= ((((((safe_rshift_func_int16_t_s_u(((***g_2324) , (-10L)), 1)) && (**g_1047)) , l_3308) != &l_2341) , (*g_2511)) <= p_9)) || p_9), 5)), p_9))) & (*g_979)) | (**g_2336)))) , 0UL), p_9)))), p_9))), 0x67FFL)), (**g_1440))) , &l_2131) == (void*)0) && 1UL), l_3269[4][0][0], l_3309) , p_10)) < p_9) > (*g_1441));
                    l_3321[1] |= ((safe_lshift_func_uint16_t_u_s(65528UL, p_9)) & (safe_div_func_uint64_t_u_u(((**g_1146) > ((g_3314 = (void*)0) != ((((safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u((p_10 && (((*g_979) | (l_3319[0][4] = (((*l_3274) , (*l_3229)) <= (-3L)))) && p_10)), 0x2AL)), p_10)) >= p_10) >= 0xC00E1D6BB0A6CDD5LL) , l_3320))), p_9)));
                    l_3321[1] |= ((void*)0 == &g_2260[2][2][2]);
                    if ((*l_3229))
                        continue;
                    l_3268[0][1][1] ^= (safe_sub_func_uint16_t_u_u(((*l_3325) = (l_3324 == (*g_2985))), ((safe_mul_func_int16_t_s_s((p_9 & (l_3321[1] = p_10)), ((((***g_2335) > (*g_1408)) | (safe_mod_func_uint8_t_u_u(l_3309.f2, l_3285[0]))) == (*g_979)))) ^ 0x7BL)));
                }
                else
                { 
                    (*g_1376) = (((((void*)0 == l_3330) >= p_10) >= (0x0981L >= (p_9 || (safe_mod_func_uint16_t_u_u(0UL, ((func_15(l_3333, p_9, (***l_3324), p_10) , 0x39L) && (**g_1440))))))) , (void*)0);
                    (*g_1725) ^= (safe_rshift_func_uint16_t_u_s((((0xD7L < ((&g_1375 == &l_2936[1][0][0]) > (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((&g_404[3][1][0] == l_3340), l_3268[0][1][0])), ((l_3268[1][1][0] , 0xA135AD378DA0D136LL) != (*l_3274)))) & (*l_3229)) && 0x7FEC3E79L))) | p_9) , l_3285[5]), 11));
                    if ((*l_3274))
                        break;
                }
                for (g_708 = 0; (g_708 <= 3); g_708 += 1)
                { 
                    int i, j, k;
                    (*g_1376) = g_388[(g_708 + 1)][g_708][g_708];
                    if (p_10)
                        continue;
                    if ((*g_390))
                        continue;
                }
                for (g_2753.f0 = 0; (g_2753.f0 == 8); g_2753.f0 = safe_add_func_int16_t_s_s(g_2753.f0, 2))
                { 
                    uint64_t **l_3344 = &l_3330;
                    uint32_t *l_3354 = &g_736.f1;
                    const uint64_t * const ****l_3364 = (void*)0;
                    (*l_3229) ^= (((p_9 > p_10) == (((*l_3320) = l_3343[4]) != ((*l_3344) = l_3330))) || (((safe_add_func_uint8_t_u_u((((*l_3308) ^= (func_15(((*l_3354) = (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x53L, ((0xC6L || (((safe_mul_func_uint16_t_u_u(((((l_3270 = p_10) == g_731[0][0]) , &l_2936[1][0][3]) != (void*)0), l_3353)) & l_3266[0][1]) <= p_9)) <= p_10))), p_10))), p_10, (**l_3241), p_10) , l_3261)) != 0xDA10C4F8L), 1L)) , (-1L)) && l_3285[4]));
                    l_3270 = ((safe_unary_minus_func_int64_t_s((((((*l_2825) == ((safe_add_func_uint64_t_u_u((((((*g_2337) >= (**g_1047)) <= l_3360) < (((g_3365 = l_3361) == (p_10 , &g_2335)) < 2L)) < (**g_2336)), 0xE85504C2EF1315F9LL)) , l_3370)) != p_10) | (**g_1146)) ^ l_3285[1]))) <= (-2L));
                    (*g_1376) = &l_3270;
                }
            }
            if (g_356)
                goto lbl_3189;
            for (l_2790 = 0; (l_2790 <= 5); l_2790 += 1)
            { 
                int32_t *l_3371[5] = {&l_3188[0],&l_3188[0],&l_3188[0],&l_3188[0],&l_3188[0]};
                int32_t *****l_3397[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_3397[i] = (void*)0;
                (*l_3274) ^= ((**l_3241) , l_3022[l_2790][l_2790]);
                for (l_3024 = 1; (l_3024 <= 6); l_3024 += 1)
                { 
                    uint8_t l_3372 = 0xA1L;
                    int i;
                    (*g_1376) = l_3371[3];
                    ++l_3372;
                    return l_3285[l_3024];
                }
                if (l_3285[l_2790])
                    continue;
                if (l_3270)
                { 
                    uint32_t l_3380 = 8UL;
                    int32_t l_3393 = (-1L);
                    int32_t l_3394 = 0L;
                    l_3270 &= ((*g_1725) &= 2L);
                    (**g_1375) = (void*)0;
                    (*l_3274) &= (safe_mod_func_int8_t_s_s(((p_9 > ((safe_div_func_int8_t_s_s(((+p_9) > (((*l_3229) &= l_3380) >= (l_3394 = (0UL == ((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((l_3393 = (p_10 > (safe_add_func_int8_t_s_s(((**g_1440) = l_3270), (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((p_10 >= l_3285[5]) & p_9) , 0x85F8A055L), p_10)), 7)), p_10)))))) >= 0x9C37L), 0UL)), p_9)) >= 253UL))))), p_9)) || l_3395)) == g_708), p_9));
                    if (p_9)
                        continue;
                }
                else
                { 
                    const uint8_t *l_3396 = &g_878;
                    l_3270 ^= (l_3396 == (void*)0);
                }
                l_3397[1] = l_3397[1];
            }
        }
    }
    return (**g_1440);
}



static const struct S0  func_15(uint32_t  p_16, uint32_t  p_17, struct S0  p_18, int32_t  p_19)
{ 
    int32_t *l_2122 = (void*)0;
    int32_t **l_2123 = (void*)0;
    int32_t **l_2124 = &g_1209;
    const struct S0 l_2125 = {0xB7E74606CA8604EDLL,0x3C81F2C7L,5L};
    (*g_1725) |= (*g_390);
    (*g_1376) = ((*l_2124) = l_2122);
    return l_2125;
}



static uint32_t  func_20(union U1  p_21, union U1  p_22)
{ 
    int8_t *l_886 = &g_217;
    int32_t l_888[6][3] = {{(-3L),(-3L),(-3L)},{0x36A96CD9L,0x36A96CD9L,0x36A96CD9L},{(-3L),(-3L),(-3L)},{0x36A96CD9L,0x36A96CD9L,0x36A96CD9L},{(-3L),(-3L),(-3L)},{0x36A96CD9L,0x36A96CD9L,0x36A96CD9L}};
    uint64_t *l_889 = &g_148[1];
    int32_t l_894 = 0L;
    int32_t *l_895[7][6] = {{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37},{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37},{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37},{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37},{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37},{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37},{(void*)0,(void*)0,&g_37,(void*)0,(void*)0,&g_37}};
    uint8_t l_919[7][5] = {{254UL,0xCCL,254UL,0x22L,0x22L},{0xEEL,0xA9L,0xEEL,0x8DL,0x8DL},{254UL,0xCCL,254UL,0x22L,0x22L},{0xEEL,0xA9L,0xEEL,0x8DL,0x8DL},{254UL,0xCCL,254UL,0x22L,0x22L},{0xEEL,0xA9L,0xEEL,0x8DL,0x8DL},{254UL,0xCCL,254UL,0x22L,0x22L}};
    union U1 **l_927 = &g_735;
    int8_t l_931 = 0xB9L;
    uint32_t l_972 = 1UL;
    struct S0 l_988 = {0xB87BD76844B9B831LL,0xCE3744E3L,0x25D1L};
    int64_t **l_1008 = &g_979;
    uint64_t l_1059[7] = {0x14BA54F65A19C5A0LL,6UL,0x14BA54F65A19C5A0LL,0x14BA54F65A19C5A0LL,6UL,0x14BA54F65A19C5A0LL,0x14BA54F65A19C5A0LL};
    uint16_t l_1095 = 0xBA8CL;
    const uint8_t l_1131 = 0xA8L;
    uint64_t l_1150 = 0x4733EDDF63B8AAC2LL;
    uint32_t **l_1159 = &g_53;
    int32_t l_1187 = (-1L);
    uint64_t l_1190[1];
    uint8_t l_1242 = 249UL;
    int32_t l_1249 = 0x93503527L;
    int16_t *l_1250 = &g_1114;
    int32_t l_1292[2][7] = {{0xFF23441AL,0xFF23441AL,0xBA9E74A5L,0xFF23441AL,0xFF23441AL,0xBA9E74A5L,0xFF23441AL},{0L,0x858D7CADL,0x858D7CADL,0L,0x858D7CADL,0x858D7CADL,0L}};
    uint16_t l_1362 = 0xC758L;
    int32_t l_1413 = 0x356249BDL;
    int32_t l_1429 = 0x4757598EL;
    int16_t l_1437 = (-8L);
    uint8_t l_1462 = 0x82L;
    int32_t ** const l_1472 = &g_405;
    uint16_t l_1489 = 0x1273L;
    uint32_t l_1526 = 2UL;
    uint8_t l_1550 = 1UL;
    const uint16_t l_1581 = 0x233FL;
    int16_t **l_1622[7][3][6] = {{{&l_1250,(void*)0,(void*)0,(void*)0,(void*)0,&l_1250},{&l_1250,&l_1250,&l_1250,&l_1250,&l_1250,(void*)0},{(void*)0,&l_1250,&l_1250,&l_1250,&l_1250,(void*)0}},{{(void*)0,&l_1250,&l_1250,&l_1250,&l_1250,&l_1250},{&l_1250,&l_1250,(void*)0,(void*)0,&l_1250,(void*)0},{&l_1250,&l_1250,(void*)0,&l_1250,&l_1250,(void*)0}},{{(void*)0,&l_1250,&l_1250,(void*)0,&l_1250,&l_1250},{&l_1250,&l_1250,&l_1250,&l_1250,(void*)0,&l_1250},{&l_1250,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250}},{{(void*)0,(void*)0,&l_1250,(void*)0,(void*)0,&l_1250},{&l_1250,(void*)0,&l_1250,&l_1250,(void*)0,&l_1250},{&l_1250,(void*)0,&l_1250,&l_1250,(void*)0,&l_1250}},{{&l_1250,(void*)0,&l_1250,&l_1250,(void*)0,&l_1250},{&l_1250,(void*)0,&l_1250,&l_1250,(void*)0,&l_1250},{&l_1250,(void*)0,&l_1250,&l_1250,(void*)0,&l_1250}},{{&l_1250,&l_1250,&l_1250,&l_1250,(void*)0,&l_1250},{&l_1250,&l_1250,&l_1250,&l_1250,&l_1250,&l_1250},{&l_1250,(void*)0,&l_1250,&l_1250,(void*)0,&l_1250}},{{&l_1250,(void*)0,&l_1250,&l_1250,&l_1250,&l_1250},{&l_1250,&l_1250,&l_1250,&l_1250,(void*)0,&l_1250},{&l_1250,&l_1250,&l_1250,&l_1250,(void*)0,&l_1250}}};
    int16_t ***l_1621 = &l_1622[5][1][3];
    int16_t ****l_1620 = &l_1621;
    struct S0 **l_1664 = &g_642;
    uint8_t l_1687 = 0UL;
    int32_t l_1692 = 0xF349CA83L;
    struct S0 l_1705 = {0L,0xF39E79CFL,1L};
    uint64_t * const **l_1761 = &g_1407[1][1];
    uint32_t l_1826 = 0x40009FBEL;
    uint8_t *l_1834 = &l_919[4][1];
    int32_t l_1835[6][5] = {{8L,1L,1L,1L,1L},{0xA1448946L,(-1L),1L,0L,(-1L)},{0xA1448946L,1L,(-8L),0L,1L},{8L,1L,1L,1L,1L},{0xA1448946L,(-1L),1L,0L,(-1L)},{0xA1448946L,1L,(-8L),0L,1L}};
    int32_t **l_1874[4];
    uint16_t l_1917 = 65534UL;
    int32_t *l_1957 = &g_300;
    uint32_t l_2082[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1190[i] = 0x217FE104D67435E3LL;
    for (i = 0; i < 4; i++)
        l_1874[i] = &g_405;
    for (i = 0; i < 1; i++)
        l_2082[i] = 0x39A79B44L;
    g_300 ^= ((l_886 == l_886) <= (l_888[1][1] = (9UL || (~(l_888[1][1] >= ((l_889 != l_889) == ((((l_894 = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((&g_361 == &g_361), 0L)), 10))) == (*g_390)) , 9UL) || p_22.f1)))))));
    for (g_705 = (-17); (g_705 > 5); g_705 = safe_add_func_uint8_t_u_u(g_705, 4))
    { 
        int32_t l_900 = 4L;
        uint8_t *l_901 = &g_218[6][0];
        uint8_t *l_902 = &g_878;
        int16_t *l_903 = (void*)0;
        int16_t *l_904 = &g_736.f3.f2;
        int32_t l_905 = (-7L);
        int32_t l_906 = 0x3A1A53E5L;
        int64_t *l_920 = (void*)0;
        int64_t *l_921 = &g_700;
        int16_t ***l_924 = (void*)0;
        uint16_t *l_930 = &g_290;
        uint32_t *l_932 = (void*)0;
        uint32_t *l_933 = (void*)0;
        uint32_t *l_934 = &g_731[0][0];
        int64_t *l_935 = (void*)0;
        int64_t *l_936 = &g_519.f0;
        int32_t l_961[2];
        int64_t l_1051 = 1L;
        int16_t l_1125 = (-2L);
        uint64_t l_1130 = 1UL;
        int32_t *l_1164[6];
        const struct S0 ***l_1203 = (void*)0;
        const uint64_t **l_1230[7];
        int32_t l_1237 = 0x23BEE7C3L;
        int i;
        for (i = 0; i < 2; i++)
            l_961[i] = 0x92ECED17L;
        for (i = 0; i < 6; i++)
            l_1164[i] = &l_961[1];
        for (i = 0; i < 7; i++)
            l_1230[i] = (void*)0;
    }
    return (***g_395);
}



static union U1  func_23(uint32_t  p_24, uint16_t  p_25, struct S0  p_26)
{ 
    uint32_t l_49[7];
    uint32_t *l_51[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}};
    uint32_t **l_50 = &l_51[1][1];
    int32_t l_291 = 0xF6F80DFEL;
    union U1 l_547 = {1UL};
    uint64_t l_553 = 0x2F9A203C23D68039LL;
    int32_t l_574 = 7L;
    int32_t ****l_581 = &g_361;
    uint32_t l_585 = 4294967295UL;
    int32_t l_599 = 0x0EEACAAFL;
    uint32_t l_611[4][5] = {{4294967295UL,4294967295UL,1UL,4294967287UL,1UL},{0UL,0UL,0x912CC2FFL,0x0BA224CDL,0x912CC2FFL},{4294967295UL,4294967295UL,1UL,4294967287UL,1UL},{0UL,0UL,0x912CC2FFL,0x0BA224CDL,0x912CC2FFL}};
    int32_t *l_645 = (void*)0;
    uint8_t *l_652 = &g_582;
    int32_t l_696 = 8L;
    int32_t **l_713 = &g_405;
    int32_t **l_724 = &l_645;
    int8_t l_725 = 0L;
    int64_t l_749 = 4L;
    int32_t l_788 = 0xBF0F1AF0L;
    int16_t *l_815[5][7] = {{&g_98,&g_98,&g_708,&g_98,&g_98,&g_708,&g_98},{&g_98,&g_519.f2,&g_519.f2,&g_98,&g_519.f2,&g_519.f2,&g_98},{&g_519.f2,&g_98,&g_519.f2,&g_519.f2,&g_98,&g_519.f2,&g_519.f2},{&g_98,&g_98,&g_708,&g_98,&g_98,&g_708,&g_98},{&g_98,&g_519.f2,&g_519.f2,&g_98,&g_519.f2,&g_519.f2,&g_98}};
    int16_t **l_814 = &l_815[4][0];
    const int32_t l_875[1] = {0x4C66D43EL};
    uint8_t l_883 = 0xF9L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_49[i] = 0xD402A53EL;
    for (g_37 = 0; (g_37 <= 6); g_37 += 1)
    { 
        uint64_t l_68 = 0UL;
        int32_t l_78 = (-1L);
        uint16_t l_535 = 0x265AL;
        union U1 *l_548 = (void*)0;
        int32_t * const l_550[4] = {&g_37,&g_37,&g_37,&g_37};
        uint32_t *l_552 = &g_47;
        int32_t *l_646 = &g_97;
        uint16_t *l_651 = &g_357;
        uint8_t *l_653[4] = {&g_130,&g_130,&g_130,&g_130};
        int32_t **l_723 = &l_646;
        const int16_t *l_759 = &g_760;
        uint8_t l_790 = 1UL;
        int16_t **l_816 = &l_815[4][0];
        int16_t **l_817 = &l_815[4][0];
        uint8_t l_831 = 0UL;
        uint32_t ****l_848[2];
        int i;
        for (i = 0; i < 2; i++)
            l_848[i] = (void*)0;
        g_52 = l_50;
        for (g_48.f2 = 1; (g_48.f2 <= 6); g_48.f2 += 1)
        { 
            uint16_t *l_69 = &g_70;
            uint32_t *l_74 = (void*)0;
            uint32_t *l_75 = &g_76;
            int32_t *l_77[1];
            int i;
            for (i = 0; i < 1; i++)
                l_77[i] = (void*)0;
            g_79[2] &= (!func_30((((safe_div_func_int32_t_s_s(l_49[g_48.f2], p_26.f2)) | (safe_lshift_func_uint8_t_u_u(p_26.f1, 2))) > ((l_78 = (safe_div_func_uint32_t_u_u(g_48.f2, (+(safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((*l_75) = (safe_mul_func_int8_t_s_s(func_30(l_68, ((*l_69)++)), (!p_25)))), 0x09C591EBL)), (-4L))))))) ^ 0x6E690D92L)), g_48.f0));
        }
    }
    return l_547;
}



static int32_t  func_30(uint64_t  p_31, uint16_t  p_32)
{ 
    int32_t *l_35 = (void*)0;
    int32_t *l_36 = &g_37;
    int32_t l_38 = 0x5DBD55ADL;
    int32_t *l_39 = (void*)0;
    int32_t *l_40 = (void*)0;
    int32_t *l_41[7][1][6] = {{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}},{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}},{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}},{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}},{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}},{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}},{{&l_38,&g_37,&l_38,&l_38,&g_37,&l_38}}};
    uint32_t l_42[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_42[i] = 7UL;
    --l_42[0];
    return g_37;
}



static uint32_t  func_83(int64_t  p_84, uint16_t * p_85, int32_t  p_86)
{ 
    int32_t *l_321 = &g_97;
    int32_t **l_320 = &l_321;
    int32_t l_355 = (-4L);
    struct S0 l_364 = {0L,0xAF28B6AEL,0xC0E2L};
    const int32_t *l_392 = &g_97;
    int32_t **l_407 = &g_405;
    int16_t **l_450[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint8_t *l_504 = &g_218[1][0];
    int i, j;
    for (p_86 = 23; (p_86 < (-16)); p_86--)
    { 
        int32_t *l_294 = &g_97;
        int16_t l_324 = 4L;
        uint32_t l_331 = 4294967295UL;
        int32_t l_346 = 0xCBB113E4L;
        int32_t l_347 = (-5L);
        int32_t l_348[4][7][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
        uint64_t l_374[7][1][3] = {{{0UL,8UL,8UL}},{{0UL,8UL,8UL}},{{0UL,8UL,8UL}},{{0UL,8UL,8UL}},{{0UL,8UL,8UL}},{{0UL,8UL,8UL}},{{0UL,8UL,8UL}}};
        int16_t *** const l_466 = &l_450[4][1];
        union U1 l_494 = {18446744073709551606UL};
        const uint8_t l_516 = 0x18L;
        int i, j, k;
        (*l_294) = g_98;
        if (p_84)
            break;
        for (g_290 = 18; (g_290 < 47); g_290 = safe_add_func_uint32_t_u_u(g_290, 8))
        { 
            int32_t l_310 = 3L;
            uint32_t *l_342 = &g_47;
            int32_t *l_366 = &l_310;
            int32_t *l_367 = &g_97;
            int32_t *l_368 = &g_352;
            int32_t *l_369 = &g_300;
            int32_t *l_370 = &l_348[2][4][0];
            int32_t *l_371 = &g_352;
            int32_t *l_372[5][7][3] = {{{&g_352,&l_355,(void*)0},{&l_348[0][1][0],&g_37,&l_348[0][5][0]},{&l_346,&g_37,&l_346},{&g_97,(void*)0,&g_97},{&l_348[3][3][0],&g_37,&l_347},{(void*)0,&l_310,&l_348[2][6][0]},{&l_348[3][1][0],&l_347,(void*)0}},{{(void*)0,&l_347,&g_97},{&l_348[3][3][0],&g_352,&g_352},{&g_97,&l_348[2][6][0],&l_310},{&l_346,&l_348[3][1][0],&g_37},{&l_348[0][1][0],&g_352,&l_348[0][3][0]},{&g_352,(void*)0,&l_348[3][1][0]},{&l_348[0][5][0],&g_352,(void*)0}},{{&l_355,&l_348[3][1][0],&l_348[3][3][0]},{&l_348[2][6][0],&l_348[2][6][0],&g_352},{&l_348[3][1][0],&g_352,&l_347},{&l_310,&l_347,(void*)0},{&l_347,&l_347,&l_355},{&l_348[3][1][0],&l_310,(void*)0},{&l_348[3][1][0],&g_37,&l_347}},{{&g_352,(void*)0,&g_352},{&g_37,&g_37,&l_348[3][3][0]},{&g_97,&g_37,(void*)0},{&g_37,&l_355,&l_348[3][1][0]},{&l_310,(void*)0,&l_348[0][3][0]},{&g_37,&g_97,&g_37},{&g_97,&l_310,&l_310}},{{&g_37,&l_348[3][1][0],&g_352},{&g_352,&l_310,&l_310},{(void*)0,&g_37,&l_347},{&g_97,(void*)0,&l_348[3][1][0]},{&l_348[3][3][0],&g_37,&l_348[3][1][0]},{&l_310,&l_310,&g_352},{&g_352,&g_352,&g_37}}};
            int8_t l_373 = 0x8BL;
            uint32_t l_421 = 0x0D468A62L;
            int8_t l_457 = (-1L);
            union U1 l_463 = {4UL};
            struct S0 l_513 = {0xA67368AE5DE1490FLL,7L,0xE751L};
            uint64_t l_514[4][3][2];
            int32_t *l_517 = &l_348[3][0][0];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_514[i][j][k] = 4UL;
                }
            }
            for (g_97 = 0; (g_97 == (-24)); --g_97)
            { 
                int32_t *l_299 = &g_300;
                int32_t l_349 = 0xCB734EDFL;
                int32_t l_350 = 0x199EEEB3L;
                int32_t l_353[2];
                int16_t l_365 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_353[i] = (-8L);
                (*l_299) ^= g_218[6][0];
                for (g_76 = 10; (g_76 >= 11); g_76 = safe_add_func_int64_t_s_s(g_76, 6))
                { 
                    if (p_84)
                        break;
                    if (g_112)
                        break;
                }
                for (g_76 = 0; (g_76 <= 12); g_76 = safe_add_func_uint16_t_u_u(g_76, 8))
                { 
                    uint16_t *l_305 = &g_70;
                    int32_t l_311 = 2L;
                    int32_t l_314 = 0xAA11DC3BL;
                    uint8_t *l_315 = &g_218[2][0];
                    uint8_t *l_318 = &g_130;
                    if (g_48.f1)
                        break;
                    (*l_299) = (((*l_305)++) ^ ((safe_mod_func_uint64_t_u_u(l_310, (p_86 && l_311))) != (((*l_318) &= (++(*l_315))) > ((*p_85) > (~((void*)0 == l_320))))));
                }
                if ((((&g_148[1] != (void*)0) && ((&p_86 != l_299) , l_324)) ^ (5L <= g_37)))
                { 
                    int32_t *l_325 = &l_310;
                    int32_t *l_326 = (void*)0;
                    int32_t *l_327 = &l_310;
                    int32_t l_328 = 0xA6978B22L;
                    int32_t *l_329 = (void*)0;
                    int32_t *l_330[2][4] = {{&l_310,&l_328,&l_328,&l_310},{&l_328,&l_310,&l_328,&l_328}};
                    int64_t *l_334 = &g_79[2];
                    int32_t * const * const l_345 = (void*)0;
                    int32_t * const * const *l_344[7] = {&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345};
                    int32_t * const * const **l_343 = &l_344[0];
                    int i, j;
                    --l_331;
                    (*l_299) = (((*l_334) = (*l_325)) && (safe_mod_func_uint32_t_u_u((((+0xC58C6798C4C04C65LL) & 0x5CE1L) == ((((*p_85) , (safe_div_func_int16_t_s_s(((*l_294) > ((*g_52) == l_342)), 0x8669L))) , g_37) > g_217)), g_148[3])));
                    (*l_343) = (void*)0;
                    g_357++;
                }
                else
                { 
                    uint64_t l_362 = 18446744073709551613UL;
                    int32_t *l_363 = &l_355;
                    if (p_86)
                        break;
                    l_362 = (g_360 == &g_361);
                    (*l_363) ^= (((((*l_320) = &l_348[3][5][0]) != l_363) && ((l_364 , 0xC936L) ^ l_365)) || 1L);
                }
            }
            l_374[2][0][1]--;
            if (p_86)
                continue;
        }
        if (p_86)
            break;
        g_388[2][0][0] = &l_347;
    }
    return g_352;
}



static uint8_t  func_88(int8_t  p_89)
{ 
    const uint32_t l_94 = 0xB0CB415CL;
    int32_t *l_95 = (void*)0;
    int32_t *l_96[6][7][6] = {{{&g_97,&g_37,&g_97,&g_37,&g_97,&g_37},{&g_97,&g_97,&g_37,&g_37,(void*)0,(void*)0},{&g_37,(void*)0,&g_37,&g_97,&g_97,&g_37},{&g_97,&g_97,&g_97,&g_37,&g_97,&g_37},{&g_37,&g_97,&g_37,(void*)0,&g_37,&g_97},{&g_37,&g_37,&g_37,(void*)0,&g_97,&g_37},{&g_97,&g_37,&g_97,(void*)0,&g_97,(void*)0}},{{&g_37,&g_97,&g_37,(void*)0,&g_97,&g_37},{&g_37,&g_97,&g_97,&g_37,(void*)0,&g_37},{&g_97,&g_37,&g_37,&g_97,&g_97,&g_97},{&g_37,&g_37,&g_97,&g_37,&g_97,&g_37},{&g_97,&g_37,&g_97,&g_37,(void*)0,(void*)0},{&g_97,&g_97,&g_97,&g_97,&g_97,(void*)0},{&g_97,&g_97,&g_97,&g_37,&g_97,(void*)0}},{{&g_37,&g_37,&g_37,&g_97,&g_97,(void*)0},{&g_37,&g_37,&g_97,&g_97,&g_37,(void*)0},{&g_97,&g_97,&g_97,&g_37,&g_97,(void*)0},{&g_37,&g_97,&g_97,&g_37,&g_97,&g_37},{(void*)0,(void*)0,&g_97,&g_37,(void*)0,&g_97},{(void*)0,&g_97,&g_37,&g_37,&g_97,&g_37},{&g_37,&g_37,&g_97,&g_37,&g_97,&g_37}},{{&g_97,&g_37,&g_37,&g_97,&g_97,(void*)0},{&g_37,&g_37,&g_97,&g_97,&g_97,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_97,&g_97},{&g_97,&g_37,&g_37,&g_97,&g_97,&g_37},{&g_97,&g_37,&g_97,&g_37,&g_97,&g_37},{&g_97,&g_97,&g_97,&g_37,&g_37,&g_97},{&g_97,&g_97,&g_97,&g_37,&g_97,&g_97}},{{&g_37,&g_37,&g_37,&g_37,&g_97,&g_37},{&g_97,&g_37,&g_97,&g_97,&g_97,(void*)0},{&g_97,(void*)0,&g_97,&g_37,&g_37,&g_37},{&g_37,&g_37,(void*)0,&g_37,&g_37,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97,(void*)0},{&g_97,&g_37,&g_37,&g_37,&g_37,&g_97},{&g_37,&g_37,&g_97,&g_37,(void*)0,&g_37}},{{&g_97,(void*)0,&g_97,&g_37,(void*)0,&g_97},{&g_37,&g_37,(void*)0,&g_97,&g_37,&g_97},{&g_97,&g_37,&g_97,&g_37,&g_97,&g_97},{&g_97,&g_97,(void*)0,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_97,&g_97,&g_37,&g_37},{&g_97,(void*)0,(void*)0,&g_37,&g_97,&g_97},{&g_37,&g_37,&g_97,&g_97,&g_97,&g_97}}};
    int16_t l_105 = 0x1530L;
    uint16_t *l_115 = (void*)0;
    uint16_t *l_116[7] = {&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70};
    int16_t l_119 = 1L;
    int32_t l_120 = 0xE1FD80D4L;
    int32_t l_121 = 0L;
    int16_t l_128 = 0x8CD9L;
    int8_t l_146 = 0x60L;
    uint32_t l_208 = 0xD647C19EL;
    int32_t *l_233 = &l_121;
    int32_t *l_246[6];
    struct S0 l_257 = {-1L,0xE239A327L,-6L};
    uint8_t l_263[5][1] = {{0x78L},{0UL},{0x78L},{0UL},{0x78L}};
    int16_t l_266 = 0xB05FL;
    uint32_t **l_271[7][6][2] = {{{&g_53,&g_53},{(void*)0,(void*)0},{&g_53,(void*)0},{&g_53,&g_53},{&g_53,(void*)0},{&g_53,(void*)0}},{{(void*)0,&g_53},{&g_53,&g_53},{&g_53,(void*)0},{(void*)0,&g_53},{(void*)0,&g_53},{&g_53,&g_53}},{{&g_53,&g_53},{&g_53,&g_53},{(void*)0,&g_53},{(void*)0,(void*)0},{&g_53,&g_53},{&g_53,&g_53}},{{(void*)0,(void*)0},{&g_53,(void*)0},{&g_53,&g_53},{&g_53,(void*)0},{&g_53,(void*)0},{(void*)0,&g_53}},{{&g_53,&g_53},{&g_53,(void*)0},{(void*)0,&g_53},{(void*)0,&g_53},{&g_53,&g_53},{&g_53,&g_53}},{{&g_53,&g_53},{(void*)0,&g_53},{(void*)0,(void*)0},{&g_53,&g_53},{&g_53,&g_53},{(void*)0,(void*)0}},{{&g_53,(void*)0},{&g_53,&g_53},{&g_53,(void*)0},{&g_53,(void*)0},{(void*)0,&g_53},{&g_53,&g_53}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_246[i] = &g_37;
    g_98 = (g_97 &= ((((((safe_add_func_int64_t_s_s(0xFD11E6AC9C4BD7DALL, ((g_48.f1 == 4L) , (g_79[2] < (0UL == l_94))))) < p_89) | g_48.f2) <= g_76) > 0xFFD3L) , (-3L)));
    l_105 ^= ((safe_mul_func_int8_t_s_s(p_89, (3L < ((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((void*)0 == &g_97), p_89)), (((((g_98 == ((l_96[4][0][5] != l_95) < 0x04L)) , g_79[0]) , g_79[2]) && p_89) , p_89))) < 252UL)))) , g_98);
    if (((safe_mul_func_uint16_t_u_u((~(+((safe_sub_func_uint16_t_u_u((((((g_112 & (0x6DCBL == (((safe_rshift_func_int8_t_s_u((((((&l_94 != &l_94) != ((g_70 = g_70) | g_11)) & (((safe_sub_func_int16_t_s_s((0xA0L >= g_98), (-1L))) < g_48.f1) != g_11)) > p_89) & 0xF33B7E8F3380028DLL), 6)) , g_11) < l_119))) >= p_89) , 9UL) == g_97) < p_89), l_120)) , l_121))), g_76)) <= 0x325E2F7FA0514B5FLL))
    { 
        union U1 l_125 = {18446744073709551609UL};
        uint8_t *l_129[2][3][4] = {{{&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130}},{{&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,&g_130,&g_130}}};
        int8_t *l_143 = &g_91;
        uint64_t *l_147 = &g_148[3];
        int64_t *l_149 = &g_79[2];
        uint64_t l_150 = 0x109A6A1C6E98833DLL;
        int32_t l_179 = 0xF469DC8AL;
        int32_t l_186 = 0xC4AD1FBBL;
        uint32_t *l_196 = &g_112;
        int i, j, k;
        if (((safe_add_func_int16_t_s_s((g_48.f2 <= ((~(l_125 , ((p_89 >= ((0x4FL & (safe_mul_func_uint16_t_u_u(((++g_130) , (((*l_149) &= ((safe_div_func_uint32_t_u_u(((((*l_147) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((*l_143) &= 0xBBL) ^ (l_125.f0 > (safe_rshift_func_int8_t_s_u(p_89, 3)))) != 1L), p_89)), l_146)), l_125.f2)) < p_89)) & 0x8B8ACE59AEBFD9C8LL) >= g_11), 1UL)) ^ g_48.f2)) > 0xAB1CF0A5B3A4ADEFLL)), p_89))) & l_150)) || 1L))) & p_89)), g_76)) ^ g_11))
        { 
            uint32_t l_151 = 0x64901672L;
            return l_151;
        }
        else
        { 
            int32_t l_165 = 0xBC724294L;
            uint16_t l_166[7][5][2] = {{{65535UL,65534UL},{65535UL,0xFBA9L},{6UL,0xA3D4L},{0xFBA9L,0x48AFL},{0x7F97L,0xD67AL}},{{0x0F04L,0x01F2L},{0x01F2L,1UL},{0xB2E0L,0x0F04L},{65534UL,65535UL},{0xD67AL,65535UL}},{{65534UL,0x0F04L},{0xB2E0L,1UL},{0x01F2L,0x01F2L},{0x0F04L,0xD67AL},{0x7F97L,0x48AFL}},{{0xFBA9L,0xA3D4L},{6UL,0xFBA9L},{65535UL,65534UL},{65535UL,0xFBA9L},{6UL,0xA3D4L}},{{0xFBA9L,0x48AFL},{0x7F97L,0xD67AL},{0x0F04L,0x01F2L},{0x01F2L,1UL},{0xB2E0L,0x0F04L}},{{65534UL,65535UL},{0xD67AL,65535UL},{65534UL,0x0F04L},{0xB2E0L,1UL},{0x01F2L,0x01F2L}},{{0x0F04L,0xD67AL},{0x7F97L,0x48AFL},{0xFBA9L,0xA3D4L},{6UL,0xFBA9L},{65535UL,65534UL}}};
            int32_t l_169 = 0x1B8B91DEL;
            int32_t l_178 = 1L;
            int32_t l_180 = (-5L);
            int32_t l_181 = 0x2C41C70BL;
            int32_t l_182 = 0x209DD696L;
            int32_t l_187[3];
            uint32_t l_188[5][5][7] = {{{0x44AC8F83L,2UL,0x778D2D4EL,0x6466AF94L,0x47B37152L,0x23561A8AL,4294967287UL},{6UL,0x81AC69C3L,1UL,0x47B37152L,0x949A0C9DL,0x574E035AL,0x1C437321L},{0xA974AF1BL,0x47B37152L,0x64C40407L,0x2D23503CL,0x5D252147L,0x86F38ED0L,6UL},{0UL,0xB660CBC0L,0x64C40407L,0xA974AF1BL,4294967287UL,4294967290UL,0x81AC69C3L},{0x47228463L,0xC51E3A1AL,1UL,0xF59D7E22L,0x2D23503CL,0UL,0UL}},{{0x574E035AL,0x821C2022L,0x778D2D4EL,0x821C2022L,0x574E035AL,1UL,4294967295UL},{0xB0373C02L,0x650B9E8DL,6UL,0x2FDB1AD6L,5UL,0x778D2D4EL,0xF59D7E22L},{0xD572D656L,0x86F38ED0L,4294967292UL,0x574E035AL,6UL,4294967292UL,1UL},{0xB0373C02L,0x2FDB1AD6L,0x80B996A7L,1UL,4294967295UL,3UL,0x44E3D589L},{0x574E035AL,6UL,4294967290UL,0xE1135817L,0x80B996A7L,0x8FBE7E21L,1UL}},{{0x47228463L,3UL,0xB660CBC0L,0x23561A8AL,0x821C2022L,7UL,0xD572D656L},{0UL,0x1C437321L,0xD572D656L,0UL,4294967287UL,7UL,0x8FBE7E21L},{0xA974AF1BL,0x574E035AL,0x47B37152L,4294967294UL,2UL,0x8FBE7E21L,0xC51E3A1AL},{6UL,0x44AC8F83L,3UL,1UL,1UL,3UL,0x44AC8F83L},{0xB0373C02L,1UL,0x650B9E8DL,0xC51E3A1AL,0x86F38ED0L,4294967295UL,0xC64F5160L}},{{0UL,3UL,6UL,0UL,5UL,0x574E035AL,0x23561A8AL},{2UL,0x5D252147L,1UL,0xC51E3A1AL,0x81AC69C3L,0x50D85C2BL,0x47228463L},{0x778D2D4EL,0x23561A8AL,0UL,0x50D85C2BL,7UL,1UL,4294967295UL},{0x50D85C2BL,0x1C437321L,0xF59D7E22L,5UL,0x650B9E8DL,0x821C2022L,4294967292UL},{4294967295UL,0x47B37152L,0x8FBE7E21L,1UL,0xE3410294L,0x44E3D589L,0xE1135817L}},{{1UL,0x47B37152L,0x47228463L,0xE1135817L,4294967295UL,0UL,1UL},{0x5D252147L,0x1C437321L,0x86F38ED0L,0x64C40407L,0x949A0C9DL,0xE1135817L,0x949A0C9DL},{0xD572D656L,0x23561A8AL,0x23561A8AL,0xD572D656L,0xC51E3A1AL,0x9FD15FEFL,0x1C437321L},{0UL,0x5D252147L,0x7C0A964BL,0UL,0xB0373C02L,4294967295UL,5UL},{0x7C0A964BL,3UL,0x6466AF94L,7UL,0x778D2D4EL,1UL,0x1C437321L}}};
            union U1 l_201[3] = {{0x9EE913CB2BF3D79FLL},{0x9EE913CB2BF3D79FLL},{0x9EE913CB2BF3D79FLL}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_187[i] = (-1L);
            for (l_146 = 2; (l_146 >= 0); l_146 -= 1)
            { 
                int32_t *l_160 = (void*)0;
                int32_t *l_161 = &l_121;
                int32_t l_164 = 1L;
                int32_t l_183 = 0x7FE986FCL;
                int32_t l_184 = 0x1C89E38AL;
                int32_t l_185 = 0xA774E767L;
            }
            if ((safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(((void*)0 == &g_148[3]), (l_196 == (void*)0))) || (((((safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((((l_201[0] , g_148[3]) ^ (safe_mod_func_int8_t_s_s((l_187[1] && l_125.f1), l_166[1][2][1]))) , g_97) || p_89), 9UL)), 0xF7387452188D95DDLL)) ^ p_89) , p_89) < p_89) | g_97)), g_11)))
            { 
                return l_165;
            }
            else
            { 
                l_208 = (((g_130 = (l_182 = p_89)) , (safe_rshift_func_uint16_t_u_u((g_70 = p_89), 5))) , (g_91 < (safe_mul_func_int16_t_s_s(p_89, (g_48 , (0xEEL <= (&l_166[3][2][1] != (void*)0)))))));
                for (g_48.f0 = (-8); (g_48.f0 == (-12)); g_48.f0 = safe_sub_func_int16_t_s_s(g_48.f0, 8))
                { 
                    int32_t *l_211 = &g_97;
                    int32_t **l_212 = &l_96[2][6][5];
                    int32_t **l_213 = (void*)0;
                    int32_t **l_214 = &l_95;
                    g_97 = p_89;
                    (*l_214) = ((*l_212) = l_211);
                }
                l_169 ^= l_180;
                for (l_125.f3.f0 = 0; (l_125.f3.f0 == (-21)); --l_125.f3.f0)
                { 
                    ++g_218[6][0];
                }
            }
            return p_89;
        }
    }
    else
    { 
        uint32_t l_221 = 0xD6317879L;
        const union U1 l_230 = {0x7577DDABB3DD9F28LL};
        int32_t *l_231 = &l_121;
        int32_t **l_232[4];
        int32_t l_244 = 0x55590321L;
        int32_t l_245[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
        int32_t *l_247[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t *l_252 = &g_11;
        int i;
        for (i = 0; i < 4; i++)
            l_232[i] = &l_231;
        ++l_221;
        l_245[6] &= (((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((g_217 = ((g_47 <= (safe_sub_func_int32_t_s_s(((((l_230 , (void*)0) == (l_233 = l_231)) != (((safe_unary_minus_func_uint64_t_u(((((&g_148[3] == ((p_89 , (!(safe_unary_minus_func_int16_t_s(((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((+((safe_sub_func_uint64_t_u_u(p_89, p_89)) != 0x62F63DB9L)), g_48.f1)), g_130)) <= l_230.f2))))) , (void*)0)) != g_218[6][0]) < 0x4E12CC2AL) | (-3L)))) || g_48.f2) < g_98)) & g_48.f2), l_244))) <= p_89)), 5)), l_230.f2)) != 1UL) , l_230.f2);
        l_247[5] = l_246[3];
        for (g_76 = 0; (g_76 < 13); g_76 = safe_add_func_int8_t_s_s(g_76, 7))
        { 
            union U1 l_261 = {0x80D130F14CA189BCLL};
            union U1 l_262 = {0x632F5110C61D9D73LL};
            int8_t *l_264 = &l_146;
            int8_t *l_265 = &g_217;
            uint32_t **l_273 = (void*)0;
            if ((safe_mul_func_uint8_t_u_u(p_89, (((void*)0 != l_252) <= (l_262.f2 = (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((l_261.f2 = (l_266 = ((*l_265) = ((*l_264) &= ((l_257 , g_91) != (~((safe_div_func_uint32_t_u_u(0x378B8574L, ((((l_261 , l_262) , l_263[4][0]) == g_98) && p_89))) & l_261.f0))))))), 6)), 6)) >= l_262.f2) && 0x8B65CF7F315CCFE2LL))))))
            { 
                uint64_t l_280 = 0x6ACAF532559C792DLL;
                for (l_262.f1 = (-9); (l_262.f1 != 14); l_262.f1 = safe_add_func_int16_t_s_s(l_262.f1, 1))
                { 
                    uint64_t *l_269 = &g_148[4];
                    int32_t l_270 = 0L;
                    uint32_t ***l_272[7] = {&l_271[6][1][0],&l_271[6][1][0],&l_271[6][1][0],&l_271[6][1][0],&l_271[6][1][0],&l_271[6][1][0],&l_271[6][1][0]};
                    int i;
                    l_270 = (l_269 == &g_148[3]);
                    g_97 ^= (((-1L) >= l_270) , ((l_273 = l_271[6][1][0]) != (void*)0));
                    l_270 = (safe_rshift_func_uint16_t_u_s(((0x8927L >= (0x300FBA2EC1DA3991LL < ((safe_add_func_uint16_t_u_u((((((void*)0 != &l_271[6][1][0]) == (safe_lshift_func_uint16_t_u_u(((void*)0 == l_264), ((&g_76 != (void*)0) > l_280)))) ^ g_47) <= g_148[3]), p_89)) >= p_89))) >= g_217), g_76));
                }
                return l_261.f2;
            }
            else
            { 
                union U1 *l_281 = &l_262;
                union U1 **l_282 = &l_281;
                if (p_89)
                    break;
                if (g_218[6][0])
                    break;
                (*l_282) = l_281;
            }
        }
    }
    return g_79[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);

    }
    transparent_crc(g_217, "g_217", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_218[i][j], "g_218[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_519.f0, "g_519.f0", print_hash_value);
    transparent_crc(g_519.f1, "g_519.f1", print_hash_value);
    transparent_crc(g_519.f2, "g_519.f2", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_731[i][j], "g_731[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_736.f0, "g_736.f0", print_hash_value);
    transparent_crc(g_736.f1, "g_736.f1", print_hash_value);
    transparent_crc(g_736.f2, "g_736.f2", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_877, "g_877", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    transparent_crc(g_1432, "g_1432", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1496[i], "g_1496[i]", print_hash_value);

    }
    transparent_crc(g_1542, "g_1542", print_hash_value);
    transparent_crc(g_1545, "g_1545", print_hash_value);
    transparent_crc(g_1547, "g_1547", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1548[i], "g_1548[i]", print_hash_value);

    }
    transparent_crc(g_1922, "g_1922", print_hash_value);
    transparent_crc(g_1992, "g_1992", print_hash_value);
    transparent_crc(g_2512, "g_2512", print_hash_value);
    transparent_crc(g_2521, "g_2521", print_hash_value);
    transparent_crc(g_2621.f0, "g_2621.f0", print_hash_value);
    transparent_crc(g_2621.f1, "g_2621.f1", print_hash_value);
    transparent_crc(g_2621.f2, "g_2621.f2", print_hash_value);
    transparent_crc(g_2753.f0, "g_2753.f0", print_hash_value);
    transparent_crc(g_2753.f1, "g_2753.f1", print_hash_value);
    transparent_crc(g_2753.f2, "g_2753.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2804[i].f0, "g_2804[i].f0", print_hash_value);
        transparent_crc(g_2804[i].f1, "g_2804[i].f1", print_hash_value);
        transparent_crc(g_2804[i].f2, "g_2804[i].f2", print_hash_value);

    }
    transparent_crc(g_2860, "g_2860", print_hash_value);
    transparent_crc(g_2926, "g_2926", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2954[i], "g_2954[i]", print_hash_value);

    }
    transparent_crc(g_3119, "g_3119", print_hash_value);
    transparent_crc(g_3166, "g_3166", print_hash_value);
    transparent_crc(g_3271, "g_3271", print_hash_value);
    transparent_crc(g_3369, "g_3369", print_hash_value);
    transparent_crc(g_3559, "g_3559", print_hash_value);
    transparent_crc(g_3812, "g_3812", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
