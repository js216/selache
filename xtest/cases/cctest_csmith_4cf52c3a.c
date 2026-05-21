// SPDX-License-Identifier: MIT
// cctest_csmith_4cf52c3a.c --- cctest case csmith_4cf52c3a (csmith seed 1291136058)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf5fddc2e */

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

// Options:   -s 1291136058 -o /tmp/csmith_gen_omc4v1nj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int8_t  f3;
};

union U1 {
   uint32_t  f0;
   uint16_t  f1;
};


static uint8_t g_2 = 0UL;
static int8_t g_11 = 0x53L;
static int8_t g_12 = 0L;
static int64_t g_13 = 0x7689A5A40F2FDAD5LL;
static int64_t g_16 = 0x9ED890FC520EA0C8LL;
static uint64_t g_19 = 18446744073709551615UL;
static int32_t g_22 = 0L;
static int32_t g_26 = (-1L);
static int32_t g_27 = 0x01516EA3L;
static uint16_t g_28 = 2UL;
static uint64_t g_99 = 0x01DA63D7FDF8BF21LL;
static int64_t g_102 = 0xA5982ED821F8E690LL;
static struct S0 g_130 = {0xD388EEC8L,0x6690B97FL,0xB89B2A2CL,0x73L};
static int64_t g_138 = 0x94C56F68EFB8CC5ELL;
static uint32_t g_145 = 0UL;
static int8_t g_164 = 0x8CL;
static uint32_t g_199 = 18446744073709551615UL;



static int16_t  func_1(void);
static int32_t  func_3(int64_t  p_4);
static int32_t  func_36(int32_t  p_37, uint32_t  p_38, int32_t  p_39, const uint64_t  p_40, uint32_t  p_41);
static int64_t  func_45(int32_t  p_46, uint64_t  p_47, int16_t  p_48, int32_t  p_49);




static int16_t  func_1(void)
{ 
    int64_t l_165 = 4L;
    int32_t l_166[4];
    int32_t l_177 = (-5L);
    int32_t l_181 = (-1L);
    int32_t l_217 = 2L;
    int32_t l_218 = 1L;
    int i;
    for (i = 0; i < 4; i++)
        l_166[i] = 1L;
    if (g_2)
    { 
        uint32_t l_5 = 1UL;
        int32_t l_149 = 0x3DC7C683L;
        int32_t l_176 = 9L;
lbl_180:
        l_149 = func_3(l_5);
        if (l_5)
        { 
            int32_t l_160[2][4][1] = {{{1L},{0x621B44B6L},{1L},{0x621B44B6L}},{{1L},{0x621B44B6L},{1L},{0x621B44B6L}}};
            int32_t l_163 = 5L;
            const int64_t l_172 = 0x2DAB2D383E86663ALL;
            int32_t l_175 = (-1L);
            int i, j, k;
            l_166[3] &= (9UL != ((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((((l_160[0][2][0] = g_27) & (g_164 = (safe_lshift_func_uint8_t_u_s((g_13 && l_163), 4)))) | g_130.f3), l_165)), 0x82BFL)), l_165)) || 0x81L), g_145)) , g_164) < g_138), g_27)) == g_11));
            l_177 &= ((!((safe_add_func_int64_t_s_s(0xA630FA3D1AAD7911LL, (((0x093970EBL != ((safe_add_func_int8_t_s_s(l_172, (l_149 = (((g_22 = (((((((safe_mul_func_uint8_t_u_u((((9L && 0xE6L) < g_13) != 0x52AAL), g_130.f1)) , l_166[0]) != 0x2754L) != l_160[0][1][0]) , 9UL) , 0xF38BL) < l_175)) || 0xFF1E6A96L) , g_138)))) > l_175)) == l_176) ^ l_160[0][2][0]))) | 248UL)) && (-1L));
            for (l_165 = (-5); (l_165 != 23); l_165++)
            { 
                if (l_165)
                    goto lbl_180;
                if (l_181)
                    break;
                if (l_149)
                    break;
            }
        }
        else
        { 
            for (g_130.f3 = 0; (g_130.f3 >= 23); g_130.f3 = safe_add_func_int64_t_s_s(g_130.f3, 2))
            { 
                int32_t l_186 = 0x952DED4FL;
                uint32_t l_193 = 0x4A3EB8F9L;
                g_130.f2 = (safe_mod_func_int32_t_s_s(((l_149 && ((l_186 &= (l_166[3] > ((g_16 |= g_164) == (g_99 = 0UL)))) == 0x639792C5L)) || 9UL), l_166[3]));
                l_181 ^= ((safe_div_func_int32_t_s_s(g_28, l_176)) || (safe_mul_func_uint16_t_u_u((g_19 ^ (safe_div_func_uint16_t_u_u((g_13 == l_193), g_22))), l_5)));
                l_186 = (safe_add_func_int8_t_s_s(l_149, (-1L)));
            }
            for (g_2 = 0; (g_2 == 45); g_2++)
            { 
                const int32_t l_198 = (-7L);
                g_27 = 6L;
                if (l_198)
                    break;
            }
        }
    }
    else
    { 
        return g_130.f3;
    }
    g_199--;
    g_26 = ((l_166[3] == (l_218 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((+((safe_lshift_func_uint8_t_u_s(l_165, 3)) & ((l_217 = (((g_11 && (safe_add_func_int8_t_s_s((l_181 = (g_138 <= 0xAC88D01BA1C0775BLL)), g_19))) || 1L) & l_165)) || 0x4ECCL))), 5)) <= l_166[3]), 0L)), l_166[0])) , 65530UL) & l_166[3]), l_165)) & 255UL), g_19)))) || g_11);
    return g_130.f1;
}



static int32_t  func_3(int64_t  p_4)
{ 
    int32_t l_10[3];
    int16_t l_35 = 7L;
    uint64_t l_42 = 0xBAD479EA4087B332LL;
    uint8_t l_148 = 0xE9L;
    int i;
    for (i = 0; i < 3; i++)
        l_10[i] = 0x37182ABBL;
    for (p_4 = 0; (p_4 == (-30)); p_4--)
    { 
        int64_t l_14 = (-1L);
        int32_t l_18 = 0x92F20920L;
        int32_t l_24[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        union U1 l_125[2][4][5] = {{{{0xF426174FL},{1UL},{0xF426174FL},{0x9C2EEFDDL},{0x9C2EEFDDL}},{{4294967295UL},{0x90C02A0DL},{4294967295UL},{0UL},{0UL}},{{0xF426174FL},{1UL},{0xF426174FL},{0x9C2EEFDDL},{0x9C2EEFDDL}},{{4294967295UL},{0x90C02A0DL},{4294967295UL},{0UL},{0UL}}},{{{0xF426174FL},{1UL},{0xF426174FL},{0x9C2EEFDDL},{0x9C2EEFDDL}},{{4294967295UL},{0x90C02A0DL},{4294967295UL},{0UL},{0UL}},{{0xF426174FL},{1UL},{0xF426174FL},{0xF426174FL},{0xF426174FL}},{{0x884173B1L},{3UL},{0x884173B1L},{4294967295UL},{4294967295UL}}}};
        int i, j, k;
        for (g_2 = 0; (g_2 == 27); g_2 = safe_add_func_int64_t_s_s(g_2, 1))
        { 
            int64_t l_15[5][5][4] = {{{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L}},{{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L}},{{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L}},{{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L}},{{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L},{0x07383CC47D1AFD06LL,0L,0x07383CC47D1AFD06LL,0L}}};
            int32_t l_17 = 0L;
            int32_t l_23 = 2L;
            int32_t l_25 = 0L;
            int i, j, k;
            ++g_19;
            --g_28;
            for (l_17 = 0; (l_17 != (-18)); l_17--)
            { 
                uint32_t l_54[3][3] = {{9UL,5UL,9UL},{9UL,5UL,9UL},{9UL,5UL,9UL}};
                int32_t l_55[3];
                int32_t l_85[1];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_55[i] = 0xA59C2D16L;
                for (i = 0; i < 1; i++)
                    l_85[i] = (-9L);
                l_23 = (p_4 , ((safe_mul_func_int8_t_s_s(((4294967295UL <= l_35) , 9L), 0xC8L)) | g_26));
                g_102 &= func_36(p_4, (l_42 = (5UL & 65535UL)), (((l_85[0] = ((safe_mod_func_int64_t_s_s(func_45((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_54[2][0], 4294967295UL)), l_18)), l_55[0], g_2, l_17), g_19)) , 0x0978L)) != l_24[2]) < g_19), p_4, g_2);
            }
        }
        if ((l_10[1] = 6L))
        { 
            union U1 l_116 = {4294967286UL};
            g_26 = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((((safe_add_func_int64_t_s_s(0xBD3C8015B33599DBLL, ((l_116 , l_42) <= (g_27 &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((0xF4L < g_28), 5)), 0L)))))) >= g_12) || l_14) <= 3L), l_116.f1)) <= l_116.f1), l_116.f0)), l_116.f1)))), 14)), 1L));
        }
        else
        { 
            int16_t l_140 = 0x860EL;
            int32_t l_143 = 6L;
            int32_t l_144 = (-1L);
            for (g_16 = (-9); (g_16 != 1); g_16 = safe_add_func_int16_t_s_s(g_16, 2))
            { 
                int32_t l_137 = 4L;
                g_27 ^= (safe_mul_func_int8_t_s_s(((l_125[0][0][2] , (safe_rshift_func_uint16_t_u_u((l_35 > (safe_sub_func_uint8_t_u_u((g_130 , ((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((safe_div_func_int16_t_s_s((((g_102 > p_4) == l_125[0][0][2].f1) == g_13), l_137)) != p_4), 18446744073709551615UL)), g_12)) , g_138)), g_13))), p_4))) <= 0x3DL), l_10[1]));
            }
            for (g_138 = 0; (g_138 <= 1); g_138 += 1)
            { 
                int32_t l_139 = 0x63E716A1L;
                int16_t l_141[2];
                int32_t l_142 = 0xA9EC0CD8L;
                int i;
                for (i = 0; i < 2; i++)
                    l_141[i] = 1L;
                ++g_145;
                return g_138;
            }
            g_130.f2 = (l_144 & g_26);
        }
        if (l_125[0][0][2].f0)
            break;
    }
    for (g_138 = 0; (g_138 <= 2); g_138 += 1)
    { 
        int i;
        return l_10[g_138];
    }
    g_22 &= (p_4 > ((l_148 <= 0xAE737D706139C8B3LL) & 0UL));
    return g_27;
}



static int32_t  func_36(int32_t  p_37, uint32_t  p_38, int32_t  p_39, const uint64_t  p_40, uint32_t  p_41)
{ 
    uint32_t l_86 = 0xABD3396AL;
    int32_t l_97 = 0L;
    int32_t l_98 = 0xA7A01C18L;
    uint16_t l_100 = 4UL;
    int32_t l_101 = (-2L);
    --l_86;
    l_101 = (safe_mul_func_uint8_t_u_u((p_41 | (g_99 &= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((l_98 ^= (l_97 &= 0x100AA352EE06DCF8LL)), p_41)), p_40)), 0UL)))), l_100));
    l_101 |= l_100;
    return l_86;
}



static int64_t  func_45(int32_t  p_46, uint64_t  p_47, int16_t  p_48, int32_t  p_49)
{ 
    int32_t l_74 = 0xF02CAA0EL;
    for (p_49 = 25; (p_49 < (-24)); p_49 = safe_sub_func_int16_t_s_s(p_49, 4))
    { 
        uint64_t l_58[1];
        int32_t l_73 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_58[i] = 0x8A97D63F7CEC7E9ALL;
        for (g_16 = 0; (g_16 >= 0); g_16 -= 1)
        { 
            int i;
            g_27 |= (safe_div_func_uint16_t_u_u(((!(safe_mul_func_int8_t_s_s((((((((((((safe_lshift_func_uint8_t_u_u(l_58[g_16], (~((l_58[g_16] || (0xCA2CDF274C111BE1LL || (safe_mod_func_uint8_t_u_u((((l_73 &= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 4)), 12))) , g_12) , p_47), 0x9AL)))) > p_49)))) > 0UL) , 0x5FL) && g_2) >= l_58[g_16]) >= l_58[g_16]) == p_48) <= l_74) <= g_12) == 0xDDA102F310E27A8DLL) || p_48), p_49))) , p_49), g_19));
            if (g_2)
                break;
        }
        g_22 |= (safe_sub_func_int64_t_s_s(1L, (safe_mod_func_int8_t_s_s((l_73 = l_73), (g_12 = (((g_26 |= l_74) , ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s(((p_46 = 0x2B3A76C1L) ^ l_74), 1L)) <= 9L) ^ l_74) , 8UL), 0xB3FDL)), 2)) , 18446744073709551608UL)) || 18446744073709551606UL))))));
    }
    return p_49;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_130.f2, "g_130.f2", print_hash_value);
    transparent_crc(g_130.f3, "g_130.f3", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
