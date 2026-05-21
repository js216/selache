// SPDX-License-Identifier: MIT
// cctest_csmith_470b288e.c --- cctest case csmith_470b288e (csmith seed 1191913614)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x866edf95 */

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

// Options:   -s 1191913614 -o /tmp/csmith_gen_bxut8xh1/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   uint8_t  f1;
   uint8_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint16_t  f5;
   int8_t  f6;
   int16_t  f7;
};

union U1 {
   uint64_t  f0;
   int32_t  f1;
   int16_t  f2;
};


static uint32_t g_8 = 1UL;
static int32_t g_14 = 0xFCE2949FL;
static uint8_t g_38 = 2UL;
static struct S0 g_59 = {0L,0xDEL,0x82L,4L,0x9B93B3BBL,0xB531L,4L,9L};
static union U1 g_74[1] = {{0xFF61739BB5F37D79LL}};
static uint64_t g_77 = 0x94A7464C66072949LL;
static uint32_t g_78[7] = {0x3E3B667DL,0x3E3B667DL,0x3E3B667DL,0x3E3B667DL,0x3E3B667DL,0x3E3B667DL,0x3E3B667DL};
static uint32_t *g_81[7] = {&g_59.f4,&g_59.f4,&g_59.f4,&g_59.f4,&g_59.f4,&g_59.f4,&g_59.f4};
static struct S0 *g_98 = &g_59;
static int32_t *g_100 = &g_74[0].f1;
static int32_t **g_99 = &g_100;
static struct S0 g_121 = {0xB652L,6UL,0UL,-2L,8UL,0xC5DFL,7L,1L};
static uint16_t *g_163 = (void*)0;
static uint32_t g_192 = 0x08CD4FB8L;
static uint16_t *g_207 = &g_59.f5;
static uint64_t g_217 = 0x31255FDFF747F287LL;
static uint64_t g_241[5] = {0xA150083EB55C6A8FLL,0xA150083EB55C6A8FLL,0xA150083EB55C6A8FLL,0xA150083EB55C6A8FLL,0xA150083EB55C6A8FLL};
static uint32_t g_250 = 2UL;
static uint32_t g_294 = 0x89631A34L;
static uint64_t g_303 = 0x78EE980A02F6F451LL;
static int8_t g_307 = 0x06L;
static int16_t g_308[1] = {3L};
static int32_t g_309[3] = {0L,0L,0L};
static uint64_t g_323 = 0x7D59AD62FCB4E697LL;
static uint32_t **g_408[2][6][5] = {{{&g_81[0],(void*)0,(void*)0,&g_81[0],&g_81[0]},{&g_81[6],&g_81[1],&g_81[6],&g_81[1],&g_81[6]},{&g_81[0],&g_81[0],(void*)0,(void*)0,&g_81[0]},{&g_81[5],&g_81[1],&g_81[5],&g_81[1],&g_81[5]},{&g_81[0],(void*)0,(void*)0,&g_81[0],&g_81[0]},{&g_81[6],&g_81[1],&g_81[6],&g_81[1],&g_81[6]}},{{&g_81[0],&g_81[0],(void*)0,(void*)0,&g_81[0]},{&g_81[5],&g_81[1],&g_81[5],&g_81[1],&g_81[5]},{&g_81[0],(void*)0,(void*)0,&g_81[0],&g_81[0]},{&g_81[6],&g_81[1],&g_81[6],&g_81[1],&g_81[6]},{&g_81[0],&g_81[0],(void*)0,(void*)0,&g_81[0]},{&g_81[5],&g_81[1],&g_81[5],&g_81[1],&g_81[5]}}};
static int64_t g_430 = 4L;
static union U1 g_443[6][2][2] = {{{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}},{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}}},{{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}},{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}}},{{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}},{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}}},{{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}},{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}}},{{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}},{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}}},{{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}},{{0x417DDC2AC789325FLL},{0x417DDC2AC789325FLL}}}};
static uint64_t *g_452 = &g_217;
static uint64_t **g_482 = &g_452;
static int32_t * const **g_523 = (void*)0;
static int32_t * const ***g_522 = &g_523;
static int16_t *g_575 = &g_59.f7;
static int16_t **g_574 = &g_575;
static int16_t ***g_573[7] = {&g_574,&g_574,&g_574,&g_574,&g_574,&g_574,&g_574};
static int16_t ***g_580 = &g_574;
static int16_t ***g_581[4][4][7] = {{{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0}},{{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0}},{{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0}},{{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0},{&g_574,(void*)0,&g_574,(void*)0,(void*)0,&g_574,(void*)0}}};
static int16_t ***g_582 = (void*)0;
static int16_t ****g_777 = (void*)0;
static int16_t *****g_776 = &g_777;
static uint32_t *g_824 = &g_78[1];
static int16_t g_841 = 9L;
static int32_t g_844 = 0x566C443BL;
static const union U1 g_878[3][3][2] = {{{{18446744073709551606UL},{0xB69E4A97C2538280LL}},{{18446744073709551606UL},{18446744073709551609UL}},{{18446744073709551606UL},{18446744073709551606UL}}},{{{18446744073709551609UL},{0xB69E4A97C2538280LL}},{{0x707A8D1FF89E0F3DLL},{0x707A8D1FF89E0F3DLL}},{{0x8B790176AB9A7439LL},{18446744073709551606UL}}},{{{18446744073709551606UL},{18446744073709551614UL}},{{0xB69E4A97C2538280LL},{4UL}},{{0x8B790176AB9A7439LL},{0xB69E4A97C2538280LL}}}};
static const union U1 *g_879[5][1] = {{&g_878[2][2][1]},{&g_443[2][0][1]},{&g_878[2][2][1]},{&g_443[2][0][1]},{&g_878[2][2][1]}};
static struct S0 g_910 = {1L,1UL,0x30L,1L,18446744073709551615UL,0UL,0x0DL,0xEFC7L};
static int32_t g_1022 = 6L;
static int16_t g_1025[5][1][2] = {{{0xAEDFL,0xAEDFL}},{{1L,0xAEDFL}},{{0xAEDFL,1L}},{{0xAEDFL,0xAEDFL}},{{1L,0xAEDFL}}};
static uint64_t g_1036 = 0UL;
static uint32_t ***g_1092 = (void*)0;
static uint32_t g_1153 = 0UL;
static int32_t *g_1194 = &g_844;
static struct S0 **g_1306 = &g_98;
static const int32_t *g_1337[7][7][5] = {{{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3}},{{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]}},{{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]}},{{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3}},{{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3},{&g_309[1],&g_309[1],&g_121.f3,&g_309[1],&g_309[1]},{&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3,&g_309[1]},{&g_309[1],&g_910.f3,&g_121.f3,&g_910.f3,&g_121.f3},{&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3}},{{&g_121.f3,&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3},{&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3,&g_121.f3},{&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3},{&g_121.f3,&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3},{&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3,&g_121.f3},{&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3},{&g_121.f3,&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3}},{{&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3,&g_121.f3},{&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3},{&g_121.f3,&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3},{&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3,&g_121.f3},{&g_910.f3,&g_910.f3,&g_309[1],&g_910.f3,&g_910.f3},{&g_121.f3,&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3},{&g_910.f3,&g_121.f3,&g_121.f3,&g_910.f3,&g_121.f3}}};
static const int32_t **g_1336 = &g_1337[2][5][2];
static const int32_t ***g_1335 = &g_1336;
static int8_t *g_1430 = &g_307;
static int8_t **g_1429 = &g_1430;
static int8_t ***g_1428 = &g_1429;
static int32_t ***g_1433 = &g_99;
static int32_t ****g_1432 = &g_1433;
static int32_t *****g_1431[2][1][7] = {{{&g_1432,&g_1432,&g_1432,&g_1432,&g_1432,&g_1432,&g_1432}},{{&g_1432,&g_1432,&g_1432,&g_1432,&g_1432,&g_1432,&g_1432}}};
static uint8_t g_1509 = 0xE6L;
static union U1 *g_1547 = &g_443[4][0][0];
static union U1 **g_1546 = &g_1547;
static union U1 ***g_1545 = &g_1546;
static int64_t g_1610 = 1L;
static int32_t g_1734 = 1L;
static uint32_t g_1735 = 0x027387FCL;



static union U1  func_1(void);
static uint8_t  func_3(uint16_t  p_4, const uint32_t  p_5);
static int32_t  func_15(int16_t  p_16, int32_t * p_17, uint16_t  p_18, uint32_t * p_19, uint32_t * const  p_20);
static int32_t  func_22(union U1  p_23, int32_t * p_24);
static union U1  func_25(int32_t * p_26, int32_t  p_27, int32_t  p_28, uint32_t * p_29, int32_t  p_30);
static int32_t  func_39(uint32_t * p_40);
static int32_t ** func_44(int32_t * p_45, uint16_t  p_46, int32_t ** const  p_47, uint32_t * p_48, int8_t  p_49);
static int32_t * func_50(uint32_t * p_51, uint32_t * p_52);




static union U1  func_1(void)
{ 
    int8_t l_2 = 0L;
    uint32_t *l_6 = (void*)0;
    uint32_t *l_7 = &g_8;
    int8_t *l_1792 = &g_910.f6;
    const struct S0 l_1793 = {0xF7FEL,0x40L,246UL,0xA9A61980L,1UL,0x1015L,1L,0xF2F2L};
    struct S0 l_1794 = {-1L,255UL,248UL,0xEDDC2ADDL,0UL,7UL,0x5EL,1L};
    union U1 l_1795 = {0xCECD4B8797874CABLL};
    (****g_1432) = ((l_2 | func_3(l_2, (++(*l_7)))) > ((*l_1792) = (5UL | 18446744073709551607UL)));
    l_1794 = l_1793;
    return l_1795;
}



static uint8_t  func_3(uint16_t  p_4, const uint32_t  p_5)
{ 
    int32_t *l_13 = &g_14;
    uint32_t l_21 = 0x0348F4A8L;
    int32_t l_1619[7];
    struct S0 l_1622 = {0x52B8L,0xD0L,4UL,-9L,0xD87B60C8L,65531UL,0L,0L};
    uint16_t l_1624 = 0xF6D8L;
    union U1 *l_1627 = &g_443[5][0][0];
    uint16_t l_1659[1][3][7] = {{{0x88FFL,0x88FFL,0x9090L,0xCC7CL,0x9090L,0x88FFL,0x88FFL},{0x88FFL,0x9090L,0xCC7CL,0x9090L,0x88FFL,0x88FFL,0x9090L},{0xDF27L,1UL,0xDF27L,0x9090L,0x9090L,0xDF27L,1UL}}};
    int8_t *l_1708 = &g_121.f6;
    int32_t *** const l_1723 = &g_99;
    int32_t l_1771 = 0x59CBF672L;
    int16_t l_1772 = 8L;
    int32_t l_1791[3][5][6] = {{{1L,0x02589C8BL,(-9L),(-9L),0x02589C8BL,1L},{0x46FDEB44L,1L,(-9L),1L,0x46FDEB44L,0x46FDEB44L},{0xC1B92023L,1L,1L,0xC1B92023L,0x02589C8BL,0xC1B92023L},{0xC1B92023L,0x02589C8BL,0xC1B92023L,1L,1L,0xC1B92023L},{0x46FDEB44L,0x46FDEB44L,1L,(-9L),1L,0x46FDEB44L}},{{1L,0x02589C8BL,(-9L),(-9L),0x02589C8BL,1L},{0x46FDEB44L,1L,(-9L),1L,0x46FDEB44L,0x46FDEB44L},{0xC1B92023L,1L,1L,0xC1B92023L,0x02589C8BL,0xC1B92023L},{0xC1B92023L,0x02589C8BL,0xC1B92023L,1L,1L,0xC1B92023L},{0x46FDEB44L,0x46FDEB44L,1L,(-9L),1L,0x46FDEB44L}},{{1L,0x02589C8BL,(-9L),(-9L),0x02589C8BL,1L},{0x46FDEB44L,1L,(-9L),1L,0x46FDEB44L,0x46FDEB44L},{0xC1B92023L,1L,1L,0xC1B92023L,0x02589C8BL,0xC1B92023L},{(-9L),0x46FDEB44L,(-9L),0xC1B92023L,0xC1B92023L,(-9L)},{1L,1L,0xC1B92023L,0x02589C8BL,0xC1B92023L,1L}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1619[i] = (-1L);
    for (g_8 = (-22); (g_8 >= 60); ++g_8)
    { 
        int32_t *l_31 = (void*)0;
        union U1 *l_572[2][6][1] = {{{&g_74[0]},{&g_74[0]},{&g_74[0]},{&g_74[0]},{&g_74[0]},{&g_74[0]}},{{&g_74[0]},{&g_74[0]},{&g_74[0]},{&g_74[0]},{&g_74[0]},{&g_74[0]}}};
        int32_t *l_1162[4][3][5] = {{{&g_844,&g_844,&g_910.f3,&g_910.f3,(void*)0},{(void*)0,&g_910.f3,&g_910.f3,&g_910.f3,(void*)0},{&g_910.f3,&g_910.f3,&g_910.f3,&g_910.f3,&g_910.f3}},{{&g_910.f3,&g_910.f3,(void*)0,&g_910.f3,&g_844},{&g_910.f3,&g_844,(void*)0,&g_844,&g_844},{&g_910.f3,(void*)0,&g_910.f3,&g_910.f3,&g_844}},{{(void*)0,&g_844,&g_844,&g_910.f3,&g_910.f3},{&g_844,(void*)0,&g_844,&g_844,(void*)0},{(void*)0,&g_844,&g_844,&g_910.f3,(void*)0}},{{(void*)0,&g_844,&g_910.f3,&g_910.f3,&g_910.f3},{&g_910.f3,(void*)0,(void*)0,&g_910.f3,&g_910.f3},{(void*)0,&g_844,(void*)0,&g_910.f3,&g_910.f3}}};
        int16_t l_1602[4];
        union U1 *l_1603 = &g_443[5][0][0];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1602[i] = 0x2764L;
        l_13 = (void*)0;
    }
    for (l_1622.f0 = 5; (l_1622.f0 == (-10)); l_1622.f0 = safe_sub_func_int32_t_s_s(l_1622.f0, 3))
    { 
        const int32_t l_1630 = 0L;
        int8_t *l_1654 = (void*)0;
        int8_t *l_1655 = &g_121.f6;
        uint8_t *l_1656 = &g_59.f2;
        uint8_t l_1662 = 255UL;
        int16_t l_1703 = 0x1AD1L;
        int8_t ****l_1711 = &g_1428;
        int8_t *****l_1710 = &l_1711;
        int32_t *l_1721 = &g_844;
        int32_t l_1737 = 0x541F5779L;
        uint32_t *l_1745 = (void*)0;
        int32_t l_1751 = (-7L);
        int32_t l_1752 = (-1L);
        int32_t l_1753 = 0x9AF58085L;
        uint32_t l_1754 = 0x60EF08E4L;
        union U1 l_1757[1] = {{18446744073709551614UL}};
        uint32_t *l_1766 = &g_121.f4;
        int32_t l_1767 = 0xC3C904BFL;
        int i;
        if (l_1630)
            break;
    }
    (*g_1194) = ((***l_1723) = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((((*g_98) , ((((*l_1708) = (safe_mul_func_int16_t_s_s((0xD1L == p_4), ((l_1622 , (***l_1723)) | (safe_add_func_int64_t_s_s(0x58D312C009F5DBEBLL, (***l_1723))))))) != g_59.f0) != (***l_1723))) != (**g_1429)) | g_910.f2), (***l_1723))), l_1791[0][0][2])));
    (**g_1306) = (*g_98);
    return p_4;
}



static int32_t  func_15(int16_t  p_16, int32_t * p_17, uint16_t  p_18, uint32_t * p_19, uint32_t * const  p_20)
{ 
    uint32_t l_1174 = 0x78FF8767L;
    int32_t l_1246 = (-1L);
    const union U1 *l_1266[1][2];
    int64_t l_1275[3];
    int8_t l_1297[5] = {0xC7L,0xC7L,0xC7L,0xC7L,0xC7L};
    int32_t l_1298 = (-6L);
    int32_t l_1299[4] = {0x7548E78BL,0x7548E78BL,0x7548E78BL,0x7548E78BL};
    uint8_t *l_1308[4] = {&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2};
    uint8_t **l_1307[5];
    const int32_t *l_1314[4][1] = {{&g_910.f3},{&l_1298},{&g_910.f3},{&l_1298}};
    const int32_t **l_1313 = &l_1314[0][0];
    struct S0 l_1356[4] = {{4L,0x81L,0x04L,0x3801FC5FL,0x21416690L,0xC45DL,0xF2L,-2L},{4L,0x81L,0x04L,0x3801FC5FL,0x21416690L,0xC45DL,0xF2L,-2L},{4L,0x81L,0x04L,0x3801FC5FL,0x21416690L,0xC45DL,0xF2L,-2L},{4L,0x81L,0x04L,0x3801FC5FL,0x21416690L,0xC45DL,0xF2L,-2L}};
    int64_t l_1380 = 0xE7BDEB863BA6540ELL;
    int8_t l_1407 = 0L;
    int8_t ***l_1451 = &g_1429;
    struct S0 **l_1470 = (void*)0;
    int16_t **l_1483 = (void*)0;
    uint64_t l_1534 = 6UL;
    union U1 ***l_1548 = &g_1546;
    union U1 **l_1567 = (void*)0;
    int8_t ****l_1598 = &g_1428;
    int8_t *****l_1597 = &l_1598;
    uint32_t *l_1599 = &g_1153;
    uint32_t * const *l_1600[6][5] = {{&g_824,&g_824,&g_824,&g_824,&g_824},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_824,&g_824,&g_824,&g_824,&g_824},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_824,&g_824,&g_824,&g_824,&g_824},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1266[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_1275[i] = (-8L);
    for (i = 0; i < 5; i++)
        l_1307[i] = &l_1308[1];
    for (p_16 = 18; (p_16 != 10); p_16 = safe_sub_func_int8_t_s_s(p_16, 8))
    { 
        int16_t l_1167 = (-1L);
        uint32_t *l_1168 = &g_78[2];
        int32_t *l_1175 = &g_844;
        int32_t ***l_1181 = &g_99;
        int32_t ****l_1180 = &l_1181;
        union U1 l_1195 = {18446744073709551615UL};
        struct S0 l_1234 = {5L,1UL,249UL,0x41A36E2FL,0x164E4597L,65535UL,0L,0x258FL};
        int8_t *l_1235 = &l_1234.f6;
        uint32_t l_1264 = 18446744073709551614UL;
        uint64_t l_1300 = 18446744073709551615UL;
        uint8_t **l_1309 = &l_1308[3];
        int16_t *****l_1329 = &g_777;
        int32_t l_1344 = 0x614D55FFL;
        struct S0 l_1348[1] = {{0x41F4L,0x64L,0x84L,-1L,18446744073709551615UL,0UL,0x50L,9L}};
        int32_t l_1352 = 1L;
        const uint32_t l_1379 = 0x0463604CL;
        int64_t * const l_1381[3][4] = {{&g_430,&l_1275[2],&l_1275[2],&g_430},{&l_1275[2],&g_430,&l_1275[2],&l_1275[2]},{&g_430,&g_430,&g_430,&g_430}};
        int8_t l_1394 = 0x70L;
        int32_t l_1396[2][7][4] = {{{0x2C8A0374L,(-10L),1L,0x13039EC0L},{1L,0x13039EC0L,0xA6524C7FL,0xA6524C7FL},{0x18B53D43L,0x18B53D43L,0x6A1B47ECL,0xFD9E6AA2L},{2L,0x229DE26BL,0xF5419518L,0xDD6C3E73L},{1L,0xFD9E6AA2L,(-6L),0xF5419518L},{0x13039EC0L,0xFD9E6AA2L,0x92FAD030L,0xDD6C3E73L},{0xFD9E6AA2L,0x229DE26BL,(-1L),0xFD9E6AA2L}},{{0xFB26ECB8L,0x18B53D43L,0x229DE26BL,0xA6524C7FL},{0L,0x13039EC0L,0x92FAD030L,0x13039EC0L},{1L,(-10L),0xFB26ECB8L,0x2C8A0374L},{1L,1L,0xDC96FF3CL,0L},{1L,0xFB26ECB8L,2L,(-10L)},{1L,0x4273F8BDL,0xDC96FF3CL,(-6L)},{8L,(-10L),0xFA79E93CL,(-1L)}}};
        uint64_t l_1404[3];
        const int32_t *l_1415 = &g_309[1];
        int8_t l_1441 = 0x49L;
        uint16_t l_1459 = 0x9E5AL;
        int64_t l_1511 = 0x7716C85292B606A6LL;
        int32_t l_1533 = 0xBB6F013EL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1404[i] = 0x4F9640A43B33927DLL;
        (*l_1175) = (safe_sub_func_uint32_t_u_u(((*l_1168) |= l_1167), ((--(*g_452)) <= (+(safe_rshift_func_uint8_t_u_u(p_18, (p_16 == ((&g_1022 != (void*)0) < (l_1174 = (l_1167 , ((*p_17) = (&p_17 != (void*)0))))))))))));
        if ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_1180 != (void*)0), (safe_mod_func_int32_t_s_s(l_1174, (safe_lshift_func_int16_t_s_s(((*g_522) != (*g_522)), 10)))))), (((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_16, ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((l_1195 , &p_16) != &l_1167) | (*l_1175)), p_16)), 4)) , 1L))), l_1174)) <= 0xD6692691933F0915LL) == g_910.f0) <= 1UL) != (***g_580)))))
        { 
            uint16_t l_1202[3][3][4] = {{{0x60F3L,0xFB9DL,0x18DBL,0x9A28L},{0xE28EL,0x18DBL,1UL,0x18DBL},{1UL,0x18DBL,0xE28EL,0x9A28L}},{{0x18DBL,0xFB9DL,0x60F3L,1UL},{65528UL,65535UL,65535UL,65528UL},{65528UL,0x9A28L,0x60F3L,1UL}},{{0x18DBL,65528UL,0xE28EL,0x6485L},{1UL,4UL,1UL,0x6485L},{0xE28EL,65528UL,0x18DBL,1UL}}};
            int32_t *l_1203[7];
            int16_t l_1204 = 1L;
            int64_t *l_1213 = &g_430;
            int8_t *l_1214[2];
            union U1 l_1215 = {0xC08DECF807BFF61FLL};
            uint16_t l_1227 = 1UL;
            const union U1 **l_1260 = &g_879[1][0];
            const union U1 ***l_1259[3][7] = {{&l_1260,&l_1260,(void*)0,&l_1260,(void*)0,&l_1260,&l_1260},{(void*)0,(void*)0,&l_1260,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1260,(void*)0,&l_1260,(void*)0,(void*)0,&l_1260,(void*)0}};
            int8_t l_1265[5] = {3L,3L,3L,3L,3L};
            struct S0 l_1267 = {1L,0xBFL,0x72L,0x255DBCB8L,18446744073709551615UL,4UL,0L,0xE0EFL};
            uint16_t l_1285 = 1UL;
            const int32_t **l_1317 = &l_1314[0][0];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1203[i] = &g_121.f3;
            for (i = 0; i < 2; i++)
                l_1214[i] = &g_59.f6;
            if ((*p_17))
                break;
            if ((*l_1175))
                continue;
            if (((safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s(l_1202[0][2][1], 0)) == p_16) | (l_1215 , (*l_1175))), (*g_207))) != 0xC9L) , 0xA8A1752FL), 0x24BB269DL)) > 1UL))
            { 
                uint32_t l_1218[6][3][4] = {{{0UL,0UL,0UL,0x2C2ED904L},{0x4A445163L,0x658D8A7EL,4294967293UL,0x55ADA218L},{4294967290UL,4294967293UL,0x2C2ED904L,4294967293UL}},{{0x2C2ED904L,4294967293UL,4294967290UL,0x55ADA218L},{4294967293UL,0x658D8A7EL,0x4A445163L,0x2C2ED904L},{0UL,0UL,0UL,0UL}},{{0UL,0x55ADA218L,0x4A445163L,4294967293UL},{4294967293UL,0UL,4294967290UL,1UL},{0x2C2ED904L,0x5735B337L,0x2C2ED904L,1UL}},{{4294967290UL,0UL,4294967293UL,4294967293UL},{0x4A445163L,0x55ADA218L,0UL,0UL},{0UL,0UL,0UL,0x2C2ED904L}},{{0x4A445163L,0x658D8A7EL,4294967293UL,0x55ADA218L},{4294967290UL,4294967293UL,0x2C2ED904L,4294967293UL},{0x2C2ED904L,4294967293UL,4294967290UL,0x55ADA218L}},{{4294967293UL,0x658D8A7EL,0x4A445163L,0x2C2ED904L},{0UL,0UL,0UL,0UL},{0UL,0x55ADA218L,0x4A445163L,4294967293UL}}};
                uint16_t l_1226 = 0x76BDL;
                int64_t * const l_1253 = &g_430;
                int32_t *l_1255 = &g_121.f3;
                union U1 ***l_1258 = (void*)0;
                int i, j, k;
                l_1227 ^= ((p_18 , p_18) && (safe_lshift_func_int8_t_s_u(((((((((*l_1213) ^= l_1218[1][0][0]) != (safe_add_func_uint8_t_u_u((+(*g_575)), (safe_mod_func_int64_t_s_s(g_250, (l_1174 && (safe_add_func_uint32_t_u_u(l_1218[1][0][0], l_1226)))))))) <= (*p_17)) , (*p_17)) , 5UL) && 0xEB8FL) , (-2L)), g_910.f3)));
                if ((safe_sub_func_int8_t_s_s(g_910.f1, 0x76L)))
                { 
                    int64_t l_1240 = (-7L);
                    uint8_t *l_1245 = (void*)0;
                    (*p_17) = (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_1234 , (l_1214[1] == l_1235)), ((((((safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((l_1174 <= p_18), l_1240)) != (l_1246 ^= (safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((((((g_59.f6 = p_18) <= 5UL) != g_841) < (-8L)) & 0xFDL), (*g_207))) == l_1174), l_1218[2][1][2])))), (-1L))) || (*g_207)) < (-5L)) , g_241[3]) , 0x86248134L) , l_1240))), 5));
                    if (g_59.f7)
                        goto lbl_1601;
                }
                else
                { 
                    uint64_t **l_1247 = &g_452;
                    uint32_t *l_1254 = &g_910.f4;
                    (*p_17) |= (l_1247 == ((safe_rshift_func_uint16_t_u_u(p_16, (((safe_add_func_int16_t_s_s((((((~0x7AL) , l_1253) == (void*)0) , func_50((p_16 , &l_1174), l_1254)) == (void*)0), (*g_207))) ^ g_910.f4) >= (*l_1175)))) , (void*)0));
                    l_1255 = p_17;
                    (**l_1181) = (void*)0;
                }
                if (((((((5L || (safe_sub_func_int64_t_s_s(g_1025[3][0][1], ((*g_452) = (p_16 , (((p_16 , l_1258) == l_1259[1][6]) || ((safe_rshift_func_uint16_t_u_u(((((~g_307) > (**g_574)) <= p_16) , l_1264), (*l_1175))) , (*g_452)))))))) ^ l_1265[4]) > g_1022) != p_16) , 0x26D734DC2224D1E1LL) & p_16))
                { 
                    (*l_1260) = l_1266[0][0];
                }
                else
                { 
                    l_1267 = (*g_98);
                }
            }
            else
            { 
                union U1 l_1268 = {18446744073709551615UL};
                int32_t *l_1272 = &g_1022;
                int32_t **l_1271 = &l_1272;
                uint8_t *l_1288[5] = {&l_1234.f2,&l_1234.f2,&l_1234.f2,&l_1234.f2,&l_1234.f2};
                int32_t l_1292[3];
                uint32_t l_1294[7][4][3] = {{{1UL,18446744073709551613UL,18446744073709551613UL},{0x39749437L,0UL,0xF2E55E2FL},{1UL,1UL,1UL},{2UL,18446744073709551607UL,0xF2E55E2FL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551613UL},{0x013B403BL,18446744073709551607UL,0x39749437L},{18446744073709551613UL,1UL,0x94D2E777L},{0x013B403BL,0UL,0x013B403BL}},{{18446744073709551612UL,18446744073709551613UL,0x94D2E777L},{2UL,0x975F98CFL,0x39749437L},{1UL,18446744073709551613UL,18446744073709551613UL},{0x39749437L,0UL,0xF2E55E2FL}},{{1UL,1UL,0x94D2E777L},{0x39749437L,0xAD7E1830L,1UL},{18446744073709551613UL,18446744073709551613UL,1UL},{0xF2E55E2FL,0xAD7E1830L,0x013B403BL}},{{1UL,18446744073709551612UL,1UL},{0xF2E55E2FL,0x975F98CFL,0xF2E55E2FL},{18446744073709551613UL,1UL,1UL},{0x39749437L,18446744073709551607UL,0x013B403BL}},{{0x94D2E777L,1UL,1UL},{0x013B403BL,0x975F98CFL,1UL},{0x94D2E777L,18446744073709551612UL,0x94D2E777L},{0x39749437L,0xAD7E1830L,1UL}},{{18446744073709551613UL,18446744073709551613UL,1UL},{0xF2E55E2FL,0xAD7E1830L,0x013B403BL},{1UL,18446744073709551612UL,1UL},{0xF2E55E2FL,0x975F98CFL,0xF2E55E2FL}}};
                int32_t * const l_1312 = (void*)0;
                int32_t * const *l_1311 = &l_1312;
                int32_t * const **l_1310 = &l_1311;
                const int32_t ***l_1315 = (void*)0;
                const int32_t ***l_1316[1];
                int16_t *****l_1328[2][3][7] = {{{&g_777,&g_777,&g_777,&g_777,&g_777,&g_777,&g_777},{&g_777,&g_777,&g_777,&g_777,&g_777,&g_777,&g_777},{&g_777,&g_777,&g_777,(void*)0,&g_777,&g_777,&g_777}},{{&g_777,&g_777,&g_777,(void*)0,&g_777,&g_777,&g_777},{&g_777,&g_777,&g_777,&g_777,(void*)0,&g_777,(void*)0},{&g_777,(void*)0,(void*)0,&g_777,&g_777,&g_777,(void*)0}}};
                const int32_t ****l_1338[4][7] = {{&g_1335,&l_1316[0],&l_1315,&l_1315,&l_1315,&l_1315,&l_1316[0]},{&l_1315,&g_1335,&l_1316[0],&g_1335,&g_1335,(void*)0,(void*)0},{&l_1316[0],&g_1335,&l_1315,&g_1335,&l_1316[0],&g_1335,&g_1335},{&l_1315,&l_1316[0],&g_1335,&g_1335,&l_1316[0],&g_1335,&g_1335}};
                int32_t l_1342 = 0x6ACBCAC2L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1292[i] = 0xFB5FF958L;
                for (i = 0; i < 1; i++)
                    l_1316[i] = (void*)0;
                if ((l_1268 , (safe_mul_func_int8_t_s_s(((((((*l_1271) = (void*)0) != ((((((*g_452) ^ (**g_482)) > (-1L)) < ((safe_lshift_func_uint16_t_u_s(p_16, 8)) & (l_1246 , l_1174))) | 5UL) , p_17)) , (*g_452)) > (*g_452)) && l_1275[1]), 249UL))))
                { 
                    uint8_t *l_1282 = &l_1267.f2;
                    uint8_t **l_1289 = &l_1282;
                    (*p_17) = ((safe_rshift_func_uint16_t_u_u(0x5258L, ((p_18 >= (l_1268.f0 , (safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((((++(*l_1282)) , (((*g_1194) = l_1285) == (l_1275[0] && (safe_sub_func_int64_t_s_s((((*l_1289) = l_1288[3]) == &g_38), 0x114ADAA566A8A656LL))))) <= 0x0DL) >= (**g_482)), 0x0BF2DB391BAD86A3LL)), 5)))) >= 0x8E14AF8EL))) || l_1268.f2);
                    return l_1246;
                }
                else
                { 
                    int64_t l_1290 = 0xC352BD58410F2965LL;
                    int32_t l_1291 = 0x962BEA43L;
                    int32_t l_1293 = 0x8942F279L;
                    l_1294[3][1][1]--;
                }
                ++l_1300;
                for (g_77 = 0; (g_77 <= 1); g_77 += 1)
                { 
                    const int32_t * const l_1303 = &l_1299[2];
                    const int32_t *l_1305 = &l_1292[1];
                    const int32_t **l_1304 = &l_1305;
                    (*l_1304) = l_1303;
                }
                l_1299[2] &= ((((((g_1306 = (void*)0) == &g_98) , l_1307[2]) != l_1309) < (((*l_1310) = &p_17) == (l_1317 = l_1313))) | ((**l_1313) , (*g_207)));
                if ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((((p_18 | 255UL) != (l_1328[1][2][6] != l_1329)) > ((!((*l_1213) |= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((g_1335 = g_1335) == ((*p_19) , (*g_522))), p_18)), p_18)))) >= (**l_1313))) & p_16), p_18)) & 0UL), (*p_17))), g_910.f6)) == (**g_574)) >= p_18) || 0x6780DC15B08CB224LL) >= g_241[0]), 0)), 0xB498L)))
                { 
                    int32_t l_1339 = 1L;
                    int32_t l_1340 = 0x0EFA7CC4L;
                    int32_t l_1341 = 0x15ABE504L;
                    int32_t l_1343 = (-7L);
                    uint32_t l_1345 = 0xF7B1107BL;
                    l_1345++;
                    return (*p_17);
                }
                else
                { 
                    struct S0 l_1349 = {0xD812L,0xB7L,255UL,5L,0xE9028919L,0xDDA6L,0x57L,0x78B1L};
                    (*g_98) = (*g_98);
                    l_1349 = l_1348[0];
                    if ((***l_1310))
                        break;
                }
            }
            for (g_844 = 0; (g_844 <= 0); g_844 += 1)
            { 
                int32_t l_1350 = (-1L);
                int32_t l_1351[7][1][5];
                uint8_t l_1353 = 0xD4L;
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1351[i][j][k] = 3L;
                    }
                }
                l_1353++;
                for (g_121.f2 = 0; (g_121.f2 <= 0); g_121.f2 += 1)
                { 
                    int i;
                    if (g_308[g_844])
                        break;
                }
            }
        }
        else
        { 
            l_1356[0] = ((*g_98) = l_1348[0]);
            if ((*p_17))
                break;
        }
        (*p_17) = (((safe_add_func_uint16_t_u_u((((**g_482) |= ((((g_1153 = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((&l_1180 != (void*)0), (*l_1175))), (safe_mod_func_uint32_t_u_u((l_1380 = ((((void*)0 == &l_1168) | (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((***g_1335), ((*l_1168)--))), (((safe_rshift_func_uint8_t_u_u((p_18 && (*p_17)), (*l_1175))) || l_1379) != 0L))) <= 0x0CED935921FB2FD7LL), 0xB0F4DC16L))) >= 0x7F4C217FL)), 0x55885012L)))) == 0xE670A14C276BC89DLL) , 0xCAL), (**l_1313))), p_18)) == 0xAB78546B2AD29378LL)) , g_78[2]) , (void*)0) == l_1381[0][1])) , (*g_207)), p_18)) , (*l_1175)) == (*p_17));
        (*p_17) |= (safe_rshift_func_int16_t_s_s(((*l_1175) >= 0xC22E3E95837EACC1LL), 14));
        for (g_121.f7 = 1; (g_121.f7 == (-7)); g_121.f7 = safe_sub_func_int32_t_s_s(g_121.f7, 3))
        { 
            uint32_t l_1388 = 0x184340B4L;
            int32_t l_1391 = 0x103BA6B5L;
            int32_t l_1392 = 0xAB8F1DA4L;
            int32_t l_1393 = 0x10A60154L;
            int32_t l_1395 = (-4L);
            int32_t l_1397 = 6L;
            int32_t l_1398 = 0x0667C106L;
            int32_t l_1399 = 1L;
            int32_t l_1400 = 0x44552CE6L;
            int32_t l_1401 = 0xB187CC14L;
            int32_t l_1402 = 0L;
            int32_t l_1403[2];
            uint64_t l_1416 = 18446744073709551615UL;
            uint32_t *l_1434 = &g_8;
            int16_t **l_1442 = &g_575;
            struct S0 l_1447 = {0xD579L,0xB9L,0x01L,0L,0x2AA2A978L,0UL,-1L,0L};
            uint32_t ***l_1490[2][4] = {{&g_408[1][3][4],&g_408[1][3][4],&g_408[1][3][4],&g_408[1][3][4]},{&g_408[1][3][4],&g_408[1][3][4],&g_408[1][3][4],&g_408[1][3][4]}};
            int32_t *l_1529 = &l_1396[1][2][1];
            int32_t *l_1530 = (void*)0;
            int32_t *l_1531 = (void*)0;
            int32_t *l_1532[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            union U1 l_1564 = {18446744073709551608UL};
            uint32_t l_1583 = 4UL;
            struct S0 *l_1587 = &g_910;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1403[i] = (-1L);
        }
    }
lbl_1601:
    (*g_1194) &= ((*p_17) = (((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((!(**l_1313)), ((void*)0 == l_1451))), (safe_mul_func_int8_t_s_s((**g_1429), (((safe_lshift_func_int16_t_s_u((p_16 = ((***g_582) = ((((*l_1599) ^= (l_1356[0] , (&l_1451 != ((*l_1597) = &l_1451)))) && 0xDDD5FCD7L) != (**l_1313)))), (**l_1313))) || (**g_1429)) | p_18))))) , &g_824) == l_1600[0][4]));
    (*p_17) = (**l_1313);
    return (*p_17);
}



static int32_t  func_22(union U1  p_23, int32_t * p_24)
{ 
    int16_t ****l_576 = &g_573[6];
    int16_t ***l_578 = &g_574;
    int16_t ****l_577 = &l_578;
    int16_t ****l_579[6];
    int32_t l_585 = 0L;
    struct S0 l_593 = {1L,0xA6L,254UL,0x4D8D6FCEL,18446744073709551607UL,0x968BL,0x07L,0xB8F8L};
    uint16_t *l_594 = &l_593.f5;
    int32_t l_595 = 0L;
    uint8_t l_617 = 0xD4L;
    int32_t l_630 = 0x5389418CL;
    int32_t l_631 = 0x816DC5A0L;
    int32_t l_632 = 0xF8E58193L;
    int32_t l_633 = (-4L);
    const uint64_t *l_639 = (void*)0;
    const uint64_t **l_638[3];
    uint16_t l_641[3][7] = {{0xCAC2L,0x0F8CL,0xCAC2L,65527UL,65527UL,0xCAC2L,0x0F8CL},{65527UL,0x0F8CL,65527UL,65527UL,0x0F8CL,65527UL,0x0F8CL},{0xCAC2L,65527UL,65527UL,0xCAC2L,0x0F8CL,0xCAC2L,65527UL}};
    uint32_t *l_646[4][7] = {{&g_8,&g_250,&g_8,&g_8,&g_250,&g_8,&g_8},{(void*)0,(void*)0,&g_250,(void*)0,(void*)0,&g_250,(void*)0},{&g_250,&g_8,&g_8,&g_250,&g_8,&g_8,&g_250},{&g_59.f4,(void*)0,&g_59.f4,&g_59.f4,(void*)0,&g_59.f4,&g_59.f4}};
    uint64_t l_792 = 0x686723C7FC465828LL;
    int32_t l_843 = 0xFE1898D7L;
    int32_t l_847 = 0x17FECC86L;
    int32_t l_848[3];
    const uint16_t l_890 = 7UL;
    uint32_t *l_1015 = &g_250;
    const struct S0 l_1087 = {0x7D1CL,5UL,0x96L,6L,0xAB8671E6L,0x3747L,-2L,0xD58BL};
    uint32_t ***l_1090 = (void*)0;
    uint32_t l_1127 = 0UL;
    struct S0 *l_1131 = &l_593;
    uint32_t l_1141 = 0x51149676L;
    uint8_t l_1144 = 1UL;
    int32_t *l_1154 = &l_595;
    int32_t *l_1155 = &l_632;
    int32_t *l_1156 = &l_633;
    int32_t *l_1157[5][4][3] = {{{&l_630,&l_633,&l_843},{&l_585,&l_847,&g_844},{&l_630,&l_633,&l_593.f3},{&l_585,&l_585,&g_844}},{{&l_630,&l_593.f3,&l_630},{&l_843,&l_847,&l_847},{&g_309[2],&l_593.f3,&l_630},{&l_843,&l_843,&l_847}},{{(void*)0,&l_593.f3,&l_630},{&l_843,&l_847,&l_847},{&g_309[2],&l_593.f3,&l_630},{&l_843,&l_843,&l_847}},{{(void*)0,&l_593.f3,&l_630},{&l_843,&l_847,&l_847},{&g_309[2],&l_593.f3,&l_630},{&l_843,&l_843,&l_847}},{{(void*)0,&l_593.f3,&l_630},{&l_843,&l_847,&l_847},{&g_309[2],&l_593.f3,&l_630},{&l_843,&l_843,&l_847}}};
    int64_t l_1158[2][6] = {{(-8L),7L,(-8L),7L,(-8L),7L},{(-8L),7L,(-8L),7L,(-8L),7L}};
    uint32_t l_1159[1][2];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_579[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_638[i] = &l_639;
    for (i = 0; i < 3; i++)
        l_848[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1159[i][j] = 0xEDB50D85L;
    }
    if ((((*l_577) = ((*l_576) = g_573[6])) == (g_582 = (g_581[0][1][0] = (g_580 = &g_574)))))
    { 
        uint32_t l_586[2][2];
        int16_t *****l_606 = (void*)0;
        int8_t l_610 = 0L;
        int64_t *l_620[2];
        int32_t l_625 = 0x3B1D9E2BL;
        int32_t l_626 = 5L;
        int32_t l_627 = 0L;
        int32_t l_628 = 0x2DB80A98L;
        int32_t l_629[3];
        int32_t l_634 = 1L;
        uint32_t *l_647 = &g_59.f4;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_586[i][j] = 0x3C96A96FL;
        }
        for (i = 0; i < 2; i++)
            l_620[i] = &g_430;
        for (i = 0; i < 3; i++)
            l_629[i] = (-1L);
        if ((safe_div_func_uint8_t_u_u((((g_59.f2 |= l_585) , (((l_586[1][1] | (safe_add_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(0x3234L, l_585)) != (((safe_sub_func_uint64_t_u_u(l_585, (((l_593 , (0x57D8L && 0xC69DL)) , l_594) != g_575))) ^ 0x09C9L) || l_595)) < 0x4B9CL), l_586[1][0]))) == l_586[1][1]) , (-9L))) == 0x63L), l_593.f3)))
        { 
            int16_t *****l_604 = &l_577;
            int32_t l_609[6];
            uint8_t l_635 = 6UL;
            int i;
            for (i = 0; i < 6; i++)
                l_609[i] = (-7L);
            for (g_121.f0 = 14; (g_121.f0 > (-16)); g_121.f0 = safe_sub_func_int32_t_s_s(g_121.f0, 1))
            { 
                int16_t *****l_605[4][5][3] = {{{&l_579[3],(void*)0,&l_576},{(void*)0,&l_579[4],&l_576},{&l_579[0],&l_579[0],&l_579[0]},{&l_579[3],(void*)0,&l_579[3]},{&l_577,&l_579[5],&l_576}},{{(void*)0,&l_577,&l_579[3]},{&l_579[3],(void*)0,(void*)0},{(void*)0,(void*)0,&l_576},{&l_577,(void*)0,&l_579[5]},{&l_579[3],&l_579[3],(void*)0}},{{&l_579[0],&l_579[3],(void*)0},{(void*)0,&l_579[3],&l_579[4]},{&l_579[3],&l_579[3],(void*)0},{&l_579[3],(void*)0,(void*)0},{&l_577,(void*)0,&l_576}},{{&l_579[3],(void*)0,&l_579[2]},{&l_579[4],&l_577,&l_576},{&l_579[3],&l_579[5],(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_579[0],&l_579[4]}}};
                uint32_t *l_608 = (void*)0;
                uint32_t **l_607 = &l_608;
                int32_t *l_611 = (void*)0;
                int32_t *l_612 = &g_309[2];
                int32_t *l_623 = &g_121.f3;
                int32_t *l_624[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_624[i] = (void*)0;
                (*l_612) = (((((*g_207) &= l_593.f2) , ((0L | (safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(g_59.f0, ((safe_add_func_uint64_t_u_u((((*l_607) = func_50(((l_604 == (l_606 = l_605[1][3][2])) , p_24), p_24)) == &g_192), 0xE7C86767FDD2E6EELL)) != l_609[3]))), (**g_482)))) , l_610)) , 0x20A7EC6EL) ^ g_241[1]);
                for (g_14 = 6; (g_14 >= 0); g_14 -= 1)
                { 
                    (*g_99) = ((((&g_430 != (((safe_lshift_func_uint8_t_u_s((l_617--), 3)) | (l_595 & ((void*)0 == &g_192))) , l_620[0])) <= (safe_rshift_func_uint8_t_u_u((*l_612), 5))) < (l_593.f3 = (((l_610 , p_23) , 0x0E57L) < (*l_612)))) , (void*)0);
                    if ((*l_612))
                        continue;
                    if (l_585)
                        continue;
                    (*g_99) = (*g_99);
                }
                l_635++;
            }
        }
        else
        { 
            int32_t *l_640[6] = {&l_585,&l_585,&l_585,&l_585,&l_585,&l_585};
            int i;
            l_638[2] = l_638[1];
            ++l_641[2][3];
            return l_630;
        }
        for (l_593.f7 = (-3); (l_593.f7 == (-5)); l_593.f7 = safe_sub_func_uint32_t_u_u(l_593.f7, 1))
        { 
            int32_t *l_648 = (void*)0;
            int32_t *l_649 = &l_633;
            (*l_649) = (l_646[3][3] != l_647);
            (*g_99) = p_24;
            (*g_99) = &l_625;
        }
    }
    else
    { 
        uint64_t *l_654 = (void*)0;
        int32_t l_689 = 0L;
        int8_t l_708 = 0L;
        int32_t l_710 = 0xC3EFBF12L;
        uint32_t *l_737 = &g_59.f4;
        const uint32_t l_775 = 18446744073709551610UL;
        int16_t *****l_778 = (void*)0;
        const uint16_t *l_831 = &g_121.f5;
        int32_t l_842 = 4L;
        int32_t l_846 = 1L;
        int32_t l_849 = 0xA19A4653L;
        uint16_t l_850 = 65529UL;
        uint8_t l_861[7][5][1] = {{{246UL},{255UL},{252UL},{0UL},{0UL}},{{252UL},{255UL},{246UL},{255UL},{252UL}},{{0UL},{0UL},{252UL},{255UL},{246UL}},{{255UL},{252UL},{0UL},{0UL},{252UL}},{{255UL},{246UL},{255UL},{252UL},{0UL}},{{0UL},{252UL},{255UL},{246UL},{255UL}},{{252UL},{0UL},{0UL},{252UL},{255UL}}};
        struct S0 l_872 = {0x4605L,1UL,0xBEL,1L,0UL,0UL,4L,9L};
        int64_t l_945 = (-3L);
        uint32_t l_962 = 1UL;
        uint8_t l_970 = 253UL;
        int32_t ***l_971[4];
        const int16_t *l_1003 = &g_308[0];
        uint8_t l_1084 = 0UL;
        uint32_t l_1100 = 0x297C193AL;
        int32_t ****l_1102 = &l_971[3];
        int32_t *****l_1101 = &l_1102;
        int32_t l_1125 = 0x4A83D962L;
        uint8_t *l_1142 = &l_1084;
        uint32_t *l_1143 = &g_192;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_971[i] = &g_99;
lbl_1009:
        for (p_23.f0 = 0; (p_23.f0 <= 46); p_23.f0 = safe_add_func_int32_t_s_s(p_23.f0, 6))
        { 
            int32_t *l_655 = (void*)0;
            int32_t *l_656 = &g_14;
            uint16_t *l_688[3];
            int32_t l_709[7][7][1] = {{{0xC064BCF5L},{0x2D523115L},{(-7L)},{0xC064BCF5L},{(-7L)},{0x2D523115L},{0xC064BCF5L}},{{0x426C3187L},{0x426C3187L},{0xC064BCF5L},{0x2D523115L},{(-7L)},{0xC064BCF5L},{(-7L)}},{{0x2D523115L},{0xC064BCF5L},{0x426C3187L},{0x426C3187L},{0xC064BCF5L},{0x2D523115L},{(-7L)}},{{0xC064BCF5L},{(-7L)},{0x2D523115L},{0xC064BCF5L},{0x426C3187L},{0x426C3187L},{0xC064BCF5L}},{{0x2D523115L},{(-7L)},{0xC064BCF5L},{(-5L)},{0xC064BCF5L},{2L},{7L}},{{7L},{2L},{0xC064BCF5L},{(-5L)},{2L},{(-5L)},{0xC064BCF5L}},{{2L},{7L},{7L},{2L},{0xC064BCF5L},{(-5L)},{2L}}};
            uint8_t l_750[5] = {247UL,247UL,247UL,247UL,247UL};
            int16_t ***l_795[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_799 = &g_78[2];
            int32_t * const **l_803 = (void*)0;
            uint32_t l_807 = 0UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_688[i] = &g_59.f5;
            if ((safe_mul_func_int16_t_s_s((((((*l_656) &= ((*g_482) != (p_23.f0 , l_654))) , (((&g_574 != (void*)0) & (g_38 |= 5UL)) & (safe_lshift_func_uint16_t_u_s((*g_207), 13)))) <= g_59.f5) & p_23.f2), 0x68AFL)))
            { 
                int32_t l_673 = (-6L);
                int8_t *l_674[1];
                int32_t l_675[5];
                int i;
                for (i = 0; i < 1; i++)
                    l_674[i] = &g_59.f6;
                for (i = 0; i < 5; i++)
                    l_675[i] = 0x12AE2A3AL;
                (*l_656) = (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*g_522) == (*g_522)), (safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(((p_23.f0 > 4L) && (((l_673 = (g_59.f7 < (g_121.f6 ^= (safe_div_func_uint32_t_u_u((p_23.f2 & ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(((((*l_656) , l_593.f2) > (*g_452)) || g_121.f7), 0xDB23L)))) <= l_673)), p_23.f0))))) != 0xE729L) ^ 7UL)))), p_23.f1)))), l_675[1])) && 0x2253L), 1L));
            }
            else
            { 
                uint16_t l_687 = 0UL;
                int32_t l_707[7] = {0x24405EC8L,0L,0x24405EC8L,0x24405EC8L,0L,0x24405EC8L,0x24405EC8L};
                uint32_t l_711 = 9UL;
                uint32_t *l_740 = (void*)0;
                union U1 l_741 = {18446744073709551615UL};
                const union U1 **l_742 = (void*)0;
                int32_t *l_744 = &g_121.f3;
                int32_t *l_745 = &l_593.f3;
                int32_t *l_746 = &l_707[0];
                int32_t *l_747 = &l_707[0];
                int32_t *l_748 = &g_59.f3;
                int32_t *l_749[4] = {&g_59.f3,&g_59.f3,&g_59.f3,&g_59.f3};
                uint8_t *l_763 = (void*)0;
                uint8_t *l_764 = &g_121.f1;
                int64_t *l_765[2];
                int32_t **l_768 = (void*)0;
                int32_t **l_769 = (void*)0;
                int32_t **l_770 = &l_746;
                struct S0 * const l_790 = &g_121;
                int i;
                for (i = 0; i < 2; i++)
                    l_765[i] = &g_430;
                if ((safe_lshift_func_uint8_t_u_u(p_23.f0, ((((*l_656) = (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(g_250, 2)) ^ (safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(0L, p_23.f0)), ((((~(l_687 < (g_207 == ((p_23.f0 , 0xAFB49483L) , l_688[1])))) | p_23.f2) , &g_59) == &g_59)))) , l_687), l_687))) < l_689) , 255UL))))
                { 
                    int32_t *l_690 = &l_632;
                    int32_t *l_691 = &l_595;
                    int32_t *l_692 = &g_309[1];
                    int8_t l_693 = (-1L);
                    int32_t *l_694 = &g_309[2];
                    int32_t *l_695 = &l_631;
                    int32_t *l_696 = &g_121.f3;
                    int32_t *l_697 = &l_630;
                    int32_t *l_698 = &l_631;
                    int32_t l_699 = 0x2B45925CL;
                    int32_t *l_700 = (void*)0;
                    int32_t *l_701 = &g_74[0].f1;
                    int32_t *l_702 = (void*)0;
                    int32_t *l_703 = &g_59.f3;
                    int32_t *l_704 = &l_631;
                    int32_t *l_705 = &g_74[0].f1;
                    int32_t *l_706[3];
                    uint8_t *l_720 = (void*)0;
                    uint8_t *l_721 = &l_617;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_706[i] = &g_309[1];
                    (*g_98) = (*g_98);
                    ++l_711;
                    if ((*l_692))
                        break;
                    (*l_703) |= (safe_div_func_uint64_t_u_u(((4L < (0x6A782CE0L ^ ((((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((*l_721)--), p_23.f1)), 0xBFEAL)) != (safe_add_func_int64_t_s_s(g_309[1], (safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((--(*g_452)), 0x8AD302A235F98649LL)), (safe_mod_func_uint16_t_u_u(((*g_207) & 65534UL), (*l_656)))))))) >= 0x0A4A7804B3AB8519LL) != 0L))) & (*l_698)), g_294));
                }
                else
                { 
                    int16_t l_734[5] = {0L,0L,0L,0L,0L};
                    uint32_t **l_738 = (void*)0;
                    uint32_t **l_739[1];
                    const union U1 ***l_743 = &l_742;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_739[i] = &l_646[0][0];
                    l_710 |= l_734[4];
                    (*l_656) ^= ((l_689 = ((safe_mul_func_int8_t_s_s((1L && 0xCCL), 247UL)) || ((l_741 , 0xFDA05472L) < l_741.f0))) & l_708);
                    l_689 |= l_593.f0;
                    (*l_743) = l_742;
                }
                l_750[1]--;
                (*l_747) &= (safe_mod_func_uint64_t_u_u((0x77L & ((l_593.f3 = (safe_lshift_func_int8_t_s_u(((((((*l_764) = (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(((((p_23.f1 & l_585) , (p_23.f0 , (*g_452))) , &g_523) == &g_523), (*l_656))), 1L)), 0UL))) < g_309[1]) | p_23.f0) ^ p_23.f2) && p_23.f2), 3))) == (**g_482))), 1UL));
                if ((((safe_rshift_func_uint8_t_u_s((g_121.f3 < ((&l_689 == ((*l_770) = func_50(p_24, l_748))) , (*l_656))), 4)) , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_708 == (*g_207)), 12)), p_23.f0))) <= l_775))
                { 
                    uint32_t *l_788 = &g_78[2];
                    int32_t l_789 = 7L;
                    struct S0 **l_791 = &g_98;
                    (*l_748) = (g_776 == l_778);
                    (*l_791) = ((((*l_788) ^= (0x0AL >= (l_593 , (g_323 & (((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((1L < 0L), ((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(g_121.f0)), (l_710 |= 0x6862A7B6F02A1223LL))), 3)) != 0xBD77L))), p_23.f0)) | 0x6F27L) , p_23.f0))))) != l_789) , l_790);
                    if (p_23.f1)
                        break;
                }
                else
                { 
                    --l_792;
                }
            }
            if (((((((l_710 = p_23.f1) ^ ((void*)0 != l_795[0])) ^ ((+(p_23.f2 | p_23.f2)) >= (safe_div_func_uint32_t_u_u(((*l_799) = 0xA4B1467BL), (~((p_23.f1 != g_121.f4) || g_121.f0)))))) && p_23.f1) | l_708) & p_23.f2))
            { 
                uint32_t **l_804 = &l_646[3][3];
                int32_t l_808 = (-1L);
                int32_t *l_809 = &l_689;
                (*l_656) = 0x1C007EC0L;
                (*l_656) = (((((p_23.f2 && (l_803 == l_803)) > (((*l_804) = p_24) == p_24)) && (((g_8 < (safe_add_func_uint16_t_u_u((0UL && g_59.f2), p_23.f0))) >= 0x16AD72FFL) != p_23.f0)) <= l_807) && l_808);
                if (l_593.f7)
                    break;
                (*g_99) = l_809;
                (*l_656) |= ((((safe_mul_func_uint16_t_u_u(((l_710 = (safe_sub_func_uint32_t_u_u(g_121.f5, g_59.f4))) && (((*l_809) == ((*l_799) ^= p_23.f1)) , (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((void*)0 != &p_24), ((safe_div_func_uint16_t_u_u(p_23.f1, l_775)) <= 3UL))), g_121.f4)))), (-1L))) || p_23.f0) | (*l_809)) , (**g_99));
            }
            else
            { 
                int32_t l_820 = 0L;
                uint32_t *l_821 = &g_59.f4;
                uint32_t **l_822 = &l_646[3][3];
                uint32_t **l_823[4] = {&l_799,&l_799,&l_799,&l_799};
                int32_t l_836[1];
                int32_t l_845 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_836[i] = 0L;
                if (l_820)
                    break;
                if (((g_824 = func_50(func_50(l_821, ((*l_822) = func_50(l_646[3][3], l_821))), p_24)) == &g_192))
                { 
                    int16_t l_825 = 0xF0D8L;
                    uint8_t *l_827 = &l_750[3];
                    (*l_656) ^= l_825;
                    if (p_23.f0)
                        break;
                    if (l_632)
                        break;
                    l_836[0] &= (+(((*l_827) = 2UL) , (safe_rshift_func_int8_t_s_s(((((((l_825 ^ 4294967286UL) <= (+p_23.f2)) , g_207) == l_831) < ((*l_594) &= (l_593.f3 &= (safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((((((l_708 <= 0xCBL) >= l_825) && l_825) <= 0UL) & g_59.f4), 1L)) & 0UL), g_250))))) > l_689), g_121.f4))));
                }
                else
                { 
                    int32_t *l_837 = &g_59.f3;
                    int32_t *l_838 = &l_709[0][1][0];
                    int32_t *l_839[2][5][5] = {{{&g_309[1],(void*)0,&g_309[1],&l_709[1][2][0],(void*)0},{&l_689,(void*)0,&l_710,&l_593.f3,&g_121.f3},{&g_309[1],&l_689,(void*)0,&l_836[0],&l_689},{&l_709[1][3][0],&g_121.f3,&l_710,&g_121.f3,&l_709[1][3][0]},{(void*)0,&l_593.f3,&g_309[1],&g_121.f3,&l_836[0]}},{{&l_585,(void*)0,&l_709[1][2][0],&l_836[0],&g_309[1]},{&l_710,&g_309[1],&l_836[0],&l_593.f3,&l_836[0]},{&l_836[0],&l_836[0],(void*)0,&l_709[1][2][0],&l_709[1][3][0]},{&l_836[0],&l_709[0][1][0],&l_709[1][3][0],(void*)0,&l_689},{&l_710,&g_309[1],&g_309[1],&l_689,&g_121.f3}}};
                    int32_t l_840 = 0x4E2DD879L;
                    struct S0 *l_853 = &l_593;
                    int i, j, k;
                    l_689 = (g_74[0] , (0x372F8FA8CC9069C8LL != p_23.f0));
                    l_850++;
                    if (l_836[0])
                        continue;
                    (*l_853) = (l_845 , ((*g_98) = (*g_98)));
                    if (p_23.f0)
                        continue;
                }
                (*l_656) ^= l_593.f4;
                (**l_577) = (*g_582);
            }
            l_847 &= p_23.f2;
        }
        for (l_847 = 0; (l_847 <= 28); l_847++)
        { 
            int32_t l_867 = (-1L);
            int64_t l_888 = 0xC1F5B317F56B0619LL;
            union U1 l_942 = {0x654A8D3BEB7FF582LL};
            int32_t l_983[6][1] = {{(-5L)},{(-5L)},{0xE40AFA9EL},{(-5L)},{(-5L)},{0xE40AFA9EL}};
            uint32_t l_995 = 0x2DF11CC6L;
            struct S0 *l_1037 = &g_59;
            uint64_t l_1077 = 18446744073709551609UL;
            uint32_t *l_1108 = &g_294;
            int16_t l_1124[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_1124[i] = 0x3EAEL;
            for (l_633 = 0; (l_633 >= (-4)); l_633 = safe_sub_func_uint64_t_u_u(l_633, 1))
            { 
                int32_t l_864 = 4L;
                int32_t l_865 = 0L;
                int32_t l_868 = 0x05447E04L;
                uint32_t l_869 = 0xAA22CDF4L;
                int64_t *l_892[3][1][6] = {{{&g_430,&g_430,&l_888,&g_430,&g_430,&l_888}},{{&g_430,&g_430,&l_888,&g_430,&g_430,&l_888}},{{&g_430,&g_430,&l_888,&g_430,&g_430,&l_888}}};
                int32_t *l_901 = &l_848[2];
                uint32_t *l_904[1][7][4] = {{{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294}}};
                uint32_t l_960 = 4294967290UL;
                uint32_t *l_961 = &g_78[4];
                int32_t l_986 = (-8L);
                int32_t l_988 = 0x6F6FD41BL;
                int32_t l_989 = (-10L);
                int32_t l_990[6] = {0xCD74EFE7L,0xCD74EFE7L,0xCD74EFE7L,0xCD74EFE7L,0xCD74EFE7L,0xCD74EFE7L};
                int32_t l_993 = 0xC8BD0F0CL;
                int16_t l_1000 = 0xEF61L;
                const uint8_t *l_1007 = &l_872.f2;
                union U1 l_1008[2][2][7] = {{{{0UL},{0x9740FA02C261FB68LL},{0x9740FA02C261FB68LL},{0UL},{0x9740FA02C261FB68LL},{0x9740FA02C261FB68LL},{0UL}},{{1UL},{0UL},{1UL},{0x279D13C566C6A2A0LL},{0xCA273F3B011EA5F3LL},{0x279D13C566C6A2A0LL},{1UL}}},{{{0UL},{0UL},{0x42737388B04441C2LL},{0UL},{0UL},{0x42737388B04441C2LL},{0UL}},{{0xCA273F3B011EA5F3LL},{0x279D13C566C6A2A0LL},{1UL},{0UL},{1UL},{0x279D13C566C6A2A0LL},{0xCA273F3B011EA5F3LL}}}};
                int8_t *l_1014 = &l_708;
                int i, j, k;
                for (l_593.f6 = 0; (l_593.f6 != 8); l_593.f6 = safe_add_func_uint8_t_u_u(l_593.f6, 8))
                { 
                    int32_t *l_860[2][6][2] = {{{&l_847,(void*)0},{&l_847,&l_632},{&l_689,&g_309[1]},{(void*)0,&l_689},{&l_847,&g_309[1]},{&l_593.f3,&g_844}},{{&g_844,&g_844},{&l_593.f3,&g_309[1]},{&l_847,&l_689},{(void*)0,&l_593.f3},{&l_593.f3,(void*)0},{&g_14,&g_14}}};
                    int32_t l_866 = 0xABEB2538L;
                    int i, j, k;
                    --l_861[3][3][0];
                    --l_869;
                    (*g_98) = l_872;
                    return l_865;
                }
                for (l_710 = 0; (l_710 > (-3)); --l_710)
                { 
                    const union U1 **l_875 = (void*)0;
                    const union U1 *l_877 = &g_878[0][0][1];
                    const union U1 **l_876 = &l_877;
                    int32_t *l_889 = &g_121.f3;
                    g_879[1][0] = ((*l_876) = &p_23);
                    (*l_889) ^= (safe_mod_func_uint8_t_u_u(l_872.f1, (safe_sub_func_uint8_t_u_u(((g_307 > (((safe_sub_func_int64_t_s_s(p_23.f1, ((*g_482) != (void*)0))) || (l_888 > (g_8 | g_241[0]))) > g_78[2])) >= 0x04B0223AL), p_23.f2))));
                }
            }
        }
        p_23.f1 = ((((((((*l_594) |= ((safe_sub_func_int64_t_s_s(5L, p_23.f0)) & (((0xF0B0L > 0x856FL) >= (g_78[2] == (safe_mul_func_uint16_t_u_u((p_23.f1 == (((*l_1143) = (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint8_t_u_u(((*l_1142) = (l_1141 | l_848[2])), p_23.f1))))) >= 4294967290UL)), 65531UL)))) & (***g_582)))) ^ (*g_207)) > l_630) , l_1144) > 0x051FB0F76D8F19F1LL) < l_1087.f7) , 0x66938220L);
        if (l_593.f6)
            goto lbl_1009;
        l_595 = 1L;
    }
    p_23.f1 = (((((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s(((void*)0 == &p_23), (-1L))) >= (&l_1144 == &l_1144)) , ((*g_207) = (safe_mul_func_int64_t_s_s((-1L), (l_1090 != l_1090))))), 3)) > 65530UL) , l_843), l_843)) , 0UL) , (*g_452)) && (-2L)) < 0UL);
    g_1153 = l_792;
    --l_1159[0][0];
    (*g_99) = (void*)0;
    return p_23.f2;
}



static union U1  func_25(int32_t * p_26, int32_t  p_27, int32_t  p_28, uint32_t * p_29, int32_t  p_30)
{ 
    uint16_t l_131 = 65527UL;
    int32_t l_134 = (-1L);
    uint32_t **l_135[6] = {(void*)0,&g_81[6],(void*)0,(void*)0,&g_81[6],(void*)0};
    int32_t l_145 = 0xED06C076L;
    uint32_t l_148 = 4294967291UL;
    int32_t l_191[2];
    union U1 *l_270 = &g_74[0];
    struct S0 l_326 = {0x03B8L,6UL,0x21L,0x1DE429D4L,0xADC0C72FL,65531UL,0xF4L,-4L};
    uint64_t **l_481[7] = {&g_452,&g_452,&g_452,&g_452,&g_452,&g_452,&g_452};
    int i;
    for (i = 0; i < 2; i++)
        l_191[i] = 0x74A5FEA7L;
    if (func_39(&g_8))
    { 
        int8_t l_132 = 8L;
        uint16_t *l_133[4][1][1] = {{{&g_121.f5}},{{&l_131}},{{&g_121.f5}},{{&l_131}}};
        uint8_t *l_136 = &g_59.f1;
        int i, j, k;
        l_134 |= ((((p_28 ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((p_26 == &g_8) < ((p_27 ^= (**g_99)) <= (*g_100))), g_59.f0)), (safe_lshift_func_uint16_t_u_u(((g_59.f5 = ((((+(l_131 > l_131)) < p_30) && l_132) , 0xEDB3L)) && g_121.f1), 11)))), 0x6CL))) != (-1L)) , 7L) , 0x4812A85FL);
        (*g_100) = ((l_135[1] == &g_81[0]) > (p_30 != ((*l_136)--)));
    }
    else
    { 
        uint32_t *l_155 = &g_121.f4;
        int32_t l_158[4][2][4] = {{{0xBA64CE0CL,0x1F22FF88L,0x1F22FF88L,0xBA64CE0CL},{(-1L),0x1F22FF88L,0xF3B8A434L,0x1F22FF88L}},{{0x1F22FF88L,0x43CD8866L,0xF3B8A434L,0xF3B8A434L},{(-1L),(-1L),0x1F22FF88L,0xF3B8A434L}},{{0xBA64CE0CL,0x43CD8866L,0xBA64CE0CL,0x1F22FF88L},{0xBA64CE0CL,0x1F22FF88L,0x1F22FF88L,0xBA64CE0CL}},{{(-1L),0x1F22FF88L,0xF3B8A434L,0x1F22FF88L},{0x1F22FF88L,0x43CD8866L,0xF3B8A434L,0xF3B8A434L}}};
        uint16_t *l_179 = &g_59.f5;
        union U1 l_197 = {0xD68153D3BC77A5DDLL};
        struct S0 l_235 = {0x791AL,1UL,0x25L,0x7FC4C37CL,0UL,0xE175L,2L,0x0686L};
        int16_t *l_262 = &g_121.f7;
        int16_t **l_497 = &l_262;
        int16_t ***l_496[4];
        int16_t ****l_495[3];
        int32_t ***l_525 = &g_99;
        int32_t ****l_524 = &l_525;
        int32_t *l_535 = &g_309[1];
        int32_t *l_536[3][3][4] = {{{(void*)0,&g_121.f3,(void*)0,&g_121.f3},{(void*)0,&g_121.f3,(void*)0,&g_121.f3},{(void*)0,&g_121.f3,(void*)0,&g_121.f3}},{{(void*)0,&g_121.f3,(void*)0,&g_121.f3},{(void*)0,&g_121.f3,(void*)0,&g_121.f3},{(void*)0,&g_121.f3,(void*)0,&g_121.f3}},{{(void*)0,&g_121.f3,(void*)0,&g_121.f3},{(void*)0,&g_121.f3,(void*)0,&g_121.f3},{(void*)0,&g_121.f3,(void*)0,&g_121.f3}}};
        uint8_t l_537 = 255UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_496[i] = &l_497;
        for (i = 0; i < 3; i++)
            l_495[i] = &l_496[0];
        if ((*g_100))
        { 
            uint16_t *l_141 = (void*)0;
            uint16_t *l_142 = &g_59.f5;
            int32_t l_143 = 2L;
            int32_t l_146 = 0xBCE3F75EL;
            int64_t l_147 = 4L;
            uint64_t *l_159 = &g_77;
            int8_t l_169 = 0x7EL;
            union U1 l_178 = {18446744073709551608UL};
            const uint32_t l_186 = 4294967292UL;
            uint8_t l_198[1];
            struct S0 *l_242 = &g_121;
            int32_t l_313 = 0xFAABD576L;
            int32_t l_314 = 0x10E31985L;
            int32_t l_317 = (-3L);
            int32_t l_319 = (-1L);
            int32_t l_320 = 0x9BD5838FL;
            int32_t l_321[4][6] = {{0x08FA7340L,0x5634AED8L,(-10L),(-10L),0x5634AED8L,0x08FA7340L},{0xBD2F8359L,0x08FA7340L,(-10L),0x08FA7340L,0xBD2F8359L,0xBD2F8359L},{0xC2DD40FCL,0x08FA7340L,0x08FA7340L,0xC2DD40FCL,0x5634AED8L,0xC2DD40FCL},{0xC2DD40FCL,0x5634AED8L,0xC2DD40FCL,0x08FA7340L,0x08FA7340L,0xC2DD40FCL}};
            uint32_t *l_336 = &g_192;
            int i, j;
            for (i = 0; i < 1; i++)
                l_198[i] = 1UL;
            if ((safe_mod_func_int32_t_s_s((((*l_142) = 0x257EL) || g_121.f5), 0x128C81A4L)))
            { 
                int32_t *l_144[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_144[i] = &g_14;
                for (g_59.f1 = 2; (g_59.f1 <= 6); g_59.f1 += 1)
                { 
                    int i;
                    (*g_100) = g_78[g_59.f1];
                }
                (*g_99) = &p_27;
                l_148++;
            }
            else
            { 
                uint32_t *l_156 = &g_59.f4;
                uint8_t *l_157 = &g_121.f1;
                uint8_t *l_170 = &g_59.f2;
                uint8_t *l_173 = &g_121.f2;
                int32_t l_187 = 0x52605C49L;
            }
            if (l_198[0])
            { 
                int32_t l_213 = 0L;
                int32_t l_214 = (-1L);
                int32_t *l_234 = &g_121.f3;
                if (((safe_lshift_func_uint16_t_u_u((l_134 , (g_59.f1 & (safe_rshift_func_uint16_t_u_s((((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((g_163 = g_163) != g_207), 6)) , (g_192 >= (l_214 &= (safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((~((((**g_99) ^ (((*l_159) = l_213) & g_192)) > (-1L)) != l_131)), l_213)) ^ 0x374B80A73095CEBALL), l_191[1]))))), l_213)) , p_30) > 0xBF1EL) && l_131) & l_198[0]), 3)))), 12)) == 0x0BL))
                { 
                    int32_t *l_215 = &g_59.f3;
                    int32_t *l_216 = &g_14;
                    g_217++;
                }
                else
                { 
                    uint32_t *l_225 = &l_148;
                    (*g_99) = ((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((~(0x4CD73731L > ((*l_225) = l_186))), (l_178 , (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((((((safe_sub_func_int64_t_s_s(((((void*)0 != (*g_99)) < 4UL) != p_30), g_59.f1)) , (void*)0) != (void*)0) <= p_27) != (*g_207)), l_213)), g_59.f6)), 15))))), 0xB863L)) , (void*)0);
                }
                (*g_99) = l_234;
            }
            else
            { 
                (*g_98) = l_235;
            }
            for (l_178.f0 = 8; (l_178.f0 > 40); l_178.f0++)
            { 
                int16_t l_249[2][7] = {{1L,1L,8L,1L,1L,8L,1L},{0x55B6L,0x94ACL,0x94ACL,0x55B6L,0x94ACL,0x94ACL,0x55B6L}};
                uint8_t *l_265 = &g_38;
                uint8_t *l_268[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t *l_269 = &l_158[0][1][3];
                int32_t l_272 = 0x78DD2CD6L;
                int32_t *l_273 = &g_121.f3;
                int32_t *l_274 = &l_191[0];
                int32_t *l_275 = &l_197.f1;
                int32_t *l_276 = &l_197.f1;
                int32_t *l_277 = &l_158[2][0][1];
                int32_t *l_278 = &l_272;
                int32_t *l_279 = (void*)0;
                int32_t *l_280 = &l_158[3][0][3];
                int32_t *l_281 = &l_158[2][0][1];
                int32_t *l_282 = (void*)0;
                int32_t *l_283 = &l_191[1];
                int32_t *l_284 = &g_74[0].f1;
                int32_t *l_285 = &g_59.f3;
                int32_t *l_286 = &l_197.f1;
                int32_t *l_287 = &g_74[0].f1;
                int32_t *l_288 = &l_158[0][0][2];
                int32_t *l_289 = &l_146;
                int32_t *l_290 = &l_158[3][0][1];
                int32_t *l_291 = &g_59.f3;
                int32_t *l_292 = &l_143;
                int32_t *l_293[3][4][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,&l_272,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_272,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&l_272,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_272,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&l_272,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_272,(void*)0}}};
                int i, j, k;
                for (l_235.f1 = 0; (l_235.f1 == 41); l_235.f1 = safe_add_func_uint8_t_u_u(l_235.f1, 3))
                { 
                    int16_t *l_247 = (void*)0;
                    int16_t *l_248 = &l_197.f2;
                    int32_t l_251 = 6L;
                }
            }
            for (l_235.f7 = 0; (l_235.f7 <= 0); l_235.f7 += 1)
            { 
                int32_t *l_297 = &l_158[2][1][3];
                int32_t *l_298 = (void*)0;
                int32_t *l_299 = &l_146;
                int32_t *l_300 = &l_178.f1;
                int32_t *l_301 = &l_146;
                int32_t *l_302[2][6][7] = {{{&l_143,&l_191[1],&l_143,&l_191[1],&l_143,&l_191[1],&l_143},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_143,&l_191[1],&l_143,&l_191[1],&l_143,&l_191[1],&l_143},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_143,&l_191[1],&l_143,&l_191[1],&l_143,&l_191[1],&l_143},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_143,&l_191[1],&l_143,&l_191[1],&l_143,&l_191[1],&l_143},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_143,&l_191[1],&l_143,&l_191[1],&l_143,&l_191[1],&l_143},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_143,&l_191[1],&l_143,&l_191[1],&l_143,&l_191[1],&l_143},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int8_t l_315 = (-3L);
                int i, j, k;
                ++g_303;
                for (l_235.f5 = 0; (l_235.f5 <= 0); l_235.f5 += 1)
                { 
                    int64_t l_306 = 3L;
                    int32_t l_310 = 5L;
                    int32_t l_311 = 0L;
                    int32_t l_312 = 4L;
                    int32_t l_316 = (-3L);
                    int32_t l_318[6][1] = {{0x5A99FCA5L},{0xCD98A267L},{0x5A99FCA5L},{0xCD98A267L},{0x5A99FCA5L},{0xCD98A267L}};
                    int32_t l_322 = 5L;
                    int i, j;
                    --g_323;
                    if ((**g_99))
                        continue;
                    (*l_242) = l_326;
                }
                return g_74[l_235.f7];
            }
            if ((((safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((!(safe_sub_func_int8_t_s_s((((((safe_unary_minus_func_int64_t_s((~(g_241[0] > (*g_207))))) || g_121.f6) ^ l_319) | g_308[0]) >= ((*l_336) = 0x2FD69753L)), (+0xAFCBFBDB28FE34A3LL)))), l_326.f6)), (*g_207))) >= p_30) , l_326.f7))
            { 
                int16_t l_338 = (-1L);
                (*g_98) = (l_338 , (*l_242));
                (*g_98) = (*g_98);
            }
            else
            { 
                int16_t *l_353 = &l_326.f0;
                const int32_t l_362 = 0x60A30BF8L;
                union U1 l_376 = {18446744073709551615UL};
                for (g_294 = 0; (g_294 > 38); g_294 = safe_add_func_uint16_t_u_u(g_294, 2))
                { 
                    int16_t *l_356[4] = {&g_121.f0,&g_121.f0,&g_121.f0,&g_121.f0};
                    uint32_t *l_365 = &g_78[5];
                    const int32_t l_366 = 6L;
                    int32_t l_369 = 7L;
                    uint16_t *l_370 = (void*)0;
                    uint16_t *l_371 = &l_326.f5;
                    int32_t *** const l_401 = (void*)0;
                    int32_t ** const **l_402 = (void*)0;
                    int32_t *l_406[1];
                    int32_t ** const l_405 = &l_406[0];
                    int32_t ** const *l_404 = &l_405;
                    int32_t ** const **l_403 = &l_404;
                    int8_t l_407 = 0x71L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_406[i] = &l_197.f1;
                    (*g_99) = ((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((p_28 && (safe_rshift_func_int8_t_s_u((+(~l_131)), 3))) & ((p_30 & (safe_sub_func_int32_t_s_s(l_131, (((((safe_add_func_uint64_t_u_u((((void*)0 != l_353) && (safe_mod_func_int8_t_s_s(g_121.f4, l_158[2][0][1]))), 0UL)) & l_197.f0) , l_356[2]) != (void*)0) & g_59.f5)))) >= g_8)), p_28)) && g_309[1]), (-6L))) , &p_28);
                    l_158[3][1][0] |= (safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((!(-7L)) , l_362), (((safe_mod_func_uint16_t_u_u(l_362, (((((*l_336) = 1UL) , (void*)0) == (((*l_365) = 4294967292UL) , (void*)0)) | g_121.f1))) , 7UL) || g_121.f0))) , p_30), p_28));
                    if (l_366)
                        continue;
                    l_369 = ((((++(*g_207)) != (++(*l_371))) || ((p_27 ^ (safe_mul_func_uint16_t_u_u((l_376 , (+p_28)), 0x2518L))) & (((safe_add_func_int32_t_s_s((p_28 >= (safe_sub_func_uint32_t_u_u((!0xF4668C9231B19A32LL), ((*l_365) = (((safe_lshift_func_int16_t_s_s(p_27, 3)) , g_74[0]) , l_366))))), p_30)) , g_74[0].f2) ^ p_28))) || g_241[1]);
                    (*g_99) = ((*l_405) = (((((safe_div_func_uint64_t_u_u((l_148 , p_28), (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((-9L) || (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_121.f6, (((l_401 != ((*l_403) = &g_99)) ^ p_27) || p_30))), p_28))), p_28)), p_28)) & g_121.f7) , g_250), l_407)), l_235.f0)) >= l_376.f0), 1UL)))) != p_27) <= p_28) <= g_250) , &l_134));
                }
                (**g_99) &= 0L;
                (*g_99) = &p_28;
            }
        }
        else
        { 
            uint64_t l_412 = 18446744073709551615UL;
            int32_t l_431[2][3];
            int32_t l_433 = 0xF5250010L;
            const int16_t *l_444 = &g_308[0];
            int16_t *l_446[3];
            uint32_t *l_456 = &l_326.f4;
            int16_t **l_468 = &l_446[1];
            int16_t ***l_467 = &l_468;
            struct S0 l_499 = {-2L,0xBDL,0xD3L,1L,0x10ACCF1BL,1UL,0x39L,0x956BL};
            union U1 l_531[7][4][1] = {{{{0x1F991CD422017BF5LL}},{{0xED77D5D12417D94ELL}},{{1UL}},{{1UL}}},{{{0xED77D5D12417D94ELL}},{{0x1F991CD422017BF5LL}},{{0x6EECFE3810D2F74CLL}},{{0x1F991CD422017BF5LL}}},{{{0xED77D5D12417D94ELL}},{{1UL}},{{1UL}},{{0xED77D5D12417D94ELL}}},{{{0x1F991CD422017BF5LL}},{{0x6EECFE3810D2F74CLL}},{{0x1F991CD422017BF5LL}},{{0xED77D5D12417D94ELL}}},{{{1UL}},{{1UL}},{{0xED77D5D12417D94ELL}},{{0x1F991CD422017BF5LL}}},{{{0x6EECFE3810D2F74CLL}},{{0x1F991CD422017BF5LL}},{{0xED77D5D12417D94ELL}},{{1UL}}},{{{1UL}},{{0xED77D5D12417D94ELL}},{{0x1F991CD422017BF5LL}},{{0x6EECFE3810D2F74CLL}}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_431[i][j] = (-5L);
            }
            for (i = 0; i < 3; i++)
                l_446[i] = &g_308[0];
            g_408[1][3][4] = &g_81[4];
            for (l_235.f5 = 28; (l_235.f5 <= 26); l_235.f5 = safe_sub_func_uint8_t_u_u(l_235.f5, 5))
            { 
                int32_t *l_411[5][7] = {{&g_59.f3,&l_191[1],&g_59.f3,&l_191[1],&g_59.f3,(void*)0,(void*)0},{&g_309[1],&l_134,&l_191[1],(void*)0,(void*)0,(void*)0,&l_191[1]},{(void*)0,(void*)0,&g_14,&g_59.f3,&l_134,&g_309[1],&g_309[1]},{&g_309[1],(void*)0,&g_14,&g_14,(void*)0,&g_309[1],(void*)0},{&g_59.f3,&g_14,&l_191[1],(void*)0,&l_134,&l_134,(void*)0}};
                uint8_t *l_423 = &g_59.f1;
                uint8_t *l_426 = &g_121.f2;
                int8_t *l_427 = (void*)0;
                int8_t *l_428 = &g_59.f6;
                int64_t *l_429 = &g_430;
                int i, j;
                l_412++;
                l_326.f3 = (**g_99);
            }
            if ((safe_add_func_uint8_t_u_u(((0x52A2233DL < ((**g_99) = (((safe_rshift_func_int16_t_s_u((p_27 && l_235.f6), 13)) < ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((((*l_467) = &l_262) != &l_262), 12)) > ((g_8 | (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_235.f1 >= g_308[0]) & (*g_452)) , g_308[0]), g_59.f2)) ^ 0xE9ADL), 18446744073709551606UL))) | 1L)), 2)) || p_28)) < 3L))) && p_27), 1UL)))
            { 
                uint32_t l_483 = 18446744073709551611UL;
                int32_t l_486 = 0xBFC4CF91L;
                int32_t l_487 = (-3L);
                int32_t l_488 = 0L;
                int32_t l_489 = 6L;
                int32_t l_490[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_490[i] = 6L;
                for (l_148 = 0; (l_148 <= 0); l_148 += 1)
                { 
                    int32_t *l_484 = &l_197.f1;
                    int32_t *l_485[7][2][4] = {{{(void*)0,(void*)0,&l_326.f3,&g_121.f3},{&g_121.f3,&l_197.f1,&g_121.f3,&g_59.f3}},{{&g_121.f3,&g_59.f3,&l_431[1][0],&g_59.f3},{&l_235.f3,&l_197.f1,&l_158[1][1][1],&g_121.f3}},{{&g_443[5][0][0].f1,(void*)0,&g_59.f3,&l_191[1]},{&l_158[1][1][1],&l_235.f3,&g_59.f3,&g_59.f3}},{{&l_158[1][1][1],&l_158[1][1][1],&g_59.f3,(void*)0},{&g_443[5][0][0].f1,&g_59.f3,&l_158[1][1][1],(void*)0}},{{&l_235.f3,&g_121.f3,&l_431[1][0],&g_59.f3},{&g_59.f3,(void*)0,&g_59.f3,&l_197.f1}},{{(void*)0,&l_235.f3,&l_431[1][0],(void*)0},{(void*)0,&g_59.f3,&l_191[1],&l_235.f3}},{{&l_158[1][1][1],&l_191[1],&l_191[1],&l_158[1][1][1]},{(void*)0,&l_197.f1,&l_431[1][0],&g_59.f3}}};
                    uint32_t l_491 = 0x039198FAL;
                    int i, j, k;
                    g_14 ^= (safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(2UL, ((l_483 |= ((((*g_207) = (*g_207)) , ((safe_mod_func_int32_t_s_s((*g_100), ((p_27 < p_30) || ((safe_rshift_func_int8_t_s_u(((g_482 = l_481[6]) == ((*g_98) , (void*)0)), 7)) != l_197.f1)))) ^ g_121.f5)) <= 5UL)) >= 0x1EB96306L))), 4294967295UL));
                    l_491--;
                }
            }
            else
            { 
                uint32_t l_500 = 18446744073709551615UL;
                int32_t l_526 = 2L;
                int32_t l_528 = (-1L);
                if ((**g_99))
                { 
                    int32_t *l_494[4][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{&l_326.f3},{(void*)0}},{{(void*)0},{&l_326.f3},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{&l_326.f3},{(void*)0},{(void*)0}},{{&l_326.f3},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    int16_t *****l_498 = &l_495[1];
                    int i, j, k;
                    l_158[2][0][1] &= (*g_100);
                    (*l_498) = l_495[0];
                    l_499 = (*g_98);
                    l_500--;
                }
                else
                { 
                    int64_t *l_527[3];
                    int32_t *l_529 = (void*)0;
                    int32_t *l_530[7][6][4] = {{{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3},{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3},{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3},{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1},{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1},{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3}},{{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3},{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3},{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1},{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1},{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3},{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3}},{{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3},{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1},{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1},{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3},{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3},{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3}},{{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1},{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1},{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3},{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3},{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3},{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1}},{{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1},{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3},{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3},{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3},{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1},{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1}},{{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3},{&l_499.f3,&g_59.f3,&g_59.f3,&l_499.f3},{&g_309[1],&g_59.f3,&l_197.f1,&g_59.f3},{&g_59.f3,&g_309[1],&l_197.f1,&l_197.f1},{&g_309[1],&g_309[1],&g_59.f3,&l_197.f1},{&l_499.f3,&g_309[1],&l_499.f3,&g_59.f3}},{{&l_499.f3,&g_59.f3,&l_499.f3,&l_197.f1},{&g_59.f3,&l_499.f3,&g_309[1],&l_499.f3},{&l_499.f3,&g_309[1],&g_309[1],&g_309[1]},{&g_59.f3,&g_59.f3,&l_499.f3,&g_309[1]},{&l_197.f1,&g_309[1],&l_197.f1,&l_499.f3},{&l_197.f1,&l_499.f3,&l_499.f3,&l_197.f1}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_527[i] = &g_430;
                    p_27 |= (l_528 &= (((l_500 >= (safe_mul_func_uint8_t_u_u(g_294, (safe_div_func_int16_t_s_s(((0UL >= (p_28 | (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_179) = (+g_121.f4)), ((safe_mul_func_uint8_t_u_u(p_28, (safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((l_431[0][2] ^= ((l_526 &= ((g_522 != l_524) != p_30)) ^ 0x11L)) >= g_121.f1) >= l_191[1]), l_326.f7)), 1L)) , 255UL), 0x0CL)) | 255UL), g_59.f3)))) < p_28))) == p_28), (**g_99))))) <= 0xC396F678740965A6LL), l_500))))) != l_191[0]) == l_499.f0));
                    return l_531[6][0][0];
                }
                (*g_98) = (*g_98);
            }
            return (*l_270);
        }
        l_134 |= (g_121.f2 && (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(0x23L)), 0)));
        ++l_537;
    }
    (**g_99) = (safe_unary_minus_func_uint16_t_u((+(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(p_30, l_326.f7)) ^ 0xC8019D6AL), 6)) == (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((*g_452)--) && p_27), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((*g_207)++), 0xDED4L)), (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(8L, 3)), 4)))), p_30)), 0x8C23L)))), 11)), 7)), g_59.f4)), l_191[1]))) ^ 0UL))));
    return (*l_270);
}



static int32_t  func_39(uint32_t * p_40)
{ 
    uint8_t l_41 = 1UL;
    int32_t *l_42 = &g_14;
    int64_t l_43 = 0x7DA19AE86A67606ELL;
    struct S0 l_60 = {0xF13AL,0xB1L,7UL,4L,3UL,65526UL,-6L,0L};
    union U1 l_71 = {0xA05A9EE2B4074358LL};
    (*l_42) &= l_41;
    if (l_43)
    { 
        union U1 *l_72 = &l_71;
        union U1 *l_73 = &g_74[0];
        int32_t l_75 = 0xD0A06037L;
        uint64_t *l_76 = &g_77;
        uint32_t *l_80 = (void*)0;
        uint32_t **l_79[6][6] = {{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80}};
        int32_t ***l_101 = &g_99;
        int i, j;
        (*l_101) = func_44(func_50((g_81[0] = ((safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((((g_59 , l_60) , (((((p_40 != (((*l_76) &= (safe_div_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((0xB358509EF6E88F3CLL >= (safe_lshift_func_int8_t_s_u(6L, 7))) ^ (((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((((*l_73) = ((*l_72) = l_71)) , p_40) != p_40) , g_38), l_75)), l_75)) == l_75) <= 18446744073709551614UL)), 10)) < g_59.f3), l_75))) , (void*)0)) > g_14) , 0xBAL) || 255UL) && g_59.f7)) && g_74[0].f2) , g_78[2]) <= l_75), g_38)), g_59.f5)) && 251UL) & l_75), 0x7CL)) , (void*)0)), p_40), (*l_42), &l_42, p_40, l_75);
    }
    else
    { 
        uint32_t *l_102 = &l_60.f4;
        (**g_99) ^= ((void*)0 != l_102);
    }
    for (g_59.f5 = 0; (g_59.f5 == 19); g_59.f5++)
    { 
        uint64_t l_109[6][2][3] = {{{0UL,0x5A567ADB25B5FE41LL,0x4EF3EF0B8C27A4A2LL},{0UL,18446744073709551612UL,0UL}},{{0UL,0x8AA494CAA1C64AC2LL,18446744073709551615UL},{0UL,0x5A567ADB25B5FE41LL,0x4EF3EF0B8C27A4A2LL}},{{0UL,18446744073709551612UL,0UL},{0UL,0x8AA494CAA1C64AC2LL,18446744073709551615UL}},{{0UL,0x5A567ADB25B5FE41LL,0x4EF3EF0B8C27A4A2LL},{0UL,18446744073709551612UL,0UL}},{{0UL,0x8AA494CAA1C64AC2LL,18446744073709551615UL},{0UL,0x5A567ADB25B5FE41LL,0x4EF3EF0B8C27A4A2LL}},{{0UL,18446744073709551612UL,0UL},{0UL,0x8AA494CAA1C64AC2LL,18446744073709551615UL}}};
        union U1 *l_114 = (void*)0;
        int i, j, k;
        (*g_99) = (*g_99);
        for (l_60.f6 = 0; (l_60.f6 < 14); l_60.f6 = safe_add_func_uint16_t_u_u(l_60.f6, 7))
        { 
            uint8_t *l_112 = (void*)0;
            int32_t l_113 = 7L;
            int32_t *l_118 = &l_60.f3;
            int8_t *l_119 = &g_59.f6;
            struct S0 *l_120 = &g_121;
            (*l_120) = (((*l_42) >= (((safe_sub_func_int8_t_s_s(((*l_119) |= ((l_109[1][0][1] > (safe_add_func_uint8_t_u_u((l_113 = l_109[2][1][1]), ((void*)0 != l_114)))) && (((!((safe_rshift_func_uint16_t_u_u(((*g_100) != ((*l_118) |= (g_77 > 0x7FL))), g_8)) & l_113)) <= 0x95B69D60F7E9ACA8LL) > l_113))), g_8)) == (*g_100)) || 18446744073709551615UL)) , (*g_98));
        }
    }
    for (g_38 = 0; g_38 < 7; g_38 += 1)
    {
        g_78[g_38] = 4294967288UL;
    }
    return (*g_100);
}



static int32_t ** func_44(int32_t * p_45, uint16_t  p_46, int32_t ** const  p_47, uint32_t * p_48, int8_t  p_49)
{ 
    int32_t l_97 = 0xD9F09F7AL;
    (**p_47) = l_97;
    g_98 = &g_59;
    return g_99;
}



static int32_t * func_50(uint32_t * p_51, uint32_t * p_52)
{ 
    union U1 *l_88 = &g_74[0];
    int32_t l_89 = 0xD34EA093L;
    uint32_t *l_90 = &g_78[2];
    uint32_t **l_93 = &g_81[0];
    uint32_t ***l_94 = &l_93;
    const uint32_t *l_96 = (void*)0;
    const uint32_t **l_95 = &l_96;
    g_74[0].f1 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((void*)0 == l_88), ((l_89 = ((*l_90) = l_89)) || ((safe_lshift_func_uint16_t_u_s((((*l_94) = l_93) == l_95), l_89)) | (((void*)0 == &g_14) | 0x38L))))), 10)) < 0x6120L), 0xA9F4L));
    return p_52;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_59.f4, "g_59.f4", print_hash_value);
    transparent_crc(g_59.f5, "g_59.f5", print_hash_value);
    transparent_crc(g_59.f6, "g_59.f6", print_hash_value);
    transparent_crc(g_59.f7, "g_59.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_74[i].f1, "g_74[i].f1", print_hash_value);
        transparent_crc(g_74[i].f2, "g_74[i].f2", print_hash_value);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_121.f4, "g_121.f4", print_hash_value);
    transparent_crc(g_121.f5, "g_121.f5", print_hash_value);
    transparent_crc(g_121.f6, "g_121.f6", print_hash_value);
    transparent_crc(g_121.f7, "g_121.f7", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_241[i], "g_241[i]", print_hash_value);

    }
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_308[i], "g_308[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_309[i], "g_309[i]", print_hash_value);

    }
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_443[i][j][k].f0, "g_443[i][j][k].f0", print_hash_value);
                transparent_crc(g_443[i][j][k].f1, "g_443[i][j][k].f1", print_hash_value);
                transparent_crc(g_443[i][j][k].f2, "g_443[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_878[i][j][k].f0, "g_878[i][j][k].f0", print_hash_value);
                transparent_crc(g_878[i][j][k].f1, "g_878[i][j][k].f1", print_hash_value);
                transparent_crc(g_878[i][j][k].f2, "g_878[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_910.f0, "g_910.f0", print_hash_value);
    transparent_crc(g_910.f1, "g_910.f1", print_hash_value);
    transparent_crc(g_910.f2, "g_910.f2", print_hash_value);
    transparent_crc(g_910.f3, "g_910.f3", print_hash_value);
    transparent_crc(g_910.f4, "g_910.f4", print_hash_value);
    transparent_crc(g_910.f5, "g_910.f5", print_hash_value);
    transparent_crc(g_910.f6, "g_910.f6", print_hash_value);
    transparent_crc(g_910.f7, "g_910.f7", print_hash_value);
    transparent_crc(g_1022, "g_1022", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1025[i][j][k], "g_1025[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1153, "g_1153", print_hash_value);
    transparent_crc(g_1509, "g_1509", print_hash_value);
    transparent_crc(g_1610, "g_1610", print_hash_value);
    transparent_crc(g_1734, "g_1734", print_hash_value);
    transparent_crc(g_1735, "g_1735", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
