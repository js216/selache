// SPDX-License-Identifier: MIT
// cctest_csmith_54621db1.c --- cctest case csmith_54621db1 (csmith seed 1415716273)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14073e00 */
/* @exp_ticks 0x76cb */

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

// Options:   -s 1415716273 -o /tmp/csmith_gen_cpagxsds/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   int32_t  f1;
   const uint64_t  f2;
   const uint32_t  f3;
   const uint16_t  f4;
   const uint8_t  f5;
};

union U1 {
   int32_t  f0;
   int64_t  f1;
};


static int32_t g_2 = 0xBF390197L;
static struct S0 g_16 = {0L,0x8DFBA22EL,1UL,0x52027495L,0xF341L,251UL};
static struct S0 *g_15[7][5] = {{(void*)0,&g_16,&g_16,(void*)0,(void*)0},{&g_16,&g_16,&g_16,(void*)0,&g_16},{(void*)0,(void*)0,&g_16,&g_16,(void*)0},{&g_16,(void*)0,&g_16,(void*)0,&g_16},{(void*)0,&g_16,&g_16,(void*)0,(void*)0},{&g_16,(void*)0,&g_16,&g_16,&g_16},{(void*)0,(void*)0,&g_16,&g_16,(void*)0}};
static int8_t g_44 = (-6L);
static int32_t g_46 = (-8L);
static uint64_t g_60 = 0xCFEC76E8D2CA8E1FLL;
static uint8_t g_81 = 0x8FL;
static uint8_t g_83 = 0x3EL;
static uint8_t *g_82 = &g_83;
static int16_t g_91[5][2] = {{0x59FBL,0x59FBL},{0x59FBL,0x59FBL},{0x59FBL,0x59FBL},{0x59FBL,0x59FBL},{0x59FBL,0x59FBL}};
static uint16_t g_93 = 0x3AF4L;
static int8_t g_111 = (-1L);
static uint32_t g_116 = 0xC75B897EL;
static int32_t *g_121 = (void*)0;
static int16_t g_173 = (-1L);
static uint8_t g_182 = 1UL;
static int32_t g_186[6][7][3] = {{{0xC2C0C57DL,0xD690D09DL,0xC8C66085L},{0xD79D57AAL,0xC2C0C57DL,0xC8C66085L},{0x4299DA23L,0xB809ED89L,(-1L)},{0xC9F75E26L,(-1L),0xBEF3D604L},{0xC8C66085L,0xB809ED89L,7L},{1L,0xC2C0C57DL,1L},{1L,0xD690D09DL,0xC9F75E26L}},{{0xC8C66085L,0L,0xE72653B0L},{0xC9F75E26L,9L,0xC9F75E26L},{0x4299DA23L,0x91AC2CD0L,1L},{0xD79D57AAL,0x91AC2CD0L,7L},{(-1L),9L,0xBEF3D604L},{0x659CEB6AL,0L,(-1L)},{(-1L),0xD690D09DL,0xC8C66085L}},{{0xD79D57AAL,0xC2C0C57DL,0xC8C66085L},{0x4299DA23L,0xB809ED89L,(-1L)},{0xC9F75E26L,(-1L),0xBEF3D604L},{0xC8C66085L,0xB809ED89L,7L},{1L,0xC2C0C57DL,1L},{1L,0xD690D09DL,0xC9F75E26L},{0xC8C66085L,0L,0xE72653B0L}},{{0xC9F75E26L,9L,0xC9F75E26L},{0x4299DA23L,0x91AC2CD0L,1L},{0xD79D57AAL,0x91AC2CD0L,7L},{(-1L),9L,0xBEF3D604L},{0x659CEB6AL,0L,(-1L)},{(-1L),0xD690D09DL,0xC8C66085L},{0xD79D57AAL,0xC2C0C57DL,0xC8C66085L}},{{0x4299DA23L,0xB809ED89L,(-1L)},{0xC9F75E26L,(-1L),0xBEF3D604L},{0xC8C66085L,0xB809ED89L,7L},{1L,0xC2C0C57DL,1L},{1L,0xD690D09DL,0xC9F75E26L},{0xC8C66085L,0L,0xE72653B0L},{0xC9F75E26L,9L,0xC9F75E26L}},{{0x4299DA23L,0x91AC2CD0L,1L},{0xD79D57AAL,0x91AC2CD0L,7L},{(-1L),9L,0xBEF3D604L},{0x659CEB6AL,0L,(-1L)},{(-1L),0xD690D09DL,0xC8C66085L},{0xD79D57AAL,0xC2C0C57DL,0xC8C66085L},{0x4299DA23L,0xB809ED89L,(-1L)}}};
static int64_t g_187[2] = {(-8L),(-8L)};
static int8_t g_189 = 0x97L;
static uint8_t g_192 = 1UL;
static struct S0 g_198 = {0x6AB5L,-3L,18446744073709551615UL,0xF600149BL,0x03A6L,0x6BL};
static struct S0 *g_197 = &g_198;
static const int32_t *g_202[7][6] = {{(void*)0,&g_2,(void*)0,&g_2,&g_2,(void*)0},{(void*)0,(void*)0,&g_2,(void*)0,&g_2,(void*)0},{&g_2,&g_2,(void*)0,(void*)0,&g_2,&g_2},{(void*)0,&g_2,(void*)0,&g_2,(void*)0,(void*)0},{(void*)0,&g_2,&g_2,(void*)0,&g_2,(void*)0},{(void*)0,&g_2,(void*)0,&g_2,&g_2,(void*)0},{(void*)0,(void*)0,&g_2,(void*)0,&g_2,(void*)0}};
static union U1 g_219 = {-2L};
static int8_t g_229 = 0xEAL;
static int8_t g_230 = 0x83L;
static int32_t g_231 = (-6L);
static uint8_t g_233 = 1UL;
static int32_t g_243 = 0x179C2D32L;
static uint16_t g_244 = 0x1555L;
static int32_t **g_250 = &g_121;
static int32_t ***g_249 = &g_250;
static union U1 *g_373 = &g_219;
static union U1 **g_372 = &g_373;
static union U1 **g_376 = &g_373;
static union U1 **g_377 = &g_373;
static struct S0 g_379 = {0L,-6L,8UL,18446744073709551606UL,0x27A5L,1UL};
static uint64_t g_408 = 1UL;
static uint32_t g_477[1] = {0xD017DD8CL};
static uint64_t g_517 = 0xF28005721D74D001LL;
static int16_t *g_519 = &g_173;
static int16_t **g_518[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t g_520 = 18446744073709551615UL;
static uint32_t g_583 = 4294967295UL;
static int64_t g_590 = 5L;
static uint8_t g_591[7] = {0xDEL,0xDEL,0xDEL,0xDEL,0xDEL,0xDEL,0xDEL};
static uint64_t g_609 = 18446744073709551611UL;
static int32_t g_614 = 0x208A38F4L;
static uint16_t g_615 = 65533UL;
static int32_t g_670 = 5L;
static uint32_t g_671[5] = {0x5043B771L,0x5043B771L,0x5043B771L,0x5043B771L,0x5043B771L};
static union U1 ***g_707 = (void*)0;
static union U1 ****g_706 = &g_707;
static union U1 ***** const g_705 = &g_706;
static uint8_t g_748 = 0x0CL;
static int32_t g_752 = 0L;
static int32_t g_753 = 0xA0382D54L;
static uint16_t g_758 = 0x2A7BL;
static uint64_t * const g_767 = &g_517;
static uint64_t * const *g_766 = &g_767;
static int64_t g_788 = (-6L);
static uint64_t g_790 = 0xC675259741C425DDLL;
static uint16_t *g_840[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t **g_839 = &g_840[0];
static const uint32_t *g_851 = &g_116;
static const uint32_t **g_850[4][7] = {{&g_851,&g_851,&g_851,&g_851,&g_851,&g_851,&g_851},{(void*)0,&g_851,&g_851,(void*)0,&g_851,&g_851,(void*)0},{&g_851,&g_851,&g_851,&g_851,&g_851,&g_851,&g_851},{(void*)0,(void*)0,&g_851,(void*)0,(void*)0,&g_851,(void*)0}};
static int32_t *g_1060[1][1][3] = {{{(void*)0,(void*)0,(void*)0}}};
static uint64_t * const g_1065 = &g_790;
static int32_t *g_1228 = &g_2;
static int8_t g_1247[1] = {(-2L)};
static uint32_t g_1282[5] = {0xEDDC9A18L,0xEDDC9A18L,0xEDDC9A18L,0xEDDC9A18L,0xEDDC9A18L};
static int32_t g_1295 = (-1L);
static struct S0 g_1309 = {0xED10L,-1L,0xD0046FCFE45F1B60LL,0x0C166E38L,65535UL,255UL};
static const struct S0 *g_1308[3] = {&g_1309,&g_1309,&g_1309};
static int64_t g_1355 = 1L;
static uint64_t g_1363 = 0xF03D2EE0708B0149LL;
static uint64_t g_1415 = 0UL;
static struct S0 g_1538 = {0x388CL,-4L,3UL,18446744073709551610UL,0xFBD1L,0UL};
static uint16_t g_1650 = 0x65A7L;
static int16_t g_1662[7] = {1L,1L,1L,1L,1L,1L,1L};
static uint8_t g_2012 = 8UL;
static int16_t * const *g_2063 = &g_519;
static int16_t * const **g_2062 = &g_2063;
static int16_t * const ** const *g_2061 = &g_2062;
static int16_t * const ** const **g_2060[4] = {&g_2061,&g_2061,&g_2061,&g_2061};
static uint16_t ***g_2085 = &g_839;
static uint16_t ****g_2084 = &g_2085;
static uint16_t *****g_2083 = &g_2084;
static int32_t ****g_2150 = &g_249;
static int32_t *****g_2149 = &g_2150;
static int16_t g_2279 = 0xF08AL;
static uint64_t g_2282 = 0x4E37E41B8B0164B9LL;
static const int8_t *g_2310 = &g_229;
static const int8_t **g_2309[3][5] = {{&g_2310,&g_2310,&g_2310,&g_2310,&g_2310},{&g_2310,&g_2310,&g_2310,&g_2310,&g_2310},{&g_2310,&g_2310,&g_2310,&g_2310,&g_2310}};
static int8_t g_2322 = 0L;
static const int64_t **g_2470[3] = {(void*)0,(void*)0,(void*)0};
static const int64_t ** const *g_2469 = &g_2470[2];
static const int64_t ** const **g_2468 = &g_2469;
static uint32_t g_2478 = 4294967294UL;
static uint32_t *g_2515 = &g_477[0];
static uint32_t **g_2514[2] = {&g_2515,&g_2515};
static uint32_t ***g_2513 = &g_2514[0];
static uint8_t g_2518 = 252UL;
static int32_t g_2544 = 0L;
static union U1 g_2576 = {-4L};
static const struct S0 g_2605 = {0x1CCBL,-3L,18446744073709551615UL,18446744073709551615UL,0UL,0x91L};
static uint16_t g_2614 = 0xE82BL;
static uint16_t g_2626 = 1UL;
static uint64_t **g_2700 = (void*)0;
static uint64_t ***g_2699[3] = {&g_2700,&g_2700,&g_2700};
static uint64_t ****g_2698 = &g_2699[1];



static uint8_t  func_1(void);
static const struct S0 * func_5(uint32_t  p_6, struct S0 * p_7, struct S0 * p_8, const struct S0 * p_9);
static struct S0 * func_11(struct S0 * p_12, int64_t  p_13, uint32_t  p_14);
static struct S0 * func_18(const struct S0 * p_19, uint16_t  p_20, uint8_t  p_21);
static struct S0 * func_22(union U1  p_23, int32_t  p_24, int32_t  p_25, int32_t  p_26);
static uint64_t  func_31(int64_t  p_32, struct S0 * p_33);
static uint16_t  func_35(const uint64_t  p_36, struct S0 * p_37, uint32_t  p_38, struct S0 * p_39);
static struct S0 * func_40(uint16_t  p_41);




static uint8_t  func_1(void)
{ 
    int8_t l_10 = 0x30L;
    struct S0 *l_17[5][2][7] = {{{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16},{(void*)0,&g_16,&g_16,(void*)0,&g_16,(void*)0,(void*)0}},{{(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0},{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16}},{{(void*)0,&g_16,&g_16,(void*)0,&g_16,(void*)0,(void*)0},{(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0}},{{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16},{(void*)0,&g_16,&g_16,(void*)0,&g_16,(void*)0,(void*)0}},{{(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0},{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16}}};
    union U1 l_27 = {0L};
    uint32_t l_775 = 0x0D41CFA7L;
    uint32_t l_2229 = 0xE270BB1DL;
    int32_t *l_2261 = &g_231;
    int16_t * const ** const l_2342 = &g_2063;
    uint16_t l_2344 = 0x2716L;
    uint64_t l_2353 = 18446744073709551615UL;
    uint8_t l_2354 = 0x10L;
    uint32_t l_2359 = 0xF8F2C4CAL;
    int64_t l_2452 = 0x37F9CC139BEEFECDLL;
    uint64_t l_2488 = 0x14EDC627800E5EF0LL;
    uint8_t l_2493 = 0UL;
    int16_t l_2532 = (-10L);
    int32_t l_2541[3];
    uint64_t l_2623 = 0x87633D12CA6288E2LL;
    uint32_t ****l_2629 = &g_2513;
    uint8_t l_2638 = 0x0AL;
    uint32_t l_2647 = 0x090B9589L;
    int32_t l_2730 = 0xBE666B37L;
    int16_t l_2739 = 0x27FCL;
    uint32_t l_2787 = 0x51237284L;
    uint64_t l_2800 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2541[i] = (-9L);
    for (g_2 = 0; (g_2 < 2); ++g_2)
    { 
        uint32_t l_30[2];
        struct S0 *l_346 = &g_198;
        const struct S0 **l_2228 = &g_1308[0];
        int32_t *l_2260 = &g_752;
        int32_t *l_2314 = &g_231;
        union U1 l_2321 = {0x1DCF3264L};
        int64_t l_2324 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_30[i] = 0x6559653EL;
    }
    return (*l_2261);
}



static const struct S0 * func_5(uint32_t  p_6, struct S0 * p_7, struct S0 * p_8, const struct S0 * p_9)
{ 
    int32_t *l_1310[1][6] = {{&g_670,&g_670,&g_219.f0,&g_670,&g_670,&g_219.f0}};
    int32_t **l_1311 = &g_1228;
    int32_t l_1330 = 0x7A595695L;
    uint64_t l_1336[7];
    int16_t l_1341 = 0x2630L;
    int64_t l_1343 = 1L;
    struct S0 l_1375 = {0L,-1L,18446744073709551608UL,0x4EEA0F7DL,65533UL,0x1BL};
    int32_t **l_1376[6][7][5] = {{{&g_1228,&g_1060[0][0][1],&g_1060[0][0][0],&g_1060[0][0][1],&g_1060[0][0][1]},{&l_1310[0][5],(void*)0,&l_1310[0][5],&g_1228,&g_1060[0][0][1]},{&g_121,&g_1228,&g_1228,&g_1060[0][0][1],&g_1228},{&l_1310[0][5],&l_1310[0][4],(void*)0,&l_1310[0][2],&g_1060[0][0][1]},{&g_1228,(void*)0,&g_1228,&g_1228,&g_1060[0][0][1]},{&g_1060[0][0][1],(void*)0,&l_1310[0][5],&l_1310[0][4],&g_1060[0][0][1]},{&l_1310[0][4],&g_121,&g_1060[0][0][0],&l_1310[0][0],&g_1228}},{{(void*)0,(void*)0,&l_1310[0][4],&g_1060[0][0][1],(void*)0},{&l_1310[0][4],&l_1310[0][4],&l_1310[0][4],&g_1228,&g_1228},{&g_1060[0][0][2],&g_1060[0][0][1],&l_1310[0][4],&l_1310[0][5],&l_1310[0][4]},{&l_1310[0][4],&l_1310[0][4],(void*)0,&g_1060[0][0][0],&l_1310[0][4]},{&g_1060[0][0][1],&g_121,&l_1310[0][4],&l_1310[0][4],&g_1060[0][0][1]},{&g_1060[0][0][1],(void*)0,&l_1310[0][4],(void*)0,&l_1310[0][4]},{&g_1060[0][0][1],&l_1310[0][5],&g_121,&l_1310[0][4],&l_1310[0][4]}},{{(void*)0,(void*)0,&l_1310[0][0],&g_1228,&g_1228},{&g_1060[0][0][2],&g_121,&g_1060[0][0][2],&l_1310[0][4],(void*)0},{&l_1310[0][3],&l_1310[0][4],&g_1060[0][0][2],(void*)0,&g_1060[0][0][0]},{&g_1060[0][0][2],&g_1060[0][0][1],&g_1060[0][0][1],&l_1310[0][4],&l_1310[0][4]},{(void*)0,&l_1310[0][4],&g_1060[0][0][2],&g_1060[0][0][0],&l_1310[0][4]},{&g_1060[0][0][1],&g_1060[0][0][0],&g_1060[0][0][2],&l_1310[0][5],&l_1310[0][4]},{&g_1060[0][0][1],&g_1060[0][0][1],&l_1310[0][0],&g_1228,&g_1060[0][0][0]}},{{&g_1060[0][0][1],&g_1060[0][0][0],&g_121,(void*)0,(void*)0},{&l_1310[0][4],&l_1310[0][4],&l_1310[0][4],&g_1228,&g_1228},{&g_1060[0][0][2],&g_1060[0][0][1],&l_1310[0][4],&l_1310[0][5],&l_1310[0][4]},{&l_1310[0][4],&l_1310[0][4],(void*)0,&g_1060[0][0][0],&l_1310[0][4]},{&g_1060[0][0][1],&g_121,&l_1310[0][4],&l_1310[0][4],&g_1060[0][0][1]},{&g_1060[0][0][1],(void*)0,&l_1310[0][4],(void*)0,&l_1310[0][4]},{&g_1060[0][0][1],&l_1310[0][5],&g_121,&l_1310[0][4],&l_1310[0][4]}},{{(void*)0,(void*)0,&l_1310[0][0],&g_1228,&g_1228},{&g_1060[0][0][2],&g_121,&g_1060[0][0][2],&l_1310[0][4],(void*)0},{&l_1310[0][3],&l_1310[0][4],&g_1060[0][0][2],(void*)0,&g_1060[0][0][0]},{&g_1060[0][0][2],&g_1060[0][0][1],&g_1060[0][0][1],&l_1310[0][4],&l_1310[0][4]},{(void*)0,&l_1310[0][4],&g_1060[0][0][2],&g_1060[0][0][0],&l_1310[0][4]},{&g_1060[0][0][1],&g_1060[0][0][0],&g_1060[0][0][2],&l_1310[0][5],&l_1310[0][4]},{&g_1060[0][0][1],&g_1060[0][0][1],&l_1310[0][0],&g_1228,&g_1060[0][0][0]}},{{&g_1060[0][0][1],&g_1060[0][0][0],&g_121,(void*)0,(void*)0},{&l_1310[0][4],&l_1310[0][4],&l_1310[0][4],&g_1228,&g_1228},{&g_1060[0][0][2],&g_1060[0][0][1],&l_1310[0][4],&l_1310[0][5],&l_1310[0][4]},{&l_1310[0][4],&l_1310[0][4],(void*)0,&g_1060[0][0][0],&l_1310[0][4]},{&g_1060[0][0][1],&g_121,&l_1310[0][4],&l_1310[0][4],&g_1060[0][0][1]},{&g_1060[0][0][1],(void*)0,&l_1310[0][4],(void*)0,&l_1310[0][4]},{&g_1060[0][0][1],&l_1310[0][5],&g_121,&l_1310[0][4],&l_1310[0][4]}}};
    uint16_t l_1381[1];
    const union U1 *l_1472 = &g_219;
    const union U1 **l_1471 = &l_1472;
    uint16_t ***l_1475 = (void*)0;
    uint64_t l_1482 = 0xA851B80BCC3585BELL;
    int16_t l_1496[2];
    int16_t **l_1520[1][7][4] = {{{&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519},{(void*)0,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,(void*)0,&g_519},{(void*)0,&g_519,&g_519,&g_519},{(void*)0,(void*)0,&g_519,&g_519}}};
    struct S0 *l_1537 = &g_1538;
    uint8_t l_1554 = 0xD1L;
    uint64_t l_1582[2];
    int64_t *l_1584 = (void*)0;
    int64_t **l_1583 = &l_1584;
    union U1 *****l_1601 = &g_706;
    int8_t l_1616[2][2][3] = {{{(-8L),0x7CL,0xBBL},{(-8L),(-8L),0x7CL}},{{0xC4L,0x7CL,0x7CL},{0x7CL,0x9CL,0xBBL}}};
    int32_t l_1618 = (-7L);
    uint32_t l_1647 = 0x0FBA42ADL;
    uint16_t l_1707 = 0x315FL;
    int8_t *l_1818[2][3] = {{&g_1247[0],&g_1247[0],&g_1247[0]},{&g_230,&g_230,&g_230}};
    int32_t l_1851 = 0L;
    uint8_t l_1865 = 0xABL;
    struct S0 l_1918 = {1L,0x1E5FA1F9L,0x91F830F508501A5FLL,18446744073709551614UL,65535UL,2UL};
    uint32_t l_1935 = 1UL;
    int32_t l_1942 = 0x70D7F799L;
    int16_t ** const *l_2047 = &l_1520[0][6][1];
    int16_t ** const **l_2046[1];
    int8_t l_2078 = 0xB1L;
    uint32_t *l_2091 = &g_477[0];
    uint32_t **l_2090 = &l_2091;
    uint8_t l_2112 = 0xE5L;
    uint8_t *l_2145 = &g_81;
    const int32_t **l_2159 = &g_202[1][1];
    const int32_t ***l_2158 = &l_2159;
    const int32_t ****l_2157 = &l_2158;
    const int32_t *****l_2156 = &l_2157;
    union U1 l_2162 = {1L};
    int64_t l_2227 = 0xD5B6062CF9E8BFA0LL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1336[i] = 18446744073709551615UL;
    for (i = 0; i < 1; i++)
        l_1381[i] = 0x297EL;
    for (i = 0; i < 2; i++)
        l_1496[i] = 0x9463L;
    for (i = 0; i < 2; i++)
        l_1582[i] = 0x055B4392992B2B5FLL;
    for (i = 0; i < 1; i++)
        l_2046[i] = &l_2047;
    (*l_1311) = l_1310[0][4];
    for (g_758 = 0; (g_758 <= 0); g_758 += 1)
    { 
        int32_t l_1318[1][2];
        uint64_t *l_1327 = &g_609;
        int8_t *l_1331 = &g_230;
        int32_t ****l_1332 = &g_249;
        int32_t l_1342 = 0x7AF4F7BEL;
        int32_t l_1350 = 0x87125D0EL;
        int32_t l_1352 = 0xF0BFD8B9L;
        int32_t l_1353 = (-10L);
        int32_t l_1354 = 0x3A6E1003L;
        int32_t l_1356 = 0x62AD970BL;
        int32_t l_1357 = (-9L);
        int32_t l_1358[4][1][3] = {{{1L,0xFA1E9A75L,0xFA1E9A75L}},{{0x47D27FA5L,0xF5F87774L,0xF5F87774L}},{{1L,0xFA1E9A75L,0xFA1E9A75L}},{{0x47D27FA5L,0xF5F87774L,0xF5F87774L}}};
        int32_t l_1359 = (-1L);
        int64_t l_1361 = 5L;
        int64_t l_1362 = 0x9821C93C11B5140FLL;
        int8_t l_1389 = 0L;
        uint32_t l_1396 = 0x9DFEFA51L;
        union U1 * const * const **l_1414 = (void*)0;
        union U1 * const * const ***l_1413 = &l_1414;
        int32_t *l_1476 = &g_670;
        int8_t l_1494 = 0x98L;
        uint64_t l_1499 = 18446744073709551615UL;
        uint32_t l_1515 = 6UL;
        uint32_t l_1523[5][7] = {{18446744073709551612UL,5UL,5UL,18446744073709551612UL,5UL,5UL,18446744073709551612UL},{0xA15A00C9L,0UL,0xA15A00C9L,0xA15A00C9L,0UL,0xA15A00C9L,0xA15A00C9L},{18446744073709551612UL,18446744073709551612UL,0xF4B0C288L,18446744073709551612UL,18446744073709551612UL,0xF4B0C288L,18446744073709551612UL},{0UL,0xA15A00C9L,0xA15A00C9L,0UL,0xA15A00C9L,0xA15A00C9L,0UL},{5UL,18446744073709551612UL,5UL,5UL,18446744073709551612UL,5UL,5UL}};
        int32_t l_1677 = 0x379B0BC8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1318[i][j] = 0L;
        }
    }
    for (g_379.f0 = 1; (g_379.f0 >= 0); g_379.f0 -= 1)
    { 
        union U1 l_1681[1] = {{0x6B9BF6DDL}};
        int32_t *l_1704 = &g_752;
        int32_t l_1706 = 0xAD4D0C10L;
        int8_t l_1725 = (-3L);
        struct S0 l_1747 = {1L,7L,0xFA6E47682F89F2CALL,0x0BF404D1L,0x56EAL,0x36L};
        int32_t l_1755 = 0xEC3CECD5L;
        int32_t l_1758 = 3L;
        int32_t l_1759 = 0x84434658L;
        int32_t l_1764[7] = {0x123665B9L,0x97AE8FF8L,0x97AE8FF8L,0x123665B9L,0x97AE8FF8L,0x97AE8FF8L,0x123665B9L};
        int32_t l_1767 = 0xF67143A3L;
        uint32_t l_1768 = 0xCB08CB39L;
        uint64_t ****l_1812 = (void*)0;
        uint64_t *****l_1811 = &l_1812;
        int32_t ***l_1882 = &l_1311;
        uint32_t *l_1895 = &l_1768;
        uint32_t l_1908 = 0x31D49657L;
        uint32_t *l_1966 = &g_671[0];
        uint16_t ***l_1983 = (void*)0;
        int32_t *l_2049 = &l_1759;
        int16_t * const ** const **l_2065 = &g_2061;
        int32_t l_2076[3][7] = {{(-1L),0x567A8E2FL,1L,0x567A8E2FL,(-1L),0L,0L},{(-1L),0x567A8E2FL,1L,0x567A8E2FL,(-1L),0L,0L},{(-1L),0x567A8E2FL,1L,0x567A8E2FL,(-1L),0L,0L}};
        int32_t l_2079 = (-10L);
        uint64_t l_2080 = 0xE471BD0DC6FE736ELL;
        union U1 ****l_2089 = &g_707;
        int8_t **l_2153 = &l_1818[1][1];
        int i, j;
    }
    return &g_198;
}



static struct S0 * func_11(struct S0 * p_12, int64_t  p_13, uint32_t  p_14)
{ 
    uint64_t l_978 = 0xECC03C6ED407E89CLL;
    int32_t l_980 = 0xB5EC6C86L;
    const union U1 *l_1010 = &g_219;
    const union U1 **l_1009[1];
    int32_t l_1011 = 1L;
    int64_t *l_1022 = &g_788;
    int64_t **l_1021 = &l_1022;
    int64_t ***l_1020 = &l_1021;
    int64_t l_1057 = 0L;
    uint64_t *l_1111 = &g_790;
    uint64_t **l_1110 = &l_1111;
    uint64_t ***l_1109[1][2][3];
    int32_t l_1112 = 0xD73E2209L;
    const struct S0 *l_1167 = &g_16;
    uint32_t l_1171 = 0x7E1359A2L;
    int32_t l_1172 = 1L;
    int32_t l_1173 = 4L;
    int32_t l_1177 = 0x97E459A6L;
    int32_t l_1179 = 1L;
    int32_t l_1187 = 0xCA39887BL;
    int32_t l_1188 = 0xEC913BBCL;
    int32_t l_1189[1];
    int32_t ****l_1212 = &g_249;
    union U1 ***l_1303[7][2] = {{(void*)0,&g_377},{&g_372,(void*)0},{&g_372,&g_372},{&g_372,(void*)0},{&g_372,&g_377},{(void*)0,&g_377},{&g_372,(void*)0}};
    int32_t *l_1304[3][4][1] = {{{&l_1189[0]},{&l_1187},{&l_1189[0]},{&l_1189[0]}},{{&l_1187},{&l_1189[0]},{&l_1189[0]},{&l_1187}},{{&l_1189[0]},{&l_1189[0]},{&l_1187},{&l_1189[0]}}};
    uint64_t l_1305 = 18446744073709551613UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1009[i] = &l_1010;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_1109[i][j][k] = &l_1110;
        }
    }
    for (i = 0; i < 1; i++)
        l_1189[i] = 0x99A9A30FL;
    for (g_753 = 0; (g_753 < (-10)); g_753--)
    { 
        uint16_t l_979 = 1UL;
        uint32_t *l_981 = (void*)0;
        uint32_t *l_982[2][3][3] = {{{&g_116,&g_583,&g_583},{(void*)0,&g_116,&g_116},{&g_116,&g_583,&g_583}},{{(void*)0,&g_116,&g_116},{&g_116,&g_583,&g_583},{(void*)0,&g_116,&g_116}}};
        int32_t l_983 = 1L;
        int32_t l_984 = (-1L);
        int16_t *l_985 = &g_379.f0;
        uint16_t ***l_1002[3];
        union U1 **l_1008 = &g_373;
        int64_t ** const *l_1016 = (void*)0;
        int32_t l_1059[2];
        struct S0 *l_1080[5][7][5] = {{{&g_16,&g_16,&g_16,&g_16,(void*)0},{&g_379,&g_16,&g_379,&g_198,(void*)0},{&g_16,(void*)0,&g_16,&g_198,&g_16},{&g_198,&g_16,&g_16,&g_198,(void*)0},{&g_198,&g_198,&g_198,&g_16,&g_16},{&g_379,&g_379,&g_16,(void*)0,&g_198},{&g_379,&g_16,&g_16,&g_198,(void*)0}},{{&g_198,&g_198,&g_379,&g_198,&g_198},{&g_16,&g_379,(void*)0,&g_16,(void*)0},{&g_16,&g_16,&g_16,(void*)0,&g_379},{&g_379,&g_16,&g_16,&g_16,&g_16},{(void*)0,&g_379,&g_16,&g_16,(void*)0},{&g_198,&g_16,(void*)0,&g_198,&g_379},{&g_379,&g_16,(void*)0,&g_16,&g_198}},{{(void*)0,&g_379,&g_198,&g_16,&g_379},{&g_198,&g_379,(void*)0,&g_379,&g_379},{&g_16,&g_198,&g_198,(void*)0,&g_198},{&g_198,&g_379,&g_379,&g_379,&g_198},{&g_16,&g_198,&g_379,(void*)0,&g_16},{&g_379,&g_16,&g_379,&g_198,&g_379},{&g_198,&g_16,&g_379,&g_198,&g_16}},{{(void*)0,&g_198,&g_198,&g_379,&g_198},{&g_16,&g_379,(void*)0,&g_379,&g_198},{&g_16,(void*)0,&g_198,&g_16,&g_379},{&g_379,&g_198,&g_16,(void*)0,&g_379},{&g_379,(void*)0,&g_198,&g_198,&g_198},{&g_198,&g_16,&g_198,(void*)0,&g_379},{&g_16,&g_198,&g_16,(void*)0,(void*)0}},{{&g_379,&g_198,&g_198,&g_16,&g_16},{(void*)0,&g_379,&g_16,(void*)0,&g_379},{(void*)0,&g_198,&g_198,&g_16,&g_16},{&g_379,&g_16,&g_198,&g_198,&g_16},{&g_379,&g_16,&g_16,(void*)0,(void*)0},{&g_379,&g_379,&g_198,&g_198,(void*)0},{&g_379,&g_16,(void*)0,(void*)0,&g_16}}};
        int8_t l_1108 = 0x5DL;
        uint64_t ***l_1136 = &l_1110;
        uint64_t ***l_1137 = &l_1110;
        uint8_t *l_1147 = &g_182;
        uint8_t l_1214 = 0UL;
        int32_t l_1220 = (-1L);
        struct S0 **l_1236 = (void*)0;
        int32_t **l_1246 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1002[i] = &g_839;
        for (i = 0; i < 2; i++)
            l_1059[i] = (-10L);
        if ((((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((((+(safe_rshift_func_uint8_t_u_u((*g_82), (((*l_985) = ((((*g_519) = (safe_lshift_func_uint16_t_u_s(p_14, (l_984 = (((void*)0 == &g_839) || (l_978 , (l_983 = (l_979 ^ (((((l_980 <= l_978) <= (-3L)) == 0xD5L) == l_979) ^ p_13))))))))) == 2L) , l_983)) || l_980)))) , l_979) && g_590), 0x04DB7613L)), 1L)) > p_14) != 1UL))
        { 
            uint16_t * const *l_1001 = &g_840[4];
            uint16_t * const **l_1000 = &l_1001;
            int32_t *l_1003 = &g_219.f0;
            uint16_t l_1012 = 0xE565L;
            int64_t *l_1077 = &g_788;
            (*l_1003) = ((0x11L > ((*g_82) = (safe_add_func_int64_t_s_s((p_13 ^ (safe_rshift_func_uint16_t_u_u((((l_980 | (safe_sub_func_uint8_t_u_u(253UL, ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xFCD8L, (((0x7049L == (safe_mul_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s(((l_1000 == l_1002[0]) , p_14), p_14)) , g_198.f5) & l_980) ^ p_14) == 0xC4L), p_13))) == 0L) > l_980))), p_14)) > (*g_767))))) | p_14) || l_980), p_14))), l_978)))) , l_978);
            if (p_14)
                break;
            if ((((p_13 & (safe_add_func_uint16_t_u_u((((((l_983 <= g_748) & (l_1008 == l_1009[0])) && (((l_1011 &= ((((l_980 , (l_983 >= g_186[4][4][1])) != (*l_1003)) , p_14) && (-10L))) , (*l_1003)) != 0L)) == 0L) && p_13), p_14))) ^ p_13) , l_1012))
            { 
                (*l_1003) = ((*g_519) && (safe_mul_func_int16_t_s_s((*l_1003), p_14)));
                return &g_379;
            }
            else
            { 
                uint8_t l_1015 = 252UL;
                int64_t *l_1019[4];
                int64_t ** const l_1018[3] = {&l_1019[3],&l_1019[3],&l_1019[3]};
                int64_t ** const *l_1017 = &l_1018[0];
                int32_t ****l_1100 = &g_249;
                int32_t *****l_1099 = &l_1100;
                int8_t *l_1107[3][6][1];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1019[i] = &g_788;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1107[i][j][k] = &g_111;
                    }
                }
                if (l_1015)
                    break;
                if ((((l_1017 = l_1016) != l_1020) != p_13))
                { 
                    struct S0 **l_1023[4][6] = {{&g_15[0][2],&g_15[0][2],&g_197,&g_197,&g_15[0][2],(void*)0},{(void*)0,&g_197,&g_15[6][1],&g_197,(void*)0,&g_15[0][2]},{(void*)0,&g_15[0][2],&g_197,&g_197,(void*)0,(void*)0},{&g_15[0][2],&g_15[0][2],&g_15[0][2],&g_15[0][2],&g_15[6][1],(void*)0}};
                    int i, j;
                    p_12 = &g_379;
                    if (p_13)
                        break;
                    if (l_984)
                        break;
                }
                else
                { 
                    struct S0 **l_1024 = &g_197;
                    uint64_t *l_1037 = (void*)0;
                    uint64_t *l_1038 = &l_978;
                    int32_t *l_1058[7][3][7] = {{{&l_984,&g_670,&l_1011,&l_983,&g_614,&l_983,&l_1011},{&g_2,&g_2,&l_1011,&l_1011,&g_46,&g_614,&g_231},{&l_980,&l_983,&g_2,(void*)0,&l_983,&l_984,&g_614}},{{&g_670,(void*)0,&l_983,&g_231,&g_46,&l_983,&g_231},{(void*)0,&g_231,&g_752,(void*)0,&g_614,&g_752,&g_752},{&g_2,(void*)0,&g_670,&l_983,&g_670,(void*)0,&g_2}},{{(void*)0,&g_2,&g_752,&g_752,&l_980,(void*)0,&g_752},{&g_2,&g_2,&g_614,&g_2,&g_670,&g_46,&l_983},{&l_1011,&g_752,&g_752,&l_983,&g_614,&g_752,&g_2}},{{(void*)0,&g_2,&g_670,&l_1011,&g_2,&g_670,&g_670},{&l_984,&l_1011,&g_752,&l_1011,&l_984,(void*)0,&l_980},{&g_670,&g_231,&g_231,(void*)0,(void*)0,&l_1011,&g_2}},{{&g_752,&l_980,(void*)0,&g_614,&g_2,&l_980,&g_752},{&g_670,(void*)0,&g_2,&g_2,(void*)0,&l_1011,&l_983},{&l_984,(void*)0,(void*)0,(void*)0,&g_752,&g_752,(void*)0}},{{(void*)0,&g_231,(void*)0,&g_670,&l_983,&g_670,&g_752},{&l_1011,&g_752,&l_980,&l_1011,&l_984,&g_46,&l_1011},{&g_2,&l_1011,&g_752,&l_983,&g_614,&g_670,&g_2}},{{(void*)0,&l_980,&g_752,(void*)0,&l_983,&g_752,&l_980},{&g_2,&g_670,&l_1011,&g_670,&g_670,&l_1011,&g_670},{&l_983,(void*)0,(void*)0,&g_2,&g_752,&l_980,&l_1011}}};
                    int8_t *l_1073[3][1][6] = {{{&g_44,(void*)0,&g_44,&g_44,(void*)0,&g_44}},{{&g_44,(void*)0,&g_44,&g_44,(void*)0,&g_44}},{{&g_44,(void*)0,&g_44,&g_44,(void*)0,&g_44}}};
                    int i, j, k;
                    (*l_1024) = func_40(p_14);
                    l_1059[1] |= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((**g_766) = (safe_mod_func_uint16_t_u_u(((**g_766) != (((((safe_mul_func_int8_t_s_s(0x54L, (*l_1003))) || (safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((*l_1038)++), 0x7EBB338AE84604B7LL)), ((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_985) = (safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*g_82) < (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x323FL, (((l_1011 ^= ((*l_1003) = (safe_mul_func_int16_t_s_s(l_1057, p_13)))) | l_1015) == g_16.f0))), 0xFFAE83F6L))), 0x6EL)), 0x1694L)) , (*g_851)) >= p_14), (*g_767)))), 1)) ^ l_983), g_591[0])) == l_980)))) == l_979) <= (-1L)) <= 0UL)), l_984))), g_91[3][1])), 0xC23AL));
                    (*g_250) = g_1060[0][0][1];
                    (*l_1003) = (l_984 ^= (safe_mul_func_int16_t_s_s(p_14, (((safe_lshift_func_int16_t_s_s(((((g_1065 != l_1019[2]) == (l_980 | ((~(g_189 = (safe_add_func_int8_t_s_s(0x2CL, ((safe_mod_func_uint32_t_u_u((((l_1059[1] ^= (safe_add_func_int8_t_s_s(g_590, ((*l_1003) | p_14)))) || l_1059[1]) || (*g_519)), (*g_851))) | 0xCF4E2742L))))) > l_979))) && g_198.f3) & p_13), 4)) != p_13) | 1UL))));
                }
                if ((safe_div_func_int8_t_s_s((0x2BE4L != (+1UL)), ((*g_82) , ((&p_13 != l_1077) && (safe_rshift_func_uint8_t_u_u(251UL, 4)))))))
                { 
                    return l_1080[4][6][4];
                }
                else
                { 
                    struct S0 **l_1081 = &g_15[0][2];
                    (*l_1003) = ((((((*l_1081) = p_12) == l_1080[4][6][4]) == (p_14 <= ((0xCBL == 7L) | (!(g_116 = (l_1011 = p_13)))))) , 4294967295UL) || (*g_851));
                }
                (*l_1003) = (((*g_851) != ((safe_mul_func_uint16_t_u_u(((((p_14 < 0x8320L) ^ (((**g_766)--) <= ((((safe_mod_func_uint8_t_u_u(((*g_82) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((((((safe_sub_func_int32_t_s_s((((*l_1099) = &g_249) != (void*)0), ((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((((**l_1008) , ((l_980 = ((((safe_sub_func_uint8_t_u_u((g_198.f5 , (*g_82)), p_13)) & p_13) ^ g_752) >= (*l_1003))) | g_81)) <= 1UL), l_1108)), (*g_1065))) ^ 0x4DL))) , &l_1021) == (void*)0) , l_983) || 0xD4A7L) || l_983) == (*l_1003)), 0xDFL)), l_978)), l_1059[0])), 0xB74F7081L))), 1UL)) && 0xB75A97F1L) , (void*)0) != l_1109[0][0][1]))) && (*g_519)) > l_1112), 0x7C65L)) , l_1059[1])) < l_1011);
            }
        }
        else
        { 
            const uint32_t l_1127 = 0xBE46202EL;
            uint32_t l_1144 = 18446744073709551615UL;
            int32_t l_1149 = 0x9870872DL;
            int32_t l_1176 = 0L;
            int32_t l_1182 = (-1L);
            int32_t l_1183 = 0x214B7E77L;
            int32_t l_1184 = (-3L);
            int32_t l_1185 = 1L;
            int32_t l_1186 = 0L;
            int32_t l_1190 = 0xB567C79CL;
            int32_t l_1191 = 1L;
            int32_t l_1192 = 0x68644C82L;
            int32_t l_1193 = 0xDBDAB11EL;
            uint16_t *l_1218 = &g_758;
            uint8_t *l_1226 = &g_591[2];
            uint32_t l_1273 = 0xB3E94B2EL;
            int32_t *l_1284[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1284[i] = &l_1187;
            for (g_520 = (-22); (g_520 != 21); g_520++)
            { 
                int32_t *l_1117 = &l_983;
                (*l_1117) = (safe_mod_func_int64_t_s_s(((***l_1020) = g_91[1][0]), (*g_1065)));
                for (g_44 = (-22); (g_44 == 1); g_44 = safe_add_func_int16_t_s_s(g_44, 5))
                { 
                    (*l_1117) = (p_13 , (g_173 , l_1057));
                    if (p_14)
                        break;
                }
            }
            if (((((*g_82) = ((((*l_985) |= (safe_mul_func_uint8_t_u_u(p_14, ((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u(((0L ^ (0xCAB7L >= (*g_519))) , ((safe_add_func_int16_t_s_s(l_1127, ((*g_519) = (((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(l_1127, (&g_766 == l_1136))) | l_1057), l_1127)), 6UL)), 12)) > p_13) & 0x4D8ABE15L)))) , 0x7AL)), l_978)))) & 0x84FFL)))) , l_1136) != l_1137)) ^ p_13) | l_980))
            { 
                uint8_t *l_1148 = (void*)0;
                const union U1 l_1162 = {1L};
                int32_t l_1174 = (-1L);
                int32_t l_1175 = 7L;
                int32_t l_1178 = 0x6E3FDB3BL;
                int32_t l_1180[5][7] = {{5L,0x4ECED7C4L,0L,(-4L),0L,0x4ECED7C4L,5L},{(-1L),0x7A1D88BEL,(-1L),0L,(-1L),0x7A1D88BEL,(-1L)},{5L,0x4ECED7C4L,0L,(-4L),0L,0x4ECED7C4L,5L},{(-1L),0x7A1D88BEL,(-1L),0L,(-1L),0x7A1D88BEL,(-1L)},{5L,0x4ECED7C4L,0L,(-4L),0L,0x4ECED7C4L,5L}};
                uint32_t l_1194 = 0x22E2B6EEL;
                int i, j;
                if ((l_1127 && (l_1149 |= (safe_sub_func_uint8_t_u_u(((l_980 = (safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(((l_1144 ^= ((*g_706) == (**g_705))) == 0x5EBCA08BE0F4D277LL), (safe_mod_func_int64_t_s_s((-10L), 0x4C470142EAF7436DLL)))) <= (((l_1147 != l_1148) > l_978) , p_14)), p_14))) , l_984), p_13)))))
                { 
                    int8_t *l_1168[6][3][3] = {{{&g_189,&g_189,&g_229},{&g_229,&g_111,&g_229},{&g_111,&g_189,&g_189}},{{&g_229,&g_44,&g_189},{&g_111,(void*)0,&g_111},{&g_229,&g_230,&g_189}},{{&g_189,&g_189,&g_189},{&l_1108,&g_230,&g_229},{&g_111,&g_189,(void*)0}},{{&g_189,&g_111,&g_189},{&g_189,&g_111,(void*)0},{&g_229,&g_230,&l_1108}},{{&g_229,&g_111,&g_111},{&l_1108,&g_111,&g_111},{&g_229,&g_189,&g_229}},{{&g_229,&g_111,&g_111},{&g_189,&g_189,&g_111},{&g_189,&g_111,&l_1108}}};
                    int32_t l_1169 = (-3L);
                    int32_t *l_1170[4][2] = {{&g_219.f0,&g_219.f0},{&g_219.f0,&g_219.f0},{&g_219.f0,&g_219.f0},{&g_219.f0,&g_219.f0}};
                    int32_t l_1181 = 0L;
                    int i, j, k;
                    l_980 |= ((((*g_249) = ((l_983 & (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((*l_1147) = (safe_mod_func_uint16_t_u_u(((g_44 = (l_1149 = (safe_sub_func_int64_t_s_s((l_1162 , ((p_14 > ((safe_div_func_uint64_t_u_u(l_1162.f0, (safe_add_func_int8_t_s_s(((void*)0 == l_1167), ((p_14 , &g_851) == (void*)0))))) || p_14)) & 0xD0L)), 18446744073709551608UL)))) || l_1169), l_1059[1]))) > p_13), 0UL)), p_14)), 0x1128L)) != p_14), 7))) , (*g_249))) == (void*)0) >= 0x4D04F5C2DD523167LL);
                    l_1171 &= 5L;
                    (*g_250) = &l_983;
                    ++l_1194;
                    (***g_249) ^= p_13;
                }
                else
                { 
                    int64_t l_1199 = (-1L);
                    l_1199 = (safe_lshift_func_uint16_t_u_s(l_1162.f0, 4));
                }
                for (l_1171 = 1; (l_1171 > 7); l_1171 = safe_add_func_uint16_t_u_u(l_1171, 9))
                { 
                    int64_t l_1207 = 6L;
                    int32_t *****l_1213 = &l_1212;
                    int8_t *l_1215 = &g_44;
                    l_1172 ^= (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_uint64_t_u((p_13 || ((void*)0 != &g_249)))) && l_1207) > ((*l_1215) = ((l_1207 >= (safe_mul_func_uint8_t_u_u(255UL, (((*g_519) = (safe_mul_func_int8_t_s_s((((*l_1213) = l_1212) == (void*)0), 1UL))) != l_1059[0])))) != l_1214))), 1)) == 0xF8B18565L) >= p_14), g_614));
                }
                for (g_670 = 15; (g_670 <= (-3)); --g_670)
                { 
                    int32_t l_1219[4][6][5] = {{{0x9011DF13L,0L,0xA163139FL,0x08E2AFDCL,0x08E2AFDCL},{0xB25337ACL,(-1L),0xB25337ACL,0x2ACD72F2L,(-1L)},{0x9011DF13L,0xAFD20156L,0x8D4D1877L,0x08E2AFDCL,(-1L)},{0x087F874EL,(-1L),(-10L),(-1L),(-1L)},{0x8D4D1877L,0L,0x8D4D1877L,(-1L),0x08E2AFDCL},{0x087F874EL,(-2L),0xB25337ACL,(-1L),0x2ACD72F2L}},{{0x9011DF13L,0L,0xA163139FL,0x08E2AFDCL,0x08E2AFDCL},{0xB25337ACL,(-1L),0xB25337ACL,0x2ACD72F2L,(-1L)},{0x9011DF13L,0xAFD20156L,0x8D4D1877L,0x08E2AFDCL,(-1L)},{0x087F874EL,(-1L),(-10L),(-1L),(-1L)},{0x8D4D1877L,0L,0x8D4D1877L,(-1L),0x08E2AFDCL},{0x087F874EL,(-2L),0xB25337ACL,(-1L),0x2ACD72F2L}},{{0x9011DF13L,0L,0xA163139FL,0x08E2AFDCL,0x08E2AFDCL},{0xB25337ACL,(-1L),0xB25337ACL,0x2ACD72F2L,(-1L)},{0x9011DF13L,0xAFD20156L,0x8D4D1877L,0x08E2AFDCL,(-1L)},{0x087F874EL,(-1L),(-10L),(-1L),(-1L)},{0x8D4D1877L,0L,0x8D4D1877L,(-1L),0x08E2AFDCL},{0x087F874EL,(-2L),0xB25337ACL,(-1L),0x2ACD72F2L}},{{0x9011DF13L,0L,0xA163139FL,0x08E2AFDCL,0x08E2AFDCL},{0xB25337ACL,(-1L),0xB25337ACL,0x2ACD72F2L,(-1L)},{0x9011DF13L,0xAFD20156L,0x8D4D1877L,0x08E2AFDCL,(-1L)},{0x087F874EL,(-1L),(-10L),(-1L),(-1L)},{0x8D4D1877L,0L,0x8D4D1877L,(-1L),0x08E2AFDCL},{0x087F874EL,(-2L),0xB25337ACL,(-1L),0x2ACD72F2L}}};
                    int i, j, k;
                    l_1219[0][5][3] &= ((void*)0 != l_1218);
                    if (p_13)
                        break;
                    (***l_1212) = &l_1180[0][4];
                    if (l_1220)
                        continue;
                }
                if (l_1175)
                    break;
                if (p_13)
                    continue;
            }
            else
            { 
                int32_t *l_1221 = (void*)0;
                struct S0 **l_1222 = &g_197;
                int32_t l_1227 = (-4L);
                struct S0 l_1237 = {-9L,-1L,0xF176476AB71BF695LL,0x281BDDF6L,1UL,0xD4L};
                uint8_t l_1278 = 255UL;
                int32_t l_1286 = 0x2FAF9EF1L;
                int32_t l_1292 = (-1L);
                int32_t l_1294[5][6] = {{(-1L),(-1L),0xA0556961L,(-10L),(-10L),0xA0556961L},{0x0216A676L,0x0216A676L,(-7L),1L,(-10L),(-5L)},{(-10L),(-1L),(-6L),1L,(-1L),(-7L)},{0x0216A676L,(-10L),(-6L),(-10L),0x0216A676L,(-5L)},{(-1L),(-10L),(-7L),(-1L),(-1L),0xA0556961L}};
                int i, j;
                (**g_249) = l_1221;
                (*l_1222) = &g_379;
                if ((((safe_mul_func_int16_t_s_s(0x57B6L, (p_14 >= g_186[4][4][2]))) < (p_14 > (7L >= g_233))) >= 0x7978D41FDEFC8DC9LL))
                { 
                    (*g_250) = l_1221;
                    l_1227 ^= (l_1191 , (!((l_1226 != (void*)0) || p_13)));
                    (*g_250) = g_1228;
                    (**g_249) = &l_1227;
                    (***g_249) |= ((safe_div_func_uint64_t_u_u(l_984, ((((+(safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(p_13, (((void*)0 != l_1236) && (p_14 | (((((((l_1237 , (safe_add_func_int64_t_s_s(p_13, 0xD53F549C4021E4C6LL))) <= 9UL) >= p_13) | 0x1455L) <= p_14) || 65535UL) < p_14))))) && (*g_82)), p_13))) < 0x3EAE8A6645CC6396LL) != (*g_1065)) || (-1L)))) <= 0x60ACBD6EL);
                }
                else
                { 
                    int32_t *l_1248 = &l_1220;
                    (*l_1248) ^= ((p_14 , 0UL) & (((((*g_1228) < p_13) , ((*l_1226)++)) <= ((((**l_1212) = l_1246) != l_1246) >= (p_14 <= 4L))) < g_1247[0]));
                    (*l_1248) ^= ((safe_add_func_int64_t_s_s(l_1192, p_14)) != p_13);
                    return (*l_1222);
                }
                for (g_46 = 0; (g_46 > (-29)); g_46--)
                { 
                    int32_t *l_1272[4];
                    uint32_t *l_1281 = &l_1144;
                    int16_t l_1283[1][2][1];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1272[i] = &l_1192;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1283[i][j][k] = 0L;
                        }
                    }
                    l_1172 &= (~(safe_div_func_int16_t_s_s((((*g_767)++) && ((**g_766) = (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((((*l_1167) , ((**g_766) && ((g_187[0] = (-6L)) == (((safe_add_func_uint8_t_u_u(248UL, (****l_1212))) >= (safe_mul_func_int16_t_s_s(1L, (((safe_lshift_func_int16_t_s_s(((((((((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((&g_706 == &g_706), g_753)) && 18446744073709551607UL), (****l_1212))) , (*g_1065)) | p_13) == 5UL) , p_13) && 65535UL) <= p_13) == (****l_1212)), p_14)) > p_14) && g_16.f3)))) , (****l_1212))))) | p_14), p_13)) && 0xC8L), 18446744073709551610UL)))), p_13)));
                    if (l_1273)
                        continue;
                    l_1189[0] ^= (((g_477[0] &= (((safe_add_func_uint16_t_u_u((p_14 >= (****l_1212)), (p_13 , ((safe_div_func_int64_t_s_s(l_1278, (safe_rshift_func_uint16_t_u_u((p_13 != (((*p_12) , (((*l_1281) |= g_753) , g_1282[2])) || p_14)), 0)))) , 0x99A7L)))) | 0UL) , p_14)) == l_1283[0][1][0]) || p_13);
                }
                if ((****l_1212))
                { 
                    (*g_250) = (**g_249);
                }
                else
                { 
                    int32_t *l_1285 = &l_1183;
                    int32_t l_1287 = 5L;
                    int32_t l_1288 = 0x7D8AFCADL;
                    int32_t l_1289 = 0xA3DA8716L;
                    int32_t l_1290 = 0xA554DB98L;
                    int32_t l_1291 = 0x77BC34A2L;
                    int32_t l_1293 = 0x0F1E3BDDL;
                    int32_t l_1296 = 0x17DFD14AL;
                    int32_t l_1297 = 0x269D9D7BL;
                    int32_t l_1298[3][4][5] = {{{0L,0xB329FC74L,0xB329FC74L,0xB329FC74L,0x69DD13AAL},{(-10L),0xB329FC74L,7L,(-1L),0xBEF416B7L},{(-10L),7L,0x69DD13AAL,7L,(-10L)},{0xB329FC74L,0L,0xC27AEA42L,(-1L),0x0CFE3BF6L}},{{0xC27AEA42L,0L,0xB329FC74L,0xB329FC74L,0L},{0x69DD13AAL,7L,(-10L),0L,0x0CFE3BF6L},{7L,0xB329FC74L,(-10L),1L,(-10L)},{0x0CFE3BF6L,0x0CFE3BF6L,0xB329FC74L,0x69DD13AAL,0xBEF416B7L}},{{7L,0xBEF416B7L,0xC27AEA42L,0x69DD13AAL,0x69DD13AAL},{0x69DD13AAL,(-7L),0x69DD13AAL,1L,(-1L)},{0xC27AEA42L,0xBEF416B7L,7L,0L,(-1L)},{0xB329FC74L,0x0CFE3BF6L,0x0CFE3BF6L,0xB329FC74L,0x69DD13AAL}}};
                    uint32_t l_1299 = 1UL;
                    union U1 ***l_1302 = &g_372;
                    int i, j, k;
                    l_1285 = ((l_1284[0] != ((***l_1212) = (*g_250))) , (*g_250));
                    ++l_1299;
                    l_1303[1][0] = l_1302;
                }
            }
            if (p_13)
                continue;
        }
    }
    --l_1305;
    return &g_198;
}



static struct S0 * func_18(const struct S0 * p_19, uint16_t  p_20, uint8_t  p_21)
{ 
    struct S0 *l_966[4];
    int i;
    for (i = 0; i < 4; i++)
        l_966[i] = &g_198;
    return l_966[2];
}



static struct S0 * func_22(union U1  p_23, int32_t  p_24, int32_t  p_25, int32_t  p_26)
{ 
    int32_t l_789 = (-7L);
    uint64_t *l_822 = &g_517;
    uint64_t **l_821 = &l_822;
    uint64_t ***l_820 = &l_821;
    int16_t l_823[6];
    int32_t l_881[5][4][3] = {{{0x55FAF1D5L,0xDBA5ECF3L,0xF699B526L},{1L,(-1L),(-1L)},{0x55FAF1D5L,0x55FAF1D5L,0x3973F69AL},{0x967D6340L,6L,0x2BA59A79L}},{{0xDBA5ECF3L,0x55FAF1D5L,0xDBA5ECF3L},{0x326834F2L,(-1L),(-9L)},{0x3DA49BE2L,0xDBA5ECF3L,0xDBA5ECF3L},{(-9L),1L,0x2BA59A79L}},{{6L,0x3DA49BE2L,0x3973F69AL},{(-9L),0xF223F059L,(-1L)},{0x3DA49BE2L,6L,0xF699B526L},{0x326834F2L,0xF223F059L,0x326834F2L}},{{0xDBA5ECF3L,0x3DA49BE2L,0x55FAF1D5L},{0x967D6340L,1L,0x326834F2L},{0x55FAF1D5L,0xDBA5ECF3L,0xF699B526L},{1L,(-1L),(-1L)}},{{0x55FAF1D5L,0x55FAF1D5L,0x3973F69AL},{0x967D6340L,6L,0x2BA59A79L},{0xDBA5ECF3L,0x55FAF1D5L,0xDBA5ECF3L},{0x326834F2L,(-1L),(-9L)}}};
    struct S0 *l_925 = (void*)0;
    union U1 *****l_952[4][6] = {{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706},{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706},{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706},{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_823[i] = 0xEDC1L;
lbl_928:
    for (g_233 = 8; (g_233 < 19); g_233 = safe_add_func_uint16_t_u_u(g_233, 4))
    { 
        int32_t l_780 = (-9L);
        int32_t *l_781 = &g_231;
        int32_t *l_782 = &g_752;
        int32_t *l_783 = &g_46;
        int32_t *l_784 = (void*)0;
        int32_t l_785 = 0xD5D487B0L;
        int32_t *l_786 = &l_785;
        int32_t *l_787[6];
        struct S0 l_799[5][4] = {{{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL}},{{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL}},{{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL}},{{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL}},{{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL},{0xD2DEL,-1L,18446744073709551615UL,2UL,65528UL,1UL}}};
        int64_t *l_811 = &g_788;
        union U1 *****l_862 = &g_706;
        const int32_t **l_871[6] = {(void*)0,&g_202[0][4],(void*)0,(void*)0,&g_202[0][4],(void*)0};
        const int32_t ***l_870[1][2][2];
        uint8_t l_873 = 249UL;
        struct S0 **l_877 = &g_15[0][2];
        uint32_t l_880 = 0x29CBC0B0L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_787[i] = &g_219.f0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_870[i][j][k] = &l_871[1];
            }
        }
        p_25 ^= (~(!l_780));
        (*g_250) = &p_26;
        --g_790;
        for (g_16.f0 = 0; (g_16.f0 == (-30)); g_16.f0--)
        { 
            int32_t l_800[7][2][4] = {{{0xF27543FCL,1L,0xF27543FCL,0L},{0L,0xA633F55EL,0L,0L}},{{1L,1L,1L,0xA633F55EL},{0xA633F55EL,0L,1L,0L}},{{1L,0xF27543FCL,0L,1L},{0L,0xF27543FCL,0xF27543FCL,0L}},{{0xA633F55EL,0xF27543FCL,0xFBA00898L,0L},{0xA633F55EL,0xFBA00898L,0xA633F55EL,1L}},{{0xF27543FCL,0L,1L,1L},{0xFBA00898L,0xFBA00898L,1L,0L}},{{0L,0xF27543FCL,1L,0xF27543FCL},{0xFBA00898L,0xA633F55EL,1L,1L}},{{0xF27543FCL,0xA633F55EL,0xA633F55EL,0xF27543FCL},{0xA633F55EL,0xF27543FCL,0xFBA00898L,0L}}};
            struct S0 l_920 = {0xCAB8L,1L,18446744073709551610UL,0x7F3CAE3EL,0xFAE5L,0x7DL};
            int i, j, k;
        }
    }
    (*g_377) = (*g_376);
    for (g_182 = (-1); (g_182 != 47); g_182++)
    { 
        const int8_t l_945 = (-1L);
        uint64_t **l_949 = &l_822;
        if (p_25)
            break;
        for (g_189 = 0; (g_189 <= (-22)); g_189 = safe_sub_func_uint8_t_u_u(g_189, 9))
        { 
            return l_925;
        }
        for (g_517 = 18; (g_517 > 27); g_517++)
        { 
            int64_t *l_955 = (void*)0;
            int64_t **l_954[1];
            int64_t ***l_953 = &l_954[0];
            int8_t l_957[4][2];
            int i, j;
            for (i = 0; i < 1; i++)
                l_954[i] = &l_955;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_957[i][j] = 0xCEL;
            }
            if (g_16.f0)
                goto lbl_928;
            for (g_16.f0 = 28; (g_16.f0 < 16); g_16.f0--)
            { 
                uint32_t l_931 = 0xE5E8D4F3L;
                uint64_t l_956[1][7][1] = {{{18446744073709551613UL},{18446744073709551614UL},{18446744073709551613UL},{18446744073709551614UL},{18446744073709551613UL},{18446744073709551614UL},{18446744073709551613UL}}};
                int i, j, k;
                if (l_931)
                { 
                    int64_t *l_932 = &g_219.f1;
                    int32_t *l_933 = (void*)0;
                    int32_t *l_934 = &g_231;
                    (*l_934) ^= (p_24 ^ ((*l_932) = p_25));
                }
                else
                { 
                    int16_t *l_958 = &g_198.f0;
                    int32_t *l_959[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_959[i][j] = &g_752;
                    }
                    p_23.f0 = (safe_add_func_int32_t_s_s(((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_958) ^= (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(l_945, ((~p_23.f0) <= (((safe_div_func_uint16_t_u_u((((l_949 != (void*)0) ^ ((((*g_519) = (safe_lshift_func_int16_t_s_s((((void*)0 != l_952[0][4]) <= ((void*)0 == l_953)), p_23.f0))) < p_25) <= l_956[0][5][0])) ^ l_823[3]), 65530UL)) < l_957[1][0]) , 18446744073709551615UL)))), p_24))) && p_25) != l_931), 3)), (*g_767))) > p_23.f0), l_945));
                    p_25 |= (safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s((-9L), (safe_rshift_func_int16_t_s_u((p_24 , l_789), ((p_24 , p_23.f0) | p_26))))), p_24));
                    (**g_249) = &p_26;
                    if (p_24)
                        break;
                }
            }
            if (p_24)
                break;
        }
    }
    return &g_198;
}



static uint64_t  func_31(int64_t  p_32, struct S0 * p_33)
{ 
    int32_t *l_353[1][3];
    union U1 **l_375[4] = {&g_373,&g_373,&g_373,&g_373};
    union U1 ***l_374[2][1];
    struct S0 *l_378 = &g_379;
    uint64_t *l_384 = &g_60;
    struct S0 **l_387 = (void*)0;
    int32_t ***l_412[5];
    int32_t l_434[3][5] = {{0x82DB21E7L,0xBFAA1F7AL,0x4CA13E25L,0x4CA13E25L,0xBFAA1F7AL},{8L,0xB40735C3L,0x4CA13E25L,1L,1L},{0xB40735C3L,8L,0xB40735C3L,0x4CA13E25L,1L}};
    uint16_t l_461[4] = {0xBD02L,0xBD02L,0xBD02L,0xBD02L};
    int32_t l_573 = 3L;
    int16_t l_665 = 0x78EBL;
    int64_t *l_681 = (void*)0;
    int64_t **l_680 = &l_681;
    int64_t ***l_679 = &l_680;
    uint64_t **l_765[5] = {&l_384,&l_384,&l_384,&l_384,&l_384};
    uint64_t * const **l_768 = (void*)0;
    uint64_t * const **l_769[4][1] = {{&g_766},{&g_766},{&g_766},{&g_766}};
    uint64_t l_774 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_353[i][j] = &g_231;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_374[i][j] = &l_375[1];
    }
    for (i = 0; i < 5; i++)
        l_412[i] = &g_250;
    for (g_44 = (-17); (g_44 == (-7)); ++g_44)
    { 
        uint8_t l_349 = 0x1CL;
        int32_t l_352[2];
        int32_t l_367 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_352[i] = 0x1E8C21D9L;
        ++l_349;
        l_352[0] = 0xE3EA39F0L;
        l_353[0][2] = ((**g_249) = &l_352[0]);
        for (g_16.f1 = 0; (g_16.f1 > 21); ++g_16.f1)
        { 
            int32_t *l_356 = &g_219.f0;
            int8_t *l_366 = &g_230;
            (*g_250) = l_356;
            l_367 |= (((*l_366) = (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_32, (safe_rshift_func_uint8_t_u_s(0xD9L, g_44)))), ((!(*l_356)) , (0x9364L >= ((l_352[0] < 0xB1L) || 4294967291UL))))) && p_32) ^ 0x4941D301FC7AE0A9LL) && g_244), (***g_249)))) , 1L);
        }
    }
    l_378 = func_40((!((+5L) & (safe_div_func_int16_t_s_s((g_372 == (g_377 = (g_376 = &g_373))), p_32)))));
    return (**g_766);
}



static uint16_t  func_35(const uint64_t  p_36, struct S0 * p_37, uint32_t  p_38, struct S0 * p_39)
{ 
    uint8_t l_199 = 255UL;
    uint64_t *l_200 = &g_60;
    int32_t l_232 = 0x90EE7B76L;
    int32_t l_237 = 4L;
    int32_t l_238 = 0x639B7998L;
    int32_t l_239[5];
    union U1 l_248 = {0xAF00FA5DL};
    int8_t *l_339 = &g_111;
    int8_t *l_344[2];
    int32_t *l_345 = &g_46;
    int i;
    for (i = 0; i < 5; i++)
        l_239[i] = 4L;
    for (i = 0; i < 2; i++)
        l_344[i] = &g_189;
    if ((p_38 & ((*l_200) ^= l_199)))
    { 
        const int32_t *l_201[6] = {&g_46,&g_46,&g_46,&g_46,&g_46,&g_46};
        int i;
        g_202[2][1] = l_201[4];
    }
    else
    { 
        struct S0 l_213 = {0xB1AFL,-8L,0x6F7500B1CAC37E68LL,0xC69D37B5L,1UL,1UL};
        int32_t *l_215 = &g_46;
        int32_t *l_228[3][4];
        int32_t ***l_266 = &g_250;
        uint16_t *l_270 = &g_93;
        int16_t *l_285 = (void*)0;
        const union U1 *l_286[5];
        uint32_t *l_306 = &g_116;
        int8_t *l_313 = &g_44;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_228[i][j] = &g_46;
        }
        for (i = 0; i < 5; i++)
            l_286[i] = &g_219;
        for (g_116 = 0; (g_116 == 55); ++g_116)
        { 
            uint16_t l_217 = 65535UL;
            int32_t *l_227 = &g_219.f0;
            for (l_199 = 0; (l_199 == 26); l_199 = safe_add_func_uint32_t_u_u(l_199, 5))
            { 
                int16_t **l_210 = (void*)0;
                int16_t *l_212 = &g_16.f0;
                int16_t **l_211 = &l_212;
                int32_t l_214[1];
                union U1 *l_218 = &g_219;
                union U1 **l_220 = &l_218;
                int i;
                for (i = 0; i < 1; i++)
                    l_214[i] = 0x15DCD2A4L;
                if ((((safe_rshift_func_uint8_t_u_u((((g_187[1] || ((*g_82) = 253UL)) != ((((!p_38) && 8UL) < ((((*l_211) = (void*)0) == &g_91[1][0]) , (l_213 , l_214[0]))) ^ g_198.f5)) < (-8L)), 4)) | l_214[0]) > 0x5237L))
                { 
                    int32_t **l_216 = &g_121;
                    (*l_216) = l_215;
                }
                else
                { 
                    if (p_36)
                        break;
                    if (l_217)
                        break;
                }
                if (p_38)
                    continue;
                (*l_220) = l_218;
                for (g_182 = 20; (g_182 > 41); g_182 = safe_add_func_int8_t_s_s(g_182, 2))
                { 
                    return g_192;
                }
                for (g_46 = (-14); (g_46 > 2); g_46 = safe_add_func_uint16_t_u_u(g_46, 5))
                { 
                    if (p_38)
                        break;
                    return l_199;
                }
            }
            for (g_16.f1 = 20; (g_16.f1 <= (-22)); g_16.f1--)
            { 
                return g_187[0];
            }
            (*l_215) = l_199;
            (*l_227) = ((*l_215) |= (-1L));
            (*l_215) &= (l_199 , l_199);
        }
        if (g_182)
            goto lbl_272;
        --g_233;
lbl_272:
        for (g_44 = 2; (g_44 >= 0); g_44 -= 1)
        { 
            const int32_t l_236 = 6L;
            int32_t l_240 = (-1L);
            int32_t l_241 = 0x1FF5390BL;
            int32_t l_242 = 0x51025D35L;
            int32_t **l_247 = &g_121;
            if (l_236)
                break;
            g_244++;
            (*l_247) = &g_231;
        }
        for (g_111 = 0; (g_111 >= (-2)); g_111 = safe_sub_func_uint16_t_u_u(g_111, 1))
        { 
            union U1 l_299 = {0x62637144L};
            uint32_t *l_307 = &g_116;
            int32_t l_332 = 0x2A5A679EL;
            int32_t l_333 = 0L;
            int32_t l_334 = 0x355BCBC9L;
            for (g_60 = 0; (g_60 <= 4); g_60 += 1)
            { 
                int64_t l_277 = 0xCBF52318AF58D63BLL;
                int16_t *l_282 = &g_173;
                int32_t l_294 = 0x9C1E0AABL;
                if ((safe_div_func_uint8_t_u_u(l_277, (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*l_282) &= p_38), ((safe_lshift_func_uint8_t_u_s(0xBBL, ((((void*)0 != l_285) <= p_38) <= (l_286[2] == &g_219)))) < p_36))), 0xDFE1L)))))
                { 
                    int32_t *l_287 = &g_219.f0;
                    uint32_t *l_300 = (void*)0;
                    uint32_t *l_301 = &g_116;
                    l_287 = l_287;
                    (*l_215) |= (safe_mul_func_int8_t_s_s((1L ^ ((g_44 != l_277) >= (((safe_mul_func_int16_t_s_s(((((*g_82) ^= ((safe_mul_func_int8_t_s_s(l_294, p_38)) | (safe_add_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(p_38, ((*l_301) = ((((*l_287) ^ g_198.f5) , l_299) , 0xC94B1DE5L)))) < p_36), (-3L))))) < 0x8EL) >= 0x40C9C9E0DB0FBA3ALL), p_38)) , 0x5E6C29E8L) | l_294))), 0xF7L));
                    if (p_38)
                        break;
                }
                else
                { 
                    uint64_t l_302 = 0x7011D92424975000LL;
                    struct S0 **l_305 = &g_15[0][2];
                    int i, j;
                    ++l_302;
                    (*l_305) = g_15[g_60][g_60];
                }
                if (p_36)
                    continue;
                (*l_215) = ((((((l_306 = &p_38) != l_307) >= (safe_add_func_int64_t_s_s((((*g_82) = 255UL) , (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((((l_313 == (void*)0) | (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((3UL || ((--(*g_82)) != ((p_38 , 0xB754613FL) >= g_187[1]))))), l_239[3]))) != g_231))), g_16.f3))), l_239[4]))) ^ p_36) & 0x633CF6F25CD862EALL) == l_294);
                for (g_173 = 0; (g_173 <= 2); g_173 += 1)
                { 
                    int i, j, k;
                    (*l_215) = (g_186[(g_173 + 3)][(g_60 + 1)][g_173] ^ (g_16.f3 > l_299.f0));
                }
            }
            l_334 |= (l_333 = ((+0xB0L) , (safe_sub_func_uint32_t_u_u(g_60, (safe_lshift_func_uint8_t_u_u(((l_332 = ((p_38 | ((((safe_sub_func_int32_t_s_s(((l_299.f0 = 0UL) != (((void*)0 == (*l_266)) == (safe_div_func_int8_t_s_s(0xABL, l_332)))), 0x5BD6D65AL)) , (void*)0) == &l_286[2]) | l_332)) && 1UL)) | (*l_215)), 6))))));
        }
        (**g_249) = (void*)0;
    }
    (*l_345) &= ((safe_rshift_func_int8_t_s_u(((((*g_82) = 0UL) < (g_44 = (g_230 = (((safe_lshift_func_int8_t_s_s(((*l_339) = ((g_219 , &l_239[4]) != (void*)0)), ((safe_mul_func_uint16_t_u_u(8UL, (safe_mul_func_uint16_t_u_u(65526UL, (l_248.f0 | p_36))))) == l_237))) && g_81) > g_187[0])))) && 18446744073709551613UL), p_38)) <= l_248.f0);
    return p_38;
}



static struct S0 * func_40(uint16_t  p_41)
{ 
    int32_t *l_45 = &g_46;
    uint8_t *l_84 = &g_83;
    union U1 l_100 = {6L};
    int32_t *l_120 = &l_100.f0;
    struct S0 *l_159 = &g_16;
    int32_t l_188 = 0xBAE2B492L;
    int32_t l_190 = 1L;
    int32_t l_191 = 0x1069F5C4L;
    if ((g_2 <= (((*l_45) ^= (g_44 = p_41)) != 0L)))
    { 
        struct S0 *l_47 = &g_16;
        const int32_t * const l_48[5][7][1] = {{{&g_46},{&g_2},{&g_46},{&g_2},{&g_46},{&g_46},{&g_46}},{{&g_46},{&g_2},{&g_46},{&g_2},{&g_46},{&g_46},{&g_46}},{{&g_46},{&g_2},{&g_46},{&g_2},{&g_46},{&g_46},{&g_46}},{{&g_46},{&g_2},{&g_46},{&g_2},{&g_46},{&g_46},{&g_46}},{{&g_46},{&g_2},{&g_46},{&g_2},{&g_46},{&g_46},{&g_46}}};
        int32_t **l_49 = &l_45;
        int32_t *l_50 = &g_46;
        int32_t *l_51 = (void*)0;
        int32_t *l_52 = &g_46;
        int32_t *l_53 = &g_46;
        int32_t *l_54 = (void*)0;
        int32_t *l_55 = &g_46;
        int32_t *l_56 = &g_46;
        int32_t *l_57 = &g_46;
        int32_t *l_58 = &g_46;
        int32_t *l_59 = &g_46;
        int i, j, k;
        g_46 |= ((l_47 == (void*)0) & ((l_48[3][0][0] == ((*l_49) = &g_2)) , p_41));
        g_60--;
        for (g_16.f0 = 13; (g_16.f0 <= 24); g_16.f0 = safe_add_func_int64_t_s_s(g_16.f0, 7))
        { 
            (*l_49) = &g_2;
        }
        (*l_52) &= (safe_lshift_func_int8_t_s_u((**l_49), (((safe_sub_func_uint8_t_u_u(((void*)0 == &l_45), ((*l_49) != &g_46))) ^ p_41) || (safe_rshift_func_int8_t_s_s((*l_45), g_44)))));
    }
    else
    { 
        int32_t *l_77 = &g_46;
        uint8_t *l_80 = &g_81;
        int32_t l_92 = 0xA66B3E62L;
        struct S0 *l_96[4][4] = {{&g_16,&g_16,&g_16,&g_16},{&g_16,&g_16,&g_16,&g_16},{&g_16,&g_16,&g_16,&g_16},{&g_16,&g_16,&g_16,&g_16}};
        int64_t l_108 = 0x354AF31781FA89BFLL;
        int32_t *l_177 = &l_100.f0;
        int32_t *l_178 = &l_100.f0;
        int32_t *l_179 = &l_92;
        int32_t *l_180 = &l_100.f0;
        int32_t *l_181 = &l_100.f0;
        int32_t *l_185[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_185[i] = &g_46;
        for (g_16.f1 = 0; (g_16.f1 > 20); g_16.f1 = safe_add_func_int64_t_s_s(g_16.f1, 7))
        { 
            int32_t **l_73 = (void*)0;
            int32_t **l_74 = (void*)0;
            const int32_t *l_76[1];
            const int32_t **l_75[1];
            int i;
            for (i = 0; i < 1; i++)
                l_76[i] = &g_2;
            for (i = 0; i < 1; i++)
                l_75[i] = &l_76[0];
            l_77 = (void*)0;
        }
        if ((g_44 , (safe_lshift_func_uint8_t_u_s(p_41, (((*l_80) = 0xC3L) >= ((((0xF5D9L != g_60) , g_82) != l_84) || p_41))))))
        { 
            uint8_t l_130 = 0xA3L;
            int32_t l_147[5][2] = {{(-1L),(-3L)},{(-1L),(-1L)},{(-3L),(-1L)},{(-1L),(-3L)},{(-1L),(-1L)}};
            int32_t **l_156 = &l_45;
            int i, j;
            l_77 = &g_2;
            for (g_16.f1 = 0; (g_16.f1 >= 6); ++g_16.f1)
            { 
                int64_t l_90[5] = {0x0551B70F82EDDAADLL,0x0551B70F82EDDAADLL,0x0551B70F82EDDAADLL,0x0551B70F82EDDAADLL,0x0551B70F82EDDAADLL};
                int i;
                if (p_41)
                    break;
                for (g_83 = 29; (g_83 == 1); g_83 = safe_sub_func_uint16_t_u_u(g_83, 3))
                { 
                    int32_t *l_89[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_89[i] = &g_46;
                    ++g_93;
                    return l_96[0][1];
                }
            }
            for (g_81 = 0; (g_81 > 33); g_81 = safe_add_func_uint8_t_u_u(g_81, 8))
            { 
                uint16_t *l_99 = &g_93;
                int8_t *l_109 = &g_44;
                int8_t *l_110 = &g_111;
                int32_t **l_119[2];
                uint32_t l_122 = 18446744073709551610UL;
                int8_t l_131 = 6L;
                struct S0 *l_158 = &g_16;
                int i;
                for (i = 0; i < 2; i++)
                    l_119[i] = &l_77;
            }
            return l_159;
        }
        else
        { 
            union U1 l_162 = {0x2282D308L};
            int64_t *l_172[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_172[i][j] = &l_108;
            }
            if ((safe_rshift_func_int16_t_s_u((l_162 , (safe_mul_func_uint16_t_u_u(((*l_45) != (((!(l_92 || ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(255UL, ((void*)0 == &g_16))) , (((g_173 |= ((safe_add_func_uint32_t_u_u(g_46, (*l_45))) < g_16.f1)) > l_162.f0) & (*g_82))), 1L)) >= 3L))) | p_41) > p_41)), p_41))), 14)))
            { 
                for (p_41 = 1; (p_41 <= 4); p_41 += 1)
                { 
                    return l_159;
                }
            }
            else
            { 
                struct S0 *l_176 = &g_16;
                l_162.f0 &= p_41;
                for (l_100.f1 = 0; (l_100.f1 != 8); l_100.f1 = safe_add_func_int16_t_s_s(l_100.f1, 1))
                { 
                    return l_176;
                }
            }
        }
        --g_182;
        for (g_116 = 0; g_116 < 7; g_116 += 1)
        {
            for (l_108 = 0; l_108 < 5; l_108 += 1)
            {
                g_15[g_116][l_108] = (void*)0;
            }
        }
        ++g_192;
    }
    for (l_188 = 0; (l_188 <= 1); l_188 += 1)
    { 
        if (g_173)
            break;
        for (g_93 = 0; (g_93 <= 1); g_93 += 1)
        { 
            int32_t **l_196[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_196[i] = (void*)0;
            g_121 = ((!g_91[(g_93 + 3)][l_188]) , &l_188);
        }
    }
    return &g_16;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
    transparent_crc(g_16.f4, "g_16.f4", print_hash_value);
    transparent_crc(g_16.f5, "g_16.f5", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_91[i][j], "g_91[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_186[i][j][k], "g_186[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_187[i], "g_187[i]", print_hash_value);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f1, "g_198.f1", print_hash_value);
    transparent_crc(g_198.f2, "g_198.f2", print_hash_value);
    transparent_crc(g_198.f3, "g_198.f3", print_hash_value);
    transparent_crc(g_198.f4, "g_198.f4", print_hash_value);
    transparent_crc(g_198.f5, "g_198.f5", print_hash_value);
    transparent_crc(g_219.f0, "g_219.f0", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_379.f0, "g_379.f0", print_hash_value);
    transparent_crc(g_379.f1, "g_379.f1", print_hash_value);
    transparent_crc(g_379.f2, "g_379.f2", print_hash_value);
    transparent_crc(g_379.f3, "g_379.f3", print_hash_value);
    transparent_crc(g_379.f4, "g_379.f4", print_hash_value);
    transparent_crc(g_379.f5, "g_379.f5", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_477[i], "g_477[i]", print_hash_value);

    }
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_591[i], "g_591[i]", print_hash_value);

    }
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_671[i], "g_671[i]", print_hash_value);

    }
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1247[i], "g_1247[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1282[i], "g_1282[i]", print_hash_value);

    }
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1309.f0, "g_1309.f0", print_hash_value);
    transparent_crc(g_1309.f1, "g_1309.f1", print_hash_value);
    transparent_crc(g_1309.f2, "g_1309.f2", print_hash_value);
    transparent_crc(g_1309.f3, "g_1309.f3", print_hash_value);
    transparent_crc(g_1309.f4, "g_1309.f4", print_hash_value);
    transparent_crc(g_1309.f5, "g_1309.f5", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1363, "g_1363", print_hash_value);
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1538.f0, "g_1538.f0", print_hash_value);
    transparent_crc(g_1538.f1, "g_1538.f1", print_hash_value);
    transparent_crc(g_1538.f2, "g_1538.f2", print_hash_value);
    transparent_crc(g_1538.f3, "g_1538.f3", print_hash_value);
    transparent_crc(g_1538.f4, "g_1538.f4", print_hash_value);
    transparent_crc(g_1538.f5, "g_1538.f5", print_hash_value);
    transparent_crc(g_1650, "g_1650", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1662[i], "g_1662[i]", print_hash_value);

    }
    transparent_crc(g_2012, "g_2012", print_hash_value);
    transparent_crc(g_2279, "g_2279", print_hash_value);
    transparent_crc(g_2282, "g_2282", print_hash_value);
    transparent_crc(g_2322, "g_2322", print_hash_value);
    transparent_crc(g_2478, "g_2478", print_hash_value);
    transparent_crc(g_2518, "g_2518", print_hash_value);
    transparent_crc(g_2544, "g_2544", print_hash_value);
    transparent_crc(g_2576.f0, "g_2576.f0", print_hash_value);
    transparent_crc(g_2605.f0, "g_2605.f0", print_hash_value);
    transparent_crc(g_2605.f1, "g_2605.f1", print_hash_value);
    transparent_crc(g_2605.f2, "g_2605.f2", print_hash_value);
    transparent_crc(g_2605.f3, "g_2605.f3", print_hash_value);
    transparent_crc(g_2605.f4, "g_2605.f4", print_hash_value);
    transparent_crc(g_2605.f5, "g_2605.f5", print_hash_value);
    transparent_crc(g_2614, "g_2614", print_hash_value);
    transparent_crc(g_2626, "g_2626", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
