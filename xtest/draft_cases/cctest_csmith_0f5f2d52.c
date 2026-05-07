// SPDX-License-Identifier: MIT
// cctest_csmith_0f5f2d52.c --- cctest case csmith_0f5f2d52 (csmith seed 257895762)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc0f03727 */

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

// Options:   -s 257895762 -o /tmp/csmith_gen_7djrc6eh/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 23;
   int64_t  f1;
};

struct S1 {
   uint64_t  f0;
   const uint64_t  f1;
   const int16_t  f2;
   unsigned f3 : 16;
   uint16_t  f4;
   int32_t  f5;
   struct S0  f6;
   int16_t  f7;
};

union U2 {
   const uint64_t  f0;
   int8_t  f1;
};

union U3 {
   uint16_t  f0;
   uint8_t  f1;
   int8_t * const  f2;
   int64_t  f3;
};


static int32_t g_2 = 8L;
static int8_t g_6[6] = {3L,0x61L,3L,3L,0x61L,3L};
static int8_t *g_5[6][3] = {{&g_6[1],&g_6[1],&g_6[1]},{&g_6[1],&g_6[3],&g_6[1]},{&g_6[1],&g_6[1],&g_6[1]},{(void*)0,&g_6[3],(void*)0},{&g_6[1],&g_6[1],&g_6[1]},{&g_6[1],&g_6[3],&g_6[1]}};
static int32_t g_15[7][1] = {{0xA83A0F0FL},{(-1L)},{(-1L)},{0xA83A0F0FL},{(-1L)},{(-1L)},{0xA83A0F0FL}};
static int32_t g_51 = 0x80CDE216L;
static int32_t g_58 = 0x638B4FD0L;
static int32_t g_60 = 0xC9DB4546L;
static struct S0 g_61 = {509,-6L};
static uint64_t g_90 = 0UL;
static uint64_t g_95 = 7UL;
static struct S1 g_96 = {0xF5E0DC07262726E9LL,0xFA078023CB4EFB57LL,3L,66,65535UL,0x812B24ABL,{647,0x81ACCAB4487636F9LL},0xE049L};
static union U2 g_102 = {0xDEDC864E9E4B147BLL};
static uint32_t g_105 = 0x24B42E23L;
static int16_t g_122 = (-10L);
static int16_t g_151 = 0x1CB0L;
static int64_t g_152 = (-1L);
static int8_t g_157 = 0x51L;
static uint32_t g_158 = 0xF1649788L;
static int16_t g_172[6] = {0x4813L,0x4813L,0x4813L,0x4813L,0x4813L,0x4813L};
static uint8_t g_173 = 0x0CL;
static struct S1 g_272 = {18446744073709551615UL,4UL,-1L,87,0UL,-5L,{1603,-1L},0x56B2L};
static struct S1 *g_271 = &g_272;
static struct S0 *g_280 = &g_272.f6;
static int32_t g_343 = 8L;
static int16_t g_346 = 1L;
static uint8_t g_348 = 0x3EL;
static union U3 g_362 = {65530UL};
static int32_t g_393 = 1L;
static int32_t g_395 = (-1L);
static int32_t g_398 = (-1L);
static int64_t g_399[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_400 = 0x735E1940L;
static int32_t g_404 = 0xBA9004A2L;
static int32_t g_405 = 0x2F4127E0L;
static int16_t g_406 = (-1L);
static uint32_t g_407 = 6UL;
static int64_t *g_424 = &g_96.f6.f1;
static int64_t **g_423 = &g_424;
static uint16_t *g_496 = &g_96.f4;
static uint16_t **g_495[1][7] = {{&g_496,&g_496,&g_496,&g_496,&g_496,&g_496,&g_496}};
static uint16_t *** const g_494 = &g_495[0][5];
static struct S1 g_502 = {0xC7D3644F2DE5A334LL,0xFE6D7478D5351EE5LL,-1L,52,0x2121L,0x431ACFF5L,{-2524,0xBA498BDA5A5898E8LL},0L};
static struct S1 *g_501[6] = {&g_502,&g_502,&g_502,&g_502,&g_502,&g_502};
static int64_t g_504 = 0xC4AD845D9B98D9EFLL;
static int64_t g_567 = 0L;
static const int64_t ***g_577[2] = {(void*)0,(void*)0};
static const int64_t ****g_576 = &g_577[0];
static uint32_t g_611 = 18446744073709551612UL;
static int8_t g_656 = 4L;
static struct S1 g_667 = {0UL,0x63534370DA551654LL,0xC44DL,77,1UL,0L,{-1566,0x216F39D5E637F944LL},0L};
static const uint32_t g_708 = 2UL;
static union U2 *g_769 = &g_102;
static union U2 **g_768 = &g_769;
static uint16_t g_773 = 0x34FEL;
static int32_t *g_789 = &g_343;
static uint32_t g_790 = 0xB6C3CC0DL;
static uint16_t g_824 = 0xC78CL;
static const struct S1 *g_988 = &g_96;
static const struct S1 **g_987 = &g_988;
static const int8_t g_1109[3] = {0xBDL,0xBDL,0xBDL};
static const int8_t *g_1108[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const int8_t **g_1107[5][5] = {{(void*)0,&g_1108[4],(void*)0,(void*)0,&g_1108[4]},{(void*)0,&g_1108[4],&g_1108[4],(void*)0,&g_1108[4]},{&g_1108[4],&g_1108[4],&g_1108[4],&g_1108[4],&g_1108[4]},{&g_1108[4],(void*)0,&g_1108[4],&g_1108[4],(void*)0},{&g_1108[4],(void*)0,(void*)0,&g_1108[4],(void*)0}};
static struct S0 **g_1113 = &g_280;
static struct S0 ***g_1112 = &g_1113;
static int32_t *g_1221 = &g_58;
static int32_t **g_1220 = &g_1221;
static union U2 g_1240[5][4] = {{{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL},{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL}},{{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL},{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL}},{{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL},{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL}},{{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL},{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL}},{{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL},{18446744073709551614UL},{0x5C6C9D9DA2DA6E6BLL}}};
static uint16_t g_1252 = 0UL;
static union U2 ***g_1273 = &g_768;
static uint64_t g_1284 = 18446744073709551615UL;
static int64_t * const **g_1348 = (void*)0;
static int8_t g_1360 = 0L;
static int16_t g_1361 = 0x0DD6L;
static int16_t g_1363 = 0L;
static uint32_t g_1364[7] = {0xFC2953ABL,0xFC2953ABL,0xFC2953ABL,0xFC2953ABL,0xFC2953ABL,0xFC2953ABL,0xFC2953ABL};
static int8_t *g_1423[7] = {&g_102.f1,&g_102.f1,&g_6[1],&g_102.f1,&g_102.f1,&g_6[1],&g_102.f1};
static union U2 ***g_1498 = (void*)0;
static int32_t g_1634 = 0xF1A8DA42L;
static uint64_t g_1637[6] = {0x8EFB3299B83BAD53LL,0x86D7D0DDD6E77A10LL,0x86D7D0DDD6E77A10LL,0x8EFB3299B83BAD53LL,0x86D7D0DDD6E77A10LL,0x86D7D0DDD6E77A10LL};
static int32_t g_1652 = 0x5DDA1337L;
static int32_t *g_1788 = &g_51;
static uint64_t *g_1874 = &g_1637[0];
static uint64_t **g_1873 = &g_1874;
static uint64_t ** const *g_1872 = &g_1873;
static uint32_t g_2038 = 0xB187DAA9L;
static union U3 g_2108 = {0x261EL};
static union U3 *g_2107[5][6] = {{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_2108,&g_362,&g_362,&g_2108,(void*)0,&g_2108},{&g_2108,(void*)0,&g_2108,&g_362,&g_362,&g_2108},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,(void*)0,&g_362,&g_362,(void*)0,&g_362}};
static uint8_t * const *g_2164 = (void*)0;
static struct S1 ****g_2229 = (void*)0;
static int8_t g_2297 = 0xADL;
static int8_t **g_2307 = (void*)0;
static int32_t g_2320 = (-2L);
static int8_t g_2321 = 0x6EL;
static uint32_t g_2322 = 0xE468A07CL;
static uint8_t **g_2344 = (void*)0;
static uint8_t *g_2378 = &g_2108.f1;
static uint8_t **g_2377 = &g_2378;
static const struct S1 * const *g_2390 = &g_988;
static const struct S1 * const **g_2389 = &g_2390;
static uint64_t ***g_2401 = &g_1873;
static const struct S0 g_2464[4] = {{1865,0x39425527E9D26971LL},{1865,0x39425527E9D26971LL},{1865,0x39425527E9D26971LL},{1865,0x39425527E9D26971LL}};
static int8_t ** const *g_2497[3][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}}};
static int8_t ** const **g_2496 = &g_2497[2][0][0];



static uint16_t  func_1(void);
static int8_t * func_7(int32_t  p_8, int8_t * p_9, uint16_t  p_10);
static int8_t * func_16(int8_t  p_17, int8_t * p_18, int8_t * p_19);
static uint8_t  func_22(const int8_t * p_23, union U2  p_24, int32_t  p_25, uint8_t  p_26);
static union U2  func_27(int32_t * const  p_28, int32_t * p_29, int32_t * p_30);
static int32_t * func_31(int16_t  p_32, int64_t  p_33);
static int32_t  func_39(int32_t * p_40, int64_t  p_41);
static int32_t * func_42(struct S1  p_43);




static uint16_t  func_1(void)
{ 
    int64_t l_11 = (-1L);
    struct S0 l_20 = {1562,-1L};
    int8_t *l_21 = &g_6[0];
    int8_t *l_2133[6] = {&g_1240[1][1].f1,&g_1240[1][1].f1,&g_1240[1][1].f1,&g_1240[1][1].f1,&g_1240[1][1].f1,&g_1240[1][1].f1};
    uint32_t l_2163 = 0UL;
    uint16_t *l_2171 = &g_773;
    int32_t *l_2176 = (void*)0;
    uint64_t **l_2220 = &g_1874;
    uint32_t l_2221 = 1UL;
    int8_t l_2238 = 0xACL;
    struct S0 ***l_2240 = &g_1113;
    uint64_t ***l_2247 = (void*)0;
    int32_t l_2262 = 1L;
    int32_t l_2264 = (-8L);
    struct S1 *l_2278 = &g_667;
    int32_t l_2308 = (-5L);
    uint8_t *l_2346 = (void*)0;
    uint8_t **l_2345 = &l_2346;
    uint8_t **l_2348[2];
    int32_t l_2376 = 0x14DAAE8DL;
    uint32_t l_2399[3];
    int64_t **l_2402 = &g_424;
    int64_t ***l_2403 = &g_423;
    int32_t *l_2404 = &g_343;
    int32_t *l_2405 = &l_2376;
    int32_t *l_2406 = &g_96.f5;
    int32_t *l_2407 = &l_2376;
    int32_t *l_2408[6][1];
    uint32_t l_2409[7][6][2] = {{{0UL,0UL},{4294967294UL,0x2D6D572AL},{0x338FB5A0L,0x7D6A2031L},{0xD46BF4A8L,0x5F115DA4L},{0x3FB7CDA3L,0xD46BF4A8L},{4294967295UL,1UL}},{{4294967295UL,0xD46BF4A8L},{0x3FB7CDA3L,0x5F115DA4L},{0xD46BF4A8L,0x7D6A2031L},{0x338FB5A0L,0x2D6D572AL},{4294967294UL,0UL},{0UL,0x3FB7CDA3L}},{{4294967295UL,0x3FB7CDA3L},{0UL,0UL},{4294967294UL,0x2D6D572AL},{0x338FB5A0L,0x7D6A2031L},{0xD46BF4A8L,0x5F115DA4L},{0x3FB7CDA3L,0xD46BF4A8L}},{{4294967295UL,1UL},{4294967295UL,0xD46BF4A8L},{0x3FB7CDA3L,0x5F115DA4L},{0xD46BF4A8L,0x7D6A2031L},{0x338FB5A0L,0x2D6D572AL},{4294967294UL,0UL}},{{0UL,0x3FB7CDA3L},{4294967295UL,0x3FB7CDA3L},{0UL,0UL},{4294967294UL,0x2D6D572AL},{0x338FB5A0L,0x7D6A2031L},{0xD46BF4A8L,0x5F115DA4L}},{{0x3FB7CDA3L,0xD46BF4A8L},{4294967295UL,0xD46BF4A8L},{0x7D6A2031L,4294967294UL},{4294967295UL,0xDDDEB7D8L},{4294967294UL,0x3FB7CDA3L},{4294967295UL,0x5F115DA4L}},{{0x2D6D572AL,1UL},{1UL,4294967295UL},{0UL,4294967295UL},{1UL,1UL},{0x2D6D572AL,0x5F115DA4L},{4294967295UL,0x3FB7CDA3L}}};
    uint32_t l_2434 = 0xB9F2CFB6L;
    union U2 **l_2478[6];
    int32_t l_2484 = (-10L);
    int16_t l_2512 = 0x2FD1L;
    struct S0 l_2535 = {142,0xC7F6F1940B1ADA1DLL};
    uint32_t l_2548 = 18446744073709551614UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2348[i] = &l_2346;
    for (i = 0; i < 3; i++)
        l_2399[i] = 0x377D1C13L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_2408[i][j] = (void*)0;
    }
    for (i = 0; i < 6; i++)
        l_2478[i] = &g_769;
    for (g_2 = (-15); (g_2 == 23); g_2++)
    { 
        int32_t *l_12 = (void*)0;
        int32_t *l_13 = (void*)0;
        int32_t *l_14 = &g_15[2][0];
        int32_t l_614 = (-3L);
        int8_t *l_643 = (void*)0;
        int8_t **l_1195 = (void*)0;
        int8_t **l_1196 = &l_21;
        union U3 l_2148 = {9UL};
        int64_t l_2166[6] = {0x1CE0EA8CCD59ACB6LL,0x1CE0EA8CCD59ACB6LL,0x1CE0EA8CCD59ACB6LL,0x1CE0EA8CCD59ACB6LL,0x1CE0EA8CCD59ACB6LL,0x1CE0EA8CCD59ACB6LL};
        union U2 l_2175 = {0xEAD651F9A4F4ED9CLL};
        uint64_t l_2196[2][2][3] = {{{0x7E157A85118E9861LL,18446744073709551611UL,0x7E157A85118E9861LL},{0x7E157A85118E9861LL,18446744073709551611UL,0x7E157A85118E9861LL}},{{0x7E157A85118E9861LL,18446744073709551611UL,0x7E157A85118E9861LL},{0x7E157A85118E9861LL,18446744073709551611UL,0x7E157A85118E9861LL}}};
        int32_t l_2219 = 0xC1AB832EL;
        int8_t l_2222 = 0L;
        const uint16_t l_2242 = 65527UL;
        int32_t l_2263 = 0x327FD116L;
        int32_t l_2265 = (-1L);
        int32_t l_2270 = (-4L);
        int32_t **l_2277[1][7] = {{&l_2176,&l_2176,&l_2176,&l_2176,&l_2176,&l_2176,&l_2176}};
        uint64_t l_2295 = 0xDFDB041D61B69005LL;
        uint64_t l_2309 = 0UL;
        int16_t l_2313[2][4] = {{(-5L),(-5L),1L,(-5L)},{(-5L),0xA287L,0xA287L,(-5L)}};
        struct S0 l_2314 = {442,0x01F8132BE6D1746FLL};
        uint8_t **l_2347 = &l_2346;
        uint32_t l_2351 = 0x745C5BB0L;
        uint64_t ****l_2400[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2400[i] = &l_2247;
    }
    (*l_2403) = l_2402;
    ++l_2409[3][0][0];
    for (g_502.f4 = 0; (g_502.f4 != 6); g_502.f4 = safe_add_func_uint16_t_u_u(g_502.f4, 6))
    { 
        uint8_t l_2426[5] = {254UL,254UL,254UL,254UL,254UL};
        uint64_t ****l_2427 = &l_2247;
        struct S1 l_2454[3][3][4] = {{{{0x0CDFC88F8C125104LL,0x636C55944B89AB21LL,0x8312L,216,0x9B6AL,0xA375B8AAL,{2791,5L},0xB38DL},{1UL,0UL,0xD395L,50,65532UL,-4L,{1725,0x6B2B48388343CC90LL},0x4867L},{1UL,0UL,0xD395L,50,65532UL,-4L,{1725,0x6B2B48388343CC90LL},0x4867L},{0x0CDFC88F8C125104LL,0x636C55944B89AB21LL,0x8312L,216,0x9B6AL,0xA375B8AAL,{2791,5L},0xB38DL}},{{0xA350D549ECA2F01BLL,0x8DB736132469D7E7LL,0L,224,65533UL,1L,{1824,0x72CA7C10F7CF3461LL},0x2277L},{0x89AD741C7262DFFDLL,18446744073709551613UL,0L,159,7UL,0L,{35,0x80119DA813D15A9CLL},0x8C7FL},{1UL,0UL,0xD395L,50,65532UL,-4L,{1725,0x6B2B48388343CC90LL},0x4867L},{1UL,0xB04E518A1B9CCF31LL,-3L,66,0x444AL,0x7EE634B2L,{23,6L},-1L}},{{0x0CDFC88F8C125104LL,0x636C55944B89AB21LL,0x8312L,216,0x9B6AL,0xA375B8AAL,{2791,5L},0xB38DL},{0xC53A74D3E12670A2LL,0x73525FB00830B306LL,0x29FFL,244,1UL,0x70DE910DL,{-1128,-1L},0x7D27L},{0x120B4C8DAE2F31F1LL,0xEEA04F0C4F71C144LL,2L,226,0x3E75L,0L,{564,-1L},-1L},{0xC53A74D3E12670A2LL,0x73525FB00830B306LL,0x29FFL,244,1UL,0x70DE910DL,{-1128,-1L},0x7D27L}}},{{{0xC53A74D3E12670A2LL,0x73525FB00830B306LL,0x29FFL,244,1UL,0x70DE910DL,{-1128,-1L},0x7D27L},{1UL,0UL,0xD395L,50,65532UL,-4L,{1725,0x6B2B48388343CC90LL},0x4867L},{0xA350D549ECA2F01BLL,0x8DB736132469D7E7LL,0L,224,65533UL,1L,{1824,0x72CA7C10F7CF3461LL},0x2277L},{0xC53A74D3E12670A2LL,0x73525FB00830B306LL,0x29FFL,244,1UL,0x70DE910DL,{-1128,-1L},0x7D27L}},{{0xA350D549ECA2F01BLL,0x8DB736132469D7E7LL,0L,224,65533UL,1L,{1824,0x72CA7C10F7CF3461LL},0x2277L},{0xC53A74D3E12670A2LL,0x73525FB00830B306LL,0x29FFL,244,1UL,0x70DE910DL,{-1128,-1L},0x7D27L},{1UL,0xB04E518A1B9CCF31LL,-3L,66,0x444AL,0x7EE634B2L,{23,6L},-1L},{1UL,0xB04E518A1B9CCF31LL,-3L,66,0x444AL,0x7EE634B2L,{23,6L},-1L}},{{0x89AD741C7262DFFDLL,18446744073709551613UL,0L,159,7UL,0L,{35,0x80119DA813D15A9CLL},0x8C7FL},{0x89AD741C7262DFFDLL,18446744073709551613UL,0L,159,7UL,0L,{35,0x80119DA813D15A9CLL},0x8C7FL},{0x120B4C8DAE2F31F1LL,0xEEA04F0C4F71C144LL,2L,226,0x3E75L,0L,{564,-1L},-1L},{0x0CDFC88F8C125104LL,0x636C55944B89AB21LL,0x8312L,216,0x9B6AL,0xA375B8AAL,{2791,5L},0xB38DL}}},{{{0x89AD741C7262DFFDLL,18446744073709551613UL,0L,159,7UL,0L,{35,0x80119DA813D15A9CLL},0x8C7FL},{1UL,0UL,0xD395L,50,65532UL,-4L,{1725,0x6B2B48388343CC90LL},0x4867L},{1UL,0xB04E518A1B9CCF31LL,-3L,66,0x444AL,0x7EE634B2L,{23,6L},-1L},{0x89AD741C7262DFFDLL,18446744073709551613UL,0L,159,7UL,0L,{35,0x80119DA813D15A9CLL},0x8C7FL}},{{0xA350D549ECA2F01BLL,0x8DB736132469D7E7LL,0L,224,65533UL,1L,{1824,0x72CA7C10F7CF3461LL},0x2277L},{0x0CDFC88F8C125104LL,0x636C55944B89AB21LL,0x8312L,216,0x9B6AL,0xA375B8AAL,{2791,5L},0xB38DL},{0xA350D549ECA2F01BLL,0x8DB736132469D7E7LL,0L,224,65533UL,1L,{1824,0x72CA7C10F7CF3461LL},0x2277L},{1UL,0xB04E518A1B9CCF31LL,-3L,66,0x444AL,0x7EE634B2L,{23,6L},-1L}},{{0xC53A74D3E12670A2LL,0x73525FB00830B306LL,0x29FFL,244,1UL,0x70DE910DL,{-1128,-1L},0x7D27L},{0x0CDFC88F8C125104LL,0x636C55944B89AB21LL,0x8312L,216,0x9B6AL,0xA375B8AAL,{2791,5L},0xB38DL},{0x120B4C8DAE2F31F1LL,0xEEA04F0C4F71C144LL,2L,226,0x3E75L,0L,{564,-1L},-1L},{0x89AD741C7262DFFDLL,18446744073709551613UL,0L,159,7UL,0L,{35,0x80119DA813D15A9CLL},0x8C7FL}}}};
        const uint64_t *l_2472 = &g_272.f1;
        const uint64_t ** const l_2471 = &l_2472;
        const uint64_t ** const *l_2470 = &l_2471;
        union U2 l_2483 = {18446744073709551615UL};
        uint32_t l_2507 = 0UL;
        int32_t l_2546 = 0x846502CAL;
        int32_t l_2547[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2547[i] = (-5L);
        for (g_102.f1 = 0; (g_102.f1 >= 0); g_102.f1 -= 1)
        { 
            uint32_t l_2423 = 18446744073709551615UL;
            const union U3 l_2428 = {65535UL};
            for (g_502.f5 = 1; (g_502.f5 >= 0); g_502.f5 -= 1)
            { 
                int64_t *l_2429 = &g_399[1];
                int8_t l_2430 = 0x9FL;
                int i, j;
                (*l_2405) = ((g_172[(g_102.f1 + 1)] & ((((18446744073709551608UL ^ ((*l_2429) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((!(safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(l_2423, ((*g_424) = (safe_mul_func_int16_t_s_s(l_2426[2], (l_2427 != &g_2401)))))), (l_2428 , (-1L))))) == 3UL) | (-2L)) & l_2423), g_172[(g_102.f1 + 1)])), g_399[1])))) && l_2428.f0) || (*l_2406)) < l_2430)) > l_2426[2]);
            }
        }
        (**g_1112) = (**g_1112);
        (**g_1273) = (void*)0;
    }
    return (*l_2406);
}



static int8_t * func_7(int32_t  p_8, int8_t * p_9, uint16_t  p_10)
{ 
    int16_t l_1232[5] = {0x6272L,0x6272L,0x6272L,0x6272L,0x6272L};
    int32_t l_1234 = 2L;
    int32_t l_1235 = 0x95FF778FL;
    int32_t l_1243[2];
    int8_t l_1272 = (-6L);
    struct S1 l_1295 = {0x633B5855FD26009BLL,0x2ED7E5A479ECCCD4LL,0x901FL,37,65535UL,0L,{1781,0xE04B97F57146B66FLL},0x3151L};
    union U3 l_1305[6] = {{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}};
    union U2 l_1312 = {0UL};
    int8_t **l_1328 = &g_5[4][0];
    int8_t ***l_1327 = &l_1328;
    struct S0 **l_1334 = &g_280;
    int64_t **l_1394 = &g_424;
    int32_t l_1399 = 0x7D74E094L;
    int32_t *l_1426 = &l_1295.f5;
    int32_t l_1480 = (-1L);
    struct S1 **l_1530[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t *l_1595[7][5];
    const union U2 ***l_1597 = (void*)0;
    int16_t l_1619 = 1L;
    uint32_t l_1685 = 18446744073709551615UL;
    int32_t l_1694[2];
    int8_t l_1707 = 0xA2L;
    uint64_t * const *l_1714 = &l_1595[6][4];
    uint64_t * const ** const l_1713 = &l_1714;
    int16_t l_1757 = 0x42F6L;
    int8_t l_1848 = 0x2AL;
    uint16_t l_1849[5][7] = {{0x7757L,0xCDC7L,65530UL,7UL,0xCDC7L,0UL,65532UL},{0x3266L,0x7757L,0UL,0x3266L,65532UL,0x3266L,0UL},{0x73C9L,0x73C9L,0UL,7UL,0x7757L,0x6C86L,0x73C9L},{0x73C9L,0UL,65530UL,0x7757L,0UL,0UL,0x7757L},{0x3266L,65532UL,0x3266L,0UL,0x7757L,0x3266L,0xCDC7L}};
    const uint16_t *l_1881 = &l_1295.f4;
    const uint16_t **l_1880[7];
    const struct S0 *l_1917[3][7][7];
    const struct S0 **l_1916 = &l_1917[1][0][5];
    const struct S0 ***l_1915 = &l_1916;
    const struct S0 ****l_1918 = &l_1915;
    struct S0 ****l_1919 = &g_1112;
    int8_t l_1940 = 1L;
    int8_t *l_1985[3];
    int32_t l_2011 = 0x48440018L;
    uint32_t l_2083 = 1UL;
    uint64_t ***l_2098 = &g_1873;
    uint16_t l_2101 = 2UL;
    uint16_t l_2131 = 2UL;
    int32_t **l_2132 = &g_789;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1243[i] = 0xC97A3E8BL;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
            l_1595[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_1694[i] = (-1L);
    for (i = 0; i < 7; i++)
        l_1880[i] = &l_1881;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
                l_1917[i][j][k] = &g_667.f6;
        }
    }
    for (i = 0; i < 3; i++)
        l_1985[i] = &g_656;
    for (g_61.f1 = (-24); (g_61.f1 <= (-26)); g_61.f1--)
    { 
        int16_t *l_1202[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_1203 = 0xBE6B2D6BL;
        int32_t l_1204 = 1L;
        int32_t l_1205 = 0x76971806L;
        int32_t *l_1206 = &g_60;
        struct S0 l_1226[6][5][7] = {{{{2689,4L},{-2163,0L},{1584,0L},{-2163,0L},{2689,4L},{2393,0xEB97CE742EE3AB1CLL},{483,0xB2D7B60AD45CB7BBLL}},{{2065,0xBBD1BCCB66AF7FECLL},{-1902,1L},{2674,0x10BDE20CFD51A84DLL},{-2483,0x705A14A8F403D01CLL},{1380,-9L},{-2649,1L},{1380,-9L}},{{205,0x84C54C606FA391E7LL},{-2859,2L},{-2859,2L},{205,0x84C54C606FA391E7LL},{-2163,0L},{728,8L},{1581,3L}},{{2065,0xBBD1BCCB66AF7FECLL},{-2483,0x705A14A8F403D01CLL},{-134,0L},{-2550,7L},{-2183,0xCD4C478189869A83LL},{1324,0L},{-2135,0x1B89A5D07F712BABLL}},{{2689,4L},{483,0xB2D7B60AD45CB7BBLL},{2689,4L},{728,8L},{2610,-1L},{-92,0xAA25AEC27F8D8FB4LL},{1581,3L}}},{{{-1206,0xFA1AE62BEAF2D5F1LL},{2290,-1L},{1944,0L},{-2649,1L},{2065,0xBBD1BCCB66AF7FECLL},{-2649,1L},{1944,0L}},{{-2163,0L},{-2163,0L},{483,0xB2D7B60AD45CB7BBLL},{728,8L},{1584,0L},{-2859,2L},{-2765,-8L}},{{-1565,4L},{2115,0xC4CE3B8225F8B3AELL},{-2135,0x1B89A5D07F712BABLL},{1324,0L},{-2183,0xCD4C478189869A83LL},{-2550,7L},{-134,0L}},{{205,0x84C54C606FA391E7LL},{-732,0x32B338893DF743ADLL},{-2163,0L},{-92,0xAA25AEC27F8D8FB4LL},{1584,0L},{2393,0xEB97CE742EE3AB1CLL},{728,8L}},{{-2135,0x1B89A5D07F712BABLL},{-2225,-8L},{2065,0xBBD1BCCB66AF7FECLL},{2115,0xC4CE3B8225F8B3AELL},{2065,0xBBD1BCCB66AF7FECLL},{-2225,-8L},{-2135,0x1B89A5D07F712BABLL}}},{{{728,8L},{2393,0xEB97CE742EE3AB1CLL},{1584,0L},{-92,0xAA25AEC27F8D8FB4LL},{-2163,0L},{-732,0x32B338893DF743ADLL},{205,0x84C54C606FA391E7LL}},{{-134,0L},{-2550,7L},{-2183,0xCD4C478189869A83LL},{1324,0L},{-2135,0x1B89A5D07F712BABLL},{2115,0xC4CE3B8225F8B3AELL},{-1565,4L}},{{-2765,-8L},{-2859,2L},{1584,0L},{728,8L},{483,0xB2D7B60AD45CB7BBLL},{-2163,0L},{-2163,0L}},{{1944,0L},{-2649,1L},{2065,0xBBD1BCCB66AF7FECLL},{-2649,1L},{1944,0L},{2290,-1L},{-1206,0xFA1AE62BEAF2D5F1LL}},{{2689,4L},{-2859,2L},{-2163,0L},{2393,0xEB97CE742EE3AB1CLL},{-92,0xAA25AEC27F8D8FB4LL},{-2765,-8L},{-92,0xAA25AEC27F8D8FB4LL}}},{{{2674,0x10BDE20CFD51A84DLL},{-2550,7L},{-2135,0x1B89A5D07F712BABLL},{2240,1L},{-2274,0L},{-15,0xFF09B79336D2BAFALL},{1380,-9L}},{{2689,4L},{2393,0xEB97CE742EE3AB1CLL},{483,0xB2D7B60AD45CB7BBLL},{2610,-1L},{205,0x84C54C606FA391E7LL},{205,0x84C54C606FA391E7LL},{2610,-1L}},{{1944,0L},{-2225,-8L},{1944,0L},{-15,0xFF09B79336D2BAFALL},{-134,0L},{1324,0L},{1380,-9L}},{{-2765,-8L},{-732,0x32B338893DF743ADLL},{-92,0xAA25AEC27F8D8FB4LL},{483,0xB2D7B60AD45CB7BBLL},{1581,3L},{483,0xB2D7B60AD45CB7BBLL},{-92,0xAA25AEC27F8D8FB4LL}},{{-134,0L},{2115,0xC4CE3B8225F8B3AELL},{-2274,0L},{-2483,0x705A14A8F403D01CLL},{2524,3L},{1324,0L},{-1206,0xFA1AE62BEAF2D5F1LL}}},{{{728,8L},{-2163,0L},{205,0x84C54C606FA391E7LL},{-2859,2L},{-2859,2L},{205,0x84C54C606FA391E7LL},{-2163,0L}},{{-2135,0x1B89A5D07F712BABLL},{2290,-1L},{-134,0L},{-1902,1L},{2524,3L},{-15,0xFF09B79336D2BAFALL},{-1565,4L}},{{205,0x84C54C606FA391E7LL},{-2765,-8L},{1581,3L},{-2163,0L},{1581,3L},{-2765,-8L},{205,0x84C54C606FA391E7LL}},{{-1565,4L},{-15,0xFF09B79336D2BAFALL},{2524,3L},{-1902,1L},{-134,0L},{2290,-1L},{-2135,0x1B89A5D07F712BABLL}},{{-2163,0L},{205,0x84C54C606FA391E7LL},{-2859,2L},{-2859,2L},{205,0x84C54C606FA391E7LL},{-2163,0L},{728,8L}}},{{{-1206,0xFA1AE62BEAF2D5F1LL},{1324,0L},{2524,3L},{-2483,0x705A14A8F403D01CLL},{-2274,0L},{2115,0xC4CE3B8225F8B3AELL},{-134,0L}},{{-92,0xAA25AEC27F8D8FB4LL},{483,0xB2D7B60AD45CB7BBLL},{1581,3L},{483,0xB2D7B60AD45CB7BBLL},{-92,0xAA25AEC27F8D8FB4LL},{-732,0x32B338893DF743ADLL},{-2765,-8L}},{{1380,-9L},{1324,0L},{-134,0L},{-15,0xFF09B79336D2BAFALL},{1944,0L},{-2225,-8L},{1944,0L}},{{2610,-1L},{205,0x84C54C606FA391E7LL},{205,0x84C54C606FA391E7LL},{2610,-1L},{483,0xB2D7B60AD45CB7BBLL},{2393,0xEB97CE742EE3AB1CLL},{2689,4L}},{{1380,-9L},{-15,0xFF09B79336D2BAFALL},{-2274,0L},{2240,1L},{-2135,0x1B89A5D07F712BABLL},{-2550,7L},{2674,0x10BDE20CFD51A84DLL}}}};
        uint8_t l_1236 = 0x27L;
        int8_t l_1242 = 0xA3L;
        int32_t l_1247 = 0x44F0F0F0L;
        int32_t l_1249 = (-1L);
        int64_t l_1251 = (-4L);
        struct S1 **l_1258 = &g_501[0];
        struct S1 ***l_1257 = &l_1258;
        uint32_t l_1270[1][3][2] = {{{3UL,0xEE69428CL},{3UL,3UL},{0xEE69428CL,3UL}}};
        int64_t l_1282[6][4][6] = {{{0x90B23C58A294BC71LL,0xFCC9EFF0BFFD0088LL,0x3E00BB21CAA0A9DBLL,0L,0L,0x3E00BB21CAA0A9DBLL},{0xDD923DF2629211ADLL,0xDD923DF2629211ADLL,3L,4L,0x557D989C79A3A727LL,0x90B23C58A294BC71LL},{0xDD923DF2629211ADLL,4L,0xFCC9EFF0BFFD0088LL,0L,0x90B23C58A294BC71LL,3L},{0x90B23C58A294BC71LL,0xDD923DF2629211ADLL,0xFCC9EFF0BFFD0088LL,0xFCC9EFF0BFFD0088LL,0xDD923DF2629211ADLL,0x90B23C58A294BC71LL}},{{0x557D989C79A3A727LL,0xFCC9EFF0BFFD0088LL,3L,0L,0xDD923DF2629211ADLL,0x3E00BB21CAA0A9DBLL},{0L,0xDD923DF2629211ADLL,0x3E00BB21CAA0A9DBLL,4L,0x90B23C58A294BC71LL,0x90B23C58A294BC71LL},{0L,4L,4L,0L,0x557D989C79A3A727LL,3L},{0x557D989C79A3A727LL,0xDD923DF2629211ADLL,4L,0xFCC9EFF0BFFD0088LL,0L,0x90B23C58A294BC71LL}},{{0x90B23C58A294BC71LL,0xFCC9EFF0BFFD0088LL,0x3E00BB21CAA0A9DBLL,0L,0L,0x3E00BB21CAA0A9DBLL},{0xDD923DF2629211ADLL,0xDD923DF2629211ADLL,3L,4L,0x557D989C79A3A727LL,0x90B23C58A294BC71LL},{0xDD923DF2629211ADLL,4L,0xFCC9EFF0BFFD0088LL,0L,0x90B23C58A294BC71LL,3L},{0x90B23C58A294BC71LL,0xDD923DF2629211ADLL,0xFCC9EFF0BFFD0088LL,0xFCC9EFF0BFFD0088LL,0xDD923DF2629211ADLL,0x90B23C58A294BC71LL}},{{0x557D989C79A3A727LL,0xFCC9EFF0BFFD0088LL,3L,0L,0xDD923DF2629211ADLL,0x3E00BB21CAA0A9DBLL},{0L,0xDD923DF2629211ADLL,0x3E00BB21CAA0A9DBLL,4L,0x90B23C58A294BC71LL,0x90B23C58A294BC71LL},{0L,4L,4L,0L,0x557D989C79A3A727LL,3L},{0x557D989C79A3A727LL,0xDD923DF2629211ADLL,4L,0xFCC9EFF0BFFD0088LL,0L,0x90B23C58A294BC71LL}},{{0x90B23C58A294BC71LL,0xFCC9EFF0BFFD0088LL,0x3E00BB21CAA0A9DBLL,0L,0L,0x3E00BB21CAA0A9DBLL},{0xDD923DF2629211ADLL,0xDD923DF2629211ADLL,3L,4L,0x557D989C79A3A727LL,0x90B23C58A294BC71LL},{0xDD923DF2629211ADLL,4L,0xFCC9EFF0BFFD0088LL,0L,0x90B23C58A294BC71LL,3L},{0x90B23C58A294BC71LL,0xDD923DF2629211ADLL,0xFCC9EFF0BFFD0088LL,0xFCC9EFF0BFFD0088LL,0xDD923DF2629211ADLL,0x90B23C58A294BC71LL}},{{0x557D989C79A3A727LL,0xFCC9EFF0BFFD0088LL,3L,0L,0xDD923DF2629211ADLL,0x3E00BB21CAA0A9DBLL},{0L,0xDD923DF2629211ADLL,0x3E00BB21CAA0A9DBLL,4L,0x90B23C58A294BC71LL,0x90B23C58A294BC71LL},{0L,4L,4L,0L,0x557D989C79A3A727LL,3L},{0x557D989C79A3A727LL,0xDD923DF2629211ADLL,4L,0xFCC9EFF0BFFD0088LL,0L,0x90B23C58A294BC71LL}}};
        int32_t l_1283[4];
        int32_t **l_1296 = (void*)0;
        int8_t **l_1325 = &g_5[0][2];
        int8_t ***l_1324 = &l_1325;
        const int64_t **l_1395 = (void*)0;
        const int64_t * const l_1407[2][1][2] = {{{&l_1251,&l_1251}},{{&l_1251,&l_1251}}};
        const int64_t * const *l_1406 = &l_1407[0][0][1];
        const int64_t * const **l_1405 = &l_1406;
        const int64_t * const *** const l_1404 = &l_1405;
        uint64_t *l_1410 = &g_502.f0;
        uint64_t **l_1409 = &l_1410;
        uint64_t ***l_1408 = &l_1409;
        uint8_t *l_1421 = (void*)0;
        int8_t l_1456 = 0xF6L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1283[i] = 7L;
        (*l_1206) ^= (p_10 <= ((*g_789) = ((safe_add_func_int64_t_s_s(((safe_unary_minus_func_int32_t_s((g_348 | ((l_1204 = ((*g_769) , (l_1203 ^= ((&g_95 == (g_667.f5 , (void*)0)) == (*g_789))))) , p_10)))) < p_10), p_8)) > l_1205)));
        for (g_667.f0 = (-12); (g_667.f0 >= 5); g_667.f0 = safe_add_func_int8_t_s_s(g_667.f0, 3))
        { 
            (*l_1206) ^= 0xBFC1A129L;
        }
        for (p_8 = 0; (p_8 != 13); p_8++)
        { 
            union U3 l_1219 = {0x11EFL};
            int32_t l_1227 = 2L;
            int32_t l_1230 = 1L;
            int32_t l_1231[5][5] = {{0L,(-9L),0L,0L,(-9L)},{1L,1L,1L,1L,1L},{(-9L),(-9L),0L,(-9L),(-9L)},{1L,1L,1L,1L,1L},{(-9L),0L,0L,(-9L),0L}};
            int8_t *l_1262[1][5];
            struct S1 **l_1263 = &g_501[1];
            uint8_t *l_1271 = &g_362.f1;
            uint64_t l_1287[2];
            const struct S0 *l_1293 = &g_61;
            const struct S0 **l_1292 = &l_1293;
            int32_t *l_1294 = &l_1205;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1262[i][j] = &g_1240[1][1].f1;
            }
            for (i = 0; i < 2; i++)
                l_1287[i] = 0x60B772EDA71AB4B3LL;
            for (g_567 = (-27); (g_567 > 23); g_567 = safe_add_func_uint16_t_u_u(g_567, 8))
            { 
                struct S0 *** const l_1222 = (void*)0;
                uint8_t *l_1223 = (void*)0;
                uint8_t *l_1224 = &g_348;
                int32_t l_1225 = 0x1828B32DL;
                int32_t l_1233 = 1L;
                union U2 *l_1239 = &g_1240[1][1];
                uint32_t l_1244 = 4294967290UL;
                int32_t l_1248 = 0xB27A2829L;
                int32_t l_1250[2];
                struct S1 ****l_1259 = &l_1257;
                int i;
                for (i = 0; i < 2; i++)
                    l_1250[i] = 0L;
                if ((safe_div_func_uint8_t_u_u((((*l_1224) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((l_1219 , (*p_9)), ((g_1220 != (void*)0) & (l_1222 != (void*)0)))), 13))) > (l_1225 & g_502.f6.f0)), (*p_9))))
                { 
                    int32_t l_1228 = 0xBE68635FL;
                    int32_t *l_1229[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1229[i] = &g_667.f5;
                    (*l_1206) ^= (*g_789);
                    l_1226[2][0][2] = (***g_1112);
                    l_1236++;
                    (*g_789) = p_10;
                    l_1239 = (*g_768);
                }
                else
                { 
                    int32_t *l_1241[7] = {&g_272.f5,&g_272.f5,&g_272.f5,&g_272.f5,&g_272.f5,&g_272.f5,&g_272.f5};
                    int i;
                    (***g_1112) = (***g_1112);
                    (*g_789) = (-1L);
                    --l_1244;
                    g_1252++;
                    (*g_789) &= (safe_div_func_int8_t_s_s(l_1230, g_773));
                }
                (*l_1259) = l_1257;
            }
            l_1227 |= ((((((safe_lshift_func_int8_t_s_s(((*p_9) |= l_1232[3]), (l_1230 ^= 0x38L))) , l_1263) != (*l_1257)) <= (*l_1206)) , (((*l_1271) &= (safe_sub_func_int64_t_s_s(((((0x89F070E7902AE5AFLL == (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(l_1270[0][1][1], g_96.f0)), 0L))) < 0L) <= p_8) & l_1232[4]), p_10))) <= l_1272)) & (*l_1206));
            if ((*l_1206))
            { 
                if ((*l_1206))
                    break;
            }
            else
            { 
                int32_t *l_1275 = (void*)0;
                struct S0 ***l_1276 = &g_1113;
                int32_t l_1279 = (-1L);
                int32_t l_1280 = 0x85D91B21L;
                int32_t l_1281 = 0x6C913FF5L;
                for (g_502.f4 = 0; (g_502.f4 <= 5); g_502.f4 += 1)
                { 
                    int32_t *l_1274 = &l_1247;
                    (*l_1206) |= ((void*)0 != g_1273);
                    l_1275 = l_1274;
                    return &g_6[1];
                }
                if (p_8)
                    break;
                if (((void*)0 == l_1276))
                { 
                    int32_t *l_1277 = &l_1235;
                    int32_t *l_1278[5][3][2] = {{{&l_1243[1],&l_1243[1]},{(void*)0,&g_60},{&l_1231[2][0],(void*)0}},{{&g_60,&l_1243[1]},{&g_60,(void*)0},{&l_1231[2][0],&g_60}},{{(void*)0,&l_1243[1]},{&l_1243[1],&l_1243[1]},{&l_1231[2][0],&l_1243[1]}},{{&l_1243[1],&l_1243[1]},{(void*)0,&l_1227},{&l_1243[1],&l_1243[1]}},{{&l_1227,&g_398},{&l_1227,&l_1243[1]},{&l_1243[1],&l_1227}}};
                    int i, j, k;
                    --g_1284;
                    l_1287[1]++;
                }
                else
                { 
                    return &g_6[5];
                }
            }
            (*l_1294) &= (safe_rshift_func_uint8_t_u_s((func_27(&p_8, (*g_1220), func_31(g_96.f0, l_1231[4][2])) , ((*l_1271) = ((void*)0 == l_1292))), 1));
        }
        l_1206 = func_42(l_1295);
        for (g_272.f6.f1 = (-6); (g_272.f6.f1 >= (-15)); g_272.f6.f1 = safe_sub_func_int32_t_s_s(g_272.f6.f1, 5))
        { 
            union U2 **l_1304 = &g_769;
            int64_t ** const *l_1307 = &g_423;
            int32_t l_1317 = 0x38C15B0DL;
            int32_t l_1355 = (-1L);
            int32_t l_1356[7][7] = {{(-1L),0x9AE79165L,(-1L),0x7A655DD9L,0x4E4C1B43L,0x25D7F365L,0x0DB708DCL},{(-1L),(-1L),0xD2177C82L,0x0DB708DCL,0x85C8B24EL,0x9AE79165L,0x25D7F365L},{0x25D7F365L,(-1L),1L,1L,(-1L),0x25D7F365L,9L},{(-1L),0xD2177C82L,0x85C8B24EL,1L,0x5BE146ADL,(-8L),0x4E4C1B43L},{0x16A72D42L,0x25D7F365L,3L,0x0DB708DCL,(-1L),0x0DB708DCL,3L},{0xD2177C82L,0xD2177C82L,0x9AE79165L,0x7A655DD9L,1L,(-1L),3L},{9L,(-1L),0x7A655DD9L,0xD2177C82L,3L,0x4E4C1B43L,0x4E4C1B43L}};
            uint32_t l_1357 = 0UL;
            int32_t l_1362 = (-1L);
            int32_t *l_1367[4][4][6] = {{{(void*)0,&l_1356[3][1],&g_667.f5,&l_1204,(void*)0,&g_398},{(void*)0,(void*)0,&g_667.f5,&l_1356[3][5],&g_51,&l_1249},{&l_1243[1],&l_1356[3][5],&g_398,(void*)0,(void*)0,&g_51},{(void*)0,(void*)0,&g_51,&g_2,(void*)0,(void*)0}},{{&l_1317,&g_398,(void*)0,(void*)0,&l_1205,(void*)0},{&l_1205,(void*)0,&l_1205,&l_1203,&l_1243[1],(void*)0},{&l_1204,&g_272.f5,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1356[3][1],(void*)0,&l_1356[3][5],(void*)0,(void*)0,&l_1203}},{{&l_1204,&l_1205,&g_393,&l_1203,&l_1356[3][5],&l_1356[4][4]},{&l_1205,(void*)0,&g_272.f5,(void*)0,&l_1235,&l_1243[1]},{&l_1317,&l_1243[1],&l_1356[3][1],&g_2,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_2,(void*)0}},{{&l_1243[1],&l_1356[3][5],(void*)0,&l_1356[3][5],(void*)0,&g_272.f5},{(void*)0,(void*)0,&l_1234,&l_1204,(void*)0,&l_1356[1][0]},{(void*)0,&l_1356[3][5],&l_1235,(void*)0,&g_2,(void*)0},{&g_51,(void*)0,&l_1317,&g_272.f5,(void*)0,&l_1356[3][5]}}};
            struct S1 *l_1380 = &g_667;
            struct S1 ** const l_1379[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
            struct S1 ** const *l_1378 = &l_1379[1][1];
            uint64_t ***l_1411 = (void*)0;
            uint8_t *l_1420[1];
            struct S0 ***l_1440 = &g_1113;
            struct S0 *l_1476 = &l_1226[3][0][0];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1420[i] = &g_362.f1;
            (*l_1206) |= 2L;
            for (g_404 = 0; (g_404 <= 0); g_404 += 1)
            { 
                struct S0 *l_1299 = &l_1226[2][0][2];
                (*l_1299) = (***g_1112);
            }
        }
    }
    return (**l_1327);
}



static int8_t * func_16(int8_t  p_17, int8_t * p_18, int8_t * p_19)
{ 
    uint64_t *l_650 = &g_502.f0;
    uint64_t **l_649[5];
    uint8_t l_657 = 250UL;
    struct S1 *l_666 = &g_667;
    int32_t l_681 = 1L;
    int32_t l_683 = 1L;
    uint16_t l_685[4] = {0UL,0UL,0UL,0UL};
    struct S0 l_724 = {-1874,-6L};
    int32_t **l_730 = (void*)0;
    int64_t * const *l_749[7][3][5] = {{{&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,(void*)0,(void*)0},{(void*)0,&g_424,(void*)0,&g_424,&g_424}},{{(void*)0,&g_424,&g_424,(void*)0,&g_424},{(void*)0,(void*)0,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,(void*)0,&g_424,&g_424},{&g_424,(void*)0,&g_424,&g_424,(void*)0}},{{&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,(void*)0,(void*)0,(void*)0},{&g_424,&g_424,&g_424,&g_424,&g_424}},{{(void*)0,&g_424,&g_424,(void*)0,&g_424},{&g_424,&g_424,(void*)0,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,(void*)0,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,(void*)0,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424}}};
    int64_t * const * const *l_748 = &l_749[0][0][0];
    int64_t * const * const **l_747 = &l_748;
    union U2 *l_767 = &g_102;
    union U2 **l_766[6] = {&l_767,&l_767,&l_767,&l_767,&l_767,&l_767};
    int8_t l_793 = 0xEFL;
    int32_t l_795 = (-1L);
    int32_t l_796 = 0x0318D005L;
    uint32_t l_864[5] = {0x80B17DB7L,0x80B17DB7L,0x80B17DB7L,0x80B17DB7L,0x80B17DB7L};
    int16_t l_893 = (-7L);
    int32_t l_908[4][1];
    int64_t l_941 = 1L;
    int64_t l_942 = 1L;
    int32_t l_961[7][7] = {{9L,0L,0xE7231A8AL,1L,0x443D8F79L,1L,0xE7231A8AL},{0L,0L,0x56E12069L,0xC0D690C3L,0x2E3FD488L,7L,0x919702D1L},{9L,1L,1L,1L,1L,9L,0x443D8F79L},{(-7L),0x56E12069L,(-10L),0xBA83E201L,0x2E3FD488L,0x2E3FD488L,0xBA83E201L},{0L,0x0BFCB2A0L,0L,0x7E4CE3C5L,0x443D8F79L,2L,9L},{(-10L),0x56E12069L,(-7L),7L,(-7L),0x56E12069L,(-10L)},{1L,1L,9L,0x443D8F79L,0x06368EF4L,2L,0x06368EF4L}};
    int32_t l_985 = 0xBB8F7FC1L;
    struct S1 ***l_991 = (void*)0;
    int64_t l_1085 = 2L;
    const int8_t *l_1105 = &g_102.f1;
    const int8_t **l_1104 = &l_1105;
    uint64_t l_1192[4][4] = {{1UL,0xBC2DE20B14043957LL,0xBC2DE20B14043957LL,1UL},{0xBC2DE20B14043957LL,1UL,0xBC2DE20B14043957LL,0xBC2DE20B14043957LL},{1UL,1UL,0x54AD3E1366A4CF73LL,1UL},{1UL,0xBC2DE20B14043957LL,0xBC2DE20B14043957LL,1UL}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_649[i] = &l_650;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_908[i][j] = 0x8566552EL;
    }
    return &g_6[1];
}



static uint8_t  func_22(const int8_t * p_23, union U2  p_24, int32_t  p_25, uint8_t  p_26)
{ 
    uint64_t *l_615 = (void*)0;
    uint64_t *l_616[1];
    int32_t l_617 = 6L;
    int32_t l_624 = 0x7945B4F0L;
    struct S0 l_626 = {-1448,0L};
    int i;
    for (i = 0; i < 1; i++)
        l_616[i] = &g_502.f0;
    if (((0xA820L ^ (g_172[5] >= 0xC0022666ADF4839CLL)) | ((((l_617 ^= 3UL) & (safe_rshift_func_int8_t_s_s((g_2 || ((safe_lshift_func_int8_t_s_u((0xADL | ((safe_div_func_uint16_t_u_u(0x2284L, g_502.f1)) , (-7L))), g_502.f1)) , g_152)), l_624))) && (*g_496)) , (-1L))))
    { 
        struct S0 l_625 = {2141,0x1F65F2D6A4FCF730LL};
        l_626 = l_625;
    }
    else
    { 
        const uint16_t l_633 = 0x2887L;
        struct S0 l_641 = {2813,-2L};
        int32_t *l_642 = &g_51;
        if ((safe_mod_func_uint8_t_u_u(p_24.f1, l_617)))
        { 
            return p_24.f1;
        }
        else
        { 
            l_624 = 0xADC18C26L;
            if (p_24.f0)
            { 
                int32_t l_636[1][6] = {{(-1L),3L,(-1L),(-1L),3L,(-1L)}};
                int i, j;
                g_393 = ((safe_add_func_uint16_t_u_u(65529UL, ((safe_mod_func_int64_t_s_s((l_626 , l_633), (((*p_23) || (&p_26 == &p_26)) || (((safe_mod_func_int64_t_s_s((l_633 != p_24.f0), 18446744073709551614UL)) , l_626.f1) , g_122)))) , 65535UL))) ^ l_636[0][1]);
            }
            else
            { 
                for (g_272.f4 = 7; (g_272.f4 < 43); ++g_272.f4)
                { 
                    int64_t **l_639[2][5][6] = {{{&g_424,&g_424,(void*)0,&g_424,&g_424,(void*)0},{&g_424,&g_424,&g_424,&g_424,(void*)0,&g_424},{&g_424,&g_424,&g_424,(void*)0,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424,&g_424,(void*)0}},{{&g_424,&g_424,&g_424,&g_424,(void*)0,&g_424},{&g_424,&g_424,(void*)0,(void*)0,(void*)0,&g_424},{(void*)0,&g_424,&g_424,&g_424,&g_424,&g_424},{(void*)0,(void*)0,&g_424,(void*)0,&g_424,(void*)0},{&g_424,(void*)0,&g_424,&g_424,&g_424,&g_424}}};
                    int64_t ***l_640 = &l_639[1][0][1];
                    int i, j, k;
                    (*g_280) = (*g_280);
                    (*l_640) = l_639[0][1][4];
                    return p_25;
                }
                (*g_280) = l_641;
            }
        }
        (*l_642) |= p_24.f1;
    }
    return g_362.f0;
}



static union U2  func_27(int32_t * const  p_28, int32_t * p_29, int32_t * p_30)
{ 
    int8_t l_546 = 0L;
    struct S0 **l_549[6] = {&g_280,(void*)0,&g_280,&g_280,(void*)0,&g_280};
    int32_t *l_566 = &g_343;
    int32_t *l_568 = (void*)0;
    int32_t *l_569 = &g_60;
    uint8_t *l_578 = &g_348;
    uint64_t l_579 = 0UL;
    int32_t *l_580 = &g_96.f5;
    struct S1 l_583 = {18446744073709551609UL,0xCC35533DD5F45DA5LL,0L,241,0xEAC8L,3L,{2347,0x560E901A954A12E7LL},0xFA24L};
    int32_t *l_602 = &l_583.f5;
    uint16_t ***l_606 = (void*)0;
    int32_t *l_608 = &g_60;
    int32_t *l_609 = &g_343;
    int32_t *l_610[1];
    int i;
    for (i = 0; i < 1; i++)
        l_610[i] = &g_96.f5;
    (*l_569) |= ((safe_mul_func_int16_t_s_s(l_546, l_546)) != (safe_rshift_func_int16_t_s_s(((((l_546 , l_549[2]) == ((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(0x5E1EAB11L, (l_546 & ((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((g_272.f5 = (safe_mod_func_int32_t_s_s(((*l_566) &= (safe_sub_func_int16_t_s_s(g_172[3], l_546))), l_546))) || 0UL) && g_348) >= l_546), l_546)), 13)) , 0UL) > 18446744073709551615UL), g_567)) < (***g_494))))), (***g_494))) , l_549[2])) , 0xE9843A598163D10FLL) != 0x797DD7684B30D606LL), l_546)));
    (*l_580) |= (safe_add_func_int16_t_s_s(g_362.f1, (((l_579 = (0xF53B95383CB7436BLL != ((*g_496) != (safe_lshift_func_uint8_t_u_u(((*l_566) | (((*l_578) = (safe_mod_func_uint32_t_u_u(((g_576 != &g_577[0]) == ((0x617BA658A7EA64C7LL != (-10L)) != (*l_569))), 4294967291UL))) == (*l_566))), (*l_569)))))) , 0L) != (*g_496))));
    (*l_566) = (-10L);
    if ((*l_580))
    { 
        const int16_t l_595 = 0xF51EL;
        int8_t **l_597 = &g_5[5][0];
        int8_t ***l_596 = &l_597;
        int32_t l_600 = 1L;
        for (g_96.f5 = (-12); (g_96.f5 != (-16)); --g_96.f5)
        { 
            struct S1 l_584[3] = {{0UL,7UL,0x724DL,188,0x0FC9L,0xE854DA1FL,{52,0x1495B19ACEB0D731LL},2L},{0UL,7UL,0x724DL,188,0x0FC9L,0xE854DA1FL,{52,0x1495B19ACEB0D731LL},2L},{0UL,7UL,0x724DL,188,0x0FC9L,0xE854DA1FL,{52,0x1495B19ACEB0D731LL},2L}};
            int8_t *l_598 = (void*)0;
            int8_t *l_599[4][7] = {{&g_102.f1,&l_546,&g_102.f1,&g_102.f1,&l_546,&g_102.f1,&g_102.f1},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546},{&l_546,&g_102.f1,&g_102.f1,&l_546,&g_102.f1,&g_102.f1,&l_546},{&g_6[1],&l_546,&g_6[1],&g_6[1],&l_546,&g_6[1],&g_6[1]}};
            uint64_t *l_601 = &g_272.f0;
            int32_t **l_603 = (void*)0;
            int32_t **l_604 = &l_566;
            int32_t **l_605 = &l_569;
            int i, j;
            (*l_605) = ((*l_604) = (l_583 , (l_584[0] , ((0x664EL == ((safe_add_func_int64_t_s_s((**g_423), ((*l_601) ^= ((*l_566) ^ (((safe_mul_func_uint16_t_u_u(((*g_496) = (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((l_600 = (safe_add_func_int64_t_s_s(l_595, (((void*)0 == l_596) < 0x31L)))) & l_595), (*l_566))), l_595))), 0L)) , l_600) & g_157))))) > l_584[0].f1)) , l_602))));
        }
    }
    else
    { 
        uint16_t ****l_607 = &l_606;
        (*l_607) = l_606;
    }
    --g_611;
    return g_102;
}



static int32_t * func_31(int16_t  p_32, int64_t  p_33)
{ 
    uint16_t l_480 = 0x0911L;
    int32_t *l_506 = &g_393;
    union U3 l_537 = {0UL};
    for (p_32 = (-30); (p_32 > 29); p_32 = safe_add_func_uint64_t_u_u(p_32, 6))
    { 
        int32_t **l_36 = (void*)0;
        int32_t *l_38 = &g_2;
        int32_t **l_37 = &l_38;
        struct S1 l_44[7] = {{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL},{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL},{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL},{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL},{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL},{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL},{18446744073709551614UL,0x6E1D67A3D58E56A9LL,0xDAD8L,27,1UL,1L,{1903,-1L},0x0AACL}};
        uint8_t l_489 = 0x93L;
        uint8_t *l_519[4][4] = {{&l_489,&l_489,&l_489,&l_489},{&g_348,&l_489,&g_173,&l_489},{&l_489,&l_489,&g_173,&g_173},{&g_348,&g_348,&l_489,&g_173}};
        int i, j;
        (*l_37) = (void*)0;
    }
    for (g_272.f4 = 10; (g_272.f4 > 50); ++g_272.f4)
    { 
        uint8_t *l_530 = &g_348;
        int32_t l_542 = (-6L);
        (*l_506) = ((((safe_lshift_func_int16_t_s_s(g_61.f0, (0x7126L <= (((safe_rshift_func_uint8_t_u_s(((*l_530) &= g_272.f0), (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((g_6[1] <= (***g_494)) & (((safe_add_func_int32_t_s_s((((l_537 , (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x59L, (*l_506))), 0x9015L))) && l_542) && p_32), (-10L))) && g_272.f1) , (*l_506))), 14)), p_33)))) > 0UL) != p_33)))) != 0x148FL) ^ 0L) , p_33);
    }
    for (g_406 = 1; (g_406 <= 5); g_406 += 1)
    { 
        for (g_405 = 5; (g_405 >= 0); g_405 -= 1)
        { 
            int32_t *l_543 = &g_405;
            return l_543;
        }
        (*l_506) |= p_32;
    }
    return l_506;
}



static int32_t  func_39(int32_t * p_40, int64_t  p_41)
{ 
    int8_t *l_54 = &g_6[2];
    int8_t *l_56 = &g_6[0];
    int8_t **l_55 = &l_56;
    int32_t *l_57 = &g_58;
    int32_t l_66 = (-8L);
    int8_t * const *l_83 = &l_54;
    union U2 *l_103 = (void*)0;
    int32_t l_150 = (-1L);
    int32_t l_154[2][2];
    uint16_t l_181 = 0xF8DAL;
    int16_t l_207 = 1L;
    int64_t *l_232 = &g_152;
    int64_t ** const l_231[6] = {&l_232,&l_232,&l_232,&l_232,&l_232,&l_232};
    int64_t * const *l_248 = &l_232;
    int64_t * const **l_247 = &l_248;
    int64_t * const ***l_249 = (void*)0;
    int64_t * const ***l_250 = &l_247;
    uint8_t *l_286 = &g_173;
    int8_t **l_294 = (void*)0;
    const struct S0 *l_351 = (void*)0;
    int32_t l_403 = (-2L);
    uint16_t *l_412 = &l_181;
    uint16_t ** const l_411 = &l_412;
    struct S1 l_413 = {0UL,18446744073709551606UL,0xABCEL,30,9UL,6L,{883,0xE2ECEE631E34A7E3LL},0L};
    uint16_t l_435 = 65535UL;
    union U2 l_463 = {18446744073709551615UL};
    uint32_t l_470 = 0x8637C0ECL;
    struct S1 **l_479 = (void*)0;
    struct S1 ***l_478 = &l_479;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_154[i][j] = 0x68449CD7L;
    }
    if (((*p_40) = (safe_add_func_uint16_t_u_u((&g_6[2] != l_54), (&g_6[3] == ((*l_55) = &g_6[1]))))))
    { 
        for (g_51 = 0; (g_51 <= 5); g_51 += 1)
        { 
            int32_t *l_59 = &g_60;
            struct S0 *l_62 = &g_61;
            (*l_59) |= ((void*)0 == l_57);
            (*l_62) = g_61;
        }
    }
    else
    { 
        struct S0 l_63[7] = {{-101,0x96DEF04E4CABBE7FLL},{2454,-1L},{-101,0x96DEF04E4CABBE7FLL},{-101,0x96DEF04E4CABBE7FLL},{2454,-1L},{-101,0x96DEF04E4CABBE7FLL},{-101,0x96DEF04E4CABBE7FLL}};
        int8_t **l_98[7];
        union U2 *l_101 = &g_102;
        uint8_t l_123 = 0x99L;
        int32_t l_131 = 0xBDA2652AL;
        uint32_t l_132 = 0xAB455570L;
        int32_t l_156 = 1L;
        uint8_t l_212[1];
        struct S1 l_217[2][5] = {{{0UL,0UL,0xAFCDL,18,65526UL,-8L,{-1727,-10L},0x4599L},{0x6FAD5A6DD64F156DLL,18446744073709551610UL,-3L,95,0UL,0x2C1C6760L,{939,-1L},-1L},{0UL,0UL,0xAFCDL,18,65526UL,-8L,{-1727,-10L},0x4599L},{0x6FAD5A6DD64F156DLL,18446744073709551610UL,-3L,95,0UL,0x2C1C6760L,{939,-1L},-1L},{0UL,0UL,0xAFCDL,18,65526UL,-8L,{-1727,-10L},0x4599L}},{{18446744073709551612UL,0x43A7AF2F1A9747AELL,1L,202,0UL,1L,{-1701,0x6A66F2389C7B4440LL},7L},{18446744073709551612UL,0x43A7AF2F1A9747AELL,1L,202,0UL,1L,{-1701,0x6A66F2389C7B4440LL},7L},{18446744073709551612UL,0x43A7AF2F1A9747AELL,1L,202,0UL,1L,{-1701,0x6A66F2389C7B4440LL},7L},{18446744073709551612UL,0x43A7AF2F1A9747AELL,1L,202,0UL,1L,{-1701,0x6A66F2389C7B4440LL},7L},{18446744073709551612UL,0x43A7AF2F1A9747AELL,1L,202,0UL,1L,{-1701,0x6A66F2389C7B4440LL},7L}}};
        int32_t *l_230[4][3][4] = {{{&l_217[0][4].f5,(void*)0,(void*)0,&l_217[0][4].f5},{(void*)0,&l_217[0][4].f5,(void*)0,(void*)0},{&l_217[0][4].f5,&l_217[0][4].f5,&l_156,&l_217[0][4].f5}},{{&l_217[0][4].f5,(void*)0,(void*)0,&l_217[0][4].f5},{(void*)0,&l_217[0][4].f5,(void*)0,(void*)0},{&l_217[0][4].f5,&l_217[0][4].f5,&l_156,&l_217[0][4].f5}},{{&l_217[0][4].f5,(void*)0,(void*)0,&l_217[0][4].f5},{(void*)0,&l_217[0][4].f5,(void*)0,(void*)0},{&l_217[0][4].f5,&l_217[0][4].f5,&l_156,&l_217[0][4].f5}},{{&l_217[0][4].f5,(void*)0,(void*)0,&l_217[0][4].f5},{(void*)0,&l_217[0][4].f5,(void*)0,(void*)0},{&l_217[0][4].f5,&l_217[0][4].f5,&l_156,&l_217[0][4].f5}}};
        int32_t **l_229 = &l_230[3][2][3];
        int64_t ***l_233 = (void*)0;
        int64_t **l_235 = (void*)0;
        int64_t ***l_234[6][7] = {{&l_235,&l_235,&l_235,&l_235,&l_235,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235,(void*)0},{&l_235,&l_235,&l_235,&l_235,&l_235,&l_235,&l_235},{(void*)0,&l_235,&l_235,&l_235,&l_235,(void*)0,&l_235},{&l_235,&l_235,&l_235,&l_235,&l_235,&l_235,&l_235},{(void*)0,(void*)0,&l_235,&l_235,&l_235,(void*)0,(void*)0}};
        int64_t ***l_236 = &l_235;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_98[i] = &l_56;
        for (i = 0; i < 1; i++)
            l_212[i] = 0UL;
        l_63[6] = g_61;
        for (g_51 = 0; (g_51 <= 6); g_51 += 1)
        { 
            uint32_t l_67 = 18446744073709551615UL;
            struct S1 l_115 = {0x076CEBAF4236FC2CLL,18446744073709551611UL,1L,113,65527UL,1L,{1928,0x56848F5E8599F0A1LL},0x4F72L};
            int32_t l_155 = 0x09A0BA19L;
            int32_t *l_192 = (void*)0;
            int32_t **l_191 = &l_192;
            int32_t *l_194 = &l_154[1][1];
            int32_t **l_193 = &l_194;
            int8_t ***l_210 = &l_98[2];
            int8_t **l_211 = &l_54;
            int i;
            if ((l_66 && (l_67 != (safe_rshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s((0x4FL && (g_61.f1 ^ (safe_mul_func_int16_t_s_s(((!(l_63[g_51] , (((safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((((((l_63[g_51].f0 || (0x1CL | 0x03L)) | p_41) , p_41) < 0UL) <= 0x8B304F1BCD962F93LL), 9)), 0x7BED26586BC1AF31LL)), p_41)) & g_61.f0) | g_6[3]))) >= 0x154EA94EL), 0xB65FL)))), g_58)) , l_66), 2)))))
            { 
                for (p_41 = 6; (p_41 >= 0); p_41 -= 1)
                { 
                    const int8_t *l_85 = &g_6[3];
                    const int8_t ** const l_84 = &l_85;
                    int32_t l_86[6][7][6] = {{{(-6L),(-2L),4L,0x6C942108L,0x53BB7457L,0x03C12D23L},{0x86BE7BEBL,1L,(-1L),(-1L),0x092B2853L,0xB4E4A0A6L},{(-1L),(-1L),0x4644A747L,1L,0xE2D30B14L,0xE2D30B14L},{0x3E2D4647L,0x6C942108L,0x6C942108L,0x3E2D4647L,(-1L),(-1L)},{0x94F54FDFL,(-1L),0x341E9F44L,0x73F63695L,0x17125C8CL,2L},{(-1L),0x092B2853L,0xEAAB991CL,0x6DC7391AL,0x17125C8CL,(-10L)},{4L,(-1L),0x458F42BEL,8L,(-1L),0L}},{{3L,0x6C942108L,0xE09581ADL,0x458F42BEL,0xE2D30B14L,(-1L)},{0xC79EC616L,(-1L),(-2L),(-7L),0x092B2853L,0x458F42BEL},{0x3A0897D5L,1L,1L,(-1L),0x53BB7457L,0x94F54FDFL},{1L,(-2L),1L,(-2L),1L,(-1L)},{0x092B2853L,0x03C12D23L,(-1L),0x53BB7457L,0x341E9F44L,(-1L)},{8L,0L,(-1L),0x03C12D23L,(-1L),(-1L)},{1L,0xF30ED53BL,(-1L),0x4644A747L,0xC79EC616L,(-1L)}},{{(-1L),0x3A0897D5L,1L,0x86BE7BEBL,(-1L),0x94F54FDFL},{0xE09581ADL,0xB4E4A0A6L,1L,2L,0x86BE7BEBL,0x458F42BEL},{0xF7D50A45L,(-1L),(-2L),0x94F54FDFL,0xE09581ADL,(-1L)},{0L,0xEAAB991CL,0xE09581ADL,0xE09581ADL,0xEAAB991CL,0L},{1L,0x73F63695L,0x458F42BEL,0x17125C8CL,3L,(-10L)},{0xB4E4A0A6L,4L,0xEAAB991CL,0x341E9F44L,0xF7D50A45L,2L},{0xB4E4A0A6L,(-1L),0x341E9F44L,0x17125C8CL,1L,(-1L)}},{{1L,3L,0x6C942108L,0xE09581ADL,0x458F42BEL,0xE2D30B14L},{0L,0x17125C8CL,0x4644A747L,0x94F54FDFL,0x03C12D23L,0xB4E4A0A6L},{0xF7D50A45L,0x4644A747L,(-1L),2L,(-1L),0x03C12D23L},{0xE09581ADL,0xC79EC616L,4L,0x86BE7BEBL,4L,0xC79EC616L},{(-1L),1L,0L,0x4644A747L,0xF30ED53BL,0x092B2853L},{1L,0x6DC7391AL,(-1L),0x03C12D23L,0L,0x3E2D4647L},{8L,0x6DC7391AL,(-1L),0x53BB7457L,0xF30ED53BL,0xEAAB991CL}},{{0x092B2853L,1L,(-6L),(-2L),4L,0x6C942108L},{1L,0xC79EC616L,0x73F63695L,(-1L),(-1L),0x3A0897D5L},{0x3A0897D5L,1L,(-7L),0x86BE7BEBL,0xF7D50A45L,0xF30ED53BL},{(-6L),0xF30ED53BL,1L,(-1L),(-1L),1L},{0x17125C8CL,0x17125C8CL,0x86BE7BEBL,0xC79EC616L,2L,1L},{0xB4E4A0A6L,0x092B2853L,(-1L),(-1L),1L,0x86BE7BEBL},{(-5L),0xB4E4A0A6L,(-1L),0x341E9F44L,0x17125C8CL,1L}},{{(-1L),0x341E9F44L,0x86BE7BEBL,1L,0x5EB5F4D7L,1L},{1L,0x5EB5F4D7L,1L,0x53BB7457L,4L,0xF30ED53BL},{(-1L),(-2L),(-7L),0x092B2853L,0x458F42BEL,0x3E2D4647L},{0x458F42BEL,0x6C942108L,0x341E9F44L,0xE2D30B14L,(-2L),0xE2D30B14L},{0x73F63695L,0x3E2D4647L,0x73F63695L,(-1L),(-6L),0x5EB5F4D7L},{0xE2D30B14L,0x6DC7391AL,(-1L),0x17125C8CL,0xE09581ADL,1L},{0x03C12D23L,0x94F54FDFL,0x4644A747L,0x17125C8CL,0L,(-1L)}}};
                    uint64_t *l_89 = &g_90;
                    uint64_t *l_93 = (void*)0;
                    uint64_t *l_94 = &g_95;
                    int8_t ***l_97 = &l_55;
                    int32_t *l_99 = (void*)0;
                    int32_t *l_100 = &g_60;
                    int32_t *l_104[3][3][6] = {{{&l_86[5][2][4],&l_66,&l_86[5][2][4],(void*)0,(void*)0,(void*)0},{&g_51,&l_86[2][2][2],(void*)0,&g_60,(void*)0,&l_86[2][2][2]},{(void*)0,&l_66,&g_96.f5,&g_60,(void*)0,(void*)0}},{{&g_51,(void*)0,&g_96.f5,(void*)0,&g_51,&l_86[2][2][2]},{&l_86[5][2][4],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_86[5][2][4],&l_66,&l_86[5][2][4],(void*)0,(void*)0,(void*)0}},{{&g_51,&l_86[2][2][2],(void*)0,&g_60,(void*)0,&l_86[2][2][2]},{(void*)0,&l_66,&g_96.f5,&g_60,(void*)0,(void*)0},{&g_51,(void*)0,&g_96.f5,(void*)0,&g_51,&l_86[2][2][2]}}};
                    int i, j, k;
                    g_61.f0 = (l_86[4][6][0] = ((((*l_97) = ((((safe_add_func_int16_t_s_s(p_41, (((l_83 == l_84) <= l_86[5][2][4]) >= ((*l_89) = (safe_div_func_uint64_t_u_u(p_41, 2L)))))) > ((*l_94) = (safe_lshift_func_uint8_t_u_u(((void*)0 == &l_85), 5)))) , g_96) , &l_54)) != l_98[1]) < l_86[1][2][4]));
                    (*l_100) = g_90;
                    l_103 = l_101;
                    if (l_67)
                        break;
                    g_105++;
                }
                if ((*p_40))
                    continue;
            }
            else
            { 
                int16_t *l_121[2][6][1] = {{{&g_122},{&g_122},{&g_122},{&g_122},{&g_122},{&g_122}},{{&g_122},{&g_122},{&g_122},{&g_122},{&g_122},{&g_122}}};
                uint64_t *l_124 = &g_95;
                int32_t l_125 = 0x82D3EDD0L;
                int32_t l_153 = 0x5239877FL;
                int i, j, k;
                l_125 = ((l_63[6].f0 &= ((l_66 & 0x2824790DEA165F45LL) || ((*l_124) = (safe_mod_func_int64_t_s_s((((safe_add_func_int16_t_s_s((!(safe_add_func_uint16_t_u_u((g_96 , (l_115 , (p_41 | l_66))), (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((g_122 = (-1L)))), g_58)), 4L))))), 2UL)) | p_41) ^ l_123), p_41))))) && p_41);
                for (g_122 = 0; (g_122 <= 6); g_122 += 1)
                { 
                    int32_t *l_126 = &g_60;
                    int32_t *l_127 = &l_115.f5;
                    int32_t l_128 = 1L;
                    int32_t *l_129 = &l_128;
                    int32_t *l_130[2][1][4] = {{{&g_96.f5,&l_128,&g_96.f5,&l_128}},{{&g_96.f5,&l_128,&g_96.f5,&l_128}}};
                    int i, j, k;
                    ++l_132;
                }
                for (l_67 = 0; (l_67 <= 5); l_67 += 1)
                { 
                    int32_t *l_135 = &l_125;
                    int32_t l_136 = 0xB85FA97DL;
                    int32_t *l_137 = (void*)0;
                    int32_t *l_138 = (void*)0;
                    int32_t *l_139 = &l_125;
                    int32_t *l_140 = &l_66;
                    int32_t *l_141 = (void*)0;
                    int32_t *l_142 = &g_96.f5;
                    int32_t *l_143 = &g_60;
                    int32_t *l_144 = &l_136;
                    int32_t l_145 = 0x6E223669L;
                    int32_t *l_146 = &l_125;
                    int32_t *l_147 = &g_96.f5;
                    int32_t *l_148 = &g_96.f5;
                    int32_t *l_149[5][5][6] = {{{&g_2,&l_66,&g_96.f5,(void*)0,&l_125,&l_125},{&g_96.f5,&l_125,&g_60,&l_125,&l_125,&l_125},{&l_145,&g_96.f5,(void*)0,(void*)0,&g_51,(void*)0},{&g_96.f5,&g_51,&g_96.f5,&g_60,(void*)0,&l_115.f5},{&l_145,&g_2,&l_125,(void*)0,&l_136,&g_96.f5}},{{&l_145,(void*)0,&g_96.f5,(void*)0,&l_125,&l_145},{&g_96.f5,&l_125,(void*)0,&l_145,(void*)0,&l_115.f5},{&l_66,(void*)0,&l_66,&l_115.f5,&g_51,&g_96.f5},{&g_96.f5,(void*)0,&l_136,&g_2,&g_96.f5,&g_96.f5},{&g_2,&g_60,&g_60,&g_2,&l_145,&l_66}},{{&l_125,&g_2,&g_96.f5,&g_51,&g_2,&l_145},{&g_51,(void*)0,(void*)0,&l_145,&g_2,&g_60},{&g_2,&g_2,&g_96.f5,&g_2,&l_145,&l_145},{(void*)0,&g_60,&l_125,&g_2,&g_96.f5,&g_60},{(void*)0,(void*)0,&l_66,&l_66,&g_51,&l_145}},{{&l_145,&g_96.f5,&g_2,&g_96.f5,(void*)0,&g_2},{&l_136,&g_51,&l_66,(void*)0,&g_60,&g_96.f5},{&l_66,(void*)0,&l_145,(void*)0,&g_2,&g_51},{&l_145,&l_145,&l_115.f5,&l_145,(void*)0,&l_115.f5},{&l_136,(void*)0,&g_2,(void*)0,&l_115.f5,&l_145}},{{&l_145,&g_96.f5,(void*)0,&g_96.f5,&l_145,(void*)0},{&g_2,&l_66,&g_51,(void*)0,(void*)0,&l_66},{&g_2,&g_96.f5,(void*)0,&l_66,&g_2,&l_66},{&l_125,&g_60,&g_51,&l_115.f5,&g_96.f5,(void*)0},{&g_2,&g_96.f5,(void*)0,&l_136,&l_145,&l_145}}};
                    int i, j, k;
                    g_158++;
                }
                for (l_132 = 0; (l_132 <= 1); l_132 += 1)
                { 
                    int32_t *l_161 = &l_115.f5;
                    int32_t *l_162 = &l_156;
                    int32_t *l_163[7] = {&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60};
                    int8_t l_164[4] = {0x41L,0x41L,0x41L,0x41L};
                    uint16_t l_165 = 5UL;
                    int i, j;
                    ++l_165;
                    (*l_162) = (g_6[(l_132 + 2)] & ((safe_rshift_func_int8_t_s_u(g_6[(l_132 + 3)], l_154[l_132][l_132])) < l_125));
                    if ((*l_162))
                        continue;
                }
            }
            for (g_105 = 2; (g_105 <= 6); g_105 += 1)
            { 
                int8_t ***l_184 = &l_98[1];
                int32_t l_190 = 0x9FFA7629L;
                if (g_105)
                { 
                    int32_t *l_170 = &l_155;
                    int32_t *l_171[1][5] = {{&l_150,&l_150,&l_150,&l_150,&l_150}};
                    union U3 l_176 = {0xE1FDL};
                    int i, j;
                    g_173++;
                    g_61.f0 = ((l_176 , p_41) >= g_96.f2);
                }
                else
                { 
                    int32_t *l_177 = &l_115.f5;
                    int32_t *l_178 = &l_156;
                    int32_t *l_179 = &g_60;
                    int32_t *l_180[4] = {&g_2,&g_2,&g_2,&g_2};
                    int i;
                    l_181++;
                }
                (*l_184) = &g_5[5][0];
                for (g_61.f1 = 5; (g_61.f1 >= 0); g_61.f1 -= 1)
                { 
                    int32_t *l_189 = &l_154[0][1];
                    int i;
                    (*l_189) &= (safe_add_func_uint32_t_u_u((g_96.f3 = (((((l_63[g_51] , 0x098317EE62A828AALL) != g_6[g_61.f1]) >= ((~(+((void*)0 == p_40))) ^ (g_90 >= ((&g_172[0] == &g_172[5]) != p_41)))) > 0x2FF3143DF5924090LL) || l_150)), g_2));
                    if (l_190)
                        continue;
                }
            }
            (*l_193) = ((*l_191) = &l_156);
            if ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, (safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s(((**l_191) = l_207), (l_132 && (safe_mul_func_int16_t_s_s(((((((*l_210) = (void*)0) == ((((l_154[1][1] || (l_131 >= 0x7EL)) < 0xCE4A9CA1E3233A39LL) , p_41) , l_211)) < 255UL) || p_41) && 6UL), 0xA69FL))))), g_102.f0)) <= 0x351B3B912DD5A0D5LL), g_157)))), g_96.f6.f1)), l_212[0])))
            { 
                return g_96.f6.f1;
            }
            else
            { 
                uint8_t *l_213 = &l_212[0];
                int32_t l_220 = (-1L);
                int64_t *l_225[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_225[i] = (void*)0;
                (*l_192) = (p_41 , (2UL == (((*l_213) = l_150) , ((safe_rshift_func_uint8_t_u_u((**l_191), 3)) ^ p_41))));
                if (g_58)
                    continue;
                (*l_210) = (*l_210);
                (*l_194) ^= (+(l_212[0] , (l_217[0][4] , (safe_sub_func_uint64_t_u_u((l_220 ^ (p_41 | (0x3051L || (l_66 & (l_154[1][1] = (((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967290UL, 4294967287UL)), l_217[0][4].f0)) , g_96.f2) >= 65532UL)))))), l_181)))));
            }
            (*l_193) = (void*)0;
        }
        (*p_40) ^= l_217[0][4].f1;
        (*l_229) = (((g_61.f0 = g_58) == ((safe_lshift_func_int8_t_s_u(l_154[1][0], 4)) != (((((((((0xC8D2L != 0x16ACL) <= ((p_40 != (void*)0) >= (safe_unary_minus_func_uint8_t_u((l_66 != 0x7D79F017L))))) > l_66) <= l_217[0][4].f6.f1) || 0x7F32L) > 0x47L) < p_41) != l_63[6].f1) > l_150))) , (void*)0);
        (*l_236) = l_231[1];
    }
    if (((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((&l_231[1] == ((*l_250) = l_247)) > p_41), g_60)), (safe_rshift_func_uint8_t_u_s(((((&l_66 != (void*)0) != 0xC70F8A1CL) == p_41) || p_41), 5)))), g_2)), l_207)) , (*p_40)), g_95)) != p_41))
    { 
        return l_207;
    }
    else
    { 
        int8_t *l_259 = &g_6[1];
        struct S1 *l_269[3];
        int32_t l_292 = 1L;
        int32_t l_337 = (-9L);
        int32_t l_338 = 0L;
        int32_t l_342 = 0x972F012CL;
        int32_t l_344 = 0x601BD32AL;
        int32_t l_345 = 0x86E4F013L;
        int32_t l_347 = 8L;
        int32_t l_394 = 0x85B01B43L;
        int32_t l_396 = (-1L);
        int32_t l_397 = 0x1B3C2D28L;
        int32_t l_401 = (-10L);
        int32_t l_402[4][5][1] = {{{0xC564E5E4L},{0L},{(-8L)},{0L},{0xC564E5E4L}},{{0L},{(-8L)},{0L},{0xC564E5E4L},{0L}},{{(-8L)},{0L},{0xC564E5E4L},{0L},{(-8L)}},{{0L},{0xC564E5E4L},{0L},{(-8L)},{0L}}};
        int8_t **l_417 = &l_54;
        uint16_t l_422[6][2];
        int64_t ** const l_434 = &l_232;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_269[i] = &g_96;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_422[i][j] = 0x70DDL;
        }
        for (g_105 = (-30); (g_105 >= 31); ++g_105)
        { 
            int16_t *l_257[5] = {&g_172[5],&g_172[5],&g_172[5],&g_172[5],&g_172[5]};
            int32_t l_258[1][5][7] = {{{0x312F68C6L,0xB2EB3C94L,0x312F68C6L,(-4L),0x2A389E9DL,0x2A389E9DL,(-4L)},{0x312F68C6L,0xB2EB3C94L,0x312F68C6L,(-4L),0x2A389E9DL,0x2A389E9DL,(-4L)},{0x312F68C6L,0xB2EB3C94L,0x312F68C6L,(-4L),0x2A389E9DL,0x2A389E9DL,(-4L)},{0x312F68C6L,0xB2EB3C94L,0x312F68C6L,(-4L),0x2A389E9DL,0x2A389E9DL,(-4L)},{0x312F68C6L,0xB2EB3C94L,0x312F68C6L,(-4L),0x2A389E9DL,0x2A389E9DL,(-4L)}}};
            int8_t **l_260 = &l_259;
            int8_t *l_261 = &g_157;
            const union U3 l_264 = {0x9874L};
            struct S1 **l_270[2][7][4] = {{{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]}},{{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]},{&l_269[0],&l_269[0],&l_269[0],&l_269[0]}}};
            int64_t *l_283 = &g_152;
            int32_t l_297 = 0x87B538F5L;
            const struct S0 *l_353 = &g_272.f6;
            int i, j, k;
            if (l_207)
                break;
            g_96.f5 |= ((safe_rshift_func_uint8_t_u_u(g_51, (((void*)0 == &p_40) <= ((p_41 != (l_258[0][4][4] = (g_172[5] = (g_96.f7 = 0x27E5L)))) > (g_96.f4 |= (((*l_260) = ((*l_55) = l_259)) == (l_261 = &g_6[0]))))))) < 1UL);
            (*p_40) ^= (safe_add_func_int16_t_s_s((-8L), (g_96 , ((p_41 && ((l_264 , (0L < ((l_258[0][1][4] || (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_105, (-7L))), 0x44L))) | (-9L)))) , 0x67AFB20AL)) || p_41))));
            g_271 = l_269[0];
            for (g_152 = 0; (g_152 < (-13)); g_152 = safe_sub_func_uint64_t_u_u(g_152, 6))
            { 
                int8_t ***l_287 = &l_55;
                int32_t l_293 = 0xE1F6F2E0L;
                uint16_t *l_295 = (void*)0;
                uint16_t *l_296 = &l_181;
                int32_t l_339 = 7L;
                int32_t l_340 = 0xC8B555A2L;
                int32_t l_341 = 0L;
                for (g_122 = 28; (g_122 < (-1)); g_122--)
                { 
                    struct S0 *l_278 = &g_272.f6;
                    struct S0 **l_277 = &l_278;
                    struct S0 **l_279 = (void*)0;
                    g_280 = ((*l_277) = &g_61);
                }
                (*p_40) = ((((*l_296) = (((safe_mod_func_int32_t_s_s((l_283 == &g_152), ((l_258[0][3][6] >= (safe_add_func_uint8_t_u_u((l_286 != (((((l_287 == ((safe_rshift_func_int16_t_s_u((g_96.f7 = (safe_rshift_func_uint16_t_u_u(p_41, ((l_292 || l_66) > g_172[2])))), 13)) , (void*)0)) == 0xA1C2L) <= p_41) != l_181) , (void*)0)), l_293))) || 0x1E0ECAFB3B253682LL))) , l_294) == &l_261)) || g_2) != l_297);
                if ((safe_sub_func_uint16_t_u_u(g_2, (l_154[1][0] ^= (l_293 ^= 3L)))))
                { 
                    struct S0 *l_313 = &g_272.f6;
                    const union U2 l_322[7] = {{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}};
                    int32_t *l_328 = &l_154[0][1];
                    int32_t **l_327 = &l_328;
                    int32_t *l_329 = &g_272.f5;
                    int32_t *l_330 = (void*)0;
                    int32_t *l_331 = &g_96.f5;
                    int32_t *l_332 = &g_51;
                    int32_t *l_333 = &l_66;
                    int32_t *l_334 = &l_258[0][1][3];
                    int32_t *l_335 = &l_292;
                    int32_t *l_336[1];
                    const struct S0 **l_352 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_336[i] = &l_66;
                    (*l_327) = ((safe_lshift_func_int8_t_s_u((g_151 < ((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((l_297 ^= (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((((void*)0 != l_313) < 0xEC81A7D0L) != (+((((l_66 = (((*l_296) ^= (((l_293 = (((l_258[0][4][6] = (safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((!(((++g_173) == (l_322[1] , l_293)) | ((((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((l_293 , 1L), 7)), g_96.f6.f0)) == l_322[1].f1) | l_258[0][0][4]) & g_96.f1))), l_322[1].f1)), l_66))) && g_61.f1) , p_41)) , (void*)0) != (void*)0)) ^ 1L)) < g_272.f6.f1) < 1UL) <= g_61.f1))) | (-9L)) , l_292), 1)), 8L))), (*p_40))) , p_41) == l_292), 1UL)) | l_150))) > 2UL), 8)) < (-1L))), g_272.f6.f1)) , p_40);
                    g_348--;
                    l_353 = l_351;
                    return l_337;
                }
                else
                { 
                    (*p_40) |= (safe_unary_minus_func_int16_t_s(l_345));
                    (*p_40) = g_102.f1;
                    return (*p_40);
                }
            }
        }
        for (g_102.f1 = 0; (g_102.f1 < 29); g_102.f1++)
        { 
            int32_t l_359 = 0x6186FDFCL;
            uint32_t *l_363 = &g_105;
            const uint16_t *l_366 = &g_362.f0;
            const uint16_t **l_365 = &l_366;
            const uint16_t ***l_364 = &l_365;
            int32_t l_376[3];
            int i;
            for (i = 0; i < 3; i++)
                l_376[i] = 0xCA99EF82L;
            (*p_40) = (g_272.f4 == ((g_122 ^ (((&g_90 == (((safe_lshift_func_uint8_t_u_u(l_359, (g_348 &= (safe_unary_minus_func_uint32_t_u(((!((*l_363) |= ((g_362 , ((void*)0 != &l_338)) , 4294967286UL))) >= g_96.f3)))))) < p_41) , l_232)) == l_359) && g_343)) && g_102.f1));
            (*l_364) = (void*)0;
            for (l_347 = 0; (l_347 > (-21)); l_347--)
            { 
                int32_t *l_369 = &g_343;
                int32_t *l_370 = &l_338;
                int32_t *l_371 = &l_292;
                int32_t *l_372 = &l_150;
                int32_t *l_373 = &g_343;
                int32_t *l_374[3][7][6] = {{{(void*)0,&l_347,(void*)0,(void*)0,&l_347,(void*)0},{&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5,&g_96.f5},{&l_342,(void*)0,(void*)0,&l_342,&l_347,&l_342},{&l_342,&l_347,&l_342,(void*)0,(void*)0,&l_342},{&g_96.f5,&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5},{(void*)0,&l_347,(void*)0,(void*)0,&l_347,(void*)0},{&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5,&g_96.f5}},{{&l_342,(void*)0,(void*)0,&l_342,&l_347,&l_342},{&l_342,&l_347,&l_342,(void*)0,(void*)0,&l_342},{&g_96.f5,&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5},{(void*)0,&l_347,(void*)0,(void*)0,&l_347,(void*)0},{&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5,&g_96.f5},{&l_342,(void*)0,(void*)0,&l_342,&l_347,&l_342},{&l_342,&l_347,&l_342,(void*)0,(void*)0,&l_342}},{{&g_96.f5,&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5},{(void*)0,&l_347,(void*)0,(void*)0,&l_347,(void*)0},{&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5,&g_96.f5},{&l_342,(void*)0,(void*)0,&l_342,&l_347,&l_342},{&l_342,&l_347,&l_342,(void*)0,(void*)0,&l_342},{&g_96.f5,&g_96.f5,(void*)0,(void*)0,(void*)0,&g_96.f5},{(void*)0,&l_347,(void*)0,(void*)0,&l_347,(void*)0}}};
                int16_t l_375 = 0x874FL;
                uint32_t l_377 = 0xA972CC96L;
                int i, j, k;
                l_377--;
                if (l_342)
                    break;
                for (g_96.f0 = 13; (g_96.f0 != 11); --g_96.f0)
                { 
                    int32_t **l_382 = &l_371;
                    if (l_344)
                        break;
                    if ((*p_40))
                        continue;
                    if (g_272.f7)
                        continue;
                    (*p_40) |= g_96.f1;
                    (*l_382) = &g_60;
                }
                for (g_346 = 2; (g_346 >= 0); g_346 -= 1)
                { 
                    int32_t **l_383 = &l_372;
                    int i, j, k;
                    l_376[g_346] &= 1L;
                    (*l_383) = l_374[g_346][(g_346 + 2)][g_346];
                }
                if (l_150)
                    continue;
            }
        }
        for (l_347 = 1; (l_347 <= 5); l_347 += 1)
        { 
            int32_t *l_384 = &g_343;
            int32_t *l_385 = &l_344;
            int32_t *l_386 = &g_60;
            int32_t *l_387 = (void*)0;
            int32_t *l_388 = &g_343;
            int32_t *l_389 = &l_66;
            int32_t *l_390[2];
            int16_t l_391 = 0xE943L;
            int8_t l_392[1][7][5] = {{{0xADL,0x82L,0xADL,6L,(-7L)},{0L,7L,0xE0L,0xCAL,0L},{0x90L,0xADL,1L,6L,1L},{0L,0L,(-1L),0L,7L},{0xADL,0x90L,0x90L,0xADL,1L},{0xCAL,0L,0xE0L,0xE0L,0L},{1L,0x90L,(-7L),0x82L,0x82L}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_390[i] = &l_342;
            for (g_105 = 0; (g_105 <= 5); g_105 += 1)
            { 
                int i;
                return g_6[l_347];
            }
            g_407--;
        }
        if (((*p_40) = (~((void*)0 == l_411))))
        { 
            g_96.f5 = g_96.f6.f1;
        }
        else
        { 
            int8_t * const **l_416 = &l_83;
            const int32_t l_433 = 0xFBFECCAFL;
            (*p_40) |= ((l_413 , &l_351) == (void*)0);
            (*p_40) &= (safe_mul_func_int8_t_s_s(((*l_56) ^= (((*l_416) = &l_54) == l_417)), ((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_422[3][1], (((g_423 == (((safe_lshift_func_uint8_t_u_u(l_403, (++g_362.f1))) != (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_433, (0L ^ (-1L)))), p_41))) , l_434)) , p_41) <= 0x46606DBFL))), l_435)) || p_41) > g_95) < 0xEE3586771EE5A731LL)));
            for (g_272.f7 = 28; (g_272.f7 != (-7)); g_272.f7 = safe_sub_func_int64_t_s_s(g_272.f7, 5))
            { 
                union U2 * const l_453 = &g_102;
                int32_t l_454 = (-1L);
                int32_t l_461 = 1L;
                int32_t *l_462 = &l_337;
                if (((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((p_41 < ((safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(p_41, 0x13AC9E36L)) >= (safe_mod_func_int64_t_s_s(((~((safe_lshift_func_uint16_t_u_u((l_453 == (void*)0), (p_41 | 3L))) == g_407)) > l_433), 0x96F73D7B1F6353CELL))), l_433)) >= 5L)), g_395)) <= p_41), p_41)), l_454)) | 9UL))
                { 
                    return (*p_40);
                }
                else
                { 
                    (*p_40) = l_454;
                }
                (*l_462) |= (l_461 |= (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*p_40), ((g_122 <= ((-10L) == (l_454 ^ p_41))) | l_454))), ((((*l_286) ^= (l_454 | 0x0AL)) < 0x0EL) || 65528UL))));
                return l_402[3][0][0];
            }
        }
    }
    l_154[1][1] |= ((l_463 , (((((safe_unary_minus_func_uint16_t_u(0x560CL)) < (safe_unary_minus_func_int32_t_s((p_41 == (safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(((p_41 == (l_470 & g_2)) <= l_413.f0), 9)) >= (*p_40)), l_66)))))) , (void*)0) == (void*)0) > g_51)) | 0L);
    for (l_470 = 1; (l_470 <= 5); l_470 += 1)
    { 
        int i;
        (*p_40) = (g_60 = (((((p_41 = ((-9L) ^ ((safe_mul_func_uint8_t_u_u(6UL, (g_172[l_470] | 0xDDADE9F8L))) , p_41))) >= ((((safe_add_func_int16_t_s_s((((+(1L || ((safe_rshift_func_uint8_t_u_u(g_151, 6)) >= 18446744073709551615UL))) != g_58) , 0xD1EDL), l_150)) , 3L) >= 0xB739L) | g_58)) | (*p_40)) | g_172[l_470]) > g_96.f4));
    }
    l_478 = l_478;
    return l_413.f7;
}



static int32_t * func_42(struct S1  p_43)
{ 
    const int16_t l_47 = 0x85DDL;
    int8_t *l_48[1];
    int8_t **l_49 = &l_48[0];
    int32_t *l_50 = &g_51;
    int i;
    for (i = 0; i < 1; i++)
        l_48[i] = &g_6[1];
    (*l_50) &= (safe_div_func_uint8_t_u_u((l_47 & g_6[1]), (0x564FCBDFL && ((((void*)0 != &g_2) <= (((*l_49) = l_48[0]) != (void*)0)) & p_43.f6.f0))));
    return &g_51;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_96.f4, "g_96.f4", print_hash_value);
    transparent_crc(g_96.f5, "g_96.f5", print_hash_value);
    transparent_crc(g_96.f6.f0, "g_96.f6.f0", print_hash_value);
    transparent_crc(g_96.f6.f1, "g_96.f6.f1", print_hash_value);
    transparent_crc(g_96.f7, "g_96.f7", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_272.f0, "g_272.f0", print_hash_value);
    transparent_crc(g_272.f1, "g_272.f1", print_hash_value);
    transparent_crc(g_272.f2, "g_272.f2", print_hash_value);
    transparent_crc(g_272.f3, "g_272.f3", print_hash_value);
    transparent_crc(g_272.f4, "g_272.f4", print_hash_value);
    transparent_crc(g_272.f5, "g_272.f5", print_hash_value);
    transparent_crc(g_272.f6.f0, "g_272.f6.f0", print_hash_value);
    transparent_crc(g_272.f6.f1, "g_272.f6.f1", print_hash_value);
    transparent_crc(g_272.f7, "g_272.f7", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_362.f0, "g_362.f0", print_hash_value);
    transparent_crc(g_362.f1, "g_362.f1", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_399[i], "g_399[i]", print_hash_value);

    }
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_502.f2, "g_502.f2", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_502.f4, "g_502.f4", print_hash_value);
    transparent_crc(g_502.f5, "g_502.f5", print_hash_value);
    transparent_crc(g_502.f6.f0, "g_502.f6.f0", print_hash_value);
    transparent_crc(g_502.f6.f1, "g_502.f6.f1", print_hash_value);
    transparent_crc(g_502.f7, "g_502.f7", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_667.f0, "g_667.f0", print_hash_value);
    transparent_crc(g_667.f1, "g_667.f1", print_hash_value);
    transparent_crc(g_667.f2, "g_667.f2", print_hash_value);
    transparent_crc(g_667.f3, "g_667.f3", print_hash_value);
    transparent_crc(g_667.f4, "g_667.f4", print_hash_value);
    transparent_crc(g_667.f5, "g_667.f5", print_hash_value);
    transparent_crc(g_667.f6.f0, "g_667.f6.f0", print_hash_value);
    transparent_crc(g_667.f6.f1, "g_667.f6.f1", print_hash_value);
    transparent_crc(g_667.f7, "g_667.f7", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1109[i], "g_1109[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1240[i][j].f0, "g_1240[i][j].f0", print_hash_value);
            transparent_crc(g_1240[i][j].f1, "g_1240[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_1252, "g_1252", print_hash_value);
    transparent_crc(g_1284, "g_1284", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1363, "g_1363", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1364[i], "g_1364[i]", print_hash_value);

    }
    transparent_crc(g_1634, "g_1634", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1637[i], "g_1637[i]", print_hash_value);

    }
    transparent_crc(g_1652, "g_1652", print_hash_value);
    transparent_crc(g_2038, "g_2038", print_hash_value);
    transparent_crc(g_2108.f0, "g_2108.f0", print_hash_value);
    transparent_crc(g_2108.f1, "g_2108.f1", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    transparent_crc(g_2320, "g_2320", print_hash_value);
    transparent_crc(g_2321, "g_2321", print_hash_value);
    transparent_crc(g_2322, "g_2322", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2464[i].f0, "g_2464[i].f0", print_hash_value);
        transparent_crc(g_2464[i].f1, "g_2464[i].f1", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
