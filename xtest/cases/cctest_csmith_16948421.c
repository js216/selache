// SPDX-License-Identifier: MIT
// cctest_csmith_16948421.c --- cctest case csmith_16948421 (csmith seed 378831905)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x271591e2 */
/* @exp_ticks 0x38ce */

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

// Options:   -s 378831905 -o /tmp/csmith_gen_8az6jn5e/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
};

union U2 {
   const int8_t  f0;
   const struct S0  f1;
};

union U4 {
   uint32_t  f0;
   uint8_t  f1;
};

union U5 {
   int64_t  f0;
   int8_t  f1;
   int64_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   int16_t  f1;
   struct S0  f2;
};
#pragma pack(pop)

union U6 {
   struct S1  f0;
   int32_t  f1;
};


static uint64_t g_12 = 0UL;
static int32_t g_13[5][3] = {{(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L)}};
static union U5 g_14 = {0L};
static const struct S0 g_18 = {0x5477A75EL,0xAA9CL};
static struct S0 g_34 = {0xB36352B7L,1UL};
static uint16_t g_58 = 0xD197L;
static uint32_t g_65 = 0x95DE17A8L;
static uint64_t g_122[2] = {0x022BA7A0367B5E8CLL,0x022BA7A0367B5E8CLL};
static union U6 g_123 = {{18446744073709551607UL,0x12FFL,{0x156313A3L,65534UL}}};



static union U6  func_1(void);
static int8_t  func_2(int32_t  p_3, struct S0  p_4, union U5  p_5, const int16_t  p_6, int32_t  p_7);
static union U5  func_10(uint32_t  p_11);
static union U2  func_15(const struct S0  p_16, union U2  p_17);




static union U6  func_1(void)
{ 
    int8_t l_8 = (-1L);
    struct S0 l_9[2][4][5] = {{{{-2L,0x9740L},{0xF9150FAEL,0x382EL},{0xF9150FAEL,0x382EL},{-2L,0x9740L},{0x92715EE5L,0xE31BL}},{{-2L,0x9740L},{0x10E6B6CDL,65535UL},{1L,5UL},{-2L,0x9740L},{-10L,65527UL}},{{1L,0x0FA1L},{0x10E6B6CDL,65535UL},{0xF9150FAEL,0x382EL},{1L,0x0FA1L},{-10L,65527UL}},{{-2L,0x9740L},{0xF9150FAEL,0x382EL},{0xF9150FAEL,0x382EL},{-2L,0x9740L},{0x92715EE5L,0xE31BL}}},{{{-2L,0x9740L},{0x10E6B6CDL,65535UL},{1L,5UL},{-2L,0x9740L},{-10L,65527UL}},{{1L,0x0FA1L},{0x10E6B6CDL,65535UL},{0xF9150FAEL,0x382EL},{1L,0x0FA1L},{0x7BE2D3D4L,65535UL}},{{-10L,0x72A6L},{0L,0x5A44L},{0L,0x5A44L},{-10L,0x72A6L},{2L,0xE92EL}},{{-10L,0x72A6L},{1L,0x0FA1L},{-2L,0x9740L},{-10L,0x72A6L},{0x7BE2D3D4L,65535UL}}}};
    int64_t l_111[2][5];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_111[i][j] = 0x35B92F13429A001ALL;
    }
    g_13[4][1] = (((((((g_122[0] = func_2((l_8 &= 0x8900FDB6L), l_9[1][0][4], (g_14 = func_10(g_12)), g_18.f0, l_111[0][2])) & l_111[0][1]) > g_18.f1) && g_122[1]) && l_9[1][0][4].f0) ^ 0xE431997A29FED146LL) > 4294967292UL);
    return g_123;
}



static int8_t  func_2(int32_t  p_3, struct S0  p_4, union U5  p_5, const int16_t  p_6, int32_t  p_7)
{ 
    const struct S0 l_114 = {0L,1UL};
    union U2 l_115[2][1] = {{{0x3CL}},{{0x3CL}}};
    int32_t l_116 = 0x0D65803AL;
    int i, j;
    g_34 = p_4;
    l_116 = (safe_mod_func_int64_t_s_s(p_5.f1, (p_4.f0 || (func_15(l_114, func_15(l_114, l_115[0][0])) , 0L))));
    for (g_14.f2 = 0; (g_14.f2 != 25); g_14.f2 = safe_add_func_int32_t_s_s(g_14.f2, 5))
    { 
        int8_t l_121[3][4][4] = {{{0x08L,0x08L,(-1L),0L},{7L,0xC7L,0xEEL,0x43L},{(-1L),0xBCL,(-7L),0x43L},{(-9L),0xC7L,0x23L,0L}},{{0x34L,0x08L,1L,0x86L},{0x66L,0x43L,0x66L,0x08L},{0xA1L,(-1L),3L,7L},{0x08L,0xEEL,7L,(-1L)}},{{0x23L,(-7L),7L,(-9L)},{0x08L,0x23L,3L,0x34L},{0xA1L,1L,0x66L,0x66L},{0x66L,0x66L,1L,0xA1L}}};
        int i, j, k;
        l_121[0][1][2] = ((safe_div_func_uint64_t_u_u(((p_5.f1 | p_7) != ((((-1L) >= 0UL) == 0x4C86C8505D4F8719LL) <= l_115[0][0].f0)), g_65)) , g_18.f1);
    }
    return p_7;
}



static union U5  func_10(uint32_t  p_11)
{ 
    union U2 l_19 = {9L};
    int32_t l_59 = 0x2663943EL;
    int32_t l_60[5][4] = {{0xD03C5CECL,0xD03C5CECL,0xD03C5CECL,0xD03C5CECL},{0xD03C5CECL,0xD03C5CECL,0xD03C5CECL,0xD03C5CECL},{0xD03C5CECL,0xD03C5CECL,0xD03C5CECL,0xD03C5CECL},{0xD03C5CECL,0xD03C5CECL,0xD03C5CECL,0xD03C5CECL},{0xD03C5CECL,0xD03C5CECL,0xD03C5CECL,0xD03C5CECL}};
    union U4 l_70 = {5UL};
    const union U6 l_75 = {{0x9AC934C6454C9BF6LL,-7L,{-4L,0x2CC1L}}};
    union U5 l_78[1][1][3] = {{{{0L},{0L},{0L}}}};
    int32_t l_88 = 0xCAFD932BL;
    int64_t l_104 = 0xD21247B8CF327FF7LL;
    int i, j, k;
    for (p_11 = 0; (p_11 <= 2); p_11 += 1)
    { 
        const uint64_t l_57 = 18446744073709551612UL;
        int32_t l_63 = 2L;
        for (g_12 = 0; (g_12 <= 2); g_12 += 1)
        { 
            return g_14;
        }
        for (g_14.f1 = 0; (g_14.f1 <= 2); g_14.f1 += 1)
        { 
            int16_t l_42 = 0x6306L;
            int32_t l_61 = 0x04527F84L;
            int i, j;
            g_13[(p_11 + 2)][g_14.f1] = ((func_15(g_18, l_19) , (l_42 || p_11)) , 0x7F9B64A4L);
            for (g_34.f0 = 0; (g_34.f0 <= 2); g_34.f0 += 1)
            { 
                int32_t l_62 = (-1L);
                int32_t l_64[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_64[i] = (-9L);
                g_13[(p_11 + 1)][g_14.f1] |= (-4L);
                g_13[3][1] = (safe_rshift_func_uint16_t_u_s((g_14.f1 > ((safe_sub_func_uint8_t_u_u(((g_58 |= (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(p_11, (safe_mul_func_int16_t_s_s(p_11, ((safe_mul_func_uint8_t_u_u(l_57, g_12)) | p_11))))) < 0xB27CL), p_11)) | l_57), 0))) | 1L), 0xEEL)) > 0L)), g_13[(p_11 + 1)][g_14.f1]));
                ++g_65;
            }
        }
    }
    g_13[0][1] ^= ((g_18.f1 >= ((l_70 , (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((l_75 , p_11), l_60[2][2])), 7))) == g_18.f0)) & g_18.f1);
    if ((g_13[2][0] |= ((safe_mul_func_int8_t_s_s((l_75.f0.f2.f0 ^ ((-6L) >= ((p_11 == 0xF7832F570066BE38LL) != l_60[3][3]))), g_65)) < (-1L))))
    { 
        return l_78[0][0][1];
    }
    else
    { 
        const int64_t l_89 = 5L;
        int32_t l_90[2];
        int i;
        for (i = 0; i < 2; i++)
            l_90[i] = 0x1586B660L;
        for (g_58 = 0; (g_58 > 40); g_58 = safe_add_func_uint64_t_u_u(g_58, 4))
        { 
            union U4 l_81 = {0UL};
            int32_t l_91 = 0x4CFB0C79L;
            int32_t l_93 = 1L;
            int32_t l_94[3];
            uint8_t l_105 = 9UL;
            uint64_t l_108 = 0x42DAAAAF263C58A5LL;
            int i;
            for (i = 0; i < 3; i++)
                l_94[i] = 7L;
            if ((l_60[4][2] <= ((l_81 , ((p_11 < 0xF435L) | p_11)) , 18446744073709551614UL)))
            { 
                l_90[1] |= (safe_sub_func_int8_t_s_s((g_14.f1 = ((g_13[2][1] <= (safe_rshift_func_int16_t_s_u(((l_88 = ((safe_add_func_int16_t_s_s(g_14.f1, g_18.f1)) & 0x47DA7D1FL)) >= l_89), 5))) | l_89)), 0x22L));
                if (g_18.f0)
                    continue;
            }
            else
            { 
                int64_t l_92 = 0x84EEC12BCECFDE0DLL;
                int32_t l_95 = 0xE5A6583FL;
                int32_t l_96 = 7L;
                int32_t l_97 = 0x7DDF4F03L;
                int32_t l_98 = 0x60870670L;
                int32_t l_99 = (-1L);
                int32_t l_100 = (-2L);
                int32_t l_101 = 0x03822D71L;
                int32_t l_102 = 0xFA892F2EL;
                int32_t l_103[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_103[i][j] = 1L;
                }
                --l_105;
                l_108--;
            }
        }
    }
    return l_78[0][0][1];
}



static union U2  func_15(const struct S0  p_16, union U2  p_17)
{ 
    uint8_t l_33 = 0x19L;
    union U2 l_39 = {-6L};
    int32_t l_41 = 0x1C2B13F3L;
    g_34 = ((((safe_add_func_int64_t_s_s(((((((g_12 ^ (!(safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0xAEL, (((p_16.f1 > ((p_16.f0 , l_33) != p_16.f1)) <= 0xDDD0C6A3L) > p_16.f0))), l_33)), l_33)), 4)))) && p_16.f0) <= 0x7675E6D99275A805LL) == p_17.f0) , l_33) ^ g_12), p_16.f1)) <= l_33) , g_14.f1) , g_18);
    l_41 = (safe_div_func_uint32_t_u_u(5UL, (safe_rshift_func_int8_t_s_u((((l_39 , (g_18.f0 | (g_34.f1 = ((!0x0912L) & l_33)))) > 65526UL) >= l_39.f0), p_17.f0))));
    return l_39;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);

    }
    transparent_crc(g_123.f0.f0, "g_123.f0.f0", print_hash_value);
    transparent_crc(g_123.f0.f1, "g_123.f0.f1", print_hash_value);
    transparent_crc(g_123.f0.f2.f0, "g_123.f0.f2.f0", print_hash_value);
    transparent_crc(g_123.f0.f2.f1, "g_123.f0.f2.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
