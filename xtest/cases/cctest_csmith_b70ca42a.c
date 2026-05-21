// SPDX-License-Identifier: MIT
// cctest_csmith_b70ca42a.c --- cctest case csmith_b70ca42a (csmith seed 3071058986)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x960199e7 */

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

// Options:   -s 3071058986 -o /tmp/csmith_gen_z1ja8_x_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int16_t  f1;
   int32_t  f2;
   uint64_t  f3;
   const uint64_t  f4;
   uint32_t  f5;
};

struct S1 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   int64_t  f4;
};

union U2 {
   const struct S1  f0;
   uint32_t  f1;
   int32_t  f2;
   const int16_t  f3;
};

union U3 {
   uint32_t  f0;
   const uint32_t  f1;
   uint64_t  f2;
   uint16_t  f3;
};


static int32_t g_2 = (-8L);
static uint64_t g_10 = 0x008FB0B44CF59275LL;
static int32_t g_17 = 0x57A23A34L;
static int32_t g_19 = 0L;
static uint64_t g_22 = 1UL;
static uint64_t g_38 = 0x32A5B4D633C66883LL;
static uint32_t g_51 = 4294967287UL;
static uint8_t g_59[1] = {0x61L};
static uint64_t g_75 = 0x5D6221F4251D1740LL;
static uint16_t g_81 = 65529UL;
static struct S1 g_90 = {0x640E9B69L,0xC290A7FAL,0xA718AF62F62330F0LL,6UL,0x5ABE080F98811FBALL};
static struct S0 g_98 = {1L,-1L,0xEF314FBCL,0x55470A06C62CF0DALL,0xB0066401EE1831F7LL,0x3013A2A4L};
static const int16_t g_118 = (-6L);
static uint16_t g_145 = 0UL;
static uint64_t g_185 = 2UL;
static int64_t g_191 = 1L;
static uint16_t g_192 = 0UL;
static int32_t g_195 = (-3L);
static uint32_t g_196[5][2][4] = {{{0UL,0xC0B326B5L,4294967293UL,4294967293UL},{7UL,7UL,4294967293UL,0x5C750724L}},{{0UL,0x98973432L,6UL,0xC0B326B5L},{0UL,6UL,0x5C750724L,6UL}},{{0x5C750724L,6UL,0UL,0xC0B326B5L},{6UL,0x98973432L,0UL,0x5C750724L}},{{4294967293UL,7UL,7UL,4294967293UL},{4294967293UL,0xC0B326B5L,0UL,0x05431A1AL}},{{6UL,4294967293UL,0UL,1UL},{0x5C750724L,1UL,0x5C750724L,1UL}}};



static int8_t  func_1(void);
static int32_t  func_30(uint16_t  p_31, int32_t  p_32, int8_t  p_33, union U3  p_34, uint16_t  p_35);
static struct S0  func_41(int8_t  p_42, struct S0  p_43, uint32_t  p_44, struct S1  p_45);
static uint8_t  func_46(union U3  p_47, uint8_t  p_48, const int32_t  p_49);




static int8_t  func_1(void)
{ 
    int8_t l_5 = 0x40L;
    int32_t l_13 = 0x815F8425L;
    int32_t l_21 = 0x5CECCE00L;
    uint16_t l_186 = 0x40ECL;
    uint32_t l_209 = 4294967287UL;
    int8_t l_210 = 0x1AL;
    for (g_2 = 0; (g_2 != (-4)); g_2--)
    { 
        int64_t l_16 = 1L;
        int32_t l_18 = 0xC3B03C3FL;
        int32_t l_20 = 5L;
        g_10 = ((l_5 <= (safe_lshift_func_uint8_t_u_s(g_2, 0))) || (g_2 , (safe_mul_func_int16_t_s_s((g_2 > g_2), 0xD49FL))));
        g_17 = (((((safe_rshift_func_uint8_t_u_s(((l_13 && ((((g_10 && (g_10 , ((safe_sub_func_int8_t_s_s(((g_2 | g_2) , g_2), l_16)) && l_5))) && l_16) , g_2) & l_16)) , l_16), g_2)) || g_10) , g_2) > 7L) ^ g_10);
        ++g_22;
    }
    for (g_19 = 0; (g_19 >= (-15)); g_19 = safe_sub_func_uint32_t_u_u(g_19, 7))
    { 
        int32_t l_36 = (-8L);
        int32_t l_37 = 0x4A126529L;
        union U3 l_50 = {0xB879B684L};
        int32_t l_188 = 0xE382851AL;
        int32_t l_189[5] = {0x34AC4052L,0x34AC4052L,0x34AC4052L,0x34AC4052L,0x34AC4052L};
        int i;
        if ((~(safe_rshift_func_uint16_t_u_s((func_30((g_38++), (func_41((l_13 = ((func_46(l_50, (--g_51), (g_17 = 0L)) , ((7L >= 0x67L) | l_21)) && 1UL)), g_98, l_50.f1, g_90) , l_5), l_5, l_50, g_98.f1) >= g_98.f2), 5))))
        { 
            struct S1 l_187[4][2] = {{{0x1FCD465CL,1L,1UL,0x697FC644L,-1L},{0x1FCD465CL,1L,1UL,0x697FC644L,-1L}},{{0x1FCD465CL,1L,1UL,0x697FC644L,-1L},{0x1FCD465CL,1L,1UL,0x697FC644L,-1L}},{{0x1FCD465CL,1L,1UL,0x697FC644L,-1L},{0x1FCD465CL,1L,1UL,0x697FC644L,-1L}},{{0x1FCD465CL,1L,1UL,0x697FC644L,-1L},{0x1FCD465CL,1L,1UL,0x697FC644L,-1L}}};
            int i, j;
            g_98.f2 = ((((safe_rshift_func_uint16_t_u_s((g_90.f3 || (safe_sub_func_uint16_t_u_u((func_41((g_185 &= (-8L)), g_98, l_186, l_187[0][1]) , 1UL), 65535UL))), 15)) , 1UL) || g_19) || 0x1537E41DE62A7540LL);
            if (l_186)
                break;
        }
        else
        { 
            int32_t l_190 = 0x109FDD9FL;
            g_192++;
            if (l_50.f1)
                continue;
        }
        --g_196[1][0][0];
    }
    g_98.f2 &= (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((((safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_186, ((((((safe_mul_func_int16_t_s_s((((0xBEL & (g_185 , g_81)) && l_5) && 0xAA35959F263723E2LL), l_21)) && g_196[1][0][0]) >= g_98.f5) | l_13) , 65535UL) | 65528UL))) , 1L), l_209)) ^ (-1L)) > (-6L)) < g_98.f3), l_210)) & (-4L)), g_51));
    return l_5;
}



static int32_t  func_30(uint16_t  p_31, int32_t  p_32, int8_t  p_33, union U3  p_34, uint16_t  p_35)
{ 
    uint32_t l_175 = 1UL;
    struct S0 l_179 = {0x87C1AF18L,0L,-1L,0x026917EE8902DFE6LL,0UL,18446744073709551613UL};
    const uint64_t l_180 = 3UL;
    p_32 ^= (g_90.f2 != (safe_add_func_uint32_t_u_u(((~g_2) , (l_175 = (!p_34.f1))), (((((p_33 = (safe_add_func_int16_t_s_s((!(l_179 , g_51)), 65530UL))) , l_179.f3) != g_90.f0) , l_179.f2) || l_180))));
    return l_179.f2;
}



static struct S0  func_41(int8_t  p_42, struct S0  p_43, uint32_t  p_44, struct S1  p_45)
{ 
    uint32_t l_117[1][1][1];
    int32_t l_119 = 0x4D3C6A4CL;
    uint64_t l_126 = 18446744073709551615UL;
    int16_t l_127 = 0x90B5L;
    int32_t l_140 = (-8L);
    int32_t l_141 = 3L;
    struct S1 l_148 = {7UL,0x941FD73AL,18446744073709551615UL,18446744073709551615UL,0L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_117[i][j][k] = 0x114404B1L;
        }
    }
    for (g_90.f3 = 0; (g_90.f3 != 42); ++g_90.f3)
    { 
        int32_t l_112 = 0x47A4BBF6L;
        uint32_t l_142 = 1UL;
        int16_t l_156 = 1L;
        struct S1 l_170 = {0x4AC5FBAFL,0xFA6EFE3CL,18446744073709551613UL,2UL,0x1E9D71703F9351E3LL};
        for (p_43.f3 = 0; (p_43.f3 > 36); ++p_43.f3)
        { 
            uint32_t l_103 = 4294967294UL;
            uint32_t l_108 = 0x68867004L;
            --l_103;
            g_98.f0 ^= (safe_lshift_func_int8_t_s_u((p_45.f2 | (l_108 || p_45.f0)), 3));
            l_119 |= (g_98.f4 , (((+((safe_add_func_uint32_t_u_u(l_112, ((((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u(p_45.f0, l_117[0][0][0])), 0x16L)) & l_117[0][0][0]) || g_19) ^ l_112))) || g_90.f3)) | g_98.f0) >= g_118));
        }
        if ((safe_div_func_int8_t_s_s(9L, (safe_mul_func_int8_t_s_s(g_90.f1, ((g_90 , (safe_mod_func_uint32_t_u_u(((l_119 = (l_127 = ((p_45.f3 >= l_126) , 1L))) != 0x4BL), p_44))) || p_45.f0))))))
        { 
            int64_t l_138[1];
            int32_t l_139 = 0xE78AC6A9L;
            int i;
            for (i = 0; i < 1; i++)
                l_138[i] = 0xF7CCAC8DB39B42EDLL;
            p_43.f2 = ((safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(p_45.f3, (g_90.f0 ^ 0L))) ^ (((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(0xA93CL, p_43.f3)) < 0x8A76B0EF2B8E86F5LL) > (-1L)), p_45.f3)), p_43.f0)) || p_45.f0) == 65530UL)), 0L)) > l_127);
            --l_142;
            if (l_139)
                break;
        }
        else
        { 
            struct S1 l_149 = {4294967295UL,0x10FFDB43L,0xE9FA99CDC6EB2511LL,0xC22C6A01L,0x5AE51160292229A3LL};
            int32_t l_169 = 0L;
            if (l_119)
            { 
                ++g_145;
            }
            else
            { 
                uint8_t l_159 = 0UL;
                l_149 = l_148;
                l_141 = (g_98.f0 ^= (((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((l_156 = (safe_add_func_uint32_t_u_u(g_90.f1, 0x51E35FF2L))), (safe_add_func_int16_t_s_s(l_159, g_90.f3)))), 1)) > g_118) < g_98.f1));
                p_43.f0 = ((safe_div_func_uint8_t_u_u(((l_112 = (l_169 = (p_42 = ((p_45.f2 > (safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_43.f5, ((safe_sub_func_uint32_t_u_u(((((0x2668A2AEL >= (3L != l_148.f3)) & g_98.f1) == 0L) | 0x7C00CB0DL), 1L)) || p_45.f3))), 255UL))))) , l_156)))) > 248UL), p_43.f3)) , g_90.f3);
            }
            p_43.f2 = 0xE7FB4094L;
            if (l_148.f4)
                break;
        }
        p_45 = l_170;
    }
    return g_98;
}



static uint8_t  func_46(union U3  p_47, uint8_t  p_48, const int32_t  p_49)
{ 
    uint32_t l_54[3];
    int32_t l_55 = 0xD293E35FL;
    union U2 l_80 = {{4UL,0x61529ABCL,0xA08677A3B2FE4960LL,0UL,0x295AD7CBC1764019LL}};
    int8_t l_92 = 0x69L;
    int32_t l_93 = 3L;
    struct S1 l_97 = {0x69C835A8L,0xD269A62DL,0UL,0xF6C45391L,-1L};
    int i;
    for (i = 0; i < 3; i++)
        l_54[i] = 0x6FC58AC3L;
    l_54[1] = (-1L);
    if ((l_55 = 2L))
    { 
        int8_t l_56 = 0xD1L;
        int32_t l_57 = 0xDBD7CCF7L;
        int32_t l_58 = 0x78A82FB3L;
        struct S1 l_91 = {0xC3E802F2L,0x80F24A82L,0UL,0UL,9L};
lbl_82:
        --g_59[0];
        g_2 = ((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((~((l_57 = (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u((g_75 ^= p_47.f3), (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(g_2, l_58)), (l_80 , 0x94720237L))))) , p_48) & 0x33B7L), p_47.f3)), p_48))) , 1UL)), l_56)) != p_49), 4)) && g_81), 9L)) < p_47.f3);
        if (g_17)
        { 
            uint8_t l_83 = 0xE9L;
            if (l_56)
                goto lbl_82;
            for (l_58 = 2; (l_58 >= 0); l_58 -= 1)
            { 
                l_83 = (-7L);
                l_57 = (((l_56 || (((safe_add_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_17, 253UL)), g_51)) | g_10) || 1L) || (-3L)), l_58)) & g_19) ^ 0x61CA2EBD359D2D10LL)) <= l_58) || p_47.f3);
                l_91 = g_90;
            }
        }
        else
        { 
            return l_92;
        }
    }
    else
    { 
        uint16_t l_94 = 0xD427L;
        l_94++;
    }
    l_97 = l_80.f0;
    return l_80.f0.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    transparent_crc(g_98.f4, "g_98.f4", print_hash_value);
    transparent_crc(g_98.f5, "g_98.f5", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_196[i][j][k], "g_196[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
