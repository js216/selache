// SPDX-License-Identifier: MIT
// cctest_csmith_d498c3f1.c --- cctest case csmith_d498c3f1 (csmith seed 3566781425)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcf177b32 */

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

// Options:   -s 3566781425 -o /tmp/csmith_gen_hqe9i4hp/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint8_t  f3;
   const int16_t  f4;
   uint32_t  f5;
};

struct S1 {
   uint64_t  f0;
   int16_t  f1;
   uint32_t  f2;
   int32_t  f3;
   int8_t  f4;
   unsigned f5 : 2;
   unsigned f6 : 20;
};

struct S2 {
   uint16_t  f0;
};

struct S3 {
   unsigned f0 : 23;
   unsigned f1 : 16;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   signed f0 : 6;
   signed f1 : 27;
   unsigned f2 : 9;
   unsigned f3 : 24;
   signed f4 : 30;
   uint64_t  f5;
   signed f6 : 7;
};
#pragma pack(pop)

union U5 {
   uint8_t  f0;
   struct S2  f1;
   struct S0  f2;
   const int32_t  f3;
};


static int32_t g_4 = 0x952F3411L;
static uint32_t g_27 = 0x4CCB090AL;
static int32_t g_30 = 0xA0BECC33L;
static const struct S2 g_39 = {1UL};
static uint64_t g_46 = 0xA8E1F916744FA755LL;
static struct S0 g_48 = {-1L,0x458D81C9L,18446744073709551615UL,0xE8L,0L,1UL};
static int16_t g_64 = (-1L);
static struct S1 g_66[4] = {{0UL,-1L,1UL,0x6675F713L,-8L,0,815},{0UL,-1L,1UL,0x6675F713L,-8L,0,815},{0UL,-1L,1UL,0x6675F713L,-8L,0,815},{0UL,-1L,1UL,0x6675F713L,-8L,0,815}};
static int8_t g_77[4] = {1L,1L,1L,1L};
static uint32_t g_153 = 1UL;
static int64_t g_166[1] = {0x3583291AC2CD0B65LL};
static int32_t g_167 = (-2L);
static uint32_t g_170 = 0xAE4C48B7L;
static int64_t *g_175[6] = {&g_166[0],&g_166[0],&g_166[0],&g_166[0],&g_166[0],&g_166[0]};
static int64_t **g_174 = &g_175[1];
static int32_t **g_182 = (void*)0;
static uint16_t g_184[1] = {65534UL};
static struct S3 g_196[7][5] = {{{2844,228},{1652,89},{1755,185},{1652,89},{2844,228}},{{1855,103},{199,183},{1795,51},{199,183},{1855,103}},{{2844,228},{1652,89},{1755,185},{1652,89},{2844,228}},{{1855,103},{199,183},{1795,51},{199,183},{1855,103}},{{2844,228},{1652,89},{1755,185},{1652,89},{2844,228}},{{1855,103},{199,183},{1795,51},{199,183},{1855,103}},{{1652,89},{1068,146},{2487,18},{1068,146},{1652,89}}};
static uint64_t *g_232 = &g_46;
static uint64_t **g_231 = &g_232;
static int8_t g_255 = 0x40L;
static int64_t g_258 = 0x5D67176CBD41AF20LL;
static int16_t g_259[2] = {0x021FL,0x021FL};
static uint16_t g_261 = 0x0CA0L;
static uint32_t g_266 = 0x102FAF71L;
static uint32_t g_285[3] = {0x8DB19007L,0x8DB19007L,0x8DB19007L};
static int64_t g_331 = 0L;
static int32_t *g_336[5][7][5] = {{{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3}},{{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0}},{{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3}},{{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1}},{{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3},{&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1,&g_48.f1},{&g_66[0].f3,&g_30,&g_4,&g_48.f1,&g_66[0].f3},{(void*)0,&g_48.f1,&g_66[0].f3,&g_48.f1,(void*)0},{&g_66[0].f3,&g_48.f1,&g_4,&g_30,&g_66[0].f3}}};
static const struct S0 g_343[7] = {{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L},{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L},{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L},{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L},{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L},{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L},{0xA1357D6EL,-2L,18446744073709551608UL,0xD1L,-1L,0x3BA39B05L}};
static struct S4 g_364 = {-6,6130,4,1975,28776,0UL,5};
static uint64_t g_426 = 1UL;
static int8_t *g_486 = &g_255;
static int8_t **g_485 = &g_486;
static int32_t * const *g_494 = &g_336[1][3][1];
static int32_t * const **g_493 = &g_494;
static int32_t * const ***g_492[6] = {&g_493,&g_493,&g_493,&g_493,&g_493,&g_493};
static int16_t *g_511[3][6] = {{&g_259[1],&g_259[1],&g_259[0],&g_259[1],&g_259[1],&g_259[0]},{&g_259[1],&g_259[1],&g_259[0],&g_259[1],&g_259[1],&g_259[0]},{&g_259[1],&g_259[1],&g_259[0],&g_259[1],&g_259[1],&g_259[0]}};
static int16_t **g_510 = &g_511[1][0];
static const uint64_t *g_521 = &g_46;
static const uint64_t **g_520 = &g_521;
static struct S0 g_528 = {0xC814164EL,0x5326FCD6L,1UL,1UL,0xF505L,1UL};
static struct S0 *g_527 = &g_528;
static int32_t g_541[2] = {0x7DA29976L,0x7DA29976L};
static uint16_t g_559 = 0UL;
static struct S3 *g_589 = &g_196[0][0];
static struct S3 **g_588 = &g_589;
static struct S3 **g_590[1][5][2] = {{{&g_589,&g_589},{&g_589,&g_589},{&g_589,&g_589},{&g_589,&g_589},{&g_589,&g_589}}};
static struct S1 *g_596 = &g_66[1];
static struct S1 **g_595 = &g_596;
static struct S0 **g_604 = &g_527;
static struct S0 *** const g_603 = &g_604;
static struct S0 *** const * const g_602[1] = {&g_603};
static struct S0 *** const * const *g_601 = &g_602[0];
static struct S0 *** const * const g_606 = (void*)0;
static struct S0 *** const * const *g_605[7][1] = {{&g_606},{&g_606},{&g_606},{&g_606},{&g_606},{&g_606},{&g_606}};
static struct S2 g_608 = {0x9267L};
static uint64_t g_697 = 18446744073709551608UL;
static uint8_t g_703 = 255UL;
static uint32_t g_732 = 0x13E9E615L;
static struct S0 g_817 = {0x5138783CL,2L,1UL,0x6BL,0x4BF1L,0xADB8ACE0L};
static union U5 g_872 = {1UL};
static struct S0 *****g_895 = (void*)0;
static const struct S2 *g_916 = &g_39;
static const struct S2 **g_915 = &g_916;
static const struct S2 ***g_914 = &g_915;
static struct S2 *g_984[4][2] = {{&g_608,&g_608},{&g_608,&g_608},{&g_608,&g_608},{&g_608,&g_608}};
static struct S2 **g_983[5] = {&g_984[2][0],&g_984[2][0],&g_984[2][0],&g_984[2][0],&g_984[2][0]};
static const struct S3 *g_1014 = &g_196[0][0];
static const struct S3 ** const g_1013 = &g_1014;
static const struct S3 ** const *g_1012[4][4] = {{&g_1013,&g_1013,&g_1013,&g_1013},{(void*)0,(void*)0,&g_1013,&g_1013},{&g_1013,&g_1013,&g_1013,&g_1013},{&g_1013,&g_1013,&g_1013,&g_1013}};
static uint64_t * const *g_1038 = &g_232;
static uint64_t * const **g_1037[3][5][4] = {{{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038}},{{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038}},{{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038},{&g_1038,&g_1038,&g_1038,&g_1038}}};
static struct S3 ***g_1160 = &g_588;
static struct S4 **g_1181 = (void*)0;
static uint32_t g_1259 = 0x6D3994DAL;
static union U5 g_1380 = {255UL};
static int32_t * const ****g_1383 = &g_492[5];
static union U5 *g_1408 = &g_1380;
static union U5 **g_1407 = &g_1408;
static union U5 ***g_1406 = &g_1407;



static int64_t  func_1(void);
static int8_t  func_5(uint64_t  p_6, struct S3  p_7, union U5  p_8);
static struct S3  func_10(uint8_t  p_11, int64_t  p_12);
static struct S4  func_13(uint64_t  p_14, int16_t  p_15);
static uint64_t  func_16(uint32_t  p_17);
static struct S0 * const  func_18(struct S3  p_19, struct S0 * p_20, uint32_t  p_21);
static int64_t  func_37(const struct S2  p_38);
static int32_t ** func_42(int32_t * p_43, struct S0  p_44);




static int64_t  func_1(void)
{ 
    uint32_t l_9 = 0UL;
    int32_t *l_1430[7][5][5] = {{{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]}},{{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1}},{{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4}},{{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1}},{{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]}},{{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1}},{{&g_4,&g_30,&g_4,&g_30,&g_4},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_541[1],&g_30,&g_541[1],&g_30,&g_541[1]},{&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1,&g_528.f1},{&g_4,&g_30,&g_4,&g_30,&g_4}}};
    uint32_t l_1431 = 1UL;
    int32_t l_1432[2][4] = {{5L,5L,5L,5L},{5L,5L,5L,5L}};
    uint64_t l_1433[4][5] = {{0x93197DFE61E534D3LL,0x93197DFE61E534D3LL,0x93197DFE61E534D3LL,0x93197DFE61E534D3LL,0x93197DFE61E534D3LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x93197DFE61E534D3LL,0x93197DFE61E534D3LL,0x93197DFE61E534D3LL,0x93197DFE61E534D3LL,0x93197DFE61E534D3LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    struct S3 l_1438 = {1267,72};
    uint32_t l_1441 = 1UL;
    int i, j, k;
    l_1431 = (safe_add_func_uint8_t_u_u(g_4, func_5(l_9, ((**g_588) = func_10(l_9, g_4)), (**g_1407))));
    --l_1433[0][2];
    for (g_64 = (-26); (g_64 <= 24); g_64 = safe_add_func_int64_t_s_s(g_64, 6))
    { 
        (**g_588) = l_1438;
        return (**g_174);
    }
    l_1441 |= (safe_lshift_func_uint16_t_u_u(g_64, 1));
    (*g_595) = (void*)0;
    return (**g_174);
}



static int8_t  func_5(uint64_t  p_6, struct S3  p_7, union U5  p_8)
{ 
    struct S2 *l_1429 = &g_608;
    l_1429 = (void*)0;
    return p_7.f1;
}



static struct S3  func_10(uint8_t  p_11, int64_t  p_12)
{ 
    int32_t l_879[6];
    struct S1 l_992 = {0x6955B59875271A16LL,-1L,0x57DFEFAEL,0xC0DC8994L,-1L,1,520};
    int32_t *l_996 = &g_528.f1;
    uint32_t l_1007 = 18446744073709551615UL;
    struct S3 l_1021 = {1014,153};
    uint64_t ***l_1034 = (void*)0;
    int8_t l_1036 = 0x31L;
    uint32_t l_1040 = 0UL;
    struct S0 l_1054 = {0L,0x0E18D181L,0xCF2B8C5830091A38LL,0x5EL,1L,0x50791E11L};
    int8_t l_1072 = 0x3CL;
    uint8_t *l_1099 = &g_703;
    struct S2 *l_1100 = &g_608;
    int32_t l_1101 = 0xD57B8887L;
    uint64_t l_1132 = 0xBBB98DC1E1B8E19BLL;
    uint32_t l_1201 = 1UL;
    int64_t l_1234 = (-3L);
    uint16_t l_1236 = 9UL;
    union U5 **l_1312 = (void*)0;
    uint32_t l_1371 = 0x2700B47DL;
    int32_t * const ****l_1384 = &g_492[1];
    uint16_t l_1428 = 0xEE9BL;
    int i;
    for (i = 0; i < 6; i++)
        l_879[i] = 1L;
    return l_1021;
}



static struct S4  func_13(uint64_t  p_14, int16_t  p_15)
{ 
    const struct S3 *l_891 = (void*)0;
    const struct S3 **l_890 = &l_891;
    const struct S3 ***l_889 = &l_890;
    struct S0 ***l_894 = &g_604;
    struct S0 ****l_893 = &l_894;
    struct S0 *****l_892[5][5] = {{&l_893,&l_893,&l_893,&l_893,&l_893},{&l_893,&l_893,&l_893,&l_893,&l_893},{&l_893,&l_893,&l_893,&l_893,&l_893},{&l_893,&l_893,&l_893,&l_893,&l_893},{&l_893,&l_893,&l_893,&l_893,&l_893}};
    struct S0 ** const *l_898 = &g_604;
    struct S0 ** const **l_897[6][5][5] = {{{&l_898,(void*)0,&l_898,&l_898,&l_898},{&l_898,&l_898,&l_898,(void*)0,(void*)0},{&l_898,&l_898,&l_898,&l_898,&l_898},{&l_898,(void*)0,&l_898,&l_898,&l_898},{(void*)0,&l_898,(void*)0,&l_898,&l_898}},{{&l_898,&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,&l_898,&l_898,&l_898},{&l_898,&l_898,&l_898,(void*)0,&l_898},{&l_898,&l_898,&l_898,&l_898,&l_898},{&l_898,&l_898,&l_898,&l_898,&l_898}},{{&l_898,&l_898,(void*)0,&l_898,&l_898},{&l_898,&l_898,(void*)0,(void*)0,&l_898},{(void*)0,&l_898,(void*)0,&l_898,&l_898},{&l_898,&l_898,&l_898,&l_898,&l_898},{&l_898,&l_898,&l_898,&l_898,&l_898}},{{(void*)0,&l_898,&l_898,&l_898,(void*)0},{&l_898,&l_898,&l_898,&l_898,(void*)0},{(void*)0,&l_898,&l_898,(void*)0,&l_898},{(void*)0,(void*)0,(void*)0,&l_898,(void*)0},{(void*)0,(void*)0,(void*)0,&l_898,&l_898}},{{&l_898,&l_898,(void*)0,&l_898,&l_898},{&l_898,&l_898,&l_898,&l_898,&l_898},{&l_898,&l_898,&l_898,(void*)0,&l_898},{&l_898,(void*)0,&l_898,&l_898,(void*)0},{(void*)0,&l_898,&l_898,&l_898,&l_898}},{{(void*)0,&l_898,&l_898,(void*)0,&l_898},{(void*)0,&l_898,(void*)0,&l_898,&l_898},{&l_898,(void*)0,(void*)0,&l_898,&l_898},{(void*)0,(void*)0,&l_898,&l_898,&l_898},{&l_898,&l_898,(void*)0,(void*)0,(void*)0}}};
    struct S0 ** const ***l_896 = &l_897[3][1][0];
    int32_t l_917 = 1L;
    struct S3 l_968 = {920,180};
    uint16_t *l_969 = &g_261;
    int32_t *l_970 = (void*)0;
    int32_t *l_971 = &g_30;
    int32_t *l_972 = &g_528.f1;
    int32_t *l_973 = &g_872.f2.f1;
    int32_t *l_974[3];
    int64_t l_975 = 0x9806901139E1C980LL;
    int16_t l_976 = 1L;
    uint64_t l_977 = 0xAB5221BCED95060ALL;
    struct S2 *l_981 = &g_608;
    struct S2 **l_980 = &l_981;
    struct S2 ***l_982[4][7] = {{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980},{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980},{(void*)0,&l_980,(void*)0,&l_980,(void*)0,&l_980,(void*)0},{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980,&l_980}};
    uint16_t l_985[6][3][7] = {{{0x845FL,0UL,0x0DE2L,0x5289L,0x0DE2L,0UL,0x845FL},{0x53DEL,0xDEFFL,0x7C7CL,0xE8C6L,0xE8C6L,0x7C7CL,0xDEFFL},{0x79F9L,0UL,65526UL,1UL,0x79F9L,1UL,65526UL}},{{0xE8C6L,65529UL,0x7C7CL,0UL,0x53DEL,0x53DEL,0UL},{0x0DE2L,0UL,0x0DE2L,1UL,0x845FL,0UL,0x845FL},{65529UL,0UL,0xDEFFL,0xE8C6L,0x53DEL,0x70B7L,0x70B7L}},{{0x79F9L,0x5289L,0UL,0x5289L,0x79F9L,0UL,0UL},{6UL,65529UL,0UL,0xDEFFL,0xE8C6L,0x53DEL,0x70B7L},{0x845FL,1UL,0x0DE2L,0UL,0x0DE2L,1UL,0x845FL}},{{6UL,0xDEFFL,0x70B7L,0xE8C6L,65529UL,0x7C7CL,0UL},{0x79F9L,1UL,65526UL,0UL,0x79F9L,0UL,65526UL},{65529UL,65529UL,0x70B7L,0UL,6UL,0x53DEL,0xDEFFL}},{{0x0DE2L,0x5289L,0x0DE2L,0UL,0x845FL,0x5289L,0x845FL},{0xE8C6L,0UL,0UL,0xE8C6L,6UL,0x70B7L,0x7C7CL},{0x79F9L,0UL,0UL,0UL,0x79F9L,0x5289L,0UL}},{{0x53DEL,65529UL,0xDEFFL,0xDEFFL,65529UL,0x53DEL,0x7C7CL},{0x845FL,0UL,0x0DE2L,0x5289L,0x0DE2L,0UL,0x845FL},{0x53DEL,0xDEFFL,0x7C7CL,0xE8C6L,0xE8C6L,0x7C7CL,0xDEFFL}}};
    struct S4 l_988 = {-0,1786,8,205,-17959,0x1FC61CFFD634CB74LL,-9};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_974[i] = (void*)0;
    for (g_817.f5 = (-13); (g_817.f5 != 41); g_817.f5 = safe_add_func_int16_t_s_s(g_817.f5, 9))
    { 
        const struct S3 **l_887 = (void*)0;
        const struct S3 ***l_886 = &l_887;
        const struct S3 ****l_888[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S0 ** const ***l_899 = (void*)0;
        int32_t *l_900 = &g_872.f2.f1;
        struct S2 *l_913 = &g_608;
        struct S2 **l_912 = &l_913;
        struct S2 ***l_911 = &l_912;
        int32_t l_920[3][2] = {{0xF052A6BFL,0xF052A6BFL},{0xF052A6BFL,0xF052A6BFL},{0xF052A6BFL,0xF052A6BFL}};
        int32_t l_921 = 1L;
        struct S1 l_942 = {0xBD11C624916F5D32LL,0L,0xD863FDB9L,0x2ABDA8F0L,0x73L,1,669};
        uint16_t *l_967 = &g_184[0];
        int i, j;
        l_889 = l_886;
        (*l_900) = ((g_895 = l_892[1][4]) == (l_899 = l_896));
        for (g_64 = 1; (g_64 >= 0); g_64 -= 1)
        { 
            int32_t l_934 = (-3L);
            int16_t * const *l_935 = &g_511[1][1];
            int32_t *l_960 = (void*)0;
            int i;
            (*l_900) = g_259[g_64];
            for (g_30 = 0; (g_30 <= 1); g_30 += 1)
            { 
                int32_t l_929[1];
                struct S2 l_945 = {0UL};
                struct S3 l_946 = {2558,57};
                uint16_t *l_953 = (void*)0;
                uint16_t *l_954 = &l_945.f0;
                int16_t **l_959 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_929[i] = 0L;
                (*l_900) = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((p_15 , (safe_sub_func_uint8_t_u_u(((g_259[g_30] &= (((0x55L | ((l_911 == g_914) | 0x9602L)) != l_917) ^ ((safe_add_func_uint32_t_u_u((&g_232 == &g_521), l_917)) & g_166[0]))) != p_14), p_15))), l_920[1][1])) >= p_15), p_14)), l_921)), (**g_485)));
                (*g_595) = (*g_595);
                if ((safe_unary_minus_func_int64_t_s((((((**g_174) = (safe_div_func_int32_t_s_s((p_14 >= (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((g_259[g_64] = (p_14 >= 0x4FB2B65FL)) >= p_14), (((l_929[0] < ((1UL && (safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u(l_917, (**g_174))) || g_77[3]) , p_14), 1))) == l_934)) , (void*)0) == l_935))), l_934))), g_4))) <= 1L) & l_917) | 0xC351980CL))))
                { 
                    struct S4 *l_943 = &g_364;
                    struct S4 **l_944 = &l_943;
                    (*l_944) = (((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((p_15 && ((void*)0 == (*g_603))), (-5L))), ((*g_486) = p_15))) && (((l_942 , p_15) > p_15) < g_343[1].f3)) , l_943);
                }
                else
                { 
                    l_945 = ((*l_913) = (***g_914));
                    (*g_589) = l_946;
                }
                (*l_900) = (safe_mod_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(((-1L) && 0x735B8C92L), l_945.f0)) && (l_917 >= (safe_rshift_func_uint16_t_u_u(((*l_954) = g_817.f2), (++g_184[0]))))), (safe_mod_func_uint32_t_u_u((((l_959 != (void*)0) & p_14) , 1UL), p_14))));
            }
            l_942.f3 |= p_14;
        }
        l_917 = (safe_add_func_uint64_t_u_u((1UL <= (0x4C680D3EDEA99743LL == (safe_mul_func_int16_t_s_s((5L != 1L), (safe_sub_func_int16_t_s_s((l_967 == ((l_968 = l_968) , l_969)), p_15)))))), 0xF6655B03D0F7865ALL));
    }
    --l_977;
    g_983[1] = l_980;
    l_985[3][2][6]++;
    (*l_972) &= p_15;
    return l_988;
}



static uint64_t  func_16(uint32_t  p_17)
{ 
    struct S3 l_22 = {454,98};
    struct S0 *l_23 = (void*)0;
    uint32_t *l_24 = (void*)0;
    uint32_t *l_25 = (void*)0;
    uint32_t *l_26 = &g_27;
    struct S0 **l_870[4][4][1] = {{{&g_527},{&l_23},{(void*)0},{&g_527}},{{(void*)0},{&l_23},{&g_527},{&g_527}},{{&l_23},{(void*)0},{&g_527},{(void*)0}},{{&l_23},{&g_527},{&g_527},{&l_23}}};
    struct S0 **l_871 = &l_23;
    uint32_t *l_873[6][2][1] = {{{(void*)0},{&g_153}},{{(void*)0},{&g_266}},{{&g_153},{&g_266}},{{(void*)0},{&g_153}},{{(void*)0},{&g_266}},{{&g_153},{&g_266}}};
    int32_t l_878 = 0x4ED8D4D1L;
    int i, j, k;
    (*l_871) = func_18(l_22, l_23, ((*l_26) = 0xBF5CBF79L));
    l_878 = ((g_153 |= (g_872 , 0x339AEFC1L)) , ((safe_unary_minus_func_uint16_t_u(l_22.f1)) | (+(l_22 , (g_46 , (((safe_sub_func_uint64_t_u_u(((&p_17 == ((l_22.f0 | l_22.f1) , &g_732)) <= l_22.f1), p_17)) , p_17) ^ l_22.f0))))));
    return (**g_520);
}



static struct S0 * const  func_18(struct S3  p_19, struct S0 * p_20, uint32_t  p_21)
{ 
    uint32_t l_28 = 1UL;
    int32_t *l_29 = &g_30;
    int8_t *l_572 = &g_77[3];
    uint8_t *l_573[7][7] = {{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3},{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3},{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3},{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3},{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3},{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3},{&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3,&g_528.f3}};
    int32_t *l_574[7];
    uint32_t l_575 = 0xCBC0B0EEL;
    uint32_t l_576[1];
    const union U5 l_583 = {0UL};
    struct S3 *l_585[7][4][4] = {{{&g_196[0][0],&g_196[2][4],(void*)0,&g_196[5][0]},{&g_196[0][0],&g_196[1][2],&g_196[0][0],&g_196[5][0]},{(void*)0,&g_196[2][4],&g_196[1][2],&g_196[0][0]},{&g_196[0][0],&g_196[2][4],(void*)0,(void*)0}},{{&g_196[5][0],&g_196[5][0],(void*)0,&g_196[2][4]},{&g_196[0][0],(void*)0,&g_196[1][2],&g_196[2][4]},{(void*)0,&g_196[1][2],&g_196[2][4],&g_196[1][2]},{&g_196[2][4],&g_196[1][2],(void*)0,&g_196[2][4]}},{{&g_196[1][2],(void*)0,&g_196[0][0],&g_196[2][4]},{(void*)0,&g_196[5][0],&g_196[5][0],(void*)0},{(void*)0,&g_196[2][4],&g_196[0][0],&g_196[0][0]},{&g_196[1][2],(void*)0,(void*)0,&g_196[0][0]}},{{&g_196[2][4],&g_196[1][0],&g_196[2][4],&g_196[0][0]},{(void*)0,(void*)0,&g_196[1][2],&g_196[0][0]},{&g_196[0][0],&g_196[2][4],(void*)0,(void*)0},{&g_196[5][0],&g_196[5][0],(void*)0,&g_196[2][4]}},{{&g_196[0][0],(void*)0,&g_196[1][2],&g_196[2][4]},{(void*)0,&g_196[1][2],&g_196[2][4],&g_196[1][2]},{&g_196[2][4],&g_196[1][2],(void*)0,&g_196[2][4]},{&g_196[1][2],(void*)0,&g_196[0][0],&g_196[2][4]}},{{(void*)0,&g_196[5][0],&g_196[5][0],(void*)0},{(void*)0,&g_196[2][4],&g_196[0][0],&g_196[0][0]},{&g_196[1][2],(void*)0,(void*)0,&g_196[0][0]},{&g_196[2][4],&g_196[1][0],&g_196[2][4],&g_196[0][0]}},{{(void*)0,(void*)0,&g_196[1][2],&g_196[0][0]},{&g_196[0][0],&g_196[2][4],(void*)0,(void*)0},{&g_196[5][0],&g_196[5][0],(void*)0,&g_196[2][4]},{&g_196[0][0],(void*)0,&g_196[1][2],&g_196[2][4]}}};
    struct S3 **l_584 = &l_585[2][2][1];
    struct S3 **l_587[2][2][1] = {{{&l_585[2][2][1]},{&l_585[4][1][3]}},{{&l_585[2][2][1]},{&l_585[4][1][3]}}};
    struct S3 ***l_586[4] = {&l_587[1][0][0],&l_587[1][0][0],&l_587[1][0][0],&l_587[1][0][0]};
    struct S1 **l_593 = (void*)0;
    struct S1 ***l_594 = &l_593;
    struct S2 *l_607 = &g_608;
    uint8_t l_687 = 0xB1L;
    struct S4 l_695[3] = {{-4,-5477,20,906,26911,5UL,9},{-4,-5477,20,906,26911,5UL,9},{-4,-5477,20,906,26911,5UL,9}};
    uint32_t l_726 = 0xE48686B2L;
    struct S4 l_727 = {-0,11227,14,596,-22121,0xEAD71A1CBFA66770LL,3};
    int64_t *l_739 = &g_258;
    uint32_t l_794 = 18446744073709551611UL;
    struct S0 *** const *l_806[2][3];
    struct S2 **l_823 = &l_607;
    const uint32_t l_843 = 1UL;
    uint16_t *l_850 = &g_559;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_574[i] = &g_541[1];
    for (i = 0; i < 1; i++)
        l_576[i] = 4294967288UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_806[i][j] = &g_603;
    }
    (*l_29) = l_28;
    l_575 = (safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((((*l_29) = func_37(g_39)) || (safe_div_func_uint32_t_u_u(((((**g_485) | (safe_lshift_func_int8_t_s_s((g_66[0].f4 >= 254UL), 1))) >= ((**g_510) = (safe_lshift_func_int8_t_s_u((((*l_29) = ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(g_343[1].f3, 6)) | (((*l_572) = (-2L)) >= g_170)), 0x8AL)) ^ (**g_510))) ^ 0x05L), 4)))) == (*g_521)), g_66[0].f1))), 3)) >= 0xA17FL) && g_153), 10)) == 0x7AL), g_196[0][0].f1));
    l_576[0]++;
    if ((((((**g_174) |= (safe_add_func_int32_t_s_s(p_19.f0, ((l_583 , ((*l_29) = ((l_584 != (g_590[0][1][1] = (g_588 = &l_585[2][2][1]))) ^ ((safe_lshift_func_int16_t_s_s((g_364 , p_21), 4)) ^ ((**g_231) = (((*l_594) = l_593) != g_595)))))) >= 0UL)))) , (**g_520)) && (**g_174)) == p_21))
    { 
        return &g_528;
    }
    else
    { 
        struct S0 **l_600 = (void*)0;
        struct S0 *** const l_599 = &l_600;
        struct S0 *** const * const l_598 = &l_599;
        struct S0 *** const * const *l_597[1][6];
        const int32_t l_642 = (-4L);
        int32_t l_645 = 0xC5A4F9EEL;
        int32_t *l_651 = (void*)0;
        struct S0 *** const *l_667 = &l_599;
        struct S0 *** const **l_666 = &l_667;
        struct S1 *l_685[7][7];
        uint16_t *l_686[7] = {(void*)0,&g_261,(void*)0,(void*)0,&g_261,(void*)0,(void*)0};
        struct S3 l_699 = {1002,171};
        int16_t l_708 = (-1L);
        uint32_t l_711[2];
        struct S4 *l_719 = &g_364;
        uint64_t *l_724 = (void*)0;
        uint64_t *l_725 = &g_426;
        int32_t l_749 = 1L;
        int32_t l_750[1];
        struct S0 *l_816 = &g_817;
        int16_t l_851[4] = {1L,1L,1L,1L};
        const uint32_t l_864[1] = {18446744073709551615UL};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_597[i][j] = &l_598;
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 7; j++)
                l_685[i][j] = &g_66[0];
        }
        for (i = 0; i < 2; i++)
            l_711[i] = 4294967295UL;
        for (i = 0; i < 1; i++)
            l_750[i] = 0x784AE7BAL;
        for (g_27 = 0; (g_27 <= 6); g_27 += 1)
        { 
            uint64_t *l_632[1];
            const int32_t l_633 = (-3L);
            uint16_t l_640 = 0x0CC1L;
            struct S0 * const l_646 = &g_528;
            int32_t l_650 = 0L;
            union U5 l_663 = {0x82L};
            int i;
            for (i = 0; i < 1; i++)
                l_632[i] = &g_48.f2;
            g_605[5][0] = (g_601 = l_597[0][4]);
            if ((l_607 == (void*)0))
            { 
                int32_t l_641 = 1L;
                int32_t l_644 = (-1L);
                int i;
                for (g_64 = 0; (g_64 <= 6); g_64 += 1)
                { 
                    struct S1 l_619[7][7] = {{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}},{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}},{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}},{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}},{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}},{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}},{{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{1UL,-10L,0x7F3CAE3EL,0xFAE5A7D0L,-1L,0,179},{0x95343C7AA64D807ALL,0x979EL,4294967295UL,3L,0x37L,1,12},{0x69846A0B9AF87E1BLL,0x356AL,4294967293UL,0x585B8967L,0x9AL,0,5},{0x5CDEE307F9F6FDB6LL,0x4091L,8UL,0x23F021ABL,0xCAL,1,104}}};
                    struct S1 *l_639[7][5][3] = {{{&g_66[0],&g_66[3],&g_66[0]},{&l_619[0][5],&l_619[0][5],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],&l_619[0][5]},{&g_66[0],&g_66[3],(void*)0},{&l_619[5][5],&g_66[0],&g_66[0]}},{{&g_66[0],&l_619[0][5],&l_619[0][5]},{&g_66[0],&g_66[0],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],&l_619[5][5]},{&l_619[0][5],&g_66[3],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],&g_66[3]}},{{&l_619[0][5],&g_66[0],(void*)0},{&l_619[0][5],&l_619[0][5],&l_619[0][5]},{&l_619[0][5],&l_619[5][5],&g_66[0]},{&l_619[0][5],&l_619[0][5],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],(void*)0}},{{&g_66[0],&l_619[0][5],&g_66[3]},{&l_619[5][5],&l_619[0][5],&l_619[0][5]},{&g_66[0],&l_619[5][5],&l_619[5][5]},{&l_619[5][5],&l_619[0][5],&l_619[0][5]},{&g_66[0],&g_66[0],&l_619[0][5]}},{{&l_619[0][5],&l_619[0][5],&l_619[5][5]},{&l_619[0][5],&g_66[3],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],&g_66[3]},{&l_619[0][5],&g_66[0],(void*)0},{&l_619[0][5],&l_619[0][5],&l_619[0][5]}},{{&l_619[0][5],&l_619[5][5],&g_66[0]},{&l_619[0][5],&l_619[0][5],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],(void*)0},{&g_66[0],&l_619[0][5],&g_66[3]},{&l_619[5][5],&l_619[0][5],&l_619[0][5]}},{{&g_66[0],&l_619[5][5],&l_619[5][5]},{&l_619[5][5],&l_619[0][5],&l_619[0][5]},{&g_66[0],&g_66[0],&l_619[0][5]},{&l_619[0][5],&l_619[0][5],&l_619[5][5]},{&l_619[0][5],&g_66[3],&l_619[0][5]}}};
                    struct S1 **l_638 = &l_639[2][4][2];
                    uint16_t *l_643[1][7][3] = {{{&g_608.f0,&g_608.f0,&g_608.f0},{&g_184[0],&g_184[0],&g_184[0]},{&g_608.f0,&g_608.f0,&g_608.f0},{&g_184[0],&g_184[0],&g_184[0]},{&g_608.f0,&g_608.f0,&g_608.f0},{&g_184[0],&g_184[0],&g_184[0]},{&g_608.f0,&g_608.f0,&g_608.f0}}};
                    int i, j, k;
                    (*l_29) = (safe_add_func_uint8_t_u_u(((l_645 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_644 |= (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((((l_619[0][5] , ((safe_mod_func_uint64_t_u_u((((*g_232)--) , (safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(((((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((*g_520) == l_632[0]), l_633)) < ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*g_589) , (*g_595)) != ((*l_638) = (*g_595))), l_640)), 0xACL)) & p_19.f1)), (*l_29))) & (**g_520)) < 0x0C1E924FL) , l_641), 11)) | p_19.f1) == 18446744073709551607UL), 0x21L))), l_640)) & 0x1107C1ECL)) == l_633) != 9UL) ^ g_66[0].f4) != l_619[0][5].f6) ^ l_642), p_19.f0)), l_633))), 10)), 0L))) ^ p_19.f1), (**g_485)));
                    return l_646;
                }
                g_336[1][1][0] = l_574[g_27];
                l_650 ^= (!(safe_div_func_uint32_t_u_u(0x3DB70349L, p_19.f1)));
                l_645 &= (((void*)0 == &g_231) & (-1L));
                for (g_255 = 4; (g_255 >= 1); g_255 -= 1)
                { 
                    uint32_t l_652 = 0xA3020252L;
                    l_651 = &l_644;
                    ++l_652;
                }
            }
            else
            { 
                uint8_t l_664 = 0x11L;
                uint32_t l_665[2][7];
                struct S0 *** const **l_668 = &l_667;
                struct S0 *** const **l_669 = (void*)0;
                int32_t **l_670 = &g_336[4][1][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_665[i][j] = 1UL;
                }
                l_669 = (l_668 = (((**g_485) = ((g_48.f3 = (((*l_572) &= (**g_485)) ^ (((safe_sub_func_int64_t_s_s((((*g_596) , ((p_19.f1 || 0x973D1ABFCFD46635LL) , (safe_div_func_uint8_t_u_u((l_665[0][2] &= ((safe_add_func_int16_t_s_s((**g_510), (((safe_add_func_uint64_t_u_u((0x2812L > (l_663 , 0x9B38L)), l_664)) == 255UL) > l_663.f0))) < 0x62L)), 246UL)))) , p_19.f0), l_664)) && 4UL) , (-3L)))) | p_21)) , l_666));
                (*l_670) = &l_650;
                (*g_595) = (*g_595);
            }
            return p_20;
        }
lbl_805:
        if (((l_687 = (safe_add_func_int8_t_s_s(((g_48.f3 |= g_343[1].f2) < p_19.f0), (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_645 = (g_528.f3 &= g_528.f2)))), ((((*g_232) &= (+((**g_510) = (safe_rshift_func_uint16_t_u_s(((*l_29) = ((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*g_486), (**g_485))), (p_21 && (((*g_596) , l_685[3][6]) != (*g_595))))), 4)) && 0xAEL)), 12))))) == p_19.f1) , p_19.f1)))))) & 1UL))
        { 
            int16_t l_696 = 0L;
            int32_t l_698 = 0x7BC9E9BDL;
            l_698 |= (((**g_174) = p_19.f1) | ((safe_unary_minus_func_int32_t_s((((safe_sub_func_uint16_t_u_u((l_645 = (((((*g_232) ^= (safe_mul_func_int8_t_s_s((*g_486), p_19.f1))) != (((((safe_div_func_uint64_t_u_u(((l_695[0] , (0UL & ((p_19.f1 >= 0x96L) , l_696))) || 0UL), (*l_29))) <= l_696) , p_19.f1) || (-3L)) <= g_697)) , g_255) <= p_19.f0)), p_21)) & p_19.f1) , p_19.f1))) == p_19.f1));
            return p_20;
        }
        else
        { 
            uint64_t *** const l_700 = &g_231;
            uint32_t *l_707[7] = {&g_266,&g_266,(void*)0,&g_266,&g_266,(void*)0,&g_266};
            int i;
            (*l_29) = ((l_645 ^= ((l_699 , (((void*)0 == l_700) || ((safe_rshift_func_int8_t_s_u(8L, ((*g_486) , g_703))) != (~(safe_add_func_uint16_t_u_u(g_64, 0xC573L)))))) >= 0xDE5EL)) , l_699.f0);
        }
        if ((g_528.f4 , (((((g_528.f3 |= ((((((*g_232) = (**g_231)) ^ (l_708 >= (g_184[0] = ((safe_rshift_func_uint16_t_u_s(((l_711[1] != (((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u((g_703 = (safe_lshift_func_int8_t_s_u(((**g_485) = ((safe_mod_func_uint32_t_u_u((((*l_719) = g_364) , 4294967295UL), (safe_add_func_int64_t_s_s((((*l_725) = ((safe_mod_func_uint64_t_u_u((p_21 >= g_541[1]), 1UL)) , 0x15F462FD8F9F3F1ELL)) >= p_19.f0), 0x72D49D1955585B54LL)))) != (**g_485))), p_21))))) | p_21) & 0x8177B5838CA81B4ALL), 0xF5L)) > 253UL) || p_19.f0)) < (**g_174)), 11)) | g_343[1].f3)))) || 0xF6BCC45283E8344BLL) >= 4294967291UL) > (*l_29))) <= p_19.f1) >= 1UL) ^ l_726) <= 0xBCL)))
        { 
            int64_t *l_737 = &g_166[0];
            int64_t **l_738 = &l_737;
            int64_t **l_740 = &l_739;
            int32_t l_744 = 0xE7F62653L;
            int32_t l_745 = 0x453C04CAL;
            int32_t l_746 = 0x5C9497F4L;
            int32_t l_752 = 0xAEBC92A4L;
            int32_t l_755 = 0x9F6C09FFL;
            int32_t l_756[5] = {0xD02CBBDAL,0xD02CBBDAL,0xD02CBBDAL,0xD02CBBDAL,0xD02CBBDAL};
            uint32_t l_758 = 0x4BE46202L;
            const struct S0 * const l_789 = &g_343[1];
            const struct S0 * const * const l_788[2][6] = {{&l_789,&l_789,(void*)0,&l_789,&l_789,(void*)0},{&l_789,&l_789,(void*)0,&l_789,&l_789,(void*)0}};
            struct S0 * const l_804 = &g_48;
            int32_t *l_807[6][5] = {{&l_752,&l_752,&l_755,&l_756[1],&g_4},{&l_756[1],&l_752,(void*)0,(void*)0,&g_4},{&l_752,&l_756[1],(void*)0,&l_756[1],(void*)0},{&l_752,&l_752,&l_755,&l_756[1],&g_4},{&l_756[1],&l_752,(void*)0,(void*)0,&g_4},{&l_752,&l_756[1],(void*)0,&l_756[1],(void*)0}};
            uint32_t l_815 = 4UL;
            int32_t ***l_847 = &g_182;
            uint32_t l_865[1][2][5];
            struct S2 *l_867 = &g_608;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_865[i][j][k] = 1UL;
                }
            }
            l_695[0] = l_727;
            if ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0x3C00L, g_732)), (safe_sub_func_int16_t_s_s(((**g_510) = ((safe_sub_func_int64_t_s_s(((g_64 , ((*l_738) = ((*g_174) = l_737))) != ((*l_740) = l_739)), (~(g_528.f3 < (safe_add_func_int8_t_s_s((&l_740 != &l_740), l_744)))))) || p_21)), p_19.f1)))))
            { 
                int16_t l_747[1][5][1] = {{{(-8L)},{(-1L)},{(-8L)},{(-1L)},{(-8L)}}};
                int32_t l_748 = 0xB3A49B5FL;
                int32_t l_751 = 0xD74E0538L;
                int32_t l_753 = 3L;
                int32_t l_754[3][7][3] = {{{(-10L),(-10L),7L},{(-10L),7L,7L},{7L,0x899D1CA9L,1L},{(-10L),0x899D1CA9L,(-10L)},{(-10L),7L,1L},{(-10L),(-10L),7L},{(-10L),7L,7L}},{{7L,(-10L),0x899D1CA9L},{1L,(-10L),1L},{7L,(-10L),0x899D1CA9L},{7L,7L,(-10L)},{1L,(-10L),(-10L)},{(-10L),(-10L),0x899D1CA9L},{1L,(-10L),1L}},{{7L,(-10L),0x899D1CA9L},{7L,7L,(-10L)},{1L,(-10L),(-10L)},{(-10L),(-10L),0x899D1CA9L},{1L,(-10L),1L},{7L,(-10L),0x899D1CA9L},{7L,7L,(-10L)}}};
                int32_t l_757 = 0L;
                int i, j, k;
                l_758++;
                if ((safe_sub_func_uint64_t_u_u(p_21, (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_19.f0, p_19.f0)) < ((((*l_572) = (safe_div_func_int32_t_s_s(((((l_745 |= (g_261 = (0x42A0L && p_21))) <= g_39.f0) || (~(safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_755 = (((**g_485) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_756[0], (*g_486))), 0x44L))) || l_699.f1)), 0x58A7L)), 0L)))))) , (-1L)), p_19.f1))) != g_343[1].f5) != l_756[0])), (*l_29))))))
                { 
                    int32_t l_790 = (-4L);
                    int32_t l_791 = 0x43446AAAL;
                    int32_t *l_792 = &l_756[1];
                    int32_t **l_793 = &l_792;
                    (*l_29) &= (safe_add_func_uint16_t_u_u(0x0CF4L, (((safe_mul_func_uint8_t_u_u(g_732, (safe_sub_func_int8_t_s_s((((l_791 &= (&l_687 == ((0x43134BCCF706E701LL & ((++g_48.f3) , ((&p_20 != ((safe_unary_minus_func_uint16_t_u(p_19.f0)) , l_788[1][3])) || l_790))) , (void*)0))) != p_21) == 0xA0BCC0F9L), 0UL)))) < p_21) && g_184[0])));
                    (*l_793) = l_792;
                    ++l_794;
                    l_746 &= (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((**l_793) = (g_66[0].f0 || 0UL)))), (safe_div_func_uint32_t_u_u(0x9C5B56F8L, (safe_add_func_int32_t_s_s((*l_29), (-1L)))))));
                }
                else
                { 
                    return l_804;
                }
            }
            else
            { 
                uint32_t l_820[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                struct S0 *l_841 = &g_48;
                struct S1 l_842 = {18446744073709551608UL,6L,0x6E15DBDFL,-3L,-8L,0,699};
                int32_t l_845 = 0xD209AB3AL;
                struct S3 l_846 = {2158,40};
                int i;
                if (g_364.f5)
                    goto lbl_805;
                l_806[1][2] = l_806[1][2];
                l_807[4][2] = (**g_493);
                if (((((((((safe_sub_func_uint8_t_u_u(((~(g_27 && (--g_48.f3))) >= p_21), (safe_div_func_int16_t_s_s(((void*)0 == &g_596), g_528.f4)))) , (void*)0) != &g_184[0]) >= p_19.f0) < g_266) != 0x2A792920F98347B7LL) || 0UL) < l_815))
                { 
                    uint32_t l_818 = 0xA81827CFL;
                    int32_t l_819 = (-10L);
                    l_816 = ((****g_601) = p_20);
                    (*l_29) ^= l_818;
                    (*l_607) = g_39;
                    l_819 = ((void*)0 != (*g_510));
                    (*l_29) = l_820[0];
                }
                else
                { 
                    struct S2 **l_824 = &l_607;
                    int32_t l_844 = 9L;
                    (*l_29) = (safe_mul_func_int16_t_s_s(((&l_607 == (l_824 = l_823)) & (safe_lshift_func_uint16_t_u_s((l_845 |= ((safe_mod_func_int16_t_s_s((((*l_29) & (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((**g_510) = (**g_510)) | (l_841 != ((l_842 = l_842) , (**g_603)))) || 0xA775L), (**g_485))), g_46)) && l_842.f2) | l_820[5]) & l_843) | (*l_29)) != p_21), l_844)), g_285[0])), 4)), 8UL))) > l_820[0]), p_19.f1)) | p_19.f1)), p_21))), g_66[0].f3));
                    (*l_29) &= (l_820[0] <= (l_846 , (((*l_737) = (((void*)0 == l_847) ^ (((*g_486) &= (((((((*l_719) , (safe_lshift_func_uint8_t_u_s(((((*l_739) &= p_21) ^ (65535UL >= p_21)) || p_21), 4))) & (*g_521)) >= 6L) , (void*)0) == l_850) != l_851[3])) , (-2L)))) | (*g_521))));
                }
                l_574[3] = l_574[0];
            }
            for (g_266 = 16; (g_266 == 18); g_266++)
            { 
                uint32_t l_863[4];
                const int32_t l_866[3] = {0xDC588878L,0xDC588878L,0xDC588878L};
                int i;
                for (i = 0; i < 4; i++)
                    l_863[i] = 0xC0C58AB4L;
                l_749 = (((safe_mul_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(((*g_486) = 1L), (p_19.f0 || ((safe_add_func_int64_t_s_s((*l_29), (0x7EL && (((~(l_863[3] = (safe_rshift_func_uint8_t_u_s((0L > (l_645 |= 255UL)), 0)))) > 0x3F0BL) & l_864[0])))) ^ p_21)))) ^ l_865[0][1][2]) == l_866[1]) >= p_19.f1), 8L)) , p_19.f1) && l_863[3]);
            }
            (*l_823) = l_867;
        }
        else
        { 
            uint8_t l_868 = 0x94L;
            struct S1 *l_869 = &g_66[1];
            for (g_261 = 0; (g_261 <= 3); g_261 += 1)
            { 
                (*g_588) = &p_19;
                (*l_29) = l_868;
                (*g_595) = l_869;
            }
            return p_20;
        }
    }
    return p_20;
}



static int64_t  func_37(const struct S2  p_38)
{ 
    int32_t *l_47[2][5] = {{(void*)0,&g_30,(void*)0,(void*)0,&g_30},{&g_30,(void*)0,(void*)0,&g_30,(void*)0}};
    int16_t *l_281 = &g_64;
    struct S0 *l_298 = &g_48;
    struct S0 * const *l_297 = &l_298;
    struct S0 * const **l_296 = &l_297;
    int32_t ***l_379 = &g_182;
    int32_t *** const *l_378 = &l_379;
    int8_t l_382 = 0xB0L;
    const int16_t ** const * const l_415 = (void*)0;
    struct S3 * const l_440 = &g_196[4][1];
    struct S3 * const *l_439 = &l_440;
    struct S1 l_455 = {1UL,-1L,4294967290UL,1L,-4L,1,243};
    uint16_t l_482 = 0x6067L;
    int32_t l_529[4] = {0xBEA4F0C5L,0xBEA4F0C5L,0xBEA4F0C5L,0xBEA4F0C5L};
    int32_t l_534 = 0xA9154283L;
    int32_t l_536[2];
    int32_t l_537 = (-6L);
    uint32_t l_542 = 1UL;
    int64_t * const *l_552[1][2];
    uint32_t l_557 = 0x7F3C4D4DL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_536[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_552[i][j] = &g_175[5];
    }
    return p_38.f0;
}



static int32_t ** func_42(int32_t * p_43, struct S0  p_44)
{ 
    int64_t l_49 = 3L;
    int32_t *l_52 = (void*)0;
    int32_t **l_51 = &l_52;
    int32_t ***l_50 = &l_51;
    int32_t ****l_53 = &l_50;
    struct S0 *l_58 = &g_48;
    struct S0 **l_57 = &l_58;
    struct S0 *l_59[3][1];
    int16_t *l_62 = (void*)0;
    int16_t *l_63 = &g_64;
    uint16_t l_106 = 0xA17AL;
    union U5 l_126 = {0UL};
    int32_t l_150[5];
    int64_t **l_176[7] = {&g_175[1],&g_175[1],&g_175[1],&g_175[1],&g_175[1],&g_175[1],&g_175[1]};
    int16_t **l_179 = &l_63;
    struct S4 l_183[7] = {{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9},{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9},{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9},{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9},{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9},{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9},{1,-5693,3,546,-23163,0xA6F6E398B15E2B98LL,9}};
    struct S2 l_217 = {0xCF80L};
    uint8_t *l_253 = &l_126.f0;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_59[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
        l_150[i] = 3L;
lbl_173:
    p_44.f1 ^= l_49;
    (*l_53) = l_50;
    if (((safe_rshift_func_uint8_t_u_u((!(((*l_57) = &g_48) != l_59[1][0])), 7)) , (safe_mul_func_int16_t_s_s(((*l_63) &= (-1L)), (g_48.f2 >= (safe_unary_minus_func_int64_t_s(0xF5F6F594A39B7B3FLL)))))))
    { 
        int16_t *l_75 = (void*)0;
        const int32_t l_76 = 1L;
        int64_t *l_78 = &l_49;
        int32_t l_79 = (-10L);
        uint16_t l_122 = 65528UL;
        const struct S0 *l_131 = &g_48;
        const struct S0 **l_130 = &l_131;
        int32_t l_152 = 0L;
        int32_t l_162 = (-1L);
        int32_t l_163 = 0x44A4BF25L;
        int32_t l_164 = 0x4299DA23L;
        int32_t l_165 = 0x9F75E263L;
        int32_t l_169 = 0x4882178CL;
        int32_t **l_181 = &l_52;
        struct S3 l_192 = {2241,209};
        int8_t l_241[3][2] = {{0L,0L},{2L,0L},{0L,2L}};
        int i, j;
lbl_84:
        l_79 |= (g_66[0] , ((((*l_78) = ((safe_div_func_uint8_t_u_u((g_66[0].f5 >= (((safe_add_func_uint32_t_u_u(((g_46 < ((((65526UL <= (-3L)) , (safe_sub_func_uint32_t_u_u(((p_44.f2 , l_75) != (void*)0), l_76))) == g_66[0].f0) ^ p_44.f2)) && l_76), p_44.f1)) ^ g_48.f4) > l_76)), 0x4DL)) == g_77[3])) > 3UL) >= 0UL));
lbl_98:
        for (l_49 = 0; (l_49 < 4); l_49 = safe_add_func_int64_t_s_s(l_49, 3))
        { 
            uint16_t l_94 = 0xBD24L;
            int32_t *l_97 = &g_66[0].f3;
            for (p_44.f2 = (-17); (p_44.f2 < 56); ++p_44.f2)
            { 
                if (g_48.f4)
                    goto lbl_84;
            }
            if (g_64)
                goto lbl_98;
            (*l_97) |= (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((((((safe_sub_func_int8_t_s_s(l_94, p_44.f0)) , g_48.f1) == g_48.f1) <= ((((p_44.f0 > l_79) , (safe_add_func_int8_t_s_s((g_27 , p_44.f4), 0xCAL))) & g_77[1]) > g_66[0].f1)) != g_48.f4) , p_44.f4) < 0xD6C5L) < 0xF785D6CF981355DALL), p_44.f5)), l_94)), 5)) > 0xA2E2E988A7CC15BCLL)));
        }
        for (p_44.f2 = 0; (p_44.f2 >= 37); ++p_44.f2)
        { 
            struct S1 l_105[5] = {{0xA34BD0913F082F4DLL,-9L,1UL,-10L,0xB3L,1,794},{0xA34BD0913F082F4DLL,-9L,1UL,-10L,0xB3L,1,794},{0xA34BD0913F082F4DLL,-9L,1UL,-10L,0xB3L,1,794},{0xA34BD0913F082F4DLL,-9L,1UL,-10L,0xB3L,1,794},{0xA34BD0913F082F4DLL,-9L,1UL,-10L,0xB3L,1,794}};
            int16_t l_108 = 0xADF1L;
            uint8_t l_116 = 0xA6L;
            const struct S0 *l_128 = &g_48;
            const struct S0 **l_127 = &l_128;
            int32_t l_151 = 0x358C8BF5L;
            int i;
            for (l_49 = 0; (l_49 <= (-14)); l_49 = safe_sub_func_int64_t_s_s(l_49, 9))
            { 
                int32_t *l_109 = &g_48.f1;
                int32_t *l_110 = &g_48.f1;
                int32_t *l_111 = &g_48.f1;
                int32_t *l_112 = (void*)0;
                int32_t *l_113 = &l_105[0].f3;
                int32_t *l_114 = (void*)0;
                int32_t *l_115[7] = {&l_105[0].f3,&l_105[0].f3,&l_105[0].f3,&l_105[0].f3,&l_105[0].f3,&l_105[0].f3,&l_105[0].f3};
                int i;
                for (g_48.f3 = 0; (g_48.f3 <= 28); g_48.f3 = safe_add_func_uint32_t_u_u(g_48.f3, 6))
                { 
                    (***l_53) = (l_105[0] , p_43);
                    if (l_106)
                        break;
                    (*l_51) = p_43;
                }
                (*l_109) = ((~l_108) == (-1L));
                l_116++;
                (*l_110) |= (l_76 != (0x1CA74A03L ^ ((((safe_add_func_uint8_t_u_u((g_77[3] == p_44.f4), (p_44.f1 | (~g_46)))) >= l_79) == g_4) && l_105[0].f1)));
                l_122++;
            }
            for (l_79 = 0; (l_79 <= 4); l_79 += 1)
            { 
                struct S0 l_125 = {0xAAA38964L,0xED555874L,0UL,0xE7L,-1L,7UL};
                int32_t *l_132 = &g_66[0].f3;
                int32_t *l_133 = &g_66[0].f3;
                int32_t *l_134 = &l_125.f1;
                int32_t *l_135 = &g_48.f1;
                int32_t *l_136 = (void*)0;
                int32_t *l_137 = &g_66[0].f3;
                int32_t *l_138 = &g_66[0].f3;
                int32_t *l_139 = &l_126.f2.f1;
                int32_t *l_140 = &l_125.f1;
                int32_t *l_141 = (void*)0;
                int32_t *l_142 = &l_105[0].f3;
                int32_t *l_143 = &g_66[0].f3;
                int32_t *l_144 = &l_105[0].f3;
                int32_t *l_145 = (void*)0;
                int32_t *l_146 = &l_125.f1;
                int32_t *l_147 = &l_105[0].f3;
                int32_t *l_148 = &l_126.f2.f1;
                int32_t *l_149[4] = {&l_105[0].f3,&l_105[0].f3,&l_105[0].f3,&l_105[0].f3};
                uint32_t *l_156 = &g_48.f5;
                int i;
                for (l_108 = 4; (l_108 >= 0); l_108 -= 1)
                { 
                    const struct S0 ***l_129[7][6] = {{&l_127,&l_127,&l_127,(void*)0,&l_127,&l_127},{(void*)0,&l_127,&l_127,&l_127,(void*)0,&l_127},{&l_127,(void*)0,&l_127,&l_127,&l_127,(void*)0},{(void*)0,(void*)0,&l_127,(void*)0,(void*)0,(void*)0},{&l_127,&l_127,&l_127,(void*)0,&l_127,&l_127},{(void*)0,&l_127,&l_127,&l_127,(void*)0,&l_127},{&l_127,(void*)0,&l_127,&l_127,&l_127,(void*)0}};
                    int i, j;
                    l_130 = (l_125 , (l_126 , l_127));
                }
                --g_153;
                if ((((*l_156) = p_44.f0) || 0x0F91DEE4L))
                { 
                    uint32_t **l_159 = &l_156;
                    int32_t l_160 = (-6L);
                    g_48.f1 = (safe_add_func_uint64_t_u_u((((*l_159) = &g_27) != &g_27), ((g_48.f1 != g_4) == l_160)));
                }
                else
                { 
                    const int8_t l_161 = 0xCEL;
                    int32_t l_168 = (-7L);
                    (*l_51) = (void*)0;
                    (*l_142) = l_161;
                    ++g_170;
                    l_137 = (void*)0;
                    if (g_153)
                        goto lbl_173;
                }
                l_176[6] = g_174;
            }
            for (l_164 = 25; (l_164 < (-7)); l_164 = safe_sub_func_uint32_t_u_u(l_164, 4))
            { 
                int16_t ***l_180 = &l_179;
                (*l_180) = l_179;
            }
            return g_182;
        }
        if ((l_183[2] , g_184[0]))
        { 
            uint64_t *l_186 = &g_48.f2;
            uint64_t **l_185 = &l_186;
            uint64_t **l_187[1];
            int32_t l_199 = 6L;
            const struct S0 *l_216[5][2][7] = {{{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48}},{{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48}},{{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48}},{{&g_48,&g_48,&g_48,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,(void*)0,&g_48,(void*)0,&g_48,&g_48}},{{&g_48,&g_48,(void*)0,&g_48,(void*)0,&g_48,&g_48},{&g_48,&g_48,(void*)0,&g_48,(void*)0,&g_48,&g_48}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_187[i] = (void*)0;
            l_187[0] = (l_185 = (void*)0);
            for (p_44.f2 = 0; (p_44.f2 <= 51); p_44.f2++)
            { 
                const int32_t *l_197 = (void*)0;
                struct S0 l_208 = {0x396D215DL,8L,18446744073709551612UL,3UL,0x2088L,0xFC6894C8L};
                struct S2 l_212 = {0xEEA9L};
                int64_t l_237 = (-7L);
                struct S4 l_239[7][7][5] = {{{{-6,-11295,11,1092,-22888,0x5514BFDCD4D27462LL,-7},{-6,-10967,14,1261,-20543,2UL,-9},{-5,2013,21,2740,22711,18446744073709551615UL,3},{1,5308,14,3645,29032,0x33CF6F25CD862EAFLL,8},{-3,2163,11,986,-30927,0x2E1CA82341EFE3EALL,-6}},{{1,6321,9,2714,-12569,0UL,1},{6,4761,13,740,1084,18446744073709551615UL,6},{1,3423,14,2814,5867,0x2B5989D2F6EB1F39LL,7},{3,5847,15,861,-15133,0x6D69CE97E0EC33E8LL,10},{-3,3472,2,816,6512,0xE97882754541C646LL,9}},{{7,10364,13,776,15556,0x68E61B92BA6CF05BLL,3},{1,-6277,16,3621,-17146,0xA2F8BC75F3E8FABFLL,5},{7,6659,5,283,14317,0UL,-1},{-2,7371,18,27,-11825,0x5C510BFA6F946EF1LL,-3},{-7,-3742,10,1566,15492,1UL,3}},{{2,6482,7,2972,-7243,0x1CE318A9A59BAC4ALL,2},{7,10725,0,2858,-20317,0x69677FBA8FC994EALL,-4},{2,3691,1,1354,26331,18446744073709551614UL,-4},{4,-10198,11,3274,26770,7UL,2},{4,5919,20,3363,-16143,0x9F5B1E060BF896EDLL,9}},{{0,-4288,13,440,14839,0UL,-1},{7,6659,5,283,14317,0UL,-1},{4,-10198,11,3274,26770,7UL,2},{7,-6590,12,1817,-31761,18446744073709551615UL,5},{2,2688,19,1048,-31981,8UL,-9}},{{3,11560,19,2517,9864,0x3BD277505CF3AA05LL,8},{-7,-3742,10,1566,15492,1UL,3},{1,-7078,0,338,-21521,0x2581A573045CA483LL,-1},{2,3691,1,1354,26331,18446744073709551614UL,-4},{5,2149,7,1262,-487,0UL,9}},{{1,5308,14,3645,29032,0x33CF6F25CD862EAFLL,8},{-6,-1027,6,503,-3888,0UL,2},{5,2149,7,1262,-487,0UL,9},{-1,5890,0,1112,29476,1UL,1},{-6,2330,8,14,27626,0xEA8529B2F41D3285LL,8}}},{{{3,10382,13,2765,-7926,1UL,-9},{6,718,7,3491,-26036,0xD1E233BC691B77CFLL,-10},{5,-3806,20,40,-8174,0xD85D12BE0C65E12BLL,-5},{-4,10786,6,3563,19457,0xDEF38617D44FB6F4LL,7},{6,4761,13,740,1084,18446744073709551615UL,6}},{{-4,10267,18,1813,29463,0x124CE05F07CB16B7LL,6},{-3,10903,19,1558,-15896,0xAEBE9915F671C7E4LL,-5},{0,-11544,1,2891,6384,18446744073709551609UL,-3},{0,-6949,13,3822,30645,18446744073709551615UL,2},{1,3057,15,3929,26834,0x41D301FC7AE0A9D3LL,8}},{{7,10364,13,776,15556,0x68E61B92BA6CF05BLL,3},{3,11560,19,2517,9864,0x3BD277505CF3AA05LL,8},{7,-7031,9,2000,7535,0UL,-1},{-1,9702,11,1252,-19973,0x17C66CCFA5AEBE9ELL,1},{-5,2013,21,2740,22711,18446744073709551615UL,3}},{{-1,9702,11,1252,-19973,0x17C66CCFA5AEBE9ELL,1},{3,10965,18,3889,21920,0x516A13217A38F7A2LL,-2},{-5,7182,19,1566,-24236,0x5BD6D65A8F09C824LL,6},{7,1678,17,3873,14845,0UL,-1},{7,-5253,18,3385,22838,0x4C041E97ADAF23B5LL,0}},{{2,2367,21,1487,-25090,0x8EB8ACBB8F690F0ALL,10},{-6,1581,5,4055,25087,5UL,3},{-0,-635,13,170,-8639,0x66ED0BEC7A0F729FLL,3},{5,2149,7,1262,-487,0UL,9},{5,9201,6,1479,9972,0UL,8}},{{-4,-4499,10,2629,6337,1UL,-3},{6,-355,0,3482,27576,0x4D6DC9EE6F4B5C2CLL,4},{1,-7078,0,338,-21521,0x2581A573045CA483LL,-1},{5,4747,12,1767,31975,0x99EDAFD709BB61F3LL,-9},{5,9201,6,1479,9972,0UL,8}},{{3,10965,18,3889,21920,0x516A13217A38F7A2LL,-2},{-2,7371,18,27,-11825,0x5C510BFA6F946EF1LL,-3},{2,2688,19,1048,-31981,8UL,-9},{-6,-10967,14,1261,-20543,2UL,-9},{7,-5253,18,3385,22838,0x4C041E97ADAF23B5LL,0}}},{{{1,-6277,16,3621,-17146,0xA2F8BC75F3E8FABFLL,5},{-6,-10967,14,1261,-20543,2UL,-9},{0,3999,1,1583,17250,9UL,-5},{-1,175,6,2735,23318,0xE10E5CE82039155DLL,9},{-5,2013,21,2740,22711,18446744073709551615UL,3}},{{4,-5570,2,3046,-2767,0x5387034F7F432ADDLL,-4},{6,-6366,7,1186,-4757,1UL,-0},{0,2992,9,3458,11990,0x7CBA8AB6190955EDLL,-2},{0,-7550,19,1115,-30669,0x3E6DED1B19E4E2A6LL,4},{1,3057,15,3929,26834,0x41D301FC7AE0A9D3LL,8}},{{6,10724,21,3889,-12276,0x6AAB76A276C94B1DLL,2},{1,-7078,0,338,-21521,0x2581A573045CA483LL,-1},{3,10382,13,2765,-7926,1UL,-9},{7,3484,11,707,6323,0xBCBC91AEC19C680ALL,-7},{6,4761,13,740,1084,18446744073709551615UL,6}},{{6,718,7,3491,-26036,0xD1E233BC691B77CFLL,-10},{-4,10786,6,3563,19457,0xDEF38617D44FB6F4LL,7},{-2,4296,11,3222,16509,0xE10322254527A59ALL,-1},{4,-10198,11,3274,26770,7UL,2},{-6,2330,8,14,27626,0xEA8529B2F41D3285LL,8}},{{1,6321,9,2714,-12569,0UL,1},{-7,-5864,19,894,-6268,7UL,-0},{7,1678,17,3873,14845,0UL,-1},{-2,-10985,16,2143,-7888,0x7743525ACAF8924DLL,-6},{5,2149,7,1262,-487,0UL,9}},{{-6,1581,5,4055,25087,5UL,3},{6,-355,0,3482,27576,0x4D6DC9EE6F4B5C2CLL,4},{7,6659,5,283,14317,0UL,-1},{1,-3436,18,590,-23339,18446744073709551611UL,-5},{2,2688,19,1048,-31981,8UL,-9}},{{0,-6949,13,3822,30645,18446744073709551615UL,2},{7,10364,13,776,15556,0x68E61B92BA6CF05BLL,3},{2,192,17,3802,-4084,18446744073709551614UL,-5},{-5,5784,1,1054,-15875,0x8067EE7919F86830LL,7},{4,5919,20,3363,-16143,0x9F5B1E060BF896EDLL,9}}},{{{3,10382,13,2765,-7926,1UL,-9},{5,3412,7,2326,30532,7UL,-3},{-7,-3742,10,1566,15492,1UL,3},{3,5861,18,3149,4524,18446744073709551615UL,-6},{-7,-3742,10,1566,15492,1UL,3}},{{-7,-3742,10,1566,15492,1UL,3},{-7,-3742,10,1566,15492,1UL,3},{-2,4265,14,932,9217,1UL,-2},{0,-7550,19,1115,-30669,0x3E6DED1B19E4E2A6LL,4},{-3,3472,2,816,6512,0xE97882754541C646LL,9}},{{-5,5784,1,1054,-15875,0x8067EE7919F86830LL,7},{7,-7031,9,2000,7535,0UL,-1},{2,-2933,2,2580,1499,1UL,-5},{-1,5890,0,1112,29476,1UL,1},{-3,2163,11,986,-30927,0x2E1CA82341EFE3EALL,-6}},{{-2,-3525,10,1486,23732,18446744073709551615UL,7},{6,9901,20,2964,-4872,0x1B5C318BE8490D8DLL,-6},{-5,7182,19,1566,-24236,0x5BD6D65A8F09C824LL,6},{2,1415,0,914,-1136,18446744073709551609UL,7},{3,5847,15,861,-15133,0x6D69CE97E0EC33E8LL,10}},{{-4,10267,18,1813,29463,0x124CE05F07CB16B7LL,6},{7,-7031,9,2000,7535,0UL,-1},{-5,-2000,17,1138,-29396,0x4D0B19FE640AC8E9LL,-9},{-2,-3678,12,3255,9719,0x506DAA5E9E9086A2LL,0},{-1,-10704,6,714,-4218,18446744073709551607UL,-7}},{{-6,1581,5,4055,25087,5UL,3},{-7,-3742,10,1566,15492,1UL,3},{7,-7031,9,2000,7535,0UL,-1},{-0,-635,13,170,-8639,0x66ED0BEC7A0F729FLL,3},{2,1409,3,872,22938,0xF1B8ECEDB7DDFE16LL,-2}},{{-4,-10839,18,1048,-15405,0xF63417869A76FBACLL,-7},{5,3412,7,2326,30532,7UL,-3},{7,4664,7,3787,18128,0x1A9F2FD136104D24LL,10},{-2,-3525,10,1486,23732,18446744073709551615UL,7},{7,-5253,18,3385,22838,0x4C041E97ADAF23B5LL,0}}},{{{-6,-11295,11,1092,-22888,0x5514BFDCD4D27462LL,-7},{7,10364,13,776,15556,0x68E61B92BA6CF05BLL,3},{1,6321,9,2714,-12569,0UL,1},{-4,-10839,18,1048,-15405,0xF63417869A76FBACLL,-7},{-4,-109,4,3893,-8964,18446744073709551609UL,0}},{{-3,2163,11,986,-30927,0x2E1CA82341EFE3EALL,-6},{6,-355,0,3482,27576,0x4D6DC9EE6F4B5C2CLL,4},{-2,4265,14,932,9217,1UL,-2},{0,-6949,13,3822,30645,18446744073709551615UL,2},{-3,4844,10,773,-12517,2UL,-3}},{{5,3412,7,2326,30532,7UL,-3},{-7,-5864,19,894,-6268,7UL,-0},{3,11560,19,2517,9864,0x3BD277505CF3AA05LL,8},{-6,-10967,14,1261,-20543,2UL,-9},{-3,10903,19,1558,-15896,0xAEBE9915F671C7E4LL,-5}},{{7,3484,11,707,6323,0xBCBC91AEC19C680ALL,-7},{-4,10786,6,3563,19457,0xDEF38617D44FB6F4LL,7},{2,3691,1,1354,26331,18446744073709551614UL,-4},{-2,4296,11,3222,16509,0xE10322254527A59ALL,-1},{-1,175,6,2735,23318,0xE10E5CE82039155DLL,9}},{{4,-5570,2,3046,-2767,0x5387034F7F432ADDLL,-4},{1,-7078,0,338,-21521,0x2581A573045CA483LL,-1},{7,-7048,18,96,22076,0UL,-3},{2,192,17,3802,-4084,18446744073709551614UL,-5},{-1,-10704,6,714,-4218,18446744073709551607UL,-7}},{{-4,-4499,10,2629,6337,1UL,-3},{6,-6366,7,1186,-4757,1UL,-0},{3,10382,13,2765,-7926,1UL,-9},{3,2960,1,3397,-10903,0xCA354A29A4AC84FFLL,5},{-7,-3742,10,1566,15492,1UL,3}},{{1,-3436,18,590,-23339,18446744073709551611UL,-5},{-6,-11295,11,1092,-22888,0x5514BFDCD4D27462LL,-7},{1,6321,9,2714,-12569,0UL,1},{3,10382,13,2765,-7926,1UL,-9},{2,3691,1,1354,26331,18446744073709551614UL,-4}}},{{{3,10965,18,3889,21920,0x516A13217A38F7A2LL,-2},{3,11560,19,2517,9864,0x3BD277505CF3AA05LL,8},{1,-7554,5,2326,10478,0x52E893FEBC825388LL,-7},{4,-10198,11,3274,26770,7UL,2},{5,-5596,20,2184,-1624,1UL,0}},{{-6,-4013,7,1623,-23877,18446744073709551615UL,0},{7,7627,12,3628,-27147,6UL,-2},{-6,-8387,1,602,27056,18446744073709551610UL,-7},{4,-10198,11,3274,26770,7UL,2},{-2,-3525,10,1486,23732,18446744073709551615UL,7}},{{-4,-4499,10,2629,6337,1UL,-3},{7,-5253,18,3385,22838,0x4C041E97ADAF23B5LL,0},{7,10725,0,2858,-20317,0x69677FBA8FC994EALL,-4},{3,10382,13,2765,-7926,1UL,-9},{1,9574,16,3745,17398,0UL,2}},{{1,-6277,16,3621,-17146,0xA2F8BC75F3E8FABFLL,5},{0,7936,7,4007,-30315,0xC481FF659E5E0E00LL,9},{1,3423,14,2814,5867,0x2B5989D2F6EB1F39LL,7},{-2,-3678,12,3255,9719,0x506DAA5E9E9086A2LL,0},{7,1678,17,3873,14845,0UL,-1}},{{-6,4265,8,2381,-23317,0UL,-3},{-7,-10169,3,1619,25350,18446744073709551615UL,-3},{2,-10467,2,3187,32147,0xB1F11E9C1D866102LL,3},{-4,-109,4,3893,-8964,18446744073709551609UL,0},{4,-5570,2,3046,-2767,0x5387034F7F432ADDLL,-4}},{{-7,-10169,3,1619,25350,18446744073709551615UL,-3},{0,4946,19,229,-15487,18446744073709551608UL,1},{3,10965,18,3889,21920,0x516A13217A38F7A2LL,-2},{5,2149,7,1262,-487,0UL,9},{0,3999,1,1583,17250,9UL,-5}},{{3,2960,1,3397,-10903,0xCA354A29A4AC84FFLL,5},{-7,-5864,19,894,-6268,7UL,-0},{-5,2013,21,2740,22711,18446744073709551615UL,3},{-6,-11295,11,1092,-22888,0x5514BFDCD4D27462LL,-7},{4,-10198,11,3274,26770,7UL,2}}},{{{-6,2330,8,14,27626,0xEA8529B2F41D3285LL,8},{7,-8854,13,3945,21458,0x1E45251D0803106ALL,-3},{0,4946,19,229,-15487,18446744073709551608UL,1},{-7,2890,8,416,-11474,1UL,8},{-3,-926,20,1092,12184,0x67762DA6596622A9LL,-3}},{{-6,-4013,7,1623,-23877,18446744073709551615UL,0},{-6,4265,8,2381,-23317,0UL,-3},{5,-3806,20,40,-8174,0xD85D12BE0C65E12BLL,-5},{7,-7048,18,96,22076,0UL,-3},{-1,9702,11,1252,-19973,0x17C66CCFA5AEBE9ELL,1}},{{7,6659,5,283,14317,0UL,-1},{4,4086,10,3129,-26271,18446744073709551607UL,1},{-1,175,6,2735,23318,0xE10E5CE82039155DLL,9},{1,-6277,16,3621,-17146,0xA2F8BC75F3E8FABFLL,5},{0,4946,19,229,-15487,18446744073709551608UL,1}},{{-7,-5864,19,894,-6268,7UL,-0},{-5,-2000,17,1138,-29396,0x4D0B19FE640AC8E9LL,-9},{0,2992,9,3458,11990,0x7CBA8AB6190955EDLL,-2},{0,2992,9,3458,11990,0x7CBA8AB6190955EDLL,-2},{-5,-2000,17,1138,-29396,0x4D0B19FE640AC8E9LL,-9}},{{-2,-4940,9,960,3968,0x2FF69AB204D8F182LL,-4},{0,-6949,13,3822,30645,18446744073709551615UL,2},{2,-10467,2,3187,32147,0xB1F11E9C1D866102LL,3},{-3,2163,11,986,-30927,0x2E1CA82341EFE3EALL,-6},{-3,10903,19,1558,-15896,0xAEBE9915F671C7E4LL,-5}},{{4,4086,10,3129,-26271,18446744073709551607UL,1},{-4,7445,4,3708,8540,6UL,7},{-7,-10169,3,1619,25350,18446744073709551615UL,-3},{-1,1312,6,1933,-507,0xBA3A9F7FF6CDE482LL,-1},{5,-3806,20,40,-8174,0xD85D12BE0C65E12BLL,-5}},{{5,4747,12,1767,31975,0x99EDAFD709BB61F3LL,-9},{-6,-11295,11,1092,-22888,0x5514BFDCD4D27462LL,-7},{-4,-109,4,3893,-8964,18446744073709551609UL,0},{2,-2933,2,2580,1499,1UL,-5},{-0,-635,13,170,-8639,0x66ED0BEC7A0F729FLL,3}}}};
                int i, j, k;
                for (l_164 = 3; (l_164 >= (-24)); --l_164)
                { 
                    struct S3 *l_193 = &l_192;
                    struct S3 *l_194 = (void*)0;
                    struct S3 *l_195 = &g_196[0][0];
                    const int32_t **l_198 = &l_197;
                    (*l_195) = ((*l_193) = l_192);
                    (*l_198) = l_197;
                    l_199 = 0x7D125F7AL;
                    (**l_50) = p_43;
                }
                if ((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((p_44.f1 < ((p_44.f0 , (safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s(g_66[0].f4, 0xA9CCL)), ((*g_174) != (l_208 , l_186))))) , g_66[0].f6)), 4294967288UL)), p_44.f2)))
                { 
                    int32_t *l_215 = &l_199;
                    (**l_50) = (void*)0;
                    if (g_184[0])
                        continue;
                    (*l_215) = (safe_add_func_int32_t_s_s(0x57381F49L, ((((((*g_174) != (void*)0) | (p_44.f1 ^= (~g_184[0]))) & (**g_174)) < (l_212 , (safe_sub_func_int8_t_s_s(((p_44.f3 < p_44.f3) > p_44.f3), g_77[3])))) || p_44.f0)));
                }
                else
                { 
                    int32_t *l_218 = (void*)0;
                    int32_t *l_219 = &l_165;
                    uint8_t *l_233 = &l_126.f2.f3;
                    uint8_t *l_234 = (void*)0;
                    uint8_t *l_235 = &l_126.f2.f3;
                    uint8_t *l_236 = &g_48.f3;
                    struct S1 l_238[1][5][7] = {{{{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38}},{{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141},{0x56CEAAE59B509E70LL,1L,0x45F0763AL,0L,0x7FL,0,354},{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141},{0x56CEAAE59B509E70LL,1L,0x45F0763AL,0L,0x7FL,0,354},{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141},{0x56CEAAE59B509E70LL,1L,0x45F0763AL,0L,0x7FL,0,354},{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141}},{{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38}},{{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141},{0x56CEAAE59B509E70LL,1L,0x45F0763AL,0L,0x7FL,0,354},{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141},{0x56CEAAE59B509E70LL,1L,0x45F0763AL,0L,0x7FL,0,354},{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141},{0x56CEAAE59B509E70LL,1L,0x45F0763AL,0L,0x7FL,0,354},{0xEF01CE23668E1CF2LL,0x1555L,0xDE583D30L,0x9C672CBDL,0L,0,141}},{{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38},{3UL,0x025DL,4294967289UL,9L,0x23L,0,38}}}};
                    struct S4 *l_240 = &l_183[2];
                    int i, j, k;
                    (*l_219) = (((*l_130) = l_216[3][0][4]) == (l_217 , &g_48));
                    (*l_240) = (((safe_mod_func_uint16_t_u_u((((g_48.f1 ^= (((void*)0 != g_182) && ((safe_sub_func_uint32_t_u_u((+(safe_mul_func_int8_t_s_s((g_48.f5 , (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((0x87L & ((*l_236) ^= (g_231 != &g_232))), ((*l_78) = p_44.f5))), 15)) <= g_170) >= l_199)), 0x0BL))), l_237)) | 0L))) , l_238[0][2][4]) , 0x4288L), p_44.f4)) , p_44.f1) , l_239[1][5][2]);
                }
            }
        }
        else
        { 
            int64_t l_242[3][5];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_242[i][j] = 0x41F14162AAEC976FLL;
            }
            p_44.f1 |= l_241[1][1];
            if (l_242[1][3])
            { 
                int8_t *l_245 = (void*)0;
                int8_t *l_246[5][6] = {{&g_77[3],&g_77[3],&l_241[0][1],&g_77[3],&g_77[3],&l_241[0][1]},{&g_77[3],&g_77[3],&l_241[0][1],&g_77[3],&g_77[3],&l_241[0][1]},{&g_77[3],&g_77[3],&l_241[0][1],&g_77[3],&g_77[3],&l_241[0][1]},{&g_77[3],&g_77[3],&l_241[0][1],&g_77[3],&g_77[3],&l_241[0][1]},{&g_77[3],&g_77[3],&l_241[0][1],&g_77[3],&g_77[3],&l_241[0][1]}};
                int32_t l_247[4];
                uint32_t *l_248 = &g_170;
                uint8_t *l_249 = &l_126.f0;
                int32_t *l_250 = (void*)0;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_247[i] = 0xB9FC59DEL;
                l_183[2].f1 |= (safe_add_func_uint8_t_u_u(((l_247[3] = g_66[0].f4) || ((*l_249) = (((*l_248) ^= p_44.f5) , p_44.f1))), (0xDE6B32EFL & g_167)));
                return g_182;
            }
            else
            { 
                return g_182;
            }
        }
    }
    else
    { 
        uint8_t *l_251 = &l_126.f0;
        int16_t *l_252 = &g_66[0].f1;
        int32_t *l_254 = &g_66[0].f3;
        (*l_254) = ((((((*l_251) |= (g_48.f5 && g_66[0].f2)) & p_44.f5) != ((void*)0 == l_252)) , l_253) == (void*)0);
    }
    return g_182;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_48.f4, "g_48.f4", print_hash_value);
    transparent_crc(g_48.f5, "g_48.f5", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_66[i].f0, "g_66[i].f0", print_hash_value);
        transparent_crc(g_66[i].f1, "g_66[i].f1", print_hash_value);
        transparent_crc(g_66[i].f2, "g_66[i].f2", print_hash_value);
        transparent_crc(g_66[i].f3, "g_66[i].f3", print_hash_value);
        transparent_crc(g_66[i].f4, "g_66[i].f4", print_hash_value);
        transparent_crc(g_66[i].f5, "g_66[i].f5", print_hash_value);
        transparent_crc(g_66[i].f6, "g_66[i].f6", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_184[i], "g_184[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_196[i][j].f0, "g_196[i][j].f0", print_hash_value);
            transparent_crc(g_196[i][j].f1, "g_196[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_259[i], "g_259[i]", print_hash_value);

    }
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_285[i], "g_285[i]", print_hash_value);

    }
    transparent_crc(g_331, "g_331", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_343[i].f0, "g_343[i].f0", print_hash_value);
        transparent_crc(g_343[i].f1, "g_343[i].f1", print_hash_value);
        transparent_crc(g_343[i].f2, "g_343[i].f2", print_hash_value);
        transparent_crc(g_343[i].f3, "g_343[i].f3", print_hash_value);
        transparent_crc(g_343[i].f4, "g_343[i].f4", print_hash_value);
        transparent_crc(g_343[i].f5, "g_343[i].f5", print_hash_value);

    }
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_364.f3, "g_364.f3", print_hash_value);
    transparent_crc(g_364.f4, "g_364.f4", print_hash_value);
    transparent_crc(g_364.f5, "g_364.f5", print_hash_value);
    transparent_crc(g_364.f6, "g_364.f6", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f1, "g_528.f1", print_hash_value);
    transparent_crc(g_528.f2, "g_528.f2", print_hash_value);
    transparent_crc(g_528.f3, "g_528.f3", print_hash_value);
    transparent_crc(g_528.f4, "g_528.f4", print_hash_value);
    transparent_crc(g_528.f5, "g_528.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_541[i], "g_541[i]", print_hash_value);

    }
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_608.f0, "g_608.f0", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_817.f0, "g_817.f0", print_hash_value);
    transparent_crc(g_817.f1, "g_817.f1", print_hash_value);
    transparent_crc(g_817.f2, "g_817.f2", print_hash_value);
    transparent_crc(g_817.f3, "g_817.f3", print_hash_value);
    transparent_crc(g_817.f4, "g_817.f4", print_hash_value);
    transparent_crc(g_817.f5, "g_817.f5", print_hash_value);
    transparent_crc(g_872.f0, "g_872.f0", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1380.f0, "g_1380.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
