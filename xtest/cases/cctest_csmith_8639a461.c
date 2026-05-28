// SPDX-License-Identifier: MIT
// cctest_csmith_8639a461.c --- cctest case csmith_8639a461 (csmith seed 2251924577)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4d67aae3 */
/* @exp_ticks 0x6e95 */

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

// Options:   -s 2251924577 -o /tmp/csmith_gen_gac0ghy0/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int32_t  f0;
   int16_t  f1;
   uint8_t  f2;
   int32_t  f3;
   uint64_t  f4;
   int16_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   int32_t  f1;
   struct S0  f2;
   uint8_t  f3;
   int32_t  f4;
   int8_t  f5;
   const int32_t  f6;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
   int32_t  f1;
   const struct S0  f2;
};


static int16_t g_16[7][1] = {{0x26F3L},{0L},{0L},{0x26F3L},{0L},{0L},{0x26F3L}};
static int64_t g_25[5] = {0L,0L,0L,0L,0L};
static int32_t g_32 = 0x40452383L;
static uint8_t g_62 = 0x22L;
static int32_t g_71[1] = {0x62D42CB0L};
static uint16_t g_74 = 65534UL;
static uint16_t g_92[1] = {4UL};
static uint32_t g_95 = 1UL;
static struct S0 g_104[1][5][2] = {{{{1L,0xEC8AL,0UL,0x942222B0L,0xECF65DDD0FC4F5E6LL,0x9BC8L},{1L,0xEC8AL,0UL,0x942222B0L,0xECF65DDD0FC4F5E6LL,0x9BC8L}},{{1L,0xEC8AL,0UL,0x942222B0L,0xECF65DDD0FC4F5E6LL,0x9BC8L},{-1L,0x53E2L,250UL,-9L,18446744073709551611UL,0x4F13L}},{{-5L,1L,0x84L,-1L,0xBFA85FE053DA9491LL,3L},{6L,0xCFCBL,0x5CL,0xECAF6BF1L,18446744073709551612UL,1L}},{{-1L,0x53E2L,250UL,-9L,18446744073709551611UL,0x4F13L},{6L,0xCFCBL,0x5CL,0xECAF6BF1L,18446744073709551612UL,1L}},{{-5L,1L,0x84L,-1L,0xBFA85FE053DA9491LL,3L},{-1L,0x53E2L,250UL,-9L,18446744073709551611UL,0x4F13L}}}};
static struct S1 g_116 = {18446744073709551615UL,-1L,{5L,0x878EL,251UL,7L,18446744073709551615UL,0x1342L},246UL,-4L,0xC8L,0x06661588L};
static int32_t *g_128 = &g_32;
static int32_t **g_127 = &g_128;
static int32_t ***g_134[3][2] = {{&g_127,&g_127},{&g_127,&g_127},{&g_127,&g_127}};
static struct S0 g_141 = {-1L,-1L,0x5BL,0xE99CEFACL,0xF5FC00A9F045B8B1LL,0L};
static uint32_t g_165 = 0x64E15BF3L;
static uint32_t g_167 = 4294967289UL;
static int32_t ****g_224 = &g_134[2][1];
static struct S0 *g_282 = &g_116.f2;
static struct S0 *g_283 = &g_116.f2;
static struct S1 g_299 = {18446744073709551615UL,-5L,{0x5AC82033L,0x5BD5L,1UL,0xDD253935L,0xA0DE2FF72D38E3FFLL,1L},0x65L,0x094DFB8BL,0L,0xD86F1057L};
static struct S1 g_309 = {0x38B2605AA8DD26E8LL,1L,{0xB346AE8FL,0x79D2L,0x87L,-6L,18446744073709551615UL,0x3C63L},1UL,0x1280F7FEL,0x4EL,0xBAE75223L};
static struct S1 ***g_331 = (void*)0;
static int8_t g_387[2][1][4] = {{{0L,0L,0L,0L}},{{0L,0L,0L,0L}}};
static uint8_t g_421 = 247UL;
static int64_t *g_441 = (void*)0;
static int64_t **g_440 = &g_441;
static const union U2 g_449 = {6L};
static const union U2 *g_448[3][7] = {{&g_449,&g_449,&g_449,&g_449,&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449,&g_449,&g_449,&g_449,&g_449},{&g_449,&g_449,&g_449,&g_449,&g_449,&g_449,&g_449}};
static const union U2 g_452[1] = {{1L}};
static uint32_t g_477 = 7UL;
static uint8_t g_524 = 0xB4L;
static struct S1 g_571 = {5UL,0xFB8AE51BL,{6L,0x946DL,9UL,-2L,18446744073709551614UL,-1L},1UL,0x2382183AL,0x12L,8L};
static const int32_t *g_663 = &g_299.f1;
static uint32_t g_675 = 18446744073709551609UL;
static uint32_t g_698 = 0x0CAC114EL;
static struct S1 g_741 = {9UL,0x6F7D8620L,{0xC6ACC6DEL,0L,0xF3L,0x14D44932L,0x0A2AC256728A3EB0LL,2L},0x67L,0x184D24F8L,0x12L,0xA8BAE74AL};
static struct S1 *g_740[3][7] = {{&g_741,&g_309,&g_116,&g_116,&g_309,&g_741,&g_309},{(void*)0,&g_741,&g_741,(void*)0,&g_309,(void*)0,&g_741},{&g_741,&g_741,&g_741,&g_116,&g_741,&g_741,&g_741}};
static int64_t g_744 = 0xA5E8FF13C5FC9712LL;
static int32_t * const *g_759 = &g_128;
static int32_t * const **g_758 = &g_759;
static int32_t * const ***g_757[3][7][6] = {{{(void*)0,&g_758,&g_758,&g_758,&g_758,(void*)0},{(void*)0,(void*)0,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,(void*)0,&g_758,(void*)0,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,(void*)0,&g_758,(void*)0,&g_758,&g_758},{(void*)0,(void*)0,&g_758,(void*)0,&g_758,&g_758}},{{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{(void*)0,&g_758,&g_758,&g_758,(void*)0,&g_758},{(void*)0,&g_758,&g_758,&g_758,&g_758,(void*)0},{&g_758,(void*)0,&g_758,(void*)0,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,(void*)0,&g_758},{(void*)0,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,(void*)0,&g_758,(void*)0,&g_758}},{{&g_758,&g_758,&g_758,&g_758,&g_758,(void*)0},{(void*)0,&g_758,&g_758,(void*)0,&g_758,&g_758},{&g_758,(void*)0,(void*)0,(void*)0,(void*)0,&g_758},{(void*)0,(void*)0,&g_758,&g_758,&g_758,&g_758},{(void*)0,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,(void*)0},{&g_758,&g_758,&g_758,(void*)0,(void*)0,&g_758}}};
static uint32_t *g_768[3] = {&g_165,&g_165,&g_165};
static uint32_t **g_767[2][6] = {{&g_768[2],&g_768[2],&g_768[2],&g_768[2],&g_768[2],&g_768[2]},{&g_768[2],&g_768[2],&g_768[2],&g_768[2],&g_768[2],&g_768[2]}};
static int16_t *g_780 = &g_741.f2.f5;
static int16_t **g_779 = &g_780;
static const int64_t **g_804 = (void*)0;
static const int64_t ***g_803 = &g_804;
static const int64_t ****g_802[4] = {&g_803,&g_803,&g_803,&g_803};
static uint32_t g_848 = 0xD07CB71FL;
static union U2 g_912 = {-8L};
static union U2 *g_911 = &g_912;
static const uint32_t g_964[5][2] = {{0x76D7F62DL,0x76D7F62DL},{0x76D7F62DL,0x76D7F62DL},{0x76D7F62DL,0x76D7F62DL},{0x76D7F62DL,0x76D7F62DL},{0x76D7F62DL,0x76D7F62DL}};
static uint32_t g_984[7][2] = {{0x477032B1L,18446744073709551608UL},{0x4D3DF6A0L,0x13E71D7AL},{0x9A041CE4L,0x9A041CE4L},{0x13E71D7AL,0x4D3DF6A0L},{18446744073709551608UL,0x4D3DF6A0L},{0x13E71D7AL,0x9A041CE4L},{0x9A041CE4L,0x13E71D7AL}};
static uint64_t *g_1016[3] = {&g_141.f4,&g_141.f4,&g_141.f4};
static uint64_t **g_1015 = &g_1016[2];
static uint16_t g_1093 = 65535UL;
static int32_t g_1096 = 0xCF0FFF43L;
static uint32_t g_1174 = 4294967295UL;
static uint32_t g_1180 = 18446744073709551610UL;
static struct S1 **g_1196[7][7][4] = {{{(void*)0,(void*)0,(void*)0,&g_740[2][4]},{&g_740[0][2],(void*)0,&g_740[2][4],&g_740[2][4]},{&g_740[0][5],&g_740[2][0],&g_740[2][4],(void*)0},{(void*)0,&g_740[0][5],&g_740[2][4],&g_740[0][4]},{&g_740[0][5],&g_740[2][4],&g_740[2][4],&g_740[2][4]},{&g_740[0][2],(void*)0,(void*)0,&g_740[0][6]},{(void*)0,&g_740[0][6],&g_740[2][0],&g_740[1][3]}},{{&g_740[2][4],&g_740[2][0],&g_740[0][5],&g_740[2][4]},{&g_740[0][6],(void*)0,&g_740[0][1],&g_740[0][1]},{&g_740[0][5],&g_740[0][5],&g_740[2][1],&g_740[0][1]},{&g_740[1][3],&g_740[0][5],(void*)0,&g_740[0][6]},{&g_740[2][4],&g_740[2][4],&g_740[2][4],(void*)0},{&g_740[2][4],&g_740[2][4],&g_740[0][5],&g_740[0][6]},{&g_740[2][4],&g_740[0][5],&g_740[1][1],&g_740[0][1]}},{{&g_740[2][4],&g_740[0][5],&g_740[2][4],&g_740[0][1]},{&g_740[0][2],(void*)0,&g_740[2][4],&g_740[2][4]},{&g_740[2][4],&g_740[2][0],&g_740[2][1],&g_740[1][3]},{&g_740[1][3],&g_740[0][6],&g_740[2][4],&g_740[0][6]},{&g_740[2][0],(void*)0,&g_740[0][1],&g_740[2][4]},{&g_740[2][4],&g_740[2][4],&g_740[2][4],&g_740[0][4]},{(void*)0,&g_740[0][5],&g_740[2][4],(void*)0}},{{(void*)0,&g_740[2][0],&g_740[2][4],&g_740[2][4]},{&g_740[2][4],(void*)0,&g_740[0][1],&g_740[2][4]},{&g_740[2][0],(void*)0,&g_740[2][4],&g_740[0][1]},{&g_740[1][3],&g_740[2][4],&g_740[2][1],&g_740[0][4]},{&g_740[2][4],(void*)0,&g_740[2][4],&g_740[2][1]},{&g_740[0][2],&g_740[2][4],&g_740[2][4],&g_740[0][2]},{&g_740[2][4],&g_740[0][6],&g_740[1][1],(void*)0}},{{&g_740[2][4],(void*)0,&g_740[0][5],&g_740[0][1]},{&g_740[2][4],&g_740[1][3],&g_740[2][4],&g_740[0][1]},{&g_740[2][4],(void*)0,(void*)0,(void*)0},{&g_740[1][3],&g_740[0][6],&g_740[2][1],&g_740[0][2]},{&g_740[0][5],&g_740[2][4],&g_740[0][1],&g_740[2][1]},{&g_740[0][6],(void*)0,&g_740[0][5],&g_740[0][4]},{&g_740[2][4],&g_740[2][4],&g_740[2][0],&g_740[0][1]}},{{(void*)0,(void*)0,(void*)0,&g_740[2][4]},{&g_740[0][2],(void*)0,&g_740[2][4],&g_740[2][4]},{&g_740[0][5],&g_740[2][0],&g_740[2][4],(void*)0},{(void*)0,&g_740[0][5],&g_740[2][4],&g_740[0][4]},{&g_740[0][5],&g_740[2][4],&g_740[2][4],&g_740[2][4]},{&g_740[0][2],(void*)0,(void*)0,&g_740[0][6]},{(void*)0,&g_740[0][6],&g_740[2][0],&g_740[1][3]}},{{&g_740[2][4],&g_740[2][0],&g_740[0][5],&g_740[2][4]},{&g_740[0][6],(void*)0,&g_740[2][4],&g_740[2][4]},{&g_740[2][4],&g_740[2][4],&g_740[2][4],&g_740[2][4]},{&g_740[0][1],&g_740[2][4],&g_740[1][1],(void*)0},{&g_740[0][1],&g_740[1][3],(void*)0,&g_740[1][1]},{&g_740[2][4],&g_740[1][3],(void*)0,(void*)0},{&g_740[1][3],&g_740[2][4],&g_740[2][4],&g_740[2][4]}}};
static uint8_t *g_1259 = &g_741.f2.f2;
static uint8_t **g_1258 = &g_1259;
static uint32_t g_1387 = 0xEB7BEE99L;
static union U2 g_1515 = {5L};
static uint32_t g_1522 = 4294967295UL;
static int32_t g_1565 = 0x833549A6L;
static union U2 g_1625 = {4L};



static const struct S1  func_1(void);
static int32_t * func_2(int32_t * p_3, int32_t * p_4);
static int32_t * func_5(const int32_t * p_6);
static int32_t  func_18(int64_t  p_19);
static int32_t  func_29(int64_t * p_30);
static int32_t * const  func_35(uint16_t  p_36, int32_t  p_37, int64_t  p_38);
static const struct S1  func_45(int64_t * p_46, struct S0  p_47, int16_t  p_48, int32_t * p_49, int64_t * p_50);
static struct S0  func_51(uint8_t  p_52, int32_t * p_53);




static const struct S1  func_1(void)
{ 
    const int32_t *l_7 = (void*)0;
    int32_t *l_1287 = &g_912.f1;
    const struct S1 l_1651 = {0xE43DA57DB9CBDF3ELL,-10L,{0xCFC32E49L,0xCF30L,0xF9L,7L,0UL,0L},0x00L,0x27291C68L,0xD7L,0xE0D0CF20L};
    (***g_224) = func_2(func_5(l_7), l_1287);
    return l_1651;
}



static int32_t * func_2(int32_t * p_3, int32_t * p_4)
{ 
    int16_t l_1290 = 0x4BEFL;
    int32_t l_1301 = (-1L);
    int32_t l_1309 = (-1L);
    int32_t l_1310 = 0L;
    int32_t l_1311 = 0x38FF1B91L;
    int32_t l_1312 = 6L;
    int32_t l_1313 = 0xD93A1127L;
    int32_t l_1314 = 0xB2976811L;
    int32_t l_1315 = 2L;
    int32_t l_1316 = 0x91DBF430L;
    int32_t l_1317 = (-8L);
    uint64_t l_1318 = 18446744073709551606UL;
    struct S0 **l_1323 = &g_283;
    struct S1 *l_1330 = &g_116;
    const struct S1 * const l_1331 = &g_741;
    int32_t *****l_1340 = &g_224;
    uint16_t l_1341 = 65533UL;
    uint32_t l_1342 = 0x1D23538BL;
    int8_t *l_1343 = &g_309.f5;
    int64_t l_1374[3];
    uint16_t l_1419 = 6UL;
    int32_t l_1420 = (-8L);
    struct S1 ***l_1431 = &g_1196[3][6][0];
    int32_t l_1448 = (-1L);
    uint8_t ***l_1541 = &g_1258;
    int8_t l_1564 = 0xDCL;
    int64_t ***l_1605 = (void*)0;
    uint32_t *l_1626 = &g_984[1][1];
    int16_t l_1642 = (-2L);
    uint32_t *l_1644[3];
    uint32_t **l_1643 = &l_1644[2];
    int32_t l_1649 = (-2L);
    uint32_t l_1650 = 0x52634F5DL;
    int i;
    for (i = 0; i < 3; i++)
        l_1374[i] = 1L;
    for (i = 0; i < 3; i++)
        l_1644[i] = &g_698;
    for (g_741.f5 = 0; (g_741.f5 != (-16)); g_741.f5 = safe_sub_func_uint8_t_u_u(g_741.f5, 1))
    { 
        int32_t l_1291 = 0xE08DB254L;
        int32_t *l_1292 = &g_299.f2.f3;
        int32_t *l_1293 = &g_71[0];
        int32_t *l_1294 = &g_571.f1;
        int32_t *l_1295 = &g_116.f1;
        int32_t *l_1296 = &g_116.f2.f3;
        int32_t *l_1297 = (void*)0;
        int32_t l_1298 = 0x31A485DAL;
        int32_t *l_1299 = &g_104[0][4][0].f3;
        int32_t *l_1300 = &g_741.f2.f3;
        int32_t *l_1302 = &g_299.f1;
        int32_t *l_1303 = &g_309.f1;
        int32_t *l_1304 = &g_571.f1;
        int32_t *l_1305 = &g_309.f2.f3;
        int32_t *l_1306 = (void*)0;
        int32_t *l_1307 = &g_741.f2.f3;
        int32_t *l_1308[5][4][1] = {{{&g_71[0]},{&g_571.f1},{&g_71[0]},{&g_571.f1}},{{&g_71[0]},{&g_571.f1},{&g_71[0]},{&g_571.f1}},{{&g_71[0]},{&g_571.f1},{&g_71[0]},{&g_571.f1}},{{&g_71[0]},{&g_571.f1},{&g_71[0]},{&g_571.f1}},{{&g_71[0]},{&g_571.f1},{&g_71[0]},{&g_571.f1}}};
        int i, j, k;
        ++l_1318;
    }
lbl_1344:
    (*p_4) ^= (safe_sub_func_int16_t_s_s(((void*)0 != l_1323), (g_104[0][4][0].f1 = ((**g_779) = (safe_mul_func_uint8_t_u_u(l_1311, l_1290))))));
    if ((safe_lshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((l_1330 = l_1330) == l_1331), (safe_div_func_int16_t_s_s(l_1318, 6L)))) , ((*l_1343) ^= (safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(((((safe_add_func_int32_t_s_s(((l_1340 == (void*)0) || l_1341), (-5L))) != l_1312) ^ l_1312) | l_1341), l_1342)), (*g_1259))))), l_1301)))
    { 
        (*l_1323) = (*l_1323);
    }
    else
    { 
        uint32_t l_1347 = 1UL;
        int8_t *l_1349 = &g_116.f5;
        int64_t *l_1350 = &g_912.f0;
        int64_t *l_1351 = &g_25[0];
        uint8_t *** const l_1352 = &g_1258;
        int32_t l_1379 = 4L;
        int32_t l_1381[1];
        int64_t l_1385 = 1L;
        uint8_t l_1400 = 0x2BL;
        uint32_t l_1401[4] = {0xFD93EBAEL,0xFD93EBAEL,0xFD93EBAEL,0xFD93EBAEL};
        int8_t l_1416 = 0xC0L;
        uint32_t l_1443 = 0x36E61711L;
        int32_t l_1449[4] = {0x42855D27L,0x42855D27L,0x42855D27L,0x42855D27L};
        uint8_t l_1460 = 0x50L;
        int32_t ***l_1490 = &g_127;
        int16_t l_1519 = 0x8B92L;
        const int16_t *l_1535 = &g_16[2][0];
        const int16_t **l_1534 = &l_1535;
        const int16_t ** const * const l_1533 = &l_1534;
        int16_t l_1538 = 0xB7CBL;
        int64_t l_1583 = 0x7210FF7114BDFB16LL;
        int64_t l_1606[7][7][1] = {{{(-1L)},{0x984DB7AB7861A5D9LL},{0L},{0xF8FBA7CC196D45E0LL},{(-1L)},{0xF8FBA7CC196D45E0LL},{0L}},{{0x984DB7AB7861A5D9LL},{(-1L)},{0x984DB7AB7861A5D9LL},{0L},{0xF8FBA7CC196D45E0LL},{(-1L)},{0xF8FBA7CC196D45E0LL}},{{0L},{0x984DB7AB7861A5D9LL},{(-1L)},{0x984DB7AB7861A5D9LL},{0L},{0xF8FBA7CC196D45E0LL},{(-1L)}},{{0xF8FBA7CC196D45E0LL},{0L},{0x984DB7AB7861A5D9LL},{(-1L)},{0x984DB7AB7861A5D9LL},{0L},{0xF8FBA7CC196D45E0LL}},{{(-1L)},{0xF8FBA7CC196D45E0LL},{0L},{0x984DB7AB7861A5D9LL},{(-1L)},{0x984DB7AB7861A5D9LL},{0L}},{{0xF8FBA7CC196D45E0LL},{(-1L)},{0xF8FBA7CC196D45E0LL},{0L},{0x984DB7AB7861A5D9LL},{(-1L)},{0x984DB7AB7861A5D9LL}},{{0L},{0xF8FBA7CC196D45E0LL},{(-1L)},{0xF8FBA7CC196D45E0LL},{0L},{0x984DB7AB7861A5D9LL},{(-1L)}}};
        int32_t *****l_1618 = &g_224;
        union U2 *l_1624 = &g_1625;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1381[i] = 0L;
        if (l_1290)
            goto lbl_1344;
        if ((((**g_1015) = (((safe_mod_func_int16_t_s_s((l_1347 , 0L), ((((l_1347 ^ (!((*g_780) = l_1347))) , (l_1349 == (void*)0)) == ((l_1350 = (*g_440)) != l_1351)) && 0x4B9DL))) & 0x6AFA990FL) < 0x3EL)) , 0L))
        { 
            uint8_t ***l_1353 = (void*)0;
            int32_t l_1358 = 6L;
            int64_t **l_1362[3];
            int32_t l_1375 = (-1L);
            uint32_t l_1376[3];
            int32_t l_1382 = (-1L);
            int32_t l_1383 = 0x2CA32899L;
            int32_t l_1384[2];
            struct S0 *l_1396 = &g_299.f2;
            const uint64_t l_1399[4] = {0xCA8FFB9C69FD7B75LL,0xCA8FFB9C69FD7B75LL,0xCA8FFB9C69FD7B75LL,0xCA8FFB9C69FD7B75LL};
            int i;
            for (i = 0; i < 3; i++)
                l_1362[i] = &l_1351;
            for (i = 0; i < 3; i++)
                l_1376[i] = 4294967295UL;
            for (i = 0; i < 2; i++)
                l_1384[i] = 0xEA61D1E8L;
            l_1353 = l_1352;
            for (g_1093 = 27; (g_1093 == 37); g_1093 = safe_add_func_int64_t_s_s(g_1093, 9))
            { 
                int64_t ***l_1361 = &g_440;
                int32_t l_1367[3][6][1] = {{{0L},{0xC1B87AB1L},{0L},{(-3L)},{0L},{0L}},{{(-3L)},{0L},{0xC1B87AB1L},{0L},{(-3L)},{0L}},{{0L},{(-3L)},{0L},{0xC1B87AB1L},{0L},{(-3L)}}};
                int32_t *l_1380[3][3] = {{&g_309.f1,&g_309.f1,&g_309.f1},{(void*)0,(void*)0,(void*)0},{&g_309.f1,&g_309.f1,&g_309.f1}};
                int64_t l_1386 = 0x3C8E70E783E036C1LL;
                int i, j, k;
                (***g_224) = &l_1367[0][2][0];
                (****g_224) ^= (0xA1B7L && 0x939AL);
                for (g_741.f2.f4 = 11; (g_741.f2.f4 != 10); g_741.f2.f4--)
                { 
                    int32_t *l_1370 = &l_1311;
                    int32_t *l_1371 = &g_741.f1;
                    int32_t *l_1372 = &l_1316;
                    int32_t *l_1373[6] = {&g_116.f2.f3,&g_116.f2.f3,&g_116.f2.f3,&g_116.f2.f3,&g_116.f2.f3,&g_116.f2.f3};
                    int i;
                    --l_1376[2];
                }
                --g_1387;
                if ((*g_128))
                    break;
            }
            l_1383 ^= (safe_mul_func_int16_t_s_s((4294967292UL <= l_1385), (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((((l_1379 , l_1396) != ((*l_1323) = &g_104[0][4][0])) | (((**g_1015) = ((((safe_lshift_func_uint16_t_u_u(l_1384[1], 15)) , ((((&l_1331 != (void*)0) && l_1399[2]) , l_1400) > l_1381[0])) , g_71[0]) ^ (**g_779))) == 0x957F6558F963611BLL)) , l_1401[1]) >= l_1381[0]) & 0x40EEL), 0UL)), 0x7A99L))));
            l_1313 &= 0L;
        }
        else
        { 
            int32_t l_1406 = (-1L);
            for (g_299.f3 = 0; (g_299.f3 >= 5); g_299.f3 = safe_add_func_int32_t_s_s(g_299.f3, 3))
            { 
                uint8_t l_1405[5][2][6] = {{{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL},{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL}},{{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL},{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL}},{{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL},{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL}},{{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL},{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL}},{{0x47L,254UL,0xBEL,0x5AL,0xBEL,254UL},{0x47L,248UL,1UL,254UL,1UL,248UL}}};
                int i, j, k;
                l_1406 ^= (+l_1405[0][1][3]);
                return p_3;
            }
        }
        (****l_1340) = &l_1381[0];
        for (g_698 = 0; (g_698 < 54); g_698 = safe_add_func_int64_t_s_s(g_698, 7))
        { 
            int16_t l_1411 = 0xDCA8L;
            int32_t l_1422 = (-1L);
            uint32_t l_1423[4];
            int32_t l_1447 = (-1L);
            uint8_t **l_1461 = (void*)0;
            union U2 l_1489 = {0L};
            int64_t **l_1496[6];
            int32_t l_1518[1];
            int32_t l_1521 = 1L;
            uint32_t *l_1551 = &g_95;
            struct S0 *l_1568[3];
            int8_t *l_1595[5];
            int i;
            for (i = 0; i < 4; i++)
                l_1423[i] = 0xEBD16BEAL;
            for (i = 0; i < 6; i++)
                l_1496[i] = &l_1350;
            for (i = 0; i < 1; i++)
                l_1518[i] = (-7L);
            for (i = 0; i < 3; i++)
                l_1568[i] = &g_104[0][4][0];
            for (i = 0; i < 5; i++)
                l_1595[i] = &g_299.f5;
        }
        for (l_1448 = 3; (l_1448 >= 0); l_1448 -= 1)
        { 
            int32_t **l_1621 = (void*)0;
            int32_t **l_1622 = &g_128;
            union U2 **l_1623 = (void*)0;
            int i;
            (*l_1622) = (*g_759);
            l_1624 = &g_1515;
            if (l_1449[l_1448])
                continue;
        }
    }
    (*p_4) = ((((l_1313 ^ (l_1626 != ((*l_1643) = ((((!((((((safe_add_func_uint32_t_u_u((((**g_1258) <= (&g_1258 != (((((*l_1343) = ((((safe_mul_func_uint16_t_u_u(l_1290, l_1316)) || ((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((((**g_1015)++) != l_1642), 0x610087CCL)), 3)) == g_74), g_299.f2.f1)), g_309.f2.f3)) & 0xF0L)) < l_1310) , g_571.f0)) >= 1L) <= l_1318) , (void*)0))) , l_1642), l_1419)) < l_1341) , (-1L)) > l_1317) || 0x00DAL) && l_1315)) != l_1301) >= (*p_4)) , l_1626)))) ^ (**g_779)) , (*g_780)) < g_104[0][4][0].f4);
    (*p_4) = ((g_741.f2.f4 == (*g_1259)) != (safe_add_func_int16_t_s_s(l_1290, ((((0xC7CC7EF83A10E182LL && (l_1605 != (void*)0)) != (safe_sub_func_uint64_t_u_u(l_1649, l_1312))) | l_1650) < (**g_1258)))));
    return p_4;
}



static int32_t * func_5(const int32_t * p_6)
{ 
    int64_t l_13 = 1L;
    int32_t l_17 = 0xA1A8F1EDL;
    int32_t l_464[3][4] = {{0x94A0AD73L,0L,0x94A0AD73L,(-1L)},{0x94A0AD73L,(-1L),(-1L),0x94A0AD73L},{0x654C7872L,(-1L),0x30E84651L,(-1L)}};
    int64_t l_515 = 0x317B42789E214BF1LL;
    uint16_t *l_539 = &g_74;
    uint32_t *l_540 = &g_95;
    uint32_t *l_552[6][1] = {{(void*)0},{&g_165},{(void*)0},{(void*)0},{&g_165},{(void*)0}};
    struct S1 *l_570 = &g_571;
    struct S1 *l_572 = (void*)0;
    int32_t ****l_578[5];
    int64_t l_583 = 0x2A514633C68E3540LL;
    int32_t *l_661[5][4][4] = {{{&g_71[0],&g_116.f1,&g_32,(void*)0},{&g_71[0],(void*)0,&g_71[0],(void*)0},{(void*)0,(void*)0,(void*)0,&g_32},{(void*)0,&g_32,&l_464[0][1],(void*)0}},{{&g_571.f1,(void*)0,&l_464[0][1],&g_116.f1},{(void*)0,&g_71[0],(void*)0,(void*)0},{(void*)0,&g_71[0],&g_71[0],(void*)0},{&g_71[0],(void*)0,&g_32,&g_571.f1}},{{&g_71[0],(void*)0,&g_299.f1,&g_32},{(void*)0,&g_571.f1,(void*)0,&g_32},{&g_32,(void*)0,&l_464[0][1],&g_571.f1},{(void*)0,(void*)0,&g_309.f2.f3,(void*)0}},{{(void*)0,&g_71[0],(void*)0,(void*)0},{&g_116.f1,&g_71[0],&g_71[0],&g_116.f1},{&g_71[0],(void*)0,&g_71[0],(void*)0},{&g_71[0],&g_32,&g_71[0],&g_32}},{{&g_116.f1,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_309.f2.f3,(void*)0},{(void*)0,&g_116.f1,&l_464[0][1],(void*)0},{&g_32,&g_71[0],(void*)0,&l_464[0][1]}}};
    int32_t l_670 = 0x0DCD1034L;
    union U2 l_684 = {0x44CE2026845BEC43LL};
    int64_t ** const *l_687[6][6][5] = {{{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,&g_440},{(void*)0,&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440}},{{(void*)0,(void*)0,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,&g_440},{(void*)0,(void*)0,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,(void*)0,(void*)0},{&g_440,(void*)0,&g_440,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,(void*)0,&g_440},{&g_440,(void*)0,(void*)0,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,(void*)0,&g_440,&g_440},{(void*)0,&g_440,&g_440,(void*)0,&g_440},{&g_440,&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,&g_440,&g_440},{(void*)0,(void*)0,&g_440,&g_440,&g_440},{(void*)0,(void*)0,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440,(void*)0},{&g_440,(void*)0,&g_440,(void*)0,&g_440},{(void*)0,(void*)0,&g_440,(void*)0,(void*)0}},{{(void*)0,&g_440,&g_440,(void*)0,(void*)0},{&g_440,&g_440,&g_440,&g_440,&g_440},{&g_440,&g_440,&g_440,&g_440,(void*)0},{(void*)0,&g_440,&g_440,(void*)0,(void*)0},{(void*)0,&g_440,(void*)0,(void*)0,&g_440},{(void*)0,&g_440,(void*)0,&g_440,(void*)0}},{{&g_440,&g_440,(void*)0,&g_440,&g_440},{&g_440,&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440,&g_440},{(void*)0,&g_440,&g_440,&g_440,&g_440}}};
    int64_t l_689 = 0x915D91C0A5B9D50ELL;
    int32_t l_707 = 0L;
    int32_t *l_753 = &g_116.f1;
    uint8_t l_766 = 0x56L;
    int8_t * const l_845 = &g_299.f5;
    int32_t *l_934 = (void*)0;
    int32_t l_965 = 1L;
    uint8_t l_1010 = 255UL;
    uint32_t l_1038 = 0x9CB3F723L;
    int32_t *l_1054 = &g_309.f2.f3;
    int64_t ***l_1113 = (void*)0;
    int64_t ***l_1115 = (void*)0;
    int16_t l_1119[3];
    int32_t l_1122 = 0xF5F6E304L;
    struct S1 *l_1157 = (void*)0;
    uint16_t l_1197[3][2][1] = {{{0x583FL},{0x39E2L}},{{0x583FL},{0x39E2L}},{{0x583FL},{0x39E2L}}};
    int32_t *****l_1237 = &g_224;
    int32_t *****l_1239 = &l_578[3];
    uint32_t l_1281[6] = {0UL,0UL,4UL,0UL,0UL,4UL};
    int32_t *l_1285[3][6] = {{&g_741.f2.f3,&g_299.f2.f3,&g_571.f1,&g_299.f2.f3,&g_299.f2.f3,&g_571.f1},{&g_741.f2.f3,&g_741.f2.f3,&g_299.f2.f3,&g_116.f1,&g_741.f2.f3,&g_116.f1},{&g_299.f2.f3,&g_741.f2.f3,&g_299.f2.f3,&g_571.f1,&g_299.f2.f3,&g_299.f2.f3}};
    int32_t *l_1286[3][3] = {{&g_141.f3,&g_141.f3,&g_71[0]},{&g_141.f3,&g_141.f3,&g_71[0]},{&g_141.f3,&g_141.f3,&g_71[0]}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_578[i] = &g_134[2][0];
    for (i = 0; i < 3; i++)
        l_1119[i] = 5L;
    if ((0L && 0x6B6CL))
    { 
        uint32_t l_12 = 9UL;
        int64_t *l_24[1][4][2];
        int32_t l_26 = 0x83644BB3L;
        int8_t *l_463 = (void*)0;
        int32_t *l_465 = &g_309.f2.f3;
        int32_t l_496 = 0xD7DE9C82L;
        int32_t l_521 = 0x94C2EF0DL;
        int32_t l_522 = 0x2E793605L;
        const uint16_t *l_538[6][2] = {{&g_92[0],&g_92[0]},{&g_92[0],&g_92[0]},{&g_92[0],&g_92[0]},{&g_92[0],&g_92[0]},{&g_92[0],&g_92[0]},{&g_92[0],&g_92[0]}};
        union U2 l_553 = {-1L};
        struct S0 l_573 = {1L,0xBC1AL,0x0FL,0x44478E86L,18446744073709551615UL,0x117AL};
        struct S1 l_586 = {1UL,0x2469AD85L,{1L,0xFCC1L,0xD8L,0xEBBF51CEL,0xB50FD74C4A216101LL,1L},1UL,0L,0x22L,0x63D1DC20L};
        uint32_t l_648 = 0UL;
        int16_t l_669 = 0xD144L;
        int32_t l_671 = 1L;
        int32_t l_672 = 0L;
        int32_t l_673 = 9L;
        int32_t l_674[4][6][1] = {{{(-1L)},{0xB31CB421L},{(-6L)},{0xF8F7D44DL},{0xB0B237A4L},{0xB0B237A4L}},{{0xF8F7D44DL},{(-6L)},{0xB31CB421L},{(-1L)},{(-2L)},{(-1L)}},{{0xB31CB421L},{(-6L)},{0xF8F7D44DL},{0xB0B237A4L},{0xB0B237A4L},{0xF8F7D44DL}},{{(-6L)},{0xB31CB421L},{(-1L)},{(-2L)},{(-1L)},{0xB31CB421L}}};
        int16_t l_749 = (-5L);
        uint32_t l_771 = 0x212DA409L;
        uint64_t l_801 = 0x205AA1B9523B840BLL;
        union U2 *l_915 = (void*)0;
        int32_t l_988 = 0xCAC7B633L;
        int64_t ***l_993[5][4][4] = {{{(void*)0,&g_440,&g_440,&g_440},{&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,&g_440},{&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,&g_440},{&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,&g_440},{&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440}},{{(void*)0,&g_440,&g_440,&g_440},{&g_440,(void*)0,(void*)0,&g_440},{&g_440,&g_440,&g_440,&g_440},{&g_440,(void*)0,&g_440,&g_440}}};
        const int32_t **l_994 = &g_663;
        uint8_t *l_1000 = &l_586.f2.f2;
        uint8_t **l_999 = &l_1000;
        uint32_t ***l_1003 = &g_767[1][0];
        uint32_t l_1037 = 0xED530C93L;
        uint8_t l_1039[6] = {0x50L,0x50L,0x50L,0x50L,0x50L,0x50L};
        struct S1 ** const *l_1052 = (void*)0;
        struct S1 ** const **l_1051 = &l_1052;
        int8_t l_1053[3][7][1] = {{{4L},{4L},{4L},{0xB8L},{4L},{4L},{4L}},{{0xB8L},{4L},{4L},{4L},{0xB8L},{4L},{4L}},{{4L},{0xB8L},{4L},{4L},{4L},{0xB8L},{4L}}};
        uint64_t l_1091 = 0xA61A9F2BB5326C8FLL;
        int32_t l_1109 = 0x1954B952L;
        uint16_t l_1117 = 0xD083L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 2; k++)
                    l_24[i][j][k] = &g_25[0];
            }
        }
        if ((safe_div_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((l_13 ^= l_12), (safe_sub_func_int16_t_s_s(g_16[2][0], (l_12 >= ((*l_465) ^= ((g_16[0][0] || l_17) ^ (l_464[0][0] = (((func_18((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s((l_26 = 1L), (safe_sub_func_uint32_t_u_u(((((g_16[2][0] , l_12) == g_16[5][0]) < l_12) <= 0UL), g_16[2][0])))) | l_17), 1L))) < l_12) ^ 0x0F69L) > l_17))))))))) <= g_16[2][0]), g_141.f5)))
        { 
            uint8_t l_468 = 0xDCL;
            int32_t *l_469[2][2] = {{&g_299.f2.f3,&g_299.f2.f3},{&g_299.f2.f3,&g_299.f2.f3}};
            int64_t *l_527 = &g_25[3];
            uint32_t l_543 = 0xE10FCA60L;
            struct S1 *l_568 = (void*)0;
            struct S1 **l_569[1];
            uint8_t l_632 = 4UL;
            const int32_t *l_692[4][6] = {{(void*)0,&g_116.f1,&g_116.f1,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_116.f1,&g_116.f1,(void*)0},{(void*)0,(void*)0,&g_116.f1,&g_309.f2.f0,&g_116.f1,(void*)0},{&g_116.f1,(void*)0,&g_309.f2.f0,&g_309.f2.f0,(void*)0,&g_116.f1}};
            struct S0 l_709 = {0L,8L,0x6BL,-1L,0xBC1F8EF14992F022LL,-10L};
            uint32_t l_738[2][7][7] = {{{0x066683CEL,1UL,4294967295UL,0x2AD5581EL,0x82850BAEL,0x066683CEL,0x85AFE2A0L},{0x0C2418DDL,0xB11FB0B7L,5UL,0x2AD5581EL,1UL,0x0C2418DDL,0x181C3ECEL},{0UL,0xB11FB0B7L,4294967295UL,4294967295UL,0xB11FB0B7L,0UL,0x181C3ECEL},{0x0C2418DDL,1UL,0x2AD5581EL,5UL,0xB11FB0B7L,0x0C2418DDL,0x85AFE2A0L},{0x066683CEL,0x82850BAEL,0x2AD5581EL,4294967295UL,1UL,0x066683CEL,0x649E704BL},{0x066683CEL,1UL,4294967295UL,0x2AD5581EL,0x82850BAEL,0x066683CEL,0x85AFE2A0L},{0x0C2418DDL,0xB11FB0B7L,5UL,0x2AD5581EL,1UL,0x0C2418DDL,0x181C3ECEL}},{{0UL,0xB11FB0B7L,4294967295UL,4294967295UL,0xB11FB0B7L,0UL,0x181C3ECEL},{0x0C2418DDL,1UL,0x2AD5581EL,5UL,0xB11FB0B7L,0x0C2418DDL,0x85AFE2A0L},{0x066683CEL,0x82850BAEL,0x2AD5581EL,4294967295UL,1UL,0x066683CEL,0x649E704BL},{0x066683CEL,1UL,4294967295UL,0x2AD5581EL,0x82850BAEL,0x066683CEL,0x85AFE2A0L},{0x0C2418DDL,0xB11FB0B7L,0x837D83D0L,0xA90D5AD7L,5UL,0x44D452E2L,4294967289UL},{0xECC06465L,4294967295UL,0x181C3ECEL,0x181C3ECEL,4294967295UL,0xECC06465L,4294967289UL},{0x44D452E2L,5UL,0xA90D5AD7L,0x837D83D0L,4294967295UL,0x44D452E2L,0x536F3652L}}};
            int64_t ***l_765 = &g_440;
            int32_t l_770 = (-1L);
            int32_t l_855 = 0x02B6B455L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_569[i] = &l_568;
lbl_475:
            l_464[0][0] ^= ((*l_465) = (g_309.f5 >= (safe_mod_func_int8_t_s_s(l_13, l_468))));
            for (g_309.f2.f4 = (-21); (g_309.f2.f4 < 21); g_309.f2.f4++)
            { 
                uint16_t l_472[5][4] = {{0xBF19L,0xBF19L,0x2CB0L,0x4A54L},{0x6634L,0UL,0x6634L,0x2CB0L},{0x6634L,0x2CB0L,0x2CB0L,0x6634L},{0xBF19L,0x2CB0L,0x4A54L,0x2CB0L},{0x2CB0L,0UL,0x4A54L,0x4A54L}};
                uint8_t *l_484 = &g_104[0][4][0].f2;
                struct S0 **l_491 = &g_282;
                int32_t l_513 = (-1L);
                int32_t l_514 = (-1L);
                int32_t l_517 = (-10L);
                int32_t l_520 = (-1L);
                int32_t l_523[1];
                const uint32_t l_535[7][5][3] = {{{0x44F14306L,18446744073709551609UL,0x591D86EBL},{0x0616FCCFL,18446744073709551615UL,6UL},{18446744073709551606UL,4UL,6UL},{18446744073709551615UL,0x591D86EBL,0x591D86EBL},{0xB6B0A307L,0xC3113554L,18446744073709551615UL}},{{18446744073709551615UL,6UL,0xB6B0A307L},{0UL,0xC070095CL,0x54E1A0FCL},{0x34D23D44L,0x7777A1AFL,18446744073709551615UL},{18446744073709551615UL,0xC070095CL,4UL},{18446744073709551615UL,6UL,1UL}},{{6UL,0xC3113554L,0x0616FCCFL},{18446744073709551609UL,0x591D86EBL,18446744073709551615UL},{0x591D86EBL,4UL,0x7777A1AFL},{0x591D86EBL,18446744073709551615UL,6UL},{18446744073709551609UL,18446744073709551609UL,0x34D23D44L}},{{6UL,18446744073709551606UL,18446744073709551615UL},{18446744073709551615UL,0xD307F274L,0x29439DBCL},{18446744073709551615UL,0x29439DBCL,18446744073709551607UL},{0x34D23D44L,18446744073709551615UL,0x29439DBCL},{0UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,6UL,0x34D23D44L},{0xB6B0A307L,18446744073709551615UL,6UL},{18446744073709551615UL,1UL,0x7777A1AFL},{18446744073709551606UL,1UL,18446744073709551615UL},{0x0616FCCFL,18446744073709551615UL,0x0616FCCFL}},{{0x44F14306L,6UL,1UL},{0x7F83074DL,18446744073709551615UL,4UL},{0xC3113554L,18446744073709551615UL,18446744073709551615UL},{1UL,0x29439DBCL,0x54E1A0FCL},{0xC3113554L,0xD307F274L,0xB6B0A307L}},{{0x7F83074DL,18446744073709551606UL,18446744073709551615UL},{0x44F14306L,18446744073709551609UL,0x591D86EBL},{0x0616FCCFL,18446744073709551615UL,6UL},{18446744073709551606UL,4UL,6UL},{18446744073709551615UL,0x591D86EBL,0x591D86EBL}}};
                uint64_t *l_548 = (void*)0;
                uint64_t *l_549 = &g_116.f2.f4;
                uint32_t *l_551 = &g_167;
                uint32_t **l_550[5] = {&l_551,&l_551,&l_551,&l_551,&l_551};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_523[i] = 0x982813F4L;
                --l_472[4][3];
                for (g_309.f2.f1 = 3; (g_309.f2.f1 >= 0); g_309.f2.f1 -= 1)
                { 
                    int32_t l_476 = 0xF9BE18ACL;
                    int i, j;
                    (*l_465) = l_472[(g_309.f2.f1 + 1)][g_309.f2.f1];
                    (*l_465) = 0xD4B1B52AL;
                    if (g_299.f4)
                        goto lbl_475;
                    g_477--;
                }
                for (g_95 = 0; (g_95 <= 13); g_95 = safe_add_func_uint32_t_u_u(g_95, 1))
                { 
                    uint8_t l_487 = 8UL;
                    l_464[0][0] ^= (((*l_465) == l_472[4][3]) == (((safe_sub_func_uint8_t_u_u(((void*)0 != l_484), 1UL)) >= (safe_add_func_int32_t_s_s(l_487, (-4L)))) == 0UL));
                    p_6 = p_6;
                    l_464[2][2] = (*l_465);
                }
                for (g_299.f2.f2 = 26; (g_299.f2.f2 <= 41); g_299.f2.f2 = safe_add_func_int32_t_s_s(g_299.f2.f2, 2))
                { 
                    uint32_t l_490 = 4294967295UL;
                    const union U2 **l_497 = &g_448[0][6];
                    int32_t l_516 = 1L;
                    int32_t l_518 = 0xD94D2A76L;
                    int32_t l_519[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_519[i] = 0L;
                    (*l_497) = ((((&l_13 == ((*g_440) = l_24[0][2][1])) , ((l_490 <= ((void*)0 != l_491)) != (safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((-3L), g_449.f0)), l_496)))) == g_309.f2.f5) , &g_449);
                    (*l_465) = (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((+((l_472[4][3] > l_490) || (g_421 < (g_299.f0 == l_17)))), (safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(g_62, 0xAC2BL)) , l_472[4][0]) & (*l_465)), g_421)))) < 0UL), 0x1BL)), l_464[0][0])), 6));
                    g_524++;
                    if (g_141.f3)
                        goto lbl_475;
                    l_518 &= ((((&p_6 != &p_6) | l_516) > ((func_45(l_527, (*g_282), (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((*l_539) = ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(l_535[5][1][1])), (safe_sub_func_int32_t_s_s((l_538[4][0] != l_539), l_520)))) < g_299.f2.f5)), 0x206EL)) | g_104[0][4][0].f0), l_517)), &l_464[1][1], (*g_440)) , g_299.f2.f0) != 0L)) < g_309.f2.f1);
                }
                (*g_127) = &l_514;
            }
            if ((l_553 , (l_538[4][0] != (((safe_div_func_uint64_t_u_u(((*l_465) <= ((safe_rshift_func_int16_t_s_s(((g_571.f5 = (safe_mul_func_int16_t_s_s((((g_92[0] &= (((*l_465) >= (safe_sub_func_uint8_t_u_u(g_104[0][4][0].f2, (safe_div_func_int16_t_s_s(g_299.f5, (((safe_div_func_uint16_t_u_u((((((safe_add_func_int32_t_s_s((((l_570 = l_568) == l_572) | g_32), l_464[0][0])) > 0x165A7372L) ^ l_515) >= 0xE9L) , l_464[2][3]), 0xAF7EL)) < 0x110F0023L) , 0xA2F9L)))))) ^ 3UL)) & l_464[1][2]) ^ 0x31F4E0FDL), 65526UL))) , g_116.f2.f5), g_571.f3)) <= g_299.f5)), g_299.f2.f2)) | 1L) , l_538[4][0]))))
            { 
                struct S0 l_574 = {-1L,0x2722L,0xB1L,1L,0UL,4L};
                const int32_t **l_577 = (void*)0;
                const int32_t ***l_576 = &l_577;
                const int32_t *** const *l_575 = &l_576;
                int64_t *l_588[7][5] = {{&g_25[0],&l_13,&l_553.f0,&l_13,&g_25[0]},{&g_25[2],&l_515,&l_515,&l_515,&l_515},{&g_25[2],&l_13,&g_25[2],&g_25[0],&g_25[2]},{&g_25[2],&l_515,&l_515,&l_515,&l_515},{&g_25[0],&g_25[0],&l_553.f0,&g_25[0],&g_25[0]},{&l_515,&l_515,&l_515,&l_515,&g_25[2]},{&g_25[2],&g_25[0],&g_25[2],&l_13,&g_25[2]}};
                struct S1 *l_610 = &g_116;
                uint16_t *l_611 = (void*)0;
                uint64_t l_612 = 5UL;
                int32_t l_633 = 3L;
                int32_t *l_662 = &l_496;
                int i, j;
                if ((((func_45(l_24[0][3][0], (g_165 , l_573), ((l_574 , 0xEF918160L) > (*l_465)), l_469[1][1], (*g_440)) , l_575) == l_578[3]) >= (*l_465)))
                { 
                    int16_t l_587[7][3] = {{0xB171L,(-2L),(-1L)},{0xB171L,9L,0xB171L},{0xB171L,0xB171L,0xB98AL},{0x03CCL,(-1L),0x7B0AL},{0x03CCL,1L,0x03CCL},{0x03CCL,0xB171L,0xB98AL},{0x03CCL,(-1L),0x7B0AL}};
                    int i, j;
                    (*l_465) = (g_116.f2.f3 < (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_583 <= (*l_465)), (((*l_540)--) & (l_586 , (((((((*l_527) |= (((65529UL | g_167) == (*l_465)) >= g_141.f5)) < g_299.f2.f4) && l_587[1][1]) & g_116.f5) | g_116.f1) && g_571.f6))))), g_104[0][4][0].f4)));
                    (*l_465) = (((*g_440) = (*g_440)) != l_588[5][3]);
                    (*l_465) &= l_587[3][2];
                    (***g_224) = (void*)0;
                }
                else
                { 
                    uint32_t l_589 = 0x60AA78F8L;
                    ++l_589;
                    return l_469[0][1];
                }
                if ((((safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((*l_465) = (g_92[0] &= ((((safe_div_func_uint32_t_u_u(((*l_465) , (l_463 != (void*)0)), (safe_lshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(((!(*l_465)) > (((!((((*l_539) = (safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(0L, (((*l_540) = 8UL) >= 0x29D120D9L))) , (*l_465)), g_104[0][4][0].f1))) | 0xFD87L) , g_571.f5)) , (void*)0) != l_610)), 0x79F4L)) == g_524), (*l_465))))) != 0x4F3BL) < (*l_465)) >= (*l_465)))) == g_299.f2.f2), 1UL)), g_452[0].f1)) | l_521), l_612)) , (void*)0) == &l_527))
                { 
                    int32_t l_623[5][1][3] = {{{0x5E6E7E5EL,0x127A4874L,0x5E6E7E5EL}},{{0x5E6E7E5EL,0x127A4874L,0x5E6E7E5EL}},{{0x5E6E7E5EL,0x127A4874L,0x5E6E7E5EL}},{{0x5E6E7E5EL,0x127A4874L,0x5E6E7E5EL}},{{0x5E6E7E5EL,0x127A4874L,0x5E6E7E5EL}}};
                    uint32_t *l_629 = &l_543;
                    int8_t *l_630 = (void*)0;
                    int8_t *l_631 = &g_387[1][0][0];
                    int32_t l_634 = (-1L);
                    int32_t l_635 = 0xAD3398FCL;
                    struct S0 **l_649 = &g_282;
                    struct S0 **l_650 = &g_283;
                    struct S0 *l_652[7] = {&g_299.f2,&g_299.f2,&g_299.f2,&g_299.f2,&g_299.f2,&g_299.f2,&g_299.f2};
                    struct S0 **l_651 = &l_652[5];
                    int i, j, k;
                    l_635 &= (((safe_rshift_func_int8_t_s_u(((g_141.f5 | ((l_634 = ((((safe_add_func_uint16_t_u_u((0xD8L == (((*l_539) ^= (((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((*l_631) = (l_623[2][0][2] < ((*l_527) = (safe_mod_func_int8_t_s_s(0x18L, (safe_mul_func_uint8_t_u_u((g_571.f2.f4 , (((((safe_unary_minus_func_int32_t_s(0x4D769003L)) , (((*l_629) = g_116.f6) , 65527UL)) , l_623[2][0][2]) , l_623[2][0][2]) > (-1L))), g_299.f2.f2))))))), 0x88L)), g_452[0].f0)), 2)) <= g_571.f0) == g_309.f2.f2) > l_632) , g_116.f2.f4)) ^ l_623[2][0][2])), 0x88BAL)) < l_633) && g_116.f2.f4) == g_309.f0)) | (*l_465))) < g_309.f2.f3), 1)) | (*l_465)) | (*l_465));
                    (*l_651) = ((*l_650) = ((*l_649) = ((safe_add_func_int16_t_s_s(((0xCFL & (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_634 || (safe_mod_func_uint32_t_u_u(((*l_540) = ((g_524 | (safe_lshift_func_uint16_t_u_s(l_623[0][0][2], 5))) && (((1L == (safe_lshift_func_uint8_t_u_u(0x5AL, 1))) || ((*l_465) & l_648)) && 0L))), l_635))), 0x66856F23L)), 1))) , 0xE80EL), 0xE8E8L)) , &g_104[0][4][0])));
                }
                else
                { 
                    uint8_t *l_656 = (void*)0;
                    int32_t l_657 = 0x52427B65L;
                    int32_t **l_659 = (void*)0;
                    int32_t **l_660 = &l_469[1][0];
                    (*l_660) = func_35(((safe_div_func_int32_t_s_s((safe_unary_minus_func_int64_t_s(((l_656 == &g_524) | (((g_309.f2.f1 && l_657) & 0x95643ACCL) ^ 8L)))), (+(g_141.f1 || g_299.f3)))) < (*l_465)), g_167, g_141.f0);
                    return (*g_127);
                }
            }
            else
            { 
                uint32_t l_664[3];
                int32_t l_667 = 0x629F6C53L;
                int32_t l_668[1][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_664[i] = 18446744073709551615UL;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_668[i][j] = 0x503B9B22L;
                }
                g_663 = p_6;
                ++l_664[2];
                --g_675;
            }
            if ((safe_mul_func_uint16_t_u_u((((*l_527) = 0L) , ((*l_539) = g_74)), 0UL)))
            { 
                int64_t ** const **l_688 = &l_687[0][1][2];
                int32_t l_690 = 0x37B12415L;
                const int32_t **l_691[2];
                int64_t *l_708 = &l_553.f0;
                int32_t l_710[4][6] = {{6L,6L,(-1L),6L,6L,(-1L)},{6L,6L,(-1L),6L,6L,(-1L)},{6L,6L,(-1L),6L,6L,(-1L)},{6L,6L,(-1L),6L,6L,(-1L)}};
                struct S1 *l_739 = &g_309;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_691[i] = &g_663;
                l_692[1][2] = p_6;
                (*l_465) = (safe_mul_func_int8_t_s_s(g_309.f0, (-1L)));
                for (l_522 = 0; (l_522 == (-9)); l_522 = safe_sub_func_int32_t_s_s(l_522, 8))
                { 
                    uint16_t l_697 = 0UL;
                    g_663 = p_6;
                    (*l_465) = 4L;
                    (*l_465) = ((l_697 || g_698) != ((((func_45((((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((((void*)0 != &l_573) , ((g_387[1][0][3] > ((safe_add_func_uint8_t_u_u(1UL, (&g_95 == (void*)0))) && g_571.f2.f5)) || g_165)), (*l_465))) , (*l_465)) ^ 1UL), 0x62L)), l_707)) & l_697) , l_708), l_709, g_309.f3, l_469[0][1], l_527) , l_710[0][3]) != (*l_465)) , 0x41L) , (-2L)));
                    if ((*l_465))
                        break;
                }
                for (l_707 = 27; (l_707 < (-17)); l_707 = safe_sub_func_uint32_t_u_u(l_707, 6))
                { 
                    int64_t ***l_721 = &g_440;
                    int64_t ****l_720 = &l_721;
                    uint64_t *l_722 = &g_141.f4;
                    int32_t l_736 = 0L;
                    uint64_t *l_737 = &l_586.f0;
                    int8_t l_750 = (-3L);
                    l_738[1][5][6] &= (safe_lshift_func_uint8_t_u_u((((-1L) && (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((4294967286UL & ((*l_465) = ((safe_unary_minus_func_int16_t_s((l_688 != l_720))) < ((((*l_722)++) < (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((!(*l_465)), 8)) && (safe_lshift_func_uint8_t_u_u((((*l_737) = ((safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s(((0x9EAEL != 0x0E5AL) & 0xAACFADC69BF18BC8LL), 0x0B3B3AF45311DC50LL)) , g_74), l_736)) >= 0UL)) <= (*l_465)), g_571.f3))), (-7L)))) <= g_116.f5)))) <= l_736), 0x42L)), g_421))) != l_736), 2));
                    g_740[2][4] = l_739;
                    p_6 = p_6;
                    g_663 = p_6;
                }
                if ((safe_add_func_uint64_t_u_u(g_449.f0, (0x5AL < g_299.f1))))
                { 
                    return l_753;
                }
                else
                { 
                    uint32_t l_756 = 3UL;
                    int32_t * const ****l_760 = &g_757[1][0][0];
                    int32_t l_769[3][2];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_769[i][j] = 0xA1C02E3FL;
                    }
                    (*l_753) = (((safe_sub_func_int64_t_s_s(((l_756 , (&g_134[0][0] != ((*l_760) = g_757[1][3][3]))) >= (safe_mod_func_int8_t_s_s(((++(*l_540)) != 0x92644A7DL), (4294967295UL | ((void*)0 != l_765))))), (*l_465))) | l_766) , (*l_465));
                    (*l_753) = ((void*)0 == g_767[1][0]);
                    --l_771;
                }
            }
            else
            { 
                for (l_707 = 0; (l_707 <= 1); l_707 += 1)
                { 
                    uint16_t l_774[7][4][7] = {{{9UL,1UL,0UL,65526UL,0UL,0xE528L,8UL},{65526UL,65529UL,0xC9C6L,0x7C9FL,0x39BBL,0x460AL,0x39BBL},{65534UL,65529UL,65529UL,65534UL,0x9287L,0x474CL,0x4673L},{0UL,1UL,65531UL,9UL,3UL,65535UL,0xBA71L}},{{0xBA71L,65526UL,0x9287L,0x2513L,65526UL,0UL,0x4673L},{65535UL,0x460AL,0xE528L,7UL,0x2513L,1UL,0x39BBL},{8UL,65531UL,0x2513L,0x2711L,0x2513L,65531UL,8UL},{0x4673L,0x2513L,0x0FABL,65535UL,65526UL,0x7C9FL,65529UL}},{{7UL,0x9287L,65534UL,8UL,3UL,65529UL,0x7C9FL},{65526UL,0xA433L,0x0FABL,0x460AL,0x9287L,8UL,65531UL},{0xE528L,7UL,0x2513L,1UL,0x39BBL,0x39BBL,1UL},{0xE528L,0UL,0xE528L,0xA433L,0UL,0x4673L,0UL}},{{65526UL,0UL,0x9287L,0x39BBL,7UL,0xBA71L,65535UL},{7UL,0x28C9L,65531UL,0xBA71L,8UL,0x4673L,0x474CL},{0x4673L,65526UL,65529UL,0xC9C6L,0x7C9FL,0x39BBL,0x460AL},{8UL,0x0FABL,0xC9C6L,0xC9C6L,0x0FABL,8UL,0xE528L}},{{65535UL,8UL,0UL,0xBA71L,0x4673L,65529UL,0UL},{0xBA71L,0x2711L,65534UL,0x39BBL,65535UL,0x7C9FL,0xA433L},{0UL,8UL,1UL,0xA433L,65529UL,65526UL,0x7C9FL},{65529UL,0xC9C6L,0x7C9FL,0x39BBL,0x460AL,0x39BBL,0x7C9FL}},{{0x63B9L,0x63B9L,65526UL,0UL,0x7C9FL,65535UL,0x9287L},{65535UL,0xA433L,65534UL,7UL,0x28C9L,65531UL,0xBA71L},{0UL,65535UL,0x474CL,8UL,0x7C9FL,0x28C9L,9UL},{0x474CL,65534UL,65531UL,0x7C9FL,0x460AL,0UL,0UL}},{{0UL,0x0FABL,65531UL,0x0FABL,0UL,9UL,0x28C9L},{65534UL,0x9287L,0x474CL,0x4673L,8UL,0xBA71L,65531UL},{0xC9C6L,0UL,65534UL,65535UL,1UL,0x9287L,65535UL},{65534UL,0x4673L,65526UL,65529UL,0xC9C6L,0x7C9FL,0x39BBL}}};
                    int i, j, k;
                    l_774[2][3][4]++;
                    (*g_127) = (void*)0;
                }
            }
            for (g_299.f0 = (-25); (g_299.f0 > 27); ++g_299.f0)
            { 
                uint32_t l_786 = 18446744073709551615UL;
                int32_t l_805 = 0L;
                uint8_t l_806 = 0xAEL;
                int32_t l_817 = (-1L);
                int32_t l_818 = 0x64FCFF22L;
                int32_t l_823 = 0xFCD635E8L;
                int32_t l_824 = 0x5DF50614L;
                int32_t l_825[7][3][1];
                uint32_t l_830 = 4294967290UL;
                int8_t *l_844 = &g_309.f5;
                uint32_t l_857 = 0x0D94AA4FL;
                int64_t *l_875[7][5];
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_825[i][j][k] = 6L;
                    }
                }
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_875[i][j] = &l_583;
                }
                for (l_586.f2.f1 = 1; (l_586.f2.f1 >= 0); l_586.f2.f1 -= 1)
                { 
                    int16_t ***l_781 = &g_779;
                    int32_t l_799 = (-6L);
                    int16_t *l_800[6] = {&g_116.f2.f5,&g_116.f2.f5,&g_116.f2.f5,&g_116.f2.f5,&g_116.f2.f5,&g_116.f2.f5};
                    int32_t l_819 = 1L;
                    int32_t l_820 = 0x09BF8AFEL;
                    int32_t l_821 = 1L;
                    int32_t l_822 = 0x1953C170L;
                    int32_t l_826 = (-1L);
                    int32_t l_827 = (-1L);
                    int32_t l_828 = 0L;
                    int32_t l_829[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_829[i] = (-7L);
                    (*l_781) = g_779;
                    (*g_127) = l_469[l_586.f2.f1][l_586.f2.f1];
                    (*l_753) ^= (l_464[(l_586.f2.f1 + 1)][(l_586.f2.f1 + 2)] ^= ((((*l_465) >= ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0x5DC5C2ACL, (safe_sub_func_uint32_t_u_u(((*g_780) <= 1UL), ((safe_mod_func_int16_t_s_s(0xB886L, 0xC87FL)) > (safe_mod_func_int16_t_s_s(((5L != (**g_779)) | (**g_759)), (*l_465)))))))), (*l_465))) || 0x2F0A7962A254D9F4LL)) || (*l_465)) != (*l_465)));
                    l_830--;
                }
                (***g_224) = (void*)0;
                if (((*l_753) = l_823))
                { 
                    int16_t l_835 = 7L;
                    const int64_t *** const l_846 = &g_804;
                    int64_t ****l_847 = &l_765;
                    union U2 l_852 = {0xC56F964D5BC26DB1LL};
                    struct S0 l_856[5] = {{-8L,0x6477L,0UL,0x942733AEL,0x2F326434B5B5CCBALL,0x43DEL},{-8L,0x6477L,0UL,0x942733AEL,0x2F326434B5B5CCBALL,0x43DEL},{-8L,0x6477L,0UL,0x942733AEL,0x2F326434B5B5CCBALL,0x43DEL},{-8L,0x6477L,0UL,0x942733AEL,0x2F326434B5B5CCBALL,0x43DEL},{-8L,0x6477L,0UL,0x942733AEL,0x2F326434B5B5CCBALL,0x43DEL}};
                    uint8_t l_858 = 8UL;
                    int i;
                    l_496 |= (safe_sub_func_uint16_t_u_u(((**g_779) | l_835), (((((safe_sub_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((l_463 = l_844) != l_845) , (l_846 == ((*l_847) = &g_440))), ((65526UL ^ (*l_465)) & g_848))), l_835)), (*l_465))) | l_824) , l_835), 0x8AEDF495L)) < 0xF8F9EDB1L) , g_741.f1) , g_477) | l_835)));
                    l_805 = (g_698 != (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((((*l_539) = (l_852 , (0x2399L < (safe_sub_func_uint8_t_u_u((g_104[0][4][0].f3 | (l_852.f0 ^ l_855)), ((l_856[1] , l_823) < (*l_465))))))) <= 3UL) < (*l_465)))), l_857)));
                    ++l_858;
                }
                else
                { 
                    int32_t l_863 = 0xFA7A6189L;
                    int32_t *l_874 = &l_17;
                    int32_t l_876 = 1L;
                    l_876 = (func_45((*g_440), func_51((((safe_rshift_func_uint16_t_u_u((l_863 <= (*l_465)), ((safe_rshift_func_int8_t_s_s(((*l_845) = ((safe_rshift_func_int16_t_s_u(0xF240L, 14)) == (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_309.f2.f3, l_805)), 1)))), 1)) ^ (safe_add_func_int64_t_s_s((*l_465), g_116.f2.f2))))) && l_825[2][1][0]) | g_141.f4), l_874), (**g_779), l_874, l_875[4][2]) , 2L);
                }
            }
        }
        else
        { 
            int32_t l_880 = 0x12281ED8L;
            uint64_t *l_897[6][3][5] = {{{(void*)0,&g_309.f2.f4,&g_116.f0,&g_116.f2.f4,&g_571.f0},{&g_116.f0,(void*)0,&g_741.f2.f4,&g_309.f2.f4,(void*)0},{&l_586.f0,(void*)0,&g_299.f2.f4,&g_309.f2.f4,(void*)0}},{{&g_741.f2.f4,&g_741.f2.f4,&l_586.f0,&g_116.f2.f4,&g_116.f2.f4},{&g_741.f0,&g_741.f2.f4,&g_741.f0,&g_299.f2.f4,&g_741.f2.f4},{&g_571.f2.f4,&g_299.f2.f4,&g_299.f0,(void*)0,&g_741.f2.f4}},{{(void*)0,&g_116.f2.f4,&g_309.f2.f4,&g_116.f2.f4,&g_299.f2.f4},{(void*)0,&g_299.f0,&g_299.f0,&g_741.f2.f4,&g_104[0][4][0].f4},{&g_299.f2.f4,&g_104[0][4][0].f4,&g_741.f0,&g_116.f0,&g_104[0][4][0].f4}},{{(void*)0,&g_299.f2.f4,&l_586.f0,&g_741.f2.f4,&g_116.f0},{(void*)0,&g_571.f2.f4,&g_299.f2.f4,&g_299.f0,&g_299.f2.f4},{&g_741.f2.f4,&g_571.f2.f4,&g_741.f2.f4,&g_299.f2.f4,&g_571.f2.f4}},{{&g_309.f2.f4,&g_299.f2.f4,&g_116.f0,&g_116.f0,&g_299.f2.f4},{&g_299.f2.f4,&g_104[0][4][0].f4,&g_116.f2.f4,(void*)0,&g_116.f2.f4},{&g_104[0][4][0].f4,&g_299.f0,&g_309.f2.f4,&l_573.f4,&l_586.f0}},{{&g_309.f2.f4,&g_116.f2.f4,&l_573.f4,(void*)0,&g_299.f0},{&g_104[0][4][0].f4,&g_299.f2.f4,&g_116.f2.f4,(void*)0,&l_573.f4},{&g_299.f2.f4,&g_741.f2.f4,&g_104[0][4][0].f4,(void*)0,&g_309.f2.f4}}};
            int32_t l_900 = 0x739D101CL;
            int32_t l_922 = 0xDA63E426L;
            int32_t *l_935[1][7][5] = {{{&l_684.f1,&g_741.f1,&l_684.f1,(void*)0,(void*)0},{&l_684.f1,&g_741.f1,&l_684.f1,(void*)0,(void*)0},{&l_684.f1,&g_741.f1,&l_684.f1,(void*)0,(void*)0},{&l_684.f1,&g_741.f1,&l_684.f1,(void*)0,(void*)0},{&l_684.f1,&g_741.f1,&l_684.f1,(void*)0,&l_684.f1},{&l_674[2][1][0],&l_573.f3,&l_674[2][1][0],&l_684.f1,&l_684.f1},{&l_674[2][1][0],&l_573.f3,&l_674[2][1][0],&l_684.f1,&l_684.f1}}};
            uint64_t l_955 = 1UL;
            int64_t * const *l_983 = (void*)0;
            int64_t * const **l_982 = &l_983;
            int i, j, k;
            for (g_571.f2.f2 = 9; (g_571.f2.f2 <= 3); g_571.f2.f2 = safe_sub_func_int64_t_s_s(g_571.f2.f2, 1))
            { 
                int64_t l_879 = 0xC578C54C48675FF6LL;
                union U2 *l_886 = (void*)0;
                uint8_t *l_889 = (void*)0;
                uint8_t *l_890 = &g_309.f3;
                uint64_t **l_893 = (void*)0;
                uint64_t *l_895 = &g_141.f4;
                uint64_t **l_894 = &l_895;
                struct S1 l_896 = {0UL,7L,{8L,4L,0xA2L,5L,3UL,-1L},255UL,0x1DD5631FL,0x9AL,-5L};
                struct S0 * const l_927 = &g_309.f2;
                int8_t l_930 = 4L;
                uint32_t l_931 = 0x5294F35FL;
                (*l_753) = l_879;
                g_663 = p_6;
                if (l_880)
                    break;
                if ((safe_rshift_func_uint16_t_u_u((+(((((safe_rshift_func_uint8_t_u_s(((l_886 != ((safe_sub_func_int16_t_s_s((g_16[2][0] = ((**g_779) |= (((*l_890) = 1UL) & (l_900 = (safe_rshift_func_int8_t_s_u(((((*l_894) = g_441) != (l_897[2][1][0] = (l_896 , &l_801))) || (((0xB6L & ((safe_mul_func_int8_t_s_s((-1L), l_880)) & (-1L))) ^ l_880) , (*l_465))), 4)))))), (*l_753))) , &l_553)) && l_879), 5)) > l_880) != (*l_465)) | l_880) >= l_880)), g_299.f6)))
                { 
                    int64_t l_908 = 0L;
                    union U2 l_909 = {0x1A925C2A1C73A3EDLL};
                    int16_t *l_910 = &l_896.f2.f5;
                    union U2 **l_913 = (void*)0;
                    union U2 **l_914[6][4][1] = {{{&g_911},{(void*)0},{(void*)0},{&g_911}},{{(void*)0},{(void*)0},{&g_911},{(void*)0}},{{(void*)0},{&g_911},{(void*)0},{(void*)0}},{{&g_911},{(void*)0},{(void*)0},{&g_911}},{{(void*)0},{(void*)0},{&g_911},{(void*)0}},{{(void*)0},{&g_911},{(void*)0},{(void*)0}}};
                    int16_t *l_916 = &g_116.f2.f1;
                    int32_t *l_928 = &g_71[0];
                    int i, j, k;
                    (*l_753) = (safe_sub_func_uint8_t_u_u(0x7DL, ((*l_890) = (((((*l_916) ^= (((safe_mul_func_int16_t_s_s(((**g_779) , (**g_779)), (g_92[0] ^= (+((*l_910) = (safe_div_func_int32_t_s_s(l_908, (l_909 , l_909.f1)))))))) & ((l_915 = (l_886 = g_911)) == &g_452[0])) > 0xAC74C6C4L)) >= 65534UL) , (*l_465)) | (*l_465)))));
                    (*l_753) = ((((safe_unary_minus_func_uint8_t_u((((((*l_910) = ((*l_916) = (**g_779))) == (4294967295UL < ((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((*l_845) = (-7L)), 2)) >= ((((l_922 ^= l_900) && (safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(9L, ((2L > (*g_780)) , g_741.f2.f1))), (*l_465)))) >= l_880) || l_896.f5)) | l_908), (*g_780))) < l_900))) ^ 3L) ^ g_741.f2.f5))) , l_927) != l_927) && g_299.f6);
                    return l_928;
                }
                else
                { 
                    const int32_t **l_929 = &g_663;
                    (*l_465) = (0x041A87B9FBE338A1LL >= l_896.f1);
                    (*l_929) = p_6;
                    if (l_896.f2.f1)
                        continue;
                    l_931--;
                    (*l_929) = (l_935[0][4][1] = ((*g_127) = l_934));
                }
                for (g_299.f2.f1 = 0; (g_299.f2.f1 < 20); ++g_299.f2.f1)
                { 
                    int32_t *l_938 = (void*)0;
                    return l_938;
                }
            }
            l_955 ^= (g_571.f4 <= (safe_mod_func_int32_t_s_s((((&g_803 == (void*)0) ^ (safe_mul_func_int8_t_s_s(g_741.f5, (safe_sub_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((((**g_779) ^= (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_465) && (safe_add_func_int8_t_s_s((255UL != 255UL), (*l_465)))), (*l_753))), g_141.f4)) <= 1L), 0x32L))) , g_741.f0), (-1L))) >= g_912.f0) ^ (*l_465)), g_571.f2.f4))))) , (*l_753)), (*l_465))));
lbl_987:
            for (g_74 = 7; (g_74 <= 5); g_74 = safe_sub_func_uint32_t_u_u(g_74, 6))
            { 
                uint32_t l_973[6][2] = {{0xBC278441L,0xBC278441L},{0xBC278441L,0xBC278441L},{0xBC278441L,0xBC278441L},{0xBC278441L,0xBC278441L},{0xBC278441L,0xBC278441L},{0xBC278441L,0xBC278441L}};
                int32_t l_975 = 1L;
                int i, j;
                for (g_741.f2.f1 = 0; (g_741.f2.f1 <= (-10)); --g_741.f2.f1)
                { 
                    uint16_t l_972 = 1UL;
                    uint8_t *l_974 = &g_116.f2.f2;
                    uint32_t *l_976 = &g_675;
                    const uint64_t * const l_979 = &g_571.f0;
                    l_975 &= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((*l_753) > (((g_741.f5 , 0x16EEL) >= ((g_964[0][0] && ((*l_974) |= (l_965 == ((((safe_mod_func_int32_t_s_s((((0xFC828DDE1E99333ELL || ((+((+(((safe_add_func_uint64_t_u_u(g_309.f2.f2, l_972)) <= (-5L)) & 0x55710972L)) || l_973[1][0])) , 4L)) < 6UL) >= l_973[3][0]), l_973[1][0])) <= 0UL) >= g_571.f3) & 9L)))) || l_973[1][0])) & l_972)), 7)), l_973[1][0])) && 0x78884DE1E697A62BLL);
                    (*l_465) = ((((*l_976)--) , ((((*l_753) |= ((g_104[0][4][0].f5 > 0x8FE64973933DC1E8LL) && ((((*l_465) >= ((&l_955 != l_979) <= (((void*)0 != l_982) && 0UL))) && 4294967295UL) >= l_972))) ^ g_116.f2.f3) < 0xEACBED3BL)) & 0x03L);
                }
                if (g_116.f0)
                    goto lbl_987;
                ++g_984[1][1];
            }
            (*l_753) = ((0xB4953F6F2FC734FCLL & l_988) == (safe_add_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(0x7DD0L, ((&l_983 == (((*l_465) = (0xB1A7L >= ((*l_465) | ((g_299.f0 , (*l_465)) , (*l_465))))) , l_993[4][1][2])) && 0x0E11L))) & 0x1D7D7C1829DD9029LL) || 65535UL) | 1L), g_62)));
        }
        (*l_994) = p_6;
        (*l_753) = (safe_lshift_func_int16_t_s_u((g_571.f5 && ((((*l_999) = l_463) != ((safe_mul_func_int8_t_s_s((((((*l_1003) = &g_768[0]) != &g_768[2]) | ((((safe_sub_func_uint16_t_u_u((((-3L) == (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((*l_753), 5)), (((((*l_465) & 0xBBD75E1DL) || 0xB6C040BBBF6C6182LL) != 0x0589908EL) && (*l_465))))) & 0x3ACC5546L), 3L)) >= (*l_465)) ^ 8UL) & 0xF1B6L)) >= l_1010), g_524)) , l_463)) != g_524)), g_741.f2.f2));
        for (l_522 = 0; (l_522 < 9); l_522 = safe_add_func_uint8_t_u_u(l_522, 2))
        { 
            int32_t ****l_1019[3];
            uint32_t *l_1020 = &g_698;
            uint8_t *l_1021 = &l_1010;
            struct S1 *l_1035[6][1][6] = {{{&g_299,&g_299,&g_571,&g_741,&g_571,&g_299}},{{&g_571,&g_741,&g_741,&g_741,&g_741,&g_571}},{{&g_299,&g_571,&g_741,&g_571,&g_299,&g_299}},{{&l_586,&g_571,&g_571,&l_586,&g_741,&l_586}},{{&l_586,&g_741,&l_586,&g_571,&g_571,&l_586}},{{&g_299,&g_299,&g_571,&g_741,&g_571,&g_299}}};
            int64_t ***l_1036 = &g_440;
            int64_t l_1046 = 0L;
            const int64_t *l_1121 = &l_553.f0;
            const int64_t ** const l_1120 = &l_1121;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1019[i] = &g_134[0][0];
            (*l_465) = (safe_sub_func_uint8_t_u_u(((*l_1003) != &g_768[1]), ((*l_1021) &= (((*l_539) = ((void*)0 == g_1015)) < (safe_rshift_func_int8_t_s_s(((void*)0 == l_1019[1]), (((&g_675 == l_1020) , &g_62) != (*l_999))))))));
            (*l_465) = (safe_rshift_func_uint16_t_u_u(((*l_539) |= (+(safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((*l_465), (safe_mul_func_uint16_t_u_u((((((safe_rshift_func_uint16_t_u_s((((((((safe_rshift_func_int16_t_s_s((**g_779), (**g_779))) , l_1035[1][0][4]) != (((((*l_753) , l_1036) != l_687[0][0][1]) , (*l_465)) , (void*)0)) , (void*)0) == &p_6) != l_1037) , g_741.f2.f2), 1)) ^ (*l_465)) < 0xB2L) >= 3UL) | l_1038), (*l_465))))), (*l_465))))), l_1039[5]));
            (*l_994) = l_1054;
            for (g_571.f4 = (-19); (g_571.f4 > 19); g_571.f4 = safe_add_func_int8_t_s_s(g_571.f4, 1))
            { 
                uint64_t l_1057[5] = {3UL,3UL,3UL,3UL,3UL};
                uint32_t *l_1070 = &g_675;
                int32_t l_1090 = (-2L);
                uint16_t *l_1092 = &g_1093;
                int32_t *l_1094 = &g_299.f4;
                int32_t *l_1095 = (void*)0;
                union U2 *l_1110 = &g_912;
                int64_t ****l_1114 = &l_993[4][0][3];
                union U2 **l_1116[5][6] = {{&g_911,&g_911,&l_915,&l_915,&g_911,&l_915},{(void*)0,&g_911,(void*)0,&l_915,&l_915,&l_915},{&l_915,(void*)0,(void*)0,&l_915,&g_911,&l_915},{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915},{&l_915,&l_915,&l_915,&l_915,&l_915,&l_915}};
                int32_t l_1118[4][2] = {{0xACB989ACL,0xACB989ACL},{0xACB989ACL,0xACB989ACL},{0xACB989ACL,0xACB989ACL},{0xACB989ACL,0xACB989ACL}};
                uint64_t l_1127 = 9UL;
                const uint32_t l_1160 = 0x56C5A5FAL;
                int i, j;
                l_1057[2]--;
                (*l_753) = (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_div_func_int64_t_s_s(((l_1057[2] || (safe_mod_func_int8_t_s_s((3UL >= (((((**g_779) = ((g_309.f4 = ((**l_994) , ((*l_1094) = (safe_sub_func_uint16_t_u_u((((*l_1070) = ((*l_1020) = (*l_753))) , ((*l_1092) |= (safe_add_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((safe_div_func_int64_t_s_s((l_1090 &= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint16_t_u_u(((*l_539) = ((((safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(((((func_51(g_309.f4, (l_465 = &l_673)) , l_1057[2]) != 0x26A7B556L) && (-1L)) , (*g_780)), (**g_779))) < (**l_994)), l_1057[4])) & g_309.f4) , (*l_1054)) == 0UL)), 1)) , 1UL))), (**l_994))), 7L)), 11))), (**l_994))) , (**g_1015)), 0xCE102212CC43460ELL)) <= (**l_994)), l_1091)))), 0xFF9BL))))) , l_1057[2])) & 0x197EL) >= l_1057[2]) && 0UL)), (*l_753)))) , g_1096), 1L)) < (-6L)), (**l_994))), 2));
                g_663 = (*l_994);
                for (g_571.f0 = 0; (g_571.f0 >= 55); g_571.f0 = safe_add_func_int16_t_s_s(g_571.f0, 7))
                { 
                    uint32_t l_1130 = 3UL;
                    (*l_753) = 0x5DB80505L;
                    (*l_465) = ((safe_lshift_func_int16_t_s_u((((l_1127 >= l_1118[2][0]) == ((*g_780) , (*l_465))) == (safe_mod_func_uint64_t_u_u((*l_465), l_1118[2][1]))), 2)) < ((*l_845) = g_104[0][4][0].f0));
                    if (l_1130)
                        break;
                }
                for (l_684.f0 = 0; (l_684.f0 > (-2)); --l_684.f0)
                { 
                    uint64_t l_1161 = 0x9216CBA796AD66AFLL;
                    (*l_1054) = ((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s((l_674[3][3][0] ^= ((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((l_1090 = ((*l_845) = g_104[0][4][0].f1)) || (safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((**g_1015) = (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((**l_994) == (((safe_sub_func_uint8_t_u_u((l_570 == l_1157), g_299.f2.f0)) <= ((*l_1054) ^ (safe_div_func_int16_t_s_s(((0xA829L ^ (**l_994)) < g_299.f2.f4), l_1118[2][1])))) == (*g_663))), l_1118[1][1])), 0UL)), 2)), l_1160))) , 0x0CL), (*l_753))), 0x58L)), (**l_994)))), (*g_780))), l_1161)) != (*l_753))), l_1118[2][1])) , 0x715FB282F1C3C025LL) ^ l_1161) , 0xED05L), l_1160)) & (*l_465));
                }
            }
        }
    }
    else
    { 
        int64_t l_1165 = (-9L);
        int32_t l_1171 = 0x31054969L;
        int32_t l_1172 = 4L;
        int32_t l_1173[4];
        int32_t *l_1177[7][6][6] = {{{&l_1173[1],(void*)0,&l_17,&l_464[0][0],&l_1173[1],&g_571.f1},{&g_571.f1,&l_1173[1],&l_17,&l_707,(void*)0,&l_17},{&g_741.f1,&l_707,&g_571.f1,(void*)0,&g_571.f1,&l_17},{(void*)0,&g_571.f1,&l_17,&g_571.f1,(void*)0,&g_571.f1},{(void*)0,&l_1173[1],&l_17,(void*)0,&l_707,&l_17},{&l_707,&g_741.f1,&g_571.f1,&l_1173[1],&l_464[0][0],&l_17}},{{&l_1173[1],&l_464[0][0],&l_17,(void*)0,&l_1173[1],&g_571.f1},{&l_464[0][0],(void*)0,&l_17,&g_741.f1,&g_741.f1,&l_17},{(void*)0,(void*)0,&g_571.f1,&l_1173[1],(void*)0,&l_17},{&l_1173[1],(void*)0,&l_17,&l_464[0][0],&l_1173[1],&g_571.f1},{&g_571.f1,&l_1173[1],&l_17,&l_707,(void*)0,&l_707},{&l_707,(void*)0,&g_741.f1,&g_309.f1,(void*)0,&l_707}},{{&g_309.f1,(void*)0,&l_707,(void*)0,&g_309.f1,&g_741.f1},{&g_116.f2.f3,&l_464[0][0],&l_707,&l_684.f1,(void*)0,&l_707},{(void*)0,&l_707,&g_741.f1,&l_464[0][0],(void*)0,&l_707},{&l_464[0][0],(void*)0,&l_707,&g_116.f2.f3,&l_1173[0],&g_741.f1},{(void*)0,&g_309.f1,&l_707,&l_707,&l_707,&l_707},{&l_684.f1,&l_684.f1,&g_741.f1,&l_1173[0],&g_116.f2.f3,&l_707}},{{&l_1173[0],&g_116.f2.f3,&l_707,(void*)0,&l_464[0][0],&g_741.f1},{(void*)0,&l_1173[0],&l_707,(void*)0,&l_684.f1,&l_707},{&l_707,(void*)0,&g_741.f1,&g_309.f1,(void*)0,&l_707},{&g_309.f1,(void*)0,&l_707,(void*)0,&g_309.f1,&g_741.f1},{&g_116.f2.f3,&l_464[0][0],&l_707,&l_684.f1,(void*)0,&l_707},{(void*)0,&l_707,&g_741.f1,&l_464[0][0],(void*)0,&l_707}},{{&l_464[0][0],(void*)0,&l_707,&g_116.f2.f3,&l_1173[0],&g_741.f1},{(void*)0,&g_309.f1,&l_707,&l_707,&l_707,&l_707},{&l_684.f1,&l_684.f1,&g_741.f1,&l_1173[0],&g_116.f2.f3,&l_707},{&l_1173[0],&g_116.f2.f3,&l_707,(void*)0,&l_464[0][0],&g_741.f1},{(void*)0,&l_1173[0],&l_707,(void*)0,&l_684.f1,&l_707},{&l_707,(void*)0,&g_741.f1,&g_309.f1,(void*)0,&l_707}},{{&g_309.f1,(void*)0,&l_707,(void*)0,&g_309.f1,&g_741.f1},{&g_116.f2.f3,&l_464[0][0],&l_707,&l_684.f1,(void*)0,&l_707},{(void*)0,&l_707,&g_741.f1,&l_464[0][0],(void*)0,&l_707},{&l_464[0][0],(void*)0,&l_707,&g_116.f2.f3,&l_1173[0],&g_741.f1},{(void*)0,&g_309.f1,&l_707,&l_707,&l_707,&l_707},{&l_684.f1,&l_684.f1,&g_741.f1,&l_1173[0],&g_116.f2.f3,&l_707}},{{&l_1173[0],&g_116.f2.f3,&l_707,(void*)0,&l_464[0][0],&g_741.f1},{(void*)0,&l_1173[0],&l_707,(void*)0,&l_684.f1,&l_707},{&l_707,(void*)0,&g_741.f1,&g_309.f1,(void*)0,&l_707},{&g_309.f1,(void*)0,&l_707,(void*)0,&g_309.f1,&g_741.f1},{&g_116.f2.f3,&l_464[0][0],&l_707,&l_684.f1,(void*)0,&l_707},{(void*)0,&l_707,&g_741.f1,&l_464[0][0],(void*)0,&l_707}}};
        int64_t l_1179 = (-1L);
        int32_t l_1198 = (-1L);
        uint32_t ** const l_1215 = (void*)0;
        int32_t *****l_1238 = &g_224;
        uint32_t l_1252[3][1];
        const union U2 **l_1284 = &g_448[0][6];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1173[i] = 1L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1252[i][j] = 0xE6E63230L;
        }
        if ((*g_128))
        { 
            union U2 *l_1166 = (void*)0;
            union U2 **l_1167 = &g_911;
            int32_t l_1168 = 0x1EF9187FL;
            int32_t l_1169 = 0x5E2CE91BL;
            int32_t l_1170[3][2][6] = {{{0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL},{0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL}},{{0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL},{0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL}},{{0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL},{0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL,0xD8CD6B9BL}}};
            int32_t *l_1178[4] = {&l_464[0][0],&l_464[0][0],&l_464[0][0],&l_464[0][0]};
            int i, j, k;
            (**g_127) = (+(safe_div_func_uint64_t_u_u(0x445C5475CD173BCFLL, l_1165)));
            (*l_1167) = l_1166;
            g_1174++;
            l_1178[1] = (l_1177[3][3][2] = (***g_224));
            g_1180--;
        }
        else
        { 
            int32_t *l_1183[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1183[i][j] = (void*)0;
            }
            (*g_127) = (l_1183[0][0] = &l_1171);
        }
        (**g_127) = ((safe_mod_func_int8_t_s_s(((*l_1054) > (safe_lshift_func_uint8_t_u_u(((l_1197[2][0][0] |= (safe_div_func_int64_t_s_s((*l_1054), ((*g_663) , (safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((g_116.f6 != ((*l_845) = 0xC7L)), (0xB4B0L == ((((((safe_add_func_uint8_t_u_u(0x40L, g_571.f0)) , &g_740[0][3]) != g_1196[3][6][0]) <= (*g_663)) != (*g_780)) >= g_741.f6)))) >= g_116.f2.f2), (*l_753))))))) && 0xDB322DB1E8D7F11ELL), g_741.f2.f0))), g_571.f3)) == l_1198);
        for (g_571.f2.f2 = 18; (g_571.f2.f2 < 20); g_571.f2.f2 = safe_add_func_uint64_t_u_u(g_571.f2.f2, 1))
        { 
            int16_t l_1209 = 0L;
            const uint32_t l_1222 = 0xF525F3E6L;
            int32_t **** const *l_1240 = &l_578[3];
            uint32_t *l_1250 = &g_167;
            (*l_753) = (safe_rshift_func_uint16_t_u_s(((*l_1054) & (((((safe_mod_func_uint8_t_u_u(7UL, (safe_lshift_func_int8_t_s_u(g_848, 0)))) && (safe_mod_func_int16_t_s_s(l_1209, ((*l_539) |= 65535UL)))) == g_104[0][4][0].f1) , ((g_1093 = (((**g_1015) | l_1209) | g_524)) , l_1209)) ^ 255UL)), 12));
            for (g_698 = (-6); (g_698 != 38); ++g_698)
            { 
                int64_t l_1232[6][1][1];
                int32_t l_1233 = 0x9100DC07L;
                const uint8_t l_1234 = 248UL;
                uint8_t *l_1249[5][5][4] = {{{&g_299.f2.f2,(void*)0,&g_571.f3,&g_571.f3},{&l_1010,&l_1010,&g_299.f2.f2,&g_571.f3},{&g_141.f2,(void*)0,&g_141.f2,&g_299.f2.f2},{&g_141.f2,&g_299.f2.f2,&g_299.f2.f2,&g_141.f2},{&l_1010,&g_299.f2.f2,&g_571.f3,&g_299.f2.f2}},{{&g_299.f2.f2,(void*)0,&g_571.f3,&g_571.f3},{&l_1010,&l_1010,&g_299.f2.f2,&g_571.f3},{&g_141.f2,(void*)0,&g_141.f2,&g_299.f2.f2},{&g_141.f2,&g_299.f2.f2,&g_299.f2.f2,&g_141.f2},{&l_1010,&g_299.f2.f2,&g_571.f3,&g_299.f2.f2}},{{&g_299.f2.f2,(void*)0,&g_571.f3,&g_571.f3},{&l_1010,&l_1010,&g_299.f2.f2,&g_571.f3},{&g_141.f2,(void*)0,&g_141.f2,&g_299.f2.f2},{&g_141.f2,&g_299.f2.f2,&g_299.f2.f2,&g_141.f2},{&l_1010,&g_299.f2.f2,&g_571.f3,&g_299.f2.f2}},{{&g_299.f2.f2,(void*)0,&g_571.f3,&g_571.f3},{&l_1010,&l_1010,&g_299.f2.f2,&g_571.f3},{&g_141.f2,(void*)0,&g_141.f2,&g_299.f2.f2},{&g_141.f2,&g_299.f2.f2,&g_299.f2.f2,&g_141.f2},{&l_1010,&g_299.f2.f2,&g_571.f3,&g_299.f2.f2}},{{&g_299.f2.f2,(void*)0,&g_571.f3,&g_571.f3},{&l_1010,&l_1010,&g_299.f2.f2,&g_571.f3},{&g_141.f2,(void*)0,&g_141.f2,&g_299.f2.f2},{&g_141.f2,&g_299.f2.f2,&g_299.f2.f2,&g_141.f2},{&l_1010,&g_299.f2.f2,&g_571.f3,&g_299.f2.f2}}};
                uint32_t **l_1251 = &l_540;
                uint32_t *l_1253[6][1];
                union U2 *l_1264[6][4][2] = {{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}},{{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684},{&l_684,&l_684}}};
                int32_t l_1279 = 0xDF0B5DF6L;
                int32_t l_1280 = 0xA02218C2L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1232[i][j][k] = 0xA1CCFB5F07FD96DELL;
                    }
                }
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1253[i][j] = &g_984[0][1];
                }
                (*l_753) = (!(safe_add_func_uint64_t_u_u(((((l_1215 == (void*)0) , (safe_mod_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((*l_539) = (safe_mul_func_int8_t_s_s(g_571.f2.f2, l_1222))), (+l_1222))) && (safe_add_func_uint8_t_u_u((((((l_1232[3][0][0] &= (safe_mul_func_int16_t_s_s((l_1222 > (safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*g_128) = (*l_1054)), (*l_1054))), g_104[0][4][0].f5))), 0UL))) > l_1233) ^ (**g_779)) & l_1222) != l_1233), l_1233))) | l_1209), 0x8BL))) , g_299.f0) & 0x69L), l_1234)));
                if ((safe_mul_func_uint8_t_u_u(((l_1239 = (l_1238 = (l_1237 = &g_224))) != l_1240), ((*l_845) |= ((((l_1233 = ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((((((*****l_1240) && ((((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_421 = 248UL), (((*****l_1240) , (void*)0) != (l_552[0][0] = ((*l_1251) = l_1250))))), 255UL)) >= (*g_128)) ^ (*****l_1240)) || l_1252[1][0])) != (*****l_1240)) | (*****l_1240)) | 0UL), g_741.f6)), 0)) & 0xEFBAL)) , (void*)0) == (void*)0) , l_1232[3][0][0])))))
                { 
                    int32_t **l_1255 = &l_1177[4][0][2];
                    union U2 **l_1265 = &l_1264[3][2][1];
                    union U2 **l_1266[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1266[i] = &g_911;
                    (*l_1255) = func_35(g_92[0], g_741.f0, (!(*****l_1240)));
                    (****g_224) = ((safe_div_func_uint64_t_u_u(((void*)0 == g_1258), (((*****l_1240) > ((**g_1258) = ((void*)0 == &g_387[0][0][0]))) | (safe_rshift_func_uint16_t_u_s(((*****l_1240) < (*****l_1237)), 11))))) <= 0xD06A197DEFCD0E45LL);
                    g_911 = ((*l_1265) = l_1264[3][3][1]);
                    if ((****g_224))
                        break;
                }
                else
                { 
                    uint16_t *l_1276 = (void*)0;
                    uint16_t *l_1277 = &g_92[0];
                    int32_t l_1278 = (-2L);
                    (**g_759) = (safe_rshift_func_int16_t_s_u((&l_1249[3][2][3] != &g_1259), (((safe_mul_func_uint16_t_u_u((((((!(*****l_1240)) != (safe_add_func_uint64_t_u_u(((l_1232[3][0][0] != 0x51D86D70L) > ((*l_1277) = (l_684 , (++(*l_539))))), ((**g_1015) |= (*****l_1238))))) | (*g_1259)) >= l_1278) ^ 0x83L), l_1278)) == (*****l_1240)) , g_116.f3)));
                    l_1281[4]++;
                }
            }
        }
        (*l_1284) = &g_452[0];
    }
    return l_1286[1][0];
}



static int32_t  func_18(int64_t  p_19)
{ 
    int64_t *l_31[7][4] = {{&g_25[0],&g_25[0],&g_25[3],&g_25[0]},{&g_25[0],&g_25[3],&g_25[0],&g_25[0]},{&g_25[0],&g_25[2],&g_25[0],&g_25[0]},{&g_25[0],&g_25[0],&g_25[3],&g_25[2]},{&g_25[2],&g_25[0],&g_25[3],&g_25[0]},{&g_25[0],&g_25[0],&g_25[0],&g_25[3]},{&g_25[0],&g_25[0],&g_25[0],&g_25[0]}};
    int32_t *l_304[5][1];
    struct S1 *l_308[5][6] = {{&g_116,&g_116,&g_309,&g_116,&g_116,&g_309},{&g_116,&g_116,&g_309,&g_116,&g_116,&g_309},{&g_116,&g_116,&g_309,&g_116,&g_116,&g_309},{&g_116,&g_116,&g_309,&g_116,&g_116,&g_309},{&g_116,&g_116,&g_309,&g_116,&g_116,&g_309}};
    int32_t l_351 = 1L;
    int16_t l_409 = (-6L);
    struct S0 *l_432 = (void*)0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_304[i][j] = &g_141.f3;
    }
    if (func_29(l_31[0][2]))
    { 
        int16_t l_315 = 0x093AL;
        int32_t l_317 = (-1L);
        int32_t l_318 = 0xE58A2A1EL;
        int32_t l_320 = 1L;
lbl_305:
        (*g_127) = l_304[3][0];
        for (g_299.f2.f1 = 0; (g_299.f2.f1 >= 0); g_299.f2.f1 -= 1)
        { 
            uint8_t l_321 = 1UL;
            int32_t l_330[6];
            int32_t l_352 = 0x78BD2F8EL;
            int i;
            for (i = 0; i < 6; i++)
                l_330[i] = 0L;
            if (g_299.f2.f5)
                goto lbl_305;
            for (g_116.f4 = 0; (g_116.f4 >= 0); g_116.f4 -= 1)
            { 
                struct S1 *l_306 = &g_299;
                uint64_t *l_313[2][2][1];
                int32_t ****l_314[6][1] = {{&g_134[0][1]},{&g_134[0][1]},{&g_134[0][0]},{&g_134[0][1]},{&g_134[0][1]},{&g_134[0][0]}};
                struct S1 ****l_332 = &g_331;
                struct S1 ****l_333 = (void*)0;
                struct S1 **l_336 = &l_308[2][4];
                struct S1 ***l_335[2][1][2];
                struct S1 ****l_334 = &l_335[0][0][0];
                uint8_t *l_344 = &g_141.f2;
                uint8_t **l_343 = &l_344;
                uint8_t *l_345[1][7] = {{&g_141.f2,&g_141.f2,&l_321,&g_141.f2,&g_141.f2,&l_321,&g_141.f2}};
                int32_t l_350 = 0xC2352658L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_313[i][j][k] = &g_309.f0;
                    }
                }
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_335[i][j][k] = &l_336;
                    }
                }
                (**g_127) = g_92[g_116.f4];
                for (g_167 = 0; (g_167 <= 0); g_167 += 1)
                { 
                    struct S1 **l_307[5];
                    int32_t l_316 = 0x6358AF41L;
                    int32_t l_319 = 1L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_307[i] = &l_306;
                    l_308[2][3] = l_306;
                    (**g_127) = (((4UL == (((void*)0 == g_134[(g_116.f4 + 1)][(g_167 + 1)]) > (1UL && (((+(((((((void*)0 == &g_16[4][0]) , ((l_31[(g_299.f2.f1 + 3)][(g_116.f4 + 1)] == l_313[1][1][0]) , &g_134[(g_116.f4 + 1)][(g_167 + 1)])) != l_314[1][0]) < (-1L)) > 0xD489A5C8L) <= 0x70196E379D1E072DLL)) , 0x44L) ^ g_299.f2.f1)))) , (void*)0) == (void*)0);
                    l_321++;
                    l_330[5] &= (safe_mul_func_int16_t_s_s((0x403EL <= (0UL >= ((((safe_div_func_uint64_t_u_u(((7L & p_19) , g_309.f4), g_116.f6)) > 0UL) >= 0xC752L) <= p_19))), g_141.f4));
                }
                (*l_334) = ((*l_332) = g_331);
                if (((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((l_320 = (65526UL == (((*l_343) = &g_62) != &l_321))) && g_309.f5), (0xA158L & ((((safe_mod_func_uint64_t_u_u(18446744073709551615UL, (p_19 , l_350))) <= p_19) > p_19) <= 0UL)))), 0xB6L)) , l_351))
                { 
                    int32_t **l_353 = &g_128;
                    (*l_353) = func_35(l_352, g_141.f3, p_19);
                }
                else
                { 
                    int i, j;
                    (*g_128) = (l_31[(g_116.f4 + 3)][g_299.f2.f1] == &g_25[0]);
                    l_330[3] &= (**g_127);
                }
            }
            if (g_92[g_299.f2.f1])
                break;
        }
    }
    else
    { 
        uint16_t l_354 = 65526UL;
        int64_t **l_361 = &l_31[6][2];
        int32_t l_388 = (-1L);
        int32_t l_390 = 1L;
        int32_t l_391 = (-1L);
        int32_t l_393 = 0x2434177EL;
        int8_t l_394 = (-10L);
        int32_t l_396 = (-1L);
        int32_t l_397 = 6L;
        int32_t l_398 = 1L;
        int32_t l_401 = (-1L);
        int32_t l_406 = (-1L);
        int32_t l_411 = 0xB0FFAECFL;
        int32_t l_414 = 0x070BCD9AL;
        int32_t l_415 = (-10L);
        int32_t l_416 = 0xADAD2676L;
        int32_t l_419 = 0L;
        struct S1 l_433 = {0UL,0xDA76AF32L,{-4L,0xB34CL,255UL,0x51CE9EC1L,1UL,1L},1UL,0L,0x38L,-2L};
        int32_t l_446[3];
        int i;
        for (i = 0; i < 3; i++)
            l_446[i] = 0x66950D33L;
        --l_354;
lbl_424:
        for (g_309.f4 = 0; (g_309.f4 != 16); g_309.f4 = safe_add_func_int16_t_s_s(g_309.f4, 4))
        { 
            for (g_116.f3 = 0; (g_116.f3 <= 3); g_116.f3 = safe_add_func_uint8_t_u_u(g_116.f3, 9))
            { 
                int64_t ***l_362 = &l_361;
                int32_t l_365 = 0x2612E287L;
                (*l_362) = l_361;
                if ((safe_rshift_func_int8_t_s_u(l_365, 5)))
                { 
                    return (**g_127);
                }
                else
                { 
                    const int32_t * const l_366 = &g_299.f6;
                    const int32_t *l_368[5] = {&g_299.f2.f0,&g_299.f2.f0,&g_299.f2.f0,&g_299.f2.f0,&g_299.f2.f0};
                    const int32_t **l_367 = &l_368[4];
                    int i;
                    (*l_367) = l_366;
                }
                for (g_299.f2.f1 = 0; g_299.f2.f1 < 5; g_299.f2.f1 += 1)
                {
                    for (g_309.f1 = 0; g_309.f1 < 6; g_309.f1 += 1)
                    {
                        l_308[g_299.f2.f1][g_309.f1] = &g_116;
                    }
                }
            }
            (****g_224) = (((safe_div_func_uint16_t_u_u((g_299.f3 != (-2L)), p_19)) <= p_19) == l_354);
        }
        if (l_354)
        { 
            int16_t l_385 = 0x8894L;
            int32_t *l_386 = &g_299.f1;
            int32_t l_389 = 0xCAC4D575L;
            int32_t l_399 = 1L;
            int32_t l_400 = 0x0C252F89L;
            int32_t l_402 = 0xAC3DCB07L;
            int32_t l_405 = 2L;
            int32_t l_408 = 0L;
            int32_t l_410 = 0L;
            for (g_116.f2.f2 = 0; (g_116.f2.f2 < 6); g_116.f2.f2++)
            { 
                int16_t *l_375 = &g_309.f2.f1;
                const struct S1 *l_378 = &g_299;
                const struct S1 **l_377 = &l_378;
                const struct S1 ***l_376 = &l_377;
                struct S1 **l_380[6] = {&l_308[2][3],&l_308[2][3],&l_308[2][3],&l_308[2][3],&l_308[2][3],&l_308[2][3]};
                struct S1 ***l_379 = &l_380[1];
                struct S1 ****l_381[5][6][6] = {{{(void*)0,&l_379,(void*)0,&g_331,&l_379,(void*)0},{&l_379,&l_379,(void*)0,(void*)0,&g_331,&l_379},{(void*)0,&l_379,&g_331,&g_331,&l_379,(void*)0},{&l_379,(void*)0,&g_331,&l_379,&g_331,(void*)0},{(void*)0,(void*)0,(void*)0,&g_331,(void*)0,(void*)0},{(void*)0,(void*)0,&g_331,&l_379,&l_379,(void*)0}},{{&l_379,&g_331,&l_379,&g_331,&l_379,(void*)0},{(void*)0,&g_331,(void*)0,(void*)0,&g_331,&l_379},{&l_379,(void*)0,(void*)0,&g_331,&g_331,&l_379},{(void*)0,&g_331,(void*)0,(void*)0,(void*)0,(void*)0},{&g_331,&l_379,&l_379,&g_331,(void*)0,(void*)0},{(void*)0,(void*)0,&g_331,(void*)0,&l_379,(void*)0}},{{&g_331,(void*)0,(void*)0,&l_379,&l_379,(void*)0},{(void*)0,(void*)0,&g_331,(void*)0,(void*)0,(void*)0},{&g_331,&l_379,&g_331,&l_379,(void*)0,&l_379},{&l_379,&g_331,(void*)0,(void*)0,&g_331,(void*)0},{&g_331,(void*)0,(void*)0,(void*)0,&g_331,&l_379},{&l_379,&g_331,(void*)0,&l_379,&l_379,(void*)0}},{{&g_331,&g_331,&l_379,(void*)0,&l_379,&g_331},{(void*)0,(void*)0,(void*)0,&g_331,(void*)0,(void*)0},{&l_379,&l_379,(void*)0,&l_379,&g_331,(void*)0},{(void*)0,&l_379,(void*)0,&l_379,(void*)0,&l_379},{&l_379,(void*)0,&l_379,(void*)0,(void*)0,&g_331},{&l_379,(void*)0,&l_379,&l_379,&g_331,(void*)0}},{{&g_331,(void*)0,(void*)0,&l_379,(void*)0,&g_331},{&g_331,(void*)0,&g_331,&g_331,(void*)0,&g_331},{&g_331,&l_379,&l_379,&g_331,&g_331,(void*)0},{&g_331,&l_379,&l_379,(void*)0,(void*)0,(void*)0},{&g_331,(void*)0,(void*)0,&g_331,(void*)0,(void*)0},{&g_331,&g_331,&g_331,&g_331,&g_331,&l_379}}};
                int32_t l_384[2];
                const struct S0 *l_425[6] = {&g_104[0][4][0],&g_104[0][4][0],(void*)0,&g_104[0][4][0],&g_104[0][4][0],(void*)0};
                const struct S0 **l_426 = (void*)0;
                const struct S0 **l_427 = &l_425[0];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_384[i] = (-1L);
                if ((0xD7L | (safe_sub_func_uint64_t_u_u((g_116.f2.f3 > ((((*l_375) = (-10L)) , l_376) != (g_331 = l_379))), ((safe_mul_func_uint8_t_u_u((g_116.f2.f1 != p_19), l_384[1])) , g_141.f5)))))
                { 
                    return l_385;
                }
                else
                { 
                    int32_t l_392 = 0xA3F09172L;
                    int32_t l_395 = 0x291AFECFL;
                    int32_t l_403 = (-1L);
                    int32_t l_404 = 0xA827954CL;
                    int32_t l_407 = 0x11CD14D9L;
                    int32_t l_412 = (-1L);
                    int32_t l_413 = (-3L);
                    int32_t l_417 = 0x0972DFB7L;
                    int32_t l_418 = 0x47477040L;
                    int32_t l_420 = 0x4B5F37C1L;
                    (***g_224) = l_386;
                    --g_421;
                    (***g_224) = (*g_127);
                }
                if (g_299.f1)
                    goto lbl_424;
                if (l_411)
                    break;
                (*l_427) = l_425[5];
            }
            (*g_127) = l_304[3][0];
        }
        else
        { 
            uint32_t l_434 = 18446744073709551615UL;
            int32_t l_435 = 0x68ED9DB8L;
            const union U2 *l_451 = &g_452[0];
            (**g_127) &= (p_19 & (safe_lshift_func_uint8_t_u_s(0xAAL, 3)));
            l_435 = ((*g_128) = ((safe_div_func_uint64_t_u_u(((g_104[0][4][0].f4 , l_432) == (g_283 = l_432)), (g_25[4] &= 1L))) > (l_433 , l_434)));
            for (g_62 = 13; (g_62 <= 35); g_62 = safe_add_func_uint32_t_u_u(g_62, 5))
            { 
                int64_t *l_445 = &g_25[2];
                struct S0 l_447 = {-1L,0xD7BCL,0x39L,0xE5C0685FL,0xBD42B83717994858LL,0x8626L};
                (*g_127) = l_304[3][0];
                l_397 &= ((****g_224) = l_434);
                if ((safe_add_func_int8_t_s_s(((g_299.f2.f3 >= ((void*)0 == &g_25[0])) == g_116.f2.f4), 0x5DL)))
                { 
                    union U2 l_444[7][1] = {{{-1L}},{{0L}},{{-1L}},{{0L}},{{-1L}},{{0L}},{{-1L}}};
                    const union U2 **l_450[4][7] = {{&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3]},{&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6]},{&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3],&g_448[0][3]},{&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6],&g_448[0][6]}};
                    int8_t *l_462 = &g_387[1][0][2];
                    int i, j;
                    (*g_128) |= (((g_440 == &g_441) | p_19) <= ((safe_lshift_func_int8_t_s_u(g_309.f3, 1)) && ((l_444[4][0] , func_45(l_445, (l_446[0] , l_447), l_444[4][0].f1, (*g_127), (*g_440))) , p_19)));
                    (***g_224) = &l_401;
                    l_451 = g_448[0][6];
                    (**g_127) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xFE72L, (safe_sub_func_uint32_t_u_u(g_299.f2.f2, (~(safe_add_func_int32_t_s_s(((g_116.f2.f5 != ((((0L ^ (g_116.f5 = ((*l_462) = 0L))) , p_19) | (g_309.f6 , l_434)) || p_19)) != 0x8698L), g_299.f1))))))), g_299.f3));
                }
                else
                { 
                    return (****g_224);
                }
                if (l_435)
                    continue;
            }
            l_435 = p_19;
        }
    }
    return p_19;
}



static int32_t  func_29(int64_t * p_30)
{ 
    int64_t *l_54 = &g_25[0];
    int32_t l_59[6][5] = {{0L,(-1L),3L,(-1L),0L},{(-9L),(-6L),0L,0L,0L},{0L,(-6L),(-9L),(-9L),(-6L)},{3L,(-1L),0L,(-6L),0L},{(-1L),(-9L),0L,1L,0L},{0L,0L,(-9L),3L,7L}};
    int32_t l_291 = 0x56E3BA67L;
    union U2 l_292 = {0xE6AF7480214DECFFLL};
    int32_t *l_300[4][7];
    uint16_t l_301[3];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_300[i][j] = &g_32;
    }
    for (i = 0; i < 3; i++)
        l_301[i] = 1UL;
    for (g_32 = 24; (g_32 != (-4)); g_32--)
    { 
        uint32_t l_60 = 18446744073709551615UL;
        uint8_t *l_61[5][7] = {{&g_62,&g_62,&g_62,(void*)0,&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62,&g_62,(void*)0,&g_62,&g_62},{&g_62,&g_62,(void*)0,&g_62,&g_62,&g_62,(void*)0},{(void*)0,&g_62,&g_62,&g_62,&g_62,(void*)0,&g_62},{&g_62,(void*)0,&g_62,&g_62,&g_62,(void*)0,&g_62}};
        int32_t *l_63 = &l_59[2][4];
        int64_t *l_105 = (void*)0;
        int32_t **l_287 = &l_63;
        int32_t *l_290[4][6] = {{&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1},{&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1},{&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1},{&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1,&g_116.f1}};
        int i, j;
        (*l_287) = func_35(g_32, (safe_lshift_func_uint8_t_u_u(0x2FL, (safe_mod_func_uint64_t_u_u((((0x50L || ((safe_add_func_int8_t_s_s(((func_45(p_30, func_51((g_62 ^= (((void*)0 != l_54) , (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_59[2][4], l_60)), 7)))), l_63), g_16[6][0], &g_32, l_105) , (*l_63)) , g_141.f0), 0x64L)) , 1L)) , g_165) | g_32), g_104[0][4][0].f1)))), g_16[2][0]);
        l_291 = (safe_mul_func_uint8_t_u_u(g_141.f2, (l_63 != (void*)0)));
    }
    l_291 = (g_165 == (-1L));
    (**g_127) ^= (g_104[0][4][0].f4 && (((l_292 , ((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((8UL >= ((safe_lshift_func_uint16_t_u_u(0x5269L, (((g_299 , (((((-2L) || (((l_291 < l_292.f0) <= l_291) || g_141.f1)) , 1L) < l_59[2][4]) || l_292.f1)) & (-9L)) > g_92[0]))) & 0xF46FL)), g_62)) | l_59[3][0]), 0x5CL)) == g_299.f4)) > l_59[1][0]) > 8UL));
    l_301[0]++;
    return (*g_128);
}



static int32_t * const  func_35(uint16_t  p_36, int32_t  p_37, int64_t  p_38)
{ 
    return (*g_127);
}



static const struct S1  func_45(int64_t * p_46, struct S0  p_47, int16_t  p_48, int32_t * p_49, int64_t * p_50)
{ 
    int16_t l_110 = 1L;
    int32_t *l_197[3];
    int32_t l_206 = (-1L);
    int32_t l_207 = (-1L);
    struct S0 *l_217 = &g_116.f2;
    struct S0 ** const l_216[7][6] = {{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217},{&l_217,&l_217,&l_217,&l_217,&l_217,&l_217}};
    int32_t ****l_221 = &g_134[0][1];
    int32_t *l_227 = &g_116.f1;
    uint32_t l_258 = 1UL;
    int32_t l_262 = 0L;
    uint64_t *l_273 = &g_104[0][4][0].f4;
    uint64_t *l_276 = &g_141.f4;
    int64_t *l_281 = &g_25[0];
    const struct S1 l_286 = {1UL,-1L,{5L,1L,0x5CL,0xE5E803BCL,0xA1AD5220474BB143LL,-1L},0x61L,-9L,0xEEL,0x8A54BACAL};
    int i, j;
    for (i = 0; i < 3; i++)
        l_197[i] = &g_104[0][4][0].f3;
    for (p_47.f5 = 0; (p_47.f5 <= 21); p_47.f5 = safe_add_func_int64_t_s_s(p_47.f5, 9))
    { 
        uint32_t l_150[4][4][7] = {{{0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L},{4UL,4UL,0xD8F0E967L,18446744073709551615UL,0xD8F0E967L,4UL,4UL},{4UL,0xD8F0E967L,18446744073709551615UL,0xD8F0E967L,4UL,4UL,0xD8F0E967L},{0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL}},{{0xD8F0E967L,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,0xD8F0E967L,18446744073709551611UL},{0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L},{4UL,4UL,0xD8F0E967L,18446744073709551615UL,0xD8F0E967L,4UL,4UL},{4UL,0xD8F0E967L,18446744073709551615UL,0xD8F0E967L,4UL,4UL,0xD8F0E967L}},{{0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL},{0xD8F0E967L,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,0xD8F0E967L,18446744073709551611UL},{0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L},{4UL,4UL,0xD8F0E967L,18446744073709551615UL,0xD8F0E967L,4UL,4UL}},{{4UL,0xD8F0E967L,18446744073709551615UL,0xD8F0E967L,4UL,4UL,0xD8F0E967L},{0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL},{0xD8F0E967L,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,0xD8F0E967L,18446744073709551611UL},{0x318B2E7EL,0xD8F0E967L,0xD8F0E967L,0x318B2E7EL,18446744073709551611UL,0x318B2E7EL,0xD8F0E967L}}};
        const int64_t l_151 = 0xDFEB7701912ACE46LL;
        const int32_t *l_200 = &g_71[0];
        const int32_t **l_199 = &l_200;
        const int32_t *** const l_198 = &l_199;
        struct S0 *l_215 = (void*)0;
        struct S0 **l_214 = &l_215;
        int i, j, k;
    }
    for (l_110 = 0; (l_110 <= 0); l_110 += 1)
    { 
        uint64_t *l_231 = (void*)0;
        uint64_t *l_232 = &g_116.f0;
        int8_t *l_246 = &g_116.f5;
        uint16_t l_247 = 0xEEAEL;
        const int16_t *l_248 = (void*)0;
        int32_t l_251 = 0L;
        int32_t l_253 = 0x9B792634L;
        int32_t l_254 = 0x5CC73E7CL;
        int8_t l_263 = 4L;
        const struct S1 l_267 = {0x4C9B7B54FFEA5284LL,0x32C901CCL,{0x87E39698L,-2L,0x0AL,0xB19DD57DL,0x21A587B83316E081LL,0x9A2DL},0xD2L,0x7D5BE434L,0x54L,-2L};
        int i;
        if (((++(*l_232)) == ((g_71[l_110] | p_47.f1) && (((((p_47.f5 & p_47.f4) & (safe_lshift_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((((*l_246) = (((g_116.f2.f3 < (safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((((~0x87L) , &g_62) != &g_62) , g_71[l_110]), (*l_227))), g_116.f2.f4))) <= g_141.f2) | g_104[0][4][0].f0)) < l_247), (*l_227))), p_48)) , 0x01B76340L) && 0x686C5DACL) , &p_48) == l_248), 7))) & g_165) < (-1L)) >= (-1L)))))
        { 
            int32_t l_249 = 0x4F89951AL;
            int32_t l_250 = 0x790A60CBL;
            int32_t l_252 = (-3L);
            int32_t l_255 = 6L;
            int32_t l_256 = 5L;
            int32_t l_257[7] = {0x0EC4D18DL,(-4L),0x0EC4D18DL,0x0EC4D18DL,(-4L),0x0EC4D18DL,0x0EC4D18DL};
            int16_t l_261[1];
            uint32_t l_264 = 0UL;
            int i;
            for (i = 0; i < 1; i++)
                l_261[i] = 0x7DF8L;
            l_258--;
            if (l_261[0])
                break;
            l_264--;
            return l_267;
        }
        else
        { 
            for (g_141.f1 = 0; (g_141.f1 <= 0); g_141.f1 += 1)
            { 
                uint8_t l_268 = 0x64L;
                l_268++;
            }
        }
    }
    p_47.f3 &= ((safe_sub_func_uint64_t_u_u(((*l_276) = (++(*l_273))), (safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(p_47.f1, (((g_116.f5 = (((*l_281) = g_141.f1) != (((g_282 = g_282) != g_283) && ((safe_add_func_int16_t_s_s(((0x1B8FEC5AEE3F4320LL <= ((*l_227) ^= (&g_282 != &g_283))) , (-1L)), g_116.f2.f0)) <= p_47.f2)))) & 0xFCL) >= 0L))) & 0xDE0F676D8D1D656DLL) != (-7L)), 1L)))) | p_47.f4);
    return l_286;
}



static struct S0  func_51(uint8_t  p_52, int32_t * p_53)
{ 
    int32_t *l_69 = (void*)0;
    int32_t *l_70 = &g_71[0];
    int32_t *l_72[2];
    int32_t l_73[3];
    int64_t l_99 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_72[i] = &g_71[0];
    for (i = 0; i < 3; i++)
        l_73[i] = (-1L);
    (*p_53) = (((+(0UL & (((((safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((l_69 != &g_32) > (l_69 == &g_32)), (((void*)0 != &g_62) == 0x4527F84FF3FA32FBLL))) < g_25[0]), p_52)) , p_52) , l_69) != (void*)0) == p_52))) ^ 2L) || g_16[2][0]);
    if (p_52)
        goto lbl_100;
    g_74--;
lbl_100:
    for (g_74 = 0; (g_74 < 7); ++g_74)
    { 
        uint32_t l_79 = 18446744073709551615UL;
        int64_t *l_90 = &g_25[2];
        uint16_t *l_91 = &g_92[0];
        uint32_t *l_93 = (void*)0;
        uint32_t *l_94 = &g_95;
        l_79--;
        (*p_53) = (safe_rshift_func_int16_t_s_u(((p_52 , (((*l_70) = (safe_lshift_func_int16_t_s_u(p_52, ((*l_91) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_90 == (void*)0), 14)), 1UL)))))) | ((++(*l_94)) > (((safe_unary_minus_func_int32_t_s((&l_73[1] != l_93))) ^ g_62) , p_52)))) | l_99), p_52));
    }
    for (g_62 = 29; (g_62 == 43); ++g_62)
    { 
        int32_t **l_103 = &l_72[1];
        (*l_103) = (void*)0;
    }
    return g_104[0][4][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_16[i][j], "g_16[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_104[i][j][k].f0, "g_104[i][j][k].f0", print_hash_value);
                transparent_crc(g_104[i][j][k].f1, "g_104[i][j][k].f1", print_hash_value);
                transparent_crc(g_104[i][j][k].f2, "g_104[i][j][k].f2", print_hash_value);
                transparent_crc(g_104[i][j][k].f3, "g_104[i][j][k].f3", print_hash_value);
                transparent_crc(g_104[i][j][k].f4, "g_104[i][j][k].f4", print_hash_value);
                transparent_crc(g_104[i][j][k].f5, "g_104[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2.f0, "g_116.f2.f0", print_hash_value);
    transparent_crc(g_116.f2.f1, "g_116.f2.f1", print_hash_value);
    transparent_crc(g_116.f2.f2, "g_116.f2.f2", print_hash_value);
    transparent_crc(g_116.f2.f3, "g_116.f2.f3", print_hash_value);
    transparent_crc(g_116.f2.f4, "g_116.f2.f4", print_hash_value);
    transparent_crc(g_116.f2.f5, "g_116.f2.f5", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_116.f4, "g_116.f4", print_hash_value);
    transparent_crc(g_116.f5, "g_116.f5", print_hash_value);
    transparent_crc(g_116.f6, "g_116.f6", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1, "g_141.f1", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_141.f3, "g_141.f3", print_hash_value);
    transparent_crc(g_141.f4, "g_141.f4", print_hash_value);
    transparent_crc(g_141.f5, "g_141.f5", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_299.f0, "g_299.f0", print_hash_value);
    transparent_crc(g_299.f1, "g_299.f1", print_hash_value);
    transparent_crc(g_299.f2.f0, "g_299.f2.f0", print_hash_value);
    transparent_crc(g_299.f2.f1, "g_299.f2.f1", print_hash_value);
    transparent_crc(g_299.f2.f2, "g_299.f2.f2", print_hash_value);
    transparent_crc(g_299.f2.f3, "g_299.f2.f3", print_hash_value);
    transparent_crc(g_299.f2.f4, "g_299.f2.f4", print_hash_value);
    transparent_crc(g_299.f2.f5, "g_299.f2.f5", print_hash_value);
    transparent_crc(g_299.f3, "g_299.f3", print_hash_value);
    transparent_crc(g_299.f4, "g_299.f4", print_hash_value);
    transparent_crc(g_299.f5, "g_299.f5", print_hash_value);
    transparent_crc(g_299.f6, "g_299.f6", print_hash_value);
    transparent_crc(g_309.f0, "g_309.f0", print_hash_value);
    transparent_crc(g_309.f1, "g_309.f1", print_hash_value);
    transparent_crc(g_309.f2.f0, "g_309.f2.f0", print_hash_value);
    transparent_crc(g_309.f2.f1, "g_309.f2.f1", print_hash_value);
    transparent_crc(g_309.f2.f2, "g_309.f2.f2", print_hash_value);
    transparent_crc(g_309.f2.f3, "g_309.f2.f3", print_hash_value);
    transparent_crc(g_309.f2.f4, "g_309.f2.f4", print_hash_value);
    transparent_crc(g_309.f2.f5, "g_309.f2.f5", print_hash_value);
    transparent_crc(g_309.f3, "g_309.f3", print_hash_value);
    transparent_crc(g_309.f4, "g_309.f4", print_hash_value);
    transparent_crc(g_309.f5, "g_309.f5", print_hash_value);
    transparent_crc(g_309.f6, "g_309.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_387[i][j][k], "g_387[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_449.f0, "g_449.f0", print_hash_value);
    transparent_crc(g_449.f1, "g_449.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_452[i].f0, "g_452[i].f0", print_hash_value);
        transparent_crc(g_452[i].f1, "g_452[i].f1", print_hash_value);

    }
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_571.f0, "g_571.f0", print_hash_value);
    transparent_crc(g_571.f1, "g_571.f1", print_hash_value);
    transparent_crc(g_571.f2.f0, "g_571.f2.f0", print_hash_value);
    transparent_crc(g_571.f2.f1, "g_571.f2.f1", print_hash_value);
    transparent_crc(g_571.f2.f2, "g_571.f2.f2", print_hash_value);
    transparent_crc(g_571.f2.f3, "g_571.f2.f3", print_hash_value);
    transparent_crc(g_571.f2.f4, "g_571.f2.f4", print_hash_value);
    transparent_crc(g_571.f2.f5, "g_571.f2.f5", print_hash_value);
    transparent_crc(g_571.f3, "g_571.f3", print_hash_value);
    transparent_crc(g_571.f4, "g_571.f4", print_hash_value);
    transparent_crc(g_571.f5, "g_571.f5", print_hash_value);
    transparent_crc(g_571.f6, "g_571.f6", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_741.f0, "g_741.f0", print_hash_value);
    transparent_crc(g_741.f1, "g_741.f1", print_hash_value);
    transparent_crc(g_741.f2.f0, "g_741.f2.f0", print_hash_value);
    transparent_crc(g_741.f2.f1, "g_741.f2.f1", print_hash_value);
    transparent_crc(g_741.f2.f2, "g_741.f2.f2", print_hash_value);
    transparent_crc(g_741.f2.f3, "g_741.f2.f3", print_hash_value);
    transparent_crc(g_741.f2.f4, "g_741.f2.f4", print_hash_value);
    transparent_crc(g_741.f2.f5, "g_741.f2.f5", print_hash_value);
    transparent_crc(g_741.f3, "g_741.f3", print_hash_value);
    transparent_crc(g_741.f4, "g_741.f4", print_hash_value);
    transparent_crc(g_741.f5, "g_741.f5", print_hash_value);
    transparent_crc(g_741.f6, "g_741.f6", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_912.f1, "g_912.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_964[i][j], "g_964[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_984[i][j], "g_984[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1387, "g_1387", print_hash_value);
    transparent_crc(g_1515.f0, "g_1515.f0", print_hash_value);
    transparent_crc(g_1515.f1, "g_1515.f1", print_hash_value);
    transparent_crc(g_1522, "g_1522", print_hash_value);
    transparent_crc(g_1565, "g_1565", print_hash_value);
    transparent_crc(g_1625.f0, "g_1625.f0", print_hash_value);
    transparent_crc(g_1625.f1, "g_1625.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
