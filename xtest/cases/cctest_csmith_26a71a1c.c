// SPDX-License-Identifier: MIT
// cctest_csmith_26a71a1c.c --- cctest case csmith_26a71a1c (csmith seed 648485404)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa4d9df1c */

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

// Options:   -s 648485404 -o /tmp/csmith_gen_grp0c057/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   const int16_t  f1;
   const uint32_t  f2;
   const uint8_t  f3;
   int64_t  f4;
};

struct S1 {
   int8_t  f0;
   const struct S0  f1;
   const int8_t  f2;
   struct S0  f3;
   const int32_t  f4;
   uint64_t  f5;
};

struct S2 {
   const uint32_t  f0;
   uint8_t  f1;
   int32_t  f2;
   int32_t  f3;
   int64_t  f4;
   uint8_t  f5;
};

union U3 {
   uint32_t  f0;
};


static struct S0 g_4 = {0xC25BFC88EB987642LL,1L,0x8591B68DL,0xE2L,0L};
static union U3 g_15 = {1UL};
static int32_t g_17 = (-5L);
static int32_t g_20 = 1L;
static uint32_t g_21 = 1UL;
static int32_t g_25 = 0x5DF1563CL;
static struct S1 g_42 = {0L,{0xB7A7919EE48480ADLL,0x4ECBL,1UL,1UL,0xFCCBB28B9DDA2685LL},0x07L,{0x39616D9CD53D6C1CLL,0x26A5L,0UL,246UL,4L},0x97682755L,0xCA9972037C870D18LL};
static int32_t g_49 = (-4L);
static int32_t g_50 = 0x145A4F90L;
static int32_t g_51 = 0x77275A21L;
static uint16_t g_53[2][1] = {{0UL},{0UL}};
static int8_t g_58 = 0L;
static int16_t g_63 = 0x6D9AL;
static int32_t g_70[2][1] = {{0xB5AB84A4L},{0xB5AB84A4L}};
static struct S2 g_95 = {0xB202198CL,0x01L,0x989475B2L,0x4B4BCE18L,0x90175C14C0543149LL,1UL};



static const uint8_t  func_1(void);
static uint64_t  func_10(uint8_t  p_11, union U3  p_12, struct S2  p_13, uint8_t  p_14);
static uint64_t  func_26(uint8_t  p_27, int8_t  p_28, uint16_t  p_29);
static uint8_t  func_30(const struct S1  p_31, const int64_t  p_32, struct S1  p_33, struct S0  p_34);




static const uint8_t  func_1(void)
{ 
    uint32_t l_7[5][1] = {{18446744073709551610UL},{18446744073709551612UL},{18446744073709551610UL},{18446744073709551612UL},{18446744073709551610UL}};
    struct S2 l_16 = {0xEAE21516L,0xFFL,0xCAA5D732L,4L,0x237F4A7D2AE857B1LL,0x09L};
    uint32_t l_38 = 1UL;
    int i, j;
    if ((safe_rshift_func_uint16_t_u_s(((g_4 , (g_4.f0 = (safe_lshift_func_int8_t_s_u(l_7[0][0], g_4.f4)))) || (((safe_sub_func_uint16_t_u_u((func_10(l_7[0][0], g_15, l_16, l_7[0][0]) > g_4.f2), g_4.f4)) && 0x95674643L) , 0UL)), 8)))
    { 
        uint16_t l_24 = 3UL;
        const struct S1 l_35 = {0x4DL,{0UL,0x0095L,1UL,1UL,1L},4L,{8UL,2L,1UL,3UL,7L},4L,18446744073709551608UL};
        int32_t l_41 = 0x5FC87C03L;
        g_25 = l_24;
        if ((func_26(func_30(l_35, ((((safe_rshift_func_int8_t_s_u((l_38 = 0x24L), (safe_div_func_int8_t_s_s(((l_41 = (l_35.f0 && l_16.f5)) < g_4.f1), 0xA2L)))) == l_35.f3.f2) != 1UL) < l_7[0][0]), g_42, l_35.f1), l_16.f2, l_16.f0) , 0xFFB97BFFL))
        { 
            const int64_t l_123[5][5] = {{0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL},{1L,1L,1L,1L,1L},{0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL},{1L,1L,1L,1L,1L},{0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL,0x89284F4F27BABB6ELL}};
            int32_t l_124 = 5L;
            int i, j;
lbl_126:
            for (g_50 = 0; (g_50 > 28); g_50++)
            { 
                const uint64_t l_125 = 0x427D2546FF5C8C88LL;
                g_70[1][0] = l_123[2][1];
                if (g_42.f2)
                    goto lbl_126;
                l_124 = g_42.f0;
                return l_125;
            }
            for (l_24 = 24; (l_24 == 40); l_24 = safe_add_func_int64_t_s_s(l_24, 3))
            { 
                int8_t l_143 = 5L;
                g_70[1][0] = (safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0UL, (((((((g_17 = (((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((l_41 = g_42.f1.f4), g_17)) <= (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((g_25 , l_16.f2), g_42.f1.f2)), l_143))), l_35.f1.f4)) , (-1L)) , g_42.f5)) , 0xD6L) ^ 1L) > l_16.f4) <= 0xAC4BFEEEL) | 0x53C7L) == l_35.f1.f0))), g_4.f4)) && l_143), 0xDB76L));
                if (g_95.f1)
                    break;
            }
            for (g_49 = 0; (g_49 >= 0); g_49 -= 1)
            { 
                int32_t l_146 = 7L;
                l_146 &= (g_95.f2 = (safe_lshift_func_int8_t_s_s(g_42.f1.f0, 5)));
            }
        }
        else
        { 
            uint8_t l_154 = 0x0BL;
            l_41 = ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((g_4.f0 = (safe_mul_func_int16_t_s_s(7L, 0xAD4DL))), l_154)), 2)))) != (safe_mul_func_uint16_t_u_u(l_38, l_35.f3.f2)));
        }
    }
    else
    { 
        return g_4.f1;
    }
    return l_16.f2;
}



static uint64_t  func_10(uint8_t  p_11, union U3  p_12, struct S2  p_13, uint8_t  p_14)
{ 
    g_17 |= 0L;
    for (g_15.f0 = (-6); (g_15.f0 != 54); g_15.f0 = safe_add_func_int32_t_s_s(g_15.f0, 5))
    { 
        g_20 = p_14;
    }
    g_21--;
    return p_13.f1;
}



static uint64_t  func_26(uint8_t  p_27, int8_t  p_28, uint16_t  p_29)
{ 
    int64_t l_45[5];
    union U3 l_46 = {0x3C07AF8EL};
    int32_t l_52[2][1][2];
    int32_t l_119 = 0L;
    int32_t l_120 = (-1L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_45[i] = 9L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_52[i][j][k] = 0L;
        }
    }
    if (((~65534UL) <= (((l_45[3] > ((l_46 , ((((((safe_div_func_int16_t_s_s((g_49 = l_45[3]), (-1L))) | l_45[3]) < g_4.f0) && g_17) , l_46.f0) >= g_4.f0)) > g_42.f3.f1)) | 0xAF45L) , p_28)))
    { 
        uint64_t l_57 = 18446744073709551607UL;
        --g_53[1][0];
        g_58 = (0x31468BD1E8AE57A5LL ^ (!l_57));
    }
    else
    { 
lbl_64:
        for (g_4.f0 = (-18); (g_4.f0 == 23); ++g_4.f0)
        { 
            return p_28;
        }
        for (g_21 = (-14); (g_21 > 42); g_21 = safe_add_func_int32_t_s_s(g_21, 1))
        { 
            g_63 = 1L;
            if (p_27)
                break;
        }
        if (l_46.f0)
            goto lbl_64;
    }
    if (l_45[3])
    { 
        uint64_t l_80 = 1UL;
        int32_t l_99 = (-1L);
        if (g_25)
        { 
            int32_t l_94 = 0x25790E88L;
            g_70[1][0] = (safe_sub_func_int32_t_s_s(((l_52[1][0][1] ^ (p_27 <= (p_29 = (safe_unary_minus_func_int32_t_s(0L))))) && ((g_58 = p_29) ^ l_52[1][0][1])), (-2L)));
            g_70[0][0] &= p_28;
            if ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(g_4.f4, (g_42.f1.f0 <= (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((+2L) && ((0x74L > p_27) < l_80)), 1L)) || g_42.f1.f1), g_49))))) || g_53[0][0]), 1)))
            { 
                return p_27;
            }
            else
            { 
                l_94 = (safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((0xB0DFAB60L > (safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(0x4591L, (safe_unary_minus_func_int16_t_s((-3L))))) > (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((7L >= g_50) || g_70[1][0]), 1)), l_80))), 18446744073709551611UL))) , g_53[1][0]), p_27)) == g_25), p_28));
            }
        }
        else
        { 
            uint32_t l_100 = 1UL;
            g_70[0][0] &= ((g_95 , 0xD63BEFA01E2AC5FALL) | l_45[1]);
            for (g_50 = 0; (g_50 < 5); ++g_50)
            { 
                uint64_t l_98 = 0xF0FE1AEB3B6C1D07LL;
                return l_98;
            }
            for (g_42.f0 = 4; (g_42.f0 >= 0); g_42.f0 -= 1)
            { 
                l_100 = (l_99 = p_27);
            }
        }
    }
    else
    { 
        struct S0 l_101 = {0UL,9L,18446744073709551615UL,3UL,0L};
        int32_t l_104 = 8L;
        l_52[1][0][1] = (g_42.f1.f3 != (0xB4FBL > (((l_104 = ((l_101 , (safe_lshift_func_uint8_t_u_u((p_28 , 0xBAL), p_28))) && g_63)) < 0x8455L) , 0x7B49L)));
        return g_42.f3.f4;
    }
    g_95.f2 = ((safe_mul_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((l_120 = (safe_rshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s(l_52[1][0][1], ((l_119 |= ((p_27 , (g_15 , (safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(l_52[1][0][1], p_29)) != g_42.f3.f3), l_52[1][0][1])) <= l_52[1][0][0]) || p_28), g_42.f1.f1)))) <= l_52[0][0][0])) >= g_42.f1.f4))) == 0x24BCL) && 0xFA46B62CL), 8))) ^ l_52[1][0][1]), 1L)) != 1UL), 0L)) & p_29);
    return p_28;
}



static uint8_t  func_30(const struct S1  p_31, const int64_t  p_32, struct S1  p_33, struct S0  p_34)
{ 
    uint32_t l_43 = 1UL;
    return l_43;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    transparent_crc(g_4.f3, "g_4.f3", print_hash_value);
    transparent_crc(g_4.f4, "g_4.f4", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1.f0, "g_42.f1.f0", print_hash_value);
    transparent_crc(g_42.f1.f1, "g_42.f1.f1", print_hash_value);
    transparent_crc(g_42.f1.f2, "g_42.f1.f2", print_hash_value);
    transparent_crc(g_42.f1.f3, "g_42.f1.f3", print_hash_value);
    transparent_crc(g_42.f1.f4, "g_42.f1.f4", print_hash_value);
    transparent_crc(g_42.f2, "g_42.f2", print_hash_value);
    transparent_crc(g_42.f3.f0, "g_42.f3.f0", print_hash_value);
    transparent_crc(g_42.f3.f1, "g_42.f3.f1", print_hash_value);
    transparent_crc(g_42.f3.f2, "g_42.f3.f2", print_hash_value);
    transparent_crc(g_42.f3.f3, "g_42.f3.f3", print_hash_value);
    transparent_crc(g_42.f3.f4, "g_42.f3.f4", print_hash_value);
    transparent_crc(g_42.f4, "g_42.f4", print_hash_value);
    transparent_crc(g_42.f5, "g_42.f5", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_53[i][j], "g_53[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_95.f2, "g_95.f2", print_hash_value);
    transparent_crc(g_95.f3, "g_95.f3", print_hash_value);
    transparent_crc(g_95.f4, "g_95.f4", print_hash_value);
    transparent_crc(g_95.f5, "g_95.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
