// SPDX-License-Identifier: MIT
// cctest_csmith_0afb60a0.c --- cctest case csmith_0afb60a0 (csmith seed 184246432)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4160d3a8 */

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

// Options:   -s 184246432 -o /tmp/csmith_gen_27x1g1wx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 30;
};

union U2 {
   const uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint8_t  f3;
};


static int16_t g_26 = 0L;
static uint64_t g_28[5][5][3] = {{{0UL,3UL,0UL},{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL},{0UL,3UL,0UL},{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL},{0UL,3UL,0UL}},{{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL},{0UL,3UL,0UL},{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL},{0UL,3UL,0UL},{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL}},{{0UL,3UL,0UL},{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL},{0UL,3UL,0UL},{0xFF26AF9031EA0627LL,0x97440271DBCABEBFLL,0xFF26AF9031EA0627LL},{0UL,3UL,0UL}},{{0xFF26AF9031EA0627LL,0xFF26AF9031EA0627LL,18446744073709551611UL},{18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551611UL,0xFF26AF9031EA0627LL,18446744073709551611UL},{18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551611UL,0xFF26AF9031EA0627LL,18446744073709551611UL}},{{18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551611UL,0xFF26AF9031EA0627LL,18446744073709551611UL},{18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551611UL,0xFF26AF9031EA0627LL,18446744073709551611UL},{18446744073709551606UL,0UL,18446744073709551606UL}}};
static uint32_t g_44 = 0x51885A1EL;
static int64_t g_46 = 1L;
static struct S0 g_53 = {21399};
static union U2 g_55[4][3] = {{{0x9BDEFAB7L},{18446744073709551615UL},{0x9BDEFAB7L}},{{18446744073709551614UL},{0xC19C50EDL},{18446744073709551614UL}},{{0x9BDEFAB7L},{18446744073709551615UL},{0x9BDEFAB7L}},{{18446744073709551614UL},{0xC19C50EDL},{18446744073709551614UL}}};
static int32_t g_124 = 0x6F5F53E4L;
static int16_t g_127 = 0L;
static int64_t g_129[1] = {0x3FC1E9F9EEF7B85BLL};
static int16_t g_131 = (-1L);
static uint32_t g_135 = 1UL;
static int32_t g_146[2] = {1L,1L};
static int32_t g_163 = 0x1248EFB7L;
static uint8_t g_164 = 0xD4L;
static const uint8_t g_167 = 1UL;



static struct S0  func_1(void);
static uint64_t  func_5(union U2  p_6, int64_t  p_7, int16_t  p_8, uint64_t  p_9);
static union U2  func_10(int32_t  p_11);
static int32_t  func_12(struct S0  p_13);




static struct S0  func_1(void)
{ 
    int32_t l_4 = 0x5950707DL;
    int32_t l_123 = 0x27B072BDL;
    int32_t l_125 = 0xCEA799ADL;
    int32_t l_126 = 0xBB316AA2L;
    int32_t l_132 = 1L;
    int32_t l_134 = 0xF9043A1FL;
    uint32_t l_160 = 0xD5CE2574L;
    int32_t l_162 = 0x80C9BFB8L;
    l_123 |= (safe_sub_func_int16_t_s_s(l_4, (func_5(func_10(l_4), (safe_rshift_func_uint8_t_u_s((~(l_4 & 4294967291UL)), 5)), g_28[1][4][2], g_55[0][2].f1) == g_28[4][0][2])));
    for (g_46 = 0; (g_46 <= 2); g_46 += 1)
    { 
        int64_t l_128 = 0x65FAFB163631664ALL;
        int32_t l_130[1];
        int16_t l_133 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_130[i] = 0xDA865B3CL;
        g_135--;
        if (g_26)
            break;
        for (l_4 = 0; (l_4 <= 2); l_4 += 1)
        { 
            uint8_t l_161 = 0x37L;
        }
    }
    return g_53;
}



static uint64_t  func_5(union U2  p_6, int64_t  p_7, int16_t  p_8, uint64_t  p_9)
{ 
    int16_t l_65 = 0x29ADL;
    int32_t l_75 = (-3L);
    int32_t l_76 = 8L;
    if ((safe_div_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_s(g_55[0][2].f1, (safe_mod_func_int16_t_s_s((p_6 , l_65), 1UL)))))))
    { 
        int64_t l_74 = 0L;
        int32_t l_77 = 0xB14A51E2L;
        g_53.f0 = (safe_add_func_int16_t_s_s(0x02F4L, (g_26 , p_7)));
        l_77 = (safe_rshift_func_int8_t_s_u(g_44, (p_6.f3 < ((((((l_76 |= (l_75 = ((safe_sub_func_uint32_t_u_u(((g_26 &= 0x93F1L) && (((0x4E1338462C7DCB21LL == g_28[1][1][1]) | g_55[0][2].f0) | p_7)), l_65)) && l_74))) , p_6.f1) == 65529UL) > l_74) , l_65) < g_46))));
    }
    else
    { 
        int32_t l_98 = (-1L);
        int32_t l_115 = 0x9055545BL;
        uint64_t l_118 = 0x9816E0766B1C03A7LL;
        if ((safe_mul_func_uint8_t_u_u((--p_6.f3), (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((3L != (func_10((safe_div_func_uint16_t_u_u(1UL, ((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_55[0][2].f2, 0)), ((safe_add_func_int16_t_s_s((p_8 |= (p_9 && l_98)), l_65)) , p_9))), 0xC5L)), 0)) , l_65)))) , l_76)) >= g_28[1][4][1]), 0x11282808L)), l_98)))))
        { 
            uint32_t l_99 = 1UL;
            for (g_46 = 2; (g_46 >= 0); g_46 -= 1)
            { 
                int32_t l_113 = (-1L);
                int32_t l_114 = 0x2FD4BBA0L;
                l_99--;
                l_115 &= (l_114 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(0x85EFL, (((p_7 < (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_26, 15)), (safe_div_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u((g_55[0][2].f2 &= ((p_6 , l_98) >= 65532UL)))) || p_7), l_65))))) >= 1L) <= l_113))), g_46)));
                g_53.f0 = g_28[3][1][2];
            }
            l_75 &= l_76;
        }
        else
        { 
            l_98 = (l_75 | 0x6FCAFA2358462BD5LL);
        }
        if ((safe_rshift_func_uint8_t_u_s(g_55[0][2].f2, 0)))
        { 
            l_76 = (l_98 |= p_6.f3);
            l_118 = (-1L);
        }
        else
        { 
            g_53.f0 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(g_55[0][2].f1, l_118)), 8));
        }
    }
    return g_55[0][2].f2;
}



static union U2  func_10(int32_t  p_11)
{ 
    struct S0 l_14 = {-5100};
    if (func_12(l_14))
    { 
        return g_55[0][2];
    }
    else
    { 
        return g_55[2][0];
    }
}



static int32_t  func_12(struct S0  p_13)
{ 
    int32_t l_15 = (-1L);
    struct S0 l_54 = {32215};
    if (l_15)
    { 
        int32_t l_19 = 0L;
        int32_t l_24 = 8L;
        const uint8_t l_25 = 3UL;
        int32_t l_27 = 0x40C3F30BL;
        l_27 = (!((safe_add_func_int16_t_s_s((l_19 ^ 1L), ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((l_24 = 0x9A13L), ((g_26 &= (l_25 != (-5L))) & p_13.f0))), l_15)) | 1L))) || p_13.f0));
    }
    else
    { 
        int32_t l_43[3];
        union U2 l_47 = {8UL};
        int i;
        for (i = 0; i < 3; i++)
            l_43[i] = 0x5F4D0C65L;
        for (g_26 = 0; (g_26 <= 2); g_26 += 1)
        { 
            union U2 l_31 = {18446744073709551615UL};
            int32_t l_45 = 0x56A759F3L;
            for (l_15 = 0; (l_15 <= 2); l_15 += 1)
            { 
                uint16_t l_38 = 0x5BF8L;
                g_44 = (safe_mod_func_uint16_t_u_u((l_31 , (safe_sub_func_int32_t_s_s(l_31.f3, (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_38, (((safe_mod_func_uint8_t_u_u((l_43[2] |= (safe_mul_func_uint16_t_u_u(p_13.f0, p_13.f0))), 1UL)) <= l_15) != 0xF1L))), l_15))))), g_28[1][4][0]));
                if (p_13.f0)
                    break;
                g_46 |= (l_45 &= l_31.f1);
            }
            for (l_31.f2 = 0; (l_31.f2 <= 2); l_31.f2 += 1)
            { 
                uint64_t l_52 = 1UL;
                p_13.f0 = (((l_15 &= 0x9F88DD0BB265D632LL) , l_47) , ((0xD7E942FAL >= (safe_mod_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(((0x684CA67BL && l_15) ^ l_15), g_28[2][1][0])) < 0x8DL) , l_52) , 0x0FL), g_26))) < g_28[1][4][0]));
                if (p_13.f0)
                    break;
                g_53 = g_53;
            }
        }
    }
    l_54 = p_13;
    return p_13.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_28[i][j][k], "g_28[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_55[i][j].f0, "g_55[i][j].f0", print_hash_value);
            transparent_crc(g_55[i][j].f1, "g_55[i][j].f1", print_hash_value);
            transparent_crc(g_55[i][j].f2, "g_55[i][j].f2", print_hash_value);
            transparent_crc(g_55[i][j].f3, "g_55[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);

    }
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);

    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
