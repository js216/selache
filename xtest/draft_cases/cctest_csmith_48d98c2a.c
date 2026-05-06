// SPDX-License-Identifier: MIT
// cctest_csmith_48d98c2a.c --- cctest case csmith_48d98c2a (csmith seed 1222216746)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc89474a5 */

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

// Options:   -s 1222216746 -o /tmp/csmith_gen_pzr15mp8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 3;
   signed f1 : 12;
   const unsigned f2 : 30;
   signed f3 : 18;
};

union U2 {
   uint8_t  f0;
   uint8_t  f1;
   int64_t  f2;
   int32_t  f3;
};

union U3 {
   uint8_t  f0;
   unsigned f1 : 12;
   uint64_t  f2;
   const int8_t  f3;
};

union U4 {
   uint64_t  f0;
   const uint8_t  f1;
   uint8_t  f2;
   int32_t  f3;
};


static const int64_t g_4 = 0x40ED3C15D0D658EDLL;
static int32_t g_14 = 0x8405CEFDL;
static uint64_t g_52 = 0x1021F5EB7F464F61LL;
static int8_t g_66 = (-1L);
static uint32_t g_75 = 0x235BB1E2L;
static int64_t g_83 = 0xBB161CA2EBD359D2LL;
static int32_t g_84 = 0xA9706E18L;
static int16_t g_90 = 0L;
static int32_t g_99[1] = {(-1L)};
static uint8_t g_100 = 249UL;
static union U2 g_113 = {1UL};
static union U3 g_123[3] = {{0xF4L},{0xF4L},{0xF4L}};
static uint16_t g_135 = 2UL;
static union U4 g_138 = {18446744073709551611UL};
static uint32_t g_197 = 0xEB312766L;
static struct S0 g_233 = {1,-33,7964,-474};



static union U3  func_1(void);
static int8_t  func_12(const uint8_t  p_13);
static int8_t  func_18(int8_t  p_19, int64_t  p_20, uint16_t  p_21, int64_t  p_22);
static uint8_t  func_32(int8_t  p_33, int64_t  p_34, struct S0  p_35, const uint8_t  p_36);




static union U3  func_1(void)
{ 
    const uint32_t l_7 = 7UL;
    uint64_t l_78 = 18446744073709551615UL;
    int32_t l_79[2];
    uint32_t l_114 = 18446744073709551612UL;
    int64_t l_147 = (-7L);
    int64_t l_148 = 0x2B2265A2DF7CCAC8LL;
    uint32_t l_165 = 0x41B65392L;
    int32_t l_210 = 9L;
    int i;
    for (i = 0; i < 2; i++)
        l_79[i] = (-2L);
    if ((safe_div_func_uint8_t_u_u((l_79[0] = (g_4 || (safe_mod_func_uint8_t_u_u(l_7, ((0x49FCL || (l_78 = ((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(func_12(l_7), 1)), 1L)) ^ 0x1E233C22C9C813C7LL))) ^ l_7))))), g_4)))
    { 
        int32_t l_80 = (-1L);
        int16_t l_97 = 0x9020L;
        uint32_t l_115 = 0UL;
        uint32_t l_146 = 18446744073709551615UL;
        if (l_80)
        { 
            for (g_14 = 22; (g_14 > (-20)); g_14 = safe_sub_func_int8_t_s_s(g_14, 4))
            { 
                uint8_t l_89[2][3][3] = {{{254UL,254UL,0UL},{1UL,1UL,0x65L},{254UL,254UL,0UL}},{{1UL,1UL,0x65L},{254UL,254UL,0UL},{1UL,1UL,0x65L}}};
                int i, j, k;
                if (g_14)
                    break;
                g_90 = ((g_75 < ((g_84 ^= (g_83 = g_4)) , (safe_sub_func_uint32_t_u_u((((l_80 >= (safe_lshift_func_uint16_t_u_s(1UL, 15))) < 1UL) , l_89[1][2][1]), l_80)))) > 0x0CFB035B4089D3BBLL);
            }
        }
        else
        { 
            int8_t l_98 = 8L;
            int64_t l_106 = 0x6DCF8DE9EF314FBCLL;
            int32_t l_116 = 1L;
            if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((0x7CL || (1L != (l_78 & 0L))), g_66)), 3)) || l_78), l_97)))
            { 
                g_100--;
                g_84 = l_78;
            }
            else
            { 
                int16_t l_109[3][1][2] = {{{0x13A2L,0x13A2L}},{{0x13A2L,0x13A2L}},{{0x13A2L,0x13A2L}}};
                int32_t l_110 = 0x14B0E7A3L;
                uint8_t l_117 = 0xE3L;
                int i, j, k;
                l_116 = (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint64_t_u(l_79[0])) & (0x55D88D3DL | (l_106 != (((safe_lshift_func_int8_t_s_s(((g_75--) <= (g_113 , l_114)), l_115)) || 0x2EBA3859457360C0LL) & 7UL)))), 0x98C3E2E3L));
                l_117 = l_79[0];
            }
            for (g_113.f0 = 0; (g_113.f0 != 32); g_113.f0 = safe_add_func_uint16_t_u_u(g_113.f0, 8))
            { 
                uint32_t l_120 = 0x2755E220L;
                uint32_t l_134 = 0xA661FA26L;
                g_14 = ((l_120 & ((l_98 >= ((safe_mod_func_uint64_t_u_u((g_123[2] , (g_90 <= g_123[2].f0)), g_52)) != l_120)) <= g_84)) >= l_120);
                g_14 ^= l_106;
                g_14 = (safe_lshift_func_int8_t_s_s(((g_75 = (safe_rshift_func_int8_t_s_u(0xA5L, 0))) || (((safe_add_func_uint8_t_u_u(0xF9L, ((safe_mod_func_uint64_t_u_u(g_14, (safe_sub_func_int32_t_s_s(0xD6DDE4B2L, g_84)))) & g_123[2].f3))) | 0x4AL) == l_134)), g_83));
            }
            for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
            { 
                int i;
                --g_135;
            }
        }
        l_80 = (l_79[0] = (g_138 , ((0UL < (safe_unary_minus_func_uint8_t_u((((l_148 = ((safe_div_func_int64_t_s_s(((l_7 != ((l_146 = ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0UL, l_115)), g_123[2].f0)) , g_138.f3)) ^ l_115)) > l_115), l_147)) < g_138.f1)) > 7L) ^ 0x2ED19200L)))) && g_113.f0)));
        return g_123[1];
    }
    else
    { 
        int32_t l_163[4];
        const int32_t l_164 = 0xC1620E12L;
        int64_t l_236[2][2] = {{0x15A4DA50BC8C3AFFLL,0x15A4DA50BC8C3AFFLL},{0x15A4DA50BC8C3AFFLL,0x15A4DA50BC8C3AFFLL}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_163[i] = 0x0544DF11L;
        for (g_84 = 0; (g_84 == (-12)); --g_84)
        { 
            int16_t l_156[3];
            int32_t l_184 = (-6L);
            int i;
            for (i = 0; i < 3; i++)
                l_156[i] = (-3L);
            for (l_148 = 0; (l_148 <= 0); l_148 += 1)
            { 
                int i;
                l_79[l_148] = l_79[l_148];
                if (g_135)
                    break;
            }
            if (((g_123[2].f0 = (safe_add_func_int16_t_s_s((+(g_90 < (((safe_add_func_int32_t_s_s((l_156[1] && (((l_79[1] = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x6E4CL, (l_163[0] = (safe_lshift_func_int8_t_s_u(0L, 4))))), l_164))) < 8L) != l_156[1])), 0x510376A8L)) != l_156[1]) != g_84))), 8UL))) == l_165))
            { 
                g_138.f3 = 0x4C349BFDL;
            }
            else
            { 
                const uint8_t l_174 = 0xA5L;
                union U4 l_183 = {1UL};
                l_79[0] = ((safe_sub_func_int64_t_s_s((((((((((g_123[2].f3 >= 1UL) <= ((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((l_174 & (safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s((((l_183 , 1UL) < g_123[2].f3) < l_163[1]), l_79[1])), l_165)), l_184)), (-8L)))) < g_113.f0), l_164)), l_183.f2)) , 0L)) != 0x4BL) >= l_78) < 0x04F2ECF3L) != l_164) != g_52) , g_99[0]) > l_183.f1), g_66)) & 65535UL);
                if (g_99[0])
                    continue;
            }
            for (g_113.f0 = 5; (g_113.f0 < 49); g_113.f0 = safe_add_func_int8_t_s_s(g_113.f0, 7))
            { 
                int32_t l_189[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_189[i] = 1L;
                g_138.f3 ^= (safe_mul_func_int16_t_s_s((0x3846322FL && l_189[2]), (!(safe_lshift_func_int16_t_s_u((0xEE14L > (safe_rshift_func_int8_t_s_s((g_197 = (g_66 |= (safe_rshift_func_int16_t_s_u(l_163[0], 3)))), g_123[2].f0))), 14)))));
                return g_123[1];
            }
        }
        for (g_14 = 4; (g_14 < 6); g_14++)
        { 
            uint16_t l_209 = 0x82C6L;
            int32_t l_219[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
            int i;
            g_138.f3 = (((~(((((safe_lshift_func_uint8_t_u_u((l_210 &= ((g_66 = g_113.f0) < (((safe_lshift_func_int16_t_s_s((l_79[0] == 0L), ((safe_div_func_uint16_t_u_u((g_113.f0 < 5L), 0x4519L)) && l_209))) > 0xBAD1L) <= g_99[0]))), 5)) != l_164) > 65526UL) & 246UL) >= 0x54FBC6739B9925D8LL)) < 0x311CE538C8CD2030LL) , l_147);
            l_219[1] = ((safe_add_func_uint32_t_u_u(4294967295UL, (g_113.f3 = (((l_210 &= (safe_div_func_int8_t_s_s(((~(safe_sub_func_uint8_t_u_u(l_79[0], ((g_75 = g_113.f1) <= (safe_unary_minus_func_uint64_t_u((18446744073709551608UL != 0L))))))) | (-1L)), 0x70L))) ^ l_209) == l_209)))) || l_163[0]);
            for (g_138.f3 = (-4); (g_138.f3 == (-6)); g_138.f3 = safe_sub_func_int64_t_s_s(g_138.f3, 3))
            { 
                int32_t l_224 = (-1L);
                l_79[0] = (g_100 , (safe_div_func_int64_t_s_s(g_123[2].f0, l_224)));
            }
        }
        l_236[1][0] = (l_163[0] == (safe_div_func_int64_t_s_s(((safe_add_func_int16_t_s_s((((((((safe_sub_func_uint64_t_u_u(0xDFC485CD221595F4LL, (safe_mul_func_int8_t_s_s((g_233 , (safe_div_func_int32_t_s_s((-7L), 4294967295UL))), g_197)))) != g_100) == g_233.f3) & g_138.f1) != g_99[0]) <= 0x04L) != 1L), g_233.f1)) & 0xF263723E2319AEFDLL), 1UL)));
    }
    return g_123[1];
}



static int8_t  func_12(const uint8_t  p_13)
{ 
    uint8_t l_17 = 0xDAL;
    int32_t l_54 = 0x161E4171L;
    uint32_t l_67 = 1UL;
    uint8_t l_74[2][1][2] = {{{253UL,253UL}},{{253UL,253UL}}};
    int i, j, k;
    for (g_14 = (-28); (g_14 != (-7)); g_14++)
    { 
        return g_4;
    }
    if (((l_17 , (func_18(g_4, p_13, (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_14, 0x4225189DL)), p_13)), l_17) > 3UL)) != p_13))
    { 
        uint8_t l_55 = 0UL;
        int32_t l_60 = 4L;
        ++l_55;
lbl_68:
        if ((g_14 = 3L))
        { 
            int32_t l_58 = 0x93E3674DL;
            g_14 = (l_58 = l_54);
            if (l_17)
                goto lbl_68;
        }
        else
        { 
            if (g_4)
            { 
                const uint16_t l_59 = 0x57AFL;
                l_60 |= l_59;
                l_67 = ((l_54 ^= (safe_mod_func_uint16_t_u_u((((+0xD293L) < (0xB5DCL >= (0UL ^ ((((g_66 ^= 1L) >= g_52) | 2L) <= 4294967292UL)))) | 0x7BL), p_13))) == 1L);
            }
            else
            { 
                return g_14;
            }
        }
        g_14 = (((g_66 & ((safe_add_func_uint64_t_u_u((g_52 = ((((safe_lshift_func_int8_t_s_u((~(((g_4 > ((p_13 || p_13) >= g_14)) == 0L) ^ p_13)), l_60)) == l_74[0][0][1]) == l_54) == 4294967288UL)), l_17)) >= p_13)) , g_14) , l_60);
    }
    else
    { 
        return p_13;
    }
    l_54 = ((g_75 = 0x53L) >= (safe_lshift_func_int16_t_s_u(1L, 14)));
    return p_13;
}



static int8_t  func_18(int8_t  p_19, int64_t  p_20, uint16_t  p_21, int64_t  p_22)
{ 
    struct S0 l_37 = {-0,-60,24332,92};
    for (p_21 = 0; (p_21 <= 5); p_21 = safe_add_func_uint16_t_u_u(p_21, 1))
    { 
        const uint32_t l_38 = 4294967294UL;
        l_37.f0 = (g_4 == (((safe_sub_func_uint64_t_u_u((!(func_32(g_14, g_14, l_37, l_38) , 250UL)), p_21)) | 2UL) > 4L));
    }
    l_37.f1 = p_22;
    return g_52;
}



static uint8_t  func_32(int8_t  p_33, int64_t  p_34, struct S0  p_35, const uint8_t  p_36)
{ 
    int16_t l_51 = 0xD14AL;
    uint16_t l_53 = 65535UL;
    p_35.f3 = ((g_4 && (-10L)) || (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(6L, 0)), (g_52 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(g_14, l_51)) <= 0UL), l_51)) > p_33), 7)), 0x212AL))))));
    return l_53;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_123[i].f0, "g_123[i].f0", print_hash_value);
        transparent_crc(g_123[i].f3, "g_123[i].f3", print_hash_value);

    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    transparent_crc(g_138.f3, "g_138.f3", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_233.f1, "g_233.f1", print_hash_value);
    transparent_crc(g_233.f2, "g_233.f2", print_hash_value);
    transparent_crc(g_233.f3, "g_233.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
