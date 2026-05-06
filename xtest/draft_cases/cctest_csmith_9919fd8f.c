// SPDX-License-Identifier: MIT
// cctest_csmith_9919fd8f.c --- cctest case csmith_9919fd8f (csmith seed 2568617359)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xda5ecca9 */

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

// Options:   -s 2568617359 -o /tmp/csmith_gen_ql2bzlov/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 6;
   unsigned f1 : 5;
   unsigned f2 : 20;
};

struct S1 {
   int32_t  f0;
   unsigned : 0;
   signed f1 : 4;
   const int64_t  f2;
};

union U2 {
   uint32_t  f0;
   int32_t  f1;
};


static uint8_t g_8 = 251UL;
static uint8_t g_22[1][4] = {{0x60L,0x60L,0x60L,0x60L}};
static uint64_t g_27 = 0x966896E60BE6286CLL;
static uint32_t g_34 = 0x6F0D602FL;
static struct S0 g_35 = {2,4,844};
static uint32_t g_44 = 0x9FA6B86DL;
static struct S1 g_54 = {0x03F86127L,3,0x4096A604C9466B01LL};
static uint32_t g_120[1][1][1] = {{{1UL}}};
static uint64_t g_167 = 0xB2FC288D6F10EB15LL;
static uint8_t g_180[1] = {0x22L};
static uint8_t g_209 = 8UL;
static uint8_t g_223[1] = {1UL};



static uint64_t  func_1(void);
static struct S0  func_2(int32_t  p_3, int64_t  p_4, uint8_t  p_5, int64_t  p_6, struct S0  p_7);
static int64_t  func_9(const int8_t  p_10);
static uint64_t  func_13(union U2  p_14, uint16_t  p_15, const uint8_t  p_16, int8_t  p_17);




static uint64_t  func_1(void)
{ 
    union U2 l_18 = {0xF4F368A9L};
    int32_t l_21 = 1L;
    struct S0 l_197 = {2,0,990};
lbl_226:
    l_197 = func_2(g_8, func_9((safe_mod_func_uint64_t_u_u(func_13(l_18, ((l_21 = (safe_add_func_int64_t_s_s(((l_18.f1 >= g_8) && 0x9DF9481FL), l_18.f1))) & 0x855EEC80L), g_8, l_18.f0), 18446744073709551615UL))), l_18.f0, l_18.f1, l_197);
    for (g_8 = 0; (g_8 < 52); ++g_8)
    { 
        int32_t l_207 = 1L;
        int32_t l_225 = 0x429015B9L;
        for (g_34 = 0; (g_34 <= 0); g_34 += 1)
        { 
            int16_t l_206 = 0x0039L;
            int32_t l_208 = (-7L);
            uint16_t l_224 = 0x8DFEL;
            if (((-2L) <= (g_209 |= (l_208 = ((safe_add_func_int16_t_s_s((0x2CL > ((((((safe_sub_func_uint8_t_u_u((g_180[0] = (((l_206 & l_207) != g_22[0][1]) > l_206)), 0xBCL)) ^ l_207) < 65535UL) != g_35.f1) || g_35.f0) >= 0x46L)), l_207)) && 65531UL)))))
            { 
                return l_208;
            }
            else
            { 
                g_54.f1 = ((((g_223[0] = ((((((safe_sub_func_uint32_t_u_u(g_35.f0, ((((safe_sub_func_int64_t_s_s((~(safe_lshift_func_uint8_t_u_u(l_197.f2, 3))), (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((0UL == ((((-5L) && l_207) != 0x731CCDA1L) == g_209)) == g_120[0][0][0]), g_180[0])), g_35.f0)), g_22[0][2])))) ^ g_120[0][0][0]) < g_35.f2) >= g_44))) , 0L) > 1L) || 0x24142CD7L) > 0x44B73ACFL) ^ l_208)) , 5UL) , 0xEE31348666C92315LL) ^ 0xEDB85034D1DA3EC7LL);
                g_35.f0 = l_207;
                l_225 ^= l_224;
            }
            if (l_197.f1)
                goto lbl_226;
            for (l_18.f0 = 0; (l_18.f0 <= 0); l_18.f0 += 1)
            { 
                g_35 = g_35;
                return g_35.f1;
            }
        }
    }
    return g_209;
}



static struct S0  func_2(int32_t  p_3, int64_t  p_4, uint8_t  p_5, int64_t  p_6, struct S0  p_7)
{ 
    int64_t l_198 = 0x596EE1699ECE875DLL;
    struct S0 l_199[3] = {{6,3,615},{6,3,615},{6,3,615}};
    int i;
    g_54.f0 = l_198;
    return l_199[0];
}



static int64_t  func_9(const int8_t  p_10)
{ 
    int16_t l_172 = (-5L);
    uint32_t l_185 = 18446744073709551615UL;
    struct S0 l_187 = {5,4,661};
    int64_t l_196 = 7L;
    for (g_44 = 0; (g_44 <= 0); g_44 += 1)
    { 
        uint32_t l_186 = 0x3D9F1B8DL;
        if (((((((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_44, (safe_lshift_func_uint16_t_u_s(p_10, (safe_lshift_func_uint16_t_u_s(((g_54.f1 >= g_120[0][0][0]) <= 0L), 1)))))) & g_35.f0), 0)) <= p_10) || g_120[0][0][0]), 0xB59D0B9BL)) && 0xEDC0L) ^ 0x7F2CAB37L) && 1L) | 0xF823L) , p_10))
        { 
            uint16_t l_171 = 65528UL;
            int32_t l_174 = 8L;
            union U2 l_195 = {4294967289UL};
            for (g_34 = 0; (g_34 <= 0); g_34 += 1)
            { 
                int32_t l_168 = 0x2C73545BL;
                int32_t l_173 = 0xDF050D5AL;
                int32_t l_175 = 0x8B977632L;
                int i, j;
                l_175 = (l_174 = (((l_173 = (((2L && ((safe_add_func_uint16_t_u_u((l_168 = (g_167 ^= (g_22[g_34][g_44] > p_10))), (((safe_sub_func_int8_t_s_s((g_54 , 0x1AL), l_171)) && g_22[g_34][g_44]) , g_22[0][2]))) == p_10)) > l_172) == (-1L))) <= 0xB6BDCD2DBF4B4AC7LL) || p_10));
            }
            if ((safe_mod_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u((((g_180[0] = g_120[0][0][0]) , 1L) == (l_174 ^= ((((((safe_rshift_func_uint16_t_u_s((g_35.f2 ^ (safe_mul_func_uint8_t_u_u(((((0UL < 0x16F8L) || l_185) < g_34) < p_10), 0x99L))), g_120[0][0][0])) >= l_186) && 0x8DL) <= l_172) != p_10) <= g_27))), g_54.f0)) , 0xAA3BF259L) , 4294967291UL), g_27)))
            { 
                g_35 = l_187;
            }
            else
            { 
                uint64_t l_194 = 18446744073709551610UL;
                l_194 = (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s(((((g_54.f0 <= l_171) || l_174) > 0xD27AD0C03D5BD352LL) >= p_10), g_35.f2)) < 0x6713L) , 65535UL), 15)) < g_167), l_186));
                g_54.f1 = (((l_195 , 18446744073709551607UL) , p_10) , (-4L));
                if (p_10)
                    continue;
            }
            for (l_171 = 0; (l_171 <= 0); l_171 += 1)
            { 
                l_187.f0 = (((((-1L) & g_35.f0) ^ (g_22[0][1] , (g_35.f0 >= g_54.f0))) < l_196) || 0xDB53253064252A57LL);
            }
        }
        else
        { 
            return l_186;
        }
        for (l_186 = 0; (l_186 <= 0); l_186 += 1)
        { 
            return l_186;
        }
    }
    g_35 = g_35;
    return g_120[0][0][0];
}



static uint64_t  func_13(union U2  p_14, uint16_t  p_15, const uint8_t  p_16, int8_t  p_17)
{ 
    int32_t l_32 = (-3L);
    uint64_t l_67 = 0xDAA6E977603CC2EDLL;
    int64_t l_89 = 2L;
    int32_t l_119 = 1L;
    int32_t l_152[4][1][5] = {{{2L,(-10L),0L,0L,(-10L)}},{{2L,(-10L),0L,0L,(-10L)}},{{2L,(-10L),0L,0L,(-10L)}},{{2L,(-10L),0L,0L,(-10L)}}};
    int i, j, k;
lbl_145:
    for (p_15 = 0; (p_15 <= 0); p_15 += 1)
    { 
        uint32_t l_33 = 1UL;
        int32_t l_43 = 0x7C392AD5L;
        int32_t l_47 = 0L;
        uint16_t l_88 = 1UL;
        int64_t l_115 = 0xC0B5BC345E11D140LL;
        struct S0 l_126 = {5,2,854};
        if (((((p_14.f1 = (g_34 = (p_16 , ((safe_rshift_func_int16_t_s_s((l_33 = (((g_27 |= (safe_lshift_func_uint16_t_u_u(g_8, 1))) ^ ((((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((l_32 && (65528UL > g_8)) < g_8), p_14.f0)), g_8)) >= g_22[0][2]) && p_14.f1) && (-1L)) < 0xE8A28D8805E5316DLL) && 0x6BAC609E820F90F5LL)) && 0x68E0133D4965DA1FLL)), p_17)) < g_22[0][2])))) == 1UL) >= p_15) , p_16))
        { 
            for (l_33 = 0; (l_33 <= 0); l_33 += 1)
            { 
                g_35 = g_35;
            }
        }
        else
        { 
            struct S0 l_49 = {1,0,461};
            uint64_t l_55 = 5UL;
            if ((l_33 < (safe_add_func_uint64_t_u_u((g_27 |= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0xCCB4L, (~(((l_43 = (++g_44)) , g_35.f1) && (l_47 < l_32))))), 3))), 0x428F8A558E0D3184LL))))
            { 
                struct S0 l_48 = {-4,2,887};
                p_14.f1 = g_35.f1;
                l_49 = l_48;
                l_49.f0 = 1L;
            }
            else
            { 
                p_14.f1 = (safe_div_func_int32_t_s_s(l_32, (safe_lshift_func_int16_t_s_s(((g_54 , l_55) == (g_27 ^ g_22[0][1])), p_14.f1))));
                p_14.f1 = ((p_17 && (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(((0xC1F666C839C72380LL | (l_67 = ((safe_div_func_uint32_t_u_u(((!((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((((l_49.f1 || (p_14.f0 & l_32)) || l_49.f2) , 4UL) > 0x3BC77BB9FEC4F7CDLL) , l_47) || g_35.f2), p_14.f1)), 1)) ^ 5UL)) == 0L), p_14.f0)) <= 0L))) <= (-9L)), 3)) >= p_16) == 4294967295UL) < 0xAFL), 1))) && 1L);
                if (g_22[0][2])
                    continue;
            }
            if ((l_43 > (((safe_lshift_func_int8_t_s_s((+(((l_47 = (safe_rshift_func_uint8_t_u_u(0x8CL, (safe_add_func_uint8_t_u_u(((+(p_14.f1 = (safe_lshift_func_int8_t_s_s(0L, 6)))) ^ ((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_89 = (safe_add_func_int32_t_s_s((l_67 < l_49.f0), l_88))), 247UL)), 5)), g_44)) != l_49.f1), p_15)) ^ g_54.f1)), g_35.f0))))) && 18446744073709551615UL) & l_67)), g_54.f1)) , p_15) , 8L)))
            { 
                uint64_t l_90 = 18446744073709551615UL;
                int32_t l_95 = 0xC7924425L;
                int16_t l_106 = 0L;
                l_90 = g_8;
                g_54.f0 = (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(0x45L, 0)) > (++g_27)) | g_35.f0), (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_34, (safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((l_49 , l_49.f0), p_16)), l_106)))) , 1UL), 0))));
                l_95 = (p_14 , (p_14.f1 = (safe_div_func_int32_t_s_s((l_49.f0 = (((0x0ABCL > (((((safe_rshift_func_int8_t_s_s(g_27, (g_35 , 0xA6L))) == (-1L)) <= l_47) == p_16) , l_88)) && l_49.f2) | 0x076915C511D40112LL)), g_35.f0))));
            }
            else
            { 
                uint64_t l_118[4] = {0UL,0UL,0UL,0UL};
                int i;
                l_47 &= (safe_div_func_int8_t_s_s(((((((safe_sub_func_int32_t_s_s(((l_115 || l_49.f2) || (l_89 ^ (safe_lshift_func_int8_t_s_s((-1L), 7)))), 0x0CD4C676L)) < l_118[0]) >= 0x033EFA0937D7650DLL) , g_34) >= p_14.f0) != l_118[2]), g_54.f2));
            }
            g_120[0][0][0]++;
        }
        for (g_27 = 0; (g_27 <= 0); g_27 += 1)
        { 
            uint16_t l_123[1];
            int i;
            for (i = 0; i < 1; i++)
                l_123[i] = 65535UL;
            l_123[0]++;
        }
        if (g_120[0][0][0])
            break;
        for (l_115 = 0; (l_115 <= 0); l_115 += 1)
        { 
            int i, j;
            l_126 = g_35;
            g_54.f1 = (safe_lshift_func_int8_t_s_s((0UL != (0x09C17E67L && (p_14.f0 = (2L < (((safe_div_func_uint16_t_u_u((((g_22[p_15][(l_115 + 2)] ^ l_67) & p_17) & 0xDA6C637B4EEC52D1LL), g_44)) > 65528UL) | g_22[p_15][(l_115 + 2)]))))), g_22[p_15][(l_115 + 2)]));
        }
    }
    if ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(255UL, (safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((0x7FB1E3A2289BD9EDLL < ((g_35.f0 = ((safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(0x00D8DAA76CBE3BFDLL, 18446744073709551615UL)), p_17)) ^ g_54.f2)) <= l_89)), l_67)), g_120[0][0][0])))), 0)))
    { 
        l_119 = g_54.f0;
    }
    else
    { 
        int32_t l_151 = 0x97D19F8FL;
        if (p_14.f1)
            goto lbl_145;
        g_54.f1 = (((l_151 = (safe_rshift_func_uint8_t_u_s((((g_54.f0 = ((p_14.f1 < (0x8BL && (safe_mod_func_int8_t_s_s(((((!g_120[0][0][0]) , p_17) , p_15) || g_8), l_151)))) != 1UL)) >= p_17) > p_17), 3))) | 0x17DDF17533B9DB78LL) & p_14.f0);
    }
    return l_152[0][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_22[i][j], "g_22[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_120[i][j][k], "g_120[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_180[i], "g_180[i]", print_hash_value);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_223[i], "g_223[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
