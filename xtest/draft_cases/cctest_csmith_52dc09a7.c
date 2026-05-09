// SPDX-License-Identifier: MIT
// cctest_csmith_52dc09a7.c --- cctest case csmith_52dc09a7 (csmith seed 1390152103)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x86c4dbed */

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

// Options:   -s 1390152103 -o /tmp/csmith_gen_lplc8o6v/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
};

struct S1 {
   signed f0 : 25;
   unsigned f1 : 23;
   signed f2 : 13;
   signed f3 : 28;
};

struct S2 {
   signed f0 : 7;
};

struct S3 {
   const unsigned f0 : 8;
   signed f1 : 18;
   const signed f2 : 23;
   signed f3 : 30;
   signed f4 : 16;
   const signed f5 : 11;
   unsigned f6 : 30;
   signed f7 : 27;
};

union U4 {
   uint32_t  f0;
   const int8_t  f1;
};

union U5 {
   int32_t  f0;
   const struct S0  f1;
   const int32_t  f2;
};

union U6 {
   int32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint64_t  f3;
};


static int32_t g_2 = (-1L);
static union U4 g_15 = {0xB748ABB7L};
static struct S2 g_21 = {7};
static int32_t g_23 = 0x28464D91L;
static uint64_t g_45 = 2UL;
static int8_t g_59[4][1] = {{0x74L},{0x74L},{0x74L},{0x74L}};
static int32_t g_61 = 0L;
static uint64_t g_62 = 18446744073709551615UL;
static struct S1 g_98 = {-2231,2790,69,-1349};
static union U5 g_100 = {1L};
static union U5 g_104 = {0x4845943CL};
static union U5 *g_103[7] = {&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104};
static int64_t g_124 = 0x7BD3F66FFE49794ELL;
static struct S2 *g_141 = &g_21;
static int64_t g_155 = 1L;
static int64_t *g_154 = &g_155;
static union U4 *g_165 = &g_15;
static union U4 **g_164 = &g_165;
static uint16_t g_167 = 1UL;
static int8_t g_177 = 7L;
static uint32_t g_178 = 0UL;
static uint64_t g_182 = 1UL;
static union U5 g_206 = {0xDC69A7FBL};
static int16_t g_213 = 0x96F1L;
static int32_t g_215 = 0xDA7B0075L;
static uint32_t g_219 = 0xB948CDD1L;
static int8_t g_255 = 0x35L;
static int32_t g_256[1] = {(-5L)};
static uint32_t g_257 = 0x1566F97DL;
static union U6 g_275 = {1L};
static int32_t g_277[4][4] = {{(-1L),0xAF016921L,(-1L),(-1L)},{0xAF016921L,0xAF016921L,0L,0xAF016921L},{0xAF016921L,(-1L),(-1L),0xAF016921L},{(-1L),0xAF016921L,(-1L),(-1L)}};
static struct S3 g_284[5] = {{12,447,1614,14701,-212,-19,30917,1143},{12,447,1614,14701,-212,-19,30917,1143},{12,447,1614,14701,-212,-19,30917,1143},{12,447,1614,14701,-212,-19,30917,1143},{12,447,1614,14701,-212,-19,30917,1143}};
static int32_t g_298 = 0x6596B18BL;
static uint32_t g_299 = 0xEA32EE7FL;
static int32_t *g_313 = &g_206.f0;
static struct S3 *g_324 = &g_284[1];
static struct S3 **g_323 = &g_324;
static int64_t g_338[2][5][3] = {{{0L,0xFEE426FEC0ABAA88LL,(-3L)},{(-3L),(-1L),(-3L)},{4L,0L,0x2EC74DB1BB4CEAF6LL},{0x5AB167A158CAF79BLL,(-3L),(-3L)},{0x2EC74DB1BB4CEAF6LL,0xFEE426FEC0ABAA88LL,0xD903F62A46873608LL}},{{1L,(-3L),(-1L)},{0x65250F36B81FDEC4LL,0x65250F36B81FDEC4LL,0x2EC74DB1BB4CEAF6LL},{(-3L),1L,(-1L)},{0xFEE426FEC0ABAA88LL,0x65250F36B81FDEC4LL,0xFEE426FEC0ABAA88LL},{0x5186CB05A659026BLL,(-3L),7L}}};
static uint8_t g_358[3] = {0xF8L,0xF8L,0xF8L};
static struct S0 g_510 = {-4L};
static uint64_t g_538 = 0xAE28DC08434A7E38LL;
static int32_t *g_592 = &g_100.f0;
static const int16_t g_617 = (-6L);
static struct S3 g_630 = {1,-435,2406,-8087,-214,19,32217,11306};
static uint8_t g_686 = 0xAFL;
static const int32_t g_698 = 1L;
static const int32_t g_700 = 1L;
static const union U5 *g_729 = &g_206;
static const union U5 **g_728[6][2][2] = {{{&g_729,&g_729},{&g_729,&g_729}},{{&g_729,&g_729},{&g_729,&g_729}},{{&g_729,&g_729},{&g_729,&g_729}},{{&g_729,&g_729},{&g_729,&g_729}},{{&g_729,&g_729},{&g_729,&g_729}},{{&g_729,&g_729},{&g_729,&g_729}}};
static const union U5 ***g_727 = &g_728[1][0][0];
static union U4 g_739 = {0x256DB072L};
static uint32_t g_764 = 0UL;
static struct S1 *g_773 = &g_98;
static union U5 **g_783 = &g_103[5];
static union U5 ***g_782 = &g_783;
static int32_t *g_863[7] = {&g_298,&g_2,&g_298,&g_298,&g_2,&g_298,&g_298};
static struct S0 g_892[4] = {{0x43FA188AL},{0x43FA188AL},{0x43FA188AL},{0x43FA188AL}};
static struct S0 **g_978 = (void*)0;
static struct S0 ***g_977[2][4] = {{&g_978,&g_978,&g_978,&g_978},{&g_978,&g_978,&g_978,&g_978}};
static int64_t g_1053 = 6L;
static int32_t g_1109 = (-7L);
static int16_t *g_1115 = (void*)0;
static int32_t ***g_1192[3] = {(void*)0,(void*)0,(void*)0};
static struct S2 **g_1232 = &g_141;
static struct S2 ***g_1231 = &g_1232;
static struct S2 ****g_1230 = &g_1231;
static struct S2 *****g_1229[5][5][6] = {{{&g_1230,&g_1230,&g_1230,&g_1230,(void*)0,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,(void*)0},{&g_1230,&g_1230,(void*)0,(void*)0,&g_1230,&g_1230},{&g_1230,(void*)0,&g_1230,&g_1230,&g_1230,&g_1230}},{{&g_1230,&g_1230,(void*)0,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,(void*)0}},{{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,(void*)0,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,(void*)0,&g_1230}},{{&g_1230,&g_1230,(void*)0,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,(void*)0,&g_1230,&g_1230,&g_1230}},{{&g_1230,&g_1230,(void*)0,&g_1230,&g_1230,&g_1230},{&g_1230,&g_1230,&g_1230,&g_1230,&g_1230,(void*)0},{&g_1230,&g_1230,(void*)0,&g_1230,(void*)0,&g_1230},{&g_1230,&g_1230,&g_1230,(void*)0,&g_1230,(void*)0},{&g_1230,&g_1230,&g_1230,(void*)0,&g_1230,&g_1230}}};
static union U5 g_1289 = {0x89BA232EL};
static int32_t *g_1307 = (void*)0;
static int32_t *g_1339 = &g_1109;
static uint64_t *g_1345 = &g_538;
static uint64_t * const *g_1344[3][2] = {{&g_1345,&g_1345},{&g_1345,&g_1345},{&g_1345,&g_1345}};
static int32_t * const g_1347 = &g_61;
static int32_t g_1379 = 0x3B79AE28L;
static int32_t g_1386[3] = {0x89E0CF49L,0x89E0CF49L,0x89E0CF49L};
static struct S0 g_1420 = {0x89DF8701L};
static struct S0 g_1423 = {-10L};
static union U4 *g_1600 = &g_739;



static union U5  func_1(void);
static struct S2  func_5(uint32_t  p_6, int16_t  p_7, uint16_t  p_8, int16_t  p_9);
static uint8_t  func_29(union U4  p_30, uint32_t  p_31);
static union U4  func_32(const struct S3  p_33, union U5  p_34, struct S1  p_35, uint16_t  p_36, union U6  p_37);
static const struct S3  func_38(int32_t * p_39, int32_t  p_40, uint64_t  p_41);
static int16_t  func_67(int32_t * p_68, uint32_t  p_69, uint64_t * p_70, uint64_t * const  p_71);
static int32_t * func_72(union U5  p_73, uint32_t  p_74, int32_t * const  p_75, uint64_t * p_76);
static union U5  func_77(int32_t * p_78, int16_t  p_79, const int8_t  p_80, struct S1  p_81, uint32_t  p_82);




static union U5  func_1(void)
{ 
    int32_t l_12 = 0x651162F6L;
    int32_t l_20 = 0xA8D7D2A7L;
    struct S2 l_1578 = {-2};
    int32_t l_1584 = 9L;
    int32_t l_1585 = 0x6396993BL;
    int32_t l_1586 = 0x2E1A1D9AL;
    int32_t l_1588[6][3][2] = {{{(-4L),0xE68B56CAL},{0x942FDFB5L,0x330484FEL},{1L,1L}},{{0xE68B56CAL,0xBBA8A63BL},{0xA8907D0CL,(-7L)},{0x92983348L,0xA19A81FBL}},{{0x5D26BC39L,0x92983348L},{1L,(-4L)},{1L,0x92983348L}},{{0x5D26BC39L,0xA19A81FBL},{0x92983348L,(-7L)},{0xA8907D0CL,0xBBA8A63BL}},{{0xE68B56CAL,1L},{1L,0x330484FEL},{0x942FDFB5L,0xE68B56CAL}},{{(-4L),0L},{0xBBA8A63BL,0L},{(-4L),0xE68B56CAL}}};
    uint16_t l_1589[3][1][4] = {{{0x2E8FL,0x2E8FL,0xFCB5L,0x2E8FL}},{{0x2E8FL,0x236EL,0x236EL,0x2E8FL}},{{0x236EL,0x2E8FL,0x236EL,0x236EL}}};
    union U6 *l_1614[7][7] = {{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275},{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275},{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275},{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275},{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275},{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275},{&g_275,(void*)0,&g_275,&g_275,&g_275,(void*)0,&g_275}};
    union U6 **l_1613 = &l_1614[6][1];
    struct S1 l_1630 = {90,392,-5,-10484};
    union U5 *l_1631 = (void*)0;
    int16_t *l_1647 = &g_213;
    union U5 l_1679 = {1L};
    int i, j, k;
    for (g_2 = (-14); (g_2 >= 19); g_2 = safe_add_func_uint64_t_u_u(g_2, 8))
    { 
        int32_t l_10 = 0xF4D39D98L;
        int8_t l_11 = 0x04L;
        struct S2 *l_1577[1][2][6];
        int32_t *l_1579 = &l_20;
        int32_t *l_1580 = &g_206.f0;
        int32_t *l_1581 = (void*)0;
        int32_t *l_1582 = &g_61;
        int32_t *l_1583[4][7][2] = {{{&g_2,&g_298},{&g_61,&g_298},{&g_2,&g_61},{(void*)0,(void*)0},{(void*)0,&g_61},{&g_2,&g_298},{&g_61,&g_298}},{{&g_2,&g_61},{(void*)0,(void*)0},{(void*)0,&g_61},{&g_2,&g_298},{&g_61,&g_298},{&g_2,&g_61},{(void*)0,(void*)0}},{{(void*)0,&g_61},{&g_2,&g_298},{&g_61,&g_298},{&g_2,&g_61},{(void*)0,(void*)0},{(void*)0,&g_61},{&g_2,&g_298}},{{&g_61,&g_298},{&g_2,&g_61},{(void*)0,(void*)0},{(void*)0,&g_61},{&g_2,&g_298},{&g_61,&g_298},{&g_2,&g_61}}};
        int16_t l_1587 = 0xBDDEL;
        struct S0 l_1592 = {0x057CEE73L};
        struct S0 *l_1593 = &g_892[1];
        union U4 l_1603 = {4294967293UL};
        union U6 *l_1611 = (void*)0;
        union U6 **l_1610 = &l_1611;
        union U6 ***l_1612[6][5][3] = {{{&l_1610,(void*)0,&l_1610},{(void*)0,&l_1610,(void*)0},{&l_1610,&l_1610,(void*)0},{&l_1610,(void*)0,(void*)0},{&l_1610,&l_1610,&l_1610}},{{(void*)0,&l_1610,(void*)0},{&l_1610,&l_1610,(void*)0},{&l_1610,(void*)0,(void*)0},{(void*)0,&l_1610,(void*)0},{(void*)0,&l_1610,(void*)0}},{{(void*)0,(void*)0,&l_1610},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_1610,(void*)0,(void*)0},{&l_1610,(void*)0,&l_1610}},{{(void*)0,&l_1610,(void*)0},{&l_1610,&l_1610,(void*)0},{&l_1610,(void*)0,(void*)0},{&l_1610,&l_1610,&l_1610},{(void*)0,&l_1610,(void*)0}},{{&l_1610,&l_1610,(void*)0},{&l_1610,(void*)0,(void*)0},{(void*)0,&l_1610,(void*)0},{(void*)0,&l_1610,(void*)0},{(void*)0,(void*)0,&l_1610}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_1610,(void*)0,(void*)0},{&l_1610,(void*)0,&l_1610},{(void*)0,&l_1610,(void*)0}}};
        uint16_t *l_1615 = &g_167;
        union U5 l_1628 = {1L};
        struct S1 l_1629 = {543,834,-75,1308};
        const struct S2 * const **l_1656[7];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 6; k++)
                    l_1577[i][j][k] = &g_21;
            }
        }
        for (i = 0; i < 7; i++)
            l_1656[i] = (void*)0;
    }
    return l_1679;
}



static struct S2  func_5(uint32_t  p_6, int16_t  p_7, uint16_t  p_8, int16_t  p_9)
{ 
    uint32_t l_24 = 0x070FEEA3L;
    int32_t *l_42 = &g_23;
    union U6 l_1247 = {0x4AD3B5CDL};
    union U6 *l_1366 = (void*)0;
    int32_t l_1368 = 0x67011398L;
    int32_t l_1370 = 1L;
    int32_t l_1371 = 0L;
    int32_t l_1372[7] = {0x7E3B6BDAL,0x7E3B6BDAL,0x7E3B6BDAL,0x7E3B6BDAL,0x7E3B6BDAL,0x7E3B6BDAL,0x7E3B6BDAL};
    uint64_t l_1393 = 18446744073709551613UL;
    const uint16_t l_1402 = 0UL;
    const struct S3 l_1405[5] = {{0,187,-1557,-14099,-203,-5,22344,6645},{0,187,-1557,-14099,-203,-5,22344,6645},{0,187,-1557,-14099,-203,-5,22344,6645},{0,187,-1557,-14099,-203,-5,22344,6645},{0,187,-1557,-14099,-203,-5,22344,6645}};
    struct S0 *l_1425[5][4];
    struct S0 **l_1424 = &l_1425[1][0];
    union U4 *l_1432 = (void*)0;
    struct S1 l_1445 = {-2040,446,65,-11104};
    const int64_t *l_1456 = &g_155;
    struct S2 l_1460[5] = {{5},{5},{5},{5},{5}};
    int32_t l_1482 = (-7L);
    union U4 l_1503 = {4294967295UL};
    int32_t ***l_1541 = (void*)0;
    int8_t * const l_1548 = &g_59[3][0];
    union U5 l_1553 = {-1L};
    struct S3 *l_1557[6][7][5] = {{{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]}},{{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0}},{{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],&g_630,&g_284[1],(void*)0},{&g_284[2],&g_284[1],&g_284[2],&g_284[1],&g_284[2]},{(void*)0,&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0}},{{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]}},{{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0}},{{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]},{(void*)0,&g_284[1],(void*)0,&g_284[1],(void*)0},{&g_284[1],&g_284[1],(void*)0,&g_284[1],&g_284[1]}}};
    struct S0 l_1558[4] = {{0xE6FB103DL},{0xE6FB103DL},{0xE6FB103DL},{0xE6FB103DL}};
    struct S3 * const l_1559 = &g_284[1];
    int32_t **l_1560 = (void*)0;
    int32_t **l_1561[6][5][4] = {{{&g_1339,(void*)0,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339},{&l_42,(void*)0,&l_42,&g_592},{&l_42,&g_592,&g_1339,(void*)0},{&g_1339,&g_592,&g_1339,&g_592}},{{&g_1339,(void*)0,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339},{&l_42,(void*)0,&l_42,&g_592},{&l_42,&g_592,&g_1339,(void*)0},{&g_1339,&g_592,&g_1339,&g_592}},{{&g_1339,(void*)0,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339},{&l_42,(void*)0,&l_42,&g_592},{&l_42,&g_592,&g_1339,(void*)0},{&g_1339,&g_592,&g_1339,&g_592}},{{&g_1339,(void*)0,&g_1339,&g_1339},{&g_1339,&g_592,&l_42,(void*)0},{&g_1339,&g_1339,&g_1339,(void*)0},{&g_1339,(void*)0,&l_42,&g_1339},{&g_1339,(void*)0,&g_1339,(void*)0}},{{&l_42,&g_1339,&g_1339,(void*)0},{&g_1339,&g_592,&l_42,(void*)0},{&g_1339,&g_1339,&g_1339,(void*)0},{&g_1339,(void*)0,&l_42,&g_1339},{&g_1339,(void*)0,&g_1339,(void*)0}},{{&l_42,&g_1339,&g_1339,(void*)0},{&g_1339,&g_592,&l_42,(void*)0},{&g_1339,&g_1339,&g_1339,(void*)0},{&g_1339,(void*)0,&l_42,&g_1339},{&g_1339,(void*)0,&g_1339,(void*)0}}};
    int32_t *l_1562 = &g_1289.f0;
    int64_t l_1574 = 5L;
    int32_t *l_1575 = &g_298;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            l_1425[i][j] = (void*)0;
    }
    if (g_2)
    { 
        return g_21;
    }
    else
    { 
        int32_t *l_22[4][4][7];
        uint64_t *l_43 = (void*)0;
        uint64_t *l_44 = &g_45;
        union U5 l_1246 = {0L};
        union U6 l_1363 = {0xDFE3112FL};
        struct S3 l_1415[4] = {{8,198,-1533,-25157,64,31,3362,9926},{8,198,-1533,-25157,64,31,3362,9926},{8,198,-1533,-25157,64,31,3362,9926},{8,198,-1533,-25157,64,31,3362,9926}};
        union U4 *l_1428 = (void*)0;
        struct S1 *l_1444 = (void*)0;
        struct S0 l_1463 = {0L};
        int16_t l_1499 = 0x15B7L;
        uint32_t l_1513[1];
        int32_t **l_1554 = &g_863[0];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 7; k++)
                    l_22[i][j][k] = &g_23;
            }
        }
        for (i = 0; i < 1; i++)
            l_1513[i] = 0UL;
        g_23 ^= (g_21.f0 ^= 1L);
        l_24++;
        if ((safe_lshift_func_uint8_t_u_u(func_29(func_32(func_38(l_42, g_15.f1, (--(*l_44))), l_1246, (*g_773), (p_8 = 0xD4D3L), l_1247), p_6), 2)))
        { 
            int32_t l_1358 = 0L;
            union U6 l_1361 = {0x1D403DF4L};
            int32_t l_1377 = 0x3BF30F49L;
            int16_t l_1378 = 1L;
            int32_t l_1380 = (-2L);
            int32_t l_1385 = 0xDEB95437L;
            int32_t l_1387 = 0L;
            union U4 ***l_1407 = &g_164;
            union U4 ****l_1406 = &l_1407;
            int8_t *l_1408 = &g_59[3][0];
            struct S2 **l_1412 = &g_141;
            struct S0 * const l_1419 = &g_1420;
            struct S0 * const *l_1418 = &l_1419;
            struct S1 l_1441 = {-270,2051,45,-8701};
            struct S1 *l_1446 = &l_1441;
            for (g_124 = 3; (g_124 >= 0); g_124 -= 1)
            { 
                int16_t *l_1359 = (void*)0;
                int16_t *l_1360[7][6] = {{(void*)0,&g_213,&g_213,&g_213,&g_213,&g_213},{(void*)0,(void*)0,&g_213,&g_213,(void*)0,&g_213},{(void*)0,&g_213,&g_213,&g_213,&g_213,(void*)0},{&g_213,&g_213,(void*)0,&g_213,(void*)0,&g_213},{&g_213,(void*)0,(void*)0,(void*)0,&g_213,&g_213},{&g_213,&g_213,(void*)0,&g_213,&g_213,&g_213},{&g_213,(void*)0,(void*)0,&g_213,(void*)0,&g_213}};
                int32_t l_1362[7][2] = {{0L,0x21D6933DL},{0xF589ECB1L,0x33DD9002L},{0x21D6933DL,0x33DD9002L},{0xF589ECB1L,0x21D6933DL},{0L,0L},{0L,0x21D6933DL},{0xF589ECB1L,0x33DD9002L}};
                struct S0 *l_1364 = (void*)0;
                int8_t l_1381 = 0xD9L;
                int32_t l_1383[6][6][3] = {{{0x3D285D2FL,(-4L),0x350FB28EL},{0x4968604CL,0x8678822CL,0xCE807F7DL},{8L,8L,0xF03E2DD6L},{0x86CF731EL,0x6FAF887AL,(-1L)},{0xD233E340L,0x3526BE9CL,0x5534EFA5L},{0xCE807F7DL,6L,0x22AC212EL}},{{(-4L),0xD233E340L,0x5534EFA5L},{0xAA2E3A41L,4L,(-1L)},{6L,0x350FB28EL,0xF03E2DD6L},{0x5491A164L,0xCE807F7DL,0xCE807F7DL},{0xF1036E80L,0xF03E2DD6L,0x350FB28EL},{1L,(-1L),4L}},{{0x350FB28EL,0x5534EFA5L,0xD233E340L},{0x6FAF887AL,0x22AC212EL,6L},{(-4L),0x5534EFA5L,0x3526BE9CL},{0x1E8556D9L,(-1L),0x6FAF887AL},{(-1L),0xF03E2DD6L,8L},{0x8678822CL,0xCE807F7DL,0x8678822CL}},{{0xF812502DL,0x350FB28EL,(-4L)},{0x0B979C6CL,4L,0xFE516781L},{0x251493EFL,0xD233E340L,0xA8F73184L},{4L,6L,0x1E8556D9L},{0x251493EFL,0x3526BE9CL,1L},{0x0B979C6CL,0x6FAF887AL,0xAA2E3A41L}},{{0xF812502DL,8L,(-4L)},{(-1L),(-1L),0x22AC212EL},{8L,0xF812502DL,0xA8F73184L},{0x0B979C6CL,0x1E8556D9L,0x86CF731EL},{0L,0xF03E2DD6L,0x251493EFL},{0x4968604CL,0x0B979C6CL,0x86CF731EL}},{{(-4L),0L,0xA8F73184L},{0xFE516781L,0xCE807F7DL,0x22AC212EL},{0xA251E991L,0L,0L},{0x1F973B16L,0x22AC212EL,0xCE807F7DL},{0x3526BE9CL,0xA8F73184L,0L},{0xCE807F7DL,0x86CF731EL,0x0B979C6CL}}};
                int i, j, k;
                (*g_1339) &= ((((((*l_44) = ((safe_lshift_func_int16_t_s_s((-1L), (p_9 |= ((l_1358 < (g_213 = 0x0CB6L)) , (((&l_42 != (l_1361 , ((((-2L) ^ ((*g_154) , p_7)) && 0xA4887A31676EF5C5LL) , &l_22[3][1][4]))) , l_1358) == l_1362[2][0]))))) , l_1362[1][1])) , p_9) <= 0xB3E3L) < p_8) , (*g_592));
                for (g_15.f0 = 0; (g_15.f0 <= 0); g_15.f0 += 1)
                { 
                    const struct S3 l_1365[1] = {{9,419,-353,15093,81,15,22027,9997}};
                    int i, j;
                    l_1364 = (l_1363 , &g_892[g_15.f0]);
                    if (g_59[g_15.f0][g_15.f0])
                        continue;
                    (*g_313) = ((l_1365[0] , l_1365[0].f7) && p_9);
                    if (p_7)
                        break;
                    l_22[3][3][5] = l_42;
                }
                if ((*g_1339))
                    break;
                for (g_206.f0 = 0; (g_206.f0 <= 3); g_206.f0 += 1)
                { 
                    union U6 **l_1367 = &l_1366;
                    int32_t l_1369 = 5L;
                    int32_t l_1373 = 0x7AEFD8A3L;
                    int32_t l_1374 = 1L;
                    int32_t l_1375 = 1L;
                    int32_t l_1376 = 0x5ED97648L;
                    int32_t l_1382 = 0xA1C5E0BCL;
                    int32_t l_1384[5];
                    uint32_t l_1388 = 4294967292UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1384[i] = 1L;
                    (*g_592) = ((*g_1347) |= 0x9A33DEDCL);
                    (*g_1339) |= (g_892[g_124] , (*g_313));
                    (*l_1367) = l_1366;
                    l_1388++;
                }
            }
            if ((safe_sub_func_uint8_t_u_u((*l_42), ((((*l_42) != l_1393) ^ (((&l_1366 != (void*)0) >= (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((*l_1408) = (l_1402 | ((safe_div_func_int32_t_s_s(((l_1405[1] , (void*)0) == l_1406), g_764)) <= 0x7FL))), 0)), p_7)), p_8)), p_9))) && p_8)) < p_6))))
            { 
                int32_t l_1413[3];
                int32_t *l_1414 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_1413[i] = 0xB9A6E616L;
                l_1414 = func_72(func_77(l_22[3][2][4], (safe_add_func_uint8_t_u_u(0x3EL, (~(l_1412 != (void*)0)))), g_256[0], ((*g_165) , (*g_773)), l_1413[2]), g_700, &l_1413[2], l_44);
            }
            else
            { 
                struct S0 * const *l_1416 = (void*)0;
                struct S0 * const **l_1417[3][1];
                struct S0 * const l_1422 = &g_1423;
                struct S0 * const *l_1421 = &l_1422;
                uint8_t *l_1429 = &g_358[2];
                int32_t *l_1440 = &l_1358;
                struct S1 **l_1442 = (void*)0;
                struct S1 **l_1443 = &g_773;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1417[i][j] = &l_1416;
                }
                (*g_313) &= ((l_1421 = (l_1415[2] , (l_1418 = l_1416))) != l_1424);
                (*g_1347) &= (safe_lshift_func_int16_t_s_u(((((*l_1443) = (func_77(l_22[3][3][5], (g_213 = (((((*g_154) ^= p_8) || (l_1428 == (((++(*l_1429)) || (*l_42)) , l_1432))) <= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((+((safe_sub_func_uint8_t_u_u(((((((l_22[3][3][5] == l_1440) <= 0x50ADL) < p_6) , g_21.f0) , g_1109) <= 0xF0A7L), p_8)) | 0xF9C3L)), 6)), (*l_1440))) && (*l_42))) || 0x7BE24C9CL)), (*l_42), l_1441, (*l_42)) , (void*)0)) == l_1444) || p_8), g_892[1].f0));
            }
            (*l_1446) = l_1445;
            for (l_1361.f3 = 16; (l_1361.f3 > 11); --l_1361.f3)
            { 
                uint32_t *l_1451 = &g_764;
                uint32_t *l_1452 = &g_178;
                uint32_t *l_1453[3][7][3] = {{{(void*)0,&g_15.f0,&l_1361.f2},{(void*)0,&l_1361.f2,&l_1361.f2},{&g_739.f0,&l_1363.f2,&g_257},{(void*)0,(void*)0,(void*)0},{&g_299,&l_1363.f2,(void*)0},{(void*)0,&g_15.f0,&l_1247.f2},{&l_1247.f2,&l_1363.f2,&g_15.f0}},{{&g_739.f0,(void*)0,&l_1363.f2},{&g_299,&l_1363.f2,(void*)0},{&g_15.f0,&l_1361.f2,(void*)0},{&g_15.f0,&g_15.f0,&g_739.f0},{&g_299,&l_1247.f2,&l_1363.f2},{&g_739.f0,(void*)0,(void*)0},{&l_1247.f2,&l_1361.f2,(void*)0}},{{(void*)0,&g_739.f0,(void*)0},{&g_299,&g_15.f0,&l_1363.f2},{(void*)0,&g_15.f0,&g_739.f0},{&g_739.f0,&l_1247.f2,(void*)0},{(void*)0,&l_1247.f2,(void*)0},{(void*)0,&g_15.f0,&l_1363.f2},{&l_1247.f2,&g_15.f0,&g_15.f0}}};
                int32_t l_1454 = 8L;
                uint16_t *l_1457[6];
                union U5 l_1458 = {7L};
                struct S2 l_1459 = {-4};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1457[i] = &g_275.f1;
                (*l_42) |= (((((((safe_lshift_func_uint8_t_u_s((p_9 <= (p_6 = ((*l_1452) = ((*l_1451) = (g_219 = g_284[1].f0))))), ((((*g_324) , (g_167 = ((((l_1454 ^= 0x34L) & (!(l_44 != l_1456))) , g_275) , 0xDC87L))) | p_8) | p_9))) , 0x6818L) < p_8) , l_1458) , 0xB8D2L) <= p_7) , 0x3A4B6E66L);
                if (p_7)
                { 
                    return l_1459;
                }
                else
                { 
                    return l_1460[1];
                }
            }
        }
        else
        { 
            union U6 l_1468 = {0xA632132EL};
            struct S1 l_1501 = {-3828,2574,-0,-4795};
            struct S1 **l_1505 = (void*)0;
            int32_t * const l_1506 = &l_1368;
            l_1463 = (((safe_rshift_func_uint8_t_u_s((0x6D2DC2941928BFBFLL || p_6), 4)) >= 0x05L) , l_1246.f1);
            if ((safe_div_func_int16_t_s_s(p_9, ((*l_42) = (safe_rshift_func_uint8_t_u_u(((l_1460[1] = l_1460[0]) , (l_1468 , p_8)), 3))))))
            { 
                (*g_313) |= p_7;
                for (p_9 = 0; p_9 < 7; p_9 += 1)
                {
                    l_1372[p_9] = 1L;
                }
            }
            else
            { 
                uint64_t l_1471 = 0xBFC7592C9157C5DCLL;
                int32_t *l_1487[2];
                const struct S3 l_1500 = {8,167,-2643,21384,19,3,18701,-1290};
                union U4 l_1504[7] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
                int i;
                for (i = 0; i < 2; i++)
                    l_1487[i] = (void*)0;
                for (l_1371 = (-27); (l_1371 == 27); l_1371 = safe_add_func_uint16_t_u_u(l_1371, 9))
                { 
                    uint32_t *l_1490 = &l_24;
                    int32_t l_1498 = 0L;
                    union U6 l_1502[2] = {{0x5D6B019EL},{0x5D6B019EL}};
                    int32_t **l_1507[4][3] = {{&g_313,&g_313,&g_313},{&l_22[1][1][6],&l_22[1][1][6],&l_22[1][1][6]},{&g_313,&g_313,&g_313},{&l_22[1][1][6],&l_22[1][1][6],&l_22[1][1][6]}};
                    int32_t **l_1508[3][5] = {{&g_592,&l_1487[0],&l_1487[0],&g_592,&l_1487[0]},{&g_592,&g_592,&l_42,&g_592,&g_592},{&l_1487[0],&g_592,&l_1487[0],&l_1487[0],&g_592}};
                    int32_t **l_1509 = &l_22[3][3][5];
                    int i, j;
                    --l_1471;
                    (*g_1347) = ((safe_mul_func_int8_t_s_s((1UL == ((safe_sub_func_int8_t_s_s(p_6, (((0xF80CL <= 0xE25BL) || (safe_add_func_uint8_t_u_u(g_61, (((**g_1232) , (safe_mul_func_int8_t_s_s(0xD3L, 0x20L))) < g_61)))) >= l_1468.f0))) || (*g_154))), g_124)) <= g_257);
                    (*l_42) &= (l_1468.f1 & (l_1482 == ((((65528UL < ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((((l_1503 , l_1504[2]) , l_1505) != l_1505), 0xB76BL)), p_6)) | (*g_154))) | p_6) <= 0L) == 0L)));
                    (*l_1509) = l_1506;
                }
                (*g_1339) = 0x4E9E09EDL;
            }
            for (l_1363.f3 = 28; (l_1363.f3 > 23); --l_1363.f3)
            { 
                union U6 l_1516 = {1L};
                uint32_t *l_1542 = &g_764;
                for (l_1468.f3 = 0; (l_1468.f3 <= 3); l_1468.f3 += 1)
                { 
                    int64_t l_1512 = 0xAF7EFFC38019903ELL;
                    struct S1 *l_1517 = &g_98;
                    int64_t *l_1520 = (void*)0;
                    int64_t *l_1521 = &g_338[1][1][2];
                    uint8_t *l_1524[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1524[i] = &g_358[2];
                    l_1513[0]--;
                    (*l_42) |= ((l_1516 , l_1444) == l_1517);
                    (*g_592) = (safe_mul_func_uint16_t_u_u(((*g_154) >= (((((*g_1345) != ((*l_1521) |= 1L)) | (safe_rshift_func_int8_t_s_u((((void*)0 == &g_892[l_1468.f3]) | ((g_358[1]--) , 0UL)), 1))) , (((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(0xCCL, 2L)) == 7UL) > g_256[0]), 65526UL)), p_8)) , 0xF649958BL) > 0UL) || (*l_1506)) , l_1246)) , p_9)), (*l_1506)));
                    if ((*l_42))
                        continue;
                    if (l_1512)
                        continue;
                }
                (*g_1339) &= ((safe_mod_func_uint64_t_u_u(((void*)0 == &g_686), (safe_rshift_func_int16_t_s_u((-5L), (p_7 < ((safe_mul_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((((*l_1542) &= ((void*)0 == l_1541)) == (((safe_lshift_func_int8_t_s_s((!(safe_mod_func_uint32_t_u_u(((((((l_1463 , l_44) != &l_1393) == g_15.f1) , 8UL) && g_284[1].f7) , (*l_1506)), 0x937787B1L))), (*l_1506))) | (*l_1506)) | (*g_1347))), 65530UL)) , g_284[1].f1) , (void*)0) != (void*)0), l_1516.f0)) , p_9)))))) && p_9);
            }
        }
        (*l_42) = ((*g_313) = (((void*)0 != l_1548) != (((p_9 != 0x1ABEEF0FCA7A0AF8LL) != (g_338[0][3][0] > g_284[1].f3)) , ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((*l_42), g_277[0][2])) > p_8), 5)) ^ (*l_42)))));
        (*l_1554) = func_72(l_1553, p_9, l_22[1][3][0], &l_1393);
    }
    (*g_313) &= (safe_sub_func_int8_t_s_s((-10L), ((l_1557[5][3][2] = l_1557[2][5][2]) == (l_1558[3] , l_1559))));
lbl_1576:
    l_1562 = &l_1370;
    l_1575 = ((safe_sub_func_uint16_t_u_u((((~(safe_mod_func_uint32_t_u_u(((+(*l_1562)) <= ((safe_mod_func_int32_t_s_s((((0L || (safe_add_func_uint8_t_u_u(((void*)0 == l_1456), ((((~((*l_1548) = (1L & ((((((((p_9 , l_1553) , g_630.f3) != g_23) , g_215) , 0x9919BE8BL) , p_6) == 6UL) && (*g_154))))) && 0x060FL) == g_338[0][1][1]) < g_23)))) , l_1574) < 0x7E0D01F853F7FAC9LL), (-1L))) ^ 0x6A16L)), g_630.f1))) >= p_8) , p_8), p_8)) , (void*)0);
    if (l_1247.f1)
        goto lbl_1576;
    return l_1460[0];
}



static uint8_t  func_29(union U4  p_30, uint32_t  p_31)
{ 
    uint8_t l_1353[5][4] = {{0x87L,0xE9L,0x87L,0xE9L},{0x87L,0xE9L,0x87L,0xE9L},{0x87L,0xE9L,0x87L,0xE9L},{0x87L,0xE9L,0x87L,0xE9L},{0x87L,0xE9L,0x87L,0xE9L}};
    int i, j;
    ++l_1353[1][3];
    return p_30.f0;
}



static union U4  func_32(const struct S3  p_33, union U5  p_34, struct S1  p_35, uint16_t  p_36, union U6  p_37)
{ 
    int32_t *l_1248 = &g_23;
    int32_t **l_1249 = (void*)0;
    int32_t **l_1250[1][4];
    int32_t *l_1251 = &g_100.f0;
    int64_t *l_1256 = (void*)0;
    uint32_t l_1257 = 0UL;
    struct S2 *l_1258 = &g_21;
    int32_t l_1292[7];
    int32_t *l_1309 = &g_23;
    union U5 l_1337 = {0x06069ED5L};
    int32_t *l_1338[6] = {&g_1109,&g_1109,(void*)0,&g_1109,&g_1109,(void*)0};
    int32_t *l_1342 = &l_1337.f0;
    struct S3 l_1343 = {3,60,2062,-9789,232,-40,997,7741};
    struct S1 l_1346 = {-554,964,47,5965};
    int32_t *l_1348[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_1349 = &g_100.f0;
    int16_t *l_1350 = &g_213;
    union U4 l_1352 = {0x469ACB15L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1250[i][j] = (void*)0;
    }
    for (i = 0; i < 7; i++)
        l_1292[i] = (-4L);
    l_1251 = l_1248;
    if ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(0xE065L, (*l_1251))), (l_1257 = ((*g_154) = (-1L))))))
    { 
        int32_t l_1269 = 1L;
        struct S3 l_1270[6] = {{9,-482,1138,3532,39,12,764,-5299},{6,57,-1800,-9195,232,35,18875,-1021},{6,57,-1800,-9195,232,35,18875,-1021},{9,-482,1138,3532,39,12,764,-5299},{6,57,-1800,-9195,232,35,18875,-1021},{6,57,-1800,-9195,232,35,18875,-1021}};
        int16_t *l_1271 = &g_213;
        int8_t *l_1272 = &g_59[2][0];
        uint8_t l_1294 = 250UL;
        int i;
lbl_1302:
        (**g_1231) = l_1258;
        if ((safe_mod_func_uint8_t_u_u(p_36, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_630.f1, g_178)), (((*l_1272) = ((((*l_1271) = (safe_lshift_func_int16_t_s_u((((((p_33.f4 || l_1269) , l_1270[0]) , ((*g_154) = (l_1270[0].f7 = ((-1L) && p_36)))) <= 0x9184E354DE4B0472LL) > 0x412EL), 1))) , (*l_1251)) > l_1270[0].f1)) , l_1270[0].f1))), (*l_1251))))))
        { 
            int16_t **l_1273[4][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1271,&l_1271,&l_1271,&l_1271,&l_1271}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1271,&l_1271,&l_1271,&l_1271,&l_1271}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1271,&l_1271,&l_1271,&l_1271,&l_1271}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1271,&l_1271,&l_1271,&l_1271,&l_1271}}};
            union U4 l_1274[6] = {{0x9CCCB531L},{0x6293EDC1L},{0x9CCCB531L},{0x9CCCB531L},{0x6293EDC1L},{0x9CCCB531L}};
            int i, j, k;
            if (((void*)0 != l_1273[3][0][0]))
            { 
                return l_1274[2];
            }
            else
            { 
                for (g_155 = 0; g_155 < 5; g_155 += 1)
                {
                    for (g_538 = 0; g_538 < 5; g_538 += 1)
                    {
                        for (l_1269 = 0; l_1269 < 6; l_1269 += 1)
                        {
                            g_1229[g_155][g_538][l_1269] = &g_1230;
                        }
                    }
                }
            }
            if (p_33.f4)
                goto lbl_1351;
        }
        else
        { 
            uint16_t *l_1279 = &g_275.f1;
            uint64_t *l_1281 = &g_45;
            int32_t l_1282 = 0x09B74C6AL;
            uint8_t *l_1283 = &g_358[2];
            (*g_592) &= (safe_lshift_func_uint8_t_u_u(((((*l_1283) &= (safe_mul_func_uint16_t_u_u(((*l_1279) = p_33.f3), (((p_36 , ((*l_1271) ^= p_33.f2)) | ((((((!(((*l_1258) , 1UL) < ((*l_1281) = g_21.f0))) , (p_34.f0 = l_1282)) < l_1270[0].f6) < g_206.f2) > (*l_1251)) >= 4294967295UL)) >= l_1270[0].f4)))) >= 255UL) ^ (*g_154)), 7));
            (*g_592) = l_1270[0].f6;
            (*l_1251) |= l_1282;
            for (g_275.f3 = 0; (g_275.f3 < 60); g_275.f3++)
            { 
                int16_t l_1290[2][5][7] = {{{0x23C0L,0xD41DL,(-1L),(-1L),0xD41DL,0x23C0L,(-1L)},{9L,0L,9L,9L,9L,0L,9L},{0x23C0L,(-1L),(-1L),0xD41DL,0xD41DL,(-1L),(-1L)},{0xB91FL,0L,0x0C63L,0L,0xB91FL,0L,0x0C63L},{0xD41DL,0xD41DL,(-1L),(-1L),0x23C0L,0x23C0L,(-1L)}},{{9L,9L,9L,0L,9L,9L,9L},{0xD41DL,(-1L),(-1L),0xD41DL,0x23C0L,(-1L),(-1L)},{0xB91FL,9L,0x0C63L,9L,0xB91FL,9L,0x0C63L},{0x23C0L,0xD41DL,(-1L),(-1L),0xD41DL,0x23C0L,(-1L)},{9L,0L,9L,9L,9L,0L,9L}}};
                int32_t l_1293 = 0x6D46B05FL;
                int i, j, k;
                for (p_37.f2 = 0; (p_37.f2 >= 19); p_37.f2 = safe_add_func_int64_t_s_s(p_37.f2, 1))
                { 
                    union U5 *l_1288 = &g_1289;
                    int32_t l_1291 = 0xA326FF30L;
                    struct S0 * const l_1297 = &g_892[1];
                    struct S0 *l_1299[7];
                    struct S0 **l_1298 = &l_1299[1];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1299[i] = &g_892[1];
                    l_1288 = &p_34;
                    l_1294--;
                    (*l_1298) = l_1297;
                }
                for (g_255 = 22; (g_255 != (-5)); g_255--)
                { 
                    const int64_t l_1303 = 1L;
                    if (g_275.f3)
                        goto lbl_1302;
                    if (l_1303)
                        continue;
                }
                (**g_782) = &p_34;
            }
            (*g_592) &= (~(safe_add_func_uint32_t_u_u(0xAEA587F6L, (g_284[1].f4 && p_33.f2))));
        }
    }
    else
    { 
        int32_t *l_1308 = &g_100.f0;
        l_1309 = (l_1308 = g_1307);
        for (g_23 = 0; (g_23 <= 15); ++g_23)
        { 
            int32_t l_1332 = (-1L);
            if (p_34.f2)
                break;
            if ((safe_lshift_func_uint8_t_u_u(0x84L, 3)))
            { 
                int16_t *l_1326 = &g_213;
                int8_t *l_1330 = &g_177;
                int32_t l_1331 = 0xC7BECFFCL;
                p_34.f0 |= (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u((+(safe_sub_func_uint16_t_u_u(1UL, p_33.f6))), 6)) <= (p_33.f0 && p_33.f4)), (safe_unary_minus_func_int8_t_s(g_59[1][0])))), (((*l_1330) = (safe_sub_func_int16_t_s_s(((*l_1326) = 0x46CAL), ((!(((safe_sub_func_int16_t_s_s((p_33 , p_35.f0), 0x9052L)) == 1L) >= g_284[1].f1)) , 0xDCB2L)))) || l_1331)));
                if (p_33.f2)
                    continue;
            }
            else
            { 
                int32_t *l_1333 = &g_298;
                p_35.f2 = l_1332;
                l_1333 = (void*)0;
            }
        }
    }
lbl_1351:
    p_35.f0 &= (p_33.f6 , ((*g_1339) ^= (safe_sub_func_int64_t_s_s((+((l_1337 , ((l_1343 , l_1350) == l_1350)) < 0x2025D772L)), p_33.f7))));
    (*g_1347) |= p_33.f2;
    return l_1352;
}



static const struct S3  func_38(int32_t * p_39, int32_t  p_40, uint64_t  p_41)
{ 
    int32_t *l_48 = &g_23;
    int32_t *l_49 = &g_23;
    int32_t *l_50 = &g_23;
    int32_t *l_51 = (void*)0;
    int32_t *l_52 = (void*)0;
    int32_t *l_53 = &g_23;
    int32_t *l_54 = &g_23;
    int32_t *l_55 = &g_23;
    int32_t *l_56 = &g_23;
    int32_t *l_57 = &g_23;
    int32_t *l_58[3][7] = {{&g_23,(void*)0,(void*)0,&g_23,&g_23,(void*)0,(void*)0},{&g_23,&g_2,&g_23,&g_2,&g_23,&g_2,&g_23},{&g_23,&g_23,(void*)0,(void*)0,&g_23,&g_23,(void*)0}};
    int32_t l_60 = (-1L);
    int32_t *l_83[4] = {&g_23,&g_23,&g_23,&g_23};
    union U5 l_96 = {0xCFF85525L};
    uint64_t *l_97 = &g_45;
    int32_t l_1011 = 0x19DFC8B7L;
    uint16_t l_1021 = 65535UL;
    union U4 l_1080 = {0x36C17FECL};
    union U5 ***l_1086 = &g_783;
    int16_t *l_1106 = &g_213;
    struct S0 ** const *l_1143 = &g_978;
    const struct S3 l_1163 = {2,-34,-1532,32615,-179,43,7595,-7558};
    const int8_t *l_1178 = &l_1080.f1;
    const int8_t **l_1177[7][4] = {{&l_1178,&l_1178,&l_1178,&l_1178},{&l_1178,&l_1178,&l_1178,&l_1178},{&l_1178,&l_1178,&l_1178,&l_1178},{&l_1178,&l_1178,&l_1178,&l_1178},{&l_1178,&l_1178,&l_1178,&l_1178},{&l_1178,&l_1178,&l_1178,&l_1178},{&l_1178,&l_1178,&l_1178,&l_1178}};
    struct S0 l_1204 = {5L};
    struct S2 **l_1226 = &g_141;
    struct S2 ***l_1225 = &l_1226;
    struct S2 ****l_1224[5];
    struct S2 *****l_1223 = &l_1224[3];
    int i, j;
    for (i = 0; i < 5; i++)
        l_1224[i] = &l_1225;
lbl_1074:
    --g_62;
    if ((((safe_add_func_int16_t_s_s(p_40, func_67(func_72(func_77(l_83[2], (((0x45F054F5258DDFA3LL & (safe_mul_func_uint8_t_u_u(0x8DL, (g_21 , (safe_mod_func_int16_t_s_s(((&p_41 == ((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((((l_96 , (*l_54)) < p_40) == g_15.f1) > 0xDC0630FCL), (*l_54))), 2)) > (*l_53)) <= 0x0B38L) <= 0x29B6EDA74E998353LL) , g_2), g_2)), g_2)) , l_97)) && 5L), p_41)))))) != (*l_48)) >= p_41), (*l_54), g_98, g_61), p_41, &g_2, l_97), g_59[0][0], &g_45, l_97))) || l_1011) | g_98.f0))
    { 
        int16_t l_1016[1][1];
        int32_t l_1018 = 0x0E001623L;
        int32_t l_1019 = 0x35F18DE6L;
        int32_t *l_1026[4] = {&g_275.f0,&g_275.f0,&g_275.f0,&g_275.f0};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1016[i][j] = (-1L);
        }
        for (g_124 = 0; (g_124 < 12); g_124 = safe_add_func_int64_t_s_s(g_124, 8))
        { 
            int32_t l_1014 = 0xFF5BAC6BL;
            int32_t l_1015 = 9L;
            int32_t l_1017 = 0x8A8F0435L;
            int32_t l_1020 = 8L;
            union U4 ***l_1024 = &g_164;
            int32_t **l_1025[6] = {&l_50,&l_50,&l_50,&l_50,&l_50,&l_50};
            int i;
            l_1021++;
            (*l_1024) = (void*)0;
            if ((*g_592))
                continue;
            l_1026[0] = &l_1018;
            for (g_213 = 0; (g_213 <= (-8)); g_213 = safe_sub_func_uint8_t_u_u(g_213, 2))
            { 
                const struct S3 l_1029 = {10,328,2773,14720,111,29,3357,-4696};
                return l_1029;
            }
        }
    }
    else
    { 
        struct S2 l_1032[3][7] = {{{3},{-4},{6},{-4},{3},{3},{-4}},{{-9},{-9},{-9},{-4},{-4},{-9},{-9}},{{-4},{-9},{6},{6},{-9},{-4},{-9}}};
        int16_t l_1062 = 0x42C0L;
        int32_t l_1066 = 0L;
        union U4 *****l_1075 = (void*)0;
        union U5 l_1087[7][4] = {{{3L},{3L},{-4L},{3L}},{{3L},{0xA9A8F4C7L},{0xA9A8F4C7L},{3L}},{{0xA9A8F4C7L},{0xA9A8F4C7L},{-4L},{-4L}},{{0xA9A8F4C7L},{0xA9A8F4C7L},{3L},{0xA9A8F4C7L}},{{0xA9A8F4C7L},{-4L},{-4L},{0xA9A8F4C7L}},{{-4L},{0xA9A8F4C7L},{-4L},{-4L}},{{0xA9A8F4C7L},{0xA9A8F4C7L},{3L},{0xA9A8F4C7L}}};
        const struct S3 l_1091[4][7] = {{{3,169,213,14603,116,-11,32585,-3082},{1,-387,1314,-2624,246,-40,19849,4410},{14,-324,1699,-12813,-231,44,27173,-2090},{3,169,213,14603,116,-11,32585,-3082},{14,-324,1699,-12813,-231,44,27173,-2090},{1,-387,1314,-2624,246,-40,19849,4410},{3,169,213,14603,116,-11,32585,-3082}},{{15,488,1636,8469,244,19,18916,-10629},{3,169,213,14603,116,-11,32585,-3082},{1,-387,1314,-2624,246,-40,19849,4410},{14,-324,1699,-12813,-231,44,27173,-2090},{3,169,213,14603,116,-11,32585,-3082},{14,-324,1699,-12813,-231,44,27173,-2090},{1,-387,1314,-2624,246,-40,19849,4410}},{{3,169,213,14603,116,-11,32585,-3082},{3,169,213,14603,116,-11,32585,-3082},{11,-205,-1360,31723,58,-25,6567,2024},{1,-341,1086,-32088,222,34,32302,-9852},{11,98,604,14493,-123,-43,7419,3518},{11,-205,-1360,31723,58,-25,6567,2024},{11,98,604,14493,-123,-43,7419,3518}},{{1,-341,1086,-32088,222,34,32302,-9852},{1,-387,1314,-2624,246,-40,19849,4410},{1,-387,1314,-2624,246,-40,19849,4410},{1,-341,1086,-32088,222,34,32302,-9852},{14,-324,1699,-12813,-231,44,27173,-2090},{15,488,1636,8469,244,19,18916,-10629},{1,-341,1086,-32088,222,34,32302,-9852}}};
        union U5 ***l_1156 = &g_783;
        struct S2 ****l_1209 = (void*)0;
        struct S1 **l_1214 = &g_773;
        uint8_t *l_1220 = &g_358[2];
        int32_t **l_1245 = &l_83[3];
        int i, j;
        for (g_178 = (-30); (g_178 == 3); g_178++)
        { 
            int32_t l_1041[7][7][4] = {{{(-1L),1L,(-4L),(-4L)},{0x8ADE24A0L,0L,0xBC0A09D2L,1L},{0L,0x4D20CB86L,7L,(-3L)},{(-1L),1L,0xB01883DFL,(-1L)},{0x18ECCBD9L,(-3L),0x1AE04ADFL,0L},{4L,(-8L),0x4D20CB86L,4L},{0x9632BCBFL,0L,(-1L),7L}},{{0x30CE3376L,0xF4EC7CCBL,1L,1L},{0xC85F833DL,3L,0xDC88B2CDL,0x963B769BL},{9L,(-1L),0xE59B4AECL,7L},{0L,0x8ADE24A0L,0xBC0A09D2L,0x1B3B19C0L},{0x07FE83DCL,(-8L),(-4L),0L},{0xB19D19AEL,4L,0xB19D19AEL,(-1L)},{(-1L),(-4L),0x27B36456L,0x07FE83DCL}},{{0xE06B8BCFL,0x4D20CB86L,1L,(-4L)},{0x9632BCBFL,0xA5007BB7L,1L,(-4L)},{0xE06B8BCFL,0x963B769BL,0x27B36456L,0xC366C6ACL},{(-1L),3L,0xB19D19AEL,(-1L)},{0xB19D19AEL,(-1L),(-4L),0x8E0F08C0L},{0x07FE83DCL,1L,0xBC0A09D2L,(-1L)},{0L,(-1L),0xE59B4AECL,0L}},{{9L,0xE840C7CBL,0xDC88B2CDL,(-1L)},{0xC85F833DL,0x30CE3376L,1L,0x8ADE24A0L},{0x30CE3376L,(-1L),(-1L),0xE840C7CBL},{0x9632BCBFL,0x07FE83DCL,0x4D20CB86L,0x8E0F08C0L},{4L,0L,0x1AE04ADFL,0xC85F833DL},{0x18ECCBD9L,3L,0xB01883DFL,0xF4EC7CCBL},{(-1L),0x18ECCBD9L,7L,(-4L)}},{{0L,0L,0xBC0A09D2L,0xE06B8BCFL},{0x8ADE24A0L,0x4D20CB86L,(-4L),1L},{(-1L),0xE06B8BCFL,0x9632BCBFL,(-1L)},{0x963B769BL,0x1B3B19C0L,0x1AE04ADFL,0xA5007BB7L},{(-3L),(-8L),(-8L),(-3L)},{0x9632BCBFL,0L,6L,7L},{(-1L),0xC366C6ACL,1L,0x18ECCBD9L}},{{0L,3L,(-1L),0x18ECCBD9L},{0L,(-1L),(-1L),0x6EB1AD7EL},{0x9632BCBFL,(-1L),0L,9L},{0xDC88B2CDL,0x75978BAEL,1L,0xB01883DFL},{0x25D9F0F2L,(-1L),0L,(-1L)},{(-1L),1L,0L,0xB90DF9D6L},{0L,1L,1L,1L}},{{8L,0x8D5F3BB9L,0x1AE04ADFL,0L},{3L,7L,0L,0xE59B4AECL},{0xE59B4AECL,1L,(-1L),(-4L)},{0x25D9F0F2L,7L,0x6EB1AD7EL,1L},{0xB90DF9D6L,(-1L),0L,0x4D20CB86L},{0xB01883DFL,6L,0xA6B44038L,9L},{0L,(-8L),(-1L),(-1L)}}};
            int32_t l_1055 = 0xE827AD96L;
            uint32_t l_1069 = 0x3FC38014L;
            union U4 l_1079 = {4294967293UL};
            uint16_t l_1110 = 0x1774L;
            union U5 *l_1117 = &g_104;
            int32_t *l_1127[3][7][6] = {{{&g_2,&g_206.f0,&l_1066,&g_275.f0,&l_1055,&l_1041[2][0][0]},{&l_1055,(void*)0,&g_104.f0,&g_206.f0,&g_275.f0,&l_1041[2][0][0]},{&l_1041[2][0][0],&g_206.f0,&l_1066,&g_23,(void*)0,(void*)0},{&g_275.f0,&l_1055,&l_1055,&g_275.f0,&l_1041[2][0][0],(void*)0},{&g_23,&l_1066,&g_206.f0,&l_1041[2][0][0],&g_23,(void*)0},{&g_206.f0,&g_104.f0,(void*)0,&l_1055,&g_23,&g_23},{&g_275.f0,&l_1066,&g_206.f0,&g_2,&l_1041[2][0][0],&g_2}},{{&l_1066,&l_1055,&l_1066,&g_1109,(void*)0,&g_23},{&g_23,&g_206.f0,(void*)0,(void*)0,&g_275.f0,&l_1066},{&g_206.f0,(void*)0,&g_275.f0,(void*)0,&l_1055,&g_1109},{&g_23,&g_206.f0,&l_1041[2][0][0],&g_1109,&g_1109,&l_1041[2][0][0]},{&l_1066,&l_1066,&g_104.f0,&g_2,&g_1109,&g_206.f0},{&g_275.f0,(void*)0,&g_1109,&l_1055,(void*)0,&g_104.f0},{&g_206.f0,&g_275.f0,&g_1109,&l_1041[2][0][0],&l_1066,&g_206.f0}},{{&g_23,&l_1041[2][0][0],&g_104.f0,&g_275.f0,&g_104.f0,&l_1041[2][0][0]},{&g_275.f0,&g_104.f0,&l_1041[2][0][0],&g_23,&g_104.f0,&g_1109},{&l_1041[2][0][0],&g_1109,&g_275.f0,&g_206.f0,&l_1055,&l_1066},{&l_1055,&g_1109,(void*)0,&g_275.f0,&g_104.f0,&g_23},{&g_2,&g_104.f0,&l_1066,&l_1066,&g_104.f0,&g_2},{&g_1109,&l_1041[2][0][0],&g_206.f0,&g_23,&l_1066,&g_23},{(void*)0,&g_275.f0,(void*)0,&g_206.f0,(void*)0,(void*)0}}};
            uint32_t l_1139 = 0x1AA980EFL;
            union U6 l_1155[3] = {{-1L},{-1L},{-1L}};
            uint16_t *l_1160 = &g_275.f1;
            int8_t *l_1180 = &g_59[0][0];
            int8_t **l_1179 = &l_1180;
            int32_t **l_1194 = &l_53;
            int32_t ***l_1193[6][2][5] = {{{&l_1194,&l_1194,&l_1194,&l_1194,(void*)0},{&l_1194,&l_1194,&l_1194,&l_1194,&l_1194}},{{&l_1194,&l_1194,&l_1194,&l_1194,&l_1194},{&l_1194,&l_1194,(void*)0,&l_1194,(void*)0}},{{&l_1194,&l_1194,&l_1194,&l_1194,(void*)0},{&l_1194,&l_1194,&l_1194,&l_1194,(void*)0}},{{&l_1194,&l_1194,(void*)0,&l_1194,&l_1194},{(void*)0,&l_1194,&l_1194,&l_1194,&l_1194}},{{&l_1194,&l_1194,&l_1194,&l_1194,&l_1194},{&l_1194,&l_1194,&l_1194,&l_1194,&l_1194}},{{&l_1194,&l_1194,&l_1194,&l_1194,&l_1194},{(void*)0,(void*)0,&l_1194,&l_1194,&l_1194}}};
            int i, j, k;
            for (l_1011 = 1; (l_1011 >= 0); l_1011 -= 1)
            { 
                uint8_t l_1042[5];
                union U6 l_1061 = {0x9140CF84L};
                int32_t l_1068 = 0x8004AD16L;
                struct S3 l_1090 = {11,-54,1227,-15287,-147,13,23881,-11460};
                int64_t *l_1095 = &g_1053;
                int i;
                for (i = 0; i < 5; i++)
                    l_1042[i] = 0x93L;
                for (g_182 = 0; (g_182 <= 1); g_182 += 1)
                { 
                    uint8_t *l_1035 = &g_358[2];
                    uint32_t *l_1040[5][5] = {{&g_739.f0,(void*)0,&g_739.f0,&g_764,&g_764},{(void*)0,&g_299,(void*)0,(void*)0,(void*)0},{&g_739.f0,(void*)0,&g_739.f0,&g_764,&g_764},{(void*)0,&g_299,(void*)0,(void*)0,(void*)0},{&g_739.f0,(void*)0,&g_739.f0,&g_764,&g_764}};
                    uint16_t *l_1046 = &g_275.f1;
                    uint16_t **l_1045 = &l_1046;
                    int32_t l_1054 = 0x592142E0L;
                    uint32_t l_1056 = 0x74534EB8L;
                    union U5 *l_1060 = &g_104;
                    union U5 **l_1059 = &l_1060;
                    int i, j;
                    l_1056 = (l_1032[0][5] , ((((((safe_lshift_func_uint8_t_u_u((++(*l_1035)), 5)) >= (l_1041[2][0][0] = (0UL & ((*l_97) = (((++l_1042[0]) , &g_167) == ((*l_1045) = &g_167)))))) <= (safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((*g_141) , ((safe_lshift_func_uint16_t_u_u(g_1053, 15)) > (l_1054 | g_698))), l_1055)) > 0x91E0109BF2A99242LL), 65529UL))) <= (*g_154)) , p_41) > (*p_39)));
                    (*g_592) &= (safe_sub_func_uint64_t_u_u(((*l_97) = (g_103[(g_182 + 4)] == ((*l_1059) = g_103[g_182]))), 0xB9303EF4128533E1LL));
                }
                if ((l_1061 , (l_1062 > 65535UL)))
                { 
                    int32_t l_1063 = 0L;
                    int32_t l_1064 = 0xD7C40201L;
                    int32_t l_1065 = 0xC9C95D11L;
                    int32_t l_1067[5][1];
                    int32_t **l_1072 = (void*)0;
                    int32_t **l_1073 = (void*)0;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1067[i][j] = (-6L);
                    }
                    --l_1069;
                    g_863[6] = (void*)0;
                    if (l_1021)
                        goto lbl_1074;
                    l_1075 = (void*)0;
                }
                else
                { 
                    uint16_t l_1076 = 0xEE7EL;
                    ++l_1076;
                    (*p_39) = ((l_1079 , l_1080) , (safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((l_1086 == &g_728[5][1][1]), ((l_1087[5][2] , (safe_mul_func_uint8_t_u_u((*l_50), ((l_1090 , l_1090.f6) <= 0xDF3FL)))) , 0x54L))) != 0L), l_1076)))));
                    return (*g_324);
                }
                for (l_1061.f0 = 3; (l_1061.f0 >= 0); l_1061.f0 -= 1)
                { 
                    return l_1091[0][5];
                }
                if ((9L >= (&g_15 != &l_1079)))
                { 
                    int32_t **l_1092 = &l_57;
                    (*l_1092) = &p_40;
                }
                else
                { 
                    int16_t *l_1107 = &l_1062;
                    uint64_t l_1108 = 18446744073709551611UL;
                    l_1090.f4 &= (safe_mod_func_int8_t_s_s((((void*)0 != l_1095) , ((safe_mul_func_uint16_t_u_u(p_40, 0xDF08L)) != ((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((l_1090.f3 = (safe_rshift_func_int16_t_s_u(((*l_1107) |= ((*l_1106) = ((((*p_39) = (((void*)0 != l_1106) > g_275.f1)) > p_40) == l_1090.f7))), l_1108))) < (*g_154)), g_59[2][0])), 0x94L)), 0)) | g_100.f1.f0))), 0x48L));
                    if ((*g_313))
                        continue;
                    l_1110--;
                }
                for (l_1021 = 0; (l_1021 <= 1); l_1021 += 1)
                { 
                    uint8_t l_1116 = 0xDCL;
                    union U5 *l_1118 = (void*)0;
                    l_1116 = (g_698 < (&g_617 == (g_1115 = &g_213)));
                    l_1118 = l_1117;
                    return (**g_323);
                }
            }
            if ((*g_592))
            { 
                union U5 l_1125 = {0L};
                int8_t *l_1142 = &g_255;
                int32_t l_1144 = 0xEC499FF3L;
                for (l_1055 = 0; (l_1055 < (-27)); --l_1055)
                { 
                    union U6 *l_1122 = &g_275;
                    union U6 **l_1121 = &l_1122;
                    int32_t **l_1126[2][7][4] = {{{&l_58[1][2],&l_55,&l_58[1][2],&g_313},{&l_58[1][2],&g_313,&g_313,&l_58[1][2]},{(void*)0,&g_313,&l_56,&g_313},{&g_313,&l_55,&l_56,&l_56},{(void*)0,(void*)0,&g_313,&l_56},{&l_58[1][2],&l_55,&l_58[1][2],&g_313},{&l_58[1][2],&g_313,&g_313,&l_58[1][2]}},{{(void*)0,&g_313,&l_56,&g_313},{&g_313,&l_55,&l_56,&l_56},{(void*)0,(void*)0,&g_313,&l_56},{&l_58[1][2],&l_55,&l_58[1][2],&g_313},{&l_58[1][2],&g_313,&g_313,&l_58[1][2]},{(void*)0,&g_313,&l_56,&g_313},{&g_313,&l_55,&l_56,&l_56}}};
                    int i, j, k;
                    (*l_1121) = &g_275;
                    (*g_313) = (safe_add_func_uint16_t_u_u(g_275.f1, p_40));
                    l_1127[1][3][1] = ((*g_773) , (l_1125 , &l_1041[4][3][1]));
                }
                (*g_592) = (*p_39);
                l_1144 |= ((((safe_sub_func_int32_t_s_s(((*g_592) |= ((~(safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(((p_41 || (((((l_1091[0][5].f5 < (-1L)) > ((((*l_1142) = (9L != (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_1139--), ((*l_48) <= p_41))), (p_40 <= 4UL))))) != p_41) < 1L)) ^ g_178) == (*l_56)) , (-1L))) > g_104.f2), g_284[1].f5)) | g_178) || l_1125.f0), 0xC87CD19F5D20444FLL))) | (*g_313))), (*g_313))) , g_213) , &g_978) == l_1143);
            }
            else
            { 
                return (**g_323);
            }
            (*l_55) |= ((l_1091[0][5].f7 , &l_1032[0][6]) != (void*)0);
            if ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((*l_97) = (safe_mul_func_uint16_t_u_u(p_41, ((((safe_lshift_func_uint8_t_u_s(((l_1155[0] , &g_783) == l_1156), (((safe_rshift_func_uint16_t_u_u(((*l_1160) = (g_98.f3 || ((247UL & (+((p_40 & (*p_39)) >= 0x0FF6EAAFL))) , (-6L)))), 11)) || 0xF58D7CC361834EBELL) , g_338[0][3][1]))) >= p_41) <= 0x5087L) && g_630.f7)))) , 0x60B6CC8BL) ^ g_100.f1.f0) == 0UL), p_40)), 0x358CL)))
            { 
                for (g_1053 = 0; (g_1053 != 0); g_1053 = safe_add_func_uint8_t_u_u(g_1053, 9))
                { 
                    return l_1163;
                }
            }
            else
            { 
                int32_t *l_1167 = &g_256[0];
                int32_t **l_1166 = &l_1167;
                int32_t l_1176 = 0L;
                union U5 ** const *l_1186 = &g_783;
                union U5 ** const ** const l_1185[7] = {&l_1186,&l_1186,(void*)0,&l_1186,&l_1186,(void*)0,&l_1186};
                struct S2 *l_1191 = (void*)0;
                struct S0 l_1202 = {0x87420EBCL};
                struct S0 *l_1203[7][7] = {{(void*)0,&l_1202,&g_510,&g_510,&l_1202,&l_1202,&g_892[1]},{&g_510,&g_892[2],&g_892[1],&l_1202,&l_1202,(void*)0,&l_1202},{(void*)0,&g_510,&g_892[1],&l_1202,&g_892[1],&g_510,(void*)0},{(void*)0,&g_510,&g_892[1],&l_1202,&g_510,(void*)0,&g_510},{&g_510,&g_892[2],&g_510,&g_892[1],&l_1202,&g_892[1],&l_1202},{&g_892[1],&l_1202,&g_892[1],&g_510,&g_510,&g_510,&g_892[1]},{&g_510,&g_510,&g_892[1],&g_510,&l_1202,&g_510,&l_1202}};
                int i, j;
                if ((((safe_add_func_uint32_t_u_u(4294967286UL, (((*l_1166) = &g_215) != (void*)0))) != (safe_mul_func_uint16_t_u_u(((*p_39) & l_1091[0][5].f2), (!((-7L) == ((((safe_mul_func_uint8_t_u_u((!((((safe_lshift_func_int16_t_s_u(((*p_39) | (*p_39)), l_1176)) ^ p_41) , l_1177[3][1]) != l_1179)), g_630.f4)) != p_41) || g_100.f1.f0) , l_1091[0][5].f5)))))) > p_40))
                { 
                    (*l_56) ^= ((g_275 , (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((g_206.f1.f0 >= (((void*)0 != l_1185[5]) <= (0x2E69L && (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((&l_1032[2][2] != l_1191), 9)), 0x65EBL))))), 0x2D62321981362046LL)), p_41))) < 18446744073709551615UL);
                }
                else
                { 
                    l_1193[5][1][1] = g_1192[2];
                }
                (*l_55) = ((safe_sub_func_int32_t_s_s(0x656E3900L, (l_1091[0][5].f6 >= (l_1143 == (void*)0)))) == ((safe_add_func_int32_t_s_s(((~((18446744073709551609UL || p_40) & (0x4C911263L == (*g_592)))) , 0x851A0FD1L), (*p_39))) != g_59[3][0]));
                l_1204 = l_1202;
            }
        }
        for (g_275.f0 = 3; (g_275.f0 >= 0); g_275.f0 -= 1)
        { 
            struct S2 **l_1208 = &g_141;
            struct S2 ***l_1207 = &l_1208;
            struct S2 *** const *l_1206 = &l_1207;
            struct S2 *** const **l_1205[1][2];
            uint8_t * const l_1219 = (void*)0;
            struct S3 l_1221 = {12,343,-744,-7073,-116,40,28227,-6570};
            struct S1 l_1236 = {-5057,2427,-38,-15304};
            int8_t l_1238 = 0x25L;
            int32_t *l_1239 = &g_1109;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1205[i][j] = &l_1206;
            }
            l_1209 = (void*)0;
            for (g_155 = 3; (g_155 >= 0); g_155 -= 1)
            { 
                struct S2 l_1222[6] = {{-8},{-8},{-8},{-8},{-8},{-8}};
                struct S2 *****l_1227 = &l_1209;
                struct S2 *****l_1228 = &l_1224[1];
                int32_t * const l_1237[6][5] = {{&l_1066,(void*)0,&g_298,&g_2,(void*)0},{&g_104.f0,&g_298,&g_298,&g_104.f0,&g_2},{&g_275.f0,&g_104.f0,(void*)0,(void*)0,(void*)0},{&l_1066,&g_104.f0,&l_1066,&g_2,&g_104.f0},{(void*)0,&g_298,&g_2,(void*)0,&g_2},{(void*)0,(void*)0,(void*)0,&g_104.f0,&g_275.f0}};
                int i, j;
                (*p_39) |= (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((l_1214 == (((*g_141) , (l_1087[5][2].f1 , l_1080)) , (void*)0)) <= (safe_lshift_func_int8_t_s_s((0x17L > ((safe_add_func_uint64_t_u_u((((g_256[0] < 0x90CF5771L) , l_1219) == l_1220), 0xF4270AA30288E3A1LL)) > g_15.f1)), p_41))), p_41)), 0x511CL));
                l_1236.f3 ^= (l_1221 , ((((l_1222[3] , ((l_1227 = l_1223) == (g_1229[3][4][3] = l_1228))) > (safe_lshift_func_int16_t_s_s((l_1032[0][5].f0 = ((!(func_77((p_39 = &p_40), (*l_57), p_40, (*g_773), p_41) , 4294967295UL)) > g_206.f0)), 9))) >= 1UL) != l_1238));
                for (g_764 = 0; (g_764 <= 2); g_764 += 1)
                { 
                    int32_t **l_1240[3][5][1] = {{{(void*)0},{&l_50},{(void*)0},{&l_50},{(void*)0}},{{&l_50},{(void*)0},{&l_50},{(void*)0},{&l_50}},{{(void*)0},{&l_50},{(void*)0},{&l_50},{(void*)0}}};
                    union U6 *l_1243 = &g_275;
                    union U6 **l_1242 = &l_1243;
                    union U6 ***l_1241[6] = {&l_1242,&l_1242,&l_1242,&l_1242,&l_1242,&l_1242};
                    union U6 ****l_1244 = &l_1241[3];
                    int i, j, k;
                    p_39 = l_1239;
                    (*l_1244) = l_1241[3];
                    (****l_1228) = (****l_1228);
                }
            }
        }
        (*l_1245) = &l_1066;
    }
    return l_1163;
}



static int16_t  func_67(int32_t * p_68, uint32_t  p_69, uint64_t * p_70, uint64_t * const  p_71)
{ 
    uint16_t *l_959[5][1][2] = {{{&g_167,&g_167}},{{&g_167,&g_167}},{{&g_167,&g_167}},{{&g_167,&g_167}},{{&g_167,&g_167}}};
    union U4 **l_972 = &g_165;
    int32_t l_973 = 0L;
    int32_t l_1001 = 0xC33C1014L;
    int32_t l_1002 = (-5L);
    int32_t l_1004 = 0xFD6A6394L;
    int32_t l_1005 = 1L;
    int32_t l_1007[6] = {0x2E7AABA6L,0x2E7AABA6L,0L,0x2E7AABA6L,0x2E7AABA6L,0L};
    uint16_t l_1008[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1008[i] = 0x2AFFL;
    (*p_68) = (*p_68);
    for (g_61 = 0; (g_61 > (-17)); g_61--)
    { 
        uint16_t *l_958 = &g_275.f1;
        uint16_t **l_957 = &l_958;
        int32_t l_960 = 0x21823655L;
        if ((*g_313))
            break;
        (*g_313) = (((((void*)0 != &g_538) || ((+((safe_sub_func_uint64_t_u_u(((((((*l_957) = &g_167) != l_959[0][0][1]) < l_960) == g_338[0][0][1]) < ((safe_mod_func_int32_t_s_s(((*g_141) , l_960), (*g_592))) > g_630.f6)), 0x4C40048F0A8B1862LL)) & 0x8ADDF392A2F5BEC6LL)) <= g_255)) <= p_69) <= 4UL);
    }
    for (g_182 = 0; (g_182 != 44); g_182 = safe_add_func_uint32_t_u_u(g_182, 1))
    { 
        int8_t l_969 = 1L;
        int16_t *l_974 = &g_213;
        int32_t l_1003 = 0xDBF8F0ECL;
        int32_t l_1006 = 1L;
        (*g_141) = (*g_141);
        (*g_592) &= (safe_rshift_func_uint8_t_u_u(g_739.f1, ((*p_71) > ((safe_lshift_func_uint16_t_u_u(l_969, (safe_add_func_uint64_t_u_u(((l_972 = l_972) == (void*)0), ((*g_154) = (l_969 != ((*l_974) &= l_973))))))) || (*g_154)))));
        if ((*g_592))
            break;
        for (g_686 = 0; (g_686 <= 3); g_686 += 1)
        { 
            uint32_t l_991 = 3UL;
            const int16_t l_992 = 0x9880L;
            int32_t l_1000[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1000[i] = 0xECA56DD8L;
            for (g_739.f0 = 0; (g_739.f0 <= 3); g_739.f0 += 1)
            { 
                uint64_t l_985 = 18446744073709551606UL;
                union U4 l_988[3][4][5] = {{{{0x81DFC9BEL},{0xE40E88EFL},{2UL},{0x2844D8FBL},{0x3FC3C84CL}},{{4294967295UL},{0x81DFC9BEL},{4294967295UL},{0xBD10EFF4L},{4294967295UL}},{{0xBD10EFF4L},{0xBD10EFF4L},{0x3FC3C84CL},{0x2844D8FBL},{2UL}},{{4294967286UL},{0x2B9E3544L},{0x3FC3C84CL},{4294967295UL},{4294967295UL}}},{{{0xD5FA63AFL},{0x3FC3C84CL},{4294967295UL},{0x3FC3C84CL},{0xD5FA63AFL}},{{0x2844D8FBL},{0x2B9E3544L},{2UL},{0xD5FA63AFL},{0xBD10EFF4L}},{{0x2844D8FBL},{0xBD10EFF4L},{4294967295UL},{0xE40E88EFL},{0xE40E88EFL}},{{0xD5FA63AFL},{0x81DFC9BEL},{0xD5FA63AFL},{0x2B9E3544L},{0xBD10EFF4L}}},{{{4294967286UL},{0xE40E88EFL},{0xBD10EFF4L},{0x2B9E3544L},{0xD5FA63AFL}},{{0xBD10EFF4L},{4294967295UL},{0xE40E88EFL},{0xE40E88EFL},{4294967295UL}},{{4294967295UL},{4294967295UL},{0xBD10EFF4L},{0xD5FA63AFL},{2UL}},{{0x81DFC9BEL},{4294967295UL},{0xD5FA63AFL},{0x3FC3C84CL},{4294967295UL}}}};
                int32_t l_994 = 0xF7E96BEBL;
                int32_t *l_995 = (void*)0;
                int32_t *l_996 = (void*)0;
                int32_t *l_997 = &g_298;
                int32_t *l_998 = &g_23;
                int32_t *l_999[4][1][1] = {{{&g_23}},{{&g_275.f0}},{{&g_23}},{{&g_275.f0}}};
                int i, j, k;
                if ((~(~((void*)0 != g_977[0][1]))))
                { 
                    int i, j;
                    return g_277[g_686][g_686];
                }
                else
                { 
                    int32_t l_993 = 0xDEDA314FL;
                    l_994 |= (l_993 = ((*g_313) = ((*p_68) = ((*g_592) &= ((((((+((+((((safe_lshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_985 < (safe_add_func_uint16_t_u_u(((l_988[1][2][3] , 0xB0L) > 1UL), ((safe_mod_func_int16_t_s_s(l_973, g_104.f2)) & (l_973 > p_69))))), (*p_71))), l_991)) || l_991) && l_991) , 0L)) == l_992)) ^ 0UL) > (*g_154)) > l_969) < (*p_68)) == (-6L))))));
                }
                --l_1008[3];
                return g_59[0][0];
            }
        }
        (*g_141) = (*g_141);
    }
    return l_1001;
}



static int32_t * func_72(union U5  p_73, uint32_t  p_74, int32_t * const  p_75, uint64_t * p_76)
{ 
    int32_t l_166 = (-4L);
    int32_t l_169 = 0xA6C031CAL;
    int32_t l_170 = 0x15860905L;
    int32_t l_172 = 1L;
    int32_t l_173 = 0x209A790DL;
    int32_t l_176[5] = {0x97B07068L,0x97B07068L,0x97B07068L,0x97B07068L,0x97B07068L};
    int64_t l_181[2][6] = {{0xC40381DB17C0C13FLL,0xC40381DB17C0C13FLL,1L,0xC40381DB17C0C13FLL,0xC40381DB17C0C13FLL,1L},{0xC40381DB17C0C13FLL,0xC40381DB17C0C13FLL,1L,0xC40381DB17C0C13FLL,0xC40381DB17C0C13FLL,1L}};
    const int8_t l_192 = 0x5AL;
    const union U4 l_193 = {4294967289UL};
    struct S2 l_270 = {8};
    struct S3 *l_283 = &g_284[1];
    int32_t l_342 = (-2L);
    int16_t l_343 = (-4L);
    int32_t l_379 = 0xA22EE283L;
    int8_t l_437 = 0xCCL;
    struct S2 **l_464 = &g_141;
    struct S2 ***l_463 = &l_464;
    int32_t l_493 = 3L;
    const uint32_t *l_518 = (void*)0;
    int32_t **l_559[4][4][6] = {{{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313}},{{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313}},{{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313}},{{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313,&g_313}}};
    int32_t ***l_558[7][5] = {{&l_559[3][1][2],(void*)0,&l_559[3][1][2],&l_559[3][1][2],(void*)0},{(void*)0,(void*)0,&l_559[2][1][5],&l_559[2][1][5],(void*)0},{&l_559[3][1][2],(void*)0,&l_559[3][1][2],&l_559[3][1][2],(void*)0},{(void*)0,(void*)0,&l_559[2][1][5],&l_559[2][1][5],(void*)0},{&l_559[3][1][2],(void*)0,&l_559[3][1][2],&l_559[3][1][2],(void*)0},{(void*)0,(void*)0,&l_559[2][1][5],&l_559[2][1][5],(void*)0},{&l_559[3][1][2],(void*)0,&l_559[3][1][2],&l_559[3][1][2],(void*)0}};
    const struct S0 *l_562 = (void*)0;
    union U4 * const *l_579[4] = {&g_165,&g_165,&g_165,&g_165};
    union U4 * const * const *l_578 = &l_579[0];
    union U4 * const * const **l_577 = &l_578;
    struct S1 l_627 = {-2195,2515,-55,-9283};
    union U5 **l_664[6];
    union U5 ** const *l_663 = &l_664[3];
    int32_t l_684 = 0x9ECC1B9DL;
    uint32_t l_732 = 0xFA5158FFL;
    int32_t l_843 = 0xCFEB437EL;
    uint8_t l_909[1][4][4] = {{{247UL,247UL,0x65L,247UL},{247UL,0x31L,0x31L,247UL},{0x31L,247UL,0x31L,0x31L},{247UL,247UL,0x65L,247UL}}};
    int8_t *l_950 = &l_437;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_664[i] = &g_103[5];
    for (g_23 = 17; (g_23 == 14); g_23 = safe_sub_func_uint8_t_u_u(g_23, 7))
    { 
        struct S2 *l_140[1][7] = {{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21,&g_21}};
        struct S2 **l_139[6][2][4];
        union U4 *l_142 = &g_15;
        union U4 **l_143 = &l_142;
        int32_t l_160 = 0xDCD15929L;
        int32_t l_171 = 2L;
        int32_t l_174 = 0x7F314E3BL;
        int32_t l_175[5][1][7] = {{{0xB0433134L,0xB0433134L,0xE14D0D45L,0x96881A2BL,0xD4E83F10L,0xD4E83F10L,0x96881A2BL}},{{0xDCA7D150L,(-3L),0xDCA7D150L,1L,0xDCA7D150L,(-3L),0xDCA7D150L}},{{0xB0433134L,0x96881A2BL,0x96881A2BL,0xB0433134L,0xD4E83F10L,0xE14D0D45L,0xE14D0D45L}},{{5L,(-3L),5L,(-3L),5L,(-3L),5L}},{{0xD4E83F10L,0xB0433134L,0x96881A2BL,0x96881A2BL,0xB0433134L,0xD4E83F10L,0xE14D0D45L}}};
        int32_t l_196 = 7L;
        int8_t l_244[7] = {0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L};
        struct S3 l_274 = {9,-504,157,13003,-133,22,10762,2596};
        uint32_t *l_330 = &g_219;
        const uint64_t *l_333 = &g_45;
        uint32_t l_344 = 0UL;
        uint32_t l_381[6];
        uint8_t l_478[4] = {0x14L,0x14L,0x14L,0x14L};
        const union U5 *l_535 = &g_100;
        const union U5 **l_534 = &l_535;
        const union U5 ***l_533 = &l_534;
        const union U5 ***l_537 = (void*)0;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_139[i][j][k] = &l_140[0][5];
            }
        }
        for (i = 0; i < 6; i++)
            l_381[i] = 0x172036FAL;
        g_141 = &g_21;
        (*l_143) = l_142;
        for (p_73.f0 = 1; (p_73.f0 >= 0); p_73.f0 -= 1)
        { 
            int64_t *l_148 = (void*)0;
            int64_t *l_149 = &g_124;
            union U4 **l_161 = &l_142;
            union U4 ***l_162 = (void*)0;
            union U4 ***l_163 = &l_143;
            int32_t *l_168[4][7][3] = {{{&g_104.f0,&l_160,&l_160},{&g_100.f0,&g_2,(void*)0},{&g_100.f0,&g_100.f0,&l_160},{&g_104.f0,(void*)0,(void*)0},{&l_160,&g_104.f0,&l_160},{&g_104.f0,(void*)0,(void*)0},{&g_104.f0,&l_160,&l_160}},{{&g_100.f0,&g_2,(void*)0},{&g_100.f0,&g_100.f0,&g_100.f0},{&g_100.f0,&g_23,&g_104.f0},{(void*)0,(void*)0,&g_100.f0},{&g_61,(void*)0,&g_104.f0},{(void*)0,(void*)0,&g_100.f0},{&g_61,&g_23,&g_104.f0}},{{&g_23,&g_23,&g_100.f0},{&g_100.f0,&g_23,&g_104.f0},{(void*)0,(void*)0,&g_100.f0},{&g_61,(void*)0,&g_104.f0},{(void*)0,(void*)0,&g_100.f0},{&g_61,&g_23,&g_104.f0},{&g_23,&g_23,&g_100.f0}},{{&g_100.f0,&g_23,&g_104.f0},{(void*)0,(void*)0,&g_100.f0},{&g_61,(void*)0,&g_104.f0},{(void*)0,(void*)0,&g_100.f0},{&g_61,&g_23,&g_104.f0},{&g_23,&g_23,&g_100.f0},{&g_100.f0,&g_23,&g_104.f0}}};
            int i, j, k;
            g_61 ^= (((g_167 = (safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((*l_149) &= g_23), (safe_mod_func_int32_t_s_s((*p_75), (safe_lshift_func_int16_t_s_u(((g_154 == (void*)0) ^ p_73.f0), ((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((l_160 , ((((g_164 = ((*l_163) = (l_161 = l_161))) == &g_165) >= l_160) < p_74)), g_104.f0)), 5)) == 0xC3L) & p_73.f2) ^ g_98.f0))))))) ^ p_73.f1.f0), l_166))) > l_166) || l_166);
            g_178--;
            for (p_74 = 0; (p_74 <= 1); p_74 += 1)
            { 
                return &g_23;
            }
            g_182++;
            for (l_169 = 0; (l_169 <= 1); l_169 += 1)
            { 
                int32_t l_185 = 0x8A9FEB54L;
                l_185 &= ((*g_165) , 3L);
            }
        }
    }
    for (g_510.f0 = (-12); (g_510.f0 > 6); g_510.f0 = safe_add_func_int8_t_s_s(g_510.f0, 9))
    { 
        uint8_t *l_553 = (void*)0;
        int32_t l_554 = (-1L);
        int16_t *l_555[4];
        int32_t **l_557 = (void*)0;
        int32_t *** const l_556 = &l_557;
        struct S3 *l_629 = &g_630;
        struct S2 *l_631 = &l_270;
        uint16_t l_668 = 1UL;
        const int32_t *l_699[5] = {&g_700,&g_700,&g_700,&g_700,&g_700};
        int32_t l_701[2];
        const int64_t *l_719[2];
        int32_t *l_725 = &g_215;
        int32_t *l_726[3];
        union U5 ***l_730 = &l_664[3];
        int8_t *l_731 = &g_177;
        uint8_t *l_733 = &g_358[2];
        union U5 ****l_781[2][1];
        union U4 ***l_809[5] = {&g_164,&g_164,&g_164,&g_164,&g_164};
        int32_t *l_816 = &l_172;
        union U6 l_833[3] = {{-5L},{-5L},{-5L}};
        int64_t l_885[2][1];
        struct S1 l_893[2][3] = {{{-1996,1348,-18,-13156},{-3664,2093,6,-4870},{-3664,2093,6,-4870}},{{-1996,1348,-18,-13156},{-3664,2093,6,-4870},{-3664,2093,6,-4870}}};
        const struct S0 **l_896 = &l_562;
        int8_t l_915 = 1L;
        int8_t l_947[5][5][7] = {{{0x96L,0x5EL,0L,(-7L),(-1L),0L,(-10L)},{0x32L,(-10L),0xA0L,4L,8L,0xD0L,(-1L)},{(-1L),0xFCL,(-10L),0L,9L,0x69L,4L},{0xD0L,2L,0L,0x96L,9L,1L,1L},{1L,8L,0x4DL,0x4DL,8L,1L,0x5EL}},{{0L,1L,0x82L,(-3L),(-1L),0L,0xFCL},{1L,0L,8L,(-1L),0xD3L,0xD8L,0L},{0x00L,1L,0x5EL,0L,(-1L),0xFCL,(-10L)},{4L,8L,0xD0L,(-1L),0x4DL,0xD3L,1L},{0x69L,2L,0xD8L,0xA0L,1L,0xD3L,0x22L}},{{0x4DL,0xFCL,1L,0xE4L,1L,0xFCL,0x4DL},{3L,(-10L),0x9DL,0xD3L,(-7L),0xD8L,0x00L},{0x90L,0x5EL,1L,1L,0L,0L,0x96L},{1L,0L,0x9DL,0x90L,0L,1L,0xD3L},{0x22L,0L,1L,0x00L,(-3L),1L,0x9DL}},{{0x42L,0xD5L,0xD8L,0x82L,0xE4L,0x69L,0x9DL},{0xFCL,0xD3L,3L,0xD5L,0xD5L,3L,1L},{0x4DL,0x96L,0x32L,0x9DL,(-1L),0L,1L},{0x00L,0L,0xFFL,1L,3L,1L,(-10L)},{0x96L,(-1L),0L,0x9DL,0x22L,0L,1L}},{{0xD3L,(-10L),1L,0xD5L,0x90L,0L,(-10L)},{0x9DL,0x5EL,0x4DL,0L,0L,0x00L,(-1L)},{0x9DL,0x00L,(-1L),(-10L),0L,(-10L),(-1L)},{0xD3L,0xD3L,0xE4L,0xFCL,0x96L,0x9DL,0x00L},{0x96L,0L,2L,0xD0L,0x82L,(-1L),0x22L}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_555[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_701[i] = 1L;
        for (i = 0; i < 2; i++)
            l_719[i] = &g_124;
        for (i = 0; i < 3; i++)
            l_726[i] = &g_256[0];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_781[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_885[i][j] = (-3L);
        }
    }
    return &g_61;
}



static union U5  func_77(int32_t * p_78, int16_t  p_79, const int8_t  p_80, struct S1  p_81, uint32_t  p_82)
{ 
    int32_t *l_99[4][5][1] = {{{&g_61},{&g_61},{&g_23},{&g_61},{&g_61}},{{&g_61},{&g_23},{&g_61},{&g_61},{&g_2}},{{&g_61},{&g_61},{&g_23},{&g_61},{&g_61}},{{&g_61},{&g_23},{&g_61},{&g_61},{&g_2}}};
    const int32_t l_125 = 5L;
    union U5 l_136[1][7] = {{{0xFAB6C5F3L},{0x3F79C988L},{0x3F79C988L},{0xFAB6C5F3L},{0x3F79C988L},{0x3F79C988L},{0xFAB6C5F3L}}};
    int i, j, k;
    if (((g_23 = 0x7BBAC67CL) || 0x7C86B8A7L))
    { 
        return g_100;
    }
    else
    { 
        int32_t *l_101 = &g_100.f0;
        int32_t **l_102 = &l_99[3][0][0];
        (*l_102) = l_101;
        g_103[5] = (void*)0;
        for (g_23 = 28; (g_23 > (-22)); g_23 = safe_sub_func_int16_t_s_s(g_23, 6))
        { 
            int8_t l_126 = 0xE4L;
            uint8_t l_132 = 253UL;
            uint8_t l_135 = 0x9CL;
            (*l_101) = (((p_80 , (-3L)) != ((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(g_100.f1.f0, (g_104.f2 || (p_79 > 4294967293UL)))), (((((safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_mod_func_int64_t_s_s((g_124 |= (!(((safe_rshift_func_uint16_t_u_u(0xC608L, g_59[3][0])) < 1L) && g_62))), 0x2A02F9331570527DLL)) == 1UL) & g_59[1][0]), 6)) != l_125), l_126)) || 0xC01D27E8BA164AA8LL) | 247UL) ^ 1L) && l_126))), g_45)), 3)) <= (*l_101))) || l_126);
            (*l_101) &= (safe_mul_func_uint16_t_u_u((g_2 & (safe_sub_func_int64_t_s_s(p_79, ((0x733AL != (~l_132)) == (safe_rshift_func_uint8_t_u_s(0x31L, ((0x9D0C5B63L && l_135) & g_23))))))), g_62));
        }
    }
    return l_136[0][4];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_59[i][j], "g_59[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1.f0, "g_100.f1.f0", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1.f0, "g_104.f1.f0", print_hash_value);
    transparent_crc(g_104.f2, "g_104.f2", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1.f0, "g_206.f1.f0", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_256[i], "g_256[i]", print_hash_value);

    }
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_275.f2, "g_275.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_277[i][j], "g_277[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_284[i].f0, "g_284[i].f0", print_hash_value);
        transparent_crc(g_284[i].f1, "g_284[i].f1", print_hash_value);
        transparent_crc(g_284[i].f2, "g_284[i].f2", print_hash_value);
        transparent_crc(g_284[i].f3, "g_284[i].f3", print_hash_value);
        transparent_crc(g_284[i].f4, "g_284[i].f4", print_hash_value);
        transparent_crc(g_284[i].f5, "g_284[i].f5", print_hash_value);
        transparent_crc(g_284[i].f6, "g_284[i].f6", print_hash_value);
        transparent_crc(g_284[i].f7, "g_284[i].f7", print_hash_value);

    }
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_338[i][j][k], "g_338[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_358[i], "g_358[i]", print_hash_value);

    }
    transparent_crc(g_510.f0, "g_510.f0", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_630.f0, "g_630.f0", print_hash_value);
    transparent_crc(g_630.f1, "g_630.f1", print_hash_value);
    transparent_crc(g_630.f2, "g_630.f2", print_hash_value);
    transparent_crc(g_630.f3, "g_630.f3", print_hash_value);
    transparent_crc(g_630.f4, "g_630.f4", print_hash_value);
    transparent_crc(g_630.f5, "g_630.f5", print_hash_value);
    transparent_crc(g_630.f6, "g_630.f6", print_hash_value);
    transparent_crc(g_630.f7, "g_630.f7", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_739.f0, "g_739.f0", print_hash_value);
    transparent_crc(g_739.f1, "g_739.f1", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_892[i].f0, "g_892[i].f0", print_hash_value);

    }
    transparent_crc(g_1053, "g_1053", print_hash_value);
    transparent_crc(g_1109, "g_1109", print_hash_value);
    transparent_crc(g_1289.f0, "g_1289.f0", print_hash_value);
    transparent_crc(g_1289.f1.f0, "g_1289.f1.f0", print_hash_value);
    transparent_crc(g_1289.f2, "g_1289.f2", print_hash_value);
    transparent_crc(g_1379, "g_1379", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1386[i], "g_1386[i]", print_hash_value);

    }
    transparent_crc(g_1420.f0, "g_1420.f0", print_hash_value);
    transparent_crc(g_1423.f0, "g_1423.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
