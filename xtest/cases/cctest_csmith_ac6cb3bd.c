// SPDX-License-Identifier: MIT
// cctest_csmith_ac6cb3bd.c --- cctest case csmith_ac6cb3bd (csmith seed 2892805053)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf8d353b8 */
/* @exp_ticks 0x369c */

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

// Options:   -s 2892805053 -o /tmp/csmith_gen_w0t_m07y/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   int32_t  f5;
};

union U1 {
   uint8_t  f0;
};


static int32_t g_11[3] = {(-5L),(-5L),(-5L)};
static int64_t g_23 = 0L;
static uint64_t g_24 = 6UL;
static uint32_t g_31[4] = {0xA9E1A0E1L,0xA9E1A0E1L,0xA9E1A0E1L,0xA9E1A0E1L};
static int8_t g_37 = 0x09L;
static int16_t g_38 = 0x69FDL;
static struct S0 g_40 = {1L,1L,0xD05B3B6AL,7UL,0x8CB0B9D6L,0x40C41AB7L};
static struct S0 g_41 = {-1L,1L,0x47BEBA6EL,4294967295UL,1UL,0xB015869BL};
static uint32_t g_46[1] = {0x98557C7BL};
static uint32_t g_75 = 18446744073709551615UL;
static union U1 g_88[3] = {{2UL},{2UL},{2UL}};
static int32_t g_89 = 0x86E789AEL;



static struct S0  func_1(void);
static int8_t  func_6(uint16_t  p_7, int32_t  p_8, uint64_t  p_9, struct S0  p_10);
static uint64_t  func_12(int32_t  p_13, uint64_t  p_14);
static uint64_t  func_16(uint32_t  p_17);




static struct S0  func_1(void)
{ 
    uint64_t l_18 = 0x5734CB441791E6E4LL;
    uint32_t l_45 = 0xB773B032L;
    int32_t l_47 = 0xB10DA9BEL;
    uint8_t l_48 = 1UL;
    struct S0 l_55[4][5][4] = {{{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}}},{{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}}},{{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}}},{{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}},{{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L},{0x9E648328L,0xBF18921B67715EE0LL,4294967289UL,4294967293UL,4294967295UL,0x3E099908L},{-1L,6L,4294967295UL,0xA6FF1AB1L,3UL,-8L}}}};
    int i, j, k;
    g_41 = ((((safe_sub_func_int16_t_s_s((((g_46[0] ^= (l_45 = (((safe_div_func_int8_t_s_s(func_6(g_11[1], g_11[1], (func_12((+0L), func_16((g_11[0] ^ l_18))) && l_18), g_41), g_41.f1)) != l_18) != 0xF1L))) & g_41.f4) != l_18), l_18)) | g_41.f3) && 0UL) , g_41);
    if (((l_47 = (-2L)) <= ((g_40.f2 >= l_48) || (safe_mul_func_int16_t_s_s((-6L), l_48)))))
    { 
        struct S0 l_54[2] = {{0x8D803B56L,0L,0x2727C38DL,0xE6FA5B36L,0x76A26825L,0L},{0x8D803B56L,0L,0x2727C38DL,0xE6FA5B36L,0x76A26825L,0L}};
        int32_t l_90 = (-7L);
        int32_t l_127[1][5][2] = {{{(-1L),1L},{1L,(-1L)},{1L,1L},{(-1L),1L},{1L,(-1L)}}};
        int i, j, k;
        for (g_41.f2 = 0; (g_41.f2 <= 3); g_41.f2 += 1)
        { 
            struct S0 l_72 = {0x7B948F0CL,0x08EF1BB21A5A11BALL,0xC28541D7L,4294967286UL,4294967293UL,0xCD8C2604L};
            int32_t l_74 = 0x376B2687L;
            int i;
            if ((~(safe_lshift_func_int8_t_s_u(g_31[g_41.f2], 3))))
            { 
                g_40 = l_54[0];
                return l_55[0][2][3];
            }
            else
            { 
                uint16_t l_56 = 3UL;
                g_40.f0 = l_56;
                g_41.f0 = (safe_unary_minus_func_uint8_t_u((0L != ((1UL >= ((safe_sub_func_int32_t_s_s((0x97L >= 255UL), g_40.f3)) < 65533UL)) | 0x52L))));
            }
            g_40.f0 = ((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((((g_11[2] = (safe_div_func_int8_t_s_s(((0L != (((l_55[0][2][3].f4 , (255UL ^ 0xECL)) || l_55[0][2][3].f5) != g_31[g_41.f2])) >= 0x3B14L), g_38))) , g_37) > g_40.f0) && (-1L)), g_31[1])), 2)) <= g_40.f2) || 0xC347B9C4F6A9ED74LL), 0x42L)) & 0x0DL);
            if (l_54[0].f0)
            { 
                int64_t l_70 = 2L;
                int32_t l_71 = 0x0FDB64DAL;
                l_71 = l_70;
                return l_72;
            }
            else
            { 
                int64_t l_73 = 0xA62F8029A732090DLL;
                ++g_75;
            }
        }
        for (g_40.f5 = 0; (g_40.f5 >= 18); g_40.f5 = safe_add_func_uint64_t_u_u(g_40.f5, 7))
        { 
            uint64_t l_101 = 0x719CE8E1B6261DBCLL;
            int32_t l_121 = 0xFB5F1427L;
            l_55[0][2][3].f0 &= (g_41 , (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((g_89 = (l_54[0].f2 == ((safe_sub_func_int16_t_s_s((-3L), ((g_11[1] &= (g_88[2] , 0x03A3F672L)) , 0x5EC2L))) > 0L))) | g_40.f3), l_90)), g_40.f3)));
            if ((safe_sub_func_int32_t_s_s((g_89 = ((~(safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((~(((safe_rshift_func_uint8_t_u_s(((l_101 <= ((safe_lshift_func_uint16_t_u_s((l_55[0][2][3].f3 == ((0xB863L >= 0x4309L) > 0x0C0AAE426BEBBADELL)), l_55[0][2][3].f0)) ^ 6UL)) == g_40.f5), 3)) , g_23) & g_40.f2)), 14)), g_41.f5))) > 0xB8L)), g_24)))
            { 
                return l_54[1];
            }
            else
            { 
                int32_t l_116[5];
                int32_t l_122 = (-3L);
                int32_t l_123 = 8L;
                int i;
                for (i = 0; i < 5; i++)
                    l_116[i] = 0L;
                l_123 = (!(4294967295UL != (safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((~(((safe_rshift_func_uint8_t_u_u((g_41.f1 | ((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_116[4], ((safe_div_func_int16_t_s_s((l_122 = ((safe_add_func_uint8_t_u_u(((((l_121 ^= l_55[0][2][3].f1) , 0x84996A26L) >= 0L) > 4L), 2L)) , 0xD0F7L)), g_40.f4)) <= g_23))), 3)) , 0x1AB325749A0BCAFDLL)), 0)) > l_116[2]) > 0x2C58L)) > g_75), g_40.f1)) & l_101), l_55[0][2][3].f0))));
                l_54[0].f0 = (l_47 < (safe_div_func_int64_t_s_s(0x66AA345BFC952546LL, (l_127[0][4][0] |= (!(l_55[0][2][3].f0 ^= 0x43767A3BL))))));
            }
        }
    }
    else
    { 
        l_55[0][2][3].f0 = g_40.f0;
    }
    return g_40;
}



static int8_t  func_6(uint16_t  p_7, int32_t  p_8, uint64_t  p_9, struct S0  p_10)
{ 
    struct S0 l_44[2] = {{0L,1L,0x9F82A416L,0xA9717E5EL,1UL,0x453F201FL},{0L,1L,0x9F82A416L,0xA9717E5EL,1UL,0x453F201FL}};
    int i;
    for (p_10.f3 = 0; (p_10.f3 < 4); ++p_10.f3)
    { 
        if (g_40.f1)
            break;
        g_41.f0 |= (g_41.f4 | p_7);
    }
    l_44[1] = g_41;
    return g_24;
}



static uint64_t  func_12(int32_t  p_13, uint64_t  p_14)
{ 
    int8_t l_36 = 0xCBL;
    struct S0 l_39 = {1L,0x1717C264F89C8946LL,0x8AEA381EL,0UL,0x5925F8A4L,-1L};
    g_38 = (g_37 = (l_36 = g_24));
    g_40 = l_39;
    return g_40.f0;
}



static uint64_t  func_16(uint32_t  p_17)
{ 
    int64_t l_29[1][1];
    int32_t l_30[5];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_29[i][j] = 0x2955F1BB1300CA3CLL;
    }
    for (i = 0; i < 5; i++)
        l_30[i] = 0x4ABF0A64L;
    l_30[1] = ((safe_add_func_uint8_t_u_u((g_24 = (g_23 = (safe_lshift_func_uint16_t_u_u(0x51C8L, 9)))), (safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(p_17, (g_31[1]++))) > (safe_rshift_func_int16_t_s_u(0xCE10L, (((g_11[1] == g_11[1]) || 65529UL) || g_11[1])))), l_30[0])))) != l_30[4]);
    return g_11[1];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);

    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_40.f3, "g_40.f3", print_hash_value);
    transparent_crc(g_40.f4, "g_40.f4", print_hash_value);
    transparent_crc(g_40.f5, "g_40.f5", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_41.f5, "g_41.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_88[i].f0, "g_88[i].f0", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
