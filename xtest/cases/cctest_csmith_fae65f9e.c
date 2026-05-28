// SPDX-License-Identifier: MIT
// cctest_csmith_fae65f9e.c --- cctest case csmith_fae65f9e (csmith seed 4209401758)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5a062492 */
/* @exp_ticks 0x3c64 */

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

// Options:   -s 4209401758 -o /tmp/csmith_gen_dar32sl4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
   const int64_t  f1;
   int8_t  f2;
   uint32_t  f3;
};

struct S1 {
   uint32_t  f0;
};

union U2 {
   struct S0  f0;
};


static union U2 g_13 = {{0x3EL,0x60693009CE456251LL,0x24L,0xD513C61CL}};
static int32_t g_45 = (-7L);
static uint64_t g_50 = 0x333DB9622CFB6473LL;
static int64_t g_65 = 6L;
static int32_t g_71 = (-1L);
static uint32_t g_106 = 4294967294UL;
static int8_t g_107 = (-1L);
static struct S1 g_108 = {0x3F51ED02L};
static int8_t g_127 = 0xEBL;
static int32_t g_136 = 2L;
static uint8_t g_146[1][3][2] = {{{0xACL,1UL},{1UL,0xACL},{1UL,1UL}}};
static uint8_t g_165 = 0xDBL;
static uint32_t g_183 = 0x9847BF47L;
static int8_t g_242 = 0x5DL;
static uint16_t g_243 = 65535UL;
static int16_t g_251 = (-3L);
static int64_t g_254 = 6L;
static uint16_t g_255 = 0UL;



static uint64_t  func_1(void);
static const uint16_t  func_6(struct S1  p_7);
static struct S1  func_8(int32_t  p_9, int32_t  p_10);
static int32_t  func_11(union U2  p_12);




static uint64_t  func_1(void)
{ 
    int32_t l_55 = 0x9B2C3978L;
    int32_t l_181 = (-7L);
    struct S1 l_199 = {0xA631AE8CL};
    const int32_t l_231 = 0x293C1CF1L;
    struct S1 l_232[2][1] = {{{0xCAF346C8L}},{{0xCAF346C8L}}};
    int32_t l_250 = 0xFCCDD416L;
    int16_t l_252 = 0x5E2EL;
    int32_t l_253 = 0L;
    int i, j;
lbl_247:
    if ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(func_6(func_8(func_11(g_13), (((safe_rshift_func_uint8_t_u_s((l_55 > ((safe_rshift_func_int16_t_s_s((!((safe_mul_func_int8_t_s_s(((g_65 = (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(l_55, l_55)), 0x8BL))) > g_45), l_55)) && g_65)), 3)) != g_45)), l_55)) , l_55) != g_45))), g_146[0][0][0])), 9)))
    { 
        int32_t l_182[4][2] = {{5L,5L},{5L,5L},{5L,5L},{5L,5L}};
        int i, j;
        g_183--;
    }
    else
    { 
        struct S1 l_186 = {18446744073709551615UL};
        union U2 l_201 = {{0x55L,-1L,-1L,0xD7A1EBC9L}};
        int32_t l_204 = (-10L);
        g_108 = l_186;
        l_199 = func_8(l_181, ((l_55 >= g_107) <= (((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_186.f0, l_186.f0)), g_45)) | g_50), g_108.f0)), g_50)), l_181)) | g_165) > l_186.f0)));
        l_181 = (((safe_unary_minus_func_int8_t_s(((l_201 , ((g_50 = l_201.f0.f1) != (safe_mul_func_int8_t_s_s((((l_204 |= (((g_146[0][0][0] > g_13.f0.f0) | l_201.f0.f1) < g_108.f0)) > g_106) == 0xA14AL), l_55)))) != g_106))) && l_201.f0.f2) | 0x1805AE8AL);
    }
    for (g_107 = 0; (g_107 != 9); g_107 = safe_add_func_uint8_t_u_u(g_107, 9))
    { 
        uint16_t l_223 = 4UL;
        int32_t l_241 = 0x1D463292L;
        int32_t l_249 = (-2L);
        for (g_13.f0.f3 = (-28); (g_13.f0.f3 <= 8); g_13.f0.f3++)
        { 
            return g_108.f0;
        }
        if ((((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(5UL, (safe_div_func_int32_t_s_s(l_199.f0, (safe_add_func_uint16_t_u_u((g_146[0][0][0] ^ ((safe_sub_func_int32_t_s_s(g_136, g_71)) < g_146[0][0][0])), g_108.f0)))))) | 0UL) != g_146[0][2][0]), g_13.f0.f0)) , 0xA7D6L) | g_71))
        { 
            int32_t l_230 = (-1L);
            g_136 = (safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((g_13.f0.f3 & l_223), (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((g_13.f0.f2 , (safe_rshift_func_uint8_t_u_s(l_223, g_146[0][0][0]))) >= g_13.f0.f3), l_230)), 3)))) , 0xD9L) || l_231), 4));
            return g_183;
        }
        else
        { 
            g_108 = l_232[0][0];
            g_242 |= ((((safe_mul_func_int16_t_s_s((((g_108 = (l_232[0][0] = g_108)) , g_71) > (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((g_136 , (safe_div_func_uint32_t_u_u((0xF214E0A7E5BCBC8BLL || l_241), (-1L)))) <= l_223), 4)), l_55)) > 0xFAL) != (-5L))), g_127)) <= l_199.f0) | 0x7966B248L) <= g_106);
            if ((l_55 || (g_106 && g_108.f0)))
            { 
                --g_243;
            }
            else
            { 
                int16_t l_246 = (-2L);
                g_136 = l_246;
                g_108 = g_108;
                if (g_108.f0)
                    goto lbl_247;
            }
        }
        l_249 |= (!g_45);
    }
    --g_255;
    return g_127;
}



static const uint16_t  func_6(struct S1  p_7)
{ 
    struct S1 l_113[4] = {{0x2A8D2DEFL},{0x2A8D2DEFL},{0x2A8D2DEFL},{0x2A8D2DEFL}};
    const uint16_t l_153 = 0x8B14L;
    int32_t l_154 = (-1L);
    int32_t l_164[5];
    int i;
    for (i = 0; i < 5; i++)
        l_164[i] = 9L;
    for (p_7.f0 = (-26); (p_7.f0 <= 39); p_7.f0 = safe_add_func_int64_t_s_s(p_7.f0, 7))
    { 
        uint32_t l_117 = 5UL;
        int32_t l_159[1][3];
        uint64_t l_180 = 0xB14546EED63D9F3ALL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_159[i][j] = 1L;
        }
        g_108 = l_113[1];
        for (g_45 = 13; (g_45 < 20); g_45++)
        { 
            struct S1 l_116 = {0xBC135235L};
            for (g_106 = 0; (g_106 <= 3); g_106 += 1)
            { 
                int i;
                l_116 = (l_113[g_106] = l_113[g_106]);
                ++l_117;
                if (g_107)
                    continue;
            }
            for (g_108.f0 = (-7); (g_108.f0 <= 47); g_108.f0++)
            { 
                int16_t l_122 = 1L;
                l_122 |= 0x2CCAF28FL;
            }
            g_127 &= ((safe_sub_func_uint16_t_u_u((p_7.f0 <= 0x47L), (safe_mul_func_int8_t_s_s((g_71 == (((g_107 && p_7.f0) ^ 0x825BC70674D57D2DLL) < l_116.f0)), 0x34L)))) > l_113[1].f0);
        }
        if (p_7.f0)
        { 
            int8_t l_139[4];
            int32_t l_140 = 0xED510058L;
            int i;
            for (i = 0; i < 4; i++)
                l_139[i] = 0x12L;
            for (g_13.f0.f2 = 29; (g_13.f0.f2 != 21); --g_13.f0.f2)
            { 
                const int64_t l_141 = 0x0453C8A02802FD58LL;
                int32_t l_142[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_142[i] = 7L;
                g_136 = ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(0xB5L, (g_107 = (p_7.f0 <= (p_7.f0 > 4294967295UL))))) < (-1L)), 1)), 4)) ^ g_13.f0.f2);
                l_140 ^= (l_139[0] = (safe_mod_func_uint64_t_u_u(p_7.f0, 1UL)));
                l_142[2] ^= l_141;
            }
        }
        else
        { 
            uint64_t l_158[5][2][4] = {{{0xD42C185281CD2028LL,0xD42C185281CD2028LL,0x2FC83918EFA3C6A6LL,0xDCCDC40744711E6CLL},{6UL,0x2FC83918EFA3C6A6LL,0xDB56C07334A22360LL,0xE33C04BDE658E48FLL}},{{0x5734C7933BFEBFBDLL,0x346B7FD6875ADD04LL,0x806100E9BDCB58CELL,0xDB56C07334A22360LL},{0xDB56C07334A22360LL,0x346B7FD6875ADD04LL,0xD42C185281CD2028LL,0xE33C04BDE658E48FLL}},{{0x346B7FD6875ADD04LL,0x2FC83918EFA3C6A6LL,0x346B7FD6875ADD04LL,0xDCCDC40744711E6CLL},{0xBDB128D63D52EC9ALL,0xD42C185281CD2028LL,0x23EC1801899B7E06LL,0x5734C7933BFEBFBDLL}},{{9UL,0xBDB128D63D52EC9ALL,0xBDB128D63D52EC9ALL,0xDB56C07334A22360LL},{9UL,0UL,0xBDB128D63D52EC9ALL,0x5734C7933BFEBFBDLL}},{{6UL,0x806100E9BDCB58CELL,0x806100E9BDCB58CELL,6UL},{0x23EC1801899B7E06LL,9UL,0x66784C27D48C05A1LL,0xD42C185281CD2028LL}}};
            int32_t l_160 = 0x0805470BL;
            int32_t l_161 = 0xF3A3A19FL;
            int32_t l_162 = 0xB6F688DCL;
            int32_t l_163[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_163[i] = (-8L);
            for (g_127 = 0; (g_127 != 0); g_127 = safe_add_func_int32_t_s_s(g_127, 4))
            { 
                int32_t l_155 = 6L;
                l_154 = (!((g_146[0][0][0] | (g_13.f0.f0 && ((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((0xF8BDL & 0L), g_45)), l_153)), l_113[1].f0)) > g_146[0][0][1]) || p_7.f0) && 0x6DC68BC5L))) , (-8L)));
                l_155 &= (-5L);
                l_158[2][0][0] ^= ((l_155 != (safe_div_func_uint8_t_u_u((((g_13 , l_117) == g_136) || l_117), g_106))) | g_146[0][0][0]);
            }
            --g_165;
            l_162 ^= (safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((((l_154 = (safe_mod_func_uint64_t_u_u((((-1L) ^ (safe_add_func_int32_t_s_s(l_158[3][0][1], ((safe_lshift_func_int8_t_s_u(0L, (((safe_rshift_func_int16_t_s_s(((g_108 , g_13.f0.f0) > p_7.f0), 1)) >= l_113[1].f0) <= g_13.f0.f1))) >= l_180)))) || p_7.f0), l_154))) || l_164[2]) < 0x5ECA5D8FL) >= p_7.f0), p_7.f0)) , l_163[0]), 0UL));
        }
    }
    return g_50;
}



static struct S1  func_8(int32_t  p_9, int32_t  p_10)
{ 
    struct S0 l_66 = {0x29L,0xD0AE446F941663B3LL,-1L,0x378C3A3BL};
    int32_t l_72[2];
    int32_t l_73[5][5] = {{0xB12B2C9DL,0xD3EE7732L,0xCC60A975L,0xCC60A975L,0xD3EE7732L},{(-1L),0L,0L,0L,0L},{0xB12B2C9DL,0xD3EE7732L,0xCC60A975L,0xCC60A975L,0xD3EE7732L},{(-1L),0L,0L,0L,0L},{0xB12B2C9DL,0xD3EE7732L,0xCC60A975L,0xCC60A975L,0xD3EE7732L}};
    int32_t l_91 = (-5L);
    struct S1 l_110 = {0x3452746AL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_72[i] = 0x3A495B28L;
    l_73[2][2] = (l_72[0] = ((g_71 = (l_66 , (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint64_t_u_u(g_65, (g_13 , (p_9 | 0x795192C249DD6285LL)))) < (-1L)) , g_50), 1)))) == 0xC8L));
    l_72[0] = (p_10 = (safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((!(safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int32_t_s_s(0L, ((l_91 | l_72[1]) > l_66.f2))) , g_71) > g_13.f0.f2) || 5UL), 11))) >= l_66.f3), g_71)), 2)), 65533UL)), l_66.f3)), g_13.f0.f2)) >= 0L), g_13.f0.f2)));
    for (l_66.f3 = 0; (l_66.f3 <= 22); l_66.f3 = safe_add_func_int8_t_s_s(l_66.f3, 8))
    { 
        int32_t l_104 = 0x1A785178L;
        uint32_t l_105 = 0x2499CBC1L;
        struct S1 l_109 = {18446744073709551606UL};
        g_107 = (safe_rshift_func_int16_t_s_s(g_71, ((g_106 ^= (safe_div_func_uint64_t_u_u(((((safe_mod_func_uint16_t_u_u(((g_13.f0 , ((0x942BEBA8L && (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((l_104 , p_9) | 0xBC15L) || 0xE4L), l_104)), p_10))) , 0xC07AC39A8832714BLL)) != g_65), l_105)) ^ g_45) < g_13.f0.f1) > l_72[0]), l_105))) ^ p_9)));
        for (g_106 = 0; (g_106 <= 1); g_106 += 1)
        { 
            int i;
            if (l_72[g_106])
                break;
            l_109 = g_108;
        }
        if (p_10)
            break;
    }
    return l_110;
}



static int32_t  func_11(union U2  p_12)
{ 
    uint64_t l_43 = 18446744073709551608UL;
    int32_t l_44[4][2][3] = {{{0x7054F86FL,(-1L),0x7054F86FL},{0x7054F86FL,0x3314648AL,(-1L)}},{{0x3314648AL,0x7054F86FL,0x7054F86FL},{(-1L),0x7054F86FL,0xA1DD5C0AL}},{{4L,0x3314648AL,(-8L)},{(-1L),(-1L),(-8L)}},{{0x3314648AL,4L,0xA1DD5C0AL},{0x7054F86FL,(-1L),0x7054F86FL}}};
    uint64_t l_47 = 0x5D4475678D5680A2LL;
    int i, j, k;
    for (p_12.f0.f3 = 0; (p_12.f0.f3 != 4); p_12.f0.f3++)
    { 
        uint64_t l_31 = 0x02A3062A4B15D3E9LL;
        if ((safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((g_13.f0.f2 || p_12.f0.f2) , (safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((+0xE81720D7L), p_12.f0.f1)) < p_12.f0.f2), 0x1CL)), g_13.f0.f1)) > 0x4F78D7CBL), l_31))), 7)), 0x3D62A04F77722ABALL)) <= (-2L)), 3)))
        { 
            for (g_13.f0.f2 = 14; (g_13.f0.f2 != (-20)); g_13.f0.f2 = safe_sub_func_int16_t_s_s(g_13.f0.f2, 1))
            { 
                return g_13.f0.f2;
            }
        }
        else
        { 
            int32_t l_42 = (-9L);
            for (g_13.f0.f2 = (-12); (g_13.f0.f2 <= 4); g_13.f0.f2 = safe_add_func_uint16_t_u_u(g_13.f0.f2, 5))
            { 
                int16_t l_46 = (-7L);
                l_44[0][0][1] = (g_13.f0.f2 <= (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0x36CEDDA5659CDE30LL || 8UL), (p_12.f0.f2 ^ p_12.f0.f2))), l_42)), l_43)));
                l_47--;
            }
        }
        g_50++;
    }
    return g_13.f0.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13.f0.f0, "g_13.f0.f0", print_hash_value);
    transparent_crc(g_13.f0.f1, "g_13.f0.f1", print_hash_value);
    transparent_crc(g_13.f0.f2, "g_13.f0.f2", print_hash_value);
    transparent_crc(g_13.f0.f3, "g_13.f0.f3", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_146[i][j][k], "g_146[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
