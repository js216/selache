// SPDX-License-Identifier: MIT
// cctest_csmith_381ce9a0.c --- cctest case csmith_381ce9a0 (csmith seed 941418912)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd5756c2c */

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

// Options:   -s 941418912 -o /tmp/csmith_gen__mao8yd_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
   int64_t  f2;
   uint32_t  f3;
   int8_t  f4;
};

struct S1 {
   uint32_t  f0;
   uint8_t  f1;
   int16_t  f2;
   const struct S0  f3;
   const int8_t  f4;
   uint16_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int32_t  f0;
   uint16_t  f1;
   const int64_t  f2;
   uint32_t  f3;
   struct S1  f4;
};
#pragma pack(pop)

union U4 {
   const uint8_t  f0;
   const int8_t  f1;
   uint8_t  f2;
   uint64_t  f3;
};


static int32_t g_2 = (-5L);
static int32_t g_5 = (-4L);
static struct S1 g_14 = {0xAE974CA7L,0x90L,8L,{0x94FF5452L,0xA814L,0x11F3813BF58AAE07LL,0xA4C5706BL,0x79L},0x04L,0xC3F3L};
static struct S2 g_21 = {0xB11082E7L,65531UL,-4L,0x5CD4DCD7L,{0x20EAADAFL,0xD9L,0xC683L,{0L,0xA8E7L,0x64BFCE9347A64A0FLL,4294967286UL,0L},1L,9UL}};
static uint8_t g_33 = 0xFEL;
static int8_t g_39 = 0xD5L;
static uint32_t g_40 = 0x30862622L;
static struct S0 g_48 = {0xD1E4559FL,5UL,0xB5F43E010D33A129LL,0x870B5DC3L,6L};
static uint64_t g_78 = 0UL;
static int16_t g_91 = 0xAF98L;
static int32_t g_92 = (-9L);
static uint64_t g_94 = 0x2B33A36175416565LL;
static int32_t g_111 = 0xBFAE32FEL;
static int32_t g_115[5] = {0L,0L,0L,0L,0L};
static uint8_t g_116 = 0x6EL;



static int64_t  func_1(void);
static int32_t  func_8(struct S1  p_9, const int32_t  p_10, struct S0  p_11, int16_t  p_12, int32_t  p_13);
static struct S2  func_15(struct S2  p_16, uint16_t  p_17, int32_t  p_18, uint32_t  p_19, uint32_t  p_20);
static int8_t  func_22(uint32_t  p_23, struct S0  p_24, union U4  p_25);




static int64_t  func_1(void)
{ 
    int32_t l_31 = (-4L);
    struct S0 l_160 = {0x73AE872CL,1UL,0x217DE881EA7A1799LL,4294967289UL,0x8DL};
    int32_t l_170 = (-1L);
    int16_t l_182[5][4] = {{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)},{0L,0L,0x6BE3L,0L},{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)}};
    int i, j;
    for (g_2 = 0; (g_2 < (-4)); --g_2)
    { 
        int32_t l_32 = 0L;
        union U4 l_34 = {255UL};
        int32_t l_171 = 0x603B0C7BL;
        for (g_5 = (-9); (g_5 < (-23)); g_5 = safe_sub_func_uint32_t_u_u(g_5, 4))
        { 
            uint32_t l_30 = 0UL;
            uint32_t l_49[5][5] = {{0x24876030L,0x24876030L,18446744073709551606UL,0x24876030L,0x24876030L},{0x51128280L,0x24876030L,0x51128280L,0x51128280L,0x24876030L},{0x24876030L,0x51128280L,0x51128280L,0x24876030L,0x51128280L},{0x24876030L,0x24876030L,18446744073709551606UL,0x24876030L,0x24876030L},{0x51128280L,0x51128280L,18446744073709551606UL,18446744073709551606UL,0x51128280L}};
            int i, j;
            if (func_8(g_14, (func_15(g_21, (func_22((g_33 = ((safe_add_func_int64_t_s_s(g_2, (safe_sub_func_int32_t_s_s(((l_30 != l_31) > l_32), l_31)))) == 4294967291UL)), g_21.f4.f3, l_34) | l_49[3][0]), l_31, l_34.f2, g_14.f1) , g_21.f3), l_160, g_21.f4.f0, g_111))
            { 
                return g_14.f0;
            }
            else
            { 
                return l_30;
            }
        }
        g_92 &= (((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_14.f1, (l_171 &= (((l_170 = (l_34.f0 && (g_21.f4.f2 = ((safe_div_func_int16_t_s_s((0x1EL | g_21.f4.f1), 0x0A84L)) & g_21.f4.f3.f1)))) ^ g_21.f4.f3.f0) == g_21.f0)))), l_160.f0)), g_21.f4.f5)) == 1UL) && 0x51L);
        g_92 ^= (((((safe_sub_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((g_2 ^ (((0L >= 0xAECDC9E869F92A77LL) | (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s((l_182[0][3] , l_182[0][3]), 8)) || l_32) , g_33), l_170)), 1L))) >= g_21.f4.f4)), 0x8EL)) && 0xE1L) , g_2), 0xBFCEL)) , 0x8347ABF410F041E9LL) <= g_14.f3.f1) || g_33) && 0xE8L);
    }
    l_170 = 5L;
    return g_48.f1;
}



static int32_t  func_8(struct S1  p_9, const int32_t  p_10, struct S0  p_11, int16_t  p_12, int32_t  p_13)
{ 
    uint16_t l_161 = 0xE1F8L;
    g_48 = p_11;
    return l_161;
}



static struct S2  func_15(struct S2  p_16, uint16_t  p_17, int32_t  p_18, uint32_t  p_19, uint32_t  p_20)
{ 
    uint32_t l_52[3][4][4] = {{{0x5587BB5BL,4294967293UL,0x5587BB5BL,0UL},{4294967292UL,0xC75621C9L,0UL,0UL},{4294967293UL,4294967293UL,1UL,0xC75621C9L},{0xC75621C9L,4294967292UL,1UL,4294967292UL}},{{4294967293UL,0x5587BB5BL,0UL,1UL},{4294967292UL,0x5587BB5BL,0x5587BB5BL,4294967292UL},{0x5587BB5BL,4294967292UL,4294967293UL,0xC75621C9L},{0x5587BB5BL,4294967293UL,0x5587BB5BL,0UL}},{{4294967292UL,0xC75621C9L,0UL,0UL},{4294967293UL,4294967293UL,1UL,0xC75621C9L},{0xC75621C9L,4294967292UL,1UL,4294967292UL},{4294967293UL,0x5587BB5BL,0UL,1UL}}};
    int32_t l_66 = (-8L);
    int32_t l_67 = 1L;
    int64_t l_77 = 0x1637F256DA865B3CLL;
    int16_t l_112 = (-1L);
    int32_t l_113 = (-1L);
    int32_t l_114 = 0xA83C5579L;
    uint32_t l_129[5][1] = {{1UL},{5UL},{1UL},{5UL},{1UL}};
    struct S2 l_159 = {1L,7UL,0x95804E8CAA09B46BLL,2UL,{0xEA31E437L,246UL,0x31FDL,{0x1E180988L,0x09DCL,0L,0xC61CCE0BL,0L},0x49L,65533UL}};
    int i, j, k;
lbl_110:
    if ((safe_mul_func_int16_t_s_s(l_52[1][1][3], (((((safe_lshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((l_67 = (l_66 = ((safe_mod_func_int16_t_s_s((g_21.f4.f2 ^= ((safe_mul_func_uint16_t_u_u(p_16.f4.f2, (safe_mul_func_uint8_t_u_u(((p_18 = (safe_unary_minus_func_int64_t_s(((1UL == p_17) | g_14.f3.f4)))) | 0x871CFEE8L), 0x9BL)))) == 0xD7L)), 0xA4F7L)) & g_48.f1))), p_16.f3)), g_21.f4.f5)) != l_52[1][0][0]) ^ g_21.f4.f3.f4), g_21.f4.f3.f3)) | g_48.f0) < g_48.f4) || l_52[0][3][0]) && 0xB1C03A75L))))
    { 
        union U4 l_75 = {4UL};
        int32_t l_93 = 0xE60EB54AL;
        const struct S0 l_104[5] = {{0xAFD8232EL,0xDAFFL,4L,0xE2A20AB3L,0xEAL},{0xAFD8232EL,0xDAFFL,4L,0xE2A20AB3L,0xEAL},{0xAFD8232EL,0xDAFFL,4L,0xE2A20AB3L,0xEAL},{0xAFD8232EL,0xDAFFL,4L,0xE2A20AB3L,0xEAL},{0xAFD8232EL,0xDAFFL,4L,0xE2A20AB3L,0xEAL}};
        int i;
        for (g_21.f1 = 0; (g_21.f1 <= 2); g_21.f1 += 1)
        { 
            union U4 l_70 = {0xA7L};
            int32_t l_76[1];
            int i;
            for (i = 0; i < 1; i++)
                l_76[i] = 7L;
            l_76[0] ^= (p_16 , (safe_mod_func_int8_t_s_s(g_21.f1, (l_70 , (safe_rshift_func_uint8_t_u_u((((((safe_lshift_func_uint16_t_u_u((((l_75 , l_52[1][1][3]) != l_75.f2) || p_16.f4.f3.f2), 11)) , 1UL) < l_75.f0) == p_18) , g_21.f3), 7))))));
            for (g_21.f4.f1 = 0; (g_21.f4.f1 <= 2); g_21.f4.f1 += 1)
            { 
                l_77 &= g_21.f4.f3.f3;
                g_78++;
                if (p_16.f1)
                    break;
            }
            for (g_48.f1 = 0; (g_48.f1 <= 2); g_48.f1 += 1)
            { 
                uint64_t l_89 = 0UL;
                int32_t l_90 = 0xCDB74EB9L;
                g_91 = ((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(g_14.f3.f3, (l_90 = (((safe_add_func_int32_t_s_s(((p_18 , l_52[2][3][2]) <= ((safe_mod_func_int16_t_s_s(p_16.f4.f5, l_89)) == 0x79B9L)), l_89)) && p_16.f4.f3.f3) ^ g_21.f4.f3.f4)))) , p_16.f4.f0) == l_89), 0xD7867E7CL)) > 0x1CL);
                if (l_76[0])
                    continue;
                ++g_94;
            }
        }
        for (g_21.f4.f1 = 1; (g_21.f4.f1 >= 26); g_21.f4.f1 = safe_add_func_int64_t_s_s(g_21.f4.f1, 7))
        { 
            int32_t l_99 = 0xCA3844EFL;
            struct S0 l_105[3] = {{-1L,0xB741L,1L,0x2555567AL,0x64L},{-1L,0xB741L,1L,0x2555567AL,0x64L},{-1L,0xB741L,1L,0x2555567AL,0x64L}};
            int i;
            p_18 = ((((l_93 ^ (((l_99 ^ (g_48.f2 = (-4L))) && g_21.f4.f2) != 0x46C84E0FF389711ELL)) & g_40) , g_91) , g_21.f3);
            p_18 = (safe_sub_func_int16_t_s_s(g_14.f3.f1, (safe_lshift_func_uint8_t_u_s(0xCEL, 5))));
            l_105[0] = l_104[3];
        }
    }
    else
    { 
        uint32_t l_106 = 0x88B036ACL;
        struct S0 l_109 = {-5L,6UL,-1L,0UL,0xF4L};
        ++l_106;
        if (p_16.f1)
            goto lbl_110;
        l_109 = l_109;
    }
    ++g_116;
    for (g_21.f4.f1 = 24; (g_21.f4.f1 < 39); g_21.f4.f1++)
    { 
        int32_t l_128 = 0xC915B1D9L;
        uint16_t l_143 = 65535UL;
        p_18 = ((safe_rshift_func_int8_t_s_u((((safe_div_func_int16_t_s_s(0x385CL, ((p_16.f4.f3 , (safe_mod_func_uint32_t_u_u(((~l_66) || g_48.f3), g_21.f4.f3.f4))) , l_113))) , 0x1F803E92686379E6LL) < l_128), 5)) >= l_129[0][0]);
        if (g_115[1])
            break;
        for (g_21.f4.f5 = 0; (g_21.f4.f5 <= 19); g_21.f4.f5++)
        { 
            uint8_t l_137[5] = {0xD8L,0xD8L,0xD8L,0xD8L,0xD8L};
            struct S0 l_146[4][1] = {{{0x775CB63EL,0x769FL,0x0AFF555B3299B2ADLL,0x072B36A8L,8L}},{{0x775CB63EL,0x769FL,0x0AFF555B3299B2ADLL,0x072B36A8L,8L}},{{0x775CB63EL,0x769FL,0x0AFF555B3299B2ADLL,0x072B36A8L,8L}},{{0x775CB63EL,0x769FL,0x0AFF555B3299B2ADLL,0x072B36A8L,8L}}};
            int i, j;
            if ((((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((255UL != (safe_unary_minus_func_int64_t_s(l_137[0]))), (safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((g_48.f1 , p_16.f4.f0), 0x6EL)), p_16.f4.f4)))), g_21.f4.f4)) ^ p_16.f4.f5) >= g_5))
            { 
                uint32_t l_142 = 0x8ABCB019L;
                l_142 = g_21.f4.f4;
                l_143--;
                l_146[3][0] = g_14.f3;
            }
            else
            { 
                p_18 = g_21.f3;
                if (p_20)
                    continue;
            }
            for (l_112 = 16; (l_112 < (-25)); l_112 = safe_sub_func_int8_t_s_s(l_112, 6))
            { 
                uint16_t l_152[5][3][4] = {{{1UL,0xEB17L,0UL,0UL},{0x7435L,0x7435L,0x2194L,0x7F16L},{0x7556L,0xABB1L,65535UL,7UL}},{{65535UL,7UL,1UL,65535UL},{0x7435L,7UL,0x4925L,7UL},{7UL,0xABB1L,0UL,0x7F16L}},{{65533UL,0x7435L,1UL,0UL},{0x7556L,0xEB17L,0xB3E2L,7UL},{0x7556L,1UL,1UL,0x7556L}},{{65533UL,7UL,0UL,1UL},{7UL,0xEB17L,0x4925L,0x7F16L},{0x7435L,65533UL,1UL,0x7F16L}},{{65535UL,0xEB17L,65535UL,1UL},{0x7556L,7UL,0x2194L,0x7556L},{0x7435L,1UL,0UL,7UL}}};
                int32_t l_158 = 0L;
                int i, j, k;
                p_18 = (safe_rshift_func_uint8_t_u_u(((~(l_152[2][0][0] = l_143)) ^ (safe_mul_func_uint8_t_u_u((l_143 > (((g_33 = (+(l_158 , p_16.f4.f1))) ^ p_16.f4.f3.f4) == l_146[3][0].f1)), g_21.f4.f3.f0))), l_52[1][3][0]));
            }
        }
    }
    return l_159;
}



static int8_t  func_22(uint32_t  p_23, struct S0  p_24, union U4  p_25)
{ 
    struct S0 l_43 = {0L,1UL,-1L,0UL,-7L};
    g_40 &= (g_39 ^= ((safe_div_func_int16_t_s_s((p_25.f0 , (g_21.f4.f3.f4 | (safe_mod_func_int64_t_s_s((-1L), 1L)))), p_24.f4)) && g_21.f3));
    for (p_24.f2 = (-20); (p_24.f2 > 18); p_24.f2 = safe_add_func_int16_t_s_s(p_24.f2, 9))
    { 
        l_43 = p_24;
    }
    g_48 = ((((g_14.f3.f2 >= ((safe_div_func_int8_t_s_s((p_25.f0 & 252UL), l_43.f1)) >= 0xD8F3L)) <= g_14.f0) > g_21.f4.f3.f4) , p_24);
    return g_21.f1;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3.f0, "g_14.f3.f0", print_hash_value);
    transparent_crc(g_14.f3.f1, "g_14.f3.f1", print_hash_value);
    transparent_crc(g_14.f3.f2, "g_14.f3.f2", print_hash_value);
    transparent_crc(g_14.f3.f3, "g_14.f3.f3", print_hash_value);
    transparent_crc(g_14.f3.f4, "g_14.f3.f4", print_hash_value);
    transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
    transparent_crc(g_14.f5, "g_14.f5", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_21.f4.f0, "g_21.f4.f0", print_hash_value);
    transparent_crc(g_21.f4.f1, "g_21.f4.f1", print_hash_value);
    transparent_crc(g_21.f4.f2, "g_21.f4.f2", print_hash_value);
    transparent_crc(g_21.f4.f3.f0, "g_21.f4.f3.f0", print_hash_value);
    transparent_crc(g_21.f4.f3.f1, "g_21.f4.f3.f1", print_hash_value);
    transparent_crc(g_21.f4.f3.f2, "g_21.f4.f3.f2", print_hash_value);
    transparent_crc(g_21.f4.f3.f3, "g_21.f4.f3.f3", print_hash_value);
    transparent_crc(g_21.f4.f3.f4, "g_21.f4.f3.f4", print_hash_value);
    transparent_crc(g_21.f4.f4, "g_21.f4.f4", print_hash_value);
    transparent_crc(g_21.f4.f5, "g_21.f4.f5", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_48.f4, "g_48.f4", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);

    }
    transparent_crc(g_116, "g_116", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
