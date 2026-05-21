// SPDX-License-Identifier: MIT
// cctest_csmith_6e4286db.c --- cctest case csmith_6e4286db (csmith seed 1849853659)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb5b5dd2c */

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

// Options:   -s 1849853659 -o /tmp/csmith_gen_q8eptvv6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int64_t  f0;
   uint64_t  f1;
   int16_t  f2;
};

struct S1 {
   uint16_t  f0;
   uint32_t  f1;
   const int32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   const int16_t  f5;
};

union U2 {
   const uint16_t  f0;
   uint8_t  f1;
   const int32_t  f2;
};

union U3 {
   struct S1  f0;
   int64_t  f1;
};


static int32_t g_3 = (-3L);
static uint8_t g_12 = 0x1CL;
static uint8_t g_50 = 255UL;
static uint8_t *g_52 = &g_50;
static int64_t g_56 = 1L;
static int32_t g_60 = (-1L);
static int32_t g_62 = 0x12EF6116L;
static uint32_t g_66 = 0xB87E338AL;
static int64_t g_74 = 1L;
static uint8_t g_75 = 0xB5L;
static int32_t *g_80 = &g_62;
static uint64_t g_113[1] = {0x7868D4C3CCEA890DLL};
static struct S0 g_130 = {0x621C59027B06419DLL,4UL,0x1A19L};
static int8_t g_141[3] = {0L,0L,0L};
static uint32_t g_142 = 0xF53D4211L;
static union U3 g_147 = {{0xCA4CL,0xA096ABDEL,0xDBEFC3FFL,4294967291UL,1UL,-4L}};
static int32_t g_157 = 0L;
static int32_t g_213 = 0x0FFA4CDDL;
static int64_t g_215 = 0x0427E704F44F0F88LL;
static int32_t g_217 = 0x1839EC28L;
static uint64_t g_218 = 18446744073709551613UL;
static union U2 g_227 = {0x73A8L};
static int8_t **g_257 = (void*)0;
static int64_t *g_268[3][2] = {{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74}};
static int64_t **g_267 = &g_268[1][0];
static union U2 g_273[4] = {{0x692BL},{0x692BL},{0x692BL},{0x692BL}};
static union U2 * const g_272 = &g_273[3];
static union U2 * const *g_271 = &g_272;
static union U2 * const **g_270 = &g_271;
static uint32_t g_285 = 2UL;
static int16_t g_289 = 0L;
static int32_t g_290 = 0xC618C9A2L;
static int16_t g_292 = 0x190CL;
static uint16_t g_294 = 0x1678L;
static uint32_t g_297 = 1UL;
static uint64_t g_312 = 0UL;
static int16_t g_382 = 8L;
static int32_t g_385[6][6][5] = {{{0xDBCD6CEAL,0xDBCD6CEAL,(-1L),4L,4L},{0x41CEBFF5L,0xDBCD6CEAL,0L,(-10L),(-1L)},{0L,0xDBCD6CEAL,4L,0xA395CD1FL,0x10185259L},{0x4DC46B28L,0xDBCD6CEAL,0x10185259L,5L,0L},{(-1L),0xDBCD6CEAL,0x1A3F58CAL,0x8D8AB216L,0x1A3F58CAL},{0xDBCD6CEAL,0xDBCD6CEAL,(-1L),4L,4L}},{{0x41CEBFF5L,0xDBCD6CEAL,(-6L),1L,0xFF5B612CL},{0x10185259L,(-1L),1L,0L,(-5L)},{4L,(-1L),(-5L),1L,(-6L)},{0L,(-1L),0xB6208748L,0L,0xB6208748L},{(-1L),(-1L),0xFF5B612CL,(-2L),1L},{0x1A3F58CAL,(-1L),(-6L),1L,0xFF5B612CL}},{{0x10185259L,(-1L),1L,0L,(-5L)},{4L,(-1L),(-5L),1L,(-6L)},{0L,(-1L),0xB6208748L,0L,0xB6208748L},{(-1L),(-1L),0xFF5B612CL,(-2L),1L},{0x1A3F58CAL,(-1L),(-6L),1L,0xFF5B612CL},{0x10185259L,(-1L),1L,0L,(-5L)}},{{4L,(-1L),(-5L),1L,(-6L)},{0L,(-1L),0xB6208748L,0L,0xB6208748L},{(-1L),(-1L),0xFF5B612CL,(-2L),1L},{0x1A3F58CAL,(-1L),(-6L),1L,0xFF5B612CL},{0x10185259L,(-1L),1L,0L,(-5L)},{4L,(-1L),(-5L),1L,(-6L)}},{{0L,(-1L),0xB6208748L,0L,0xB6208748L},{(-1L),(-1L),0xFF5B612CL,(-2L),1L},{0x1A3F58CAL,(-1L),(-6L),1L,0xFF5B612CL},{0x10185259L,(-1L),1L,0L,(-5L)},{4L,(-1L),(-5L),1L,(-6L)},{0L,(-1L),0xB6208748L,0L,0xB6208748L}},{{(-1L),(-1L),0xFF5B612CL,(-2L),1L},{0x1A3F58CAL,(-1L),(-6L),1L,0xFF5B612CL},{0x10185259L,(-1L),1L,0L,(-5L)},{4L,(-1L),(-5L),1L,(-6L)},{0L,(-1L),0xB6208748L,0L,0xB6208748L},{(-1L),(-1L),0xFF5B612CL,(-2L),1L}}};
static uint32_t *g_413 = (void*)0;
static const int16_t g_419 = (-1L);
static struct S0 g_432[1] = {{1L,0xC48BEC329899BC3CLL,0x371DL}};
static int32_t *g_451 = &g_62;
static struct S0 g_470 = {0xDDD6CE07A3EC4B03LL,18446744073709551615UL,-7L};
static struct S0 *g_469 = &g_470;
static struct S0 g_473 = {0x160B8C24812E441CLL,6UL,0xF6D7L};
static int32_t g_559[1] = {(-1L)};
static union U3 g_584 = {{0xAAF7L,0UL,4L,3UL,4294967295UL,0xDAE9L}};
static int8_t g_591 = 1L;
static struct S1 *g_610 = &g_584.f0;
static int32_t g_616 = (-1L);
static uint32_t g_636 = 3UL;
static const uint64_t *g_655 = &g_113[0];
static const uint64_t **g_654 = &g_655;
static const uint64_t ***g_653 = &g_654;
static uint64_t *g_715[3][4] = {{&g_218,&g_218,&g_113[0],&g_218},{&g_218,(void*)0,(void*)0,&g_218},{(void*)0,&g_218,(void*)0,(void*)0}};
static uint64_t **g_714 = &g_715[0][3];
static uint64_t ***g_713 = &g_714;
static uint8_t ***g_743[1] = {(void*)0};
static const int8_t g_785 = (-5L);
static const int8_t *g_784[5] = {&g_785,&g_785,&g_785,&g_785,&g_785};
static const union U3 *g_836 = &g_147;
static const union U3 **g_835 = &g_836;
static uint64_t ****g_901 = (void*)0;
static union U2 ***g_973 = (void*)0;
static int32_t g_1052 = (-1L);
static union U2 g_1078 = {0xE1E8L};
static struct S0 g_1084[2][2] = {{{1L,6UL,0L},{1L,6UL,0L}},{{1L,6UL,0L},{1L,6UL,0L}}};
static uint32_t g_1212 = 0UL;
static const uint64_t * const *g_1224[3][4][2] = {{{(void*)0,&g_655},{(void*)0,(void*)0},{&g_655,(void*)0},{(void*)0,&g_655}},{{(void*)0,(void*)0},{&g_655,(void*)0},{(void*)0,&g_655},{(void*)0,(void*)0}},{{&g_655,(void*)0},{(void*)0,&g_655},{&g_655,&g_655},{&g_655,&g_655}}};
static const uint64_t * const **g_1223 = &g_1224[1][3][1];
static const uint64_t * const ***g_1222 = &g_1223;
static int64_t g_1256 = 0xB985DDF0957E1D10LL;
static uint8_t *g_1282 = &g_273[3].f1;
static const uint16_t *g_1379 = &g_294;
static const uint16_t **g_1378 = &g_1379;
static int16_t *g_1385 = &g_130.f2;
static int16_t **g_1384 = &g_1385;
static int16_t *** const g_1383[2][3] = {{&g_1384,&g_1384,&g_1384},{&g_1384,&g_1384,&g_1384}};
static int16_t g_1454 = (-2L);
static int8_t g_1623 = 0x9DL;
static union U3 ***g_1656 = (void*)0;
static union U3 ****g_1655 = &g_1656;
static int64_t g_1732 = 0x7A71C2480AC697A5LL;
static int8_t g_1869 = (-8L);
static uint64_t ****g_1877 = &g_713;
static union U3 g_1886[5][3] = {{{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}},{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}},{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}}},{{{1UL,1UL,0x64F22B6CL,0UL,8UL,0x0659L}},{{1UL,1UL,0x64F22B6CL,0UL,8UL,0x0659L}},{{1UL,1UL,0x64F22B6CL,0UL,8UL,0x0659L}}},{{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}},{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}},{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}}},{{{1UL,1UL,0x64F22B6CL,0UL,8UL,0x0659L}},{{1UL,1UL,0x64F22B6CL,0UL,8UL,0x0659L}},{{1UL,1UL,0x64F22B6CL,0UL,8UL,0x0659L}}},{{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}},{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}},{{0xD6BDL,18446744073709551615UL,0xDBDDCAD4L,0xC2BA29A3L,5UL,-2L}}}};
static int32_t g_1901 = (-1L);
static const int8_t g_1915 = (-2L);
static int8_t ** const ***g_1981 = (void*)0;
static struct S0 g_1989 = {0L,0x00C772E325B786E3LL,0L};
static const union U2 *g_2006 = &g_1078;
static const union U2 **g_2005 = &g_2006;
static struct S1 * const g_2041 = &g_147.f0;
static int64_t g_2115 = (-10L);
static const struct S0 g_2279[3][7][4] = {{{{0x32646635DCA352F5LL,8UL,0xF497L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x32646635DCA352F5LL,8UL,0xF497L}},{{-6L,9UL,0L},{-9L,0xF2AA02D725E3DA1ELL,1L},{0xA106F14D4A0A185ALL,6UL,0x4112L},{0L,18446744073709551615UL,0xCF15L}},{{0x94F8DA12F7E8F0B8LL,0xCEE2F96E446F6918LL,0x990EL},{-1L,0xB4687D50B3FAAC7DLL,-1L},{0L,18446744073709551615UL,0xCF15L},{1L,9UL,0L}},{{0L,18446744073709551615UL,0xCF15L},{1L,9UL,0L},{0x5E01E494C05B71E5LL,0x5C1BFA23490A3EB4LL,1L},{1L,9UL,0L}},{{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{-1L,0xB4687D50B3FAAC7DLL,-1L},{-7L,18446744073709551615UL,-4L},{0L,18446744073709551615UL,0xCF15L}},{{0x15F96545FCD3875BLL,0x9CC74D4C1FB1C6D6LL,-1L},{-9L,0xF2AA02D725E3DA1ELL,1L},{1L,9UL,0L},{0x32646635DCA352F5LL,8UL,0xF497L}},{{-7L,18446744073709551615UL,-4L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L}}},{{{-7L,18446744073709551615UL,-4L},{-7L,18446744073709551615UL,-4L},{1L,9UL,0L},{-6L,9UL,0L}},{{0x15F96545FCD3875BLL,0x9CC74D4C1FB1C6D6LL,-1L},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L},{-7L,18446744073709551615UL,-4L},{-9L,0xF2AA02D725E3DA1ELL,1L}},{{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x94F8DA12F7E8F0B8LL,0xCEE2F96E446F6918LL,0x990EL},{0x5E01E494C05B71E5LL,0x5C1BFA23490A3EB4LL,1L},{-7L,18446744073709551615UL,-4L}},{{0L,18446744073709551615UL,0xCF15L},{0x94F8DA12F7E8F0B8LL,0xCEE2F96E446F6918LL,0x990EL},{0L,18446744073709551615UL,0xCF15L},{-9L,0xF2AA02D725E3DA1ELL,1L}},{{0x94F8DA12F7E8F0B8LL,0xCEE2F96E446F6918LL,0x990EL},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L},{0xA106F14D4A0A185ALL,6UL,0x4112L},{-6L,9UL,0L}},{{-6L,9UL,0L},{-7L,18446744073709551615UL,-4L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L}},{{0x32646635DCA352F5LL,8UL,0xF497L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x32646635DCA352F5LL,8UL,0xF497L}}},{{{-6L,9UL,0L},{-9L,0xF2AA02D725E3DA1ELL,1L},{0xA106F14D4A0A185ALL,6UL,0x4112L},{0L,18446744073709551615UL,0xCF15L}},{{0x94F8DA12F7E8F0B8LL,0xCEE2F96E446F6918LL,0x990EL},{-1L,0xB4687D50B3FAAC7DLL,-1L},{0L,18446744073709551615UL,0xCF15L},{1L,9UL,0L}},{{0L,18446744073709551615UL,0xCF15L},{1L,9UL,0L},{0x5E01E494C05B71E5LL,0x5C1BFA23490A3EB4LL,1L},{1L,9UL,0L}},{{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{-1L,0xB4687D50B3FAAC7DLL,-1L},{-7L,18446744073709551615UL,-4L},{0L,18446744073709551615UL,0xCF15L}},{{0x15F96545FCD3875BLL,0x9CC74D4C1FB1C6D6LL,-1L},{-9L,0xF2AA02D725E3DA1ELL,1L},{1L,9UL,0L},{0x32646635DCA352F5LL,8UL,0xF497L}},{{-7L,18446744073709551615UL,-4L},{0x626A049B235F5CB3LL,18446744073709551614UL,1L},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L},{0x7F1F3587005F1C4FLL,18446744073709551615UL,5L}},{{-7L,18446744073709551615UL,-4L},{-7L,18446744073709551615UL,-4L},{1L,9UL,0L},{-6L,9UL,0L}}}};
static const struct S0 * const g_2278 = &g_2279[2][2][2];
static const struct S0 * const *g_2277 = &g_2278;
static struct S0 g_2301[1][4][4] = {{{{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L}},{{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L}},{{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L}},{{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L},{1L,18446744073709551615UL,-6L}}}};
static uint32_t g_2313 = 4294967291UL;
static int64_t ***g_2361 = &g_267;
static struct S1 **g_2382 = &g_610;
static struct S1 ***g_2381 = &g_2382;
static struct S0 g_2517 = {-9L,0x8351B1CD861BEFA6LL,0L};
static uint8_t *g_2650 = (void*)0;
static uint8_t g_2723 = 0x27L;
static uint8_t g_2732[3] = {1UL,1UL,1UL};
static union U3 *g_2789[2] = {&g_584,&g_584};
static union U3 **g_2788[7] = {&g_2789[1],&g_2789[1],&g_2789[1],&g_2789[1],&g_2789[1],&g_2789[1],&g_2789[1]};
static union U3 ** const *g_2787 = &g_2788[5];
static union U3 ** const **g_2786[6] = {&g_2787,&g_2787,&g_2787,&g_2787,&g_2787,&g_2787};
static int8_t ***g_2803 = &g_257;
static int8_t ****g_2802 = &g_2803;
static int8_t *****g_2860[5] = {&g_2802,&g_2802,&g_2802,&g_2802,&g_2802};
static int8_t g_3077 = 0L;
static uint32_t g_3111 = 18446744073709551615UL;
static int8_t g_3152 = (-1L);
static union U2 ****g_3163[3][2] = {{&g_973,&g_973},{&g_973,&g_973},{&g_973,&g_973}};
static int32_t g_3230[6][2] = {{(-1L),0xB1C97792L},{0x98C4EC1AL,0x98C4EC1AL},{0x98C4EC1AL,0xB1C97792L},{(-1L),3L},{0xB1C97792L,3L},{(-1L),0xB1C97792L}};
static uint64_t g_3307 = 7UL;
static int64_t g_3396 = 0x0C258B1425478945LL;
static int64_t g_3399 = (-2L);
static int64_t g_3402 = (-10L);
static int64_t * const g_3401 = &g_3402;
static int64_t * const *g_3400 = &g_3401;
static int64_t * const g_3404 = (void*)0;
static int64_t * const *g_3403 = &g_3404;
static union U3 *** const *g_3417[3] = {&g_1656,&g_1656,&g_1656};
static union U3 *** const **g_3416 = &g_3417[1];
static int32_t * const **g_3425 = (void*)0;
static int32_t *g_3429 = &g_3230[2][0];
static int32_t **g_3428[1][1][5] = {{{&g_3429,&g_3429,&g_3429,&g_3429,&g_3429}}};
static int32_t ***g_3427[6][2][2] = {{{&g_3428[0][0][3],&g_3428[0][0][3]},{&g_3428[0][0][3],&g_3428[0][0][3]}},{{&g_3428[0][0][3],&g_3428[0][0][3]},{&g_3428[0][0][3],&g_3428[0][0][3]}},{{&g_3428[0][0][3],&g_3428[0][0][3]},{&g_3428[0][0][3],&g_3428[0][0][3]}},{{&g_3428[0][0][3],&g_3428[0][0][3]},{&g_3428[0][0][3],&g_3428[0][0][3]}},{{&g_3428[0][0][3],&g_3428[0][0][3]},{&g_3428[0][0][3],&g_3428[0][0][3]}},{{&g_3428[0][0][3],&g_3428[0][0][3]},{&g_3428[0][0][3],&g_3428[0][0][3]}}};
static int32_t g_3493[2] = {1L,1L};
static uint64_t g_3510 = 0x2B50AC9354810EE3LL;



static int8_t  func_1(void);
static int16_t  func_7(const uint16_t  p_8);
static int64_t  func_14(uint16_t  p_15, uint8_t * p_16);
static uint8_t * func_17(uint8_t  p_18);
static int64_t  func_21(uint8_t * p_22, uint8_t * p_23, uint8_t  p_24, const uint16_t  p_25, const int8_t  p_26);
static uint8_t * func_27(const union U2  p_28);
static union U2  func_29(int16_t  p_30);
static const uint32_t  func_44(uint32_t  p_45);




static int8_t  func_1(void)
{ 
    int32_t l_2[6] = {0L,0xFA20BD03L,0L,0L,0xFA20BD03L,0L};
    union U2 l_3271 = {65531UL};
    int32_t *l_3495 = &g_385[0][5][2];
    int32_t *l_3496 = &g_385[4][4][1];
    int32_t *l_3497 = (void*)0;
    int32_t *l_3498 = &g_385[0][5][2];
    int32_t l_3499 = (-5L);
    int32_t *l_3500 = (void*)0;
    int32_t *l_3501 = &g_616;
    int32_t *l_3502 = &g_1052;
    int32_t *l_3503 = (void*)0;
    int32_t *l_3504 = &g_1052;
    int32_t *l_3505[6] = {&g_616,&g_616,&g_616,&g_616,&g_616,&g_616};
    uint32_t l_3506 = 0x9B95DCBCL;
    int32_t l_3509 = (-6L);
    int64_t l_3515 = 0x1D2715C65F9F70A3LL;
    int64_t l_3516 = 0x1BFC46884DB389F4LL;
    int32_t l_3517[1][3];
    uint8_t l_3518 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_3517[i][j] = 0xC6E6D9F5L;
    }
    for (g_3 = 5; (g_3 >= 1); g_3 -= 1)
    { 
        uint8_t *l_11[5][6] = {{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12}};
        int32_t l_13 = 5L;
        int8_t *l_3272[5];
        int32_t l_3273 = (-3L);
        int8_t l_3490[6];
        int32_t *l_3491 = (void*)0;
        int32_t *l_3492 = &g_3493[0];
        int i, j;
        for (i = 0; i < 5; i++)
            l_3272[i] = &g_3077;
        for (i = 0; i < 6; i++)
            l_3490[i] = 0x82L;
    }
    ++l_3506;
    --g_3510;
    for (g_584.f1 = 27; (g_584.f1 >= (-14)); g_584.f1 = safe_sub_func_int64_t_s_s(g_584.f1, 3))
    { 
        (*g_2382) = (**g_2381);
    }
    l_3518++;
    return (*l_3498);
}



static int16_t  func_7(const uint16_t  p_8)
{ 
    uint32_t l_3282 = 0x5D93E39BL;
    uint64_t ****l_3319 = &g_713;
    int8_t *l_3330 = &g_3077;
    int32_t l_3332 = 0x12C05EBDL;
    int32_t l_3385 = 1L;
    int64_t * const l_3395[1] = {&g_3396};
    int64_t * const *l_3394 = &l_3395[0];
    union U2 *l_3405 = &g_227;
    int32_t l_3441[5];
    uint8_t **l_3460 = (void*)0;
    uint8_t ***l_3459[5];
    struct S1 l_3481 = {0xB4FDL,18446744073709551615UL,0x8BCDAE63L,0xF65C23A4L,0xF764A123L,0xA942L};
    uint8_t l_3482 = 0x0EL;
    int32_t *l_3483[4][6][2] = {{{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332}},{{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332}},{{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332}},{{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332},{&g_1052,&l_3332}}};
    int8_t l_3484 = 1L;
    int8_t l_3485[6] = {0x60L,0x60L,0x6FL,0x60L,0x60L,0x6FL};
    int16_t l_3486 = 0x2204L;
    uint16_t l_3487 = 0x0908L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_3441[i] = 1L;
    for (i = 0; i < 5; i++)
        l_3459[i] = &l_3460;
    for (g_2313 = 0; (g_2313 <= 5); g_2313 += 1)
    { 
        uint16_t l_3274 = 0x21BFL;
        int32_t *l_3275 = &g_616;
        int32_t l_3279 = 1L;
        int32_t l_3280 = 0xEAAEBDA0L;
        int32_t l_3281[1][5][7] = {{{0x80C4A3E6L,9L,5L,9L,9L,5L,9L},{9L,0x600D61CDL,0xA0D063B6L,0xD9E4686DL,0xD9E4686DL,0xA0D063B6L,0x600D61CDL},{0x80C4A3E6L,9L,5L,9L,9L,5L,9L},{9L,0x600D61CDL,0xA0D063B6L,0xD9E4686DL,0xD9E4686DL,0xA0D063B6L,0x600D61CDL},{0x80C4A3E6L,9L,5L,9L,9L,5L,9L}}};
        struct S1 l_3287 = {65535UL,0UL,0x60174899L,0x9B7529BEL,9UL,0x3F1EL};
        uint32_t l_3288 = 0x3390DAFCL;
        union U2 *l_3303 = &g_227;
        union U2 **l_3302[3];
        uint64_t ****l_3325 = (void*)0;
        uint64_t l_3333 = 18446744073709551610UL;
        const uint16_t *** const l_3340 = &g_1378;
        int16_t l_3348[1][5][1] = {{{8L},{2L},{8L},{2L},{8L}}};
        int64_t * const l_3398 = &g_3399;
        int64_t * const *l_3397 = &l_3398;
        union U3 *l_3407 = &g_1886[0][2];
        uint32_t l_3430[2];
        int32_t *l_3440 = &g_3;
        int32_t *l_3449 = &l_3332;
        int32_t *l_3450 = &l_3441[1];
        int32_t *l_3451 = &g_1052;
        int32_t *l_3452 = (void*)0;
        int32_t *l_3453[7] = {&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2]};
        uint8_t l_3454 = 0x4AL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_3302[i] = &l_3303;
        for (i = 0; i < 2; i++)
            l_3430[i] = 0x30C95797L;
        if (l_3274)
        { 
            int32_t **l_3276 = &l_3275;
            int32_t *l_3277 = (void*)0;
            int32_t *l_3278[4];
            struct S1 **l_3297[1];
            uint64_t ****l_3312 = &g_713;
            int i;
            for (i = 0; i < 4; i++)
                l_3278[i] = &g_385[0][5][2];
            for (i = 0; i < 1; i++)
                l_3297[i] = &g_610;
            (*l_3276) = l_3275;
            --l_3282;
            if (p_8)
                break;
            if ((safe_rshift_func_int8_t_s_s((l_3287 , l_3288), 3)))
            { 
                return (**g_1384);
            }
            else
            { 
                int16_t l_3317 = 0xEB22L;
                int8_t *l_3318 = &g_1623;
                int32_t l_3320 = 0x0E286DD8L;
                int32_t *l_3321 = &g_3230[3][0];
                int32_t l_3331 = 0x1F685517L;
                for (g_147.f0.f3 = 0; (g_147.f0.f3 <= 6); g_147.f0.f3 += 1)
                { 
                    struct S1 * const *l_3295 = &g_2041;
                    struct S1 * const **l_3294 = &l_3295;
                    struct S1 ***l_3296[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    union U2 *l_3301 = &g_273[2];
                    union U2 **l_3300 = &l_3301;
                    int32_t l_3304 = (-1L);
                    int i;
                    l_3304 = (safe_unary_minus_func_uint8_t_u(((((safe_sub_func_uint16_t_u_u((((((*l_3294) = (*g_2381)) == (l_3297[0] = (void*)0)) & (0x21L == p_8)) && ((**l_3276) = 0xABL)), (((safe_rshift_func_int8_t_s_s(0L, 1)) , l_3300) == l_3302[2]))) & (*g_1385)) <= p_8) <= p_8)));
                    if (p_8)
                        break;
                }
                if (((safe_mod_func_uint64_t_u_u(((((g_3307 >= (((((*l_3321) ^= ((l_3320 = ((safe_lshift_func_int8_t_s_u(p_8, 7)) || ((((*g_52) = (safe_sub_func_uint16_t_u_u((l_3312 != (((*l_3318) = (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(1UL, (*g_1385))), l_3317))) , l_3319)), (*g_1385)))) <= l_3282) ^ 5L))) ^ (*l_3275))) , 5L) >= l_3282) & p_8)) || 0x96L) <= 9UL) , p_8), 0xCBEA308454F28A4ALL)) || (*l_3275)))
                { 
                    uint8_t l_3322[2];
                    uint64_t *****l_3326[7][4][5] = {{{&l_3325,&l_3325,&l_3312,&l_3312,&g_901},{&l_3312,&l_3325,&l_3312,&g_901,&l_3312},{&l_3319,(void*)0,&g_1877,&g_901,&g_901},{&l_3325,(void*)0,&l_3325,&l_3312,&g_901}},{{&l_3325,&l_3325,&g_1877,&g_901,&l_3312},{&l_3325,&l_3325,&g_1877,&g_901,(void*)0},{&l_3325,&l_3325,&g_901,(void*)0,&g_1877},{&l_3325,&g_901,&l_3325,&g_1877,(void*)0}},{{&g_1877,&l_3325,&l_3319,&g_1877,&l_3312},{&l_3325,&l_3319,(void*)0,(void*)0,&l_3325},{&g_1877,&g_901,(void*)0,&l_3312,(void*)0},{&l_3325,&l_3312,&l_3319,&l_3325,&l_3325}},{{&l_3325,&l_3312,&l_3325,(void*)0,&l_3312},{&l_3325,&g_901,&g_901,&l_3325,(void*)0},{&l_3325,&l_3319,&l_3319,&l_3312,&g_1877},{&l_3325,&l_3325,&g_901,(void*)0,&g_1877}},{{&l_3325,&g_901,&l_3325,&g_1877,(void*)0},{&g_1877,&l_3325,&l_3319,&g_1877,&l_3312},{&l_3325,&l_3319,(void*)0,(void*)0,&l_3325},{&g_1877,&g_901,(void*)0,&l_3312,(void*)0}},{{&l_3325,&l_3312,&l_3319,&l_3325,&l_3325},{&l_3325,&l_3312,&l_3325,(void*)0,&l_3312},{&l_3325,&g_901,&g_901,&l_3325,(void*)0},{&l_3325,&l_3319,&l_3319,&l_3312,&g_1877}},{{&l_3325,&l_3325,&g_901,(void*)0,&g_1877},{&l_3325,&g_901,&l_3325,&g_1877,(void*)0},{&g_1877,&l_3325,&l_3319,&g_1877,&l_3312},{&l_3325,&l_3319,(void*)0,(void*)0,&l_3325}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_3322[i] = 255UL;
                    l_3322[0]++;
                    l_3325 = l_3325;
                }
                else
                { 
                    uint32_t l_3327 = 18446744073709551615UL;
                    --l_3327;
                    (**l_3276) = ((void*)0 == l_3330);
                    (*l_3276) = &g_385[0][5][2];
                    return p_8;
                }
                l_3333--;
                (*l_3276) = &g_213;
                (*l_3275) &= (safe_lshift_func_uint8_t_u_u((&g_413 != (void*)0), 2));
            }
        }
        else
        { 
            uint16_t *l_3343[3];
            uint16_t ** const l_3342 = &l_3343[2];
            uint16_t ** const *l_3341 = &l_3342;
            uint16_t ** const **l_3344 = &l_3341;
            int32_t l_3359 = 0xF5FB0A22L;
            uint8_t *l_3363 = (void*)0;
            union U2 *****l_3370 = &g_3163[2][1];
            union U3 **** const l_3390[7][6][2] = {{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656}},{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656}},{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656}},{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656}},{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656}},{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656}},{{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{&g_1656,&g_1656},{(void*)0,&g_1656}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_3343[i] = &l_3287.f0;
            if (((safe_mul_func_uint8_t_u_u(1UL, 255UL)) && (l_3340 == ((*l_3344) = l_3341))))
            { 
                uint8_t l_3345 = 0UL;
                int32_t *l_3349 = &g_385[0][5][2];
                int32_t **l_3350 = &l_3275;
                uint32_t **l_3351 = (void*)0;
                int64_t *l_3355 = &g_1256;
                union U3 *l_3360 = &g_1886[4][0];
                const int32_t *l_3378 = (void*)0;
                const int32_t **l_3377[7][3][1] = {{{&l_3378},{&l_3378},{&l_3378}},{{&l_3378},{&l_3378},{&l_3378}},{{&l_3378},{&l_3378},{&l_3378}},{{&l_3378},{&l_3378},{&l_3378}},{{&l_3378},{&l_3378},{&l_3378}},{{&l_3378},{&l_3378},{&l_3378}},{{&l_3378},{&l_3378},{&l_3378}}};
                int i, j, k;
                for (g_292 = 0; (g_292 <= 6); g_292 += 1)
                { 
                    ++l_3345;
                }
                (*l_3349) = ((*l_3275) = (l_3348[0][4][0] > (l_3332 = 246UL)));
                (*l_3350) = &g_616;
                if ((((l_3332 , &g_413) != l_3351) & (+(((*l_3355) = (safe_sub_func_uint64_t_u_u((**g_654), (***g_653)))) != (*l_3275)))))
                { 
                    uint8_t *l_3361 = &g_273[3].f1;
                    uint8_t **l_3362 = &l_3361;
                    (*l_3349) = (((!p_8) , 0L) != (safe_mod_func_uint16_t_u_u(0xE03BL, p_8)));
                    l_3359 = p_8;
                    (**g_2787) = l_3360;
                    (*l_3349) |= ((*l_3275) &= (((*l_3362) = l_3361) == l_3363));
                }
                else
                { 
                    const union U2 l_3373 = {0x701EL};
                    int32_t *l_3376 = &g_559[0];
                    int32_t **l_3375[3];
                    int32_t ***l_3374[3][6] = {{&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1]},{&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1]},{&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1],&l_3375[1]}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_3375[i] = &l_3376;
                    (**l_3350) = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((l_3282 >= l_3332), 15)), ((void*)0 == l_3370))), ((**g_1384) >= (safe_mul_func_uint8_t_u_u(p_8, (l_3373 , p_8))))));
                    l_3377[3][1][0] = (void*)0;
                    if (p_8)
                        break;
                }
            }
            else
            { 
                uint32_t l_3386 = 4294967292UL;
                if ((safe_lshift_func_uint8_t_u_u(1UL, (*g_1282))))
                { 
                    int32_t *l_3383 = &l_3280;
                    int32_t *l_3384[6][3][6] = {{{&g_616,&l_3281[0][1][4],(void*)0,&g_3,&g_616,&l_3281[0][1][4]},{&g_157,&g_3,&l_3281[0][1][4],&g_385[0][5][2],&g_385[5][4][4],&g_385[0][5][2]},{&g_385[0][5][2],&g_385[5][4][4],&g_385[0][5][2],&l_3281[0][1][4],&g_3,&g_157}},{{&l_3281[0][1][4],&g_616,&g_3,(void*)0,&l_3281[0][1][4],&g_616},{&l_3281[0][1][4],&g_213,&g_3,(void*)0,&g_385[5][0][3],&l_3281[0][1][4]},{&l_3281[0][1][4],&g_616,&l_3281[0][1][4],&l_3281[0][1][4],&g_616,&g_616}},{{&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],(void*)0,(void*)0},{&g_157,&g_616,&g_385[0][5][2],&g_3,&g_3,&g_616},{&g_616,&g_616,&g_616,&g_3,&g_3,&l_3279}},{{&l_3281[0][1][4],&g_616,&g_385[0][5][2],&l_3281[0][1][4],(void*)0,&l_3281[0][1][4]},{&g_616,&g_385[0][5][2],(void*)0,&g_385[0][5][2],&g_616,&g_1052},{(void*)0,&g_616,&g_3,&g_385[0][5][2],&g_385[5][0][3],(void*)0}},{{&g_616,&g_213,&g_385[0][5][2],&g_616,&l_3281[0][1][4],(void*)0},{&l_3279,&g_616,&g_3,&g_385[0][5][2],&g_3,&g_1052},{&l_3281[0][1][4],&g_385[5][4][4],(void*)0,(void*)0,&g_385[5][4][4],&l_3281[0][1][4]}},{{&g_1052,&g_3,&g_385[0][5][2],&g_3,&g_616,&l_3279},{(void*)0,&l_3281[0][1][4],&g_616,&g_385[0][5][2],&g_213,&g_616},{(void*)0,&g_385[5][0][3],&g_385[0][5][2],&g_3,&g_616,(void*)0}}};
                    int i, j, k;
                    (*l_3383) |= ((safe_sub_func_int8_t_s_s(l_3359, ((*l_3275) && (-1L)))) != 1L);
                    (*g_2382) = (**g_2381);
                    l_3386++;
                    return (*l_3275);
                }
                else
                { 
                    int64_t * const **l_3393[3][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    (*l_3275) |= ((~(l_3390[5][5][1] == (void*)0)) != 3L);
                    (*l_3275) &= (safe_rshift_func_uint8_t_u_u(((l_3394 = (void*)0) != (g_3403 = (g_3400 = (l_3397 = &l_3395[0])))), 3));
                }
                return p_8;
            }
            l_3405 = l_3405;
        }
        l_3405 = l_3405;
        for (g_1212 = 1; (g_1212 <= 5); g_1212 += 1)
        { 
            int8_t l_3406 = 0xDFL;
            int32_t *l_3408[7] = {&l_3279,&l_3279,&l_3279,&l_3279,&l_3279,&l_3279,&l_3279};
            union U3 *l_3418 = &g_1886[3][2];
            int i;
            l_3406 = 1L;
            (**g_2787) = l_3407;
        }
        l_3454--;
    }
    l_3441[4] |= (safe_rshift_func_int16_t_s_u((p_8 <= (g_743[0] != l_3459[3])), 3));
    for (g_130.f2 = 5; (g_130.f2 >= 0); g_130.f2 -= 1)
    { 
        int32_t *l_3461 = &l_3441[4];
        (*l_3461) &= p_8;
        return p_8;
    }
    l_3332 = (safe_add_func_uint16_t_u_u((+(safe_rshift_func_int8_t_s_s(((l_3441[2] = ((**g_3400) = (safe_rshift_func_uint16_t_u_s(65532UL, 4)))) <= (((safe_sub_func_int16_t_s_s(3L, (safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((l_3282 <= (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(0UL, 0x6CL)) ^ (safe_add_func_int16_t_s_s(l_3385, (l_3481 , p_8)))), 1L))) , l_3482), p_8)), (-4L))))) & l_3481.f1) ^ p_8)), l_3481.f0))), 0x7A06L));
    --l_3487;
    return (**g_1384);
}



static int64_t  func_14(uint16_t  p_15, uint8_t * p_16)
{ 
    uint64_t l_2655 = 0xD99282E1B43826D1LL;
    uint64_t l_2663 = 18446744073709551615UL;
    int32_t l_2669 = 0x35102C4BL;
    int32_t l_2671 = 0xED47D262L;
    int32_t l_2672 = 0x79C33885L;
    int16_t ***l_2743[6] = {&g_1384,&g_1384,&g_1384,&g_1384,&g_1384,&g_1384};
    int32_t l_2761 = 0xC68E19DAL;
    int32_t l_2763[4][4][4] = {{{0L,0x443FD9F6L,0L,(-1L)},{0x3EA53104L,4L,0x073FE27DL,0xDFF9F8F7L},{0x443FD9F6L,0L,0xA8054D73L,4L},{0x3F653AEDL,0x3EA53104L,0xA8054D73L,(-9L)}},{{0x443FD9F6L,7L,0x073FE27DL,(-5L)},{0x3EA53104L,0L,0L,0x3EA53104L},{0L,0x3EA53104L,0L,0x3F653AEDL},{7L,0x443FD9F6L,(-1L),0xDFF9F8F7L}},{{0x3EA53104L,0x3F653AEDL,(-1L),0xDFF9F8F7L},{0L,0x443FD9F6L,0xA8054D73L,0x3F653AEDL},{4L,0x3EA53104L,0x3090B093L,0x3EA53104L},{0x443FD9F6L,0L,(-1L),(-5L)}},{{(-9L),7L,0L,(-9L)},{7L,0x3EA53104L,0xD85E9E89L,4L},{7L,0L,0L,0xDFF9F8F7L},{(-9L),4L,(-1L),(-1L)}}};
    const int16_t l_2771 = 0x476DL;
    uint8_t l_2793 = 0UL;
    int32_t l_2857 = 8L;
    uint64_t **l_2874 = &g_715[0][3];
    int64_t l_2884 = 0xF6A7474D6F881C7ELL;
    const union U3 l_2889 = {{65527UL,0xF2F6EA77L,4L,0x594F0701L,0UL,1L}};
    uint64_t l_2906 = 0UL;
    int16_t l_2909 = 0x742DL;
    uint32_t l_2951 = 0UL;
    const uint16_t **l_2978[2];
    struct S0 ** const l_2989 = &g_469;
    struct S0 **l_2990 = &g_469;
    struct S1 *l_3026[4][2][7] = {{{&g_1886[3][2].f0,&g_1886[3][2].f0,(void*)0,(void*)0,&g_1886[3][2].f0,(void*)0,(void*)0},{&g_147.f0,&g_147.f0,(void*)0,&g_584.f0,(void*)0,&g_584.f0,(void*)0}},{{&g_1886[3][2].f0,&g_1886[3][2].f0,(void*)0,(void*)0,&g_1886[3][2].f0,(void*)0,(void*)0},{&g_147.f0,&g_147.f0,(void*)0,&g_584.f0,(void*)0,&g_584.f0,(void*)0}},{{&g_1886[3][2].f0,&g_1886[3][2].f0,(void*)0,(void*)0,&g_1886[3][2].f0,(void*)0,(void*)0},{&g_147.f0,&g_147.f0,(void*)0,&g_584.f0,(void*)0,&g_584.f0,(void*)0}},{{&g_1886[3][2].f0,&g_1886[3][2].f0,(void*)0,(void*)0,&g_1886[3][2].f0,(void*)0,(void*)0},{&g_147.f0,&g_147.f0,(void*)0,&g_584.f0,(void*)0,&g_584.f0,(void*)0}}};
    int32_t *l_3064 = &g_1052;
    int64_t *l_3072 = &g_584.f1;
    int32_t l_3128 = 9L;
    uint32_t l_3130 = 0x5733852AL;
    int8_t ****l_3190 = &g_2803;
    int8_t ****l_3191 = &g_2803;
    int32_t *l_3193 = &g_385[0][5][2];
    uint64_t l_3220[7][6] = {{0x084DD33B0D36B984LL,18446744073709551615UL,0UL,0x73F82071CE6E1491LL,0x7313CB8DE4DFBF24LL,0x73F82071CE6E1491LL},{0x0D6B01E0A0C3FB4ELL,18446744073709551615UL,0x0D6B01E0A0C3FB4ELL,1UL,0xFA858E805E9A946BLL,0UL},{0UL,18446744073709551608UL,0x0D6B01E0A0C3FB4ELL,0UL,18446744073709551615UL,0x73F82071CE6E1491LL},{0x73F82071CE6E1491LL,0x40C96D55225B807BLL,0UL,0UL,0x0C36EA5F8A128335LL,1UL},{0UL,0x0C36EA5F8A128335LL,1UL,1UL,1UL,18446744073709551607UL},{0UL,0x0D6B01E0A0C3FB4ELL,0x5310B1F4E8A8A81BLL,2UL,18446744073709551615UL,18446744073709551607UL},{0x5310B1F4E8A8A81BLL,0x73F82071CE6E1491LL,1UL,1UL,0x084DD33B0D36B984LL,1UL}};
    uint8_t l_3247 = 250UL;
    const struct S1 *l_3267[2];
    const struct S1 **l_3266 = &l_3267[0];
    const struct S1 ***l_3265 = &l_3266;
    const struct S1 ****l_3264 = &l_3265;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2978[i] = &g_1379;
    for (i = 0; i < 2; i++)
        l_3267[i] = (void*)0;
    if (((((*g_52)++) ^ (((safe_sub_func_uint32_t_u_u(1UL, (*g_451))) | (l_2655 | ((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_2655, ((0UL <= (+l_2655)) ^ (safe_rshift_func_int16_t_s_s(((l_2663 ^ p_15) | l_2655), (*g_1385)))))), (-8L))) <= 0xB0A53188970501C0LL))) ^ l_2663)) == p_15))
    { 
        int8_t l_2668 = 0xE2L;
        int32_t l_2670 = 0x9BB686E4L;
        int32_t l_2673 = 0L;
        uint64_t *l_2674 = (void*)0;
        uint64_t *l_2675 = (void*)0;
        uint64_t *l_2676 = &l_2663;
        int16_t l_2687 = 0x7FBEL;
        const uint32_t *l_2688 = &g_584.f0.f3;
        union U3 *l_2695 = &g_1886[1][1];
        union U3 **l_2694 = &l_2695;
        union U3 ***l_2693[1];
        int64_t **** const l_2707[4] = {&g_2361,&g_2361,&g_2361,&g_2361};
        int32_t *l_2760 = (void*)0;
        uint64_t ** const *l_2819 = &g_714;
        uint64_t ** const **l_2818 = &l_2819;
        uint64_t ** const ***l_2817 = &l_2818;
        uint16_t l_2842 = 0xDEB8L;
        int8_t *****l_2858 = &g_2802;
        union U2 l_2921 = {0x4ED8L};
        struct S0 **l_2992 = &g_469;
        union U2 *l_3013 = &g_273[3];
        union U2 **l_3012 = &l_3013;
        int i;
        for (i = 0; i < 1; i++)
            l_2693[i] = &l_2694;
        (*g_451) = ((((safe_add_func_int32_t_s_s((((safe_mul_func_int8_t_s_s(l_2668, 0xD7L)) && ((--(*l_2676)) == (safe_mul_func_uint8_t_u_u((p_15 , (p_15 != (safe_div_func_int32_t_s_s(p_15, (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((l_2687 , ((void*)0 == p_16)), l_2672)), 4)))))), l_2670)))) , l_2663), 0x3565834FL)) , p_15) , &g_142) == l_2688);
        (*g_451) = 0x8731303CL;
        for (g_1732 = 0; (g_1732 < (-19)); g_1732 = safe_sub_func_uint64_t_u_u(g_1732, 1))
        { 
            int64_t l_2703 = (-1L);
            int32_t l_2705 = (-9L);
            uint8_t * const l_2731 = &g_2732[0];
            uint8_t * const *l_2730 = &l_2731;
            uint8_t * const ** const l_2729 = &l_2730;
            uint8_t * const ** const *l_2728 = &l_2729;
            struct S1 ****l_2741 = (void*)0;
            int32_t l_2764 = 0xCDA514CFL;
            if ((safe_lshift_func_int16_t_s_s(((*g_1385) = (((*g_1655) = l_2693[0]) == (void*)0)), 12)))
            { 
                uint16_t l_2700 = 0UL;
                int32_t l_2704 = 0x553BDC35L;
                int32_t *l_2708[7][6] = {{(void*)0,(void*)0,&l_2705,&g_1052,(void*)0,&l_2671},{&l_2671,&l_2670,(void*)0,&g_213,&g_157,&l_2705},{&l_2671,&l_2671,(void*)0,(void*)0,(void*)0,&l_2671},{(void*)0,(void*)0,&l_2705,&g_616,&g_60,&g_1052},{&g_616,&g_60,&g_1052,(void*)0,&g_157,&g_60},{&l_2673,&g_60,(void*)0,(void*)0,&g_60,&l_2673},{&g_60,(void*)0,&l_2671,&l_2670,(void*)0,&g_213}};
                uint32_t l_2742 = 1UL;
                uint16_t l_2755[2][6][1] = {{{65535UL},{0x5C75L},{65535UL},{0x5C75L},{65535UL},{0x5C75L}},{{65535UL},{0x5C75L},{65535UL},{0x5C75L},{65535UL},{0x5C75L}}};
                uint32_t l_2765 = 18446744073709551608UL;
                int i, j, k;
                if ((safe_lshift_func_int8_t_s_s(0x85L, p_15)))
                { 
                    int64_t ***l_2706 = &g_267;
                    l_2704 = (p_15 < ((((*g_52) = (8UL >= ((((-5L) != ((*l_2676) ^= (((0UL || (safe_mod_func_int64_t_s_s(1L, (l_2700 ^= (-6L))))) | (safe_mul_func_uint8_t_u_u(0xA5L, 1UL))) > l_2703))) & p_15) >= l_2668))) != l_2703) ^ p_15));
                    (*g_451) |= (((*l_2676) = ((((0x10F1L >= ((l_2705 = 18446744073709551612UL) || ((void*)0 == l_2706))) & (*g_1385)) , &g_2361) == l_2707[1])) && 0x66FEA11EED2B5AA4LL);
                }
                else
                { 
                    int32_t l_2713[4];
                    uint8_t ****l_2715 = &g_743[0];
                    uint8_t *****l_2714 = &l_2715;
                    uint8_t * const ** const *l_2717 = (void*)0;
                    uint8_t * const ** const **l_2716 = &l_2717;
                    uint8_t * const l_2722[3] = {&g_2723,&g_2723,&g_2723};
                    uint8_t * const *l_2721 = &l_2722[1];
                    uint8_t * const *l_2724 = (void*)0;
                    uint8_t * const *l_2725 = &l_2722[0];
                    uint8_t * const *l_2726 = &l_2722[1];
                    uint8_t * const *l_2727[5][4] = {{&l_2722[1],(void*)0,&l_2722[1],(void*)0},{&l_2722[1],(void*)0,&l_2722[1],(void*)0},{&l_2722[1],(void*)0,&l_2722[1],(void*)0},{&l_2722[1],(void*)0,&l_2722[1],(void*)0},{&l_2722[1],(void*)0,&l_2722[1],(void*)0}};
                    uint8_t * const ** const l_2720[6][1][5] = {{{&l_2726,&l_2725,&l_2725,&l_2726,&l_2721}},{{&l_2726,&l_2725,&l_2725,&l_2726,&l_2721}},{{&l_2726,&l_2725,&l_2725,&l_2726,&l_2721}},{{&l_2726,&l_2725,&l_2725,&l_2726,&l_2721}},{{&l_2726,&l_2725,&l_2725,&l_2726,&l_2721}},{{&l_2726,&l_2725,&l_2725,&l_2726,&l_2721}}};
                    uint8_t * const ** const *l_2719[3][3] = {{&l_2720[4][0][4],(void*)0,&l_2720[4][0][4]},{&l_2720[4][0][4],&l_2720[4][0][4],&l_2720[4][0][4]},{&l_2720[4][0][4],(void*)0,&l_2720[4][0][4]}};
                    uint8_t * const ** const **l_2718[7][2][5] = {{{&l_2719[0][1],&l_2719[2][0],&l_2719[0][1],&l_2719[2][0],&l_2719[2][0]},{&l_2719[0][1],&l_2719[2][0],&l_2719[2][0],&l_2719[0][1],&l_2719[2][0]}},{{&l_2719[2][0],&l_2719[2][1],&l_2719[1][1],&l_2719[2][0],&l_2719[0][2]},{&l_2719[2][0],&l_2719[2][0],&l_2719[0][1],&l_2719[2][2],&l_2719[2][0]}},{{&l_2719[2][0],&l_2719[2][0],(void*)0,&l_2719[2][0],&l_2719[2][1]},{&l_2719[1][1],&l_2719[2][1],&l_2719[2][0],&l_2719[0][1],&l_2719[2][0]}},{{&l_2719[2][0],&l_2719[2][0],&l_2719[2][1],&l_2719[2][0],&l_2719[2][2]},{&l_2719[2][0],&l_2719[2][0],&l_2719[2][0],&l_2719[2][0],&l_2719[2][0]}},{{&l_2719[0][2],&l_2719[2][1],&l_2719[2][0],(void*)0,(void*)0},{&l_2719[0][2],&l_2719[2][0],&l_2719[1][0],&l_2719[2][1],&l_2719[0][0]}},{{&l_2719[2][0],&l_2719[2][0],&l_2719[2][0],&l_2719[2][1],(void*)0},{&l_2719[2][0],&l_2719[2][0],&l_2719[2][2],&l_2719[2][0],&l_2719[2][0]}},{{&l_2719[2][0],&l_2719[2][0],&l_2719[2][1],&l_2719[2][0],&l_2719[2][2]},{&l_2719[2][0],&l_2719[0][1],&l_2719[2][1],&l_2719[2][1],&l_2719[0][1]}}};
                    const union U3 *l_2754 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_2713[i] = (-1L);
                    l_2708[4][5] = &g_616;
                    (*g_451) ^= (((*l_2676) = ((**g_1378) || p_15)) == (((**g_2382) , ((*g_610) , (safe_add_func_int8_t_s_s(p_15, (safe_mod_func_int64_t_s_s(0x68460C1C72D7D9BBLL, l_2713[1])))))) ^ (-5L)));
                    l_2669 = ((l_2703 >= (((*l_2714) = &g_743[0]) == (l_2728 = ((**g_2005) , ((*l_2716) = (void*)0))))) & ((safe_mul_func_uint16_t_u_u((&g_1384 == ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((((~(((((**l_2726) = (~((void*)0 == l_2741))) > p_15) != p_15) < 247UL)) , l_2705) >= p_15) , p_15), p_15)) || l_2742), p_15)) , l_2743[3])), p_15)) , l_2671));
                    g_1052 = (safe_lshift_func_uint8_t_u_u((*g_1282), (l_2655 || ((safe_sub_func_uint16_t_u_u(((*g_2278) , ((((((*g_451) = (safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s((0xB4E3BCDAL & (safe_rshift_func_int8_t_s_u(((void*)0 != l_2754), (((**g_835) , 0xD55D67F638D91952LL) ^ l_2668)))), 0x921EL)), l_2755[0][5][0]))) ^ 0x1C93B9FDL) <= g_285) && p_15) | l_2713[1])), (*g_1385))) | l_2673))));
                }
                if ((*g_451))
                { 
                    int32_t **l_2756 = (void*)0;
                    int32_t **l_2757 = &l_2708[4][4];
                    (*l_2757) = &g_1052;
                    return p_15;
                }
                else
                { 
                    int32_t **l_2758 = (void*)0;
                    int32_t **l_2759[7][1];
                    int16_t l_2762 = 1L;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2759[i][j] = (void*)0;
                    }
                    l_2760 = &l_2669;
                    l_2765--;
                    if (p_15)
                        break;
                }
                return p_15;
            }
            else
            { 
                const int64_t ***l_2770 = (void*)0;
                int32_t l_2776[2][5] = {{0x78CE1057L,0x78CE1057L,0x78CE1057L,0x78CE1057L,0x78CE1057L},{0L,0xE0ABDF47L,0L,0xE0ABDF47L,0L}};
                int32_t **l_2777 = (void*)0;
                int32_t **l_2778 = (void*)0;
                int32_t **l_2779 = &l_2760;
                union U3 ** const ***l_2790 = &g_2786[4];
                int8_t ***l_2801 = &g_257;
                int8_t **** const l_2800 = &l_2801;
                int32_t *l_2804 = (void*)0;
                int32_t *l_2805 = &l_2673;
                int32_t *l_2806 = &l_2671;
                uint32_t l_2807 = 1UL;
                int i, j;
                (*g_451) = ((safe_add_func_int32_t_s_s((((((l_2770 == &g_267) , 1L) < (l_2771 ^ 3L)) == ((0x1F1AL != (((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((-1L) && g_147.f0.f5), l_2776[0][4])) , 0x97L), 1)) || (*g_1379)) <= 247UL)) ^ p_15)) <= 0x879866B52E6665CFLL), (*g_451))) > (*g_451));
                (*l_2779) = &l_2776[0][4];
                l_2669 = ((*g_451) |= (safe_mul_func_int8_t_s_s(((p_15 & (safe_sub_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((**g_1384), l_2672)) >= ((((*l_2790) = g_2786[4]) != &g_1656) & (((safe_add_func_uint16_t_u_u(l_2793, (safe_div_func_int16_t_s_s((l_2705 = ((safe_sub_func_int32_t_s_s(p_15, p_15)) | p_15)), p_15)))) >= (**g_1378)) == l_2703))) > 7UL), 0xFA26B4B1L))) == p_15), 0UL)));
                for (g_473.f1 = (-3); (g_473.f1 >= 13); g_473.f1 = safe_add_func_int16_t_s_s(g_473.f1, 7))
                { 
                    g_2802 = l_2800;
                }
                ++l_2807;
            }
        }
lbl_2861:
        for (l_2687 = 1; (l_2687 >= 0); l_2687 -= 1)
        { 
            int32_t **l_2810 = &g_451;
            int32_t *l_2841 = (void*)0;
            int32_t * const *l_2840 = &l_2841;
            (*l_2810) = &l_2673;
            for (g_473.f2 = 1; (g_473.f2 >= 0); g_473.f2 -= 1)
            { 
                const int16_t *l_2812[5] = {&g_419,&g_419,&g_419,&g_419,&g_419};
                const int16_t **l_2811[2];
                int32_t l_2827 = 1L;
                int i;
                for (i = 0; i < 2; i++)
                    l_2811[i] = &l_2812[0];
                for (g_1732 = 3; (g_1732 >= 0); g_1732 -= 1)
                { 
                    int i, j, k;
                    if (l_2763[g_1732][g_1732][g_1732])
                        break;
                    g_451 = (((((**g_1378) , l_2811[0]) == ((safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((((void*)0 == l_2817) < (!((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_2676) = (safe_mul_func_uint16_t_u_u(p_15, (*g_1379)))) <= p_15), (*g_1385))), l_2670)) > l_2827))) , (-1L)), 0xD9EDF0DF3B6D839DLL)), p_15)) , (void*)0)) , p_15) , &l_2763[g_1732][g_1732][g_1732]);
                }
                if (p_15)
                    break;
                for (g_292 = 1; (g_292 >= 0); g_292 -= 1)
                { 
                    struct S0 l_2828 = {0xE020927DFEAB88C5LL,0UL,1L};
                    int32_t *l_2838 = &g_1901;
                    int32_t **l_2837 = &l_2838;
                    int32_t ***l_2839 = &l_2837;
                    int i, j, k;
                    l_2763[(g_292 + 1)][(g_473.f2 + 1)][(g_292 + 1)] = (6L || ((((((l_2828 , (l_2763[l_2687][(g_292 + 2)][(l_2687 + 2)] >= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == &g_1384), (safe_add_func_int32_t_s_s((((*l_2839) = l_2837) != ((p_15 , 0x3C7280DC4630A398LL) , l_2840)), 0xCFA17B50L)))), 0xA1L)), p_15)))) || 0L) ^ p_15) >= l_2842) ^ 0L) , l_2761));
                    if (p_15)
                        continue;
                    return l_2663;
                }
            }
        }
        if (l_2771)
        { 
            const uint64_t l_2849[5] = {0xBB97A8394BA39537LL,0xBB97A8394BA39537LL,0xBB97A8394BA39537LL,0xBB97A8394BA39537LL,0xBB97A8394BA39537LL};
            int32_t **l_2929[2][3] = {{&g_451,&g_451,&g_451},{&g_80,&g_80,&g_80}};
            int i, j;
            for (g_1623 = (-25); (g_1623 >= 9); ++g_1623)
            { 
                int16_t l_2856 = (-4L);
                int8_t *****l_2859 = &g_2802;
                uint64_t **l_2873 = &l_2675;
                int16_t **l_2885 = &g_1385;
                int32_t *l_2892[3][6] = {{&g_1052,&g_1052,&g_1052,&g_1052,&g_1052,&g_1052},{&g_1052,&g_1052,&g_1052,&g_1052,&g_1052,&g_1052},{&g_1052,&g_1052,&g_1052,&g_1052,&g_1052,&g_1052}};
                int8_t l_2908 = 0x11L;
                struct S0 l_2912 = {0xCA824E97C0794FB8LL,1UL,0xC6AFL};
                int i, j;
                for (l_2761 = 2; (l_2761 < (-22)); --l_2761)
                { 
                    uint64_t l_2848 = 0x830407945F81CE4DLL;
                    if ((*g_451))
                        break;
                    (*g_451) = (!0L);
                    if (p_15)
                        continue;
                    if (l_2848)
                        continue;
                }
                if ((p_15 ^ l_2763[3][2][2]))
                { 
                    l_2671 = (*g_451);
                }
                else
                { 
                    uint64_t l_2881 = 0xDD779C80FDB65352LL;
                    int32_t *l_2886 = &l_2761;
                    if (l_2849[1])
                        break;
                    (*g_451) |= (safe_mul_func_int16_t_s_s((-1L), (safe_mod_func_uint16_t_u_u(p_15, (5L | (((safe_lshift_func_int16_t_s_u(l_2856, 6)) <= (l_2857 == (((0UL > ((g_2860[4] = (l_2859 = l_2858)) == (void*)0)) <= 1L) ^ p_15))) <= p_15))))));
                    if (p_15)
                        continue;
                    if (g_147.f0.f5)
                        goto lbl_2861;
                    (*l_2886) = (safe_sub_func_uint8_t_u_u(((1UL != (((safe_div_func_int16_t_s_s((((*g_451) = (safe_lshift_func_uint8_t_u_u(((+(g_1886[3][2].f0.f3 | (safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((((*g_713) = l_2873) == l_2874), 0x4C2C33BC2DCCCB2BLL)), ((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(l_2881, (safe_add_func_int64_t_s_s((((l_2884 , 3UL) , (void*)0) != l_2885), p_15)))), l_2849[1])), p_15)) , (*g_1379)))))) | 4294967287UL), l_2849[3]))) > 0x83C8B3B2L), (*g_1385))) < (-3L)) , 0xA7D8L)) , (*g_1282)), 0x12L));
                }
                (*g_451) = ((**g_2277) , l_2849[3]);
                if (l_2856)
                { 
                    int32_t *l_2887 = &g_616;
                    int32_t **l_2888 = &g_80;
                    int32_t **l_2893 = &g_451;
                    int8_t l_2902 = 1L;
                    int8_t *l_2905 = &l_2668;
                    int64_t l_2907 = 1L;
                    (*l_2888) = l_2887;
                    (*g_80) ^= (l_2889 , ((*g_451) = (safe_sub_func_int16_t_s_s((**g_1384), 0xE4FFL))));
                    (*l_2893) = ((*l_2888) = l_2892[1][2]);
                    (*l_2887) = ((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(0xB09AF5C2L, (safe_lshift_func_uint8_t_u_s((*g_52), (l_2671 = p_15))))) <= (((((((l_2669 = (((safe_lshift_func_int8_t_s_s((l_2902 > 0L), 1)) | (safe_rshift_func_uint8_t_u_u(249UL, 3))) < (((*l_2905) ^= p_15) != p_15))) <= l_2906) ^ p_15) != l_2907) != 0x5B8015D8242805B8LL) | l_2908) | (*g_1385))), p_15)) >= p_15);
                }
                else
                { 
                    uint32_t *l_2910 = &g_66;
                    union U2 *l_2911 = &g_273[3];
                    (*g_451) &= (((*l_2910) = l_2909) != (-7L));
                    if ((*g_451))
                        break;
                    (*g_451) = l_2670;
                    (*g_2005) = l_2911;
                }
                g_213 = ((l_2912 , (safe_mul_func_int16_t_s_s((*g_1385), (safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(((((((*g_451) = (safe_sub_func_uint64_t_u_u(p_15, (l_2921 , ((((safe_mod_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(p_15, ((*g_52) , (safe_lshift_func_uint16_t_u_s((~l_2849[1]), 14))))) || (*g_1379)) , 4294967295UL) , 253UL), 0x23L)) < (**g_1384)) , 0x50C5L) | l_2849[1]))))) ^ 0x77AFD708L) , p_15) ^ g_75) > p_15), 9)) , p_15), 7UL))))) > p_15);
            }
            l_2760 = (l_2921 , (p_15 , &g_62));
            (*l_2858) = (void*)0;
        }
        else
        { 
            const uint16_t l_2947 = 0x8313L;
            int8_t *l_2959 = (void*)0;
            int8_t **l_2958 = &l_2959;
            int32_t l_2960 = 0xD39FCDB3L;
            int32_t l_3007[2][4] = {{(-1L),0x29DF8CB5L,(-1L),(-1L)},{0x29DF8CB5L,0x29DF8CB5L,(-1L),0x29DF8CB5L}};
            uint64_t l_3008 = 1UL;
            int i, j;
lbl_2961:
            for (l_2672 = 0; (l_2672 == 25); ++l_2672)
            { 
                int16_t l_2943[7] = {0L,1L,1L,0L,1L,1L,0L};
                uint64_t **l_2946 = (void*)0;
                int32_t *l_2948 = (void*)0;
                int32_t *l_2949 = &g_213;
                uint16_t *l_2950[2][7][1];
                int32_t *l_2952 = &l_2761;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_2950[i][j][k] = &g_147.f0.f0;
                    }
                }
                (*l_2952) = (safe_mod_func_uint16_t_u_u((l_2951 |= ((((safe_lshift_func_int16_t_s_s((~((*g_1379) != (safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((*l_2949) |= ((g_385[0][3][3] = (safe_rshift_func_int8_t_s_s(l_2943[3], ((((*g_1385) |= (((*g_451) = (((void*)0 == &p_16) || (0xFF8803EFL | ((safe_mul_func_uint8_t_u_u((l_2946 != (**g_1877)), 0xDFL)) || (*g_1282))))) ^ l_2947)) | 0x5174L) < g_157)))) == p_15)), p_15)), 1)))), p_15)) == p_15) < 6L) , 1UL)), 0xAB31L));
            }
            for (g_285 = (-16); (g_285 == 50); g_285 = safe_add_func_uint32_t_u_u(g_285, 3))
            { 
                struct S0 l_2957[5][6] = {{{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{0L,0x44AAE85CE357D97CLL,0xDDC5L},{-1L,5UL,0x9377L},{-1L,5UL,0x9377L},{0L,0x44AAE85CE357D97CLL,0xDDC5L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L}},{{4L,0x8FCA16C589F14383LL,0xE070L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{-1L,5UL,0x9377L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{4L,0x8FCA16C589F14383LL,0xE070L},{4L,0x8FCA16C589F14383LL,0xE070L}},{{0x4605B831425C2359LL,0x7256521332D44B6ALL,0xD745L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{0x4605B831425C2359LL,0x7256521332D44B6ALL,0xD745L},{0L,0x44AAE85CE357D97CLL,0xDDC5L},{0x4605B831425C2359LL,0x7256521332D44B6ALL,0xD745L}},{{0x4605B831425C2359LL,0x7256521332D44B6ALL,0xD745L},{0L,0x44AAE85CE357D97CLL,0xDDC5L},{0x4605B831425C2359LL,0x7256521332D44B6ALL,0xD745L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{0x4605B831425C2359LL,0x7256521332D44B6ALL,0xD745L}},{{4L,0x8FCA16C589F14383LL,0xE070L},{4L,0x8FCA16C589F14383LL,0xE070L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{-1L,5UL,0x9377L},{0x9097E40A45814768LL,18446744073709551611UL,0xCAF7L},{4L,0x8FCA16C589F14383LL,0xE070L}}};
                uint64_t **l_2969 = &l_2674;
                uint16_t *l_2970 = &g_1886[3][2].f0.f0;
                int32_t l_2983[3][2];
                struct S0 ***l_2991[1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_2983[i][j] = (-6L);
                }
                for (i = 0; i < 1; i++)
                    l_2991[i] = &l_2990;
                for (g_1989.f1 = (-14); (g_1989.f1 != 4); g_1989.f1++)
                { 
                    l_2960 ^= (((*g_2803) = (l_2957[4][5] , l_2958)) == (void*)0);
                    (*g_451) = 0L;
                    if (l_2668)
                        goto lbl_2961;
                }
                if ((safe_mul_func_uint16_t_u_u((p_15 >= l_2957[4][5].f0), ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s(p_15)) || ((*l_2970) ^= ((**g_1378) < ((l_2957[2][2] , (**l_2819)) == ((*l_2969) = (****l_2817)))))), p_15)), 6)) < (*g_1282)))))
                { 
                    const int32_t *l_2971 = &l_2763[3][2][2];
                    const int32_t **l_2972 = &l_2971;
                    (*l_2972) = l_2971;
                    if ((*g_451))
                        break;
                    if (l_2793)
                        break;
                    l_2760 = (l_2947 , &l_2673);
                    if (l_2960)
                        break;
                }
                else
                { 
                    (*g_451) ^= (safe_rshift_func_uint8_t_u_s((((*l_2970) = (safe_sub_func_uint64_t_u_u((!0x4D8205BB46A3EEEBLL), (&g_1379 != l_2978[1])))) | (safe_add_func_uint8_t_u_u(l_2960, (safe_rshift_func_uint8_t_u_u(((l_2983[1][0] = p_15) && (((safe_div_func_int8_t_s_s((((~(p_15 = (safe_lshift_func_int16_t_s_s(((-1L) != (0UL ^ l_2983[1][0])), 5)))) , p_15) ^ l_2889.f0.f5), l_2669)) < (*g_1282)) | 0xEA5DL)), 6))))), 5));
                }
                (*g_451) = 0x291C3655L;
                (*g_451) |= (l_2989 != (l_2992 = l_2990));
            }
            (*g_2005) = (((+((*l_2676) ^= 0xE5275F51C307223DLL)) >= (*g_655)) , (*g_2005));
            for (g_1869 = 26; (g_1869 >= 16); --g_1869)
            { 
                const int8_t l_2996 = (-4L);
                int32_t *l_2999 = &l_2672;
                int32_t l_3001 = 0L;
                int32_t l_3006[7] = {0xB1089E47L,0xB1089E47L,0xB1089E47L,0xB1089E47L,0xB1089E47L,0xB1089E47L,0xB1089E47L};
                uint16_t *l_3020 = &g_584.f0.f0;
                uint32_t *l_3021[5] = {&g_297,&g_297,&g_297,&g_297,&g_297};
                int32_t l_3022 = 0L;
                int i;
                if (l_2996)
                    break;
                for (g_1454 = 29; (g_1454 <= 10); g_1454--)
                { 
                    int32_t **l_3000 = &g_80;
                    int32_t *l_3002 = (void*)0;
                    int32_t *l_3003 = &g_157;
                    int32_t *l_3004 = (void*)0;
                    int32_t *l_3005[3][4][2] = {{{&l_2672,&g_60},{&l_2761,&l_2761},{&l_2761,&g_60},{&l_2672,(void*)0}},{{&g_60,(void*)0},{&l_2672,&g_60},{&l_2761,&l_2761},{&l_2761,&g_60}},{{&l_2672,(void*)0},{&g_60,(void*)0},{&l_2672,&g_60},{&l_2761,&l_2761}}};
                    int i, j, k;
                    l_2999 = &l_2761;
                    (*l_3000) = &g_385[0][5][2];
                    (*l_3000) = &g_385[0][5][2];
                    l_3008++;
                    if (p_15)
                        continue;
                }
                if (p_15)
                    break;
                (*l_2999) = (safe_unary_minus_func_int8_t_s((l_3022 ^= ((((*g_1282) &= (((p_15 & ((*g_1385) = p_15)) , l_3012) == (void*)0)) != l_2889.f0.f4) >= (l_2857 = (g_1212 = ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_3020) &= p_15), ((l_2763[3][2][2] = ((void*)0 != &g_1379)) <= p_15))), p_15)), (*l_2999))) || 0x9423DFA96A932D51LL)))))));
            }
        }
    }
    else
    { 
        int64_t l_3040 = 0L;
        int32_t l_3041 = (-1L);
        int32_t l_3044 = 0xBE0B22C0L;
        int32_t l_3047 = 0x0B0A7AB8L;
        int32_t l_3050 = (-1L);
        int32_t l_3051 = 0xF1DB0842L;
        int32_t l_3053 = (-1L);
        int32_t l_3054 = 0x9FBFB7C0L;
        int32_t l_3055 = 6L;
        int32_t l_3056 = 0L;
        int32_t l_3057 = 0x7D4CE0CCL;
        uint8_t **l_3079[6][3];
        union U2 l_3080[6] = {{0x6BEAL},{0x0195L},{0x6BEAL},{0x6BEAL},{0x0195L},{0x6BEAL}};
        struct S0 l_3096 = {0x5E7F34495C941C90LL,0x64FEA01766FE964FLL,0x75E2L};
        int8_t *l_3097 = (void*)0;
        uint32_t l_3139 = 0xD8CDFF83L;
        int8_t ****l_3179[1][7][1];
        struct S0 ***l_3183[4][7][7] = {{{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,(void*)0,&l_2990,(void*)0,&l_2990,&l_2990},{(void*)0,&l_2990,&l_2990,&l_2990,(void*)0,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,(void*)0,(void*)0,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,(void*)0,&l_2990,&l_2990,&l_2990},{&l_2990,(void*)0,(void*)0,&l_2990,&l_2990,&l_2990,(void*)0},{(void*)0,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990}},{{(void*)0,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,(void*)0,(void*)0,(void*)0,&l_2990},{(void*)0,(void*)0,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990}},{{&l_2990,&l_2990,&l_2990,&l_2990,(void*)0,&l_2990,(void*)0},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{(void*)0,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,(void*)0,(void*)0,(void*)0,&l_2990}},{{(void*)0,(void*)0,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,(void*)0,&l_2990,(void*)0},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990,&l_2990},{(void*)0,&l_2990,&l_2990,&l_2990,(void*)0,(void*)0,&l_2990}}};
        int32_t *l_3245[5][1][6] = {{{&g_385[0][5][2],&g_385[0][5][2],&g_385[0][5][2],(void*)0,&l_3044,&l_3044}},{{&l_3057,&g_385[0][5][2],&g_385[0][5][2],&l_3057,&g_385[0][5][2],&l_3056}},{{&l_3056,&l_3057,&l_3044,&l_3057,&l_3056,(void*)0}},{{&l_3057,&l_3056,(void*)0,(void*)0,&l_3056,&l_3057}},{{&g_385[0][5][2],&l_3057,&g_385[0][5][2],&l_3056,&g_385[0][5][2],&l_3057}}};
        int8_t l_3246[1][2][5] = {{{0L,0L,0L,0L,0L},{0x3AL,0x3AL,0x3AL,0x3AL,0x3AL}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_3079[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 1; k++)
                    l_3179[i][j][k] = &g_2803;
            }
        }
lbl_3078:
        for (g_1989.f1 = (-22); (g_1989.f1 <= 39); ++g_1989.f1)
        { 
            int32_t **l_3025 = &g_80;
            (*l_3025) = &g_1052;
            (*l_3025) = (*l_3025);
            (**g_2381) = l_3026[3][1][2];
            (*g_451) = (*g_451);
            (**l_3025) = ((**g_2277) , 0x80C1DBA1L);
        }
        for (g_2115 = 29; (g_2115 == 16); --g_2115)
        { 
            int64_t l_3039[7] = {1L,0x6A793B7E4581EFF0LL,0x6A793B7E4581EFF0LL,1L,0x6A793B7E4581EFF0LL,0x6A793B7E4581EFF0LL,1L};
            int32_t l_3042 = 0xADC389B2L;
            int32_t l_3043 = 0xFDBBFDCDL;
            int32_t l_3045 = 0xDB4938CAL;
            int32_t l_3046 = 0x73DC3D07L;
            int32_t l_3048 = 0L;
            int32_t l_3049 = 6L;
            int32_t l_3052[5][1][3] = {{{0x1AB87927L,0x8A6C4D21L,0x1AB87927L}},{{0x1AB87927L,0x8A6C4D21L,0x1AB87927L}},{{0x1AB87927L,0x8A6C4D21L,0x1AB87927L}},{{0x1AB87927L,0x8A6C4D21L,0x1AB87927L}},{{0x1AB87927L,0x8A6C4D21L,0x1AB87927L}}};
            int i, j, k;
            for (p_15 = 29; (p_15 == 50); p_15++)
            { 
                int32_t l_3031 = 0x9CFA7CB7L;
                int32_t *l_3032 = &g_616;
                int32_t *l_3033 = &g_1052;
                int32_t *l_3034 = &l_2669;
                int32_t *l_3035 = &l_2669;
                int32_t *l_3036 = &g_385[0][5][2];
                int32_t *l_3037 = &g_60;
                int32_t *l_3038[1];
                uint32_t l_3058 = 0xBB358E82L;
                int i;
                for (i = 0; i < 1; i++)
                    l_3038[i] = &l_2857;
                l_3058++;
            }
            for (l_3046 = (-7); (l_3046 < 24); l_3046 = safe_add_func_uint32_t_u_u(l_3046, 1))
            { 
                int32_t **l_3063[6] = {&g_451,&g_451,&g_451,&g_451,&g_451,&g_451};
                int64_t *l_3071 = &g_215;
                int64_t **l_3070[2][7][5] = {{{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,(void*)0,&l_3071},{&l_3071,&l_3071,(void*)0,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,(void*)0},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071}},{{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,(void*)0,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,(void*)0,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071},{&l_3071,&l_3071,&l_3071,&l_3071,&l_3071}}};
                uint16_t *l_3075[7];
                int8_t *l_3076 = &g_1623;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_3075[i] = (void*)0;
                (*g_451) = l_3040;
                l_3064 = &l_3041;
                (*l_3064) = 0xE076668EL;
                if (p_15)
                    continue;
                l_3047 |= (+((safe_mul_func_uint8_t_u_u((1L | ((*l_3064) == (safe_lshift_func_int16_t_s_s((((p_15 == ((((l_3072 = ((**g_2361) = (void*)0)) == (void*)0) <= ((*l_3076) ^= (((*g_52) = ((((l_3042 & (safe_lshift_func_uint8_t_u_s(((*g_1282) = (((((l_3056 ^= p_15) != 0x11D3L) ^ l_3041) , (void*)0) != g_743[0])), (*l_3064)))) >= l_3042) || l_3056) & 0xC032A0C0C9C3A467LL)) > 0x0DL))) || 0x21A2F39E5EF1D666LL)) || g_3077) >= l_3043), 2)))), (-1L))) | (*g_451)));
            }
            if (l_2671)
                goto lbl_3078;
        }
        if ((*g_451))
        { 
            uint32_t l_3083 = 6UL;
            const uint8_t l_3091 = 0x7DL;
            int32_t l_3107 = 0x0B185EB5L;
            int32_t l_3108 = 0x879AE677L;
            int32_t l_3109 = 0xB731A826L;
            uint16_t *l_3133 = &g_147.f0.f0;
            int8_t *****l_3167[2];
            int8_t ****l_3189 = &g_2803;
            int i;
            for (i = 0; i < 2; i++)
                l_3167[i] = &g_2802;
            if (((l_3079[4][2] == (void*)0) ^ ((*g_1282) = ((((l_3056 &= (*l_3064)) | (*g_52)) , l_3080[4]) , ((((((*g_52) &= (safe_add_func_int32_t_s_s(l_3083, (*l_3064)))) > p_15) != 0xF73399B4BD46FFC7LL) && p_15) ^ 3UL)))))
            { 
                int16_t l_3084 = 0x7B21L;
                return l_3084;
            }
            else
            { 
                const int8_t l_3093 = (-9L);
                int32_t l_3110 = 0xA226E519L;
                int32_t l_3129 = 0xC2E49CA8L;
                for (g_584.f1 = 0; (g_584.f1 != 6); g_584.f1 = safe_add_func_uint16_t_u_u(g_584.f1, 6))
                { 
                    (*l_3064) = ((safe_add_func_int64_t_s_s(l_3057, p_15)) , p_15);
                    (*l_3064) = ((l_3083 == (safe_lshift_func_int16_t_s_s(l_3091, 3))) ^ (+p_15));
                }
                if ((*l_3064))
                { 
                    int32_t *l_3098 = (void*)0;
                    int32_t *l_3099 = &l_3050;
                    int32_t *l_3100 = &l_3056;
                    int32_t *l_3101 = (void*)0;
                    int32_t *l_3102 = (void*)0;
                    int32_t *l_3103 = (void*)0;
                    int32_t *l_3104 = &g_385[4][3][2];
                    int32_t *l_3105 = &l_2671;
                    int32_t *l_3106[4] = {&l_3055,&l_3055,&l_3055,&l_3055};
                    int i;
                    (*l_3064) = (l_3093 < (p_16 != ((0L >= (l_3055 < ((**g_1384) = (((*g_52) &= (((l_3096 , (*g_2041)) , ((0xE891L ^ p_15) , &g_213)) != (void*)0)) == 0x91L)))) , l_3097)));
                    (*g_451) = (*g_451);
                    g_3111++;
                }
                else
                { 
                    union U2 *l_3115 = &g_227;
                    union U2 **l_3114[2];
                    union U2 **l_3116 = &l_3115;
                    int32_t *l_3117 = (void*)0;
                    int32_t *l_3118 = &l_3053;
                    int32_t *l_3119 = &g_213;
                    int32_t *l_3120 = (void*)0;
                    int32_t *l_3121 = (void*)0;
                    int32_t *l_3122 = &l_3108;
                    int32_t *l_3123 = &l_2763[3][2][2];
                    int32_t *l_3124 = &g_62;
                    int32_t *l_3125 = &g_157;
                    int32_t *l_3126 = (void*)0;
                    int32_t *l_3127[1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_3114[i] = &l_3115;
                    for (i = 0; i < 1; i++)
                        l_3127[i] = &l_3047;
                    (*l_3116) = (*g_271);
                    l_3130++;
                }
            }
            if (((((*l_3133) = p_15) && (safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u((l_3080[4] , l_3139))) , ((*g_451) == (((p_15 ^ (safe_mul_func_uint16_t_u_u(((0xD9725474B9BF3AEALL == p_15) <= p_15), p_15))) && l_3108) == p_15))), g_285)), 1L))) | 0x65B2FB3D88CAF77ALL))
            { 
                int8_t l_3149 = 0x58L;
                int32_t l_3150 = 0x4AF1AEC4L;
                int32_t l_3151[3][2][5] = {{{(-3L),0xC52874CEL,0x6E9D12DDL,(-1L),(-1L)},{0xC52874CEL,(-3L),0xC52874CEL,0x6E9D12DDL,(-1L)}},{{0x13FA0B71L,(-10L),(-1L),(-10L),0x13FA0B71L},{0xC52874CEL,(-10L),(-3L),0x13FA0B71L,(-3L)}},{{(-3L),(-3L),(-1L),0x13FA0B71L,0x5067B406L},{(-10L),0xC52874CEL,0xC52874CEL,(-10L),(-3L)}}};
                const union U2 ***l_3165 = &g_2005;
                const union U2 ****l_3164 = &l_3165;
                int i, j, k;
                (*l_3064) &= p_15;
                for (g_294 = 0; (g_294 >= 16); g_294 = safe_add_func_int64_t_s_s(g_294, 4))
                { 
                    (*g_451) = 0x33ECB2F4L;
                }
                for (g_147.f0.f4 = 0; (g_147.f0.f4 <= 6); g_147.f0.f4 += 1)
                { 
                    int32_t *l_3144 = &g_385[0][5][2];
                    int32_t *l_3145 = &g_213;
                    int32_t *l_3146 = &l_3041;
                    int32_t *l_3147 = &g_213;
                    int32_t *l_3148[1][5];
                    uint64_t l_3153 = 1UL;
                    uint16_t **l_3156 = &l_3133;
                    int8_t l_3166 = (-9L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_3148[i][j] = &l_3044;
                    }
                    --l_3153;
                    if ((*g_451))
                        continue;
                    (*g_451) &= (((18446744073709551610UL != (&p_15 != ((*l_3156) = &g_294))) , (((safe_lshift_func_uint16_t_u_s(2UL, (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_3166 = ((((l_3054 = p_15) , g_3163[2][1]) == l_3164) == p_15)), 2)), (*l_3064))))) || l_3080[4].f1) , &g_2802)) == l_3167[1]);
                }
            }
            else
            { 
                uint64_t l_3173 = 0x533AE45C9687479FLL;
                uint64_t l_3176 = 0x481632EF5861D586LL;
                (*g_2382) = (*g_2382);
                for (g_215 = 0; (g_215 <= 4); g_215 += 1)
                { 
                    int32_t *l_3168 = &l_3056;
                    int32_t *l_3169 = &g_157;
                    int32_t *l_3170 = &l_3057;
                    int32_t *l_3171[6][2][1] = {{{&l_3054},{&g_385[3][0][0]}},{{&l_3054},{&g_385[3][0][0]}},{{&l_3054},{&g_385[3][0][0]}},{{&l_3054},{&g_385[3][0][0]}},{{&l_3054},{&g_385[3][0][0]}},{{&l_3054},{&g_385[3][0][0]}}};
                    int8_t l_3172 = 0x07L;
                    struct S0 *** const l_3182 = &l_2990;
                    struct S0 ****l_3184 = &l_3183[1][2][3];
                    int32_t **l_3192[4] = {&l_3169,&l_3169,&l_3169,&l_3169};
                    int i, j, k;
                    --l_3173;
                    if ((*g_451))
                        break;
                    (*g_451) ^= ((l_3176 , 0x5EL) > (safe_rshift_func_uint16_t_u_u((((l_3179[0][0][0] == (((safe_lshift_func_uint8_t_u_s((l_3108 = (l_3182 == ((*l_3184) = l_3183[2][3][2]))), 0)) == (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, 12)), 4))) , (l_3191 = (l_3190 = l_3189)))) ^ 0x0A9AB155L) , (*l_3064)), p_15)));
                    l_3193 = &l_3057;
                    if (l_3054)
                        break;
                }
                return l_3050;
            }
        }
        else
        { 
            struct S1 ***l_3197[2][3][3] = {{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382}},{{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382},{&g_2382,&g_2382,&g_2382}}};
            int32_t l_3206 = 0x1FC6B570L;
            int64_t l_3214[6][4][1];
            int32_t l_3221[4][4][4] = {{{0x70F6D70BL,2L,0x70F6D70BL,1L},{0x96D333BDL,2L,0xC4402D8EL,2L},{0x96D333BDL,1L,0x70F6D70BL,2L},{0x70F6D70BL,2L,0x70F6D70BL,1L}},{{0x96D333BDL,2L,0xC4402D8EL,2L},{0x96D333BDL,1L,0x70F6D70BL,2L},{0xC4402D8EL,1L,0xC4402D8EL,0xC30CB2EDL},{0x70F6D70BL,1L,0x96D333BDL,1L}},{{0x70F6D70BL,0xC30CB2EDL,0xC4402D8EL,1L},{0xC4402D8EL,1L,0xC4402D8EL,0xC30CB2EDL},{0x70F6D70BL,1L,0x96D333BDL,1L},{0x70F6D70BL,0xC30CB2EDL,0xC4402D8EL,1L}},{{0xC4402D8EL,1L,0xC4402D8EL,0xC30CB2EDL},{0x70F6D70BL,1L,0x96D333BDL,1L},{0x70F6D70BL,0xC30CB2EDL,0xC4402D8EL,1L},{0xC4402D8EL,1L,0xC4402D8EL,0xC30CB2EDL}}};
            uint32_t l_3242[6] = {4294967295UL,4294967295UL,0x539BF2E9L,4294967295UL,4294967295UL,0x539BF2E9L};
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_3214[i][j][k] = 0xC6C128056E81EF96LL;
                }
            }
            for (l_2671 = 0; (l_2671 == (-12)); --l_2671)
            { 
                uint16_t l_3207 = 0xFE88L;
                int64_t l_3235 = (-8L);
                int32_t l_3238 = 0x1B3D1D7AL;
                int32_t l_3241 = (-3L);
                if ((safe_unary_minus_func_int32_t_s(8L)))
                { 
                    if (p_15)
                        break;
                }
                else
                { 
                    (*g_451) |= l_3054;
                    l_3197[1][0][2] = &g_2382;
                }
                (*l_3193) = (safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(l_3057, (((safe_mul_func_int8_t_s_s((l_3221[3][2][3] &= ((safe_mul_func_int8_t_s_s((l_3206 &= p_15), (l_3207 != ((*g_1282) = (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((p_15 != l_3214[0][2][0]) >= ((**g_1384) || (safe_mul_func_uint16_t_u_u((+(safe_lshift_func_int16_t_s_s(p_15, (**g_1384)))), l_3220[5][2])))), 0xB1095615CD57FD61LL)), l_3207)), l_3214[0][2][0])))))) != 0x50L)), (-4L))) & l_3207) != p_15))) , p_15) , l_3050) | l_3214[1][0][0]), p_15));
                if ((((((!(l_3221[3][2][1] <= (((void*)0 == (*g_2277)) > (safe_rshift_func_uint8_t_u_s(((*g_1282) &= (~(safe_div_func_uint64_t_u_u((g_3230[1][0] , (((safe_add_func_uint64_t_u_u(((**g_1384) | (l_3207 == l_3207)), 18446744073709551615UL)) == 1UL) != (***g_653))), l_3096.f1)))), (*l_3064)))))) , p_15) , (-2L)) | 0UL) | (*g_52)))
                { 
                    if (l_3235)
                        break;
                    (*l_3064) &= ((void*)0 != &g_743[0]);
                }
                else
                { 
                    return p_15;
                }
                for (g_2115 = (-7); (g_2115 == 9); g_2115++)
                { 
                    int32_t *l_3239 = &l_2763[3][2][2];
                    int32_t *l_3240[6][7][2] = {{{&g_213,&g_3},{&l_3047,&l_3044},{&l_3056,&g_157},{&g_62,&l_3057},{&l_3051,&l_3056},{&g_3,&g_213},{&l_3238,&g_62}},{{&l_3056,&l_3206},{&l_3056,&l_3206},{&l_3056,&g_62},{&l_3238,&g_213},{&g_3,&l_3056},{&l_3051,&l_3057},{&g_62,&g_157}},{{&l_3056,&l_3044},{&l_3047,&g_3},{&g_213,&g_62},{&l_2763[3][2][2],&l_3057},{&l_3044,&l_2672},{&l_3051,&g_385[0][5][2]},{&l_3238,&l_3238}},{{&g_213,&l_3044},{(void*)0,&l_3206},{&g_385[0][5][2],&g_157},{&l_2763[3][2][2],&g_385[0][5][2]},{&g_3,&l_3047},{&g_3,&g_385[0][5][2]},{&l_2763[3][2][2],&g_157}},{{&g_385[0][5][2],&l_3206},{(void*)0,&l_3044},{&g_213,&l_3238},{&l_3238,&g_385[0][5][2]},{&l_3051,&l_2672},{&l_3044,&l_3057},{&l_2763[3][2][2],&g_62}},{{&g_213,&g_3},{&l_3047,&l_3044},{&l_3056,&g_157},{&g_62,&l_3057},{&l_3051,&l_3056},{&g_3,&g_213},{&l_3238,&g_62}}};
                    int i, j, k;
                    (*g_451) &= (*l_3064);
                    l_3242[1]--;
                    return l_3206;
                }
            }
        }
        ++l_3247;
        for (l_3055 = 0; (l_3055 == 25); l_3055 = safe_add_func_uint32_t_u_u(l_3055, 9))
        { 
            struct S0 **l_3254 = &g_469;
            int64_t *l_3255[7] = {&g_2115,&g_2115,&g_74,&g_2115,&g_2115,&g_74,&g_2115};
            int32_t l_3256 = 0L;
            const uint32_t **l_3257 = (void*)0;
            const uint32_t *l_3259 = &l_2889.f0.f4;
            const uint32_t **l_3258 = &l_3259;
            int32_t l_3260 = 0xF85108A7L;
            int32_t **l_3261[5][4] = {{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80}};
            uint32_t l_3270 = 18446744073709551615UL;
            int i, j;
            (*g_451) = (0xF5DED851L ^ ((safe_div_func_int32_t_s_s((((l_3256 ^= ((l_3254 != (void*)0) >= (**g_654))) >= ((*l_3193) = (((*l_3258) = &g_66) == &g_1212))) & ((((*g_655) != 0xC8F25DFF1D0BF5C8LL) > 0xF529740EL) & l_3260)), p_15)) , g_1886[3][2].f0.f3));
            l_3064 = &g_3;
            (*l_3193) ^= ((safe_mul_func_uint8_t_u_u(p_15, 0x67L)) == (((void*)0 == l_3254) < ((g_584.f0.f0 = p_15) == ((*g_1385) ^= ((&g_2381 == l_3264) == p_15)))));
            l_3270 &= ((*l_3064) & (p_15 < (safe_rshift_func_uint8_t_u_s(0xF9L, 3))));
        }
    }
    return p_15;
}



static uint8_t * func_17(uint8_t  p_18)
{ 
    uint64_t l_31[3];
    int32_t l_1997 = 0x49E3C8D3L;
    int32_t l_1998[7];
    uint32_t l_1999 = 0x792D8C20L;
    const union U2 ***l_2007[5] = {&g_2005,&g_2005,&g_2005,&g_2005,&g_2005};
    uint32_t *l_2026 = (void*)0;
    uint16_t l_2086 = 4UL;
    uint8_t l_2098 = 0xAEL;
    const int16_t *l_2150 = (void*)0;
    const int16_t **l_2149 = &l_2150;
    const int16_t *** const l_2148 = &l_2149;
    uint16_t l_2198[3][2][3] = {{{0x73FBL,0UL,0x73FBL},{1UL,1UL,1UL}},{{0x73FBL,0UL,0x73FBL},{1UL,1UL,1UL}},{{0x73FBL,0UL,0x73FBL},{1UL,1UL,1UL}}};
    const uint8_t l_2218 = 7UL;
    union U2 l_2219[5][3] = {{{0x1ECCL},{0x1ECCL},{0x1ECCL}},{{0x1ECCL},{0x1ECCL},{0x1ECCL}},{{0x1ECCL},{0x1ECCL},{0x1ECCL}},{{0x1ECCL},{0x1ECCL},{0x1ECCL}},{{0x1ECCL},{0x1ECCL},{0x1ECCL}}};
    uint64_t **l_2230 = &g_715[0][0];
    int32_t l_2255 = 0L;
    int32_t l_2256 = 0x00544009L;
    struct S0 **l_2274[1][7][6] = {{{&g_469,(void*)0,&g_469,&g_469,&g_469,&g_469},{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469},{&g_469,&g_469,&g_469,&g_469,(void*)0,&g_469},{&g_469,(void*)0,&g_469,&g_469,&g_469,&g_469},{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469},{&g_469,&g_469,&g_469,&g_469,&g_469,(void*)0},{&g_469,&g_469,&g_469,&g_469,&g_469,&g_469}}};
    union U3 l_2320 = {{0x662BL,0x28FBCA93L,-1L,8UL,0UL,0L}};
    struct S1 ** const *l_2384 = &g_2382;
    uint8_t *l_2419 = &g_50;
    int8_t ***l_2449 = &g_257;
    int8_t ****l_2448 = &l_2449;
    int16_t **l_2469 = &g_1385;
    uint16_t l_2538 = 4UL;
    uint32_t l_2540 = 3UL;
    union U3 ****l_2569 = &g_1656;
    int32_t l_2616 = 0xDB1BC31AL;
    uint8_t *l_2648 = &l_2098;
    uint8_t *l_2649 = &l_2098;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_31[i] = 18446744073709551610UL;
    for (i = 0; i < 7; i++)
        l_1998[i] = (-1L);
    if ((safe_mod_func_int64_t_s_s(func_21(func_27(func_29(l_31[2])), (((safe_mul_func_int16_t_s_s(p_18, ((safe_mul_func_int16_t_s_s((l_31[1] , ((safe_unary_minus_func_int32_t_s((l_31[1] && ((!l_31[1]) >= l_31[2])))) != 0x2FFAL)), l_31[2])) == p_18))) , 4UL) , &p_18), l_31[2], l_31[2], l_31[2]), 18446744073709551611UL)))
    { 
        int64_t l_1994[2][2][4] = {{{0xCB2EC6F0D4A7C769LL,0L,(-1L),(-1L)},{0x1F199E1F9531DEFCLL,0x1F199E1F9531DEFCLL,0xCB2EC6F0D4A7C769LL,(-1L)}},{{(-3L),0L,(-3L),0xCB2EC6F0D4A7C769LL},{(-3L),0xCB2EC6F0D4A7C769LL,0xCB2EC6F0D4A7C769LL,(-3L)}}};
        int32_t *l_1995 = &g_616;
        int32_t *l_1996[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1996[i] = &g_157;
        ++l_1999;
    }
    else
    { 
        uint8_t *l_2002 = &g_75;
        return l_2002;
    }
    (*g_451) |= (safe_lshift_func_int8_t_s_s(((g_2005 = g_2005) == &g_2006), (0x2C26L <= (safe_rshift_func_uint8_t_u_u((*g_52), ((safe_sub_func_int8_t_s_s(l_1998[4], 7UL)) < (safe_mod_func_uint16_t_u_u((*g_1379), (**g_1378)))))))));
    for (g_1989.f2 = 0; (g_1989.f2 == 17); g_1989.f2 = safe_add_func_int8_t_s_s(g_1989.f2, 7))
    { 
        uint32_t l_2018 = 0UL;
        uint64_t *****l_2023 = &g_1877;
        int8_t ***l_2033 = (void*)0;
        struct S1 *l_2039 = &g_147.f0;
        int32_t l_2043 = 0xC55CA0DAL;
        int32_t l_2068[2][3][5] = {{{0L,1L,0xAE5124A7L,1L,0L},{0L,1L,0xAE5124A7L,1L,0L},{0L,1L,0xAE5124A7L,1L,0L}},{{0L,1L,0xAE5124A7L,1L,0L},{0L,1L,0xAE5124A7L,1L,0L},{0L,1L,0xAE5124A7L,1L,0L}}};
        uint8_t *l_2091[4][1];
        int16_t *l_2109 = &g_382;
        union U3 *l_2123 = (void*)0;
        int16_t ***l_2146[7] = {&g_1384,&g_1384,&g_1384,&g_1384,&g_1384,&g_1384,&g_1384};
        struct S0 l_2174[2] = {{-2L,0x3547ADA87189E9F6LL,0x4653L},{-2L,0x3547ADA87189E9F6LL,0x4653L}};
        int16_t l_2196 = 0xD744L;
        int64_t l_2197 = (-1L);
        union U3 l_2354 = {{1UL,0x4EB19E16L,0L,0xC2AE5384L,1UL,0x1FEBL}};
        int32_t l_2375 = 0xC5D0741BL;
        int32_t l_2440 = 0x0B86E02AL;
        int64_t l_2518 = (-1L);
        uint16_t *l_2555 = &g_294;
        uint16_t **l_2554 = &l_2555;
        uint16_t ***l_2553 = &l_2554;
        uint16_t ***l_2556 = (void*)0;
        int64_t **l_2570 = &g_268[1][0];
        int32_t l_2571 = 0x566B73B2L;
        uint32_t l_2581 = 0xC490CEA3L;
        union U2 *l_2584[7] = {&l_2219[1][2],&l_2219[1][2],&l_2219[1][2],&l_2219[1][2],&l_2219[1][2],&l_2219[1][2],&l_2219[1][2]};
        union U2 **l_2583 = &l_2584[6];
        int32_t *l_2607 = &l_2068[1][0][3];
        int64_t l_2621 = (-1L);
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_2091[i][j] = &g_227.f1;
        }
    }
    return g_2650;
}



static int64_t  func_21(uint8_t * p_22, uint8_t * p_23, uint8_t  p_24, const uint16_t  p_25, const int8_t  p_26)
{ 
    int16_t **l_1943 = &g_1385;
    int32_t l_1946[5][6] = {{1L,0x8B3A5C74L,0x8B3A5C74L,1L,0x8B3A5C74L,0x8B3A5C74L},{1L,0x8B3A5C74L,0x8B3A5C74L,1L,0x8B3A5C74L,0x8B3A5C74L},{1L,0x8B3A5C74L,0x8B3A5C74L,1L,0x8B3A5C74L,0x8B3A5C74L},{1L,0x8B3A5C74L,0x8B3A5C74L,1L,0x8B3A5C74L,0x8B3A5C74L},{1L,0x8B3A5C74L,0x8B3A5C74L,1L,0x8B3A5C74L,0x8B3A5C74L}};
    int64_t l_1967 = 0x00EA18F469657360LL;
    union U3 ***** const l_1986[1][5][3] = {{{&g_1655,&g_1655,&g_1655},{&g_1655,&g_1655,&g_1655},{&g_1655,&g_1655,&g_1655},{&g_1655,&g_1655,&g_1655},{&g_1655,&g_1655,&g_1655}}};
    uint64_t l_1991 = 0x30B63E91CB64B693LL;
    int i, j, k;
    for (g_50 = 0; (g_50 <= 30); g_50++)
    { 
        uint64_t l_1945 = 18446744073709551611UL;
        struct S1 ***l_1954 = (void*)0;
        struct S1 ****l_1953[1];
        int32_t l_1964 = 1L;
        int16_t l_1966[7] = {1L,(-1L),(-1L),1L,(-1L),(-1L),1L};
        int32_t l_1971 = (-6L);
        int32_t l_1972 = 0x981271A3L;
        int32_t l_1973[7][4][6] = {{{0xAAC392ECL,1L,0xA64BF537L,0x0B21C84BL,(-2L),0x973DCF71L},{0xF0C6A561L,0xAAC392ECL,0xA64BF537L,0x67155600L,(-5L),0x2B4ED3E8L},{0xA078002AL,0x67155600L,0x973DCF71L,0xE021D0B5L,(-4L),0xB22A00DCL},{0xE021D0B5L,(-4L),0xB22A00DCL,1L,0L,0xB0C1D2A9L}},{{0x973DCF71L,0x6D64F230L,0x3096444FL,0x86941613L,(-3L),(-5L)},{0x2B4ED3E8L,0x9EF43A3BL,0x0B21C84BL,(-3L),0xF0C6A561L,1L},{0xAAC392ECL,0L,(-1L),0xA64BF537L,0L,0x3096444FL},{(-1L),(-6L),0x90606E91L,0xAAC392ECL,1L,0x5F114597L}},{{1L,0x21DAF00EL,0L,0L,0L,0x21DAF00EL},{0xA078002AL,0xE021D0B5L,(-6L),0x6D64F230L,0x86941613L,(-4L)},{1L,(-2L),0x9EF43A3BL,1L,0x9DFE65CBL,0L},{0L,(-2L),0x5F114597L,0x2B4ED3E8L,0x86941613L,8L}},{{0x3096444FL,0xE021D0B5L,0xFE2350A5L,0x6CED2CB0L,0L,0x973DCF71L},{0xE03B6820L,0x21DAF00EL,0x3096444FL,0L,1L,0x86941613L},{0x5394264BL,(-6L),8L,0L,0L,0L},{(-3L),0L,0L,0xB22A00DCL,0xF0C6A561L,0x6D5FD325L}},{{0x8E8DB3CFL,0x9EF43A3BL,1L,4L,0x2B4ED3E8L,0xE03B6820L},{0xB0C1D2A9L,0L,0xDB27C8E4L,(-4L),0x90606E91L,(-3L)},{0x9EF43A3BL,0L,(-1L),(-1L),0L,0x9EF43A3BL},{1L,0xFE2350A5L,0x9233B7AFL,0x5394264BL,1L,0L}},{{0xEC5605A4L,0xB22A00DCL,0xA64BF537L,0x21DAF00EL,0L,1L},{0xEC5605A4L,0x9DFE65CBL,0x21DAF00EL,0x5394264BL,(-3L),(-1L)},{1L,1L,(-9L),(-1L),1L,0xFE2350A5L},{0x9EF43A3BL,0xA078002AL,0L,(-4L),(-5L),0x9C471647L}},{{0xB0C1D2A9L,0xA7447A36L,0L,4L,0x6CED2CB0L,0x9233B7AFL},{0x8E8DB3CFL,0L,0x6D64F230L,0xB22A00DCL,(-5L),0xB0C1D2A9L},{(-3L),8L,(-2L),0L,(-6L),0x2B4ED3E8L},{0x5394264BL,0xB0C1D2A9L,0x86941613L,0L,0L,4L}}};
        uint8_t l_1974[1];
        struct S0 *l_1988[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1953[i] = &l_1954;
        for (i = 0; i < 1; i++)
            l_1974[i] = 0x72L;
        for (i = 0; i < 2; i++)
            l_1988[i] = &g_1989;
        if ((safe_mul_func_uint16_t_u_u(0x412DL, p_25)))
        { 
            return p_24;
        }
        else
        { 
            const uint8_t *l_1944 = &g_50;
            int32_t *l_1947 = &g_385[5][5][1];
            int32_t l_1955 = 0x373939D1L;
            int32_t l_1965 = 1L;
            int32_t l_1968 = 0xCE47F278L;
            int32_t l_1969 = 0xC895B867L;
            int32_t l_1970 = 3L;
            int32_t *l_1990[7][3][1] = {{{&l_1946[2][3]},{&l_1973[2][3][4]},{&l_1946[2][3]}},{{&g_157},{&l_1946[2][3]},{&l_1973[2][3][4]}},{{&l_1946[2][3]},{&g_157},{&l_1946[2][3]}},{{&l_1973[2][3][4]},{&l_1946[2][3]},{&g_157}},{{&l_1946[2][3]},{&l_1973[2][3][4]},{&l_1946[2][3]}},{{&g_157},{&l_1946[2][3]},{&l_1973[2][3][4]}},{{&l_1946[2][3]},{&g_157},{&l_1946[2][3]}}};
            int i, j, k;
            (*l_1947) ^= ((*g_451) = ((((**g_1378) , (((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((0UL ^ (*g_451)) && ((*p_23) < ((*g_1282) = (safe_mul_func_uint8_t_u_u(((l_1943 != (void*)0) && ((void*)0 != l_1944)), 255UL))))), 6)), l_1945)) , p_24) && l_1946[2][4]) , l_1945) >= 0x2AL)) || l_1946[0][0]) & l_1946[2][4]));
            for (l_1945 = 8; (l_1945 == 33); ++l_1945)
            { 
                struct S1 **l_1952 = &g_610;
                struct S1 ***l_1951 = &l_1952;
                struct S1 ****l_1950 = &l_1951;
                int32_t *l_1956 = &l_1946[2][4];
                int32_t *l_1957 = &l_1955;
                int32_t *l_1958 = (void*)0;
                int32_t *l_1959 = (void*)0;
                int32_t *l_1960 = &g_385[4][3][2];
                int32_t *l_1961 = &g_62;
                int32_t *l_1962 = (void*)0;
                int32_t *l_1963[3][2] = {{&g_3,&g_3},{&g_3,&g_3},{&g_3,&g_3}};
                uint32_t l_1977[5];
                int8_t *l_1982 = &g_1869;
                int8_t *l_1983 = &g_141[1];
                int8_t *l_1984[1];
                union U3 *****l_1985 = &g_1655;
                struct S0 **l_1987[6] = {&g_469,&g_469,&g_469,&g_469,&g_469,&g_469};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1977[i] = 0x3EA6CBB6L;
                for (i = 0; i < 1; i++)
                    l_1984[i] = &g_591;
                l_1953[0] = l_1950;
                l_1974[0]++;
                --l_1977[0];
                l_1946[2][4] = ((((((+p_26) & ((*l_1947) = ((*l_1983) = ((*l_1982) = (g_1981 != (void*)0))))) ^ (l_1985 != l_1986[0][2][2])) > 0xEACFL) && (((l_1988[0] = &g_1084[0][0]) == (void*)0) | (-1L))) && 0L);
            }
            ++l_1991;
            for (g_382 = 0; g_382 < 7; g_382 += 1)
            {
                l_1966[g_382] = 0x20F3L;
            }
        }
        return l_1946[2][4];
    }
    return p_24;
}



static uint8_t * func_27(const union U2  p_28)
{ 
    int32_t l_335[7] = {0x55B16088L,0L,0x55B16088L,0x55B16088L,0L,0x55B16088L,0x55B16088L};
    int16_t *l_338 = &g_289;
    uint16_t *l_339 = &g_294;
    int32_t l_340 = 0x5588CD48L;
    int8_t *l_353[4];
    int64_t * const *l_354 = &g_268[1][0];
    uint64_t *l_355[6][7][6] = {{{&g_130.f1,(void*)0,(void*)0,(void*)0,&g_113[0],&g_130.f1},{&g_113[0],&g_113[0],&g_130.f1,&g_113[0],&g_113[0],&g_312},{(void*)0,&g_113[0],(void*)0,(void*)0,&g_113[0],&g_218},{&g_312,&g_113[0],&g_113[0],&g_218,&g_113[0],&g_113[0]},{(void*)0,&g_312,&g_218,&g_113[0],&g_113[0],&g_218},{&g_218,&g_218,&g_113[0],&g_113[0],&g_113[0],&g_113[0]},{&g_312,&g_113[0],&g_218,&g_130.f1,&g_218,&g_113[0]}},{{(void*)0,&g_312,&g_218,&g_113[0],&g_218,&g_113[0]},{&g_113[0],&g_113[0],&g_113[0],&g_113[0],&g_113[0],&g_218},{&g_113[0],&g_113[0],&g_218,&g_312,(void*)0,&g_113[0]},{&g_218,&g_113[0],&g_113[0],&g_218,(void*)0,&g_218},{(void*)0,&g_312,(void*)0,(void*)0,&g_130.f1,(void*)0},{&g_113[0],&g_130.f1,&g_130.f1,(void*)0,&g_113[0],&g_113[0]},{(void*)0,&g_113[0],&g_113[0],&g_218,(void*)0,(void*)0}},{{&g_218,&g_218,&g_130.f1,&g_312,&g_130.f1,&g_130.f1},{&g_113[0],(void*)0,&g_218,&g_113[0],&g_130.f1,&g_113[0]},{&g_113[0],&g_218,&g_113[0],&g_113[0],&g_312,&g_130.f1},{(void*)0,&g_113[0],&g_312,&g_130.f1,&g_312,&g_130.f1},{&g_312,&g_218,&g_312,&g_113[0],&g_130.f1,(void*)0},{&g_218,(void*)0,&g_113[0],&g_113[0],&g_130.f1,&g_218},{(void*)0,&g_218,(void*)0,&g_218,(void*)0,&g_113[0]}},{{&g_312,&g_113[0],(void*)0,(void*)0,&g_113[0],&g_218},{&g_218,&g_130.f1,(void*)0,&g_113[0],&g_130.f1,&g_218},{(void*)0,&g_312,(void*)0,&g_312,(void*)0,&g_113[0]},{&g_130.f1,&g_113[0],(void*)0,&g_113[0],(void*)0,&g_218},{&g_113[0],&g_113[0],&g_113[0],&g_113[0],&g_113[0],(void*)0},{&g_113[0],&g_113[0],&g_312,&g_312,&g_218,&g_130.f1},{&g_113[0],&g_312,&g_312,&g_130.f1,&g_218,&g_130.f1}},{{&g_113[0],&g_113[0],&g_113[0],&g_312,&g_113[0],&g_113[0]},{&g_113[0],&g_218,&g_218,&g_113[0],&g_113[0],&g_130.f1},{&g_113[0],&g_312,&g_130.f1,&g_113[0],&g_113[0],(void*)0},{&g_130.f1,&g_113[0],&g_113[0],&g_312,&g_113[0],&g_113[0]},{(void*)0,&g_113[0],&g_130.f1,&g_113[0],&g_113[0],(void*)0},{&g_218,&g_113[0],(void*)0,(void*)0,&g_113[0],&g_218},{&g_113[0],&g_312,(void*)0,&g_218,(void*)0,&g_130.f1}},{{&g_312,&g_130.f1,&g_113[0],&g_312,&g_312,&g_113[0]},{&g_218,&g_218,&g_218,&g_312,(void*)0,&g_312},{&g_130.f1,&g_312,&g_113[0],&g_218,&g_218,&g_218},{(void*)0,&g_130.f1,&g_113[0],(void*)0,&g_218,&g_312},{&g_113[0],(void*)0,&g_218,(void*)0,&g_218,&g_113[0]},{(void*)0,&g_218,&g_113[0],&g_218,&g_113[0],&g_130.f1},{&g_312,&g_113[0],(void*)0,&g_113[0],&g_113[0],&g_312}}};
    uint16_t l_375 = 0xA4DFL;
    int32_t l_380 = 0xCC833727L;
    int32_t l_386 = 0xF3BAD6BFL;
    int32_t l_388[6] = {1L,1L,1L,1L,1L,1L};
    const int16_t *l_418 = &g_419;
    union U2 *l_458[4][3] = {{&g_273[3],&g_227,(void*)0},{&g_227,&g_227,&g_227},{&g_227,&g_273[3],(void*)0},{&g_227,&g_227,&g_273[3]}};
    union U2 **l_457[7] = {&l_458[2][1],&l_458[2][1],(void*)0,&l_458[2][1],&l_458[2][1],(void*)0,&l_458[2][1]};
    union U2 ***l_456 = &l_457[3];
    union U2 ****l_455 = &l_456;
    uint32_t *l_463 = (void*)0;
    struct S0 *l_472 = &g_473;
    int8_t l_481[4] = {1L,1L,1L,1L};
    union U3 l_518[1][4] = {{{{0x314EL,18446744073709551615UL,0L,0x91DE5A42L,0x1FB8ECBAL,0xB9D0L}},{{0x314EL,18446744073709551615UL,0L,0x91DE5A42L,0x1FB8ECBAL,0xB9D0L}},{{0x314EL,18446744073709551615UL,0L,0x91DE5A42L,0x1FB8ECBAL,0xB9D0L}},{{0x314EL,18446744073709551615UL,0L,0x91DE5A42L,0x1FB8ECBAL,0xB9D0L}}}};
    int32_t l_530 = (-1L);
    union U2 l_579 = {0UL};
    uint32_t l_630[1];
    int64_t l_648[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint64_t *** const *l_868[3];
    uint64_t ****l_900 = &g_713;
    uint32_t l_967 = 0xA92723A9L;
    int32_t l_993 = 5L;
    int64_t l_1032 = (-1L);
    uint32_t l_1053 = 4294967295UL;
    int32_t *l_1057[1];
    int32_t **l_1056 = &l_1057[0];
    uint8_t ****l_1067 = (void*)0;
    const union U2 *l_1077 = &g_1078;
    union U2 l_1103 = {0x1591L};
    uint16_t l_1144[5][6] = {{0UL,1UL,0UL,0UL,0UL,1UL},{65535UL,1UL,2UL,65535UL,0UL,0UL},{0UL,1UL,1UL,0UL,0UL,2UL},{0UL,1UL,0UL,0UL,0UL,1UL},{65535UL,1UL,2UL,65535UL,0UL,0UL}};
    uint8_t l_1166 = 0UL;
    uint32_t l_1177 = 0xC5A977E3L;
    int64_t **l_1211 = &g_268[1][0];
    uint64_t l_1240 = 0x502D5EB3AEF5E692LL;
    int32_t l_1257 = (-1L);
    int16_t l_1277 = 0xB5A5L;
    uint32_t l_1279 = 1UL;
    union U3 *l_1323 = &g_147;
    union U3 **l_1322 = &l_1323;
    uint64_t *****l_1326 = &g_901;
    uint16_t l_1424 = 0xF0A8L;
    int32_t l_1475 = 1L;
    int32_t l_1497 = 0x37F64E09L;
    uint32_t l_1516 = 0x6DAA75F8L;
    struct S1 *l_1517 = &g_147.f0;
    uint16_t l_1539 = 65535UL;
    int32_t l_1673 = (-1L);
    int8_t l_1699 = 9L;
    uint32_t l_1733[2];
    int8_t l_1788 = 0xBCL;
    int32_t * const l_1819[7][1][1] = {{{&l_388[0]}},{{&l_993}},{{&l_388[0]}},{{&l_993}},{{&l_388[0]}},{{&l_993}},{{&l_388[0]}}};
    int8_t l_1920 = (-1L);
    uint8_t *l_1924 = &g_227.f1;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_353[i] = &g_141[1];
    for (i = 0; i < 1; i++)
        l_630[i] = 0x4791F80DL;
    for (i = 0; i < 3; i++)
        l_868[i] = &g_713;
    for (i = 0; i < 1; i++)
        l_1057[i] = &g_290;
    for (i = 0; i < 2; i++)
        l_1733[i] = 0x87EFD660L;
    l_340 |= (((safe_lshift_func_int8_t_s_s(((void*)0 == &g_294), 7)) <= ((*l_339) &= (((**g_271) , (safe_sub_func_int16_t_s_s(((*l_338) = (1L ^ (l_335[0] , ((p_28.f0 == 1L) < 1UL)))), p_28.f1))) , 0x2F98L))) & p_28.f0);
    return l_1924;
}



static union U2  func_29(int16_t  p_30)
{ 
    uint8_t l_32[5];
    int32_t l_174 = 4L;
    int32_t l_184[2][7] = {{0x2725A889L,(-2L),0x2725A889L,(-2L),0x2725A889L,(-2L),0x2725A889L},{0x504B5D79L,0x504B5D79L,0x504B5D79L,0x504B5D79L,0x504B5D79L,0x504B5D79L,0x504B5D79L}};
    struct S0 *l_196 = &g_130;
    int16_t l_230[4] = {0x4067L,0x4067L,0x4067L,0x4067L};
    uint8_t l_233 = 253UL;
    int64_t l_253 = 9L;
    uint8_t l_316 = 1UL;
    uint64_t l_320 = 0x7E3E8016A9ADC7AFLL;
    union U2 l_332 = {0xD58AL};
    int i, j;
    for (i = 0; i < 5; i++)
        l_32[i] = 0xA4L;
    --l_32[3];
    for (p_30 = 0; (p_30 != (-28)); --p_30)
    { 
        int16_t l_152 = 1L;
        union U2 l_169 = {8UL};
        int32_t l_191 = 0x6C0BC80BL;
        union U2 *l_206 = &l_169;
        union U2 **l_205 = &l_206;
        union U2 ***l_204 = &l_205;
        int32_t l_212 = 0xF247FFD2L;
        int32_t l_216[7] = {0xDDEFA42DL,0xDDEFA42DL,0xDDEFA42DL,0xDDEFA42DL,0xDDEFA42DL,0xDDEFA42DL,0xDDEFA42DL};
        union U3 l_248 = {{0xEE26L,18446744073709551614UL,0x3FB1A0FEL,0x317C9CA4L,0x6F4952A9L,8L}};
        int8_t *l_259 = &g_141[1];
        int8_t **l_258 = &l_259;
        int32_t *l_331 = &l_191;
        int i;
        if (g_3)
        { 
            uint8_t *l_39[4][2] = {{&l_32[3],&l_32[3]},{&l_32[3],&l_32[3]},{&l_32[3],&l_32[3]},{&l_32[3],&l_32[3]}};
            int32_t l_150 = 0x41618F1EL;
            int32_t l_165 = 4L;
            int32_t l_192 = 0x15590E78L;
            int32_t *l_199 = &l_165;
            union U2 *l_202 = (void*)0;
            union U2 **l_201 = &l_202;
            union U2 ***l_200 = &l_201;
            int8_t l_214 = 0L;
            int32_t l_232[2][4];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_232[i][j] = 0x02BC9507L;
            }
            if ((safe_lshift_func_int8_t_s_s((((((void*)0 == l_39[2][1]) & (g_3 , (-9L))) && (safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u((func_44(g_3) < 0x6AC6E247L), 11)) || l_150) >= g_147.f0.f2), 8))) , g_113[0]), g_141[1])))
            { 
                union U2 l_158 = {65528UL};
                int32_t *l_166 = &l_150;
                uint32_t *l_167 = (void*)0;
                uint32_t *l_168 = &g_66;
                l_165 |= ((safe_unary_minus_func_int64_t_s(l_152)) < ((((safe_sub_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u((g_157 |= g_130.f2), (((l_158 , (safe_lshift_func_int8_t_s_u((-3L), (*g_52)))) != (0L <= ((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u((p_30 | l_152), l_32[3])) , l_150) < l_150) || 1L), g_147.f0.f4)) ^ (*g_52)))) || g_113[0]))) , (void*)0) == (void*)0), 0x7DA9072AC36249A0LL)) & l_150) && p_30) & 18446744073709551610UL));
                (*l_166) ^= l_165;
                (*l_166) = ((0x11L ^ g_60) < ((*l_168) &= p_30));
                for (g_142 = 0; (g_142 <= 1); g_142 += 1)
                { 
                    return l_169;
                }
            }
            else
            { 
                int32_t *l_170 = (void*)0;
                int32_t *l_171 = (void*)0;
                int32_t l_175 = 0xC9105A86L;
                uint64_t l_229[4] = {7UL,7UL,7UL,7UL};
                int32_t *l_231[1][6] = {{&g_213,&g_213,&l_216[4],&g_213,&g_213,&l_216[4]}};
                int i, j;
                g_62 ^= g_142;
                if (l_32[3])
                { 
                    union U2 *l_173 = &l_169;
                    union U2 **l_172 = &l_173;
                    int32_t *l_176 = &l_175;
                    int32_t *l_177 = &g_62;
                    int32_t *l_178 = &l_175;
                    int32_t *l_179 = &g_157;
                    int32_t *l_180 = &l_174;
                    int32_t *l_181 = &l_174;
                    int32_t *l_182 = (void*)0;
                    int32_t *l_183 = &g_62;
                    int32_t *l_185 = &l_175;
                    int32_t *l_186 = &g_157;
                    int32_t l_187 = 0x629C93A3L;
                    int32_t l_188 = 1L;
                    int32_t *l_189 = &l_175;
                    int32_t *l_190[7][2] = {{&l_187,&l_187},{&l_174,&l_187},{&l_187,&l_174},{&l_187,&l_187},{&l_174,&l_187},{&l_187,&l_174},{&l_187,&l_187}};
                    uint32_t l_193 = 0xD87F6218L;
                    struct S0 **l_197 = &l_196;
                    int32_t **l_198[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_198[i] = &l_179;
                    (*l_172) = (void*)0;
                    l_193--;
                    l_176 = &l_188;
                    (*l_197) = l_196;
                    l_199 = &l_150;
                }
                else
                { 
                    union U2 ****l_203[5] = {&l_200,&l_200,&l_200,&l_200,&l_200};
                    int i;
                    l_204 = l_200;
                    l_199 = &g_62;
                }
                for (l_192 = 0; (l_192 != 23); ++l_192)
                { 
                    int8_t l_209 = 1L;
                    int32_t *l_210 = (void*)0;
                    int32_t *l_211[3][6] = {{&g_157,(void*)0,&g_157,&l_174,&g_157,&l_150},{&l_174,&l_174,&g_157,(void*)0,&g_157,&l_174},{&g_157,&l_192,(void*)0,(void*)0,&l_192,&g_157}};
                    int16_t *l_221 = (void*)0;
                    int16_t *l_222 = &g_130.f2;
                    int64_t *l_228[6][1][3] = {{{&g_215,(void*)0,(void*)0}},{{&g_56,(void*)0,(void*)0}},{{&g_74,(void*)0,&g_56}},{{&g_215,(void*)0,(void*)0}},{{&g_56,(void*)0,(void*)0}},{{&g_74,(void*)0,&g_56}}};
                    int i, j, k;
                    ++g_218;
                    l_230[2] = ((((*l_222) = 0L) || (g_217 == (g_147.f0.f0 = ((safe_div_func_uint32_t_u_u((p_30 || (l_174 = (((safe_div_func_uint8_t_u_u(((g_213 <= 65528UL) | (((g_227 , &g_52) != &g_52) != p_30)), p_30)) , p_30) < 5UL))), l_229[3])) , 0x2D59L)))) ^ g_56);
                }
                ++l_233;
            }
            (*l_199) = 2L;
            return g_227;
        }
        else
        { 
            uint16_t *l_236 = &g_147.f0.f0;
            uint64_t *l_241 = &g_113[0];
            uint64_t l_254 = 0xA30A2B9BF124FD36LL;
            int64_t *l_255 = &g_56;
            uint32_t l_262[2];
            const int16_t l_278 = 5L;
            int32_t l_284 = 0xBD8C3681L;
            uint32_t l_309 = 1UL;
            union U2 *l_315 = (void*)0;
            uint32_t l_328 = 0xB91CC760L;
            int i;
            for (i = 0; i < 2; i++)
                l_262[i] = 4UL;
            if (((l_184[0][5] |= ((*l_255) = ((((*l_236) = g_141[0]) ^ (((safe_mul_func_uint8_t_u_u(((((((safe_add_func_uint64_t_u_u((++(*l_241)), (safe_rshift_func_int8_t_s_s(((1UL & (safe_mod_func_int32_t_s_s((((0x7B76L >= 1L) , l_248) , (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_169.f1 , &g_142) == (void*)0), g_217)), l_248.f0.f5))), (*g_80)))) == l_253), 2)))) > g_74) , l_254) < 0x7FBE321F6031B584LL) == l_174) != l_230[0]), g_157)) , p_30) < 1L)) ^ 1UL))) != p_30))
            { 
                int32_t *l_260 = &g_60;
                int32_t *l_261 = &l_191;
                (**l_204) = (((!(g_257 == l_258)) <= g_147.f0.f0) , (**l_204));
                l_262[1]--;
                return g_227;
            }
            else
            { 
                union U2 ***l_269 = &l_205;
                int32_t l_279 = 1L;
                int32_t l_291 = 0x31765EC4L;
                int32_t l_293[3][4][2] = {{{0xF05AB063L,9L},{0xF05AB063L,0xF05AB063L},{9L,0xF05AB063L},{0xF05AB063L,9L}},{{0xF05AB063L,0xF05AB063L},{9L,0xF05AB063L},{0xF05AB063L,9L},{0xF05AB063L,0xF05AB063L}},{{9L,0xF05AB063L},{0xF05AB063L,9L},{0xF05AB063L,0xF05AB063L},{9L,0xF05AB063L}}};
                int32_t *l_317 = &l_191;
                int32_t *l_318 = &l_184[1][1];
                int32_t *l_319 = &l_293[0][3][0];
                int32_t *l_323 = (void*)0;
                int32_t *l_324 = &l_293[2][3][0];
                int32_t *l_325 = &l_184[1][1];
                int32_t *l_326 = &g_213;
                int32_t *l_327[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j, k;
                for (g_66 = 0; g_66 < 1; g_66 += 1)
                {
                    g_113[g_66] = 0x829ADCCFBDE21B4ALL;
                }
                if ((safe_sub_func_int32_t_s_s(p_30, ((((g_267 != (void*)0) <= ((l_269 != (g_270 = (void*)0)) | l_262[1])) , (safe_add_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(g_147.f0.f5, l_278)) == 0L), 2UL))) , l_279))))
                { 
                    int32_t *l_280 = &l_184[0][0];
                    int32_t *l_281 = &l_216[4];
                    int32_t *l_282 = (void*)0;
                    int32_t *l_283[6][6][4] = {{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_184[0][5],&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_184[0][5],&l_184[0][5],&l_191},{&l_184[0][5],&l_191,&l_184[0][5],&l_184[0][5]},{&l_191,&l_191,&l_191,&l_191}}};
                    int i, j, k;
                    if (p_30)
                        break;
                    (*g_80) &= l_279;
                    g_285--;
                }
                else
                { 
                    int32_t *l_288[6][4][2] = {{{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]}},{{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]}},{{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]}},{{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]}},{{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]}},{{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]},{&l_184[1][1],&l_184[1][1]}}};
                    int i, j, k;
                    if (l_284)
                        break;
                    --g_294;
                    g_213 ^= ((*g_80) = 0xB8245335L);
                    g_297++;
                    if (l_32[4])
                        continue;
                }
                for (g_157 = 18; (g_157 > 25); g_157 = safe_add_func_uint16_t_u_u(g_157, 1))
                { 
                    int32_t *l_302 = &l_184[0][5];
                    int32_t *l_303 = &l_284;
                    int32_t *l_304 = &g_213;
                    int32_t *l_305 = &l_216[6];
                    int32_t *l_306 = &l_212;
                    int32_t *l_307 = &g_62;
                    int32_t *l_308[6][6][7] = {{{&l_279,&l_212,&l_174,&g_62,&l_212,&l_184[0][3],(void*)0},{&l_212,&l_293[1][3][0],&g_157,&l_174,&l_293[2][1][1],&g_60,&g_213},{(void*)0,&l_279,&l_174,&l_191,&g_157,&l_174,&l_184[1][2]},{&l_293[1][3][0],(void*)0,&g_3,(void*)0,&l_174,(void*)0,&l_184[1][2]},{&g_3,&l_191,&l_174,(void*)0,&l_184[1][2],&g_213,&g_213},{&g_62,&g_157,&g_60,&g_157,&g_62,&l_293[0][0][1],(void*)0}},{{&l_212,&g_3,&l_284,&l_184[1][1],&g_62,&l_174,&l_279},{&l_184[0][5],&l_191,&l_174,&l_174,&l_293[2][1][1],&l_174,&l_212},{&l_212,&l_184[1][1],&g_60,(void*)0,&l_191,&l_216[0],&l_293[1][3][0]},{&g_62,(void*)0,(void*)0,(void*)0,&g_157,&l_174,&g_213},{&g_3,&g_213,&g_157,&g_3,&g_60,(void*)0,&l_284},{&l_293[1][3][0],&g_213,&l_293[2][1][1],&l_293[2][1][1],&l_212,&l_293[2][1][1],&g_157}},{{(void*)0,(void*)0,(void*)0,&l_184[1][1],(void*)0,(void*)0,(void*)0},{&l_212,&l_184[1][1],(void*)0,&g_62,&l_293[1][3][0],&l_212,&g_157},{&l_279,&l_191,&l_184[0][6],&l_293[1][3][0],&l_212,(void*)0,&l_293[1][3][0]},{&g_62,&g_3,(void*)0,(void*)0,&g_213,&l_184[0][3],&l_191},{(void*)0,&g_157,(void*)0,&l_212,&g_213,&g_3,&l_184[0][3]},{&l_279,&l_191,&l_293[2][1][1],&g_62,&l_191,&l_284,(void*)0}},{{&l_191,&g_60,&l_174,(void*)0,&l_293[2][1][1],&l_216[0],&g_3},{(void*)0,&g_62,&l_184[0][6],&l_284,(void*)0,&l_284,&l_184[0][6]},{&l_284,&l_284,&l_191,&l_212,(void*)0,&g_60,&l_174},{&g_60,&l_293[2][1][0],&g_60,&l_284,&l_184[0][6],&g_60,&g_3},{(void*)0,(void*)0,(void*)0,&l_293[0][0][1],(void*)0,&g_60,(void*)0},{&l_174,&l_212,&l_184[1][1],&g_3,(void*)0,&g_62,&g_62}},{{&g_3,&l_284,&g_60,&l_174,&l_293[2][1][1],&g_60,&l_184[0][3]},{&l_216[0],&g_3,&l_174,(void*)0,&g_157,&g_60,&g_60},{(void*)0,&g_213,&l_293[2][1][1],&l_184[0][5],(void*)0,&g_62,(void*)0},{&g_60,&l_174,&l_174,&g_60,&g_60,&g_60,&l_184[0][5]},{&g_60,(void*)0,(void*)0,&l_293[2][1][1],&l_174,&g_60,&l_293[0][0][1]},{&l_184[0][5],&g_213,(void*)0,&g_3,&l_284,&g_60,&l_184[0][5]}},{{&g_157,(void*)0,&l_293[2][1][1],(void*)0,&g_60,&l_284,(void*)0},{&l_284,&l_184[0][3],&l_293[2][1][1],&g_60,&l_174,&l_216[0],&g_60},{&g_213,&l_212,&g_60,&l_212,&g_3,&g_157,&l_184[0][3]},{&g_213,&l_293[0][0][1],&g_60,&l_184[0][3],&l_174,&l_174,&g_62},{&l_284,&g_157,(void*)0,(void*)0,&g_157,&l_284,(void*)0},{&g_157,&l_284,&l_184[1][2],(void*)0,&l_174,(void*)0,&g_3}}};
                    int i, j, k;
                    ++l_309;
                    (*l_306) &= p_30;
                    --g_312;
                    l_191 = ((void*)0 == l_315);
                    l_174 = l_316;
                }
                l_320++;
                --l_328;
            }
        }
        l_331 = &g_213;
    }
    return l_332;
}



static const uint32_t  func_44(uint32_t  p_45)
{ 
    int8_t l_48 = 0xFEL;
    uint8_t *l_49 = &g_50;
    uint8_t **l_51[7][2] = {{&l_49,(void*)0},{&l_49,&l_49},{(void*)0,&l_49},{&l_49,(void*)0},{&l_49,&l_49},{(void*)0,&l_49},{&l_49,(void*)0}};
    int64_t *l_55 = &g_56;
    int32_t *l_59 = &g_60;
    int32_t *l_61[4] = {&g_62,&g_62,&g_62,&g_62};
    struct S1 l_123 = {0x93E3L,1UL,0x7619C586L,0UL,0UL,0L};
    struct S0 *l_129 = &g_130;
    int i, j;
lbl_149:
    g_62 ^= ((*l_59) = (l_48 == (((g_52 = l_49) != ((((*l_55) = (0x18177C41L | (p_45 = ((safe_lshift_func_int8_t_s_s((-9L), 0)) || g_3)))) <= ((safe_mul_func_uint8_t_u_u(((*l_49) = g_3), l_48)) , 0UL)) , &g_50)) <= l_48)));
    if ((g_3 || g_56))
    { 
        int32_t l_64 = 0x66DF464CL;
        uint32_t *l_65[1];
        uint8_t *l_69 = &g_50;
        int64_t **l_70 = &l_55;
        struct S1 l_71 = {0xAC6DL,4UL,7L,5UL,0xEA3FEE22L,0x7E12L};
        int32_t l_72 = 0xC571EBB7L;
        int32_t l_73[5];
        int i;
        for (i = 0; i < 1; i++)
            l_65[i] = &g_66;
        for (i = 0; i < 5; i++)
            l_73[i] = 0x048CB009L;
        (*l_59) = ((((((+0x51L) , ((l_64 < (g_66++)) , l_69)) == (((((((*l_70) = l_55) == (void*)0) | p_45) >= (((l_71 , p_45) , 0x0AE02F11L) != g_62)) & l_71.f0) , (void*)0)) ^ 0xF014A1F6L) || 0xA7DC4CAE1FAD0966LL) < 0x9DF3C4FBL);
        ++g_75;
        for (l_72 = 4; (l_72 >= 10); ++l_72)
        { 
            struct S1 l_93 = {0xC854L,0xE8D2C562L,0L,4294967295UL,0x609311A0L,-4L};
            int8_t *l_96 = &l_48;
            g_80 = &l_72;
            l_73[1] = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_66, ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(p_45, g_66)), ((safe_add_func_int8_t_s_s(3L, (((safe_rshift_func_int8_t_s_s(((*l_96) = (((l_93 , (safe_mul_func_uint16_t_u_u(p_45, ((l_70 == (void*)0) != 7UL)))) <= 0xABL) | 4294967291UL)), 2)) < p_45) < p_45))) | 0xAAL))) != 0UL))), 8L));
            for (g_75 = 20; (g_75 > 1); g_75 = safe_sub_func_uint8_t_u_u(g_75, 3))
            { 
                uint8_t *l_107 = &g_75;
                uint64_t *l_111 = (void*)0;
                uint64_t *l_112 = &g_113[0];
                (*l_59) = ((&g_50 == (void*)0) > ((*l_112) = (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(g_3, 15)) | ((void*)0 == l_107)) , (((safe_div_func_int64_t_s_s((~(p_45 > 18446744073709551615UL)), l_93.f2)) , 0x5B712F41F982FD6DLL) <= 0x148893BA86ABA2F2LL)), 0xB78CL)) >= 0xE462BFC9L) > p_45), 3)), g_75))));
            }
        }
        for (g_74 = (-11); (g_74 <= 13); ++g_74)
        { 
            int16_t l_122[6] = {(-1L),0xC5CAL,0xC5CAL,(-1L),0xC5CAL,0xC5CAL};
            int32_t l_138 = 4L;
            int32_t l_139 = (-1L);
            int32_t l_140 = 0x00571A61L;
            int8_t *l_146 = &g_141[1];
            int8_t **l_145 = &l_146;
            int i;
            for (l_71.f1 = (-4); (l_71.f1 <= 22); ++l_71.f1)
            { 
                int32_t l_131 = 1L;
                int32_t *l_136 = &g_60;
            }
            l_140 = (((*l_145) = l_69) == (g_147 , l_69));
        }
    }
    else
    { 
        const uint32_t l_148 = 8UL;
        return l_148;
    }
    if (l_48)
        goto lbl_149;
    return p_45;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);

    }
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_130.f2, "g_130.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_147.f0.f0, "g_147.f0.f0", print_hash_value);
    transparent_crc(g_147.f0.f1, "g_147.f0.f1", print_hash_value);
    transparent_crc(g_147.f0.f2, "g_147.f0.f2", print_hash_value);
    transparent_crc(g_147.f0.f3, "g_147.f0.f3", print_hash_value);
    transparent_crc(g_147.f0.f4, "g_147.f0.f4", print_hash_value);
    transparent_crc(g_147.f0.f5, "g_147.f0.f5", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_273[i].f0, "g_273[i].f0", print_hash_value);
        transparent_crc(g_273[i].f1, "g_273[i].f1", print_hash_value);

    }
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_385[i][j][k], "g_385[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_419, "g_419", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_432[i].f0, "g_432[i].f0", print_hash_value);
        transparent_crc(g_432[i].f1, "g_432[i].f1", print_hash_value);
        transparent_crc(g_432[i].f2, "g_432[i].f2", print_hash_value);

    }
    transparent_crc(g_470.f0, "g_470.f0", print_hash_value);
    transparent_crc(g_470.f1, "g_470.f1", print_hash_value);
    transparent_crc(g_470.f2, "g_470.f2", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_559[i], "g_559[i]", print_hash_value);

    }
    transparent_crc(g_584.f1, "g_584.f1", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1078.f0, "g_1078.f0", print_hash_value);
    transparent_crc(g_1078.f1, "g_1078.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1084[i][j].f0, "g_1084[i][j].f0", print_hash_value);
            transparent_crc(g_1084[i][j].f1, "g_1084[i][j].f1", print_hash_value);
            transparent_crc(g_1084[i][j].f2, "g_1084[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1454, "g_1454", print_hash_value);
    transparent_crc(g_1623, "g_1623", print_hash_value);
    transparent_crc(g_1732, "g_1732", print_hash_value);
    transparent_crc(g_1869, "g_1869", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1886[i][j].f0.f0, "g_1886[i][j].f0.f0", print_hash_value);
            transparent_crc(g_1886[i][j].f0.f1, "g_1886[i][j].f0.f1", print_hash_value);
            transparent_crc(g_1886[i][j].f0.f2, "g_1886[i][j].f0.f2", print_hash_value);
            transparent_crc(g_1886[i][j].f0.f3, "g_1886[i][j].f0.f3", print_hash_value);
            transparent_crc(g_1886[i][j].f0.f4, "g_1886[i][j].f0.f4", print_hash_value);
            transparent_crc(g_1886[i][j].f0.f5, "g_1886[i][j].f0.f5", print_hash_value);

        }
    }
    transparent_crc(g_1901, "g_1901", print_hash_value);
    transparent_crc(g_1915, "g_1915", print_hash_value);
    transparent_crc(g_1989.f0, "g_1989.f0", print_hash_value);
    transparent_crc(g_1989.f1, "g_1989.f1", print_hash_value);
    transparent_crc(g_1989.f2, "g_1989.f2", print_hash_value);
    transparent_crc(g_2115, "g_2115", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2279[i][j][k].f0, "g_2279[i][j][k].f0", print_hash_value);
                transparent_crc(g_2279[i][j][k].f1, "g_2279[i][j][k].f1", print_hash_value);
                transparent_crc(g_2279[i][j][k].f2, "g_2279[i][j][k].f2", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2301[i][j][k].f0, "g_2301[i][j][k].f0", print_hash_value);
                transparent_crc(g_2301[i][j][k].f1, "g_2301[i][j][k].f1", print_hash_value);
                transparent_crc(g_2301[i][j][k].f2, "g_2301[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_2313, "g_2313", print_hash_value);
    transparent_crc(g_2517.f0, "g_2517.f0", print_hash_value);
    transparent_crc(g_2517.f1, "g_2517.f1", print_hash_value);
    transparent_crc(g_2517.f2, "g_2517.f2", print_hash_value);
    transparent_crc(g_2723, "g_2723", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2732[i], "g_2732[i]", print_hash_value);

    }
    transparent_crc(g_3077, "g_3077", print_hash_value);
    transparent_crc(g_3111, "g_3111", print_hash_value);
    transparent_crc(g_3152, "g_3152", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3230[i][j], "g_3230[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3307, "g_3307", print_hash_value);
    transparent_crc(g_3396, "g_3396", print_hash_value);
    transparent_crc(g_3399, "g_3399", print_hash_value);
    transparent_crc(g_3402, "g_3402", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3493[i], "g_3493[i]", print_hash_value);

    }
    transparent_crc(g_3510, "g_3510", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
