// SPDX-License-Identifier: MIT
// cctest_csmith_ea3085e5.c --- cctest case csmith_ea3085e5 (csmith seed 3929048549)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe2246852 */

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

// Options:   -s 3929048549 -o /tmp/csmith_gen_0x1u9dvy/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const uint8_t  f1;
   const int64_t  f2;
   int32_t  f3;
   uint64_t  f4;
   int8_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int64_t  f0;
   const uint16_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   uint64_t  f1;
   const struct S1  f2;
};

union U3 {
   const struct S1  f0;
};

union U4 {
   uint16_t  f0;
   int32_t  f1;
   uint16_t  f2;
};


static int32_t g_2 = (-5L);
static struct S0 g_5 = {0xB72B21A3L,8UL,0x20452A26F3F17E2FLL,6L,0xC039ECF4A41637C1LL,0x6BL};
static uint16_t g_8 = 0xDBC9L;
static int64_t g_28 = 0x89D693CE85DC32C7LL;
static int64_t g_39[3] = {(-1L),(-1L),(-1L)};
static uint64_t g_42 = 0xC655EF1C8D212595LL;
static uint32_t g_45 = 4294967294UL;
static struct S1 g_70 = {0xAE6AC69B762B02D3LL,0x70B9L,7UL,18446744073709551615UL,0xB98CFE46L};
static union U2 g_100 = {0UL};
static int32_t g_131[5] = {2L,2L,2L,2L,2L};
static int64_t g_142 = 0xF769B8DE4F0E318CLL;
static uint16_t g_143[3][5] = {{0x68EFL,65527UL,65527UL,0x68EFL,65527UL},{0x68EFL,0x68EFL,0x609CL,0x68EFL,0x68EFL},{65527UL,0x68EFL,65527UL,65527UL,0x68EFL}};
static uint8_t g_148 = 248UL;
static uint32_t g_307 = 7UL;



static int64_t  func_1(void);
static int8_t  func_16(struct S0  p_17, struct S1  p_18, struct S1  p_19);
static struct S0  func_20(struct S1  p_21, int16_t  p_22, int16_t  p_23, uint32_t  p_24);
static struct S1  func_25(int32_t  p_26, int64_t  p_27);




static int64_t  func_1(void)
{ 
    uint8_t l_7 = 3UL;
    struct S1 l_256 = {-7L,5UL,18446744073709551613UL,0x30322844L,3L};
    int32_t l_282 = (-4L);
    int32_t l_283 = (-7L);
    uint32_t l_309 = 0xD5FC5F3BL;
    for (g_2 = 0; (g_2 == 26); ++g_2)
    { 
        int64_t l_6 = (-1L);
        int32_t l_284[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_285 = 0x986F8624L;
        int i;
        if (((g_8 = (g_2 && ((g_2 , g_5) , (((l_6 == g_5.f5) >= 0xD1L) || l_7)))) , (-1L)))
        { 
            int64_t l_71 = 0xE1F637114C0ACF25LL;
            l_285 = (l_284[3] |= ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(0x85L, (safe_sub_func_int16_t_s_s((4294967295UL >= (safe_unary_minus_func_int8_t_s((l_282 = func_16(func_20(func_25((g_28 = (0L ^ (g_5.f4 >= l_6))), g_5.f3), l_71, l_6, l_6), l_256, g_70))))), l_256.f0)))) , l_283), 1UL)) && g_70.f0));
        }
        else
        { 
            uint32_t l_297 = 0x6F6431E0L;
            int32_t l_298 = 1L;
            union U4 l_301 = {0UL};
            int32_t l_320[2][1][5];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_320[i][j][k] = 0xA5A9678BL;
                }
            }
            if (((safe_lshift_func_uint8_t_u_s(g_100.f0, ((safe_add_func_int16_t_s_s((1L <= (safe_lshift_func_int8_t_s_u((l_284[3] = (1L < g_5.f5)), 2))), g_8)) & g_45))) , 1L))
            { 
                int16_t l_293[1][3][1];
                int32_t l_294 = 0xCDB69F81L;
                int64_t l_295 = (-1L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_293[i][j][k] = 0x1005L;
                    }
                }
                g_131[3] = (l_256.f3 || g_131[3]);
                l_295 = (l_294 = (g_5.f3 = (g_131[1] |= (safe_unary_minus_func_uint16_t_u(l_293[0][1][0])))));
            }
            else
            { 
                int8_t l_308 = 0xF6L;
                g_131[3] = ((+(func_25(((l_282 ^= (l_298 = l_297)) , ((((safe_lshift_func_int16_t_s_s(((l_301 , (g_148 ^= ((((((--g_5.f4) == (safe_add_func_uint64_t_u_u((~(((g_307 ^ (l_309 = ((g_5.f5 = (g_5.f5 ^ (-8L))) && l_308))) >= (-1L)) , 0xFBD6L)), g_131[0]))) != l_282) || g_2) > g_5.f0) && g_5.f0))) ^ 2UL), g_70.f1)) < l_256.f2) && g_131[3]) | l_285)), l_256.f0) , l_284[3])) < 0x90B09115C216B368LL);
                l_320[0][0][3] = (l_284[3] ^ (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((l_298 = (g_42 >= 0x0BA1L)) < (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((((g_5.f3 = l_308) | 0xF14BCFA1L) <= 0x43CCFAFCL) , l_6), 13)), g_8)) != 65535UL) , l_297)), 4)), 5)) , g_5.f5) && g_5.f1), 10)));
            }
        }
    }
    return g_5.f3;
}



static int8_t  func_16(struct S0  p_17, struct S1  p_18, struct S1  p_19)
{ 
    int8_t l_263 = 0L;
    int32_t l_264 = 0x3CDB2F45L;
    int32_t l_265 = (-6L);
    int32_t l_266[2][1][5];
    uint16_t l_269 = 0x8CF4L;
    uint16_t l_280 = 0xB85DL;
    uint32_t l_281 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_266[i][j][k] = 0x3EF6D6D9L;
        }
    }
    if ((p_17.f3 = g_5.f3))
    { 
        g_5.f3 = (safe_mod_func_int32_t_s_s((g_131[1] = ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(p_18.f3, l_263)), g_142)) >= 0x7DL)), g_39[1]));
    }
    else
    { 
        int8_t l_267[2];
        int32_t l_268 = 0x833591E9L;
        int i;
        for (i = 0; i < 2; i++)
            l_267[i] = 0xFEL;
        --l_269;
        for (g_5.f4 = 0; (g_5.f4 < 9); g_5.f4 = safe_add_func_int32_t_s_s(g_5.f4, 3))
        { 
            const uint16_t l_277 = 65535UL;
            const int32_t l_279 = 1L;
            for (l_269 = 0; (l_269 != 44); l_269++)
            { 
                int32_t l_278[2][1][5] = {{{1L,1L,1L,1L,1L}},{{1L,0x72533188L,1L,0x72533188L,1L}}};
                int i, j, k;
                p_17.f0 |= ((l_278[1][0][4] = (safe_unary_minus_func_uint16_t_u(l_277))) & ((((((l_265 == l_263) ^ (((((g_39[1] || 1UL) >= g_39[1]) <= 2L) != 1UL) && l_279)) <= p_18.f2) == 0x14316DEF22C59ECBLL) , 0L) < l_280));
                if (p_18.f2)
                    break;
            }
        }
    }
    return l_281;
}



static struct S0  func_20(struct S1  p_21, int16_t  p_22, int16_t  p_23, uint32_t  p_24)
{ 
    struct S0 l_72 = {0xD05CE631L,0x61L,0xCF5FC6D38C14FD42LL,-1L,0xAE175A3989555871LL,9L};
    uint64_t l_78[5][4] = {{1UL,1UL,18446744073709551607UL,1UL},{18446744073709551607UL,1UL,0x60535321785A3FFCLL,0x60535321785A3FFCLL},{18446744073709551607UL,18446744073709551607UL,7UL,1UL},{18446744073709551607UL,0x7FD74DCC0C03A2C1LL,0x3588D280D01B1C7CLL,18446744073709551607UL},{0x9B23D7FF4CBEB01BLL,1UL,0x9B23D7FF4CBEB01BLL,0x3588D280D01B1C7CLL}};
    int32_t l_81 = 0xEB3C20A8L;
    union U3 l_92[5] = {{{1L,65534UL,18446744073709551615UL,0x259F99B6L,0x5FDE158DL}},{{1L,65534UL,18446744073709551615UL,0x259F99B6L,0x5FDE158DL}},{{1L,65534UL,18446744073709551615UL,0x259F99B6L,0x5FDE158DL}},{{1L,65534UL,18446744073709551615UL,0x259F99B6L,0x5FDE158DL}},{{1L,65534UL,18446744073709551615UL,0x259F99B6L,0x5FDE158DL}}};
    uint64_t l_93 = 18446744073709551612UL;
    int32_t l_94 = 0xC88EEA07L;
    uint32_t l_111 = 1UL;
    union U4 l_120[2] = {{9UL},{9UL}};
    uint32_t l_121 = 0x278FAA54L;
    uint16_t l_137 = 8UL;
    union U2 l_176 = {1UL};
    uint32_t l_217 = 0x76B8D06BL;
    int64_t l_252 = (-4L);
    int i, j;
lbl_134:
    l_81 = (l_72 , (safe_add_func_int64_t_s_s(((l_72.f3 = (safe_unary_minus_func_uint16_t_u((l_72.f0 = (safe_mul_func_uint8_t_u_u((l_78[2][1] <= ((safe_mod_func_int32_t_s_s((l_72.f3 , ((l_72.f5 , p_23) , l_72.f2)), 0x19AA3B2AL)) && g_39[1])), l_72.f5)))))) >= g_42), p_22)));
    if ((g_8 > (l_94 ^= (l_72.f0 = ((safe_mod_func_uint64_t_u_u((((((l_72.f3 || ((safe_mod_func_uint32_t_u_u((l_72.f3 = g_5.f0), (((((((((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(p_21.f4, l_72.f1)) == 0xACL), p_21.f0)), l_81)) , l_92[4]) , l_78[3][3]) < g_70.f1) || 65528UL) ^ l_93) & 255UL) || 0x40699D30L) | p_21.f4))) , 0xC479B9B3L)) >= l_78[2][1]) == g_5.f3) ^ (-1L)) | p_22), 0xBC1C087C3A5C4F2FLL)) || 3UL)))))
    { 
        int8_t l_112 = (-1L);
        int32_t l_122 = 0x7456AEA0L;
        struct S0 l_126 = {9L,0xA7L,0xE874D08404EE286ALL,-1L,0xE129BBF80E55F7E0LL,0x15L};
        l_72.f3 = (((g_8 = (safe_unary_minus_func_int16_t_s(((((((((safe_mul_func_uint16_t_u_u(0x65E9L, ((safe_add_func_int64_t_s_s((g_100 , (safe_add_func_int32_t_s_s(((g_5.f4 || (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((g_5.f3 ^ 0x77B5L), 0xBAF6ACB5L)), l_111)), l_92[4].f0.f0)), l_112))) != l_72.f3), g_2))), l_112)) | (-1L)))) ^ g_5.f2) & p_21.f1) == l_112) && (-6L)) > 9L) > g_5.f1) & g_70.f4)))) <= g_5.f0) != g_70.f2);
        for (g_45 = 0; (g_45 <= 3); g_45 += 1)
        { 
            int64_t l_119 = 0x6CC583A0B3D9A396LL;
            int64_t l_141 = 1L;
            uint8_t l_166 = 0xA2L;
            int32_t l_167 = 0x144EC0A8L;
            if (g_70.f1)
                break;
            if ((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(0xB7L, (safe_add_func_uint8_t_u_u(((l_72.f3 = l_119) == (l_120[0] , ((p_24 >= l_121) > p_21.f0))), p_22)))), 7L)))
            { 
                uint32_t l_123 = 1UL;
                int32_t l_132[5] = {0xBBF86D33L,0xBBF86D33L,0xBBF86D33L,0xBBF86D33L,0xBBF86D33L};
                int32_t l_133 = 0x8D0C3C17L;
                int i;
                l_123--;
                l_133 = ((l_126 , l_126.f1) || (l_72.f0 |= (l_132[3] = ((p_22 = (g_131[3] = ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_123, 0x81L)), 0UL)) || l_81))) | l_72.f5))));
            }
            else
            { 
                const int16_t l_136 = 6L;
                int32_t l_138 = 0xECE7258FL;
                if (g_5.f4)
                    goto lbl_134;
                l_138 = (p_21.f2 > ((-7L) | (+(p_21.f3 , ((((g_5.f5 != l_136) <= 65535UL) != l_137) , 1L)))));
                l_122 = (l_126.f0 = (safe_sub_func_uint32_t_u_u((g_143[1][2] |= (g_142 = l_141)), g_131[3])));
            }
            for (g_100.f1 = 0; (g_100.f1 <= 2); g_100.f1 += 1)
            { 
                int32_t l_165 = 0x56938820L;
                int i, j;
                l_126.f3 = ((l_122 &= (0UL != (g_148 = (p_24 = (safe_add_func_uint64_t_u_u((((((l_78[(g_45 + 1)][g_100.f1] >= ((safe_mul_func_int8_t_s_s(((((g_2 >= (18446744073709551615UL <= l_78[(g_45 + 1)][g_100.f1])) < (-1L)) & l_78[(g_45 + 1)][g_100.f1]) <= p_21.f2), l_137)) , p_24)) || g_5.f3) < g_5.f3) || g_5.f4) < g_5.f3), 1UL)))))) , p_21.f4);
                l_167 = (p_21.f2 != ((safe_div_func_int32_t_s_s(g_5.f1, (safe_mul_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_122, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_94 ^= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_165 = ((l_72 , 0UL) != 0x13L)), l_78[(g_45 + 1)][g_100.f1])) , 0x127DL), 0x7661L))), g_131[3])), 6)))), 0x4DL)) , l_165) < g_2), 0x560BL)))) < l_166));
            }
        }
        for (g_5.f5 = 0; (g_5.f5 < 2); ++g_5.f5)
        { 
            int8_t l_173 = 0xBFL;
            int32_t l_188 = 0xB4A18077L;
            if ((safe_sub_func_uint32_t_u_u(((+p_21.f0) < l_173), (safe_div_func_uint32_t_u_u((l_176 , (safe_sub_func_int8_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((g_45 & 1UL), p_21.f3)), 0x096A69D1A7C047C5LL)) | p_21.f3) < 0x161AL) == 0UL), g_42))), 0x8C823E52L)))))
            { 
                uint8_t l_183 = 0x71L;
                if (g_5.f1)
                    goto lbl_134;
                l_183--;
            }
            else
            { 
                l_126.f3 = (p_21.f1 ^ (((p_21.f2++) , (((l_188 &= (-10L)) <= (0x9EL >= 0x80L)) >= p_21.f4)) & g_148));
                g_131[3] = 0x2A35B3A7L;
            }
        }
    }
    else
    { 
        int64_t l_192 = 0xA5918F5825647FE7LL;
        int64_t l_218 = 0xDB4B204B197DBADELL;
        l_192 = (+(safe_sub_func_uint16_t_u_u(g_45, 0x2300L)));
        for (l_72.f0 = 0; (l_72.f0 >= 7); ++l_72.f0)
        { 
            for (g_5.f3 = 0; (g_5.f3 <= (-24)); --g_5.f3)
            { 
                uint8_t l_197 = 0x63L;
                l_197 = g_39[1];
                if (p_21.f1)
                    goto lbl_134;
                return g_5;
            }
        }
        g_131[3] &= ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(l_78[2][1])), (safe_mod_func_int8_t_s_s((4294967295UL || (safe_rshift_func_uint8_t_u_s((((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((g_5.f0 >= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_5.f5, g_70.f1)), 1L)) == p_21.f3)), l_192)), p_24)) >= l_92[4].f0.f4) | 5UL), l_217))), p_21.f4)))) ^ l_218) >= l_78[0][2]), 4)) || p_21.f2) & p_24), p_21.f4)) ^ g_5.f0);
    }
    for (l_121 = 0; (l_121 <= 2); l_121 += 1)
    { 
        uint32_t l_223 = 0x470E8C40L;
        int32_t l_230 = (-6L);
        uint32_t l_254 = 0xB76DF01CL;
        int i;
        g_5.f0 = g_39[l_121];
        if ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_81 && l_223), (safe_sub_func_uint8_t_u_u(0x72L, g_39[1])))) != p_21.f1), 1)))
        { 
            return g_5;
        }
        else
        { 
            int32_t l_253 = (-2L);
            const int32_t l_255 = 0x2501F1CFL;
            l_230 = (((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(2L, (p_22 , g_131[3]))) , (g_5.f3 = 0xEF872575L)), p_21.f3)) == p_21.f4) >= p_21.f4);
            l_94 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((0x56L >= ((((safe_add_func_int16_t_s_s((((+(safe_rshift_func_uint8_t_u_s(0xEEL, 1))) != (safe_sub_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(g_131[4], (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u(l_252, 8)) ^ 0x345C0E92L) ^ l_72.f2) || (-1L)), l_253)), 246UL)))) >= g_142) >= 0xCE9AC76D7A7CCC4FLL) ^ 0x01L), l_253))) && 0L), 1UL)) , g_70.f3) == l_254) > 0x35L)) , p_21.f0) >= p_21.f2), p_21.f0)), p_21.f3)), l_255));
        }
    }
    return l_72;
}



static struct S1  func_25(int32_t  p_26, int64_t  p_27)
{ 
    int8_t l_33[3];
    int32_t l_37[3];
    int i;
    for (i = 0; i < 3; i++)
        l_33[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_37[i] = 1L;
    for (p_26 = 0; (p_26 != 12); p_26 = safe_add_func_uint8_t_u_u(p_26, 2))
    { 
        uint16_t l_36 = 0xF963L;
        uint32_t l_57 = 6UL;
        union U2 l_66[1][5] = {{{0UL},{0UL},{0UL},{0UL},{0UL}}};
        int32_t l_68 = (-1L);
        int i, j;
        for (g_5.f3 = 0; (g_5.f3 == (-28)); g_5.f3--)
        { 
            uint64_t l_67 = 0x676063AEBC018302LL;
            int32_t l_69 = (-1L);
            for (g_5.f0 = 0; (g_5.f0 <= 2); g_5.f0 += 1)
            { 
                int32_t l_38 = (-8L);
                int32_t l_40 = 0L;
                int32_t l_41 = 2L;
                int i;
                l_36 = (0x21817887L ^ (safe_lshift_func_uint8_t_u_u(l_33[g_5.f0], 3)));
                g_42--;
            }
            for (g_5.f4 = 0; (g_5.f4 <= 2); g_5.f4 += 1)
            { 
                int i;
                g_45--;
                g_5.f0 = (safe_unary_minus_func_uint8_t_u((((safe_sub_func_int16_t_s_s(g_39[g_5.f4], g_39[g_5.f4])) <= (0L ^ (g_5.f5 = ((safe_add_func_uint64_t_u_u(l_33[g_5.f4], 0xE9E61979B9986219LL)) <= 0L)))) ^ l_33[g_5.f4])));
            }
            l_37[0] = (l_69 = (((safe_lshift_func_int8_t_s_u(g_5.f2, (l_68 |= (safe_sub_func_uint64_t_u_u(((l_57 < ((safe_sub_func_uint16_t_u_u((~g_5.f0), (l_67 = ((safe_mul_func_uint16_t_u_u((((!(((safe_sub_func_int16_t_s_s((l_66[0][3] , (-8L)), p_26)) ^ 0L) != (-2L))) ^ g_42) && g_45), 6UL)) < 7UL)))) && l_67)) >= 4294967287UL), g_5.f5))))) > g_5.f5) | l_69));
        }
    }
    return g_70;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
    transparent_crc(g_5.f5, "g_5.f5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);

    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_70.f3, "g_70.f3", print_hash_value);
    transparent_crc(g_70.f4, "g_70.f4", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
