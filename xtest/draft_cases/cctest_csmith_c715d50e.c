// SPDX-License-Identifier: MIT
// cctest_csmith_c715d50e.c --- cctest case csmith_c715d50e (csmith seed 3340096782)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x74bfa662 */

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

// Options:   -s 3340096782 -o /tmp/csmith_gen_vuz2vkvg/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 21;
   const signed f1 : 22;
   signed : 0;
   signed f2 : 12;
   const unsigned f3 : 11;
   unsigned f4 : 22;
   unsigned f5 : 28;
   uint32_t  f6;
};

union U1 {
   int16_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
   signed f4 : 10;
};


static int32_t g_2 = 0x85B7F37CL;
static union U1 g_19 = {0x1FB8L};
static uint32_t g_33[2][6][1] = {{{4294967289UL},{4294967295UL},{0xB5B0D69BL},{0xB5B0D69BL},{4294967295UL},{4294967289UL}},{{4294967295UL},{0xB5B0D69BL},{0xB5B0D69BL},{4294967295UL},{4294967289UL},{4294967295UL}}};
static uint16_t g_49 = 65535UL;
static uint32_t g_52 = 0x08F497C3L;
static uint16_t g_74 = 65535UL;
static union U1 g_89 = {0xECBAL};
static uint16_t g_101 = 3UL;
static int32_t *g_127 = (void*)0;
static uint32_t *g_144[2] = {&g_52,&g_52};
static uint32_t **g_143 = &g_144[1];
static uint32_t ***g_142 = &g_143;
static uint64_t g_152 = 8UL;
static int16_t g_221 = 0xF2EFL;
static uint64_t *g_229 = &g_152;
static uint64_t *g_231[6] = {(void*)0,&g_152,&g_152,(void*)0,&g_152,&g_152};
static int64_t g_233 = (-2L);
static int64_t g_308[6][1][1] = {{{0x48613141716AC240LL}},{{0x48613141716AC240LL}},{{0x48613141716AC240LL}},{{0x48613141716AC240LL}},{{0x48613141716AC240LL}},{{0x48613141716AC240LL}}};
static uint16_t g_311 = 65535UL;
static const union U1 *g_319 = (void*)0;
static const union U1 **g_318 = &g_319;
static struct S0 g_339[4] = {{1073,1030,20,19,1542,8901,4294967288UL},{1073,1030,20,19,1542,8901,4294967288UL},{1073,1030,20,19,1542,8901,4294967288UL},{1073,1030,20,19,1542,8901,4294967288UL}};
static struct S0 g_341 = {100,-752,10,23,1688,1139,0x7A895C0AL};
static struct S0 *g_340[3] = {&g_341,&g_341,&g_341};
static uint16_t g_359 = 0UL;
static uint8_t g_387 = 1UL;
static int8_t g_388 = (-5L);
static uint64_t g_417[2] = {0xA869F11C13C78FB7LL,0xA869F11C13C78FB7LL};
static union U1 *g_423[1][6] = {{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19}};
static union U1 **g_422 = &g_423[0][1];
static uint64_t g_509[4] = {0x827801B87AFCBFBDLL,0x827801B87AFCBFBDLL,0x827801B87AFCBFBDLL,0x827801B87AFCBFBDLL};
static const int8_t g_537 = (-1L);
static uint32_t g_586 = 4294967289UL;
static int64_t g_594 = (-1L);
static uint32_t g_595 = 7UL;
static const union U1 ***g_605 = &g_318;
static const union U1 ****g_604 = &g_605;
static uint32_t *g_608 = (void*)0;
static uint32_t **g_607[1] = {&g_608};
static int32_t g_629 = (-9L);
static const int16_t *g_631 = &g_19.f0;
static const int16_t **g_630 = &g_631;
static int8_t g_646[3] = {0x24L,0x24L,0x24L};
static int64_t g_764 = 9L;
static uint32_t g_765 = 1UL;
static uint64_t g_813[5][5][6] = {{{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL},{18446744073709551610UL,0x3837A93C691EB1F5LL,0x1EE4C678799B2923LL,0x3837A93C691EB1F5LL,18446744073709551610UL,0x26B1329E0CCEFC85LL},{0x4BD667145240BB24LL,9UL,0x623BAE886F88119ALL,0x3837A93C691EB1F5LL,0x4BD667145240BB24LL,4UL},{18446744073709551610UL,9UL,0x1EE4C678799B2923LL,9UL,18446744073709551610UL,4UL},{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL}},{{18446744073709551610UL,0x3837A93C691EB1F5LL,0x1EE4C678799B2923LL,0x3837A93C691EB1F5LL,18446744073709551610UL,0x26B1329E0CCEFC85LL},{0x4BD667145240BB24LL,9UL,0x623BAE886F88119ALL,0x3837A93C691EB1F5LL,0x4BD667145240BB24LL,4UL},{18446744073709551610UL,9UL,0x1EE4C678799B2923LL,9UL,18446744073709551610UL,4UL},{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL},{18446744073709551610UL,0x3837A93C691EB1F5LL,0x1EE4C678799B2923LL,0x3837A93C691EB1F5LL,18446744073709551610UL,0x26B1329E0CCEFC85LL}},{{0x4BD667145240BB24LL,9UL,0x623BAE886F88119ALL,0x3837A93C691EB1F5LL,0x4BD667145240BB24LL,4UL},{18446744073709551610UL,9UL,0x1EE4C678799B2923LL,9UL,18446744073709551610UL,4UL},{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL},{18446744073709551610UL,0x3837A93C691EB1F5LL,0x1EE4C678799B2923LL,0x3837A93C691EB1F5LL,18446744073709551610UL,0x26B1329E0CCEFC85LL},{0x4BD667145240BB24LL,9UL,0x623BAE886F88119ALL,0x3837A93C691EB1F5LL,0x4BD667145240BB24LL,4UL}},{{18446744073709551610UL,9UL,0x1EE4C678799B2923LL,9UL,18446744073709551610UL,4UL},{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL},{18446744073709551610UL,0x3837A93C691EB1F5LL,0x1EE4C678799B2923LL,0x3837A93C691EB1F5LL,18446744073709551610UL,0x26B1329E0CCEFC85LL},{0x4BD667145240BB24LL,9UL,0x623BAE886F88119ALL,0x3837A93C691EB1F5LL,0x4BD667145240BB24LL,4UL},{18446744073709551610UL,9UL,0x1EE4C678799B2923LL,9UL,18446744073709551610UL,4UL}},{{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL},{18446744073709551610UL,0x3837A93C691EB1F5LL,0x1EE4C678799B2923LL,0x3837A93C691EB1F5LL,18446744073709551610UL,0x26B1329E0CCEFC85LL},{0x4BD667145240BB24LL,9UL,0x623BAE886F88119ALL,0x3837A93C691EB1F5LL,0x4BD667145240BB24LL,4UL},{18446744073709551610UL,9UL,0x1EE4C678799B2923LL,9UL,18446744073709551610UL,4UL},{0x4BD667145240BB24LL,0x3837A93C691EB1F5LL,0x623BAE886F88119ALL,9UL,0x4BD667145240BB24LL,0x26B1329E0CCEFC85LL}}};
static union U1 ***g_846[3] = {&g_422,&g_422,&g_422};
static union U1 ****g_845 = &g_846[0];
static int8_t **g_875 = (void*)0;
static const int32_t g_879 = 4L;
static int32_t g_902 = 2L;
static int32_t *g_901[4][7] = {{&g_902,&g_902,&g_902,&g_902,&g_902,&g_902,&g_902},{(void*)0,&g_902,&g_902,(void*)0,&g_902,&g_902,(void*)0},{&g_902,&g_902,&g_902,&g_902,&g_902,&g_902,&g_902},{(void*)0,(void*)0,&g_902,(void*)0,(void*)0,&g_902,(void*)0}};
static int32_t **g_900 = &g_901[1][2];
static uint32_t g_906 = 4294967295UL;
static struct S0 **g_986 = &g_340[0];
static struct S0 ***g_985 = &g_986;
static uint32_t g_1059 = 0xA2EBE139L;
static uint8_t g_1154[1] = {249UL};
static int32_t g_1246 = (-9L);
static uint32_t g_1247[3][6][6] = {{{0x5123F6C5L,4294967293UL,0x5123F6C5L,0x64128A59L,0x47CF1B08L,4294967289UL},{0x1691DC29L,0x64128A59L,4294967290UL,1UL,8UL,0UL},{0x8C72C85BL,0x5506D3C2L,0x33C62C80L,1UL,4294967293UL,4294967289UL},{0x1691DC29L,4294967289UL,8UL,4294967289UL,0x33C62C80L,4294967295UL},{4294967289UL,4294967291UL,1UL,0x7D9977B0L,0x47CF1B08L,4UL},{0xF96129DEL,0xCB0D5EFCL,0x8C72C85BL,0x5E955156L,0x3D3D230EL,0x3D3D230EL}},{{0x8B67AED2L,0x7984E88DL,0x7984E88DL,0x8B67AED2L,0x5E955156L,1UL},{0xCB0D5EFCL,1UL,0x562C4E02L,0x33C62C80L,0x56746F1FL,1UL},{4294967293UL,0x8B67AED2L,4294967295UL,0x1691DC29L,0x56746F1FL,0xD89277CAL},{0x3D3D230EL,1UL,0x47CF1B08L,0x5506D3C2L,0x5E955156L,0x5123F6C5L},{2UL,0x7984E88DL,0xF96129DEL,4294967295UL,0x3D3D230EL,0x33C62C80L},{0xD89277CAL,0xCB0D5EFCL,0x7D9977B0L,0x3D3D230EL,0x47CF1B08L,0x7984E88DL}},{{0x33C62C80L,4294967291UL,0x5123F6C5L,4294967291UL,0x33C62C80L,0x8B67AED2L},{0x7DEF6814L,4294967289UL,4294967295UL,1UL,4294967293UL,4294967290UL},{1UL,0x5506D3C2L,4UL,4294967289UL,8UL,4294967290UL},{4294967291UL,0x64128A59L,4294967295UL,4UL,0xCB0D5EFCL,0x8B67AED2L},{8UL,0x56746F1FL,0x5123F6C5L,4294967291UL,4294967289UL,0x7984E88DL},{8UL,0xEE5F8F22L,0x7D9977B0L,4294967290UL,0UL,0x33C62C80L}}};
static uint64_t **g_1299 = (void*)0;
static int16_t g_1318 = 0x9894L;
static int16_t g_1337 = (-1L);
static uint32_t g_1370 = 0x2D3378E2L;
static int16_t g_1396[5][1] = {{1L},{1L},{1L},{1L},{1L}};
static uint8_t g_1397 = 1UL;
static uint16_t *g_1404 = &g_74;
static int16_t *g_1434 = &g_1318;
static int16_t **g_1502 = (void*)0;
static int16_t ***g_1501[1] = {&g_1502};
static uint32_t g_1513 = 0x17DDB572L;
static int16_t g_1651 = (-1L);
static int16_t g_1655[2][7] = {{0xEB8FL,0xEB8FL,0xEB8FL,0xEB8FL,0xEB8FL,0xEB8FL,0xEB8FL},{6L,6L,6L,6L,6L,6L,6L}};
static uint32_t g_1656 = 0x7106449AL;
static union U1 g_1700 = {0xA269L};
static const int64_t *g_1750 = (void*)0;
static const int64_t **g_1749 = &g_1750;
static uint32_t ***g_1755 = &g_607[0];
static uint32_t ****g_1754[4] = {&g_1755,&g_1755,&g_1755,&g_1755};
static uint32_t *****g_1753 = &g_1754[2];
static uint32_t ** const *g_1853 = &g_607[0];
static uint32_t ** const **g_1852 = &g_1853;
static uint32_t ** const ***g_1851 = &g_1852;
static int32_t g_1878[4][4][6] = {{{(-1L),0xF807260DL,0xCBAB6986L,0x44D9FEBCL,0x3AF85DC0L,(-7L)},{0x44D9FEBCL,0x3AF85DC0L,(-7L),(-7L),0x3AF85DC0L,0x44D9FEBCL},{(-8L),0xF807260DL,0x64B5F871L,(-1L),1L,0x44D9FEBCL},{0x64B5F871L,0xEA114E67L,(-7L),0xCBAB6986L,0L,(-7L)}},{{0x64B5F871L,1L,0xCBAB6986L,(-1L),0x7731F4D2L,(-1L)},{(-8L),1L,(-8L),(-7L),0L,0xCBAB6986L},{0x44D9FEBCL,0xEA114E67L,(-8L),0x44D9FEBCL,1L,(-1L)},{(-1L),0xF807260DL,0xCBAB6986L,0x44D9FEBCL,0x3AF85DC0L,(-7L)}},{{0x44D9FEBCL,0x3AF85DC0L,(-7L),(-7L),0x3AF85DC0L,0x44D9FEBCL},{(-8L),0xF807260DL,0x64B5F871L,(-1L),1L,0x44D9FEBCL},{0x64B5F871L,0xEA114E67L,(-7L),0xCBAB6986L,0x64B5F871L,0x408EC55CL},{0xFB9642DFL,1L,0L,0L,0x44D9FEBCL,0L}},{{0x579F6F35L,1L,0x579F6F35L,0x408EC55CL,0x64B5F871L,0L},{(-4L),(-1L),0x579F6F35L,(-4L),1L,0L},{0L,(-8L),0L,(-4L),(-7L),0x408EC55CL},{(-4L),(-7L),0x408EC55CL,0x408EC55CL,(-7L),(-4L)}}};



static uint8_t  func_1(void);
static uint64_t  func_13(struct S0  p_14, uint32_t  p_15, union U1  p_16);
static union U1 ** func_21(uint32_t  p_22, union U1 * p_23, union U1  p_24);
static uint16_t  func_26(uint32_t  p_27, uint8_t  p_28);
static int32_t * func_38(union U1 ** p_39);
static union U1  func_40(union U1  p_41, union U1 ** p_42, union U1  p_43);
static union U1  func_44(int32_t * p_45, uint8_t  p_46);
static uint64_t  func_57(int32_t  p_58, const uint32_t  p_59, uint8_t  p_60);




static uint8_t  func_1(void)
{ 
    struct S0 l_17 = {289,-442,21,16,1256,5870,0x0E5E5349L};
    uint8_t l_18 = 7UL;
    const int32_t *l_1859 = &g_1246;
    uint16_t l_1864 = 0UL;
    int32_t *l_1874 = &g_902;
    for (g_2 = (-10); (g_2 == 2); g_2 = safe_add_func_int8_t_s_s(g_2, 6))
    { 
        union U1 *l_20 = &g_19;
        int16_t **l_1842 = &g_1434;
        int32_t l_1843 = 0x3EEC4175L;
        uint64_t *l_1844 = &g_509[2];
        uint8_t *l_1845[4];
        int32_t l_1857 = 0x3E95837EL;
        int32_t *l_1873 = &g_902;
        int16_t l_1879 = 0xB392L;
        uint16_t l_1880 = 65533UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1845[i] = &g_1154[0];
    }
    return g_629;
}



static uint64_t  func_13(struct S0  p_14, uint32_t  p_15, union U1  p_16)
{ 
    const int32_t l_25 = (-4L);
    union U1 *l_31[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_32 = &g_33[1][2][0];
    int32_t *l_1478 = &g_89.f2;
    uint64_t *l_1482[3];
    struct S0 ** const *l_1507 = (void*)0;
    int16_t l_1510[5];
    int32_t l_1541 = 0x73FBBE8BL;
    uint32_t l_1542 = 5UL;
    union U1 *****l_1552 = &g_845;
    uint8_t *l_1560[4] = {&g_1397,&g_1397,&g_1397,&g_1397};
    uint8_t **l_1559 = &l_1560[1];
    uint32_t l_1565 = 0xA7601E74L;
    const int8_t *l_1570[1][3][7] = {{{&g_537,(void*)0,&g_646[1],&g_646[1],(void*)0,&g_537,&g_646[1]},{&g_537,(void*)0,&g_646[1],&g_646[1],(void*)0,&g_537,&g_646[1]},{&g_537,(void*)0,&g_646[1],&g_646[1],(void*)0,&g_537,&g_646[1]}}};
    const int8_t * const *l_1569 = &l_1570[0][1][4];
    int32_t * const *l_1644 = (void*)0;
    uint8_t l_1679 = 8UL;
    const uint32_t *l_1690 = &g_906;
    const uint32_t **l_1689 = &l_1690;
    const uint32_t ***l_1688 = &l_1689;
    int16_t l_1702[7][3][5] = {{{7L,0L,9L,0xB2F5L,1L},{0xA68EL,0x7A87L,0L,0xE5F2L,0x413EL},{1L,0xBFE5L,0L,0x5E78L,4L}},{{4L,0xA68EL,9L,0x288FL,9L},{0x80E7L,0x80E7L,0xE5F2L,0L,0x1678L},{0xB2F5L,0x23DFL,0L,0x80E7L,0xDF66L}},{{0x7A87L,0x413EL,0x9E31L,0xE79FL,0L},{0x1678L,0x23DFL,0xA715L,0L,0xA68EL},{1L,0x80E7L,0xB2F5L,4L,0x89C9L}},{{0xC3FDL,0xA68EL,(-8L),0xDF66L,(-1L)},{0L,0xBFE5L,0x8A8BL,0xA715L,0x288FL},{0L,0x7A87L,0L,0xC3FDL,0L}},{{0xC3FDL,0L,0x1678L,0L,0xC3FDL},{1L,(-8L),0x89C9L,0L,0x80E7L},{0x1678L,0xE79FL,0x52BFL,0x6EC4L,0x4DDAL}},{{0x7A87L,9L,0x4DDAL,(-8L),0x80E7L},{0xB2F5L,0x6EC4L,(-1L),0x413EL,0xC3FDL},{0x80E7L,0xB2F5L,4L,0x89C9L,0L}},{{4L,0x5839L,0xC3FDL,3L,0x288FL},{1L,0L,0xDF66L,3L,(-1L)},{0xA68EL,0L,1L,0x89C9L,0x89C9L}}};
    uint32_t ****l_1722 = (void*)0;
    uint32_t *****l_1721 = &l_1722;
    int32_t l_1784 = 0xC1E70B85L;
    int32_t *l_1824 = &g_89.f2;
    int32_t *l_1825 = &l_1541;
    int32_t *l_1826 = (void*)0;
    int32_t *l_1827 = &g_1246;
    int32_t *l_1828 = &g_629;
    int32_t *l_1829 = &l_1541;
    int32_t *l_1830 = &l_1541;
    int32_t *l_1831 = (void*)0;
    int32_t *l_1832 = &g_1246;
    int32_t *l_1833 = &g_89.f2;
    int32_t *l_1834 = &g_629;
    int32_t *l_1835 = &g_1246;
    int32_t *l_1836[5][1][1];
    uint32_t l_1837 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1482[i] = &g_813[4][0][3];
    for (i = 0; i < 5; i++)
        l_1510[i] = 0x3336L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1836[i][j][k] = (void*)0;
        }
    }
    (**g_845) = func_21(((*l_32) = (l_25 <= (func_26((l_25 && ((safe_rshift_func_int8_t_s_s(((p_16 = g_19) , g_19.f0), ((void*)0 != &g_19))) | ((void*)0 != l_31[0]))), l_25) >= 65535UL))), l_31[0], g_19);
    for (g_233 = 0; (g_233 == 14); ++g_233)
    { 
        int32_t l_1477 = 6L;
        int16_t ***l_1505 = &g_1502;
        struct S0 ** const *l_1506[4][4][4] = {{{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986}},{{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986}},{{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986}},{{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986},{&g_986,&g_986,&g_986,&g_986}}};
        int32_t *l_1508 = &g_2;
        int32_t *l_1511 = &g_89.f2;
        int32_t *l_1512[5] = {&g_2,&g_2,&g_2,&g_2,&g_2};
        int64_t l_1525 = 0xF15D5993168E9B6ELL;
        int i, j, k;
        for (g_19.f2 = 0; (g_19.f2 <= 2); g_19.f2 += 1)
        { 
            uint64_t l_1473[4][3][2];
            int32_t *l_1474 = &g_629;
            int32_t **l_1475 = &l_1474;
            union U1 l_1476 = {0xAC89L};
            int32_t *l_1487 = &g_89.f2;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1473[i][j][k] = 0xE02FA4148BF13740LL;
                }
            }
            p_14.f2 &= (safe_mul_func_uint16_t_u_u((*g_1404), (((safe_unary_minus_func_int8_t_s(l_1473[1][0][1])) , g_1246) | (((*l_1475) = l_1474) == ((l_1476 = p_16) , (void*)0)))));
            (**l_1475) &= (((p_16 , 18446744073709551612UL) && (((p_14.f1 && ((p_16 = (**g_422)) , 0x922A51C9L)) == l_1477) == p_14.f1)) <= p_15);
            l_1478 = (*l_1475);
            (*l_1487) = (safe_unary_minus_func_uint64_t_u((safe_sub_func_int64_t_s_s((((**l_1475) = ((l_1482[0] == l_1482[0]) , l_1477)) | (*g_1434)), (safe_lshift_func_uint16_t_u_s(l_1477, ((((safe_rshift_func_int16_t_s_s(((*g_630) == (void*)0), p_14.f2)) , p_14.f2) >= 18446744073709551608UL) , p_16.f0)))))));
            (*l_1487) ^= (*l_1478);
            for (g_1246 = 2; (g_1246 >= 0); g_1246 -= 1)
            { 
                const int32_t *l_1489 = &g_879;
                const int32_t **l_1488 = &l_1489;
                const int32_t **l_1490 = (void*)0;
                const int32_t *l_1492[2][5];
                const int32_t **l_1491 = &l_1492[1][0];
                int16_t ****l_1503 = (void*)0;
                int16_t ****l_1504 = &g_1501[0];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1492[i][j] = &g_629;
                }
                (*l_1491) = ((*l_1488) = &g_879);
                if (g_1247[g_1246][(g_1246 + 3)][(g_1246 + 3)])
                    break;
                for (g_52 = 0; (g_52 <= 2); g_52 += 1)
                { 
                    int i, j, k;
                    (*l_1478) = (safe_rshift_func_uint16_t_u_u(((g_1247[g_19.f2][(g_19.f2 + 1)][(g_19.f2 + 2)] = 0xCC70EFAAL) | p_14.f6), 2));
                }
                (*l_1487) ^= ((safe_div_func_uint64_t_u_u((g_594 < ((*l_1474) == (((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(((*g_1434) = (-1L)), (*g_631))), (g_1396[1][0] = ((((((*l_1504) = g_1501[0]) == l_1505) , (l_1506[1][1][0] != l_1507)) , p_15) , 1L)))) , p_14.f0) ^ p_14.f6))), (*l_1474))) || 0L);
                (*l_1491) = (*l_1491);
                for (p_16.f3 = 0; (p_16.f3 <= 2); p_16.f3 += 1)
                { 
                    int32_t l_1509 = 1L;
                    int i, j, k;
                    (*l_1491) = l_1508;
                    if (g_74)
                        goto lbl_1547;
                    if ((*l_1487))
                        continue;
                    if (l_1509)
                        break;
                    (**l_1475) = (0x5FL & (p_16.f3 <= (g_1247[g_19.f2][(g_19.f2 + 3)][(p_16.f3 + 2)] = p_14.f2)));
                }
            }
        }
        ++g_1513;
        for (p_16.f3 = 0; (p_16.f3 <= (-11)); p_16.f3--)
        { 
            uint64_t l_1518 = 0x52016662E0621A0FLL;
            --l_1518;
        }
        l_1511 = ((safe_lshift_func_int16_t_s_u(((*g_1434) = (safe_sub_func_int16_t_s_s(((*g_1434) > l_1525), p_14.f6))), 13)) , l_1511);
    }
lbl_1547:
    for (g_586 = 0; (g_586 > 6); g_586 = safe_add_func_uint16_t_u_u(g_586, 4))
    { 
        int32_t l_1530[4][5];
        uint64_t **l_1535 = &g_231[5];
        const struct S0 *l_1537 = (void*)0;
        const struct S0 **l_1536 = &l_1537;
        struct S0 *l_1539 = &g_341;
        struct S0 **l_1538 = &l_1539;
        int32_t *l_1540 = &l_1530[2][1];
        int32_t *l_1543 = &g_19.f2;
        int32_t *l_1544 = &g_19.f2;
        int32_t *l_1545 = &g_19.f2;
        int32_t *l_1546 = &g_629;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_1530[i][j] = 0L;
        }
        for (g_594 = 0; (g_594 != (-26)); g_594--)
        { 
            return l_1530[2][1];
        }
        (*l_1478) = g_1337;
        (*l_1546) |= (safe_mul_func_uint16_t_u_u(((l_1541 ^= (safe_add_func_uint16_t_u_u(p_14.f0, (p_16 , ((0L != (((*l_1540) = (l_1535 != ((((*l_1536) = (*g_986)) != ((*l_1538) = (**g_985))) , &l_1482[0]))) , g_152)) >= 0x8B57L))))) , l_1542), p_15));
    }
    for (g_359 = 0; (g_359 <= 5); g_359 += 1)
    { 
        union U1 *****l_1551 = &g_845;
        int32_t l_1561[2][2][2] = {{{0x91EBDD2DL,0x91EBDD2DL},{0x91EBDD2DL,0x91EBDD2DL}},{{0x91EBDD2DL,0x91EBDD2DL},{0x91EBDD2DL,0x91EBDD2DL}}};
        uint8_t **l_1568 = &l_1560[1];
        int32_t **l_1587 = &g_901[1][2];
        int16_t l_1653 = 0xD76EL;
        const uint32_t ***l_1661 = (void*)0;
        uint8_t l_1698 = 255UL;
        uint64_t l_1711[2];
        int8_t ***l_1780[3];
        int32_t *l_1808 = &l_1561[1][1][0];
        int32_t *l_1809 = &g_629;
        int32_t *l_1810 = &g_629;
        int32_t *l_1811 = &g_1246;
        int32_t *l_1812 = &l_1561[1][0][1];
        int32_t *l_1813 = &g_1700.f2;
        int32_t *l_1814 = &g_1246;
        int32_t *l_1815 = &g_89.f2;
        int32_t *l_1816 = &l_1561[1][0][0];
        int32_t *l_1817 = &g_1700.f2;
        int32_t *l_1818[7][5] = {{&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[0][0][1],&l_1561[1][0][0],&l_1561[1][0][0]},{&g_629,&l_1561[0][0][1],&g_629,&l_1561[0][0][0],(void*)0},{&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[1][0][0]},{(void*)0,&l_1561[0][0][1],&l_1541,&l_1561[0][0][1],(void*)0},{&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[1][0][0]},{(void*)0,&l_1561[0][0][0],&g_629,&l_1561[0][0][1],&g_629},{&l_1561[1][0][0],&l_1561[1][0][0],&l_1561[0][0][1],&l_1561[1][0][0],&l_1561[1][0][0]}};
        uint8_t l_1819 = 0x26L;
        int32_t **l_1822 = &l_1811;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1711[i] = 0xB1F3CCE1826BB05ELL;
        for (i = 0; i < 3; i++)
            l_1780[i] = &g_875;
    }
    l_1837++;
    return p_14.f4;
}



static union U1 ** func_21(uint32_t  p_22, union U1 * p_23, union U1  p_24)
{ 
    int32_t *l_47 = &g_2;
    union U1 *l_88 = &g_89;
    union U1 **l_87[6][3] = {{(void*)0,(void*)0,&l_88},{(void*)0,&l_88,&l_88},{(void*)0,&l_88,(void*)0},{(void*)0,(void*)0,&l_88},{(void*)0,&l_88,&l_88},{(void*)0,&l_88,(void*)0}};
    int32_t l_351 = 0x10EAAE94L;
    int32_t l_352 = 0L;
    int32_t l_353 = (-1L);
    int32_t l_354 = (-1L);
    int32_t l_355 = 0xD78A4FEAL;
    int32_t l_357[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int16_t l_358 = 0xD78CL;
    struct S0 **l_376 = &g_340[0];
    struct S0 ***l_377 = &l_376;
    struct S0 **l_378 = &g_340[0];
    int16_t *l_381 = &g_19.f0;
    const uint8_t l_383 = 0x46L;
    uint32_t l_389[1][2];
    union U1 *l_398 = &g_89;
    int64_t l_459 = 1L;
    union U1 **l_490 = (void*)0;
    uint32_t l_512 = 0x6518169DL;
    uint64_t l_515[6] = {0x3F90E0BB2F9CEBAALL,0x3F90E0BB2F9CEBAALL,1UL,0x3F90E0BB2F9CEBAALL,0x3F90E0BB2F9CEBAALL,1UL};
    uint32_t l_549[6][6] = {{0xD2B70932L,0xD2B70932L,0xE264143DL,0xD2B70932L,0xD2B70932L,0xE264143DL},{0xD2B70932L,0xD2B70932L,0xE264143DL,0xD2B70932L,0xD2B70932L,0xE264143DL},{0xD2B70932L,0xD2B70932L,0xE264143DL,0xD2B70932L,0xD2B70932L,0xE264143DL},{0xD2B70932L,0xD2B70932L,0xE264143DL,0xD2B70932L,0xD2B70932L,0xE264143DL},{0xD2B70932L,0xD2B70932L,0xE264143DL,0xD2B70932L,0xD2B70932L,0xE264143DL},{0xD2B70932L,0xD2B70932L,0xE264143DL,0xD2B70932L,0xD2B70932L,0xE264143DL}};
    const int32_t l_566 = 7L;
    union U1 ***l_573 = &l_87[1][2];
    union U1 ****l_572 = &l_573;
    uint32_t l_647 = 0x803C5DA9L;
    union U1 l_660 = {0x53B9L};
    uint32_t l_694 = 0UL;
    union U1 ****l_848 = (void*)0;
    const int32_t *l_882[7][2][6] = {{{&l_357[6],&l_357[6],&g_629,(void*)0,&l_352,(void*)0},{&g_19.f2,&l_357[6],&g_19.f2,&l_354,&g_629,&g_629}},{{&g_879,&g_19.f2,&g_19.f2,&g_879,&l_357[6],(void*)0},{(void*)0,&g_879,&g_629,&g_879,(void*)0,&l_354}},{{&g_879,(void*)0,&l_354,&l_354,(void*)0,&g_879},{&g_19.f2,&g_879,&l_357[6],(void*)0,&l_357[6],&g_879}},{{&l_357[6],(void*)0,&g_629,&l_357[6],&l_357[6],&g_629},{&l_352,&l_352,&l_357[6],&l_354,&g_879,&l_354}},{{(void*)0,&l_352,(void*)0,&g_629,&l_357[6],&l_357[6]},{&g_19.f2,(void*)0,(void*)0,&g_19.f2,&l_352,&l_354}},{{&l_354,&g_19.f2,&l_357[6],&g_19.f2,&l_354,&g_629},{&g_19.f2,&l_354,&g_629,&g_629,&l_354,&g_19.f2}},{{(void*)0,&g_19.f2,&l_352,&l_354,&l_352,&g_19.f2},{&l_352,(void*)0,&g_629,&l_357[6],&l_357[6],&g_629}}};
    const int8_t **l_888 = (void*)0;
    int32_t *l_894 = &l_357[6];
    int32_t *l_903 = &l_357[3];
    int32_t l_914 = (-2L);
    uint16_t *l_917 = &g_49;
    uint16_t **l_916 = &l_917;
    int64_t *l_990 = &g_233;
    int32_t l_1113 = 4L;
    int64_t l_1131[6];
    int8_t l_1163 = 1L;
    uint32_t l_1278 = 0x32162A8AL;
    uint64_t **l_1297 = &g_231[5];
    uint64_t l_1324 = 9UL;
    int8_t l_1348 = 0xA9L;
    uint32_t l_1408 = 0x027CFDC8L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_389[i][j] = 0xE9F24227L;
    }
    for (i = 0; i < 6; i++)
        l_1131[i] = (-9L);
    for (p_24.f1 = 0; (p_24.f1 != 50); p_24.f1 = safe_add_func_uint64_t_u_u(p_24.f1, 2))
    { 
        int32_t *l_36 = (void*)0;
        int32_t *l_37 = &g_19.f2;
        int16_t *l_48[3][6][3] = {{{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0}},{{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0}},{{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0},{&g_19.f0,&g_19.f0,&g_19.f0}}};
        uint32_t *l_50 = (void*)0;
        uint32_t *l_51[6] = {&g_52,&g_52,&g_52,&g_52,&g_52,&g_52};
        int32_t **l_347 = (void*)0;
        int32_t **l_348 = &l_47;
        int32_t **l_349 = &l_37;
        int32_t *l_350[5] = {&g_19.f2,&g_19.f2,&g_19.f2,&g_19.f2,&g_19.f2};
        int64_t l_356 = 0x7F8BF7227BF97041LL;
        int i, j, k;
        (*l_37) = 0x4C9CADCDL;
    }
    for (l_355 = (-22); (l_355 <= (-3)); l_355++)
    { 
        int16_t *l_366 = (void*)0;
        int16_t *l_367 = &g_89.f0;
        uint16_t *l_368 = &g_101;
        int32_t *l_371 = &l_353;
        (*l_371) ^= (safe_lshift_func_uint8_t_u_u(((((*l_367) = (*l_47)) | ((*l_368) = p_24.f0)) , (safe_sub_func_int8_t_s_s(p_24.f4, 0x51L))), 1));
    }
    return (**g_845);
}



static uint16_t  func_26(uint32_t  p_27, uint8_t  p_28)
{ 
    return p_27;
}



static int32_t * func_38(union U1 ** p_39)
{ 
    int32_t *l_343[5] = {&g_2,&g_2,&g_2,&g_2,&g_2};
    uint16_t l_344[7][2] = {{0x66DBL,0x858CL},{7UL,0UL},{0x858CL,0UL},{7UL,0x858CL},{0x66DBL,0x66DBL},{0x66DBL,0x858CL},{7UL,0UL}};
    int i, j;
    l_344[5][0]--;
    return l_343[1];
}



static union U1  func_40(union U1  p_41, union U1 ** p_42, union U1  p_43)
{ 
    int32_t *l_92 = (void*)0;
    int32_t **l_93 = &l_92;
    int16_t *l_100 = &g_89.f0;
    int32_t l_102[4] = {0xE0B6AD74L,0xE0B6AD74L,0xE0B6AD74L,0xE0B6AD74L};
    int32_t *l_103 = &l_102[1];
    uint32_t **l_108 = (void*)0;
    uint32_t *l_110 = &g_52;
    uint32_t **l_109 = &l_110;
    uint32_t *l_125[4][6] = {{(void*)0,(void*)0,&g_33[0][5][0],&g_33[0][4][0],&g_33[0][5][0],(void*)0},{&g_33[0][5][0],(void*)0,&g_33[0][4][0],&g_33[0][4][0],(void*)0,&g_33[0][5][0]},{(void*)0,&g_33[0][5][0],&g_33[0][4][0],&g_33[0][5][0],(void*)0,(void*)0},{&g_33[1][2][0],&g_33[0][5][0],&g_33[0][5][0],&g_33[1][2][0],(void*)0,&g_33[1][2][0]}};
    uint32_t l_153 = 18446744073709551608UL;
    struct S0 l_239 = {-1366,410,14,41,637,9476,0xDFC3A39DL};
    uint64_t **l_286 = (void*)0;
    struct S0 *l_337 = &l_239;
    struct S0 **l_336[3];
    struct S0 *l_338 = &g_339[2];
    union U1 l_342 = {1L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_336[i] = &l_337;
lbl_317:
    (*l_103) = (safe_mul_func_uint16_t_u_u(((g_49 <= g_33[1][2][0]) > (((*l_93) = (g_74 , l_92)) == (((g_101 &= (safe_rshift_func_int16_t_s_s(((*l_100) = ((g_49 != (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_43.f2, g_19.f0)), g_19.f0))) != g_19.f2)), p_43.f4))) , l_102[1]) , (void*)0))), 0x2597L));
    if (((safe_lshift_func_int8_t_s_s(8L, (safe_sub_func_int64_t_s_s(0x516C33996C8B9E1FLL, (((p_43.f0 != 0x7570L) , l_92) != ((*l_109) = l_103)))))) , ((*l_103) = (safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((p_43.f4 == 18446744073709551612UL), g_19.f4)), p_41.f0)) , (-8L)), (*l_103))))))
    { 
        int32_t l_123 = 9L;
        uint32_t **l_124[3];
        int32_t * const l_126 = &l_102[1];
        uint32_t ***l_149[2];
        int32_t l_150 = (-1L);
        uint64_t *l_151[6];
        int32_t *l_154 = &g_19.f2;
        int32_t *l_155 = &g_19.f2;
        int32_t *l_156 = &g_89.f2;
        int32_t *l_157 = (void*)0;
        int32_t *l_158 = &g_19.f2;
        int32_t *l_159 = (void*)0;
        int32_t *l_160 = (void*)0;
        int32_t *l_161[6] = {&g_2,&l_150,&l_150,&g_2,&l_150,&l_150};
        int i;
        for (i = 0; i < 3; i++)
            l_124[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_149[i] = &l_109;
        for (i = 0; i < 6; i++)
            l_151[i] = &g_152;
        (*l_103) &= (((((*l_100) = 1L) < (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((g_19.f0 = (((safe_add_func_uint8_t_u_u((g_19 , 5UL), l_123)) == (&g_33[1][2][0] == (l_125[0][0] = l_103))) <= 1L)), p_43.f1)), g_52))) | 0x65D9L) , p_43.f1);
        g_127 = l_126;
        (*g_127) = (((*l_126) < (l_153 = (((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(0x74L, (safe_sub_func_int64_t_s_s((*l_126), (safe_sub_func_uint32_t_u_u((l_150 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0x5B6AL, 9)), ((g_142 != ((safe_add_func_int16_t_s_s((*l_103), (((safe_rshift_func_uint16_t_u_u((&g_143 != (void*)0), p_43.f3)) < g_49) && p_41.f0))) , l_149[0])) >= 0x82E8L)))), 0xFD28FE82L)))))), p_43.f1)) <= p_43.f4), (*l_126))) || (*l_126)) | 0xC356ED06L))) && p_43.f2);
        p_43.f4 &= (*l_103);
    }
    else
    { 
        const int8_t l_166[7] = {0x12L,0x12L,0x12L,0x12L,0x12L,0x12L,0x12L};
        uint32_t **l_178 = (void*)0;
        int32_t l_217 = 3L;
        const uint32_t l_222 = 1UL;
        uint32_t l_223[7][3][1] = {{{18446744073709551615UL},{9UL},{9UL}},{{18446744073709551615UL},{1UL},{0x5ACE6E74L}},{{1UL},{18446744073709551615UL},{9UL}},{{9UL},{18446744073709551615UL},{1UL}},{{0x5ACE6E74L},{1UL},{18446744073709551615UL}},{{9UL},{9UL},{18446744073709551615UL}},{{1UL},{0xF52E2E74L},{18446744073709551615UL}}};
        uint64_t *l_228 = &g_152;
        int16_t *l_243 = &g_221;
        uint16_t l_274 = 65535UL;
        uint8_t l_287[5][1][2];
        int16_t l_304 = (-6L);
        int32_t *l_333 = &g_89.f2;
        int32_t *l_334[4][5] = {{&l_102[1],&g_89.f2,&l_102[1],&l_102[1],&g_89.f2},{&g_89.f2,&l_102[1],&l_102[1],&g_89.f2,&l_102[1]},{&g_89.f2,&g_89.f2,&l_102[1],&g_89.f2,&g_89.f2},{&l_102[1],&g_89.f2,&l_102[1],&l_102[1],&g_89.f2}};
        uint8_t l_335 = 0x3AL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_287[i][j][k] = 0x9AL;
            }
        }
        if (((*l_103) = (safe_add_func_int16_t_s_s(p_43.f1, (safe_lshift_func_uint8_t_u_s((((0x763735208E988613LL || ((l_166[6] > ((safe_add_func_int16_t_s_s(l_166[5], g_101)) > (safe_add_func_int64_t_s_s((-1L), g_19.f4)))) > p_41.f0)) < 0x7E00L) ^ g_19.f0), 4))))))
        { 
            uint8_t l_191[2];
            int i;
            for (i = 0; i < 2; i++)
                l_191[i] = 0x42L;
            for (p_43.f3 = 0; (p_43.f3 > (-3)); p_43.f3--)
            { 
                uint32_t **l_179[2][3][6] = {{{&l_110,&g_144[1],&g_144[1],&l_110,&g_144[1],&g_144[1]},{&l_110,&g_144[1],&g_144[1],&l_110,&g_144[1],&g_144[1]},{&l_110,&g_144[1],&g_144[1],&l_110,&g_144[1],&g_144[1]}},{{&l_110,&g_144[1],&g_144[1],&l_110,&g_144[1],&g_144[1]},{&l_110,&g_144[1],&g_144[1],&l_110,&g_144[1],&g_144[1]},{&l_110,&g_144[1],&g_144[1],&l_110,&g_144[1],&g_144[1]}}};
                int32_t l_196[3];
                uint64_t *l_197[4] = {&g_152,&g_152,&g_152,&g_152};
                uint8_t *l_198 = (void*)0;
                uint8_t *l_199 = &l_191[1];
                int32_t l_207 = 6L;
                int64_t l_218 = (-5L);
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_196[i] = (-7L);
                (*l_103) = (safe_lshift_func_int8_t_s_u((!(!(+(l_178 == ((*g_142) = l_179[0][2][4]))))), 7));
                if ((+(safe_mod_func_uint8_t_u_u(p_43.f3, ((l_166[6] , (((((*l_199) = (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(4294967295UL, p_41.f0)) && (safe_add_func_int32_t_s_s(((*l_103) | ((l_191[1] <= (g_152 &= (((((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u(0x4BL, g_19.f1)) | 1L) > g_19.f4), l_196[2])) <= l_196[2]) >= 0x201156ABL) & p_43.f2) >= g_101))) == l_166[1])), p_41.f0))), l_196[2]))) != g_33[1][2][0]) == 1L) <= p_41.f0)) , p_43.f0)))))
                { 
                    uint16_t *l_204 = &g_74;
                    uint16_t *l_205 = &g_101;
                    int32_t l_216 = 0x262E4DC6L;
                    int32_t l_219 = 0xA7228B4AL;
                    int16_t *l_220 = &g_221;
                    uint64_t *l_230 = &g_152;
                    int64_t *l_232 = &g_233;
                    int32_t *l_234 = &l_217;
                    int32_t *l_235 = (void*)0;
                    int32_t *l_236 = &l_196[2];
                    (*l_93) = ((p_41.f0 | (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((*l_205) = ((*l_204) = g_101)) , (((+(((((p_43.f0 ^ 65535UL) < ((*l_220) ^= (l_207 , ((((l_216 = (safe_add_func_int16_t_s_s((((g_19.f3 <= ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((*l_100) = ((((safe_add_func_int32_t_s_s((l_166[1] >= l_216), l_216)) , l_216) && l_216) <= g_152)), l_217)), l_191[1])) <= 6UL)) && g_152) > g_74), l_218))) == p_43.f2) | l_219) != l_191[1])))) <= (*l_103)) != l_222) , l_191[1])) == p_43.f1) , l_191[1])), 3)), g_19.f0))) , (void*)0);
                    (*l_103) ^= l_191[1];
                    l_223[1][1][0]--;
                    (*l_236) |= ((*l_234) &= (((*l_103) = p_41.f0) , (l_218 > ((-7L) <= ((*l_232) = ((g_229 = l_228) == (g_231[1] = l_230)))))));
                    if (p_43.f4)
                        break;
                }
                else
                { 
                    int16_t *l_240[4][4] = {{&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0},{&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0},{&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0},{&g_89.f0,&g_89.f0,&g_89.f0,&g_89.f0}};
                    uint32_t * const l_244 = &l_223[1][2][0];
                    int32_t *l_245 = &g_19.f2;
                    int i, j;
                    (*l_245) ^= ((*l_103) = ((((safe_add_func_int32_t_s_s((l_239 , (l_240[2][0] == (((g_89 , (9UL | (l_217 = (safe_sub_func_int64_t_s_s(0L, p_43.f3))))) , p_43.f1) , l_243))), 0xD01F5253L)) <= 18446744073709551610UL) , (void*)0) == l_244));
                }
                g_127 = &l_196[0];
            }
        }
        else
        { 
            uint16_t *l_255[4];
            int32_t l_258 = 0x4D310EF4L;
            uint64_t **l_261 = &l_228;
            int32_t l_272 = (-2L);
            int32_t l_273 = 1L;
            struct S0 l_282 = {-91,481,33,33,1824,13315,6UL};
            int32_t **l_283 = &g_127;
            uint16_t l_303 = 1UL;
            uint16_t l_316[5][5][7] = {{{0x4081L,0UL,0x211AL,65527UL,6UL,0UL,0x4A4EL},{65535UL,0xF600L,65532UL,0x1621L,65535UL,7UL,65535UL},{65535UL,65535UL,65535UL,65535UL,6UL,2UL,0xB912L},{0x27F8L,0UL,0xD8EFL,0x2A09L,0x27F8L,0xF600L,4UL},{1UL,0x4081L,0x97FDL,0x4A4EL,0UL,0UL,0xB912L}},{{65531UL,0x1621L,65535UL,0xF600L,65532UL,0x1621L,65535UL},{0UL,0x4A4EL,0xB912L,0x95E1L,0x95E1L,0xB912L,0x4A4EL},{0x27F8L,0x1621L,0xB2D4L,65532UL,0x1837L,0x535FL,0xB2D4L},{0x95E1L,0x4081L,2UL,65527UL,0UL,1UL,65535UL},{65535UL,0UL,65535UL,65532UL,65535UL,0x2A09L,65531UL}},{{0UL,65535UL,0x4A4EL,0x95E1L,1UL,2UL,2UL},{0x1837L,0xF600L,0xD8EFL,0xF600L,0x1837L,0x2A09L,4UL},{6UL,0UL,65527UL,0x4A4EL,65535UL,1UL,0x211AL},{65531UL,0x535FL,65532UL,0x2A09L,65532UL,0x535FL,65531UL},{6UL,0x4A4EL,2UL,65535UL,0x4081L,0xB912L,65527UL}},{{0x1837L,65532UL,0xB2D4L,0x1621L,0x27F8L,0x1621L,0xB2D4L},{0UL,0UL,2UL,65527UL,0x6D43L,0UL,0x97FDL},{65535UL,7UL,65532UL,0xF46EL,65535UL,0xF600L,65535UL},{0x95E1L,65535UL,65527UL,65535UL,0x6D43L,2UL,2UL},{0x27F8L,0x2A09L,0xD8EFL,0UL,0x27F8L,7UL,4UL}},{{0UL,0x4081L,0x4A4EL,0x4A4EL,0x4081L,0UL,2UL},{65531UL,0xF46EL,65535UL,7UL,65532UL,0xF46EL,65535UL},{1UL,0x4A4EL,2UL,0x95E1L,65535UL,0xB912L,0x97FDL},{0x27F8L,0xF46EL,0xB2D4L,0x535FL,0x1837L,65532UL,0xB2D4L},{65535UL,0x4081L,0xB912L,65527UL,1UL,1UL,65527UL}}};
            uint32_t *l_332 = &l_223[5][1][0];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_255[i] = &g_74;
            g_19.f2 = (safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((((*g_229) || (((((**g_143) ^= l_223[4][0][0]) , (safe_mul_func_uint8_t_u_u((~((*l_100) = ((l_217 = (safe_sub_func_uint32_t_u_u(((void*)0 == &l_217), (0xFB19B034L <= l_222)))) ^ (((safe_lshift_func_int8_t_s_s(0L, l_258)) || 18446744073709551615UL) != p_43.f4)))), l_258))) & g_19.f3) >= p_43.f2)) & 246UL), 250UL)) , l_166[6]), g_19.f3));
            (*l_103) |= ((&g_152 == ((*l_261) = ((safe_rshift_func_int8_t_s_u(l_258, ((void*)0 != l_178))) , l_228))) ^ (!p_43.f1));
lbl_320:
            for (g_152 = (-30); (g_152 < 4); g_152 = safe_add_func_int32_t_s_s(g_152, 7))
            { 
                uint32_t *l_301[3][1];
                int32_t l_302 = (-8L);
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_301[i][j] = &l_282.f6;
                }
                for (g_233 = 5; (g_233 <= 11); ++g_233)
                { 
                    int32_t *l_267 = &l_217;
                    int32_t *l_268 = &l_102[1];
                    int32_t *l_269 = &l_102[1];
                    int32_t *l_270 = &g_19.f2;
                    int32_t *l_271[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*l_267) = ((-4L) | (((*l_103) ^= (g_89.f0 , p_43.f2)) < g_74));
                    l_274--;
                }
                if (p_43.f3)
                    break;
                l_287[3][0][1] |= (safe_mul_func_uint8_t_u_u(g_221, ((safe_rshift_func_int8_t_s_u((l_272 , (safe_unary_minus_func_int32_t_s((&g_127 == (l_282 , l_283))))), ((((safe_rshift_func_uint16_t_u_s(((0xD0L | (g_101 ^ g_49)) >= p_41.f0), 9)) && p_43.f3) , &g_231[1]) == l_286))) < g_152)));
                if (g_19.f4)
                { 
                    int64_t l_288 = 0xE2548D4844F79F7BLL;
                    if (p_43.f1)
                        break;
                    (*l_103) &= (((l_288 > (safe_rshift_func_uint8_t_u_u(((void*)0 == &g_233), (((((((safe_sub_func_uint64_t_u_u(8UL, ((0UL <= ((*l_243) = ((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((&g_33[0][3][0] != l_301[2][0]) && l_302), g_89.f0)) >= g_74), 0xA3L)) != l_166[5]) || 0x27BD82A387163799LL), p_43.f3)) | p_43.f1), 1UL)) >= (-9L)))) >= g_74))) | 0UL) < 0x6969L) ^ 0x8024L) < g_89.f0) < g_101) >= l_223[4][2][0])))) , 5L) ^ l_288);
                    if (p_43.f1)
                        continue;
                }
                else
                { 
                    if (p_41.f0)
                        break;
                }
            }
            (*l_103) = (l_304 = l_303);
            for (g_52 = 0; (g_52 <= 3); g_52 += 1)
            { 
                int32_t *l_305 = &g_19.f2;
                uint8_t *l_309 = (void*)0;
                uint8_t *l_310[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_310[i] = &l_287[3][0][1];
                (*l_305) = ((*l_103) |= (-1L));
                if (l_102[g_52])
                    break;
                if ((safe_lshift_func_uint8_t_u_s((g_311++), (safe_add_func_int32_t_s_s(p_41.f0, (l_316[3][0][4] <= (*l_103)))))))
                { 
                    if (l_217)
                        goto lbl_317;
                    (*l_305) = (g_318 != (void*)0);
                }
                else
                { 
                    if (g_19.f0)
                        goto lbl_317;
                    if (p_43.f2)
                        break;
                    if (g_19.f3)
                        goto lbl_320;
                }
                (*l_103) |= ((safe_div_func_int16_t_s_s(0xDFEDL, 65531UL)) ^ ((+(safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*l_305) ^= 0UL), g_101)), (safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((&g_2 == ((((l_332 != (*g_143)) ^ 0x4CL) == 246UL) , (*l_283))) || p_43.f2), p_43.f4)), 5L))))) , g_311));
            }
        }
        l_335 &= (*l_103);
    }
    g_340[0] = (l_338 = &l_239);
    return l_342;
}



static union U1  func_44(int32_t * p_45, uint8_t  p_46)
{ 
    int64_t l_61 = (-4L);
    int32_t l_77 = 0xB236EDAEL;
    int32_t l_78 = (-8L);
    int32_t *l_79[1];
    uint32_t *l_81[4][2] = {{&g_19.f1,&g_52},{&g_19.f1,&g_52},{&g_19.f1,&g_52},{&g_19.f1,&g_52}};
    uint32_t ** const l_80 = &l_81[0][0];
    uint32_t **l_83[3][5][7] = {{{&l_81[2][1],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[2][1]},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]},{&l_81[1][1],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[1][1],&l_81[1][1],&l_81[1][1]},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[2][1],&l_81[0][0],&l_81[0][0]}},{{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]},{&l_81[1][1],&l_81[0][0],(void*)0,&l_81[0][0],(void*)0,&l_81[0][0],&l_81[1][1]},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]},{&l_81[2][1],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[2][1],&l_81[1][1],&l_81[2][1]},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]}},{{(void*)0,&l_81[0][0],(void*)0,&l_81[0][0],&l_81[1][1],&l_81[0][0],(void*)0},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[1][1],&l_81[0][0]},{&l_81[2][1],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[2][1]},{&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]},{&l_81[1][1],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[1][1],&l_81[1][1],&l_81[1][1]}}};
    uint32_t ***l_82 = &l_83[1][3][5];
    union U1 l_86[1][6] = {{{0x9C35L},{0x9C35L},{0x9C35L},{0x9C35L},{0x9C35L},{0x9C35L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_79[i] = &g_19.f2;
    g_19.f2 = (l_78 &= (l_77 &= (((0x25A1B5826CCE71C9LL < ((1UL != func_57(g_52, (((((g_33[1][2][0] , (g_49 && ((l_61 || (safe_div_func_uint8_t_u_u((!p_46), 0xA0L))) == p_46))) & l_61) & 0x1D3A0C94A7464C66LL) || g_49) , 4294967295UL), l_61)) | 2L)) >= 0xBFL) , g_52)));
    (*l_82) = l_80;
    g_19.f2 &= (safe_mul_func_uint8_t_u_u(p_46, p_46));
    return l_86[0][0];
}



static uint64_t  func_57(int32_t  p_58, const uint32_t  p_59, uint8_t  p_60)
{ 
    int32_t *l_65 = &g_19.f2;
    int32_t *l_66 = &g_19.f2;
    int32_t *l_67 = &g_19.f2;
    int32_t l_68[4] = {0x24D3E44EL,0x24D3E44EL,0x24D3E44EL,0x24D3E44EL};
    int32_t *l_69 = (void*)0;
    int32_t *l_70 = (void*)0;
    int32_t *l_71 = &l_68[2];
    int32_t *l_72 = &l_68[2];
    int32_t *l_73[5][2] = {{&l_68[0],(void*)0},{&l_68[0],&l_68[1]},{&l_68[0],&l_68[0]},{&l_68[0],&l_68[1]},{&l_68[0],(void*)0}};
    int i, j;
    g_74--;
    return g_74;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_308[i][j][k], "g_308[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_311, "g_311", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_339[i].f0, "g_339[i].f0", print_hash_value);
        transparent_crc(g_339[i].f1, "g_339[i].f1", print_hash_value);
        transparent_crc(g_339[i].f2, "g_339[i].f2", print_hash_value);
        transparent_crc(g_339[i].f3, "g_339[i].f3", print_hash_value);
        transparent_crc(g_339[i].f4, "g_339[i].f4", print_hash_value);
        transparent_crc(g_339[i].f5, "g_339[i].f5", print_hash_value);
        transparent_crc(g_339[i].f6, "g_339[i].f6", print_hash_value);

    }
    transparent_crc(g_341.f0, "g_341.f0", print_hash_value);
    transparent_crc(g_341.f1, "g_341.f1", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_341.f3, "g_341.f3", print_hash_value);
    transparent_crc(g_341.f4, "g_341.f4", print_hash_value);
    transparent_crc(g_341.f5, "g_341.f5", print_hash_value);
    transparent_crc(g_341.f6, "g_341.f6", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_417[i], "g_417[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_509[i], "g_509[i]", print_hash_value);

    }
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_646[i], "g_646[i]", print_hash_value);

    }
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_813[i][j][k], "g_813[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1154[i], "g_1154[i]", print_hash_value);

    }
    transparent_crc(g_1246, "g_1246", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1247[i][j][k], "g_1247[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1370, "g_1370", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1396[i][j], "g_1396[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1397, "g_1397", print_hash_value);
    transparent_crc(g_1513, "g_1513", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1655[i][j], "g_1655[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1656, "g_1656", print_hash_value);
    transparent_crc(g_1700.f0, "g_1700.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1878[i][j][k], "g_1878[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
