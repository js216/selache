// SPDX-License-Identifier: MIT
// cctest_csmith_629278f5.c --- cctest case csmith_629278f5 (csmith seed 1653766389)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdb10677a */
/* @exp_ticks 0x3a1e */

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

// Options:   -s 1653766389 -o /tmp/csmith_gen_2d9d2zyn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S1 {
   const int32_t  f0;
};

struct S0 {
   int8_t  f0;
   int16_t  f1;
   const uint32_t  f2;
   int64_t  f3;
};

struct S2 {
   struct S0  f0;
   const uint64_t  f1;
   int8_t  f2;
};

union U3 {
   const uint32_t  f0;
   const struct S0  f1;
   uint64_t  f2;
   int16_t  f3;
};


static struct S1 g_20 = {1L};
static int32_t g_47 = 1L;
static uint64_t g_53[2] = {0x037A762AFEDDD8D7LL,0x037A762AFEDDD8D7LL};
static union U3 g_57 = {0x59559C29L};
static uint16_t g_85 = 0xB049L;
static int32_t g_86[2] = {(-5L),(-5L)};
static int8_t g_88 = 2L;
static int32_t g_94 = 0x4A8206D7L;
static int16_t g_99 = (-5L);
static uint64_t g_101 = 0x08A62A9801335C4ALL;
static int64_t g_114 = (-6L);
static int32_t g_116 = (-7L);
static uint8_t g_117 = 249UL;
static int16_t g_123[3] = {0xB972L,0xB972L,0xB972L};
static uint32_t g_125 = 0UL;
static uint64_t g_133[5][3] = {{1UL,0x38C88683152ADE4ALL,0x38C88683152ADE4ALL},{3UL,0x38C88683152ADE4ALL,0x1AF327E243D31FC3LL},{0x61D2E95C9911E249LL,1UL,0x5C9B18AFF3DC6D32LL},{3UL,3UL,0x5C9B18AFF3DC6D32LL},{1UL,0x61D2E95C9911E249LL,0x1AF327E243D31FC3LL}};
static int32_t g_139 = 0x45E95938L;
static int32_t g_140[2] = {0x283B512BL,0x283B512BL};
static int32_t g_141[2] = {0L,0L};
static int8_t g_142 = (-8L);
static uint32_t g_144 = 0x0722DCAAL;



static int32_t  func_1(void);
static int32_t  func_2(const int32_t  p_3, int64_t  p_4, uint32_t  p_5, const struct S2  p_6, union U3  p_7);
static const int16_t  func_11(int16_t  p_12, const uint16_t  p_13, int16_t  p_14);
static int16_t  func_15(struct S1  p_16, const uint32_t  p_17, int8_t  p_18, uint32_t  p_19);




static int32_t  func_1(void)
{ 
    const uint64_t l_8 = 0xCC48B1647C2C9EBFLL;
    const struct S2 l_56 = {{1L,9L,0x6574F207L,-3L},8UL,-1L};
    int32_t l_171 = 0x236F7AE0L;
    l_171 = func_2(l_8, (((safe_rshift_func_int16_t_s_u(func_11(func_15(g_20, (g_20.f0 != ((safe_lshift_func_int8_t_s_u(g_20.f0, l_8)) > 4294967295UL)), g_20.f0, g_20.f0), l_8, g_20.f0), 14)) == 0xE72C95C8L) , (-9L)), l_8, l_56, g_57);
    return l_56.f1;
}



static int32_t  func_2(const int32_t  p_3, int64_t  p_4, uint32_t  p_5, const struct S2  p_6, union U3  p_7)
{ 
    uint32_t l_62 = 4294967295UL;
    int32_t l_96 = 1L;
    int32_t l_100 = (-3L);
    union U3 l_104 = {0x64268063L};
    int32_t l_110 = 0xC00BB049L;
    int16_t l_115 = (-10L);
    int32_t l_143 = 7L;
    if ((g_47 |= 0x977B405AL))
    { 
        uint8_t l_58 = 0UL;
        int32_t l_59 = (-6L);
        l_59 |= (l_58 > p_6.f0.f0);
    }
    else
    { 
        int8_t l_60 = (-1L);
        int32_t l_61 = (-1L);
        int32_t l_79 = 0L;
        int32_t l_112 = 0L;
        struct S1 l_170 = {-1L};
        ++l_62;
        if ((safe_lshift_func_int8_t_s_u((~g_53[0]), 3)))
        { 
            int16_t l_84 = 0L;
            int32_t l_87 = 0xFAFEA3E4L;
            l_61 ^= ((safe_rshift_func_uint8_t_u_u(((g_88 &= (g_47 = (+((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_87 |= (((g_86[0] &= (((g_85 = ((safe_div_func_uint8_t_u_u(((g_53[0] <= (((((g_57.f3 ^= l_79) > ((((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((p_6.f2 , ((0x3FL != p_3) ^ (-6L))), l_62)) , g_53[1]), l_62)) == 0x2B51L) != 6UL) & l_84)) , g_20.f0) && g_47) & 1L)) & g_47), l_84)) ^ l_62)) && 0xCA1D1A26L) < g_53[0])) ^ p_6.f0.f1) | p_4)) | 0xE4L), 0x62BBD67DL)), 0UL)) > l_84) < l_84) >= g_53[1]), 1)) == p_4)))) , 0x93L), 1)) > p_3);
            if (((safe_lshift_func_uint16_t_u_s((g_57.f3 <= ((g_88 = g_47) < (l_61 = ((safe_rshift_func_uint16_t_u_s(p_6.f1, (((+g_86[0]) == l_61) & g_85))) && l_61)))), 14)) || g_53[1]))
            { 
                int8_t l_95 = 0L;
                int32_t l_97 = (-1L);
                int32_t l_98[5][5] = {{7L,7L,7L,7L,7L},{1L,1L,1L,1L,1L},{7L,7L,7L,7L,7L},{1L,1L,1L,1L,1L},{7L,7L,7L,7L,7L}};
                int i, j;
                g_101--;
                return l_96;
            }
            else
            { 
                l_100 |= g_85;
            }
        }
        else
        { 
            uint32_t l_107 = 0xF87F316BL;
            int32_t l_109 = 0x12DEA9B0L;
            int32_t l_111[5][5][1] = {{{0xC8AEE2D8L},{0x71DC5CD9L},{0x8A5FABF0L},{0xFDCB736CL},{7L}},{{0xFDCB736CL},{0x8A5FABF0L},{0x71DC5CD9L},{0xC8AEE2D8L},{0xAEC8E115L}},{{0xC8AEE2D8L},{0x71DC5CD9L},{0x8A5FABF0L},{0xFDCB736CL},{7L}},{{0xFDCB736CL},{0x8A5FABF0L},{0x71DC5CD9L},{0xC8AEE2D8L},{0xAEC8E115L}},{{0xC8AEE2D8L},{0x71DC5CD9L},{0x8A5FABF0L},{0xFDCB736CL},{7L}}};
            int i, j, k;
            if ((l_104 , (safe_rshift_func_int8_t_s_s((g_99 , (l_107 && (+(((l_60 != p_5) && 0x0D75L) > 0xD0L)))), 1))))
            { 
                int8_t l_113[1][3][3] = {{{0x7EL,0x7EL,0xC3L},{0x7EL,0x7EL,0xC3L},{0x7EL,0x7EL,0xC3L}}};
                int32_t l_120 = 0L;
                int i, j, k;
                --g_117;
                l_120 = g_99;
            }
            else
            { 
                int32_t l_121 = 0xAE7D9AD9L;
                int32_t l_122 = (-1L);
                int32_t l_124 = (-10L);
                g_125++;
            }
            l_96 = (((safe_lshift_func_int8_t_s_s(((+((safe_lshift_func_uint16_t_u_s((p_5 == (g_133[0][0] = g_123[0])), l_60)) > ((+(safe_div_func_int8_t_s_s(l_61, p_6.f0.f0))) == l_110))) != p_7.f3), 2)) == p_3) <= 0xE19FL);
            for (g_114 = (-17); (g_114 != (-11)); ++g_114)
            { 
                ++g_144;
                l_100 = ((((((((safe_sub_func_uint64_t_u_u((g_140[1] <= (p_7 , (safe_lshift_func_uint8_t_u_u((((p_6.f0.f1 , (((safe_lshift_func_int16_t_s_s((g_123[0] = (((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((l_112 = ((3UL || p_6.f0.f2) && g_114)), p_4)) || g_86[1]), p_4)) == p_3) , g_88)), g_88)) > p_6.f1) ^ 0xE2E08AAFL)) <= 7UL) , g_57.f3), 2)))), p_5)) , g_99) , p_6.f0.f3) < l_110) , p_6.f0.f2) < l_110) == p_7.f3) >= p_3);
            }
        }
        l_61 |= (((safe_rshift_func_int8_t_s_u((((((safe_mul_func_uint8_t_u_u((+0xFAL), 0x1BL)) | (safe_div_func_int64_t_s_s(g_133[0][0], ((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((l_79 = ((safe_rshift_func_int8_t_s_s((((l_170 , 0x8FL) != g_144) ^ p_4), g_57.f3)) >= l_110)) > g_47), g_85)), p_3)) & 1L)))) , g_53[0]) != p_7.f0) >= 0x2266F017L), 0)) , l_170.f0) < g_53[0]);
    }
    return g_53[1];
}



static const int16_t  func_11(int16_t  p_12, const uint16_t  p_13, int16_t  p_14)
{ 
    int32_t l_48 = 0L;
    int32_t l_49 = 0xABE3335AL;
    int32_t l_50 = 0L;
    int32_t l_51 = 0xFC22F747L;
    int32_t l_52[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_52[i][j] = 0x6E71EBDCL;
    }
    g_53[0]++;
    return l_50;
}



static int16_t  func_15(struct S1  p_16, const uint32_t  p_17, int8_t  p_18, uint32_t  p_19)
{ 
    uint16_t l_39 = 0xDC70L;
    int32_t l_42 = 5L;
    int16_t l_43 = 4L;
    int32_t l_44 = 3L;
    int32_t l_45 = 0x7B3925B9L;
    uint64_t l_46 = 0x84502E46A6F4DAD2LL;
    g_47 = ((((((safe_mod_func_uint16_t_u_u((l_46 = (safe_sub_func_uint64_t_u_u(((p_19 = 0xDE8CC195L) ^ (safe_rshift_func_uint16_t_u_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(g_20.f0, g_20.f0)), (safe_mod_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((l_44 &= (l_43 |= ((safe_mod_func_int8_t_s_s(((l_39--) && (((l_42 = 0L) ^ 0x3674L) || 0UL)), g_20.f0)) , 2UL))) != 0x95L), 255UL)), l_45)))) > l_45), 14))), p_17))), (-1L))) , 0x0D54BA4FDAF0DB12LL) && l_46) <= 0xE1L) & p_17) != l_45);
    return g_20.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    transparent_crc(g_57.f3, "g_57.f3", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
